#pragma once
// Discovers mods under Content/Mods with the same rules as MDML (ModLoader::ScanMods): a folder with a mod.ini or with
// <Folder>/<Folder>.dll, plus loose *.dll files. Reads mod.ini for the mod kinds and optional Name/Description/Author/Version.
#include "Util.h"

namespace mm {
	struct ModInfo {
		std::string name;       // folder name (loose DLL: file stem) = key in LoadOrder.ini
		fs::path path;          // folder, or the DLL for loose mods
		bool looseDll = false;
		bool hasIni = false;
		bool coreDll = false;   // [Mod] DLLPath or <Folder>.dll
		bool logic = false;     // [LogicMod]
		bool overwrite = false; // [Overwrites] / [Overrides]
		std::string dllPath;
		std::string description, author, version;
		uint64_t sizeBytes = 0;
	};

	std::vector<ModInfo> ScanMods(const fs::path& modsDir);
	std::string DescribeKinds(const ModInfo& mod); // "DLL, Logic, Overwrite"
}
