#pragma once
// Function list of a class for the object browser (was part of the legacy SDK exporter, LegacyExporter.h, which was
// removed in Wave 4 step B together with the old SDK).
//
// Threading: GetAllClassFunctions and DumpClassInfo scan GObjects and must run on the GAME thread (the UI enqueues
// them with mdml::runtime::GameThread::Enqueue); TryGetCachedClassFunctions and ClearClassFunctionCache are thread-safe.
#include "MDML/MDML.h"

#include <filesystem>
#include <string>
#include <vector>

namespace devtools::classinfo {
	// All UFunctions whose outer is `clas`, cached per class (reload = rescan GObjects). Game thread only.
	const std::vector<UE4::UFunction*>& GetAllClassFunctions(UE4::UClass* clas, bool reload = false);
	// Thread-safe copy of the cached list; false if the class was not scanned yet (the UI then offers a "Load" button
	// that enqueues GetAllClassFunctions on the game thread).
	bool TryGetCachedClassFunctions(UE4::UClass* clas, std::vector<UE4::UFunction*>& out);
	void ClearClassFunctionCache();

	// Writes <outFolder>/<Class>_Dump.txt with every function of the class. Game thread only. Returns the file or "".
	std::string DumpClassInfo(UE4::UClass* clas, const std::filesystem::path& outFolder);
}
