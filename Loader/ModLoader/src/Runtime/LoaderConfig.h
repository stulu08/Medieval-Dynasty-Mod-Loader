#pragma once
#include "Core.h"

// Loader settings: paths, UI and overwrite-system switches, the NoOverwrite map (Wave 2.4, was the loader part of
// GameInfo.h `GameProfile` / `SDK::SelectedGameProfile`).
// Filled by SetupProfile (MDML.cpp) from MDML.dll's location, Config/ModLoaderInfo.ini and the game profile.
// All paths are absolute (never relative to the working directory).
namespace mdml {
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
}
