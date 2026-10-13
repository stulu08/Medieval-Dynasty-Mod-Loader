#pragma once
#include "Core.h"

namespace mdml::platform {
	class IniFile;
}

// Loader settings: paths, UI and overwrite-system switches, the NoOverwrite map (Wave 2.4, was the loader part of
// GameInfo.h `GameProfile` / `SDK::SelectedGameProfile`).
// Filled on the init thread (Bootstrap/Startup.cpp) from MDML.dll's location, Config/ModLoaderInfo.ini and the game
// profile. All paths are absolute (never relative to the working directory).
namespace mdml::runtime {
	struct LoaderConfig {
		// <MDML dir>/<[General] LogDir>
		std::string LogDir;
		// <MDML dir>/Config/WindowConfig.ini (ImGui layout; BaseMod lists its folder)
		std::string ImGuiFile;
		// <MDML dir>/Config/NoOverwrite.ini
		std::string NoOverwriteFile;
		// <MDML dir>/Config/ModLinks.bin (record of the overwrite links MDML created)
		std::string HardLinksFile;
		//where the Engine and Game folder is located with the Manifest_NonUFSFiles_Win64.txt
		std::string rootGameDir = "";

		// [DEBUG] UseDebugUI, and only if the game renders with DirectX 11.
		bool bEnableGUI = false;
		// [GameInfo] DelayGUISpawn: do not hook DX11 during setup.
		bool bDelayGUISpawn = false;
		// [GameInfo] BeginPlayOverwrite: actor class whose BeginPlay triggers the logic mods' PostBeginPlay.
		std::string BeginPlayOverwrite = "Class Engine.PlayerController";

		// [Overwrites] Enabled / UseHardLinks
		bool ModOverwritesEnabled = false;
		bool UseHardLinks = false;
		// [PakOverwrite] bPakOverwrite: install the FPakPlatformFile hooks.
		bool bPakOverride = false;

		//yes if we dont want to override it and false if we want to
		std::unordered_map<std::string, bool> disableOverwriteFiles;
	};

	// The one instance, defined in MDML.dll (Runtime/LoaderConfig.cpp) and exported (BaseMod reads ImGuiFile).
	extern LOADER_API LoaderConfig Config;

	// Startup steps (Bootstrap/Startup.cpp, init thread, in this order). MDML-internal, not exported.
	// 1. Config/ModLoaderInfo.ini next to MDML.dll: [General] LogDir, [DEBUG] UseConsole/UseDebugUI; creates the log
	//    folder, calls Log::Init, logs the version lines, creates the UE_LOG logger; sets the file paths and the game
	//    root. profilePath = <MDML dir>/<[General] Profile>. Returns false (logged) if that file does not exist.
	bool LoadLoaderConfig(const std::string& mdmlDir, std::string& profilePath);
	// 2. Loader switches from the game profile: [Overwrites] (or [Overrides]) Enabled/UseHardLinks,
	//    [GameInfo] DelayGUISpawn/BeginPlayOverwrite, [PakOverwrite] bPakOverwrite.
	void LoadProfileConfig(const platform::IniFile& profile);
}
