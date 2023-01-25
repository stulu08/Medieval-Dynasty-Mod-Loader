#pragma once
#include "Core.h"


inline bool Read(void* address, void* buffer, unsigned long long size)
{
	static auto hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, _getpid());
	return ReadProcessMemory(hProcess, address, buffer, size, nullptr);
}

inline bool Write(void* address, void* buffer, unsigned long long size)
{
	static auto hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, _getpid());
	return WriteProcessMemory(hProcess, address, buffer, size, nullptr);
}

template<typename T>
inline T Read(void* address)
{
	T buffer{};
	Read(address, &buffer, sizeof(T));
	return buffer;
}

template<typename T>
inline T Write(void* address, T buffer)
{
	Write(address, &buffer, sizeof(T));
	return buffer;
}

namespace MEM
{
	inline HWND FindWindow(DWORD pid, wchar_t const* className) {
		HWND hCurWnd = GetTopWindow(0);
		while (hCurWnd != NULL)
		{
			DWORD cur_pid;
			DWORD dwTheardId = GetWindowThreadProcessId(hCurWnd, &cur_pid);

			if (cur_pid == pid)
			{
				if (IsWindowVisible(hCurWnd) != 0)
				{
					TCHAR szClassName[256];
					GetClassName(hCurWnd, szClassName, 256);
					if (_tcscmp(szClassName, className) == 0)
					{
						return hCurWnd;
					}
				}
			}
			hCurWnd = GetNextWindow(hCurWnd, GW_HWNDNEXT);
		}
		return NULL;
	}

	static uint8_t __declspec(noinline)* GetAddressPTR(uint8_t* ptr, uint8_t offset, uint8_t instr_size) {
		return (ptr + *(int32_t*)(ptr + offset) + instr_size);
	}
};