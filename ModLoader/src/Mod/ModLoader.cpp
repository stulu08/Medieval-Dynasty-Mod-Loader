#include "Core.h"
#include "ModLoader.h"
#include <iostream>
#include <windows.h>
#include <filesystem>

#include "INI.h"

#include "Globals.h"
#include "Mod.h"

std::string Mod::GetModsFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\Mods\\";
	}
	return path;
}
std::string Mod::GetContentFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\";
	}
	return path;
}
namespace ModLoader
{
	// System text for a Win32 error code, e.g. 126 -> "The specified module could not be found."
	static std::string GetErrorMessage(DWORD error) {
		char* buffer = nullptr;
		DWORD length = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			nullptr, error, 0, (LPSTR)&buffer, 0, nullptr);
		std::string message = (length && buffer) ? std::string(buffer, length) : "unknown error";
		if (buffer)
			LocalFree(buffer);
		while (!message.empty() && (message.back() == '\n' || message.back() == '\r' || message.back() == ' ' || message.back() == '.'))
			message.pop_back();
		return message;
	}
	// Loads a core mod DLL on the calling thread (MDML's init thread). The mod constructs itself in its DllMain
	// (CompleteModCreation adds it to Global::CoreMods), so it is complete once LoadLibraryW returns.
	static void LoadModDLL(const std::filesystem::path& path) {
		Log::Info_MDML("Loading mod {0}", MDML::FormatPath(path));
		if (LoadLibraryW(path.c_str())) {
			Log::Info_MDML("Loaded mod {0}", MDML::FormatPath(path));
		}
		else {
			const DWORD error = GetLastError();
			Log::Error_MDML("Could not load mod {0}: error {1} ({2})", MDML::FormatPath(path), error, GetErrorMessage(error));
		}
	}
	static bool LessNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
		return _wcsicmp(a.c_str(), b.c_str()) < 0;
	}
	static bool EqualNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
		return _wcsicmp(a.c_str(), b.c_str()) == 0;
	}
	void LoadLogicMod(std::string modName, const std::filesystem::path& Actor, const std::string& ActorPath, const std::filesystem::path& PeristentObject, const std::string& PersintentObjectPath) {
		if (!std::filesystem::exists(Actor)) {
			Log::Warn_MDML("Could not find: {0}", Actor.string());
			return;
		}
		
		std::string actorFileName = Actor.filename().string();
		std::string actorName = actorFileName.substr(0, actorFileName.find_last_of("."));
		std::string APath = ActorPath;
		if (ActorPath.empty()) {
			std::filesystem::path relpath = std::filesystem::relative(Actor.parent_path(), Mod::GetModsFolder());
			APath = "/Game/Mods/" + relpath.string() + "/" + actorName + "." + actorName + "_C";
		}
		


		ModInfo CurrentMod = ModInfo();

		CurrentMod.ModName = std::wstring(modName.length(), 0);
		std::transform(modName.begin(), modName.end(), CurrentMod.ModName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorName = std::wstring(actorName.length(), 0);
		std::transform(actorName.begin(), actorName.end(), CurrentMod.ActorName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorPath = std::wstring(APath.length(), 0);
		std::transform(APath.begin(), APath.end(), CurrentMod.ActorPath.begin(), [](char c) -> wchar_t {
			//when we are here we can also repair the path
			if (c == '\\')
				return L'/';
			return (wchar_t)c; 
			});
		Log::Info_MDML("Registered Mod Actor {1} for {0}", modName, APath);

		if (!PeristentObject.string().empty()) {
			if (!std::filesystem::exists(PeristentObject)) {
				Log::Warn_MDML("Could not find: {0}", PeristentObject.string());
				return;
			}
			std::string persistentFileName = PeristentObject.filename().string();
			std::string persistentName = persistentFileName.substr(0, persistentFileName.find_last_of("."));
			std::string PPath = PersintentObjectPath;
			if (PersintentObjectPath.empty()) {
				std::filesystem::path relpath = std::filesystem::relative(PeristentObject.parent_path(), Mod::GetModsFolder());
				PPath = "/Game/Mods/" + relpath.string() + "/" + persistentName + "." + persistentName + "_C";
			}

			CurrentMod.PersistentObjectName = std::wstring(persistentName.length(), 0);
			std::transform(persistentName.begin(), persistentName.end(), CurrentMod.PersistentObjectName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

			CurrentMod.PersistentObjectPath = std::wstring(PPath.length(), 0);
			std::transform(PPath.begin(), PPath.end(), CurrentMod.PersistentObjectPath.begin(), [](char c) -> wchar_t {
				//when we are here we can also repair the path
				if (c == '\\')
				return L'/';
			return (wchar_t)c;
				});
			Log::Info_MDML("Registered Persistent Mod Object {1} for {0}", modName, PPath);
		}
		

		CurrentMod.IsEnabled = true;

		Global::GetGlobals()->ModInfoList.push_back(CurrentMod);
	}
	void LoadMods()
	{
		std::string path = Mod::GetModsFolder();
		if (!std::filesystem::exists(path))
		{
			std::filesystem::create_directory(path);
		}
		//i use std::filesystem::path so every path looks the same here as a string
		std::vector<std::filesystem::path> mods;
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			//load mods inside folders
			if (entry.is_directory()) {
				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");
				//load mod from ini
				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);
					if (LoaderInfo.select("Mod")) {
						mods.push_back(std::filesystem::path(dirPath + "/" + LoaderInfo.get("DLLPath", dirName + ".dll")));
					}
					
				}
				//load default mod dll, dirname + .dll
				else {
					std::string altPath = dirPath + "/" + dirName + ".dll";
					if (std::filesystem::exists(altPath)) {
						mods.push_back(std::filesystem::path(altPath).string());
					}
				}
			}
			//load dlls that are inside Content/Mods
			if (entry.path().extension().string() == ".dll")
			{
				mods.push_back(entry.path().string());
			}
		}
		//deterministic load order: normalized paths (backslashes, no "\/" or ".."), sorted case-insensitively, no duplicates
		for (auto& mod : mods)
			mod = mod.lexically_normal();
		std::sort(mods.begin(), mods.end(), LessNoCase);
		mods.erase(std::unique(mods.begin(), mods.end(), EqualNoCase), mods.end());

		//move basemod to front
		const std::filesystem::path baseModPath = std::filesystem::path(path + "/BaseMod/BaseMod.dll").lexically_normal();
		auto baseModIt = std::find_if(mods.begin(), mods.end(), [&](const std::filesystem::path& mod) { return EqualNoCase(mod, baseModPath); });
		if (baseModIt != mods.end()) {
			Log::Info_MDML("Moved /BaseMod/BaseMod.dll to front");
			std::rotate(mods.begin(), baseModIt, baseModIt + 1);
		}

		//load all mods one after another on this thread, BaseMod first
		for (const auto& mod : mods) {
			if (!std::filesystem::exists(mod) || mod.extension().string() != ".dll") {
				Log::Warn_MDML("Skipping mod {0}: not an existing .dll file", MDML::FormatPath(mod));
				continue;
			}
			LoadModDLL(mod);
		}
		Log::Info_MDML("Loaded {0} core mod(s)", Global::GetGlobals()->CoreMods.size());


		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					
					if (LoaderInfo.select("LogicMod")) {

						auto modName = LoaderInfo.get("ModName", dirName);
						auto actorFile = dirPath + "/" + LoaderInfo.get("ActorFile", "");
						auto actorPath = LoaderInfo.get("ActorPath", "");
						auto PeristentObjectFile = dirPath + "/" + LoaderInfo.get("PeristentObjectFile", "");
						auto PersistentObjectPath = LoaderInfo.get("PersistentObjectPath", "");

						if (!actorFile.empty()) {
							LoadLogicMod(modName, actorFile, actorPath, PeristentObjectFile, PersistentObjectPath);
						}
						else
							Log::Info_MDML("No actor found for {0}", modName);
					}
				}
			}
		}
	}
	// Loose game files replaced by an overwrite mod are kept next to the link under this name.
	static std::filesystem::path GetBackupPath(const std::filesystem::path& target) {
		return std::filesystem::path(target.string() + ".mdml-backup");
	}
	static void RestoreBackup(const std::filesystem::path& target) {
		auto backup = GetBackupPath(target);
		if (!std::filesystem::exists(backup) || std::filesystem::exists(target))
			return;
		std::error_code ec;
		std::filesystem::rename(backup, target, ec);
		if (ec)
			Log::Error_MDML("Could not restore original file {0} ({1})", MDML::FormatPath(target), ec.message());
		else
			Log::Info_MDML("Restored original file {0}", MDML::FormatPath(target));
	}
	void CreateSysLinks() {
		DeleteSysLinks(true);
		std::string ModFolderPath = Mod::GetModsFolder();
		if (!std::filesystem::exists(ModFolderPath))
		{
			std::filesystem::create_directory(ModFolderPath);
		}
		std::vector<std::string> paths;
		// Every link is recorded right away, so a crash in the middle of linking is rolled back on the next start.
		std::ofstream linksFile(SDK::SelectedGameProfile.HardLinksFile, std::ios_base::out | std::ios_base::trunc);
		for (const auto& entry : std::filesystem::directory_iterator(ModFolderPath)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					if (LoaderInfo.select("Overwrites") || LoaderInfo.select("Overrides")) {
						std::string enabled = LoaderInfo.get("Enable", "False");
						OverwriteMod oMod;
						oMod.Name = LoaderInfo.get("Name", "Uknown");
						oMod.Author = LoaderInfo.get("Author", "Uknown");
						oMod.Description = LoaderInfo.get("Description", "Uknown");

						std::transform(enabled.begin(), enabled.end(), enabled.begin(), [](char c)->char { return std::tolower(c); });
						if (enabled == "true" || enabled._Starts_with("1")) {
							std::string folderStr = dirPath + "/" + LoaderInfo.get("Folder", "");
							std::filesystem::path folderPath = folderStr;
							if (folderStr.empty() || !std::filesystem::exists(folderPath))
								continue;
							for (auto& dirEntry : std::filesystem::recursive_directory_iterator(folderPath)) {
								if (dirEntry.is_directory())
									continue;
								auto path = dirEntry.path();
								if (!dirEntry.is_regular_file()) {
									Log::Warn_MDML("Skipping file linking {0}, source it is not a regular file", MDML::FormatPath(path));
									continue;
								}
								auto relPath = std::filesystem::relative(path, folderPath);
								auto target = std::filesystem::path(Mod::GetContentFolder() + "\\" + relPath.string());
								if (std::filesystem::exists(target)) {
									const std::string targetStr = target.string();
									if (std::find(paths.begin(), paths.end(), targetStr) != paths.end()) {
										// Another overwrite mod already linked this file; the later mod wins, the backup stays.
										Log::Warn_MDML("{0} overwrites a file another mod already overwrites: {1}", oMod.Name, MDML::FormatPath(target));
										std::filesystem::remove(target);
									}
									else {
										// A loose file shipped with the game: keep it and restore it in DeleteSysLinks.
										std::error_code ec;
										std::filesystem::rename(target, GetBackupPath(target), ec);
										if (ec) {
											Log::Error_MDML("Could not back up {0} ({1}), skipping it", MDML::FormatPath(target), ec.message());
											continue;
										}
										Log::Warn_MDML("Backed up original file {0}", MDML::FormatPath(target));
									}
								}
								if (!std::filesystem::exists(target.parent_path()))
									std::filesystem::create_directories(target.parent_path());

								if (SDK::SelectedGameProfile.UseHardLinks)
									std::filesystem::create_hard_link(path, target);
								else
									std::filesystem::create_symlink(path, target);
								//formating this doesnt work cause it inserts the mod folder, and i dont know why
								Log::Trace_MDML("Created link to {0}", target.string());
								if (std::find(paths.begin(), paths.end(), target.string()) == paths.end()) {
									paths.push_back(target.string());
									linksFile << target.string() << std::endl;
								}
								oMod.Files.push_back(target.string());
							}
							Global::GetGlobals()->OverwriteMods.push_back(oMod);
						}
					}
				}
			}
		}
		Log::Info_MDML("Created {0} {1} links", paths.size(), SDK::SelectedGameProfile.UseHardLinks ? "hard" : "sym");
	}
	void DeleteSysLinks(bool isOld) {
		if (!std::filesystem::exists(SDK::SelectedGameProfile.HardLinksFile)) {
			if(!isOld)
				Log::Critical_MDML("Cant find Links File at {0}", MDML::FormatPath(SDK::SelectedGameProfile.HardLinksFile));
			return;
		}
		if (isOld)
			Log::Warn_MDML("Old file links found, maybe the application exited unexpected");
		size_t count = 0, max = 0;
		std::ifstream stream;
		stream.open(SDK::SelectedGameProfile.HardLinksFile, std::ios_base::in);
		for (std::string line; std::getline(stream, line); ) {
			if (line.empty())
				continue;
			max++;
			if (!std::filesystem::exists(line)) {
				if (!isOld)
					Log::Warn_MDML("Cant delete file link {0}, link does not exist", MDML::FormatPath(line));
				RestoreBackup(line);
				continue;
			}
			if (!isOld) {
				if (!SDK::SelectedGameProfile.UseHardLinks && !std::filesystem::directory_entry(line).is_symlink()) {
					Log::Warn_MDML("Cant delete file link {0}, it is not a symlink", MDML::FormatPath(line));
					continue;
				}
			}
			if (std::filesystem::remove(line)) {
				if (!isOld)
					Log::Trace_MDML("Deleted file link {0}", MDML::FormatPath(line));
				else
					Log::Warn_MDML("Deleted old file link {0}", MDML::FormatPath(line));
				count++;
				RestoreBackup(line);
			}
			else {
				if (!isOld)
					Log::Error_MDML("Could not deleted file link {0}", MDML::FormatPath(line));
				else
					Log::Error_MDML("Could not deleted old file link {0}", MDML::FormatPath(line));
			}
			
		}
		stream.close();
		std::filesystem::remove(SDK::SelectedGameProfile.HardLinksFile);
		if (!isOld)
			Log::Info_MDML("Deleted {0}/{1} file links", count, max);
		else
			Log::Warn_MDML("Deleted {0}/{1} old file links", count, max);
	}
};