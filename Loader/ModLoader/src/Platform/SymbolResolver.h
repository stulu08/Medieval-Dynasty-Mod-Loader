#pragma once
#include "Core.h"

// Resolves functions/globals of the game executable by name, using the PDB the game ships next to its EXE.
// Lookups go through DbgHelp's public symbol hash table, so they take milliseconds even for the ~800 MB PDB.
// The PDB is only accepted if its GUID/age matches the running EXE, otherwise every lookup returns 0 and
// the caller is expected to fall back to patterns.
namespace mdml::platform::SymbolResolver
{
	// Reads the RVA cache (cacheFile, only used if written for the running EXE build) and, if it is empty or stale,
	// loads the PDB of the main module. Returns false if neither cached addresses nor a matching PDB are available.
	bool Init(const std::filesystem::path& cacheFile);
	// Writes new cache entries and unloads the PDB.
	void Shutdown();
	bool IsAvailable();

	// Tries each name in order and returns the absolute address of the first hit, 0 if none matched.
	// Served from the RVA cache if possible; the PDB is loaded on the first cache miss.
	// Names may be decorated (e.g. "?Tick@UWorld@@QEAAXW4ELevelTick@@M@Z"), which is the only way to pick
	// a specific overload, or plain (e.g. "NamePoolData") for globals without a public symbol.
	DWORD64 Find(std::initializer_list<const char*> names);

	// "GUID-age" of the PDB the running EXE was linked with, read from its debug directory. Empty if absent.
	std::string GetBuildId();
}

