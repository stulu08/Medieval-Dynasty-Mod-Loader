#include "Core.h"
#include "SymbolResolver.h"
#include "Logger.h"

#include <DbgHelp.h>
#include <chrono>
#pragma comment(lib, "dbghelp.lib")

namespace SymbolResolver
{
	// A pseudo process handle: DbgHelp only uses it as a session key. Using our own value keeps us out of
	// the engine's DbgHelp session (crash reporter) which is keyed by GetCurrentProcess().
	static const HANDLE s_Session = (HANDLE)(ULONG_PTR)0x4D444D4C; // "MDML"
	static DWORD64 s_ModuleBase = 0;
	static bool s_Initialized = false;
	// No UNDNAME by default: decorated names are needed to tell overloads apart.
	// EXACT_SYMBOLS: refuse a PDB whose GUID/age does not match the EXE (e.g. left over from an older build).
	// No DEFERRED_LOADS: the PDB must be loaded right away, otherwise SymGetModuleInfo reports SymDeferred.
	static const DWORD s_BaseOptions = SYMOPT_EXACT_SYMBOLS | SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_NO_PROMPTS;

	struct CodeViewInfo {
		DWORD Signature;	// 'RSDS'
		GUID Guid;
		DWORD Age;
		char PdbFileName[1];
	};

	static const CodeViewInfo* GetCodeViewInfo() {
		auto base = (const BYTE*)GetModuleHandleW(nullptr);
		auto dos = (const IMAGE_DOS_HEADER*)base;
		auto nt = (const IMAGE_NT_HEADERS64*)(base + dos->e_lfanew);
		const auto& dir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_DEBUG];
		if (!dir.VirtualAddress)
			return nullptr;
		auto entries = (const IMAGE_DEBUG_DIRECTORY*)(base + dir.VirtualAddress);
		for (size_t i = 0; i < dir.Size / sizeof(IMAGE_DEBUG_DIRECTORY); i++) {
			if (entries[i].Type == IMAGE_DEBUG_TYPE_CODEVIEW && entries[i].AddressOfRawData) {
				auto info = (const CodeViewInfo*)(base + entries[i].AddressOfRawData);
				if (info->Signature == 0x53445352) // "RSDS"
					return info;
			}
		}
		return nullptr;
	}

	std::string GetBuildId() {
		auto info = GetCodeViewInfo();
		if (!info)
			return "";
		const GUID& g = info->Guid;
		char buffer[64];
		sprintf_s(buffer, "%08lX%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X-%lu",
			g.Data1, g.Data2, g.Data3, g.Data4[0], g.Data4[1], g.Data4[2], g.Data4[3],
			g.Data4[4], g.Data4[5], g.Data4[6], g.Data4[7], info->Age);
		return buffer;
	}

	bool Init() {
		if (s_Initialized)
			return true;

		wchar_t exePath[MAX_PATH];
		GetModuleFileNameW(nullptr, exePath, MAX_PATH);
		std::filesystem::path pdbPath = std::filesystem::path(exePath).replace_extension(L".pdb");
		if (!std::filesystem::exists(pdbPath)) {
			Log::Warn_MDML("No PDB found at {0}, using patterns only", pdbPath.string());
			return false;
		}

		SymSetOptions(s_BaseOptions);
		std::wstring searchPath = pdbPath.parent_path().wstring();
		if (!SymInitializeW(s_Session, searchPath.c_str(), FALSE)) {
			Log::Error_MDML("SymInitialize failed: {0}", GetLastError());
			return false;
		}
		s_ModuleBase = SymLoadModuleExW(s_Session, nullptr, exePath, nullptr, (DWORD64)GetModuleHandleW(nullptr), 0, nullptr, 0);
		if (!s_ModuleBase) {
			Log::Error_MDML("SymLoadModuleEx failed: {0}", GetLastError());
			SymCleanup(s_Session);
			return false;
		}

		IMAGEHLP_MODULEW64 module = { sizeof(module) };
		if (!SymGetModuleInfoW64(s_Session, s_ModuleBase, &module) || module.SymType != SymPdb || module.PdbUnmatched) {
			Log::Warn_MDML("PDB {0} does not match the game executable, using patterns only", pdbPath.string());
			SymCleanup(s_Session);
			s_ModuleBase = 0;
			return false;
		}

		s_Initialized = true;
		Log::Info_MDML("Loaded symbols from {0} (build {1})", pdbPath.filename().string(), GetBuildId());
		return true;
	}

	void Shutdown() {
		if (!s_Initialized)
			return;
		SymCleanup(s_Session);
		s_ModuleBase = 0;
		s_Initialized = false;
	}

	bool IsAvailable() {
		return s_Initialized;
	}

	static DWORD64 LookupByName(const char* name, DWORD options) {
		alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
		auto symbol = (SYMBOL_INFO*)buffer;
		memset(symbol, 0, sizeof(SYMBOL_INFO));
		symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
		symbol->MaxNameLen = MAX_SYM_NAME;
		SymSetOptions(s_BaseOptions | options);
		return SymFromName(s_Session, name, symbol) ? symbol->Address : 0;
	}

	// The decorated public symbol that starts exactly at address, or "" if there is none.
	static std::string DecoratedNameAt(DWORD64 address) {
		alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
		auto symbol = (SYMBOL_INFO*)buffer;
		memset(symbol, 0, sizeof(SYMBOL_INFO));
		symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
		symbol->MaxNameLen = MAX_SYM_NAME;
		DWORD64 displacement = 0;
		SymSetOptions(s_BaseOptions | SYMOPT_PUBLICS_ONLY);
		if (!SymFromAddr(s_Session, address, &displacement, symbol) || displacement != 0)
			return "";
		return std::string(symbol->Name, symbol->NameLen);
	}

	// Looking up a decorated name directly makes DbgHelp scan all public symbols (~0.6 s per name with this PDB).
	// Undecorated names go through a hash table (~1 ms), so look up the plain name and confirm the hit by comparing
	// the decorated public symbol at that address. Only if that picked a different overload, pay for the slow path.
	static DWORD64 FindOne(const char* name, bool& slowPath) {
		if (name[0] != '?')
			return LookupByName(name, SYMOPT_UNDNAME);

		char plain[MAX_SYM_NAME];
		if (UnDecorateSymbolName(name, plain, MAX_SYM_NAME, UNDNAME_NAME_ONLY)) {
			DWORD64 address = LookupByName(plain, SYMOPT_UNDNAME);
			if (address && DecoratedNameAt(address) == name)
				return address;
		}
		slowPath = true;
		return LookupByName(name, 0);
	}

	DWORD64 Find(std::initializer_list<const char*> names) {
		if (!s_Initialized)
			return 0;

		DWORD64 address = 0;
		bool slowPath = false;
		auto start = std::chrono::steady_clock::now();
		for (const char* name : names) {
			address = FindOne(name, slowPath);
			if (address)
				break;
		}
		SymSetOptions(s_BaseOptions);

		// Diagnostics: a healthy fast lookup takes a few ms with a warm file cache. Seconds mean either the slow
		// full scan (slowPath) or a cold read of the PDB from disk.
		auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count();
		if (slowPath || ms > 500)
			Log::Info_MDML("PDB lookup of {0} took {1} ms ({2})", *names.begin(), ms, slowPath ? "slow full scan" : "hash lookup, slow disk?");
		return address;
	}
}
