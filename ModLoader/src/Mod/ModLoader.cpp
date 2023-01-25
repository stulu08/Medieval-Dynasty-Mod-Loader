#include "Core.h"
#include "ModLoader.h"
#include <iostream>
#include <process.h>
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
	void InjectDLL(std::string path)
	{
		HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, 0, _getpid());
		if (hProc && hProc != INVALID_HANDLE_VALUE)
		{
			void* loc = VirtualAllocEx(hProc, 0, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
			WriteProcessMemory(hProc, loc, path.c_str(), strlen(path.c_str()) + 1, 0);
			HANDLE hThread = CreateRemoteThread(hProc, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, loc, 0, 0);
			if (hThread)
			{
				CloseHandle(hThread);
			}
		}
		if (hProc)
		{
			CloseHandle(hProc);
		}
	}
	void LoadLogicMod(std::string modName, const std::filesystem::path& Actor, const std::string& ActorPath) {
		if (!std::filesystem::exists(Actor)) {
			Log::Warn_MDML("Could not find: {0}", Actor.string());
			return;
		}
		std::string actorFileName = Actor.filename().string();
		std::string actorName = actorFileName.substr(0, actorFileName.find_last_of("."));
		std::string Path = ActorPath;
		if (ActorPath.empty()) {
			std::filesystem::path relpath = std::filesystem::relative(Actor.parent_path(), Mod::GetModsFolder());
			Path = "/Game/Mods/" + relpath.string() + "/" + actorName + "." + actorName + "_C";
		}
		ModInfo CurrentMod = ModInfo();

		CurrentMod.ModName = std::wstring(modName.length(), 0);
		std::transform(modName.begin(), modName.end(), CurrentMod.ModName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorName = std::wstring(actorName.length(), 0);
		std::transform(actorName.begin(), actorName.end(), CurrentMod.ActorName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorPath = std::wstring(Path.length(), 0);
		std::transform(Path.begin(), Path.end(), CurrentMod.ActorPath.begin(), [](char c) -> wchar_t {
			//when we are here we can also repair the path
			if (c == '\\')
				return L'/';
			return (wchar_t)c; 
			});

		CurrentMod.IsEnabled = true;

		Log::Info_MDML("Registered Mod Actor {1} for {0}", modName, Path);
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
		//move basemod to front
		const std::filesystem::path baseModPath = path + "/BaseMod/BaseMod.dll";
		auto baseModIt = std::find(mods.begin(), mods.end(), baseModPath);
		if (baseModIt != mods.end()) {
			Log::Info_MDML("Moved /BaseMod/BaseMod.dll to front");
			std::rotate(mods.begin(), baseModIt, baseModIt + 1);
		}

		//inject all mods
		for (uint32_t i = 0; i < mods.size(); i++) {
			auto& path = mods[i];
			if (std::filesystem::exists(path)) {
				if(path.extension().string() == ".dll")
					InjectDLL(path.string());
			}
		}
		
		if (Global::GetGlobals()->ModInfoList.size() >= 1)
			bool empty = Global::GetGlobals()->ModInfoList.empty();


		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					
					if (LoaderInfo.select("LogicMod")) {

						auto actorFile = dirPath + "/" + LoaderInfo.get("ActorFile", "");
						auto modName = LoaderInfo.get("ModName", dirName);
						auto actorPath = LoaderInfo.get("ActorPath", "");

						if (!actorFile.empty()) {
							LoadLogicMod(modName, actorFile, actorPath);
						}
						else
							Log::Info_MDML("No actor found for {0}", modName);
					}
				}
			}
		}
	}
	void CreateSysLinks() {
		DeleteSysLinks(true);
		std::string ModFolderPath = Mod::GetModsFolder();
		if (!std::filesystem::exists(ModFolderPath))
		{
			std::filesystem::create_directory(ModFolderPath);
		}
		std::vector<std::string> paths;
		for (const auto& entry : std::filesystem::directory_iterator(ModFolderPath)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					if (LoaderInfo.select("Overrides")) {
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
								if(std::filesystem::exists(target)) {
									Log::Warn_MDML("Skipping file linking {0}, target exists already", MDML::FormatPath(path));
									continue;
								}
								if (!std::filesystem::exists(target.parent_path()))
									std::filesystem::create_directories(target.parent_path());
								if (SDK::SelectedGameProfile.UseHardLinks)
									std::filesystem::create_hard_link(path, target);
								else
									std::filesystem::create_symlink(path, target);

								//formating this doesnt work cause it inserts the mod folder, and i dont know why
								Log::Trace_MDML("Created link to {0}", target.string());
								paths.push_back(target.string());
								oMod.Files.push_back(target.string());
							}
							Global::GetGlobals()->OverwriteMods.push_back(oMod);
						}
					}
				}
			}
		}
		Log::Info_MDML("Created {0} hard links", paths.size());
		std::ofstream stream;
		stream.open(SDK::SelectedGameProfile.HardLinksFile, std::ios_base::out);
		for (auto str : paths) {
			stream << str << std::endl;
		}
		stream.close();
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
				else
					Log::Warn_MDML("Cant delete old file link {0}, link does not exist", MDML::FormatPath(line));
				continue;
			}
			if (!SDK::SelectedGameProfile.UseHardLinks && !std::filesystem::directory_entry(line).is_symlink()) {
				if (!isOld)
					Log::Warn_MDML("Cant delete file link {0}, it is not a link", MDML::FormatPath(line));
				else
					Log::Warn_MDML("Cant delete old file link {0}, it is not a link", MDML::FormatPath(line));
				continue;
			}
			std::filesystem::remove(line);
			if (!isOld)
				Log::Trace_MDML("Deleted file link {0}", MDML::FormatPath(line));
			else
				Log::Warn_MDML("Deleted old file link {0}", MDML::FormatPath(line));
			count++;
		}
		stream.close();
		std::filesystem::remove(SDK::SelectedGameProfile.HardLinksFile);
		if (!isOld)
			Log::Info_MDML("Deleted {0}/{1} file links", count, max);
		else
			Log::Warn_MDML("Deleted {0}/{1} old file links", count, max);
	}
};