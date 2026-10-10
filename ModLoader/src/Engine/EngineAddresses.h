#pragma once
#include "Core.h"

// Resolved engine addresses (globals and functions) and the engine-mode flags the core branches on (Wave 2.4, was the
// address/flag part of GameInfo.h `GameProfile` / `SDK::SelectedGameProfile`).
// Addresses come from the game PDB, falling back to the profile's patterns or raw offsets (SetupProfile, MDML.cpp).
// The mode flags are read from the profile's [GameInfo]/[Property] sections in SetupProfile (MDML.cpp); most of them
// are UML multi-game paths (code inventory 3.1) and fixed for UE 4.27.
namespace mdml {
	struct EngineAddresses {
		// Engine globals: FNamePool (or GNames), GUObjectArray, GWorld.
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

		// Engine-mode flags.
		int UsesFNamePool = 0;
		bool IsUsingFChunkedFixedUObjectArray = false;
		bool IsUsing4_22 = false;
		bool IsUsingDeferedSpawn = false;
		bool IsUsingUpdatedStaticConstruct = false;
		bool bIsFProperty = false;
		bool bIsDefaultObjectArrayed = false;
	};

	// The one instance, defined in MDML.dll (Engine/EngineAddresses.cpp) and exported: inline core header code
	// (FName::IsUsingNamePool, FUObjectArray::IsChunkedArray, UClass::CreateDefaultObject, ...) is compiled into mods
	// and SDK.lib too.
	extern MDML_ENGINE_API EngineAddresses Addresses;
}
