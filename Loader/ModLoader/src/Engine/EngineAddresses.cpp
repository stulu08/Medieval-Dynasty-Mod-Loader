#include "Core.h"
#include "EngineAddresses.h"

#include "Platform/Logger.h"
#include "Platform/Pattern.h"
#include "Platform/SymbolResolver.h"

#include "INI.h"

// Symbol resolution moved here from SetupProfile in MDML.cpp (Wave 2.4); code and log lines unchanged.
namespace mdml {
	EngineAddresses Addresses;

	// Decorated names from the game PDB. Decorated names pin the exact overload and still resolve after patches
	// as long as the engine signature does not change.
	namespace Symbols {
		constexpr const char* NamePoolData = "NamePoolData"; // file-static, has no public symbol
		constexpr const char* GUObjectArray = "?GUObjectArray@@3VFUObjectArray@@A";
		constexpr const char* GWorld = "?GWorld@@3VUWorldProxy@@A";
		constexpr const char* InitGameState = "?InitGameState@AGameModeBase@@UEAAXXZ";
		constexpr const char* BeginPlay = "?BeginPlay@AActor@@MEAAXXZ";
		constexpr const char* WorldTick = "?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z";
		constexpr const char* StaticLoadObject = "?StaticLoadObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W2IPEAVUPackageMap@@_NPEBVFLinkerInstancingContext@@@Z";
		constexpr const char* StaticFindObject = "?StaticFindObject@@YAPEAVUObject@@PEAVUClass@@PEAV1@PEB_W_N@Z";
		constexpr const char* SpawnActorFTrans = "?SpawnActor@UWorld@@QEAAPEAVAActor@@PEAVUClass@@PEBUFTransform@@AEBUFActorSpawnParameters@@@Z";
		constexpr const char* CallFunctionByNameWithArguments = "?CallFunctionByNameWithArguments@UObject@@QEAA_NPEB_WAEAVFOutputDevice@@PEAV1@_N@Z";
		constexpr const char* ProcessEvent = "?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z";
		constexpr const char* CreateDefaultObject = "?CreateDefaultObject@UClass@@MEAAPEAVUObject@@XZ";
		constexpr const char* UserDefinedEnumGetDisplayNameTextByIndex = "?GetDisplayNameTextByIndex@UUserDefinedEnum@@UEBA?AVFText@@H@Z";
		constexpr const char* ProcessLocalScriptFunction = "?ProcessLocalScriptFunction@@YAXPEAVUObject@@AEAUFFrame@@QEAX@Z";
		constexpr const char* StaticConstructObject_Internal = "?StaticConstructObject_Internal@@YAPEAVUObject@@AEBUFStaticConstructObjectParameters@@@Z";
		constexpr const char* IsNonPakFilenameAllowed = "?IsNonPakFilenameAllowed@FPakPlatformFile@@AEAA_NAEBVFString@@@Z";
		// Member overload; the static (TArray<FPakListEntry>&, ...) overload is called from it.
		constexpr const char* FindFileInPakFiles = "?FindFileInPakFiles@FPakPlatformFile@@QEAA_NPEB_WPEAV?$TRefCountPtr@VFPakFile@@@@PEAUFPakEntry@@@Z";
		// Wave 3D, PDB only (no ini patterns).
		constexpr const char* FNameCtorWide = "??0FName@@QEAA@PEB_WW4EFindName@@@Z";
		constexpr const char* FNameCtorAnsi = "??0FName@@QEAA@PEBDW4EFindName@@@Z";
		constexpr const char* FMemoryMalloc = "?Malloc@FMemory@@SAPEAX_KI@Z";
		constexpr const char* FMemoryRealloc = "?Realloc@FMemory@@SAPEAXPEAX_KI@Z";
		constexpr const char* FMemoryFree = "?Free@FMemory@@SAXPEAX@Z";
		constexpr const char* FTextToString = "?ToString@FText@@QEBAAEBVFString@@XZ";
		constexpr const char* FTextDestructor = "??1FText@@QEAA@XZ";
	}

	static void LogResolved(const char* name, DWORD64 address, const char* source) {
		if (address)
			Log::Info_MDML("{0}: 0x{1:x} ({2}, rva 0x{3:x})", name, address, source, address - (DWORD64)GetModuleHandleW(nullptr));
		else
			Log::Error_MDML("{0} not found!", name);
	}

	// A function pattern must match exactly once.
	static DWORD64 ScanFunction(const std::string& pattern, const char* name) {
		if (pattern.empty())
			return 0;
		auto hits = Pattern::FindAll(pattern.c_str());
		if (hits.size() > 1)
			Log::Error_MDML("{0}: pattern is ambiguous ({1} matches), ignoring it", name, hits.size());
		return hits.size() == 1 ? (DWORD64)hits[0] : 0;
	}

	// PDB symbol first, then the ini pattern of section/key (must match exactly once).
	// The UML raw-offset mode (IsFunctionPatterns=0, "0x..." module offsets) was removed in Wave 3D.
	static DWORD64 ResolveFunction(INI& ini, const char* section, const char* key, std::initializer_list<const char*> symbols) {
		DWORD64 address = SymbolResolver::Find(symbols);
		if (address) {
			LogResolved(key, address, "pdb");
			return address;
		}
		ini.select(section); // INI::get ignores its section argument and reads the selected section
		std::string value = ini.get(key, "");
		address = ScanFunction(value, key);
		LogResolved(key, address, "pattern");
		return address;
	}

	// Ini switches of the removed raw-offset mode: warn if a profile still asks for it.
	static void WarnIfRawOffsetMode(INI& ini, const char* section, const char* key) {
		ini.select(section); // INI::getAs ignores its section argument and reads the selected section
		if (ini.getAs<int>(section, key, 1) != 1)
			Log::Warn_MDML("[{0}] {1}=0 (raw offsets) is no longer supported; the values are treated as patterns", section, key);
	}

	// Same for globals; a [GInfo] pattern points at an instruction whose RIP-relative operand is the global.
	// The UML IsSimple=0 mode (<key>FirstOpCodes/<key>TotalByteInstruction) was removed in Wave 3D.
	static DWORD64 ResolveGlobal(INI& ini, const char* name, std::initializer_list<const char*> symbols, const char* key, size_t dispOffset, size_t instrEnd) {
		DWORD64 address = SymbolResolver::Find(symbols);
		if (address) {
			LogResolved(name, address, "pdb");
			return address;
		}
		ini.select("GInfo"); // INI::get ignores its section argument and reads the selected section
		std::string value = ini.get(key, "");
		if (value.empty()) {
			LogResolved(name, 0, "");
			return 0;
		}
		address = (DWORD64)Pattern::FindRipTarget(value.c_str(), dispOffset, instrEnd);
		if (!address && !Pattern::FindAll(value.c_str()).empty())
			Log::Error_MDML("{0}: pattern matches resolve to different addresses, ignoring it", name);
		LogResolved(name, address, "pattern");
		return address;
	}

	void ResolveEngineGlobals(INI& GameInfo) {
		// Globals: PDB symbol first, then the [GInfo] pattern (RIP-relative operand, all hits must agree).
		// UE 4.27 only: GName is always the FNamePool (NamePoolData / FPool pattern); the pre-4.23 GNames path is gone.
		if (GameInfo.select("GInfo") || SymbolResolver::IsAvailable())
		{
			WarnIfRawOffsetMode(GameInfo, "GInfo", "IsGInfoPatterns");
			Addresses.GName = ResolveGlobal(GameInfo, "GName", { Symbols::NamePoolData }, "FPool", 5, 9);
			Addresses.GObject = ResolveGlobal(GameInfo, "GObject", { Symbols::GUObjectArray }, "GObject", 14, 18);
			Addresses.GWorld = ResolveGlobal(GameInfo, "GWorld", { Symbols::GWorld }, "GWorld", 8, 12);
		}
		else
		{
			Log::Error_MDML("GInfo not provided!");
		}
	}

	void ResolveEngineFunctions(INI& GameInfo) {
#pragma region Function defs
		{
			WarnIfRawOffsetMode(GameInfo, "FunctionInfo", "IsFunctionPatterns");
			Addresses.GameStateInit = ResolveFunction(GameInfo, "FunctionInfo", "GameStateInit", { Symbols::InitGameState });
			Addresses.BeginPlay = ResolveFunction(GameInfo, "FunctionInfo", "BeginPlay", { Symbols::BeginPlay });
			Addresses.Tick = ResolveFunction(GameInfo, "FunctionInfo", "Tick", { Symbols::WorldTick });
			Addresses.StaticLoadObject = ResolveFunction(GameInfo, "FunctionInfo", "StaticLoadObject", { Symbols::StaticLoadObject });
			Addresses.StaticFindObject = ResolveFunction(GameInfo, "FunctionInfo", "StaticFindObject", { Symbols::StaticFindObject });
			Addresses.SpawnActorFTrans = ResolveFunction(GameInfo, "FunctionInfo", "SpawnActorFTrans", { Symbols::SpawnActorFTrans });
			Addresses.CallFunctionByNameWithArguments = ResolveFunction(GameInfo, "FunctionInfo", "CallFunctionByNameWithArguments", { Symbols::CallFunctionByNameWithArguments });
			Addresses.ProcessEvent = ResolveFunction(GameInfo, "FunctionInfo", "ProcessEvent", { Symbols::ProcessEvent });
			Addresses.CreateDefaultObject = ResolveFunction(GameInfo, "FunctionInfo", "CreateDefaultObject", { Symbols::CreateDefaultObject });
			Addresses.GetDisplayNameTextByIndex = ResolveFunction(GameInfo, "FunctionInfo", "GetDisplayNameTextByIndex", { Symbols::UserDefinedEnumGetDisplayNameTextByIndex });
		}
#pragma endregion

#pragma region ProcessInternal def
		// The hook target is ProcessLocalScriptFunction, called from UObject::ProcessInternal.
		Addresses.ProcessInternals = SymbolResolver::Find({ Symbols::ProcessLocalScriptFunction });
		if (Addresses.ProcessInternals)
		{
			LogResolved("ProcessInternals", Addresses.ProcessInternals, "pdb");
		}
		else
		{
			GameInfo.select("ProcessInternalFunction");
			std::string pattern = GameInfo.get("ProcessInternal", "41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8");
			Addresses.ProcessInternals = (DWORD64)Pattern::FindRipTarget(pattern.c_str(), 16, 20);
			LogResolved("ProcessInternals", Addresses.ProcessInternals, "pattern");
		}
#pragma endregion

#pragma region StaticConstructObject_Internal def
		// UE 4.26+ takes a single FStaticConstructObjectParameters argument; the legacy multi-argument signature
		// (IsUsingUpdatedStaticConstruct=0) was removed in Wave 3D.
		Addresses.StaticConstructObject_Internal = SymbolResolver::Find({ Symbols::StaticConstructObject_Internal });
		if (Addresses.StaticConstructObject_Internal)
		{
			LogResolved("StaticConstructObject_Internal", Addresses.StaticConstructObject_Internal, "pdb");
		}
		else
		{
			GameInfo.select("StaticConstructObject_Internal");
			Addresses.StaticConstructObject_Internal = ScanFunction(GameInfo.get("Pattern", ""), "StaticConstructObject_Internal");
			LogResolved("StaticConstructObject_Internal", Addresses.StaticConstructObject_Internal, "pattern");
		}
		if (!Addresses.StaticConstructObject_Internal)
			Log::Warn_MDML("Mods using the ModObjectInstance will not work properly.");
#pragma endregion

		ResolveEngineExtras();
	}

	void ResolvePakFunctions(INI& GameInfo) {
		WarnIfRawOffsetMode(GameInfo, "PakOverwrite", "IsFunctionPatterns");
		Addresses.IsNonPakFilenameAllowed = ResolveFunction(GameInfo, "PakOverwrite", "IsNonPakFilenameAllowed", { Symbols::IsNonPakFilenameAllowed });
		Addresses.FindFileInPakFiles = ResolveFunction(GameInfo, "PakOverwrite", "FindFileInPakFiles", { Symbols::FindFileInPakFiles });
	}

	// Optional engine functions: PDB/RVA cache only. Missing ones are a warning, not an error, because the core falls
	// back (FName lookup by walking the name pool, CRT heap for FMemory, the old FText layout read).
	static DWORD64 ResolveOptional(const char* name, const char* symbol) {
		DWORD64 address = SymbolResolver::Find({ symbol });
		if (address)
			LogResolved(name, address, "pdb");
		else
			Log::Warn_MDML("{0} not found (needs the game PDB or the symbol cache); using the fallback", name);
		return address;
	}

	void ResolveEngineExtras() {
		Addresses.FNameCtorWide = ResolveOptional("FName::FName(const TCHAR*)", Symbols::FNameCtorWide);
		Addresses.FNameCtorAnsi = ResolveOptional("FName::FName(const ANSICHAR*)", Symbols::FNameCtorAnsi);
		Addresses.FMemoryMalloc = ResolveOptional("FMemory::Malloc", Symbols::FMemoryMalloc);
		Addresses.FMemoryRealloc = ResolveOptional("FMemory::Realloc", Symbols::FMemoryRealloc);
		Addresses.FMemoryFree = ResolveOptional("FMemory::Free", Symbols::FMemoryFree);
		Addresses.FTextToString = ResolveOptional("FText::ToString", Symbols::FTextToString);
		Addresses.FTextDestructor = ResolveOptional("FText::~FText", Symbols::FTextDestructor);
	}
}
