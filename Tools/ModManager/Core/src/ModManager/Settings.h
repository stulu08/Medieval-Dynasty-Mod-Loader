#pragma once
// ModManager's own settings (never written into the game folder): %LOCALAPPDATA%\MDML ModManager\settings.json
#include "Util.h"

namespace mm {
	struct Settings {
		std::string gamePath;                // ...\steamapps\common\Medieval Dynasty
		std::string localBuildPath;          // MDML build output dir (optional, auto-detected when inside the repo)
		std::string githubOwner = "stulu08";
		std::string githubRepo = "Medieval-Dynasty-Mod-Loader";
		bool launchViaSteam = true;
		std::string installedLoaderSource;   // what was installed last (for display only)
		std::string installedLoaderStamp;

		static fs::path DataDir();   // created on demand
		static fs::path BackupDir(); // DataDir()/backups
		static fs::path FilePath();

		bool Load();
		bool Save() const;
	};
}
