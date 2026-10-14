#include "Core.h"
#include "EngineSetup.h"

#include "Platform/IniFile.h"
#include "Platform/SymbolResolver.h"
#include "Runtime/LoaderConfig.h"

#include "EngineAddresses.h"

namespace mdml::runtime {
	void ResolveEngine(const platform::IniFile& loaderInfo, const std::string& mdmlDir) {
		if (loaderInfo.GetInt("Symbols", "UsePdb", 1))
			platform::SymbolResolver::Init(std::filesystem::path(mdmlDir) / "Config/SymbolCache.txt");

		// The UML engine-mode keys ([GameInfo] UsesFNamePool, IsUsingFChunkedFixedUObjectArray, IsUsing4_22, ...) and
		// the manual offset sections ([UObjectDef] ... [FFieldClass]) are gone: the core is UE 4.27-only and its
		// offsets are PDB-checked constants (src/Engine/EngineLayout.h), verified at engine init by EngineDefFinder.

		// [GInfo] globals.
		mdml::ResolveEngineGlobals(loaderInfo);
		// [FunctionInfo] functions, ProcessInternals, StaticConstructObject_Internal, PDB-only extras.
		mdml::ResolveEngineFunctions(loaderInfo);
		// [PakOverwrite] functions.
		if (Config.bPakOverride)
			mdml::ResolvePakFunctions(loaderInfo);

		platform::SymbolResolver::Shutdown();
	}
}
