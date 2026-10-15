#pragma once
// Discovers mods under Content/Mods with the same rules as MDML (mods::ScanMods, docs/design/mod-components.md section 3):
// a mod is a folder with a mod.ini that has at least one component section [Core], [Blueprint] or [Overwrite]. Metadata comes
// only from [Mod] (Name is not used here: the folder name is the key in LoadOrder.ini). Loose DLLs and folders without a
// mod.ini are not mods any more.
#include "Util.h"

namespace mm {
	struct ModInfo {
		std::string name;        // folder name = key in LoadOrder.ini
		fs::path path;           // mod folder
		bool core = false;       // [Core]      native DLL
		bool blueprint = false;  // [Blueprint] cooked assets / actor
		bool overwrite = false;  // [Overwrite] replaces game files
		std::string dllPath;     // [Core] Dll, default <Folder>.dll (empty without [Core])
		std::string description, author, version;
		uint64_t sizeBytes = 0;
	};

	std::vector<ModInfo> ScanMods(const fs::path& modsDir);
	std::string DescribeKinds(const ModInfo& mod); // "Core, Blueprint, Overwrite"
}
