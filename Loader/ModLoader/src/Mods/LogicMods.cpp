#include "Core.h"
#include "LogicMods.h"

#include "Mods/Registry.h"
#include "Mods/LoadOrder.h"
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

		void LoadLogicMod(std::string modName, const std::filesystem::path& Actor, const std::string& ActorPath, const std::filesystem::path& PersistentObject, const std::string& PersistentObjectPath) {
			if (!std::filesystem::exists(Actor)) {
				Log::Warn_MDML("Could not find: {0}", Actor.string());
				return;
			}

			std::string actorFileName = Actor.filename().string();
			std::string actorName = actorFileName.substr(0, actorFileName.find_last_of("."));
			std::string APath = ActorPath;
			if (ActorPath.empty()) {
				std::filesystem::path relpath = std::filesystem::relative(Actor.parent_path(), Mod::GetModsFolder());
				APath = "/Game/Mods/" + relpath.string() + "/" + actorName + "." + actorName + "_C";
			}



			ModInfo CurrentMod = ModInfo();

			CurrentMod.ModName = std::wstring(modName.length(), 0);
			std::transform(modName.begin(), modName.end(), CurrentMod.ModName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

			CurrentMod.ActorName = std::wstring(actorName.length(), 0);
			std::transform(actorName.begin(), actorName.end(), CurrentMod.ActorName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

			CurrentMod.ActorPath = std::wstring(APath.length(), 0);
			std::transform(APath.begin(), APath.end(), CurrentMod.ActorPath.begin(), [](char c) -> wchar_t {
				//when we are here we can also repair the path
				if (c == '\\')
					return L'/';
				return (wchar_t)c;
				});
			Log::Info_MDML("Registered Mod Actor {1} for {0}", modName, APath);

			if (!PersistentObject.empty()) {
				if (!std::filesystem::exists(PersistentObject)) {
					Log::Warn_MDML("Could not find: {0}", PersistentObject.string());
					return;
				}
				std::string persistentFileName = PersistentObject.filename().string();
				std::string persistentName = persistentFileName.substr(0, persistentFileName.find_last_of("."));
				std::string PPath = PersistentObjectPath;
				if (PersistentObjectPath.empty()) {
					std::filesystem::path relpath = std::filesystem::relative(PersistentObject.parent_path(), Mod::GetModsFolder());
					PPath = "/Game/Mods/" + relpath.string() + "/" + persistentName + "." + persistentName + "_C";
				}

				CurrentMod.PersistentObjectName = std::wstring(persistentName.length(), 0);
				std::transform(persistentName.begin(), persistentName.end(), CurrentMod.PersistentObjectName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

				CurrentMod.PersistentObjectPath = std::wstring(PPath.length(), 0);
				std::transform(PPath.begin(), PPath.end(), CurrentMod.PersistentObjectPath.begin(), [](char c) -> wchar_t {
					//when we are here we can also repair the path
					if (c == '\\')
					return L'/';
				return (wchar_t)c;
					});
				Log::Info_MDML("Registered Persistent Mod Object {1} for {0}", modName, PPath);
			}


			CurrentMod.IsEnabled = true;

			mdml::mods::Registry::Get().ModInfoList.push_back(CurrentMod);
		}
	}

	void RegisterLogicMods() {
		std::string path = Mod::GetModsFolder();
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					platform::IniFile modIni(iniPath);

					if (modIni.HasSection("LogicMod")) {
						if (!LoadOrder::IsEnabled(dirName)) {
							Log::Info_MDML("Logic mod {0} is disabled in LoadOrder.ini", dirName);
							continue;
						}

						auto modName = modIni.Get("LogicMod", "ModName", dirName);
						auto actorFile = modIni.Get("LogicMod", "ActorFile", "");
						auto actorPath = modIni.Get("LogicMod", "ActorPath", "");
						// Key renamed from the misspelled "PeristentObjectFile" (owner decision 2026-10-13, no alias).
						auto persistentObjectFile = modIni.Get("LogicMod", "PersistentObjectFile", "");
						auto persistentObjectPath = modIni.Get("LogicMod", "PersistentObjectPath", "");

						// An empty ActorFile/PersistentObjectFile used to become "<mod folder>/", which exists, so a bogus
						// actor or persistent object was registered for the mod folder itself.
						if (!actorFile.empty()) {
							LoadLogicMod(modName, dirPath + "/" + actorFile, actorPath,
								persistentObjectFile.empty() ? std::filesystem::path() : std::filesystem::path(dirPath + "/" + persistentObjectFile), persistentObjectPath);
						}
						else
							Log::Info_MDML("No actor found for {0}", modName);
					}
				}
			}
		}
	}

	void SpawnLogicMods() {
		for (int i = 0; i < mdml::mods::Registry::Get().ModInfoList.size(); i++) {
			CreateMod(mdml::mods::Registry::Get().ModInfoList[i]);
		}
		Log::Info_UML("Finished Spawning Mods");
	}

	void CreateMod(ModInfo& mod) {
		if (mod.IsEnabled)
		{
			std::wstring CurrentMod;
			CurrentMod = mod.ModName;
			if (mdml::Addresses.StaticLoadObject)
			{
				std::string str(CurrentMod.length(), 0);
				std::transform(CurrentMod.begin(), CurrentMod.end(), str.begin(), [](wchar_t c) { return (char)c; });

				UE4::UClass* ModObject = UE4::UClass::LoadClassFromString(mod.ActorPath.c_str(), false);
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

						for (size_t i = 0; i < mdml::mods::Registry::Get().ModInfoList.size(); i++)
						{
							if (mdml::mods::Registry::Get().ModInfoList[i].ModName == CurrentMod)
							{
								mdml::mods::Registry::Get().ModInfoList[i].CurrentModActor = ModActor;
								if (!mdml::mods::Registry::Get().ModInfoList[i].WasInitialized)
								{
									mdml::mods::Registry::Get().ModInfoList[i].ContainsButton = ModActor->DoesObjectContainFunction("ModMenuButtonPressed");
									UE4::FString Author;
									UE4::FString Description;
									UE4::FString Version;
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModAuthor", Author))
									{
										if (Author.IsValid())
										{
											mdml::mods::Registry::Get().ModInfoList[i].ModAuthor = Author.ToString();
										}
									}
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModDescription", Description))
									{
										if (Description.IsValid())
										{
											mdml::mods::Registry::Get().ModInfoList[i].ModDescription = Description.ToString();
										}
									}
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModVersion", Version))
									{
										if (Version.IsValid())
										{
											mdml::mods::Registry::Get().ModInfoList[i].ModVersion = Version.ToString();
										}
									}
									UE4::UClass* ModObjectInstanceClass = UE4::UClass::LoadClassFromString(mod.PersistentObjectPath.c_str(), false);
									if (ModObjectInstanceClass)	// Check if ModInstanceObject Exists
									{
										mdml::mods::Registry::Get().ModInfoList[i].PersistentObject = UE4::UObject::StaticConstructObject_Internal(ModObjectInstanceClass, (UE4::UObject*)UE4::UGameplayStatics::GetGameInstance(UE4::GetWorld()), "", 0, UE4::EInternalObjectFlags::GarbageCollectionKeepFlags, nullptr, false, nullptr, false);
									}
									mdml::mods::Registry::Get().ModInfoList[i].WasInitialized = true;
								}
							}
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
	}

	void CleanUpMods() {
		for (int i = 0; i < mdml::mods::Registry::Get().ModInfoList.size(); i++)
		{
			UE4::AActor* CurrentModActor = mdml::mods::Registry::Get().ModInfoList[i].CurrentModActor;
			if (CurrentModActor)
			{
				if (CurrentModActor->IsA(UE4::AActor::StaticClass()))
				{
					CurrentModActor->CallFunctionByNameWithArguments(L"ModCleanUp", nullptr, NULL, true);
				}
			}

			mdml::mods::Registry::Get().ModInfoList[i].CurrentModActor = nullptr;
			mdml::mods::Registry::Get().ModInfoList[i].ModButtons.clear();
		}
	}

	void PostBeginPlayLogicMods() {
		for (int i = 0; i < mdml::mods::Registry::Get().ModInfoList.size(); i++)
		{
			UE4::AActor* CurrentModActor = mdml::mods::Registry::Get().ModInfoList[i].CurrentModActor;
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
							mdml::mods::Registry::Get().ModInfoList[i].ModButtons.push_back(CurrentButton.ToString());
						}
					}
				}
				CurrentModActor->CallFunctionByNameWithArguments(L"PostBeginPlay", nullptr, NULL, true);
				mdml::mods::Registry::Get().CoreMods.callEvent("PostBeginPlay", mdml::mods::Registry::Get().ModInfoList[i].ModName, CurrentModActor);
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
			for (size_t i = 0; i < mdml::mods::Registry::Get().ModInfoList.size(); i++)
			{
				auto ModInfo = mdml::mods::Registry::Get().ModInfoList[i];
				if (ModName.c_str() == ModInfo.ModName)
				{
					if (ModInfo.PersistentObject)
					{
						UE4::SetVariable<UE4::UObject*>(obj, "GetPersistentObjectReturnValue", ModInfo.PersistentObject);
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
