#include "Settings.h"

#include <Windows.h>
#include <ShlObj.h>
#include <nlohmann/json.hpp>

namespace mm {
	fs::path Settings::DataDir() {
		fs::path dir;
		PWSTR p = nullptr;
		if (SUCCEEDED(SHGetKnownFolderPath(FOLDERID_LocalAppData, 0, nullptr, &p)) && p) {
			dir = fs::path(p) / L"MDML ModManager";
			CoTaskMemFree(p);
		}
		else {
			dir = fs::temp_directory_path() / L"MDML ModManager";
		}
		std::error_code ec;
		fs::create_directories(dir, ec);
		return dir;
	}

	fs::path Settings::BackupDir() { return DataDir() / "backups"; }
	fs::path Settings::FilePath() { return DataDir() / "settings.json"; }

	bool Settings::Load() {
		std::string text;
		if (!ReadTextFile(FilePath(), text)) return false;
		try {
			auto j = nlohmann::json::parse(text);
			gamePath = j.value("gamePath", gamePath);
			localBuildPath = j.value("localBuildPath", localBuildPath);
			githubOwner = j.value("githubOwner", githubOwner);
			githubRepo = j.value("githubRepo", githubRepo);
			launchViaSteam = j.value("launchViaSteam", launchViaSteam);
			installedLoaderSource = j.value("installedLoaderSource", installedLoaderSource);
			installedLoaderStamp = j.value("installedLoaderStamp", installedLoaderStamp);
			return true;
		}
		catch (const std::exception& e) {
			Log::Warn(std::string("settings.json is invalid, using defaults: ") + e.what());
			return false;
		}
	}

	bool Settings::Save() const {
		nlohmann::json j;
		j["gamePath"] = gamePath;
		j["localBuildPath"] = localBuildPath;
		j["githubOwner"] = githubOwner;
		j["githubRepo"] = githubRepo;
		j["launchViaSteam"] = launchViaSteam;
		j["installedLoaderSource"] = installedLoaderSource;
		j["installedLoaderStamp"] = installedLoaderStamp;
		return WriteTextFile(FilePath(), j.dump(2));
	}
}
