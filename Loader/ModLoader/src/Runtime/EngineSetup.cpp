#include "Core.h"
#include "EngineSetup.h"

#include "Platform/IniFile.h"
#include "Platform/Logger.h"
#include "Platform/SymbolResolver.h"
#include "Runtime/LoaderConfig.h"

#include "EngineAddresses.h"
#include "EngineLayout.h"

// The Resolve* functions in src/Engine/EngineAddresses.cpp still take the old feather INI object and select their own
// sections (package 3D owns that file). Only they get it; everything else here reads through IniFile.
#include "INI.h"

namespace mdml::runtime {
	void ResolveEngine(const platform::IniFile& profile, const std::string& profilePath, const std::string& mdmlDir) {
		if (profile.GetInt("Symbols", "UsePdb", 1))
			platform::SymbolResolver::Init(std::filesystem::path(mdmlDir) / "Config/SymbolCache.txt");

		INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
		INI GameInfo(profilePath, true);

#pragma region GameInfo
		mdml::Addresses.IsUsingFChunkedFixedUObjectArray = profile.GetInt("GameInfo", "IsUsingFChunkedFixedUObjectArray", 0) != 0;
		mdml::Addresses.UsesFNamePool = profile.GetInt("GameInfo", "UsesFNamePool", 0);
		// IsUsingDeferedSpawn, IsUsing4_22 and IsDefaultObjectArrayed are not read any more (dead UML multi-game
		// paths, owner decision 2026-10-09); the fields stay false until package 3D removes them from src/Engine.
#pragma endregion

#pragma region GInfo defs
		mdml::ResolveEngineGlobals(GameInfo);
#pragma endregion

// The manual offset sections [UObjectDef] [UFieldDef] [UStructDef] [UEnumDef] [UFunctionDef] [Property] [FField]
		// [FFieldClass] (UML multi-game path, code inventory 3.1) are not read any more: the shipped profile never had
		// them, EngineDefFinder scans the offsets in UE4::InitSDK (PDB constants later, package 3D). Without a
		// [Property] section the old code flagged the property offsets as missing; that is now unconditional.
		mdml::LayoutStatus.IsPropertyMissing = true;

#pragma region Function defs
		// [FunctionInfo] functions, ProcessInternals, StaticConstructObject_Internal.
		mdml::ResolveEngineFunctions(GameInfo);
#pragma endregion

#pragma region PakOverwrite
		if (Config.bPakOverride) {
			// ResolvePakFunctions reads [PakOverwrite] without selecting it (old INI quirk, code inventory 4.6).
			GameInfo.select("PakOverwrite");
			mdml::ResolvePakFunctions(GameInfo);
		}
#pragma endregion

		platform::SymbolResolver::Shutdown();
	}
}

DWORD StringToDWord(std::string str)
{
	// Shorter strings were read out of range (code inventory B9).
	if (str.size() < 2)
		return 0;
	unsigned int m_dwIP = 0;
	std::istringstream ss(&str[2]);
	ss >> std::hex >> m_dwIP;
	return m_dwIP;
}
