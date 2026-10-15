#pragma once
#include "Core.h"

namespace mdml::platform {
	class IniFile;
}

namespace mdml::runtime {
	// Engine side of the loader setup (startup step 3, Bootstrap/Startup.cpp, init thread; was the second half of
	// SetupProfile in MDML.cpp): [Symbols] UsePdb (PDB + Config/SymbolCache.txt), then the address resolution of
	// src/Engine/EngineAddresses.cpp (PDB first, the patterns of Config/ModLoaderInfo.ini as fallback). Ends with
	// SymbolResolver::Shutdown(). MDML-internal.
	void ResolveEngine(const platform::IniFile& loaderInfo, const std::string& mdmlDir);
}
