#pragma once
// Describes one Medieval Dynasty installation and finds it via Steam.
#include "Util.h"

namespace mm {
	constexpr const char* kSteamAppId = "1129580";

	struct GameInstall {
		fs::path root; // ...\steamapps\common\Medieval Dynasty

		bool Valid() const;
		fs::path GameDir() const { return root / "Medieval_Dynasty"; }
		fs::path Binaries() const { return GameDir() / "Binaries" / "Win64"; }
		fs::path ModsDir() const { return GameDir() / "Content" / "Mods"; }
		fs::path ConfigDir() const { return Binaries() / "Config"; }
		fs::path LoadOrderFile() const { return ConfigDir() / "LoadOrder.ini"; }
		fs::path LauncherExe() const { return root / "Medieval_Dynasty.exe"; }
		fs::path ShippingExe() const { return Binaries() / "Medieval_Dynasty-Win64-Shipping.exe"; }

		bool LoaderInstalled() const; // MDML.dll and the xinput1_3.dll proxy exist
		std::string LoaderFileVersion() const; // VERSIONINFO of MDML.dll, "" when unavailable
		static bool IsGameRunning();
	};

	// Steam registry + libraryfolders.vdf. Returns every library which contains Medieval Dynasty.
	std::vector<fs::path> FindGameCandidates();
}
