#include "Core.h"
#include "MDML.h"

#include <INI.h>
#include <Utilities/HooksManager.h>

#include <Ue4.hpp>
#include <Globals.h>

#include <Kismet/GameplayStatics.h>
#include <UObject/Stack.h>
#include <GameFramework/Actor.h>

GameProfile MDML::SelectedGameProfile;

DWORD StringToDWord(std::string str);
std::string GetModuleFilePath(HMODULE hModule);
bool SetupProfile(const std::string& Path);

void MDML::InitGameState(void* Return) {
	Log::Info_UML("GameStateHook");

	if (GameStateClassInitNotRan) {
		InitCoreMods();
		GameStateClassInitNotRan = false;
	}

	CleanUpMods();

	if (MDML::SelectedGameProfile.StaticLoadObject) {
		for (int i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++) {
			CreateMod(Global::GetGlobals()->ModInfoList[i]);
		}
		Log::Info_UML("Finished Spawning PakMods");
		Global::GetGlobals()->CoreMods.callEvent("InitGameState");
	}

	Log::Info_UML("Returning to GameState --------------------------------------------------------");
}

void MDML::BeginPlay(UE4::AActor* Actor) {
	if (GameStateClassInitNotRan) {
		return;
	}
	if (Actor->IsA(UE4::ACustomClass::StaticClass(MDML::SelectedGameProfile.BeginPlayOverwrite)))
	{
		Log::Info_UML("Beginplay Called");
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
	Global::GetGlobals()->CoreMods.callEvent("BeginPlay", Actor);
}

void MDML::InitCoreMods() {
	UE4::InitSDK();
	Log::Info_UML("Engine Classes Loaded");
	if (Global::GetGlobals()->CoreMods.size() > 0)
	{
		for (size_t i = 0; i < Global::GetGlobals()->CoreMods.size(); i++)
		{
			auto CurrentCoreMod = Global::GetGlobals()->CoreMods[i];
			if (CurrentCoreMod->IsFinishedCreating)
			{
				Log::Info_UML("InitializeMod Called For {0}", CurrentCoreMod->ModName.c_str());
				CurrentCoreMod->InitializeMod();
			}
			else
			{
				Log::Error_UML("Mod {0} wasnt setup in time"), CurrentCoreMod->ModName;
			}
		}
	}
	if (MDML::SelectedGameProfile.StaticLoadObject)
	{
		Log::Info_UML("StaticLoadObject Found");
	}
	else
	{
		Log::Error_UML("StaticLoadObject Not Found");
	}
}
void MDML::CreateMod(ModInfo& mod) {
	if (mod.IsEnabled)
	{
		std::wstring CurrentMod;
		CurrentMod = mod.ModName;
		if (MDML::SelectedGameProfile.StaticLoadObject)
		{
			std::string str(CurrentMod.length(), 0);
			std::transform(CurrentMod.begin(), CurrentMod.end(), str.begin(), [](wchar_t c) { return (char)c; });

			UE4::UClass* ModObject = UE4::UClass::LoadClassFromString(mod.ActorPath.c_str(), false);
			if (ModObject) {
				UE4::AActor* ModActor = SpawnActor(ModObject, UE4::FTransform(UE4::FVector(0,0,0)), UE4::FActorSpawnParameters());
				if (ModActor)
				{
					if (!bIsProcessInternalsHooked)
					{
						if (!MDML::SelectedGameProfile.ProcessInternals)
						{
							if (!MDML::SelectedGameProfile.UsesFNamePool || !MDML::SelectedGameProfile.IsUsing4_22)
							{
								if (ModActor->DoesObjectContainFunction("PostBeginPlay"))
								{
									MDML::SelectedGameProfile.ProcessInternals = (DWORD64)ModActor->GetFunction("PostBeginPlay")->GetFunction();
								}
								else if (ModActor->DoesObjectContainFunction("ModMenuButtonPressed"))
								{
									MDML::SelectedGameProfile.ProcessInternals = (DWORD64)ModActor->GetFunction("ModMenuButtonPressed")->GetFunction();
								}
							}
						}
						bIsProcessInternalsHooked = true;
						if (MDML::SelectedGameProfile.ProcessInternals)
							HooksManager::AddProcessInternalHook();
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
void MDML::CleanUpMods() {
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

UE4::AActor* MDML::SpawnActor(UE4::UClass* Class, const UE4::FTransform& transform, UE4::FActorSpawnParameters spawnParams) {
	if (!MDML::SelectedGameProfile.IsUsingDeferedSpawn) {
		return UE4::UWorld::GetWorld()->SpawnActor(Class, &transform, &spawnParams);
	}
	else {
		return UE4::UGameplayStatics::BeginDeferredActorSpawnFromClass(Class, transform, UE4::ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
	}
}

void MDML::Start() {
	auto Module = GetModuleHandleA("MDML.dll");
	std::string path = GetModuleFilePath(Module);
	path = path.substr(0, path.find_last_of("/\\"));
	if(SetupProfile(path))
		HooksManager::SetupHooks();
}
void MDML::ShutDown() {
	Log::Info_MDML("Shutting down");
	HooksManager::ShutDown();
	bIsProcessInternalsHooked = false;
	GameStateClassInitNotRan = true;
	//MDML::SelectedGameProfile = GameProfile();
	//fcloseall();
}
std::string MDML::FormatPath(const std::filesystem::path& path) {
	return std::filesystem::relative(path, SelectedGameProfile.rootGameDir).string();
}
bool SetupProfile(const std::string& Path) {
	MDML::SelectedGameProfile.ImGuiFile = Path + "/Config/WindowConfig.ini";
	MDML::SelectedGameProfile.NoOverwriteFile = Path + "/Config/NoOverwrite.ini";
	MDML::SelectedGameProfile.HardLinksFile = Path + "/Config/ModLinks.bin";

	INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
	INI LoaderInfo(Path + "/" + ModLoaderConfigFile, true);

	//log dir detection
	if (LoaderInfo.select("General")) {
		std::string logDir = Path + "/" + DEFAULT_LOG_DIR;

		logDir = Path + "/" + LoaderInfo.get("General", "LogDir", logDir);
		auto logFileDir = (std::filesystem::path(logDir));

		if (!std::filesystem::exists(logFileDir))
			std::filesystem::create_directories(logFileDir);

		MDML::SelectedGameProfile.LogDir = logFileDir.string();
	}
	//Output File Initialization
	LoaderInfo.select("DEBUG");
	if (LoaderInfo.getAs<int>("DEBUG", "UseConsole", 0) == 1) {
		ShowWindow(GetConsoleWindow(), SW_SHOW);

		AllocConsole();
		static FILE* newstdin = nullptr;
		static FILE* newstdout = nullptr;
		static FILE* newstderr = nullptr;

		freopen_s(&newstdin, "CONIN$", "r", stdin);
		freopen_s(&newstdout, "CONOUT$", "w", stdout);
		freopen_s(&newstderr, "CONOUT$", "w", stderr);
		Log::Init(MDML::SelectedGameProfile.LogDir);
	}
	Log::Info_UML("Loader Created by ~Russell.J Release V {0}", MODLOADER_VERSION);
	Log::Info_MDML("Optmized and edited for Medieval Dynasty by Stulu");
	Log::Info_MDML("Medieval Version {0}", MEDIEVAL_VERSION);

	//generate and load NoOverwrite File
	MDML::SelectedGameProfile.rootGameDir = std::filesystem::current_path().string();
	if (!std::filesystem::exists(MDML::SelectedGameProfile.NoOverwriteFile)) {
		Log::Warn_MDML("No NoOverwrite file loaded, generating one...");
		if (FILE* file = fopen(MDML::SelectedGameProfile.NoOverwriteFile.c_str(), "w")) {
			//dir, files
			std::unordered_map<std::string, std::vector<std::string>> paths;
			for (auto path : std::filesystem::recursive_directory_iterator(std::filesystem::current_path().string() + "/Medieval_Dynasty/Content")) {
				if (path.is_directory()) {
					continue;
				}
				std::string strPath = std::filesystem::relative(path.path()).string();
				paths[std::filesystem::relative(path.path().parent_path()).string()].push_back(strPath);

			}
			fprintf(file, "; This file stores if the mod loader should disbale file overwriting for specific files\n");
			fprintf(file, "; The Mod Loader overrides the ue4 file detection(its the simplest way of saying it even if its wrong)\n");
			fprintf(file, "; But for loose files the game ships with we want to use the default ue4 way of loading files insted of our own, otherwise the game might crash\n");
			fprintf(file, "; \n");
			fprintf(file, "; To enable file overwriding change value to false and to disbale overloading change to true\n");
			fprintf(file, "; The file loader only support true/1/false/0 and not TrUe or FaLs\n");
			fprintf(file, "; The path is relative to the root dir where the Engine and Game folder is located with the Manifest_NonUFSFiles_Win64.txt\n");
			for (auto [dir, pathVec] : paths) {
				fprintf(file, "\n[%s]\n", dir.c_str());
				for (auto strPath : pathVec) {
					//disable for mods
					if (strPath.find("\\LogicMods\\") != strPath.npos || strPath.find("\\Mods\\") != strPath.npos)
						fprintf(file, "%s=false\n", strPath.c_str());
					else
						fprintf(file, "%s=true\n", strPath.c_str());
				}
			}
			fclose(file);
		}
		Log::Warn_MDML("NoOverwrite file generated to {0}, if you have mods installed remove them from the list or change to false", MDML::SelectedGameProfile.NoOverwriteFile);
	}
	if (std::filesystem::exists(MDML::SelectedGameProfile.NoOverwriteFile)) {
		std::ifstream stream;
		stream.open(MDML::SelectedGameProfile.NoOverwriteFile);
		std::string line;
		while (std::getline(stream, line)) {
			if (line._Starts_with(";") || line._Starts_with("["))
				continue;
			size_t seperatorPos = line.find_last_of("=");
			std::string fileName = line.substr(0, seperatorPos);
			std::string value = line.substr(seperatorPos + 1, line.npos);
			std::transform(value.begin(), value.end(), value.begin(), [](char c) -> char { return std::tolower(c); }); // to lowercase
			if (value == "true" || value == "1")
				MDML::SelectedGameProfile.disableOverwriteFiles[fileName] = true;
			else if (value == "false" || value == "0")
				MDML::SelectedGameProfile.disableOverwriteFiles[fileName] = false;
		}
	}
	else {
		Log::Error_MDML("Error {0} could not be opened", MDML::SelectedGameProfile.NoOverwriteFile);
	}

	//profile detection
	LoaderInfo.select("General");
	std::string Profile = Path + "/" + LoaderInfo.get("General", "Profile", "Config/Default.profile");
	if (!std::filesystem::exists(Profile)) {
		Log::Error_MDML("Profile {0} not found!", Profile.c_str());
		return false;
	}

	if (std::filesystem::exists(Profile))
	{
		Log::Info_UML("Profile Detected: {0}", MDML::FormatPath(Profile));
		std::ifstream file("Profile");

		INI GameInfo(Profile, true);
		GameInfo.select("Overrides");
		MDML::SelectedGameProfile.ModOverridesEnabled = GameInfo.getAs<int>("Overrides", "Enabled", 0);
		MDML::SelectedGameProfile.UseHardLinks = GameInfo.getAs<int>("Overrides", "UseHardLinks", 0);

		if (MDML::SelectedGameProfile.ModOverridesEnabled) {
			Log::Info_MDML("Enabled Mod Overrides using {0} links", MDML::SelectedGameProfile.UseHardLinks ? "Hard" : "Sym");
		}

		GameInfo.select("GameInfo");
		MDML::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray = GameInfo.getAs<int>("GameInfo", "IsUsingFChunkedFixedUObjectArray", 0);
		MDML::SelectedGameProfile.UsesFNamePool = GameInfo.getAs<int>("GameInfo", "UsesFNamePool", 0);
		MDML::SelectedGameProfile.IsUsingDeferedSpawn = GameInfo.getAs<int>("GameInfo", "IsUsingDeferedSpawn", 0);
		MDML::SelectedGameProfile.IsUsing4_22 = GameInfo.getAs<int>("GameInfo", "IsUsing4_22", 0);
		MDML::SelectedGameProfile.bIsDefaultObjectArrayed = GameInfo.getAs<int>("GameInfo", "IsDefaultObjectArrayed", 0);
		MDML::SelectedGameProfile.bDelayGUISpawn = GameInfo.getAs<int>("GameInfo", "DelayGUISpawn", 0);

		if (GameInfo.get("GameInfo", "BeginPlayOverwrite", "") != "")
		{
			MDML::SelectedGameProfile.BeginPlayOverwrite = GameInfo.get("GameInfo", "BeginPlayOverwrite", "");
		}

		if (GameInfo.select("GInfo"))
		{
			if (GameInfo.getAs<int>("GInfo", "IsGInfoPatterns", 0) == 1)
			{
				auto GName = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GName", "").c_str());
				auto GNamesOffset = *reinterpret_cast<uint32_t*>(GName + GameInfo.getAs<int>("GInfo", "GNameFirstOpCodes", 0));
				MDML::SelectedGameProfile.GName = (GName + GameInfo.getAs<int>("GInfo", "GNameTotalByteInstruction", 0) + GNamesOffset);


				auto GObject = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GObject", "").c_str());
				auto GObjectOffset = *reinterpret_cast<uint32_t*>(GObject + GameInfo.getAs<int>("GInfo", "GObjectFirstOpCodes", 0));
				MDML::SelectedGameProfile.GObject = (GObject + GameInfo.getAs<int>("GInfo", "GObjectTotalByteInstruction", 0) + GObjectOffset);

				auto GWorld = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GWorld", "").c_str());
				auto GWorldOffset = *reinterpret_cast<uint32_t*>(GWorld + GameInfo.getAs<int>("GInfo", "GWorldFirstOpCodes", 0));
				MDML::SelectedGameProfile.GWorld = (GWorld + GameInfo.getAs<int>("GInfo", "GWorldTotalByteInstruction", 0) + GWorldOffset);

				Log::Info_UML("GSTuff Patterns Loaded");
			}
			else
			{
				MDML::SelectedGameProfile.GName = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GName", ""));
				MDML::SelectedGameProfile.GObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GObject", ""));
				MDML::SelectedGameProfile.GWorld = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GWorld", ""));
				Log::Info_UML("GSTuff Offset Loaded");
			}
		}
		else
		{
			if (MDML::SelectedGameProfile.UsesFNamePool)
			{
				auto FPoolPat = Pattern::Find("74 09 48 8D 15 ? ? ? ? EB 16");
				if (FPoolPat != nullptr)
				{
					auto FPoolPatoffset = *reinterpret_cast<uint32_t*>(FPoolPat + 5);
					MDML::SelectedGameProfile.GName = (DWORD64)(FPoolPat + 9 + FPoolPatoffset);
					Log::Info_UML("FoundNamePool: 0x{0:x}", MDML::SelectedGameProfile.GName);
				}
				else
				{
					Log::Error_UML("GName Could Not Be Found!");
				}
			}
			else
			{
				auto GNamePat = Pattern::Find("E8 ? ? ? ? 48 8B C3 48 89 1D ? ? ? ? 48 8B 5C 24");
				if (GNamePat != nullptr)
				{
					auto GNamesAddress = *reinterpret_cast<uint32_t*>(GNamePat + 11);
					MDML::SelectedGameProfile.GName = (DWORD64)(GNamePat + 15 + GNamesAddress);
					Log::Info_UML("GName: 0x{0:x}", MDML::SelectedGameProfile.GName);
				}
				else
				{
					Log::Error_UML("GName Could Not Be Found!");
				}
			}

			auto GObjectPat = Pattern::Find("8B 46 10 3B 46 3C 75 0F 48 8B D6 48 8D 0D ? ? ? ? E8");
			if (GObjectPat != nullptr)
			{
				auto GObjectOffset = *reinterpret_cast<uint32_t*>(GObjectPat + 14);
				MDML::SelectedGameProfile.GObject = (DWORD64)(GObjectPat + 18 + GObjectOffset);
				Log::Info_UML("GObject: 0x{0:x}", MDML::SelectedGameProfile.GObject);
			}
			else
			{
				Log::Error_UML("GObject Could Not Be Found!");
			}

			auto GWorldPat = Pattern::Find("0F 2E ? 74 ? 48 8B 1D ? ? ? ? 48 85 DB 74");
			if (GWorldPat != nullptr)
			{
				auto GWorldAddress = *reinterpret_cast<uint32_t*>(GWorldPat + 8);
				MDML::SelectedGameProfile.GWorld = (DWORD64)(GWorldPat + 12 + GWorldAddress);
				Log::Info_UML("GWorld: 0x{0:x}", MDML::SelectedGameProfile.GWorld);
			}
			else
			{
				Log::Error_UML("GWorld Could Not Be Found!");
			}

			auto GEnginePat = Pattern::Find("49EAA58");
		}

		if (GameInfo.select("UObjectDef"))
		{
			MDML::SelectedGameProfile.IsUObjectMissing = false;
			MDML::SelectedGameProfile.defs.UObject.Index = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Index", ""));
			MDML::SelectedGameProfile.defs.UObject.Class = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Class", ""));
			MDML::SelectedGameProfile.defs.UObject.Name = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Name", ""));
			MDML::SelectedGameProfile.defs.UObject.Outer = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Outer", ""));
		}

		if (GameInfo.select("UFieldDef"))
		{
			MDML::SelectedGameProfile.IsUFieldMissing = false;

			GameInfo.select("UFieldDef");
			MDML::SelectedGameProfile.defs.UField.Next = (uint16_t)StringToDWord(GameInfo.get("UFieldDef", "Next", ""));
		}
		if (GameInfo.select("UStructDef"))
		{
			MDML::SelectedGameProfile.IsUStructMissing = false;
			GameInfo.select("UStructDef");
			MDML::SelectedGameProfile.defs.UStruct.SuperStruct = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "SuperStruct", ""));
			MDML::SelectedGameProfile.defs.UStruct.Children = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "Children", ""));
			MDML::SelectedGameProfile.defs.UStruct.PropertiesSize = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "PropertiesSize", ""));
		}
		if (GameInfo.select("UEnumDef")) {
			MDML::SelectedGameProfile.IsUEnumMissing = false;
			GameInfo.select("UEnumDef");
			MDML::SelectedGameProfile.defs.UEnum.CppType = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppType", ""));
			MDML::SelectedGameProfile.defs.UEnum.Names = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Names", ""));
			MDML::SelectedGameProfile.defs.UEnum.CppForm = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppForm", ""));
			MDML::SelectedGameProfile.defs.UEnum.Flags = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Flags", ""));
			MDML::SelectedGameProfile.defs.UEnum.DisplayNameFn = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "DisplayNameFn", ""));
			MDML::SelectedGameProfile.defs.UEnum.UserDefDisplayNameMap = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "UserDefDisplayNameMap", ""));
		}
		if (GameInfo.select("UFunctionDef"))
		{
			MDML::SelectedGameProfile.IsUFunctionMissing = false;
			GameInfo.select("UFunctionDef");
			MDML::SelectedGameProfile.defs.UFunction.FunctionFlags = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "FunctionFlags", ""));
			MDML::SelectedGameProfile.defs.UFunction.NumParams = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "NumParams", ""));
			MDML::SelectedGameProfile.defs.UFunction.ParamsSize = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ParamsSize", ""));
			MDML::SelectedGameProfile.defs.UFunction.ReturnValueOffset = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ReturnValueOffset", ""));
			MDML::SelectedGameProfile.defs.UFunction.Func = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "Func", ""));
		}

		if (GameInfo.select("Property"))
		{
			MDML::SelectedGameProfile.bIsFProperty = GameInfo.getAs<int>("Property", "IsFProperty", 0);
			MDML::SelectedGameProfile.defs.Property.ArrayDim = (uint16_t)StringToDWord(GameInfo.get("Property", "ArrayDim", ""));
			MDML::SelectedGameProfile.defs.Property.ElementSize = (uint16_t)StringToDWord(GameInfo.get("Property", "ElementSize", ""));
			MDML::SelectedGameProfile.defs.Property.Offset = (uint16_t)StringToDWord(GameInfo.get("Property", "Offset", ""));
			MDML::SelectedGameProfile.defs.Property.Flags = (uint16_t)StringToDWord(GameInfo.get("Property", "Flags", ""));
			if (MDML::SelectedGameProfile.bIsFProperty)
			{
				GameInfo.select("FField");
				MDML::SelectedGameProfile.defs.FField.Name = (uint16_t)StringToDWord(GameInfo.get("FField", "Name", ""));
				MDML::SelectedGameProfile.defs.FField.Next = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));
				MDML::SelectedGameProfile.defs.FField.ClassPrivate = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));

				if (GameInfo.select("FFieldClass")) {
					MDML::SelectedGameProfile.defs.FFieldClass.Name = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "Name", ""));
					MDML::SelectedGameProfile.defs.FFieldClass.ID = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "ID", ""));
					MDML::SelectedGameProfile.defs.FFieldClass.CastFlags = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "CastFlags", ""));
					MDML::SelectedGameProfile.defs.FFieldClass.SuperClass = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "SuperClass", ""));
				}
			}
		}
		else
		{
			MDML::SelectedGameProfile.IsPropertyMissing = true;
		}

		if (GameInfo.select("FunctionInfo"))
		{
			if (GameInfo.getAs<int>("FunctionInfo", "IsFunctionPatterns", 0) == 0)
			{
				MDML::SelectedGameProfile.GameStateInit = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "GameStateInit", ""));
				MDML::SelectedGameProfile.BeginPlay = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "BeginPlay", ""));
				MDML::SelectedGameProfile.StaticLoadObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "StaticLoadObject", ""));
				MDML::SelectedGameProfile.StaticFindObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "StaticFindObject", ""));
				MDML::SelectedGameProfile.SpawnActorFTrans = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "SpawnActorFTrans", ""));
				MDML::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "CallFunctionByNameWithArguments", ""));
				MDML::SelectedGameProfile.ProcessEvent = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "ProcessEvent", ""));
				MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "CreateDefaultObject", ""));
				Log::Info_UML("Function Offsets Set!");
			}
			else
			{
				MDML::SelectedGameProfile.GameStateInit = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "GameStateInit", "").c_str());
				MDML::SelectedGameProfile.BeginPlay = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "BeginPlay", "").c_str());
				MDML::SelectedGameProfile.StaticLoadObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "StaticLoadObject", "").c_str());
				MDML::SelectedGameProfile.StaticFindObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "StaticFindObject", "").c_str());
				MDML::SelectedGameProfile.SpawnActorFTrans = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "SpawnActorFTrans", "").c_str());
				MDML::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "CallFunctionByNameWithArguments", "").c_str());
				MDML::SelectedGameProfile.ProcessEvent = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "ProcessEvent", "").c_str());
				MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "CreateDefaultObject", "").c_str());
				Log::Info_MDML("GameStateInit: 0x{0:x}", MDML::SelectedGameProfile.GameStateInit);
				Log::Info_MDML("BeginPlay: 0x{0:x}", MDML::SelectedGameProfile.BeginPlay);
				Log::Info_MDML("StaticLoadObject: 0x{0:x}", MDML::SelectedGameProfile.StaticLoadObject);
				Log::Info_MDML("StaticFindObject: 0x{0:x}", MDML::SelectedGameProfile.StaticFindObject);
				Log::Info_MDML("SpawnActorFTrans: 0x{0:x}", MDML::SelectedGameProfile.SpawnActorFTrans);
				Log::Info_MDML("CallFunctionByNameWithArguments: 0x{0:x}", MDML::SelectedGameProfile.CallFunctionByNameWithArguments);
				Log::Info_MDML("ProcessEvent: 0x{0:x}", MDML::SelectedGameProfile.ProcessEvent);
				Log::Info_MDML("CreateDefaultObject: 0x{0:x}", MDML::SelectedGameProfile.CreateDefaultObject);
				Log::Info_MDML("Function Patterns Set!");
			}
		}
		else
		{
			MDML::SelectedGameProfile.GameStateInit = (DWORD64)Pattern::Find("40 53 48 83 EC 20 48 8B 41 10 48 8B D9 48 8B 91");
			Log::Info_UML("GameStateInit: 0x{0:x}", MDML::SelectedGameProfile.GameStateInit);
			if (!MDML::SelectedGameProfile.GameStateInit)
			{
				Log::Error_UML("GameStateInit NOT FOUND!");
			}

			auto BeginPlay = Pattern::Find("48 8B D9 E8 ?? ?? ?? ?? F6 83 ?? ?? ?? ?? ?? 74 12 48 8B 03");
			BeginPlay += 0x3;
			if (BeginPlay != nullptr)
			{
				MDML::SelectedGameProfile.BeginPlay = (DWORD64)MEM::GetAddressPTR(BeginPlay, 0x1, 0x5);
				Log::Info_UML("AActor::BeginPlay: 0x{0:x}", MDML::SelectedGameProfile.BeginPlay);
			}
			else
			{
				Log::Error_UML("AActor::BeginPlay NOT FOUND!");
			}

			auto StaticLoadObject = Pattern::Find("89 64 24 ? 48 8B C8 E8 ? ? ? ? 41 BE ? ? ? ? EB 05 E8"); // Sig 1
			if (StaticLoadObject != nullptr)
			{
				StaticLoadObject += 0x7;
			}
			else
			{
				StaticLoadObject = Pattern::Find("C7 44 24 ? ? ? ? ? E8 ? ? ? ? 48 8B 8D ? ? ? ? 48 85 C9 74 05 E8 ? ? ? ? 45 33 C9 ? 89 74 24");
				if (StaticLoadObject != nullptr)
				{
					StaticLoadObject += 0x8;
				}
				else
				{
					StaticLoadObject = Pattern::Find("89 6C 24 20 48 8B C8 E8 ? ? ? ? 48 8B 4C 24 ? 48 8B F0 48 85 C9 74 05");
					if (StaticLoadObject != nullptr)
					{
						StaticLoadObject += 0x7;
					}
					else
					{
						if (StaticLoadObject = Pattern::Find("48 8B C8 89 5C 24 20 E8 ? ? ? ? 48"))
						{
							StaticLoadObject += 0x7;
						}
						else
						{
							Log::Error_UML("StaticLoadObject NOT FOUND!");
						}
					}
				}
			}
			MDML::SelectedGameProfile.StaticLoadObject = (DWORD64)MEM::GetAddressPTR(StaticLoadObject, 0x1, 0x5);
			Log::Info_UML("StaticLoadObject: 0x{0:x}", (void*)MDML::SelectedGameProfile.StaticLoadObject);


			auto SpawnActorFTrans = Pattern::Find("4C 8B C6 48 8B C8 48 8B D3 E8 ? ? ? ? 48 8B 5C 24 ? 48 8B 74 24");
			if (SpawnActorFTrans != nullptr)
			{
				SpawnActorFTrans += 0x9;
			}
			else
			{
				SpawnActorFTrans = Pattern::Find("4C 8B CE 4C 8D 44 24 ? 48 8B D7 48 8B CB E8 ? ? ? ? 48 8B 4C 24 ? 48 33 CC");
				if (SpawnActorFTrans != nullptr)
				{
					SpawnActorFTrans += 0xE;
				}
				else
				{
					Log::Error_UML("SpawnActorFTrans NOT FOUND!");
				}
			}

			MDML::SelectedGameProfile.SpawnActorFTrans = (DWORD64)MEM::GetAddressPTR(SpawnActorFTrans, 0x1, 0x5);
			Log::Info_UML("UWorld::SpawnActor: 0x{0:x}", (void*)MDML::SelectedGameProfile.SpawnActorFTrans);

			auto CallFunctionByNameWithArguments = Pattern::Find("8B ? E8 ? ? ? ? ? 0A ? FF ? EB 9E ? 8B");
			if (CallFunctionByNameWithArguments != nullptr)
			{
				CallFunctionByNameWithArguments += 0x2;
				MDML::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)MEM::GetAddressPTR(CallFunctionByNameWithArguments, 0x1, 0x5);
			}
			else
			{
				CallFunctionByNameWithArguments = Pattern::Find("49 8B D4 E8 ? ? ? ? 44 0A F8 FF C3 EB 9A");
				if (CallFunctionByNameWithArguments != nullptr)
				{
					CallFunctionByNameWithArguments += 0x3;
					MDML::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)MEM::GetAddressPTR(CallFunctionByNameWithArguments, 0x1, 0x5);
				}
				else
				{
					Log::Error_UML("CallFunctionByNameWithArguments NOT FOUND!");
				}
			}
			Log::Info_UML("CallFunctionByNameWithArguments: 0x{0:x}", (void*)MDML::SelectedGameProfile.CallFunctionByNameWithArguments);

			auto ProcessEvent = Pattern::Find("75 0E ? ? ? 48 ? ? 48 ? ? E8 ? ? ? ? 48 8B ? 24 ? 48 8B ? 24 38 48 8B ? 24 40");
			ProcessEvent += 0xB;
			if (ProcessEvent != nullptr)
			{
				MDML::SelectedGameProfile.ProcessEvent = (DWORD64)MEM::GetAddressPTR(ProcessEvent, 0x1, 0x5);
				Log::Info_UML("UObject::ProcessEvent: 0x{0:x}", (void*)MDML::SelectedGameProfile.ProcessEvent);
			}
			else
			{
				Log::Error_UML("ProcessEvent NOT FOUND!");
			}

			MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find("4C 8B DC 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 83 B9 ? ? ? ? ? 48 8B F9");
			if (!MDML::SelectedGameProfile.CreateDefaultObject)
			{
				//FallBack 1
				MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find("4C 8B DC 55 53 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 83 B9 ? ? ? ? ? 48 8B D9 0F 85");
				if (!MDML::SelectedGameProfile.CreateDefaultObject)
				{
					//FallBack 2
					MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find("4C 8B DC 53 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 83 B9");
					if (!MDML::SelectedGameProfile.CreateDefaultObject)
					{
						//Final FallBack
						MDML::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find("4C 8B DC ?? ?? ?? ?? ?? ? ? ? ? ?? ?? ?? ? ? ? ? ?? ?? ?? ? ? ? ? ?? ?? ?? 48 ?? ?? ? ? ? ? ?? ?? ?? ? ? ? ? ? ?? ?? ?? ?? ?? ? ? ? ? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ? ? ? ? ?? 8B ?? ? ? ? ? ?? ?? ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? ?? ? ? ? ? ?? ?? ?? ? ? ? ? ?? ?? ?? ?? ?? ?? ? ? ? ? ?? ?? ?? ?? ?? ? ? ? ? ?? ?? ? ? ? ? ?? ?? ?? 48");
						if (!MDML::SelectedGameProfile.CreateDefaultObject)
						{
							MDML::SelectedGameProfile.bIsDefaultObjectArrayed = true;
							Log::Warn_UML("CreateDefualtObject NOT FOUND!, Will Use Object Array Instead!");
						}
					}
				}
			}
			Log::Info_UML("UClass::CreateDefualtObject: 0x{0:x}", (void*)MDML::SelectedGameProfile.CreateDefaultObject);

			MDML::SelectedGameProfile.StaticFindObject = (DWORD64)Pattern::Find("48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 83 EC 70 80 3D ? ? ? ? ? 45 0F B6 F1 49 8B F8 48 8B DA 4C 8B F9 74 1D 4C 8D 05 ? ? ? ? BA ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? E8 ? ? ? ?");
			Log::Info_UML("StaticFindObject: 0x{0:x}", (void*)MDML::SelectedGameProfile.StaticFindObject);
		}
		if (GameInfo.select("ProcessInternalFunction"))
		{
			MDML::SelectedGameProfile.ProcessInternals = (DWORD64)Pattern::Find(GameInfo.get("ProcessInternalFunction", "ProcessInternal", "").c_str());
			Log::Info_UML("ProcessInternalFunction: 0x{0:x}", MDML::SelectedGameProfile.ProcessInternals);
		}
		else
		{
			if (MDML::SelectedGameProfile.UsesFNamePool || MDML::SelectedGameProfile.IsUsing4_22)
			{
				DWORD64 ProcessAddy = (DWORD64)Pattern::Find("41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8");
				if (ProcessAddy)
				{
					auto ProcessAddyOffset = *reinterpret_cast<uint32_t*>(ProcessAddy + 16);
					MDML::SelectedGameProfile.ProcessInternals = (ProcessAddy + 20 + ProcessAddyOffset);
					Log::Info_UML("ProcessInternalFunction: 0x{0:x}", MDML::SelectedGameProfile.ProcessInternals);
				}
			}
		}
		if (GameInfo.select("StaticConstructObejct_InternalInfo"))
		{
			MDML::SelectedGameProfile.IsUsingUpdatedStaticConstruct = GameInfo.getAs<int>("StaticConstructObejct_InternalInfo", "IsUsingUpdatedStaticConstruct", 0);
			MDML::SelectedGameProfile.StaticConstructObject_Internal = (DWORD64)Pattern::Find(GameInfo.get("StaticConstructObejct_InternalInfo", "StaticConstructObject_InternalFunction", "").c_str());
		}
		else
		{
			auto StaticConstructObject_Internal = Pattern::Find("48 8B 84 24 ?? ?? 00 00 48 89 44 24 ?? C7 44 24 ?? 00 00 00 00 E8"); // Sig 1
			if (StaticConstructObject_Internal != nullptr)
			{
				StaticConstructObject_Internal += 0x15;
			}
			else
			{
				StaticConstructObject_Internal = Pattern::Find("48 8B C8 89 7C 24 ?? E8");
				if (StaticConstructObject_Internal != nullptr)
				{
					StaticConstructObject_Internal += 0x7;
				}
				else
				{
					MDML::SelectedGameProfile.IsUsingUpdatedStaticConstruct = true;
					StaticConstructObject_Internal = Pattern::Find("E8 ? ? ? ? 45 8B 47 70");
					if (!StaticConstructObject_Internal)
					{
						StaticConstructObject_Internal = Pattern::Find("89 6C 24 38 48 89 74 24 ? E8");
						if (StaticConstructObject_Internal != nullptr)
						{
							StaticConstructObject_Internal += 0x9;
						}
						else
						{
							Log::Warn_UML("StaticConstructObject_Internal Not Found! This will prevent Mods using the ModObjectInstance from working properly.");
						}
					}
				}
			}
			MDML::SelectedGameProfile.StaticConstructObject_Internal = (DWORD64)MEM::GetAddressPTR(StaticConstructObject_Internal, 0x1, 0x5);
			Log::Info_UML("StaticConstructObject_Internal 0x{0:x}", MDML::SelectedGameProfile.StaticConstructObject_Internal);
		}
		if (GameInfo.select("PakOverride")) {
			MDML::SelectedGameProfile.bPakOverride = GameInfo.getAs<int>("PakOverride", "bPakOverride", 0);
			if (MDML::SelectedGameProfile.bPakOverride) {
				if (GameInfo.getAs<int>("PakOverride", "IsFunctionPatterns", 0) == 0)
				{
					MDML::SelectedGameProfile.IsNonPakFilenameAllowed = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("PakOverride", "IsNonPakFilenameAllowed", ""));
					MDML::SelectedGameProfile.FindFileInPakFiles = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("PakOverride", "FindFileInPakFiles", ""));
					Log::Info_MDML("PakOverride Offsets Set!");
				}
				else
				{
					MDML::SelectedGameProfile.IsNonPakFilenameAllowed = (DWORD64)Pattern::Find(GameInfo.get("PakOverride", "IsNonPakFilenameAllowed", "").c_str());
					MDML::SelectedGameProfile.FindFileInPakFiles = (DWORD64)Pattern::Find(GameInfo.get("PakOverride", "FindFileInPakFiles", "").c_str());
					Log::Info_MDML("PakOverride Patterns Set!");
				}
			}
			else {
				MDML::SelectedGameProfile.IsNonPakFilenameAllowed = (DWORD64)Pattern::Find("48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 83 EC 30 48 8B F1 45 33 C0 48 8D 4C 24 ? 4C 8B F2 E8 ? ? ? ? 48 8D 2D ? ? ? ? 83 78 08 00 74 05 48 8B 10 EB 03");
				MDML::SelectedGameProfile.FindFileInPakFiles = (DWORD64)Pattern::Find("48 8B C4 53 48 83 EC 50 48 89 68 10 48 89 70 18 33 F6 48 89 78 20 48 8B FA 4C 89 60 F0 8B D6 4C 89 68 E8 4D 8B E9 4C 89 78 D8 4C 8B F9 48 89 70 C8 8B CE 89 48 D4 4D 8B E0 89 50 D0 48 8D 6E FF 48 85 FF 74 56 66 39 0F 74 51 48 8B DD 0F 1F 00");
				Log::Info_MDML("PakOverride Patterns automaticly detected!");
			}
			Log::Info_MDML("IsNonPakFilenameAllowed: 0x{0:x}", MDML::SelectedGameProfile.IsNonPakFilenameAllowed);
			if (!MDML::SelectedGameProfile.IsNonPakFilenameAllowed)
			{
				Log::Error_MDML("IsNonPakFilenameAllowed NOT FOUND!");
			}
			Log::Info_MDML("FindFileInPakFiles: 0x{0:x}", MDML::SelectedGameProfile.FindFileInPakFiles);
			if (!MDML::SelectedGameProfile.FindFileInPakFiles)
			{
				Log::Error_MDML("FindFileInPakFiles NOT FOUND!");
			}
		}
		Log::Info_UML("Setup {0}", MDML::FormatPath(Profile));
		return true;
	}
	else
	{
		Log::Error_UML("Profile {0} Not Detected!", Profile);
		return false;
	}
}
DWORD StringToDWord(std::string str)
{
	unsigned int m_dwIP;
	std::istringstream ss(&str[2]);
	ss >> std::hex >> m_dwIP;
	return m_dwIP;
}
std::string GetModuleFilePath(HMODULE hModule)
{
	std::string ModuleName = "";
	char szFileName[MAX_PATH] = { 0 };

	if (GetModuleFileNameA(hModule, szFileName, MAX_PATH))
		ModuleName = szFileName;

	return ModuleName;
}