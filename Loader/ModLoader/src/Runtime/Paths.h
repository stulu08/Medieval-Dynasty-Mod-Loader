#pragma once
#include "Core.h"

// Path helpers for the loader and mods (Wave 3A, were static members of the old class MDML).
// Mod folders: Mod::GetModsFolder() / Mod::GetContentFolder() (Mods/Mod.h). Loader files: mdml::runtime::Config
// (Runtime/LoaderConfig.h). Nothing here depends on the process working directory.
namespace mdml::runtime {
	// path relative to the game root (Config.rootGameDir, where Engine/ and Medieval_Dynasty/ live), for log lines.
	LOADER_API std::string FormatPath(const std::filesystem::path& path);
	// %LocalAppData%\Medieval_Dynasty\Saved\ (with a trailing backslash), "" if the folder cannot be determined.
	LOADER_API std::string GetDataFolder();
}
