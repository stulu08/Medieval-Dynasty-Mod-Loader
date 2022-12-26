#include "CoreModLoader.h"
#include <iostream>
#include <process.h>
#include <windows.h>
#include <filesystem>
#include "Utilities/Logger.h"
#include "INI.h"

namespace fs = std::filesystem;
namespace CoreModLoader
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

	void LoadCoreMods()
	{
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		std::string path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\CoreMods\\";
		if (!std::filesystem::exists(path))
		{
			std::filesystem::create_directory(path);
		}
		//i use std::filesystem::path so every path looks the same here
		std::vector<std::filesystem::path> mods;

		for (const auto& entry : fs::directory_iterator(path)) {
			if (entry.is_directory()) {
				//this way you will be able to create a mod inside a folder to have resources or smth
				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");
				if (std::filesystem::exists(iniPath)) {
					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);
					LoaderInfo.select("Mod");

					mods.push_back(std::filesystem::path(dirPath + "/" + LoaderInfo.get("DLLPath", dirName + ".dll")));
				}
				else {
					std::string altPath = dirPath + "/" + dirName + ".dll";
					if (std::filesystem::exists(altPath)) {
						mods.push_back(std::filesystem::path(altPath).string());
					}
				}
			}
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


		
	}
};