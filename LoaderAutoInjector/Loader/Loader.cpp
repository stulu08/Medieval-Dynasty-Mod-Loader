#include "Loader.h"
#include <iostream>
#include <windows.h>
#include <process.h>
#include <string>

std::string GetModuleFilePath(HMODULE hModule)
{
	std::string ModuleName = "";
	char szFileName[MAX_PATH] = { 0 };

	if (GetModuleFileNameA(hModule, szFileName, MAX_PATH))
		ModuleName = szFileName;

	return ModuleName;
}
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

void Loader::LoadModLoader()
{
	InjectDLL("MDML.dll");
}