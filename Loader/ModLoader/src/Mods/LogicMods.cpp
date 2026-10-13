#include "Core.h"
#include "LogicMods.h"

#include "Globals.h"
#include "Mods/LoadOrder.h"
#include "Mods/Mod.h"
#include "Platform/IniFile.h"
#include "Runtime/GameHooks.h"

#include "UE4.h"
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

		void LoadLogicMod(std::string modName, const std::filesystem::path& Actor, const std::string& ActorPath, const std::filesystem::path& PeristentObject, const std::string& PersintentObjectPath) {
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

			if (!PeristentObject.string().empty()) {
				if (!std::filesystem::exists(PeristentObject)) {
					Log::Warn_MDML("Could not find: {0}", PeristentObject.string());
					return;
				}
				std::string persistentFileName = PeristentObject.filename().string();
				std::string persistentName = persistentFileName.substr(0, persistentFileName.find_last_of("."));
				std::string PPath = PersintentObjectPath;
				if (PersintentObjectPath.empty()) {
					std::filesystem::path relpath = std::filesystem::relative(PeristentObject.parent_path(), Mod::GetModsFolder());
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

			Global::GetGlobals()->ModInfoList.push_back(CurrentMod);
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
						auto actorFile = dirPath + "/" + modIni.Get("LogicMod", "ActorFile", "");
						auto actorPath = modIni.Get("LogicMod", "ActorPath", "");
						auto PeristentObjectFile = dirPath + "/" + modIni.Get("LogicMod", "PeristentObjectFile", "");
						auto PersistentObjectPath = modIni.Get("LogicMod", "PersistentObjectPath", "");

						if (!actorFile.empty()) {
							LoadLogicMod(modName, actorFile, actorPath, PeristentObjectFile, PersistentObjectPath);
						}
						else
							Log::Info_MDML("No actor found for {0}", modName);
					}
				}
			}
		}
	}

	void SpawnLogicMods() {
		for (int i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++) {
			CreateMod(Global::GetGlobals()->ModInfoList[i]);
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
					UE4::AActor* ModActor = SpawnActor(ModObject, UE4::FTransform(UE4::FVector(0,0,0)), UE4::FActorSpawnParameters());
					if (ModActor)
					{
						if (!IsProcessInternalsHooked)
						{
							if (!mdml::Addresses.ProcessInternals)
							{
								if (!mdml::Addresses.UsesFNamePool || !mdml::Addresses.IsUsing4_22)
								{
									if (ModActor->DoesObjectContainFunction("PostBeginPlay"))
									{
										mdml::Addresses.ProcessInternals = (DWORD64)ModActor->GetFunction("PostBeginPlay")->GetFunction();
									}
									else if (ModActor->DoesObjectContainFunction("ModMenuButtonPressed"))
									{
										mdml::Addresses.ProcessInternals = (DWORD64)ModActor->GetFunction("ModMenuButtonPressed")->GetFunction();
									}
								}
							}
							IsProcessInternalsHooked = true;
							if (mdml::Addresses.ProcessInternals)
								runtime::InstallScriptFunctionHook();
							else
								Log::Warn_UML("ProcessBlueprintFunctions could not be located! Mod Loader Functionality Will be Limited!");
						}

						for (size_t i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
						{
							if (Global::GetGlobals()->ModInfoList[i].ModName == CurrentMod)
							{
								Global::GetGlobals()->ModInfoList[i].CurrentModActor = ModActor;
								if (!Global::GetGlobals()->ModInfoList[i].WasInitialized)
								{
									Global::GetGlobals()->ModInfoList[i].ContainsButton = ModActor->DoesObjectContainFunction("ModMenuButtonPressed");
									UE4::FString Author;
									UE4::FString Description;
									UE4::FString Version;
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModAuthor", Author))
									{
										if (Author.IsValid())
										{
											Global::GetGlobals()->ModInfoList[i].ModAuthor = Author.ToString();
										}
									}
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModDescription", Description))
									{
										if (Description.IsValid())
										{
											Global::GetGlobals()->ModInfoList[i].ModDescription = Description.ToString();
										}
									}
									if (UE4::GetVariable<UE4::FString>(ModActor, "ModVersion", Version))
									{
										if (Version.IsValid())
										{
											Global::GetGlobals()->ModInfoList[i].ModVersion = Version.ToString();
										}
									}
									UE4::UClass* ModObjectInstanceClass = UE4::UClass::LoadClassFromString(mod.PersistentObjectPath.c_str(), false);
									if (ModObjectInstanceClass)	// Check if ModInstanceObject Exists
									{
										Global::GetGlobals()->ModInfoList[i].PersistentObject = UE4::UObject::StaticConstructObject_Internal(ModObjectInstanceClass, (UE4::UObject*)UE4::UGameplayStatics::GetGameInstance(), "", 0, UE4::EInternalObjectFlags::GarbageCollectionKeepFlags, nullptr, false, nullptr, false);
									}
									Global::GetGlobals()->ModInfoList[i].WasInitialized = true;
								}
							}
						}
						ModActor->CallFunctionByNameWithArguments(L"PreBeginPlay", nullptr, NULL, true);
						Log::Info_UML("Sucessfully Loaded {0}", str.c_str());
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
		for (int i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
		{
			UE4::AActor* CurrentModActor = Global::GetGlobals()->ModInfoList[i].CurrentModActor;
			if (CurrentModActor)
			{
				if (CurrentModActor->IsA(UE4::AActor::StaticClass()))
				{
					CurrentModActor->CallFunctionByNameWithArguments(L"ModCleanUp", nullptr, NULL, true);
				}
			}

			Global::GetGlobals()->ModInfoList[i].CurrentModActor = nullptr;
			Global::GetGlobals()->ModInfoList[i].ModButtons.clear();
		}
	}

	void PostBeginPlayLogicMods() {
		for (int i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
		{
			UE4::AActor* CurrentModActor = Global::GetGlobals()->ModInfoList[i].CurrentModActor;
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
							Global::GetGlobals()->ModInfoList[i].ModButtons.push_back(CurrentButton.ToString());
						}
					}
				}
				CurrentModActor->CallFunctionByNameWithArguments(L"PostBeginPlay", nullptr, NULL, true);
				Global::GetGlobals()->CoreMods.callEvent("PostBeginPlay", Global::GetGlobals()->ModInfoList[i].ModName, CurrentModActor);
			}
		}
	}

	UE4::AActor* SpawnActor(UE4::UClass* Class, const UE4::FTransform& transform, UE4::FActorSpawnParameters spawnParams) {
		if (!mdml::Addresses.IsUsingDeferedSpawn) {
			return UE4::UWorld::GetWorld()->SpawnActor(Class, &transform, &spawnParams);
		}
		else {
			return UE4::UGameplayStatics::BeginDeferredActorSpawnFromClass((UE4::AActor*)Class, transform, UE4::ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
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
			for (size_t i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
			{
				auto ModInfo = Global::GetGlobals()->ModInfoList[i];
				if (ModName.c_str() == ModInfo.ModName)
				{
					if (ModInfo.PersistentObject)
					{
						UE4::SetVariable<UE4::UObject*>(obj, "GetPersistentObjectReturnValue", ModInfo.PersistentObject);
					}
				}
			}
		}
		else if (void* funcPtr = Global::GetGlobals()->FindBPfunctionWrapper(NodeName)) {
			reinterpret_cast<void(*)(UE4::UObject*, UE4::FFrame*, void*)> (funcPtr)(obj, Frame, (void*)Result);
			return true;
		}
		return false;
	}

	void ResetLogicMods() {
		IsProcessInternalsHooked = false;
	}
}
