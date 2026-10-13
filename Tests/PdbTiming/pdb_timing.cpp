// Standalone timing test for SymbolResolver's PDB lookups. No game process needed: loads the EXE+PDB at a fake base.
// Build: build.bat (cl.exe, VS developer environment). Usage: pdb_timing.exe [path\to\Game-Win64-Shipping.exe]
#include <windows.h>
#include <DbgHelp.h>
#include <chrono>
#include <cstdio>
#include <string>
#include <filesystem>
#pragma comment(lib, "dbghelp.lib")
#pragma comment(lib, "version.lib")

static const HANDLE s_Session = (HANDLE)(ULONG_PTR)0x4D444D4C;
static const DWORD s_BaseOptions = SYMOPT_EXACT_SYMBOLS | SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_NO_PROMPTS;

// ---- copied from SymbolResolver.cpp ----
static DWORD64 LookupByName(const char* name, DWORD options) {
	alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
	auto symbol = (SYMBOL_INFO*)buffer;
	memset(symbol, 0, sizeof(SYMBOL_INFO));
	symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
	symbol->MaxNameLen = MAX_SYM_NAME;
	SymSetOptions(s_BaseOptions | options);
	return SymFromName(s_Session, name, symbol) ? symbol->Address : 0;
}
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
// ---- end copy ----

using Clock = std::chrono::steady_clock;
static double Ms(Clock::time_point a) { return std::chrono::duration<double, std::milli>(Clock::now() - a).count(); }

static const char* Names[] = {
	"NamePoolData",
	"?GUObjectArray@@3VFUObjectArray@@A",
	"?GWorld@@3VUWorldProxy@@A",
	"?InitGameState@AGameModeBase@@UEAAXXZ",
	"?BeginPlay@AActor@@MEAAXXZ",
	"?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z",
	"?StaticLoadObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W2IPEAVUPackageMap@@_NPEBVFLinkerInstancingContext@@@Z",
	"?StaticFindObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W_N@Z",
	"?SpawnActor@UWorld@@QEAAPEAVAActor@@PEAVUClass@@PEBUFTransform@@AEBUFActorSpawnParameters@@@Z",
	"?CallFunctionByNameWithArguments@UObject@@QEAA_NPEB_WAEAVFOutputDevice@@PEAV1@_N@Z",
	"?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z",
	"?CreateDefaultObject@UClass@@MEAAPEAVUObject@@XZ",
	"?GetDisplayNameTextByIndex@UUserDefinedEnum@@UEBA?AVFText@@H@Z",
	"?ProcessLocalScriptFunction@@YAXPEAVUObject@@AEAUFFrame@@QEAX@Z",
	"?StaticConstructObject_Internal@@YAPEAVUObject@@AEBUFStaticConstructObjectParameters@@@Z",
	"?IsNonPakFilenameAllowed@FPakPlatformFile@@AEAA_NAEBVFString@@@Z",
	"?FindFileInPakFiles@FPakPlatformFile@@QEAA_NPEB_WPEAV?$TRefCountPtr@VFPakFile@@@@PEAUFPakEntry@@@Z",
};

static std::wstring FileVersion(const wchar_t* path) {
	DWORD h; DWORD sz = GetFileVersionInfoSizeW(path, &h);
	if (!sz) return L"?";
	std::string buf(sz, 0);
	if (!GetFileVersionInfoW(path, 0, sz, buf.data())) return L"?";
	VS_FIXEDFILEINFO* fi; UINT len;
	if (!VerQueryValueW(buf.data(), L"\\", (void**)&fi, &len)) return L"?";
	wchar_t out[64];
	swprintf_s(out, L"%u.%u.%u.%u", HIWORD(fi->dwFileVersionMS), LOWORD(fi->dwFileVersionMS), HIWORD(fi->dwFileVersionLS), LOWORD(fi->dwFileVersionLS));
	return out;
}

int main(int argc, char** argv) {
	std::wstring exe = L"E:\\SteamLibrary\\steamapps\\common\\Medieval Dynasty\\Medieval_Dynasty\\Binaries\\Win64\\Medieval_Dynasty-Win64-Shipping.exe";
	if (argc > 1) exe = std::filesystem::path(argv[1]).wstring();
	std::filesystem::path pdb = std::filesystem::path(exe).replace_extension(L".pdb");

	auto t0 = Clock::now();
	SymSetOptions(s_BaseOptions);
	SymInitializeW(s_Session, pdb.parent_path().wstring().c_str(), FALSE);
	DWORD64 base = SymLoadModuleExW(s_Session, nullptr, exe.c_str(), nullptr, 0x140000000ull, 0, nullptr, 0);
	printf("SymLoadModuleEx: %.1f ms (base %llx)\n", Ms(t0), base);
	IMAGEHLP_MODULEW64 m = { sizeof(m) };
	SymGetModuleInfoW64(s_Session, base, &m);
	printf("SymType=%d PdbUnmatched=%d\n", (int)m.SymType, (int)m.PdbUnmatched);

	HMODULE dh = GetModuleHandleW(L"dbghelp.dll");
	wchar_t dpath[MAX_PATH]; GetModuleFileNameW(dh, dpath, MAX_PATH);
	wprintf(L"dbghelp loaded: %s  version %s\n", dpath, FileVersion(dpath).c_str());
	wchar_t sdir[MAX_PATH]; GetSystemDirectoryW(sdir, MAX_PATH);
	std::wstring sys = std::wstring(sdir) + L"\\dbghelp.dll";
	wprintf(L"system dbghelp: %s version %s\n", sys.c_str(), FileVersion(sys.c_str()).c_str());
	std::wstring local = pdb.parent_path().wstring() + L"\\dbghelp.dll";
	if (std::filesystem::exists(local)) wprintf(L"game-folder dbghelp: %s version %s\n", local.c_str(), FileVersion(local.c_str()).c_str());
	else printf("no dbghelp.dll in game folder\n");

	printf("\n%-34s %9s %9s %9s %9s  %s\n", "symbol", "plain ms", "check ms", "slow ms", "total ms", "result");
	double total = 0; int slow = 0;
	for (const char* name : Names) {
		auto t = Clock::now();
		double tPlain = 0, tCheck = 0, tSlow = 0;
		const char* path = "";
		DWORD64 addr = 0, fastAddr = 0;
		std::string at;
		if (name[0] != '?') {
			addr = LookupByName(name, SYMOPT_UNDNAME); tPlain = Ms(t); path = "fast(plain)";
		} else {
			char plain[MAX_SYM_NAME];
			bool und = UnDecorateSymbolName(name, plain, MAX_SYM_NAME, UNDNAME_NAME_ONLY) != 0;
			auto t1 = Clock::now();
			if (und) fastAddr = LookupByName(plain, SYMOPT_UNDNAME);
			tPlain = Ms(t1);
			auto t2 = Clock::now();
			if (fastAddr) at = DecoratedNameAt(fastAddr);
			tCheck = Ms(t2);
			if (fastAddr && at == name) { addr = fastAddr; path = "fast(hash)"; }
			else {
				auto t3 = Clock::now();
				addr = LookupByName(name, 0); tSlow = Ms(t3);
				path = "SLOW"; slow++;
				printf("   fallback: undecorated='%s' und=%d fastAddr=%llx decoratedAt='%.100s'\n", und ? plain : "<fail>", (int)und, fastAddr, at.c_str());
			}
		}
		double tot = Ms(t); total += tot;
		printf("%-34.34s %9.2f %9.2f %9.2f %9.2f  %s rva=%llx\n", name, tPlain, tCheck, tSlow, tot, path, addr ? addr - base : 0);
	}
	printf("\nTotal lookups: %.1f ms, slow-path count: %d\n", total, slow);
	SymCleanup(s_Session);
}
