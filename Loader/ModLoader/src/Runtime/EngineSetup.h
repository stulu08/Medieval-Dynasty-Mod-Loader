#pragma once
#include "Core.h"

namespace mdml::platform {
	class IniFile;
}

namespace mdml::runtime {
	// Engine side of the game profile (startup step 3, Bootstrap/Startup.cpp, init thread; was the second half of
	// SetupProfile in MDML.cpp): [Symbols] UsePdb (PDB + Config/SymbolCache.txt), the [GameInfo] engine-mode flags in
	// mdml::Addresses, then the address resolution of src/Engine/EngineAddresses.cpp (PDB first, the profile's patterns
	// as fallback). Ends with SymbolResolver::Shutdown(). MDML-internal.
	void ResolveEngine(const platform::IniFile& profile, const std::string& profilePath, const std::string& mdmlDir);
}

// "0x..." hex string -> value (the first two characters are skipped; 0 for shorter strings). Global and with this exact signature
// because src/Engine/EngineAddresses.cpp declares and calls it (raw offset mode); defined in Runtime/EngineSetup.cpp.
DWORD StringToDWord(std::string str);
