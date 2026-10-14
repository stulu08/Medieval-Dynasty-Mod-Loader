#pragma once
#include "MDML/Core.h"

namespace mdml::platform {
	class IniFile;
}

// Resolved engine addresses (globals and functions) (Wave 2.4, was the address/flag part of GameInfo.h `GameProfile` /
// `SDK::SelectedGameProfile`). Addresses come from the game PDB (or the RVA cache), falling back to the patterns in
// Config/ModLoaderInfo.ini (EngineAddresses.cpp). The UML engine-mode flags (UsesFNamePool, IsUsing4_22, ...) were
// removed in Wave 3E: the core is UE 4.27-only.
namespace mdml {
	struct EngineAddresses {
		// Engine globals: FNamePool (NamePoolData), GUObjectArray, GWorld.
		DWORD64 GName = 0x0;
		DWORD64 GObject = 0x0;
		DWORD64 GWorld = 0x0;

		// Engine functions the core calls.
		DWORD64 ProcessEvent = 0x0;
		DWORD64 CreateDefaultObject = 0x0;
		DWORD64 StaticLoadObject = 0x0;
		DWORD64 StaticFindObject = 0x0;
		DWORD64 SpawnActorFTrans = 0x0;
		DWORD64 GetDisplayNameTextByIndex = 0x0;
		DWORD64 StaticConstructObject_Internal = 0x0;
		DWORD64 CallFunctionByNameWithArguments = 0x0;

		// Hook targets (Runtime/GameHooks.cpp, Mods/LogicMods.cpp, Mods/OverwriteMods.cpp).
		DWORD64 GameStateInit = 0x0;
		DWORD64 BeginPlay = 0x0;
		DWORD64 Tick = 0x0;
		// ProcessLocalScriptFunction (called from UObject::ProcessInternal), the logic-mod BP function hook.
		DWORD64 ProcessInternals = 0x0;
		//bool FPakPlatformFile::IsNonPakFilenameAllowed(const FString & InFilename)
		//Need to return true
		DWORD64 IsNonPakFilenameAllowed = 0x0;
		//static bool FPakPlatformFile::FindFileInPakFiles(TArray<FPakListEntry>& Paks, const TCHAR * Filename, TRefCountPtr<FPakFile>* OutPakFile, FPakEntry * OutEntry = nullptr)
		//Need to return false is file exists
		DWORD64 FindFileInPakFiles = 0x0;

		// Engine functions resolved by PDB name only (Wave 3D). Optional: the core has a fallback for each one when it
		// is 0 (no PDB and no RVA cache entry). No ini patterns exist for them.
		DWORD64 FNameCtorWide = 0x0;   // FName::FName(const TCHAR* Name, EFindName FindType)
		DWORD64 FNameCtorAnsi = 0x0;   // FName::FName(const ANSICHAR* Name, EFindName FindType)
		DWORD64 FMemoryMalloc = 0x0;   // static void* FMemory::Malloc(SIZE_T Count, uint32 Alignment)
		DWORD64 FMemoryRealloc = 0x0;  // static void* FMemory::Realloc(void* Original, SIZE_T Count, uint32 Alignment)
		DWORD64 FMemoryFree = 0x0;     // static void FMemory::Free(void* Original)
		DWORD64 FTextToString = 0x0;   // const FString& FText::ToString() const
		DWORD64 FTextDestructor = 0x0; // FText::~FText()
	};

	// The one instance, defined in MDML.dll (Engine/EngineAddresses.cpp) and exported: inline core header code
	// (UClass::CreateDefaultObject, FName, FMemory users, ...) is compiled into mods and SDK.lib too.
	extern MDML_ENGINE_API EngineAddresses Addresses;

	// Symbol resolution, called from mdml::runtime::ResolveEngine (Runtime/EngineSetup.cpp) in this order. `profile` is
	// Config/ModLoaderInfo.ini; the PDB symbol is tried first, its patterns are the fallback. SymbolResolver must be
	// initialized before. MDML-internal, not exported.
	// [GInfo] FPool/GObject/GWorld patterns -> GName (FNamePool)/GObject/GWorld.
	void ResolveEngineGlobals(const platform::IniFile& profile);
	// [FunctionInfo] functions, ProcessInternals, StaticConstructObject_Internal, then ResolveEngineExtras().
	void ResolveEngineFunctions(const platform::IniFile& profile);
	// [PakOverwrite] IsNonPakFilenameAllowed/FindFileInPakFiles (only called when bPakOverwrite=1).
	void ResolvePakFunctions(const platform::IniFile& profile);
	// PDB-only engine functions of Wave 3D (FName constructors, FMemory, FText). Called at the end of
	// ResolveEngineFunctions; idempotent.
	void ResolveEngineExtras();
}
