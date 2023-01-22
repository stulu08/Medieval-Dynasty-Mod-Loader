#pragma once
#include <string>
#include "Logger.h"
#include "include/MinHook.h"
#include "Globals.h"
#ifdef UNREALENGINEMODLOADER_EXPORTS
//#pragma comment(lib,"MinHook-x64-v141-mtd.lib")
#endif

namespace MinHook
{
	static void Init()
	{
		if (MH_Initialize() != MH_OK)
		{
			Log::Error_UML("Failed to initialize MinHook");
		}
	}

	template <typename T>
	static void Add(DWORD_PTR pTarget, LPVOID pDetour, T** ppOriginal, std::string displayName = "")
	{
		if (MH_CreateHook((LPVOID)pTarget, pDetour, reinterpret_cast<LPVOID*>(ppOriginal)) != MH_OK)
		{
			Log::Error_UML("Failed to create hook: {0}", displayName.c_str());
			return;
		}

		if (MH_EnableHook((LPVOID)pTarget) != MH_OK)
		{
			Log::Error_UML("Failed to enable hook: {0}", displayName.c_str());
			return;
		}
		Log::Info_UML("Added hook: {0}", displayName.c_str());
	}
}