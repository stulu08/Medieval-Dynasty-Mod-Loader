#include "st_pch.h"
#ifdef SDG_PLATFORM_WINDOWS
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
#include "../Platform.h"
#include "../Application.h"


namespace SDG {
	float Platform::getTime() {
		return (float)glfwGetTime();
	}
	std::string Platform::openFile(const char* filter, const char* initialDir) {
		OPENFILENAMEA ofn;       // common dialog box structure
		char szFile[260];       // buffer for file name
		//HWND hwnd;              // owner window
		//HANDLE hf;              // file handle

		// Initialize OPENFILENAME
		ZeroMemory(&ofn, sizeof(OPENFILENAME));
		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = glfwGetWin32Window((GLFWwindow*)Application::get().getNativeWindow());
		ofn.lpstrFile = szFile;
		// Set lpstrFile[0] to '\0' so that GetOpenFileName does not 
		// use the contents of szFile to initialize itself.
		ofn.lpstrFile[0] = '\0';
		ofn.nMaxFile = sizeof(szFile);
		ofn.lpstrFilter = filter;
		ofn.nFilterIndex = 1;
		//ofn.lpstrFileTitle = NULL;
		//ofn.nMaxFileTitle = 0;
		ofn.lpstrInitialDir = initialDir;
		ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;
		// Display the Open dialog box. 
		if (GetOpenFileNameA(&ofn) == TRUE)
			return ofn.lpstrFile;
		
		return std::string();
	}
	std::string Platform::saveFile(const char* filter, const char* initialDir){
		OPENFILENAMEA ofn;       // common dialog box structure
		char szFile[260];       // buffer for file name
		//HWND hwnd;              // owner window
		//HANDLE hf;              // file handle

		// Initialize OPENFILENAME
		ZeroMemory(&ofn, sizeof(OPENFILENAME));
		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = glfwGetWin32Window((GLFWwindow*)Application::get().getNativeWindow());
		ofn.lpstrFile = szFile;
		// Set lpstrFile[0] to '\0' so that GetOpenFileName does not 
		// use the contents of szFile to initialize itself.
		ofn.lpstrFile[0] = '\0';
		ofn.nMaxFile = sizeof(szFile);
		ofn.lpstrFilter = filter;
		ofn.nFilterIndex = 1;
		//ofn.lpstrFileTitle = NULL;
		//ofn.nMaxFileTitle = 0;
		ofn.lpstrInitialDir = initialDir;
		ofn.Flags = OFN_PATHMUSTEXIST | OFN_NOCHANGEDIR | OFN_OVERWRITEPROMPT;

		// Display the Open dialog box. 

		if (GetSaveFileNameA(&ofn) == TRUE)
			return ofn.lpstrFile;

		return std::string();
	}
	std::string Platform::browseFolder() {
		char szTitle[MAX_PATH];
		BROWSEINFOA bi;
		bi.hwndOwner = glfwGetWin32Window((GLFWwindow*)Application::get().getNativeWindow());
		bi.pidlRoot = NULL;
		bi.pszDisplayName = szTitle;
		bi.lpszTitle = "Select a folder";
		bi.ulFlags = BIF_USENEWUI | BIF_RETURNONLYFSDIRS;
		bi.lpfn = NULL;
		bi.lParam = 0;
		LPITEMIDLIST pidl = SHBrowseForFolderA(&bi);
		if (pidl != NULL) {
			if (SHGetPathFromIDListA(pidl, szTitle))
				return szTitle;
		}

		return std::string();
	}
	std::string Platform::getConfigString(const std::string& key, const std::string& section, const std::string& defaultValue, const std::string& file) {
		char value[1000];
		GetPrivateProfileStringA(section.c_str(), key.c_str(), defaultValue.c_str(), value, sizeof(value) / sizeof(value[0]), file.c_str());
		return value;
	}
	bool Platform::setConfigString(const std::string& key, const std::string& value, const std::string& section, const std::string& file) {
		return WritePrivateProfileStringA(section.c_str(), key.c_str(), value.c_str(), file.c_str());
	}
	bool Platform::createDirectory(const char* directory) {	
		if (CreateDirectoryA(std::string(directory).c_str(), NULL)) {
			return true;
		}
		return false;
	}
	//https://stackoverflow.com/a/64166/13917861
	MemoryUsageInfo Platform::getMemoryUsage() {
		MEMORYSTATUSEX memInfo;
		memInfo.dwLength = sizeof(MEMORYSTATUSEX);
		GlobalMemoryStatusEx(&memInfo);
		uint64_t totalVirtualMem = memInfo.ullTotalPageFile;
		uint64_t virtualMemUsed = memInfo.ullTotalPageFile - memInfo.ullAvailPageFile;
		PROCESS_MEMORY_COUNTERS_EX pmc;
		GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
		uint64_t virtualMemUsedByMe = pmc.PrivateUsage;

		uint64_t totalPhysMem = memInfo.ullTotalPhys;
		uint64_t physMemUsed = memInfo.ullTotalPhys - memInfo.ullAvailPhys;
		uint64_t physMemUsedByMe = pmc.WorkingSetSize;

		return { totalVirtualMem,virtualMemUsed,virtualMemUsedByMe,totalPhysMem,physMemUsed,physMemUsedByMe };
	}
	int Platform::changeWorkingDirectory(const char* dir) {
		int succes;
		wchar_t wide_buffer[MAX_PATH];
		if (MultiByteToWideChar(CP_UTF8, 0, dir, -1, wide_buffer, MAX_PATH) == 0) {
			//Error
			return -1;
		}
		succes = SetCurrentDirectoryW(wide_buffer);
		return succes;
	}
	std::string Platform::getCurrentWorkingDirectory() {
		char path[MAX_PATH];
		GetCurrentDirectoryA(MAX_PATH, path);
		return path;
	}
}
#endif // PLAFORM_WINDOWS