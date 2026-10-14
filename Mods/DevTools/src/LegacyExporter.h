#pragma once
// Legacy in-game SDK exporter, moved from BaseMod (`Utils::Export` in Mods/BaseMod/src/Utils.h) in Wave 3C (plan 2.5).
// It writes one C++ header/source pair per package from the reflection data of the running game. It is superseded by
// the Dumper-7 based generator (src/Generator, docs/SDK_GENERATOR.md) and stays only until BaseMod is migrated to the
// generated SDK (plan 2.4/Wave 4).
//
// Threading: everything here reads GObjects and reflection data (and may call ProcessEvent through UE4 wrappers), so
// it must run on the GAME thread. The UI never calls these directly: it uses mdml::runtime::GameThread::Enqueue
// (see DevTools.cpp / LegacyExporterUI). The old code ran in std::async threads next to the game; that is gone, the
// game now simply freezes while an export runs.
#include "MDML/MDML.h"

#include <filesystem>
#include <string>
#include <vector>

namespace devtools::legacy {
	// All UFunctions whose outer is `clas`, cached per class (reload = rescan GObjects). Game thread only.
	const std::vector<UE4::UFunction*>& GetAllClassFunctions(UE4::UClass* clas, bool reload = false);
	// Thread-safe copy of the cached list; false if the class was not scanned yet (the UI then offers a "Load" button
	// that enqueues GetAllClassFunctions on the game thread).
	bool TryGetCachedClassFunctions(UE4::UClass* clas, std::vector<UE4::UFunction*>& out);
	void ClearClassFunctionCache();

	// Writes <outFolder>/<Class>_Dump.txt with every function of the class. Game thread only. Returns the file or "".
	std::string DumpClassInfo(UE4::UClass* clas, const std::filesystem::path& outFolder);

	// One package -> <exportFolder>/<Package>/*.h|*.cpp + <Package>_SDK.h, appended to <exportFolder>/SDK.h.
	std::string Package(UE4::UPackage* pack, const std::string& exportFolder, bool appendToPack = true);
	std::string AllBPEnums(const std::string& exportFolder);   // -> <exportFolder>/BP_Enums.h
	std::string AllBPStructs(const std::string& exportFolder); // -> <exportFolder>/BP_Structs.h

	// Whole jobs for the UI (game thread only, sequential). Create the folder and SDK.h when missing and return a
	// one-line result for the log.
	std::string RunExportPackages(const std::vector<UE4::UPackage*>& packages, const std::filesystem::path& exportFolder);
	std::string RunExportBPEnums(const std::filesystem::path& exportFolder);
	std::string RunExportBPStructs(const std::filesystem::path& exportFolder);
}
