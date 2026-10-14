#pragma once
// Installs the MDML loader and mods into a GameInstall. Sources are always a directory (a zip is extracted to a temp dir first),
// so the same code serves: local build output, a downloaded release zip, a dropped mod zip or folder.
// Replaced files are moved to <data dir>/backups/<timestamp>/..., nothing is deleted without a backup (or the recycle bin).
#include "GameInstall.h"

namespace mm {
	struct LoaderPackage {
		fs::path root;                 // directory containing MDML.dll
		std::vector<std::string> mods; // mod folders shipped with it (Mods/<name> or <name>/mod.ini)
		std::string version;           // file version of MDML.dll if available
		bool hasProxy = false;         // xinput1_3.dll
	};

	// looks in dir and up to two levels below it
	bool DetectLoaderPackage(const fs::path& dir, LoaderPackage& out);
	// the MDML repo build output (Output/ModLoader) when this tool lives inside the repo tree
	bool FindLocalBuild(LoaderPackage& out);

	struct InstallReport {
		bool ok = false;
		std::vector<std::string> installed;
		std::string error;
	};

	InstallReport InstallLoader(const LoaderPackage& pkg, const GameInstall& game, const std::vector<std::string>& modsToInstall,
		const fs::path& backupRoot);

	struct ModCandidate {
		std::string name;
		fs::path path;
	};
	// finds mods inside an extracted archive / folder (mod.ini folders, Content/Mods/<x>, or a lone DLL package)
	std::vector<ModCandidate> FindModCandidates(const fs::path& dir, const std::string& fallbackName);
	// archive (zip) or folder -> candidates. tempDir keeps the extracted files alive; the caller owns it.
	bool PrepareModSource(const fs::path& source, std::vector<ModCandidate>& out, fs::path& tempDir, std::string& error);
	bool InstallMod(const ModCandidate& mod, const GameInstall& game, const fs::path& backupRoot, std::string& error);
	// recycle bin, not a permanent delete
	bool RemoveMod(const fs::path& modPath, std::string& error);

	// zips a loader package (MDML.dll, proxy, Config, Mods) without pdb/exp/lib into zipFile
	bool CreateReleaseZip(const LoaderPackage& pkg, const std::vector<std::string>& mods, const fs::path& zipFile, std::string& error);
}
