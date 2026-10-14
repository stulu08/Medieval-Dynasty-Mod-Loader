#pragma once
#include "MDML/Core.h"

// Path helpers for the loader and mods (Wave 3A, were static members of the old class MDML).
// Mod folders: Mod::GetModsFolder() / Mod::GetContentFolder() (MDML/Mod.h). Nothing here depends on the process
// working directory.
namespace mdml::runtime {
	// path relative to the game root (Config.rootGameDir, where Engine/ and Medieval_Dynasty/ live), for log lines.
	LOADER_API std::string FormatPath(const std::filesystem::path& path);
	// Folder of MDML.dll (= <game>/Medieval_Dynasty/Binaries/Win64 when installed), from the module's own location,
	// never from the working directory. Empty if it cannot be determined.
	LOADER_API std::filesystem::path GetLoaderFolder();
	// <MDML.dll folder>/Config: ModLoaderInfo.ini, LoadOrder.ini, NoOverwrite.ini, WindowConfig.ini (ImGui layout).
	LOADER_API std::filesystem::path GetConfigFolder();
	// %LocalAppData%\Medieval_Dynasty\Saved\ (with a trailing backslash), "" if the folder cannot be determined.
	LOADER_API std::string GetDataFolder();
}
