#pragma once
#include "Core.h"

class INI;

// Resolved engine addresses (globals and functions) (Wave 2.4, was the address/flag part of GameInfo.h `GameProfile` /
// `SDK::SelectedGameProfile`). Addresses come from the game PDB (or the RVA cache), falling back to the profile's
// patterns (EngineAddresses.cpp).
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

		// Hook targets (HooksManager).
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

		// Engine-mode flags of the removed UML multi-game paths (code inventory 3.1, decision 2026-10-09). The core no
		// longer reads any of them (since Wave 3D it hard-codes UE 4.27: FNamePool, chunked GUObjectArray, FProperty,
		// 4.26+ StaticConstructObject_Internal, CDO via UClass::CreateDefaultObject). The defaults are the 4.27 values.
		// Kept so SetupProfile (MDML.cpp) and HooksManager compile unchanged in Wave 3 round 1; see the 3D report.
		int UsesFNamePool = 1;
		bool IsUsingFChunkedFixedUObjectArray = true;
		bool IsUsing4_22 = false;
		bool IsUsingDeferedSpawn = false; // still read by MDML::SpawnActor (deferred-spawn path, off)
		bool IsUsingUpdatedStaticConstruct = true;
		bool bIsFProperty = true;
		bool bIsDefaultObjectArrayed = false;

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

	// Symbol resolution, called from SetupProfile (MDML.cpp) in this order, interleaved with the profile reading.
	// `GameInfo` is the opened game profile; SymbolResolver must be initialized before. MDML-internal, not exported.
	// [GInfo] globals GName/GObject/GWorld.
	void ResolveEngineGlobals(INI& GameInfo);
	// [FunctionInfo] functions, ProcessInternals, StaticConstructObject_Internal, then ResolveEngineExtras().
	void ResolveEngineFunctions(INI& GameInfo);
	// [PakOverwrite] IsNonPakFilenameAllowed/FindFileInPakFiles (only called when bPakOverwrite=1).
	void ResolvePakFunctions(INI& GameInfo);
	// PDB-only engine functions of Wave 3D (FName constructors, FMemory, FText). Called at the end of
	// ResolveEngineFunctions, so SetupProfile needs no change; idempotent.
	void ResolveEngineExtras();
}
