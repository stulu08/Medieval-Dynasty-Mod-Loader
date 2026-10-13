#pragma once
#include "Core.h"

namespace UE4 {
	// The engine allocator (GMalloc behind FMemory::Malloc/Realloc/Free), resolved by PDB name at startup
	// (mdml::Addresses.FMemoryMalloc/Realloc/Free, EngineAddresses.cpp). Memory that the engine may later grow or free
	// (TArray/FString data handed to the engine, or engine-owned arrays MDML grows) must come from here, never from the
	// CRT heap. Defined in MDML.dll (UnrealMemory.cpp) and exported.
	//
	// Fallback while the engine functions are not resolved (no PDB/cache, or before SetupProfile): the CRT heap
	// (malloc/realloc/free), i.e. the old behaviour, with a one-time warning in the log.
	struct MDML_ENGINE_API FMemory {
		static void* Malloc(size_t Count, uint32_t Alignment = 0);
		static void* Realloc(void* Original, size_t Count, uint32_t Alignment = 0);
		static void Free(void* Original);
		// True if Malloc/Realloc/Free go to the engine allocator.
		static bool IsEngineAllocator();
	};
}
