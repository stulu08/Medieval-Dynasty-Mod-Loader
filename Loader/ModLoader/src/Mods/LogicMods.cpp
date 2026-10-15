#include "Core.h"
#include "LogicMods.h"

#include "Mods/Registry.h"
#include "Mods/ModLoading.h"
#include "MDML/CoreMod.h"
#include "MDML/Mod.h"
#include "MDML/IniFile.h"
#include "Runtime/GameHooks.h"

#include "UE4.h"
#include "Engine.hpp"
#include "EngineAddresses.h"

namespace mdml::mods {
	namespace {
		bool IsProcessInternalsHooked = false;

		struct PrintStringParams
		{
			UE4::FString Message;
		};

		struct GetPersistentObjectParams
		{
			UE4::FString ModName;
		};

		// "dir\file.uasset" under Content/Mods -> "/Game/Mods/dir/file.file_C" (the class path LoadClassFromString expects)
		std::wstring BuildAssetPath(const std::filesystem::path& file) {
			const std::string name = file.stem().string();
			const std::filesystem::path relpath = std::filesystem::relative(file.parent_path(), CoreMod::GetModsFolder());
			std::string path = "/Game/Mods/" + relpath.string() + "/" + name + "." + name + "_C";
			std::wstring wide(path.length(), 0);
			//when we are here we can also repair the path
			std::transform(path.begin(), path.end(), wide.begin(), [](char c) -> wchar_t { return c == '\\' ? L'/' : (wchar_t)c; });
			return wide;
		}

		std::string Narrow(const std::wstring& text) {
			std::string narrow(text.length(), 0);
			std::transform(text.begin(), text.end(), narrow.begin(), [](wchar_t c) -> char { return (char)c; });
			return narrow;
		}

		std::wstring Widen(const std::string& text) {
			std::wstring wide(text.length(), 0);
			std::transform(text.begin(), text.end(), wide.begin(), [](char c) -> wchar_t { return (wchar_t)c; });
			return wide;
		}

		// Phase 3 for one mod: turns the final [Blueprint] settings into the asset paths the spawn uses.
		void RegisterBlueprint(Mod& mod, BlueprintMod& blueprint) {
			const std::string& modName = mod.Info().Name;
			blueprint.Registered = false;
			if (!blueprint.Enabled)
				return;
			// An empty Actor is an asset-only mod: nothing to spawn.
			if (blueprint.ActorFile.empty()) {
				Log::Info_MDML("No actor found for {0}", modName);
				return;
			}
			const std::filesystem::path actor = std::filesystem::path(mod.Info().Path) / blueprint.ActorFile;
			if (!std::filesystem::exists(actor)) {
				Log::Warn_MDML("Could not find: {0}", actor.string());
				return;
			}
			blueprint.ActorPath = BuildAssetPath(actor);
			blueprint.PersistentObjectPath.clear();
			if (!blueprint.PersistentFile.empty()) {
				const std::filesystem::path persistent = std::filesystem::path(mod.Info().Path) / blueprint.PersistentFile;
				if (!std::filesystem::exists(persistent)) {
					Log::Warn_MDML("Could not find: {0}", persistent.string());
					return;
				}
				blueprint.PersistentObjectPath = BuildAssetPath(persistent);
				Log::Info_MDML("Registered Persistent Mod Object {1} for {0}", modName, Narrow(blueprint.PersistentObjectPath));
			}
			Log::Info_MDML("Registered Mod Actor {1} for {0}", modName, Narrow(blueprint.ActorPath));
			blueprint.Registered = true;
		}
	}

	void RegisterBlueprintMods() {
		SetPhase(LoadPhase::Blueprint);
		for (auto& mod : Registry::Get().Mods) {
			if (BlueprintMod* blueprint = mod->Blueprint())
				RegisterBlueprint(*mod, *blueprint);
		}
		SetPhase(LoadPhase::Loaded);
	}

	void SpawnLogicMods() {
		for (auto& mod : Registry::Get().Mods) {
			if (BlueprintMod* blueprint = mod->Blueprint(); blueprint && blueprint->Registered)
				CreateMod(*mod, *blueprint);
		}
		Log::Info_UML("Finished Spawning Mods");
	}

	void CreateMod(Mod& mod, BlueprintMod& blueprint) {
		if (blueprint.Enabled && mdml::Addresses.StaticLoadObject)
		{
			const std::string& str = mod.Info().Name;
			UE4::UClass* ModObject = UE4::UClass::LoadClassFromString(blueprint.ActorPath.c_str(), false);
			if (ModObject) {
				// UE4::SpawnActor (engine core) = UWorld::SpawnActor in GWorld. The UML-era deferred-spawn branch
				// (IsUsingDeferedSpawn -> BeginDeferredActorSpawnFromClass) is gone.
				UE4::AActor* ModActor = UE4::SpawnActor(ModObject, UE4::FTransform(UE4::FVector(0,0,0)));
				if (ModActor)
				{
					if (!IsProcessInternalsHooked)
					{
						// ProcessInternals comes from the PDB or the [FunctionInfo] ProcessInternal pattern (EngineAddresses.cpp). The UML-era
						// fallback that took the Func pointer of the mod actor's PostBeginPlay/ModMenuButtonPressed
						// (IsUsing4_22) is gone.
						IsProcessInternalsHooked = true;
						if (mdml::Addresses.ProcessInternals)
							runtime::InstallScriptFunctionHook();
						else
							Log::Warn_UML("ProcessBlueprintFunctions could not be located! Mod Loader Functionality Will be Limited!");
					}

					blueprint.ActorInstance = ModActor;
					if (!blueprint.WasInitialized)
					{
						// Name, Author, Description and Version come from [Mod] of mod.ini now (no more ModAuthor & co. variables).
						blueprint.ContainsButton = ModActor->DoesObjectContainFunction("ModMenuButtonPressed");
						UE4::UClass* ModObjectInstanceClass = UE4::UClass::LoadClassFromString(blueprint.PersistentObjectPath.c_str(), false);
						if (ModObjectInstanceClass)	// Check if ModInstanceObject Exists
						{
							blueprint.PersistentInstance = UE4::UObject::StaticConstructObject_Internal(ModObjectInstanceClass, (UE4::UObject*)UE4::UGameplayStatics::GetGameInstance(UE4::GetWorld()), "", 0, UE4::EInternalObjectFlags::GarbageCollectionKeepFlags, nullptr, false, nullptr, false);
						}
						blueprint.WasInitialized = true;
					}
					ModActor->CallFunctionByNameWithArguments(L"PreBeginPlay", nullptr, NULL, true);
					Log::Info_UML("Successfully Loaded {0}", str.c_str());
				}
			}
			else
			{
				Log::Info_UML("Could not locate ModActor for {0}", str.c_str());
			}
		}
	}

	void CleanUpMods() {
		for (auto& mod : Registry::Get().Mods)
		{
			BlueprintMod* blueprint = mod->Blueprint();
			if (!blueprint)
				continue;
			UE4::AActor* CurrentModActor = blueprint->ActorInstance;
			if (CurrentModActor)
			{
				if (CurrentModActor->IsA(UE4::AActor::StaticClass()))
				{
					CurrentModActor->CallFunctionByNameWithArguments(L"ModCleanUp", nullptr, NULL, true);
				}
			}

			blueprint->ActorInstance = nullptr;
			blueprint->ModButtons.clear();
		}
	}

	void PostBeginPlayLogicMods() {
		for (auto& mod : Registry::Get().Mods)
		{
			BlueprintMod* blueprint = mod->Blueprint();
			if (!blueprint)
				continue;
			UE4::AActor* CurrentModActor = blueprint->ActorInstance;
			if (CurrentModActor != nullptr)
			{
				UE4::TArray<UE4::FString> ModButtons;
				if (UE4::GetVariable<UE4::TArray<UE4::FString>>(CurrentModActor, "ModButtons", ModButtons))
				{
					for (size_t bi = 0; bi < ModButtons.Num(); bi++)
					{
						auto CurrentButton = ModButtons[(int)bi];
						if (CurrentButton.IsValid())
						{
							blueprint->ModButtons.push_back(CurrentButton.ToString());
						}
					}
				}
				CurrentModActor->CallFunctionByNameWithArguments(L"PostBeginPlay", nullptr, NULL, true);
				Registry::Get().CoreMods.callEvent("PostBeginPlay", Widen(mod->Info().Name), CurrentModActor);
			}
		}
	}

	bool HandleScriptFunction(UE4::UObject* obj, UE4::FFrame* Frame, void* const Result) {
		const std::string NodeName = Frame->Node->GetName();
		if (NodeName.empty())
			return false;

		if (NodeName == "PrintToModLoader")
		{
			auto msg = Frame->GetInputParams<PrintStringParams>()->Message;
			if (msg.IsValid())
			{
				Log::Trace_UML("{0}", msg.ToString());
			}
		}
		else if (NodeName == "GetPersistentObject")
		{
			auto ModName = Frame->GetInputParams<GetPersistentObjectParams>()->ModName;
			for (auto& mod : Registry::Get().Mods)
			{
				BlueprintMod* blueprint = mod->Blueprint();
				if (blueprint && ModName.c_str() == Widen(mod->Info().Name))
				{
					if (blueprint->PersistentInstance)
					{
						UE4::SetVariable<UE4::UObject*>(obj, "GetPersistentObjectReturnValue", blueprint->PersistentInstance);
					}
				}
			}
		}
		else if (void* funcPtr = mdml::mods::Registry::Get().FindBPFunctionWrapper(NodeName)) {
			reinterpret_cast<void(*)(UE4::UObject*, UE4::FFrame*, void*)> (funcPtr)(obj, Frame, (void*)Result);
			return true;
		}
		return false;
	}

	void ResetLogicMods() {
		IsProcessInternalsHooked = false;
	}
}
