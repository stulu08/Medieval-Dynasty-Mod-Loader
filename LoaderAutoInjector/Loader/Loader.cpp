#include "Loader.h"
#include <windows.h>
#include <stdio.h>
#include <wchar.h>

// Longest path GetModuleFileNameW can return (\\?\ paths), so long install paths work too.
static constexpr DWORD MaxPathLength = 32768;
static wchar_t s_ModLoaderPath[MaxPathLength];

// Runs on its own thread, outside of any DllMain, so LoadLibraryW may take the loader lock.
static DWORD WINAPI LoadModLoaderThread(LPVOID proxyModule)
{
	DWORD length = GetModuleFileNameW((HMODULE)proxyModule, s_ModLoaderPath, MaxPathLength);
	wchar_t* separator = (length > 0 && length < MaxPathLength) ? wcsrchr(s_ModLoaderPath, L'\\') : nullptr;
	if (!separator)
	{
		OutputDebugStringW(L"PROXYDLL: could not get the path of xinput1_3.dll, MDML.dll not loaded\r\n");
		return 1;
	}
	// MDML.dll lives next to the proxy (Binaries/Win64)
	*(separator + 1) = L'\0';
	if (wcscat_s(s_ModLoaderPath, L"MDML.dll") != 0)
	{
		OutputDebugStringW(L"PROXYDLL: path of MDML.dll is too long, MDML.dll not loaded\r\n");
		return 1;
	}

	if (!LoadLibraryW(s_ModLoaderPath))
	{
		wchar_t message[128];
		swprintf_s(message, L"PROXYDLL: loading MDML.dll failed, error %lu\r\n", GetLastError());
		OutputDebugStringW(message);
		OutputDebugStringW(s_ModLoaderPath);
		return 1;
	}
	// MDML.dll stays loaded until the process exits
	return 0;
}

void Loader::LoadModLoader(HMODULE proxyModule)
{
	// Called from DllMain: only start the thread here, never load a library under the loader lock.
	HANDLE hThread = CreateThread(nullptr, 0, LoadModLoaderThread, proxyModule, 0, nullptr);
	if (hThread)
		CloseHandle(hThread);
	else
		OutputDebugStringW(L"PROXYDLL: could not create the thread that loads MDML.dll\r\n");
}
