#include "Core.h"
#include "MDML.h"

#include "Utilities/HooksManager.h"
#include "Utilities/SymbolResolver.h"
#include "Utilities/GameThread.h"
#include "Globals.h"

#include "INI.h"

#include "UE4.h"
#include "Utilities/Pattern.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "Runtime/LoaderConfig.h"


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

	if (mdml::Addresses.StaticLoadObject) {
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
	if (Actor->IsA(UE4::ACustomClass::StaticClass(mdml::Config.BeginPlayOverwrite)))
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
	mdml::GameThread::RunPending();
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
	if (mdml::Addresses.StaticLoadObject)
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
	if (!mdml::Addresses.IsUsingDeferedSpawn) {
		return UE4::UWorld::GetWorld()->SpawnActor(Class, &transform, &spawnParams);
	}
	else {
		return UE4::UGameplayStatics::BeginDeferredActorSpawnFromClass((UE4::AActor*)Class, transform, UE4::ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
	}
}

// The loader's init thread. Everything here used to run inside DllMain under the loader lock.
// Order: SetupProfile (ini, logs, console, NoOverwrite file, symbols) -> HooksManager::SetupHooks
// (MinHook, overwrite links, pak hooks, mod loading, game hooks, UI logic thread).
static DWORD WINAPI InitThread(LPVOID module) {
	const ULONGLONG start = GetTickCount64();
	try {
		std::string path = GetModuleFilePath((HMODULE)module);
		path = path.substr(0, path.find_last_of("/\\"));
		const bool setupDone = SetupProfile(path);
		Log::Info_MDML("Profile setup took {0} ms", GetTickCount64() - start);
		if (setupDone)
			HooksManager::SetupHooks();
	}
	catch (const std::exception& ex) {
		if (Log::getMDMLLogger())
			Log::Critical_MDML("Loader initialization failed: {0}", ex.what());
		OutputDebugStringA((std::string("MDML: loader initialization failed: ") + ex.what() + "\r\n").c_str());
	}
	catch (...) {
		if (Log::getMDMLLogger())
			Log::Critical_MDML("Loader initialization failed with an unknown exception");
		OutputDebugStringA("MDML: loader initialization failed with an unknown exception\r\n");
	}
	return 0;
}

void MDML::Start(HMODULE module) {
	// DllMain must not load libraries, wait for threads or do heavy I/O, so the setup runs on its own thread.
	HANDLE thread = CreateThread(nullptr, 0, InitThread, module, 0, nullptr);
	if (thread)
		CloseHandle(thread);
	else
		OutputDebugStringA("MDML: could not create the init thread, the loader is disabled\r\n");
}
void MDML::ShutDown() {
	// The logger does not exist yet if the process exits before the init thread got to Log::Init.
	if (Log::getMDMLLogger())
		Log::Info_MDML("Shutting down");
	HooksManager::ShutDown();
	IsProcessInternalsHooked = false;
	GameStateClassInitNotRan = true;
	// Reset all loader/engine state (was one `SDK::SelectedGameProfile = GameProfile()`).
	mdml::Config = mdml::LoaderConfig();
	mdml::Addresses = mdml::EngineAddresses();
	mdml::Layout = mdml::EngineLayout();
	mdml::LayoutStatus = mdml::EngineLayoutStatus();
	mdml::UnrealLogger = nullptr;
	_fcloseall();
}
std::string MDML::FormatPath(const std::filesystem::path& path) {
	return std::filesystem::relative(path, mdml::Config.rootGameDir).string();
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

// Decorated names from the game PDB. Decorated names pin the exact overload and still resolve after patches
// as long as the engine signature does not change.
namespace Symbols {
	constexpr const char* NamePoolData = "NamePoolData"; // file-static, has no public symbol
	constexpr const char* GUObjectArray = "?GUObjectArray@@3VFUObjectArray@@A";
	constexpr const char* GWorld = "?GWorld@@3VUWorldProxy@@A";
	constexpr const char* InitGameState = "?InitGameState@AGameModeBase@@UEAAXXZ";
	constexpr const char* BeginPlay = "?BeginPlay@AActor@@MEAAXXZ";
	constexpr const char* WorldTick = "?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z";
	constexpr const char* StaticLoadObject = "?StaticLoadObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W2IPEAVUPackageMap@@_NPEBVFLinkerInstancingContext@@@Z";
	constexpr const char* StaticFindObject = "?StaticFindObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W_N@Z";
	constexpr const char* SpawnActorFTrans = "?SpawnActor@UWorld@@QEAAPEAVAActor@@PEAVUClass@@PEBUFTransform@@AEBUFActorSpawnParameters@@@Z";
	constexpr const char* CallFunctionByNameWithArguments = "?CallFunctionByNameWithArguments@UObject@@QEAA_NPEB_WAEAVFOutputDevice@@PEAV1@_N@Z";
	constexpr const char* ProcessEvent = "?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z";
	constexpr const char* CreateDefaultObject = "?CreateDefaultObject@UClass@@MEAAPEAVUObject@@XZ";
	constexpr const char* UserDefinedEnumGetDisplayNameTextByIndex = "?GetDisplayNameTextByIndex@UUserDefinedEnum@@UEBA?AVFText@@H@Z";
	constexpr const char* ProcessLocalScriptFunction = "?ProcessLocalScriptFunction@@YAXPEAVUObject@@AEAUFFrame@@QEAX@Z";
	constexpr const char* StaticConstructObject_Internal = "?StaticConstructObject_Internal@@YAPEAVUObject@@AEBUFStaticConstructObjectParameters@@@Z";
	constexpr const char* IsNonPakFilenameAllowed = "?IsNonPakFilenameAllowed@FPakPlatformFile@@AEAA_NAEBVFString@@@Z";
	// Member overload; the static (TArray<FPakListEntry>&, ...) overload is called from it.
	constexpr const char* FindFileInPakFiles = "?FindFileInPakFiles@FPakPlatformFile@@QEAA_NPEB_WPEAV?$TRefCountPtr@VFPakFile@@@@PEAUFPakEntry@@@Z";
}

static void LogResolved(const char* name, DWORD64 address, const char* source) {
	if (address)
		Log::Info_MDML("{0}: 0x{1:x} ({2}, rva 0x{3:x})", name, address, source, address - (DWORD64)GetModuleHandleW(nullptr));
	else
		Log::Error_MDML("{0} not found!", name);
}

// A function pattern must match exactly once.
static DWORD64 ScanFunction(const std::string& pattern, const char* name) {
	if (pattern.empty())
		return 0;
	auto hits = Pattern::FindAll(pattern.c_str());
	if (hits.size() > 1)
		Log::Error_MDML("{0}: pattern is ambiguous ({1} matches), ignoring it", name, hits.size());
	return hits.size() == 1 ? (DWORD64)hits[0] : 0;
}

// PDB symbol first, then the ini value of section/key, which is a pattern or (isPatterns == false) a module offset.
static DWORD64 ResolveFunction(INI& ini, bool isPatterns, const char* section, const char* key, std::initializer_list<const char*> symbols) {
	DWORD64 address = SymbolResolver::Find(symbols);
	if (address) {
		LogResolved(key, address, "pdb");
		return address;
	}
	ini.select(section); // INI::get ignores its section argument and reads the selected section
	std::string value = ini.get(key, "");
	if (isPatterns) {
		address = ScanFunction(value, key);
		LogResolved(key, address, "pattern");
	}
	else if (!value.empty()) {
		address = (DWORD64)GetModuleHandleW(nullptr) + StringToDWord(value);
		LogResolved(key, address, "offset");
	}
	else {
		LogResolved(key, 0, "");
	}
	return address;
}

// Same for globals; a [GInfo] pattern points at an instruction whose RIP-relative operand is the global.
static DWORD64 ResolveGlobal(INI& ini, bool isPatterns, bool isSimple, const char* name, std::initializer_list<const char*> symbols, const char* key, size_t dispOffset, size_t instrEnd) {
	DWORD64 address = SymbolResolver::Find(symbols);
	if (address) {
		LogResolved(name, address, "pdb");
		return address;
	}
	ini.select("GInfo"); // INI::get ignores its section argument and reads the selected section
	std::string value = ini.get(key, "");
	if (value.empty()) {
		LogResolved(name, 0, "");
		return 0;
	}
	if (!isPatterns) {
		address = (DWORD64)GetModuleHandleW(nullptr) + StringToDWord(value);
		LogResolved(name, address, "offset");
		return address;
	}
	if (!isSimple) {
		dispOffset = ini.getAs<int>(std::string(key) + "FirstOpCodes", 0);
		instrEnd = ini.getAs<int>(std::string(key) + "TotalByteInstruction", 0);
	}
	address = (DWORD64)Pattern::FindRipTarget(value.c_str(), dispOffset, instrEnd);
	if (!address && !Pattern::FindAll(value.c_str()).empty())
		Log::Error_MDML("{0}: pattern matches resolve to different addresses, ignoring it", name);
	LogResolved(name, address, "pattern");
	return address;
}

bool SetupProfile(const std::string& Path) {
	mdml::Config.ImGuiFile = Path + "/Config/WindowConfig.ini";
	mdml::Config.NoOverwriteFile = Path + "/Config/NoOverwrite.ini";
	mdml::Config.HardLinksFile = Path + "/Config/ModLinks.bin";

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

		mdml::Config.LogDir = logFileDir.string();
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
	Log::Init(mdml::Config.LogDir);
	Log::Info_UML("Loader Created by ~Russell.J Release V {0}", UML_VERSION);
	Log::Info_MDML("Optimized and edited for Medieval Dynasty by Stulu");
	Log::Info_MDML("Medieval Dynasty Mod Loader Version {0}", MODLOADER_VERSION);
	Log::Info_MDML("Medieval Dynasty Version {0}", MEDIEVAL_VERSION);
	Log::Info_MDML("Game executable build {0}", SymbolResolver::GetBuildId());

	MDML::UnrealEngineLoggerInstance = Logger::Create("UE_LOG", Log::getLogFile("UE_LOG-log.txt"));
	mdml::UnrealLogger = MDML::UnrealEngineLoggerInstance->getLogger();

	mdml::Config.bEnableGUI = LoaderInfo.getAs<int>("DEBUG", "UseDebugUI", 0);

	if (mdml::Config.bEnableGUI) {
		mdml::Config.bEnableGUI = IsDirectX11();
		if (!mdml::Config.bEnableGUI)
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
	// Game root (where Engine/ and Medieval_Dynasty/ live) from MDML.dll's location: <root>/Medieval_Dynasty/Binaries/Win64.
	// Not from the working directory: the engine switches it to Binaries/Win64 early, and since Wave 2.2 the setup runs
	// on the init thread after that, which broke the NoOverwrite lookup (loose game files were treated as mod overwrites).
	const std::filesystem::path rootGameDir = std::filesystem::weakly_canonical(std::filesystem::path(Path) / "../../..");
	mdml::Config.rootGameDir = rootGameDir.string();
	if (!std::filesystem::exists(mdml::Config.NoOverwriteFile)) {
		Log::Warn_MDML("No NoOverwrite file loaded, generating one...");
		if (FILE* file = fopen(mdml::Config.NoOverwriteFile.c_str(), "w")) {
			//dir, files
			std::unordered_map<std::string, std::vector<std::string>> paths;
			for (auto path : std::filesystem::recursive_directory_iterator(rootGameDir / "Medieval_Dynasty/Content")) {
				if (path.is_directory()) {
					continue;
				}
				std::string strPath = std::filesystem::relative(path.path(), rootGameDir).string();
				paths[std::filesystem::relative(path.path().parent_path(), rootGameDir).string()].push_back(strPath);

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
		Log::Warn_MDML("NoOverwrite file generated to {0}, if you have mods installed remove them from the list or change to false", mdml::Config.NoOverwriteFile);
	}
	if (std::filesystem::exists(mdml::Config.NoOverwriteFile)) {
		std::ifstream stream;
		stream.open(mdml::Config.NoOverwriteFile);
		std::string line;
		while (std::getline(stream, line)) {
			if (line._Starts_with(";") || line._Starts_with("["))
				continue;
			size_t seperatorPos = line.find_last_of("=");
			std::string fileName = line.substr(0, seperatorPos);
			std::string value = line.substr(seperatorPos + 1, line.npos);
			std::transform(value.begin(), value.end(), value.begin(), [](char c) -> char { return std::tolower(c); }); // to lowercase
			if (value == "true" || value == "1")
				mdml::Config.disableOverwriteFiles[fileName] = true;
			else if (value == "false" || value == "0")
				mdml::Config.disableOverwriteFiles[fileName] = false;
		}
	}
	else {
		Log::Error_MDML("Error {0} could not be opened", mdml::Config.NoOverwriteFile);
	}

	if (std::filesystem::exists(Profile))
	{
		Log::Info_UML("Profile Detected: {0}", MDML::FormatPath(Profile));
		std::ifstream file("Profile");

		INI GameInfo(Profile, true);
		if (GameInfo.select("Overwrites")) {
			mdml::Config.ModOverwritesEnabled = GameInfo.getAs<int>("Overwrites", "Enabled", 0);
			mdml::Config.UseHardLinks = GameInfo.getAs<int>("Overwrites", "UseHardLinks", 0);
		}
		else if (GameInfo.select("Overrides")) {
			mdml::Config.ModOverwritesEnabled = GameInfo.getAs<int>("Overrides", "Enabled", 0);
			mdml::Config.UseHardLinks = GameInfo.getAs<int>("Overrides", "UseHardLinks", 0);
		}
		

		if (mdml::Config.ModOverwritesEnabled) {
			Log::Info_MDML("Enabled Mod overwrites using {0} links", mdml::Config.UseHardLinks ? "Hard" : "Sym");
		}
#pragma endregion

		GameInfo.select("Symbols");
		if (GameInfo.getAs<int>("UsePdb", 1))
			SymbolResolver::Init();

#pragma region GameInfo
		GameInfo.select("GameInfo");
		mdml::Addresses.IsUsingFChunkedFixedUObjectArray = GameInfo.getAs<int>("GameInfo", "IsUsingFChunkedFixedUObjectArray", 0);
		mdml::Addresses.UsesFNamePool = GameInfo.getAs<int>("GameInfo", "UsesFNamePool", 0);
		mdml::Addresses.IsUsingDeferedSpawn = GameInfo.getAs<int>("GameInfo", "IsUsingDeferedSpawn", 0);
		mdml::Addresses.IsUsing4_22 = GameInfo.getAs<int>("GameInfo", "IsUsing4_22", 0);
		mdml::Addresses.bIsDefaultObjectArrayed = GameInfo.getAs<int>("GameInfo", "IsDefaultObjectArrayed", 0);
		mdml::Config.bDelayGUISpawn = GameInfo.getAs<int>("GameInfo", "DelayGUISpawn", 0);

		if (GameInfo.get("GameInfo", "BeginPlayOverwrite", "") != "")
		{
			mdml::Config.BeginPlayOverwrite = GameInfo.get("GameInfo", "BeginPlayOverwrite", "");
		}
#pragma endregion

#pragma region GInfo defs
		// Globals: PDB symbol first, then the [GInfo] pattern (RIP-relative operand, all hits must agree), then raw offsets.
		if (GameInfo.select("GInfo") || SymbolResolver::IsAvailable())
		{
			const bool isPatterns = GameInfo.getAs<int>("GInfo", "IsGInfoPatterns", 1) == 1;
			const bool isSimple = GameInfo.getAs<int>("GInfo", "IsSimple", 1) == 1;

			if (mdml::Addresses.UsesFNamePool)
				mdml::Addresses.GName = ResolveGlobal(GameInfo, isPatterns, isSimple, "GName", { Symbols::NamePoolData }, "FPool", 5, 9);
			else
				mdml::Addresses.GName = ResolveGlobal(GameInfo, isPatterns, isSimple, "GName", {}, "GName", 11, 15);
			mdml::Addresses.GObject = ResolveGlobal(GameInfo, isPatterns, isSimple, "GObject", { Symbols::GUObjectArray }, "GObject", 14, 18);
			mdml::Addresses.GWorld = ResolveGlobal(GameInfo, isPatterns, isSimple, "GWorld", { Symbols::GWorld }, "GWorld", 8, 12);
		}
		else
		{
			Log::Error_MDML("GInfo not provided!");
		}
#pragma endregion

#pragma region UCore defs
		if (GameInfo.select("UObjectDef"))
		{
			mdml::LayoutStatus.IsUObjectMissing = false;
			mdml::Layout.UObject.Index = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Index", ""));
			mdml::Layout.UObject.Class = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Class", ""));
			mdml::Layout.UObject.Name = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Name", ""));
			mdml::Layout.UObject.Outer = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Outer", ""));
		}

		if (GameInfo.select("UFieldDef"))
		{
			mdml::LayoutStatus.IsUFieldMissing = false;

			GameInfo.select("UFieldDef");
			mdml::Layout.UField.Next = (uint16_t)StringToDWord(GameInfo.get("UFieldDef", "Next", ""));
		}
		if (GameInfo.select("UStructDef"))
		{
			mdml::LayoutStatus.IsUStructMissing = false;
			GameInfo.select("UStructDef");
			mdml::Layout.UStruct.SuperStruct = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "SuperStruct", ""));
			mdml::Layout.UStruct.Children = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "Children", ""));
			mdml::Layout.UStruct.PropertiesSize = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "PropertiesSize", ""));
		}
		if (GameInfo.select("UEnumDef")) {
			mdml::LayoutStatus.IsUEnumMissing = false;
			GameInfo.select("UEnumDef");
			mdml::Layout.UEnum.CppType = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppType", ""));
			mdml::Layout.UEnum.Names = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Names", ""));
			mdml::Layout.UEnum.CppForm = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppForm", ""));
			mdml::Layout.UEnum.Flags = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Flags", ""));
			mdml::Layout.UEnum.DisplayNameFn = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "DisplayNameFn", ""));
			mdml::Layout.UEnum.UserDefDisplayNameMap = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "UserDefDisplayNameMap", ""));
		}
		if (GameInfo.select("UFunctionDef"))
		{
			mdml::LayoutStatus.IsUFunctionMissing = false;
			GameInfo.select("UFunctionDef");
			mdml::Layout.UFunction.FunctionFlags = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "FunctionFlags", ""));
			mdml::Layout.UFunction.NumParams = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "NumParams", ""));
			mdml::Layout.UFunction.ParamsSize = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ParamsSize", ""));
			mdml::Layout.UFunction.ReturnValueOffset = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ReturnValueOffset", ""));
			mdml::Layout.UFunction.Func = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "Func", ""));
		}

		if (GameInfo.select("Property"))
		{
			mdml::Addresses.bIsFProperty = GameInfo.getAs<int>("Property", "IsFProperty", 0);
			mdml::Layout.Property.ArrayDim = (uint16_t)StringToDWord(GameInfo.get("Property", "ArrayDim", ""));
			mdml::Layout.Property.ElementSize = (uint16_t)StringToDWord(GameInfo.get("Property", "ElementSize", ""));
			mdml::Layout.Property.Offset = (uint16_t)StringToDWord(GameInfo.get("Property", "Offset", ""));
			mdml::Layout.Property.Flags = (uint16_t)StringToDWord(GameInfo.get("Property", "Flags", ""));
			if (mdml::Addresses.bIsFProperty)
			{
				GameInfo.select("FField");
				mdml::Layout.FField.Name = (uint16_t)StringToDWord(GameInfo.get("FField", "Name", ""));
				mdml::Layout.FField.Next = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));
				mdml::Layout.FField.ClassPrivate = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));

				if (GameInfo.select("FFieldClass")) {
					mdml::Layout.FFieldClass.Name = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "Name", ""));
					mdml::Layout.FFieldClass.ID = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "ID", ""));
					mdml::Layout.FFieldClass.CastFlags = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "CastFlags", ""));
					mdml::Layout.FFieldClass.SuperClass = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "SuperClass", ""));
				}
			}
		}
		else
		{
			mdml::LayoutStatus.IsPropertyMissing = true;
		}
#pragma endregion

#pragma region Function defs
		{
			GameInfo.select("FunctionInfo");
			const bool isPatterns = GameInfo.getAs<int>("FunctionInfo", "IsFunctionPatterns", 1) == 1;
			auto& profile = mdml::Addresses;
			profile.GameStateInit = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "GameStateInit", { Symbols::InitGameState });
			profile.BeginPlay = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "BeginPlay", { Symbols::BeginPlay });
			profile.Tick = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "Tick", { Symbols::WorldTick });
			profile.StaticLoadObject = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "StaticLoadObject", { Symbols::StaticLoadObject });
			profile.StaticFindObject = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "StaticFindObject", { Symbols::StaticFindObject });
			profile.SpawnActorFTrans = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "SpawnActorFTrans", { Symbols::SpawnActorFTrans });
			profile.CallFunctionByNameWithArguments = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "CallFunctionByNameWithArguments", { Symbols::CallFunctionByNameWithArguments });
			profile.ProcessEvent = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "ProcessEvent", { Symbols::ProcessEvent });
			profile.CreateDefaultObject = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "CreateDefaultObject", { Symbols::CreateDefaultObject });
			profile.GetDisplayNameTextByIndex = ResolveFunction(GameInfo, isPatterns, "FunctionInfo", "GetDisplayNameTextByIndex", { Symbols::UserDefinedEnumGetDisplayNameTextByIndex });
		}
#pragma endregion

#pragma region ProcessInternal def
		// The hook target is ProcessLocalScriptFunction, called from UObject::ProcessInternal.
		mdml::Addresses.ProcessInternals = SymbolResolver::Find({ Symbols::ProcessLocalScriptFunction });
		if (mdml::Addresses.ProcessInternals)
		{
			LogResolved("ProcessInternals", mdml::Addresses.ProcessInternals, "pdb");
		}
		else
		{
			GameInfo.select("ProcessInternalFunction");
			std::string pattern = GameInfo.get("ProcessInternal", "41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8");
			mdml::Addresses.ProcessInternals = (DWORD64)Pattern::FindRipTarget(pattern.c_str(), 16, 20);
			LogResolved("ProcessInternals", mdml::Addresses.ProcessInternals, "pattern");
		}
#pragma endregion

#pragma region StaticConstructObject_Internal def
		// UE 4.26+ takes a single FStaticConstructObjectParameters argument ("updated" signature).
		mdml::Addresses.StaticConstructObject_Internal = SymbolResolver::Find({ Symbols::StaticConstructObject_Internal });
		if (mdml::Addresses.StaticConstructObject_Internal)
		{
			mdml::Addresses.IsUsingUpdatedStaticConstruct = true;
			LogResolved("StaticConstructObject_Internal", mdml::Addresses.StaticConstructObject_Internal, "pdb");
		}
		else
		{
			GameInfo.select("StaticConstructObject_Internal");
			mdml::Addresses.IsUsingUpdatedStaticConstruct = GameInfo.getAs<int>("IsUsingUpdatedStaticConstruct", 1);
			mdml::Addresses.StaticConstructObject_Internal = ScanFunction(GameInfo.get("Pattern", ""), "StaticConstructObject_Internal");
			LogResolved("StaticConstructObject_Internal", mdml::Addresses.StaticConstructObject_Internal, "pattern");
		}
		if (!mdml::Addresses.StaticConstructObject_Internal)
			Log::Warn_MDML("Mods using the ModObjectInstance will not work properly.");
#pragma endregion

#pragma region PakOverwrite
		if (GameInfo.select("PakOverwrite")) {
			mdml::Config.bPakOverride = GameInfo.getAs<int>("PakOverwrite", "bPakOverwrite", 0);
			if (mdml::Config.bPakOverride) {
				const bool isPatterns = GameInfo.getAs<int>("PakOverwrite", "IsFunctionPatterns", 1) == 1;
				mdml::Addresses.IsNonPakFilenameAllowed = ResolveFunction(GameInfo, isPatterns, "PakOverwrite", "IsNonPakFilenameAllowed", { Symbols::IsNonPakFilenameAllowed });
				mdml::Addresses.FindFileInPakFiles = ResolveFunction(GameInfo, isPatterns, "PakOverwrite", "FindFileInPakFiles", { Symbols::FindFileInPakFiles });
			}
		}
#pragma endregion

		SymbolResolver::Shutdown();

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