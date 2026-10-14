#pragma once
#include "Core.h"

namespace mdml::platform {
	class IniFile;
}

// Loader settings: paths, UI and overwrite-system switches, the NoOverwrite map (Wave 2.4, was the loader part of
// GameInfo.h `GameProfile` / `SDK::SelectedGameProfile`).
// Filled on the init thread (Bootstrap/Startup.cpp) from MDML.dll's location and Config/ModLoaderInfo.ini (the only
// loader ini; the [General] Profile indirection to a second "game profile" ini was dropped in Wave 3E).
// All paths are absolute (never relative to the working directory).
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
	// `loaderInfo` is <MDML dir>/Config/ModLoaderInfo.ini (ModLoaderConfigFile), read once by the caller.
	// 1. [General] LogDir, [DEBUG] UseConsole/UseDebugUI; creates the log folder, calls Log::Init, logs the version
	//    lines, creates the UE_LOG logger; sets the file paths and the game root.
	void LoadLoaderConfig(const std::string& mdmlDir, const platform::IniFile& loaderInfo);
	// 2. Loader switches: [Overwrites] (or [Overrides]) Enabled/UseHardLinks, [GameInfo] DelayGUISpawn,
	//    [PakOverwrite] bPakOverwrite.
	void LoadFeatureConfig(const platform::IniFile& loaderInfo);
}
