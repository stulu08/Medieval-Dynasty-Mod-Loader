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
		for (const auto& entry : fs::directory_iterator(path))
		{
			if (entry.is_directory()) {
				//this way you will be able to create a mod inside a folder to have resources or smth
				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");
				if (std::filesystem::exists(iniPath)) {
					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);
					LoaderInfo.select("Mod");

					std::string path = std::filesystem::path(dirPath + "/" + LoaderInfo.get("DLLPath", dirName + ".dll")).string();
					std::string str(path.begin(), path.end());
					InjectDLL(str);
				}
				else {
					std::string altPath = dirPath + "/" + dirName + ".dll";
					if (std::filesystem::exists(altPath)) {
						std::string path = std::filesystem::path(altPath).string();
						std::string str(path.begin(), path.end());
						InjectDLL(str);
					}
				}
			}
			if (entry.path().extension().string() == ".dll")
			{
				std::string path = entry.path().string();
				std::string str(path.begin(), path.end());
				InjectDLL(str);
			}
		}
	}
};