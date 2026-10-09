#pragma once
#include "Core.h"

// Resolves functions/globals of the game executable by name, using the PDB the game ships next to its EXE.
// Lookups go through DbgHelp's public symbol hash table, so they take milliseconds even for the ~800 MB PDB.
// The PDB is only accepted if its GUID/age matches the running EXE, otherwise every lookup returns 0 and
// the caller is expected to fall back to patterns.
namespace SymbolResolver
{
	// Loads the PDB of the main module. Returns false if no matching PDB is available.
	bool Init();
	void Shutdown();
	bool IsAvailable();

	// Tries each name in order and returns the absolute address of the first hit, 0 if none matched.
	// Names may be decorated (e.g. "?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z"), which is the only way to pick
	// a specific overload, or plain (e.g. "NamePoolData") for globals without a public symbol.
	DWORD64 Find(std::initializer_list<const char*> names);

	// "GUID-age" of the PDB the running EXE was linked with, read from its debug directory. Empty if absent.
	std::string GetBuildId();
}
