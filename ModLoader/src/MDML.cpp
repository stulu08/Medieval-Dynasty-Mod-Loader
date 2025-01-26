#include "Core.h"
#include "MDML.h"

#include "Utilities/HooksManager.h"
#include "Globals.h"

#include "INI.h"

#include "UE4.h"


DWORD StringToDWord(std::string str);
std::string GetModuleFilePath(HMODULE hModule);
bool SetupProfile(const std::string& Path);

bool IsDirectX11() {
	std::filesystem::path path = MDML::GetDataFolder() + "Config\\WindowsNoEditor\\GameUserSettings.ini";
	if (std::filesystem::exists(path)) {
		INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
		INI config(path.string(), true);
		if (config.select("D3DRHIPreference")) {
			auto v = config.get("bUseD3D12InGame", "True");
			return (v == "False" || v == "false" || v == "0");
		}
	}
	return false;
}

void MDML::InitGameState(void* Return) {
	Log::Info_UML("GameStateHook");
	Global::GetGlobals()->bIsMenuOpen = false;

	if (GameStateClassInitNotRan) {
		InitCoreMods();
		GameStateClassInitNotRan = false;
	}
	CleanUpMods();

	if (SDK::SelectedGameProfile.StaticLoadObject) {
		for (int i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++) {
			CreateMod(Global::GetGlobals()->ModInfoList[i]);
		}
		Log::Info_UML("Finished Spawning Mods");
		Global::GetGlobals()->CoreMods.callEvent("InitGameState");
	}

	Log::Info_UML("Returning to GameState --------------------------------------------------------");
}

void MDML::BeginPlay(UE4::AActor* Actor) {
	if (GameStateClassInitNotRan) {
		return;
	}
	if (Actor->IsA(UE4::ACustomClass::StaticClass(SDK::SelectedGameProfile.BeginPlayOverwrite)))
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

void MDML::Tick(UE4::ELevelTick tick, float deltaTime) {
	Global::GetGlobals()->CoreMods.callEvent("Tick", tick, deltaTime);
}

void MDML::InitCoreMods() {
	UE4::InitSDK();
	Log::Info_UML("Engine Classes Loaded");
	auto& CoreMods = Global::GetGlobals()->CoreMods;

	if (CoreMods.size() > 0)
	{
		for (size_t i = 0; i < CoreMods.size(); i++)
		{
			auto CurrentCoreMod = CoreMods[i];
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
	if (SDK::SelectedGameProfile.StaticLoadObject)
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
		if (SDK::SelectedGameProfile.StaticLoadObject)
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
						if (!SDK::SelectedGameProfile.ProcessInternals)
						{
							if (!SDK::SelectedGameProfile.UsesFNamePool || !SDK::SelectedGameProfile.IsUsing4_22)
							{
								if (ModActor->DoesObjectContainFunction("PostBeginPlay"))
								{
									SDK::SelectedGameProfile.ProcessInternals = (DWORD64)ModActor->GetFunction("PostBeginPlay")->GetFunction();
								}
								else if (ModActor->DoesObjectContainFunction("ModMenuButtonPressed"))
								{
									SDK::SelectedGameProfile.ProcessInternals = (DWORD64)ModActor->GetFunction("ModMenuButtonPressed")->GetFunction();
								}
							}
						}
						IsProcessInternalsHooked = true;
						if (SDK::SelectedGameProfile.ProcessInternals)
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
	if (!SDK::SelectedGameProfile.IsUsingDeferedSpawn) {
		return UE4::UWorld::GetWorld()->SpawnActor(Class, &transform, &spawnParams);
	}
	else {
		return UE4::UGameplayStatics::BeginDeferredActorSpawnFromClass((UE4::AActor*)Class, transform, UE4::ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
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
	IsProcessInternalsHooked = false;
	GameStateClassInitNotRan = true;
	SDK::SelectedGameProfile = GameProfile();
	_fcloseall();
}
std::string MDML::FormatPath(const std::filesystem::path& path) {
	return std::filesystem::relative(path, SDK::SelectedGameProfile.rootGameDir).string();
}
std::string MDML::GetDataFolder() {
	static std::filesystem::path path = L"";
	if (path.empty() || !std::filesystem::exists(path)) {
		PWSTR wpath = NULL;
		HRESULT hr = SHGetKnownFolderPath(FOLDERID_LocalAppData, 0, NULL, &wpath);
		path = std::wstring(wpath) + L"\\Medieval_Dynasty\\Saved\\";
	}
	return path.string();
}
#define CHECK(var, name) if(!var) {Log::Error_MDML("{0} not found!", name);} else {Log::Info_MDML("{0}: 0x{1:x}", name, var);}

bool SetupProfile(const std::string& Path) {
	SDK::SelectedGameProfile.ImGuiFile = Path + "/Config/WindowConfig.ini";
	SDK::SelectedGameProfile.NoOverwriteFile = Path + "/Config/NoOverwrite.ini";
	SDK::SelectedGameProfile.HardLinksFile = Path + "/Config/ModLinks.bin";

	INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
	INI LoaderInfo(Path + "/" + ModLoaderConfigFile, true);

#pragma region Logs and Debug features
	//log dir detection
	if (LoaderInfo.select("General")) {
		std::string logDir = Path + "/" + DEFAULT_LOG_DIR;

		logDir = Path + "/" + LoaderInfo.get("General", "LogDir", logDir);
		auto logFileDir = (std::filesystem::path(logDir));

		if (!std::filesystem::exists(logFileDir))
			std::filesystem::create_directories(logFileDir);

		SDK::SelectedGameProfile.LogDir = logFileDir.string();
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
	}
	Log::Init(SDK::SelectedGameProfile.LogDir);
	Log::Info_UML("Loader Created by ~Russell.J Release V {0}", UML_VERSION);
	Log::Info_MDML("Optimized and edited for Medieval Dynasty by Stulu");
	Log::Info_MDML("Medieval Dynasty Mod Loader Version {0}", MODLOADER_VERSION);
	Log::Info_MDML("Medieval Dynasty Version {0}", MEDIEVAL_VERSION);

	MDML::UnrealEngineLoggerInstance = Logger::Create("UE_LOG", Log::getLogFile("UE_LOG-log.txt"));
	SDK::SelectedGameProfile.UnrealLogger = MDML::UnrealEngineLoggerInstance->getLogger();

	SDK::SelectedGameProfile.bEnableGUI = LoaderInfo.getAs<int>("DEBUG", "UseDebugUI", 0);

	if (SDK::SelectedGameProfile.bEnableGUI) {
		SDK::SelectedGameProfile.bEnableGUI = IsDirectX11();
		if (!SDK::SelectedGameProfile.bEnableGUI)
			Log::Warn_MDML("Gui was disabled, maybe switch rendering mode to directx11 to enable");
	}
#pragma endregion

	//profile detection
	LoaderInfo.select("General");
	std::string Profile = Path + "/" + LoaderInfo.get("General", "Profile", "Config/Default.profile");
	if (!std::filesystem::exists(Profile)) {
		Log::Error_MDML("Profile {0} not found!", Profile.c_str());
		return false;
	}

#pragma region Overwrite System
	//generate and load NoOverwrite File
	SDK::SelectedGameProfile.rootGameDir = std::filesystem::current_path().string();
	if (!std::filesystem::exists(SDK::SelectedGameProfile.NoOverwriteFile)) {
		Log::Warn_MDML("No NoOverwrite file loaded, generating one...");
		if (FILE* file = fopen(SDK::SelectedGameProfile.NoOverwriteFile.c_str(), "w")) {
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
			fprintf(file, "; The Mod Loader overwrites the ue4 file detection(its the simplest way of saying it even if its wrong)\n");
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
		Log::Warn_MDML("NoOverwrite file generated to {0}, if you have mods installed remove them from the list or change to false", SDK::SelectedGameProfile.NoOverwriteFile);
	}
	if (std::filesystem::exists(SDK::SelectedGameProfile.NoOverwriteFile)) {
		std::ifstream stream;
		stream.open(SDK::SelectedGameProfile.NoOverwriteFile);
		std::string line;
		while (std::getline(stream, line)) {
			if (line._Starts_with(";") || line._Starts_with("["))
				continue;
			size_t seperatorPos = line.find_last_of("=");
			std::string fileName = line.substr(0, seperatorPos);
			std::string value = line.substr(seperatorPos + 1, line.npos);
			std::transform(value.begin(), value.end(), value.begin(), [](char c) -> char { return std::tolower(c); }); // to lowercase
			if (value == "true" || value == "1")
				SDK::SelectedGameProfile.disableOverwriteFiles[fileName] = true;
			else if (value == "false" || value == "0")
				SDK::SelectedGameProfile.disableOverwriteFiles[fileName] = false;
		}
	}
	else {
		Log::Error_MDML("Error {0} could not be opened", SDK::SelectedGameProfile.NoOverwriteFile);
	}

	if (std::filesystem::exists(Profile))
	{
		Log::Info_UML("Profile Detected: {0}", MDML::FormatPath(Profile));
		std::ifstream file("Profile");

		INI GameInfo(Profile, true);
		if (GameInfo.select("Overwrites")) {
			SDK::SelectedGameProfile.ModOverwritesEnabled = GameInfo.getAs<int>("Overwrites", "Enabled", 0);
			SDK::SelectedGameProfile.UseHardLinks = GameInfo.getAs<int>("Overwrites", "UseHardLinks", 0);
		}
		else if (GameInfo.select("Overrides")) {
			SDK::SelectedGameProfile.ModOverwritesEnabled = GameInfo.getAs<int>("Overrides", "Enabled", 0);
			SDK::SelectedGameProfile.UseHardLinks = GameInfo.getAs<int>("Overrides", "UseHardLinks", 0);
		}
		

		if (SDK::SelectedGameProfile.ModOverwritesEnabled) {
			Log::Info_MDML("Enabled Mod overwrites using {0} links", SDK::SelectedGameProfile.UseHardLinks ? "Hard" : "Sym");
		}
#pragma endregion

#pragma region GameInfo
		GameInfo.select("GameInfo");
		SDK::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray = GameInfo.getAs<int>("GameInfo", "IsUsingFChunkedFixedUObjectArray", 0);
		SDK::SelectedGameProfile.UsesFNamePool = GameInfo.getAs<int>("GameInfo", "UsesFNamePool", 0);
		SDK::SelectedGameProfile.IsUsingDeferedSpawn = GameInfo.getAs<int>("GameInfo", "IsUsingDeferedSpawn", 0);
		SDK::SelectedGameProfile.IsUsing4_22 = GameInfo.getAs<int>("GameInfo", "IsUsing4_22", 0);
		SDK::SelectedGameProfile.bIsDefaultObjectArrayed = GameInfo.getAs<int>("GameInfo", "IsDefaultObjectArrayed", 0);
		SDK::SelectedGameProfile.bDelayGUISpawn = GameInfo.getAs<int>("GameInfo", "DelayGUISpawn", 0);

		if (GameInfo.get("GameInfo", "BeginPlayOverwrite", "") != "")
		{
			SDK::SelectedGameProfile.BeginPlayOverwrite = GameInfo.get("GameInfo", "BeginPlayOverwrite", "");
		}
#pragma endregion

#pragma region GInfo defs
		if (GameInfo.select("GInfo"))
		{
			if (GameInfo.getAs<int>("GInfo", "IsGInfoPatterns", 0) == 1)
			{
				if (GameInfo.getAs<int>("GInfo", "IsSimple", 0) == 1) {
					if (SDK::SelectedGameProfile.UsesFNamePool)
					{
						auto FPoolPat = Pattern::Find(GameInfo.get("GameInfo", "FPool", "74 09 48 8D 15 ? ? ? ? EB 16").c_str());
						if (FPoolPat != nullptr)
						{
							auto FPoolPatoffset = *reinterpret_cast<uint32_t*>(FPoolPat + 5);
							SDK::SelectedGameProfile.GName = (DWORD64)(FPoolPat + 9 + FPoolPatoffset);
						}
						DWORD64 poolPattern = (DWORD64)FPoolPat;
						CHECK(poolPattern, "FPool");
					}
					else
					{
						auto GNamePat = Pattern::Find(GameInfo.get("GameInfo", "GName", "E8 ? ? ? ? 48 8B C3 48 89 1D ? ? ? ? 48 8B 5C 24").c_str());
						if (GNamePat != nullptr)
						{
							auto GNamesAddress = *reinterpret_cast<uint32_t*>(GNamePat + 11);
							SDK::SelectedGameProfile.GName = (DWORD64)(GNamePat + 15 + GNamesAddress);
						}
					}

					auto GObjectPat = Pattern::Find(GameInfo.get("GameInfo", "GObject", "8B 46 10 3B 46 3C 75 0F 48 8B D6 48 8D 0D ? ? ? ? E8").c_str());
					if (GObjectPat != nullptr)
					{
						auto GObjectOffset = *reinterpret_cast<uint32_t*>(GObjectPat + 14);
						SDK::SelectedGameProfile.GObject = (DWORD64)(GObjectPat + 18 + GObjectOffset);
					}

					auto GWorldPat = Pattern::Find(GameInfo.get("GameInfo", "GWorld", "0F 2E ? 74 ? 48 8B 1D ? ? ? ? 48 85 DB 74").c_str());
					if (GWorldPat != nullptr)
					{
						auto GWorldAddress = *reinterpret_cast<uint32_t*>(GWorldPat + 8);
						SDK::SelectedGameProfile.GWorld = (DWORD64)(GWorldPat + 12 + GWorldAddress);
					}
					//auto GEnginePat = Pattern::Find("49EAA58");
				}
				else {
					auto GName = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GName", "").c_str());
					auto GNamesOffset = *reinterpret_cast<uint32_t*>(GName + GameInfo.getAs<int>("GInfo", "GNameFirstOpCodes", 0));
					SDK::SelectedGameProfile.GName = (GName + GameInfo.getAs<int>("GInfo", "GNameTotalByteInstruction", 0) + GNamesOffset);

					auto GObject = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GObject", "").c_str());
					auto GObjectOffset = *reinterpret_cast<uint32_t*>(GObject + GameInfo.getAs<int>("GInfo", "GObjectFirstOpCodes", 0));
					SDK::SelectedGameProfile.GObject = (GObject + GameInfo.getAs<int>("GInfo", "GObjectTotalByteInstruction", 0) + GObjectOffset);

					auto GWorld = (DWORD64)Pattern::Find(GameInfo.get("GInfo", "GWorld", "").c_str());
					auto GWorldOffset = *reinterpret_cast<uint32_t*>(GWorld + GameInfo.getAs<int>("GInfo", "GWorldFirstOpCodes", 0));
					SDK::SelectedGameProfile.GWorld = (GWorld + GameInfo.getAs<int>("GInfo", "GWorldTotalByteInstruction", 0) + GWorldOffset);

				}
				Log::Info_MDML("GInfo Patterns Loaded");
			}
			else
			{
				SDK::SelectedGameProfile.GName = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GName", ""));
				SDK::SelectedGameProfile.GObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GObject", ""));
				SDK::SelectedGameProfile.GWorld = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("GInfo", "GWorld", ""));
				Log::Info_UML("GInfo Offset Loaded");
			}
		}
		else
		{
			Log::Error_MDML("GInfo not provided!");
			//auto GEnginePat = Pattern::Find("49EAA58");
		}
		CHECK(SDK::SelectedGameProfile.GName, "GName");
		CHECK(SDK::SelectedGameProfile.GObject, "GObject");
		CHECK(SDK::SelectedGameProfile.GWorld, "GWorld");
#pragma endregion

#pragma region UCore defs
		if (GameInfo.select("UObjectDef"))
		{
			SDK::SelectedGameProfile.IsUObjectMissing = false;
			SDK::SelectedGameProfile.defs.UObject.Index = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Index", ""));
			SDK::SelectedGameProfile.defs.UObject.Class = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Class", ""));
			SDK::SelectedGameProfile.defs.UObject.Name = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Name", ""));
			SDK::SelectedGameProfile.defs.UObject.Outer = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Outer", ""));
		}

		if (GameInfo.select("UFieldDef"))
		{
			SDK::SelectedGameProfile.IsUFieldMissing = false;

			GameInfo.select("UFieldDef");
			SDK::SelectedGameProfile.defs.UField.Next = (uint16_t)StringToDWord(GameInfo.get("UFieldDef", "Next", ""));
		}
		if (GameInfo.select("UStructDef"))
		{
			SDK::SelectedGameProfile.IsUStructMissing = false;
			GameInfo.select("UStructDef");
			SDK::SelectedGameProfile.defs.UStruct.SuperStruct = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "SuperStruct", ""));
			SDK::SelectedGameProfile.defs.UStruct.Children = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "Children", ""));
			SDK::SelectedGameProfile.defs.UStruct.PropertiesSize = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "PropertiesSize", ""));
		}
		if (GameInfo.select("UEnumDef")) {
			SDK::SelectedGameProfile.IsUEnumMissing = false;
			GameInfo.select("UEnumDef");
			SDK::SelectedGameProfile.defs.UEnum.CppType = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppType", ""));
			SDK::SelectedGameProfile.defs.UEnum.Names = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Names", ""));
			SDK::SelectedGameProfile.defs.UEnum.CppForm = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppForm", ""));
			SDK::SelectedGameProfile.defs.UEnum.Flags = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Flags", ""));
			SDK::SelectedGameProfile.defs.UEnum.DisplayNameFn = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "DisplayNameFn", ""));
			SDK::SelectedGameProfile.defs.UEnum.UserDefDisplayNameMap = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "UserDefDisplayNameMap", ""));
		}
		if (GameInfo.select("UFunctionDef"))
		{
			SDK::SelectedGameProfile.IsUFunctionMissing = false;
			GameInfo.select("UFunctionDef");
			SDK::SelectedGameProfile.defs.UFunction.FunctionFlags = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "FunctionFlags", ""));
			SDK::SelectedGameProfile.defs.UFunction.NumParams = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "NumParams", ""));
			SDK::SelectedGameProfile.defs.UFunction.ParamsSize = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ParamsSize", ""));
			SDK::SelectedGameProfile.defs.UFunction.ReturnValueOffset = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ReturnValueOffset", ""));
			SDK::SelectedGameProfile.defs.UFunction.Func = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "Func", ""));
		}

		if (GameInfo.select("Property"))
		{
			SDK::SelectedGameProfile.bIsFProperty = GameInfo.getAs<int>("Property", "IsFProperty", 0);
			SDK::SelectedGameProfile.defs.Property.ArrayDim = (uint16_t)StringToDWord(GameInfo.get("Property", "ArrayDim", ""));
			SDK::SelectedGameProfile.defs.Property.ElementSize = (uint16_t)StringToDWord(GameInfo.get("Property", "ElementSize", ""));
			SDK::SelectedGameProfile.defs.Property.Offset = (uint16_t)StringToDWord(GameInfo.get("Property", "Offset", ""));
			SDK::SelectedGameProfile.defs.Property.Flags = (uint16_t)StringToDWord(GameInfo.get("Property", "Flags", ""));
			if (SDK::SelectedGameProfile.bIsFProperty)
			{
				GameInfo.select("FField");
				SDK::SelectedGameProfile.defs.FField.Name = (uint16_t)StringToDWord(GameInfo.get("FField", "Name", ""));
				SDK::SelectedGameProfile.defs.FField.Next = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));
				SDK::SelectedGameProfile.defs.FField.ClassPrivate = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));

				if (GameInfo.select("FFieldClass")) {
					SDK::SelectedGameProfile.defs.FFieldClass.Name = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "Name", ""));
					SDK::SelectedGameProfile.defs.FFieldClass.ID = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "ID", ""));
					SDK::SelectedGameProfile.defs.FFieldClass.CastFlags = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "CastFlags", ""));
					SDK::SelectedGameProfile.defs.FFieldClass.SuperClass = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "SuperClass", ""));
				}
			}
		}
		else
		{
			SDK::SelectedGameProfile.IsPropertyMissing = true;
		}
#pragma endregion

#pragma region Function defs
		if (GameInfo.select("FunctionInfo"))
		{
			if (GameInfo.getAs<int>("FunctionInfo", "IsFunctionPatterns", 0) == 0)
			{
				SDK::SelectedGameProfile.GameStateInit = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "GameStateInit", ""));
				SDK::SelectedGameProfile.BeginPlay = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "BeginPlay", ""));
				SDK::SelectedGameProfile.Tick = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "Tick", ""));
				SDK::SelectedGameProfile.StaticLoadObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "StaticLoadObject", ""));
				SDK::SelectedGameProfile.StaticFindObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "StaticFindObject", ""));
				SDK::SelectedGameProfile.SpawnActorFTrans = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "SpawnActorFTrans", ""));
				SDK::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "CallFunctionByNameWithArguments", ""));
				SDK::SelectedGameProfile.ProcessEvent = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "ProcessEvent", ""));
				SDK::SelectedGameProfile.CreateDefaultObject = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "CreateDefaultObject", ""));
				SDK::SelectedGameProfile.GetDisplayNameTextByIndex = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("FunctionInfo", "GetDisplayNameTextByIndex", ""));
				Log::Info_UML("Function Offsets Set!");
			}
			else
			{
				SDK::SelectedGameProfile.GameStateInit = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "GameStateInit", "").c_str());
				SDK::SelectedGameProfile.BeginPlay = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "BeginPlay", "").c_str());
				SDK::SelectedGameProfile.Tick = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "Tick", "").c_str());
				SDK::SelectedGameProfile.StaticLoadObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "StaticLoadObject", "").c_str());
				SDK::SelectedGameProfile.StaticFindObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "StaticFindObject", "").c_str());
				SDK::SelectedGameProfile.SpawnActorFTrans = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "SpawnActorFTrans", "").c_str());
				SDK::SelectedGameProfile.CallFunctionByNameWithArguments = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "CallFunctionByNameWithArguments", "").c_str());
				SDK::SelectedGameProfile.ProcessEvent = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "ProcessEvent", "").c_str());
				SDK::SelectedGameProfile.CreateDefaultObject = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "CreateDefaultObject", "").c_str());
				SDK::SelectedGameProfile.GetDisplayNameTextByIndex = (DWORD64)Pattern::Find(GameInfo.get("FunctionInfo", "GetDisplayNameTextByIndex", "").c_str());
			}

			CHECK(SDK::SelectedGameProfile.GameStateInit, "GameStateInit");
			CHECK(SDK::SelectedGameProfile.BeginPlay, "BeginPlay");
			CHECK(SDK::SelectedGameProfile.Tick, "Tick");
			CHECK(SDK::SelectedGameProfile.StaticLoadObject, "StaticLoadObject");
			CHECK(SDK::SelectedGameProfile.StaticFindObject, "StaticFindObject");
			CHECK(SDK::SelectedGameProfile.SpawnActorFTrans, "SpawnActorFTrans");
			CHECK(SDK::SelectedGameProfile.CallFunctionByNameWithArguments, "CallFunctionByNameWithArguments");
			CHECK(SDK::SelectedGameProfile.ProcessEvent, "ProcessEvent");
			CHECK(SDK::SelectedGameProfile.CreateDefaultObject, "CreateDefaultObject");
			CHECK(SDK::SelectedGameProfile.GetDisplayNameTextByIndex, "GetDisplayNameTextByIndex");

		}
		else {
			Log::Info_MDML("Function Patterns Not Set!");
			Log::Info_MDML("GameStateInit: 0x{0:x}", SDK::SelectedGameProfile.GameStateInit);
			Log::Info_MDML("BeginPlay: 0x{0:x}", SDK::SelectedGameProfile.BeginPlay);
			Log::Info_MDML("Tick: 0x{0:x}", SDK::SelectedGameProfile.Tick);
			Log::Info_MDML("StaticLoadObject: 0x{0:x}", SDK::SelectedGameProfile.StaticLoadObject);
			Log::Info_MDML("StaticFindObject: 0x{0:x}", SDK::SelectedGameProfile.StaticFindObject);
			Log::Info_MDML("SpawnActorFTrans: 0x{0:x}", SDK::SelectedGameProfile.SpawnActorFTrans);
			Log::Info_MDML("CallFunctionByNameWithArguments: 0x{0:x}", SDK::SelectedGameProfile.CallFunctionByNameWithArguments);
			Log::Info_MDML("ProcessEvent: 0x{0:x}", SDK::SelectedGameProfile.ProcessEvent);
			Log::Info_MDML("CreateDefaultObject: 0x{0:x}", SDK::SelectedGameProfile.CreateDefaultObject);
			Log::Info_MDML("GetDisplayNameTextByIndex: 0x{0:x}", SDK::SelectedGameProfile.GetDisplayNameTextByIndex);
		}
#pragma endregion

#pragma region ProcessInternal def
		if (GameInfo.select("ProcessInternalFunction"))
		{
			SDK::SelectedGameProfile.ProcessInternals = (DWORD64)Pattern::Find(GameInfo.get("ProcessInternalFunction", "ProcessInternal", "").c_str());
		}
		else
		{
			if (SDK::SelectedGameProfile.UsesFNamePool || SDK::SelectedGameProfile.IsUsing4_22)
			{
				DWORD64 ProcessAddy = (DWORD64)Pattern::Find("41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8");
				if (ProcessAddy)
				{
					auto ProcessAddyOffset = *reinterpret_cast<uint32_t*>(ProcessAddy + 16);
					SDK::SelectedGameProfile.ProcessInternals = (ProcessAddy + 20 + ProcessAddyOffset);
				}
			}
		}
		CHECK(SDK::SelectedGameProfile.ProcessInternals, "ProcessInternals");

#pragma endregion

#pragma region StaticConstructObejct_InternalInfo def
		if (GameInfo.select("StaticConstructObejct_InternalInfo"))
		{
			SDK::SelectedGameProfile.IsUsingUpdatedStaticConstruct = GameInfo.getAs<int>("StaticConstructObejct_InternalInfo", "IsUsingUpdatedStaticConstruct", 0);
			SDK::SelectedGameProfile.StaticConstructObject_Internal = (DWORD64)Pattern::Find(GameInfo.get("StaticConstructObejct_InternalInfo", "StaticConstructObject_InternalFunction", "").c_str());
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
					SDK::SelectedGameProfile.IsUsingUpdatedStaticConstruct = true;
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
			SDK::SelectedGameProfile.StaticConstructObject_Internal = (DWORD64)MEM::GetAddressPTR(StaticConstructObject_Internal, 0x1, 0x5);
			CHECK(SDK::SelectedGameProfile.StaticConstructObject_Internal, "StaticConstructObject_Internal");
		}
#pragma endregion

#pragma region PakOverwrite
		if (GameInfo.select("PakOverwrite")) {
			SDK::SelectedGameProfile.bPakOverride = GameInfo.getAs<int>("PakOverwrite", "bPakOverwrite", 0);
			if (SDK::SelectedGameProfile.bPakOverride) {
				if (GameInfo.getAs<int>("PakOverwrite", "IsFunctionPatterns", 0) == 0)
				{
					SDK::SelectedGameProfile.IsNonPakFilenameAllowed = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("PakOverwrite", "IsNonPakFilenameAllowed", ""));
					SDK::SelectedGameProfile.FindFileInPakFiles = (DWORD64)GetModuleHandleW(0) + StringToDWord(GameInfo.get("PakOverwrite", "FindFileInPakFiles", ""));
				}
				else
				{
					SDK::SelectedGameProfile.IsNonPakFilenameAllowed = (DWORD64)Pattern::Find(GameInfo.get("PakOverwrite", "IsNonPakFilenameAllowed", "").c_str());
					SDK::SelectedGameProfile.FindFileInPakFiles = (DWORD64)Pattern::Find(GameInfo.get("PakOverwrite", "FindFileInPakFiles", "").c_str());
				}
			}
			else {
				Log::Error_MDML("PakOverwrite Patterns not provided!");
			}
			CHECK(SDK::SelectedGameProfile.IsNonPakFilenameAllowed, "IsNonPakFilenameAllowed")
			CHECK(SDK::SelectedGameProfile.FindFileInPakFiles, "FindFileInPakFiles")
		}
#pragma endregion

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