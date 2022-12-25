#include "PakLoader.h"
#include <filesystem>
#include "Utilities/Globals.h"

namespace fs = std::filesystem;

namespace PakLoader
{
	void ScanLoadedPaks()
	{
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		std::string path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\Paks\\LogicMods\\";
		if (!std::filesystem::exists(path))
		{
			std::filesystem::create_directory(path);
		}
		if(Global::GetGlobals()->ModInfoList.size() >= 1)
			bool empty = Global::GetGlobals()->ModInfoList.empty();
		for (const auto& entry : fs::directory_iterator(path))
		{
			if (entry.path().extension().string() == ".pak")
			{
				std::wstring filename = entry.path().filename().wstring();
				std::wstring modNameW = filename.substr(0, filename.length() - 4);
				if (modNameW.substr(modNameW.length() - 2, 2) == L"_p")
					modNameW = modNameW.substr(0, modNameW.length() - 2);
				if (modNameW.substr(modNameW.length() - 2, 2) == L"_P")
					modNameW = modNameW.substr(0, modNameW.length() - 2);

				//i changed this because of a MSVC wchar_t to char truncation warning
				//std::string str(modNameW.begin(), modNameW.end());
				std::string str(modNameW.length(), 0);
				std::transform(modNameW.begin(), modNameW.end(), str.begin(), [](wchar_t c) { return (char)c; });


				Log::Info("PakModLoaded: {0}", str.c_str());
				ModInfo CurrentMod;
				CurrentMod.ModName = modNameW;
				CurrentMod.IsEnabled = true;
				Global::GetGlobals()->ModInfoList.push_back(CurrentMod);
			}
		}
	}
};