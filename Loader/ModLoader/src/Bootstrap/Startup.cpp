#include "Core.h"
#include "Startup.h"

#include "Mods/ModLoading.h"
#include "Mods/Registry.h"
#include "Mods/LogicMods.h"
#include "Mods/OverwriteMods.h"
#include "MDML/Hooks.h"
#include "MDML/IniFile.h"
#include "MDML/Log.h"
#include "Runtime/EngineSetup.h"
#include "Runtime/GameHooks.h"
#include "Runtime/LoaderConfig.h"
#include "MDML/Paths.h"
#include "UI/D3D11Hook.h"
#include "UI/ImGuiHost.h"

#include "UE4.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"

namespace mdml::runtime {
	namespace {
		std::string GetModuleFilePath(HMODULE hModule)
		{
			std::string ModuleName = "";
			char szFileName[MAX_PATH] = { 0 };

			if (GetModuleFileNameA(hModule, szFileName, MAX_PATH))
				ModuleName = szFileName;

			return ModuleName;
		}

		// Milliseconds since the game process was created, for the startup timing log lines.
		unsigned long long MsSinceProcessStart()
		{
			FILETIME creation, exitTime, kernel, user, now;
			if (!GetProcessTimes(GetCurrentProcess(), &creation, &exitTime, &kernel, &user))
				return 0;
			GetSystemTimeAsFileTime(&now);
			ULARGE_INTEGER c, n;
			c.LowPart = creation.dwLowDateTime;
			c.HighPart = creation.dwHighDateTime;
			n.LowPart = now.dwLowDateTime;
			n.HighPart = now.dwHighDateTime;
			return n.QuadPart > c.QuadPart ? (n.QuadPart - c.QuadPart) / 10000 : 0;
		}

		// How many UObjects the engine has created so far: GUObjectArray.ObjObjects.NumElements
		// (FUObjectArray::ObjObjects at 0x10, FChunkedFixedUObjectArray::NumElements at 0x14, PDB-checked for 4.27).
		// Only logged, to see how far the engine got when the pak hooks went live.
		int GetUObjectCount()
		{
			if (!mdml::Addresses.GObject)
				return -1;
			return *(volatile int*)(mdml::Addresses.GObject + 0x10 + 0x14);
		}

		// Config/ModLoaderInfo.ini, logs, NoOverwrite list, symbols (was SetupProfile in MDML.cpp). Everything comes from
		// the one loader ini; the old [General] Profile key that named a second ini is not read any more (Wave 3E).
		bool SetupConfig(const std::string& mdmlDir) {
			const std::filesystem::path configPath = std::filesystem::path(mdmlDir) / ModLoaderConfigFile;
			const platform::IniFile loaderInfo(configPath);
			LoadLoaderConfig(mdmlDir, loaderInfo);
			if (!loaderInfo.IsLoaded()) {
				Log::Error_MDML("{0} not found, the loader is disabled", configPath.string());
				return false;
			}

			mods::LoadNoOverwriteList();

			Log::Info_MDML("Loader config: {0}", FormatPath(configPath));
			LoadFeatureConfig(loaderInfo);
			ResolveEngine(loaderInfo, mdmlDir);

			Log::Info_MDML("Loader config applied, engine resolved");
			return true;
		}

		// Blocking: MinHook, overwrite links, pak hooks, mod loading, game hooks, UI logic thread (was
		// HooksManager::SetupHooks). Mods are loaded synchronously, so every core mod is constructed (and has run OnLoad)
		// before the game hooks (InitGameState, BeginPlay, Tick) can fire.
		void InstallHooks()
		{
			Log::Info_UML("Setting Up Loader");
			// The process' only MH_Initialize; mods hook through mdml::platform::Hooks (Platform/Hooks.h).
			platform::Hooks::Initialize();
			Log::Info_MDML("Hooks initialized");
			Log::Info_UML("Loading Mods");

			// Mod loading in phases (docs/design/mod-components.md section 4): 0 scan, 1 core (DLLs + OnLoad, may change the
			// other components), 2 overwrite links over the final file lists, 3 Blueprint registration.
			mods::ScanMods();
			mods::LoadCoreMods();

			mods::SetPhase(mods::LoadPhase::Overwrite);
			if (Config.ModOverwritesEnabled)
				mods::CreateSysLinks();
			else
				mods::DeleteSysLinks(true);//if there are old files delete them

			if (Config.bPakOverride) {
				mods::InstallPakHooks();
				Log::Info_MDML("Pak overwrites loaded ({0} ms after process start, {1} UObjects exist)", MsSinceProcessStart(), GetUObjectCount());
			}

			mods::RegisterBlueprintMods();

			InstallGameHooks();

			ui::ImGuiHost::StartHotkeyThread();
			if (!Config.bDelayGUISpawn)
			{
				ui::D3D11Hook::Install();
			}
			Log::Info_MDML("Loader setup finished ({0} ms after process start)", MsSinceProcessStart());
		}

		// The loader's init thread. Everything here used to run inside DllMain under the loader lock.
		DWORD WINAPI InitThread(LPVOID module) {
			const ULONGLONG start = GetTickCount64();
			try {
				std::string path = GetModuleFilePath((HMODULE)module);
				path = path.substr(0, path.find_last_of("/\\"));
				const bool setupDone = SetupConfig(path);
				Log::Info_MDML("Config and engine setup took {0} ms", GetTickCount64() - start);
				if (setupDone)
					InstallHooks();
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
	}

	void Start(HMODULE module) {
		// DllMain must not load libraries, wait for threads or do heavy I/O, so the setup runs on its own thread.
		HANDLE thread = CreateThread(nullptr, 0, InitThread, module, 0, nullptr);
		if (thread)
			CloseHandle(thread);
		else
			OutputDebugStringA("MDML: could not create the init thread, the loader is disabled\r\n");
	}

	void ShutDown() {
		// The logger does not exist yet if the process exits before the init thread got to Log::Init.
		if (Log::getMDMLLogger())
			Log::Info_MDML("Shutting down");
		if (Config.ModOverwritesEnabled)
			mods::DeleteSysLinks();
		platform::Hooks::Shutdown(); // MH_DisableHook(MH_ALL_HOOKS) + MH_Uninitialize, for the loader's and all mods' hooks
		mods::ResetLogicMods();
		ResetGameHooks();
		// Reset all loader/engine state (was one `SDK::SelectedGameProfile = GameProfile()`).
		Config = LoaderConfig();
		mdml::Addresses = mdml::EngineAddresses();
		mdml::Layout = mdml::EngineLayout();
		mdml::UnrealLogger = nullptr;
		_fcloseall();
	}
}
