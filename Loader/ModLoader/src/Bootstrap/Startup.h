#pragma once
#include "Core.h"

// Loader lifecycle (Wave 3A, were MDML::Start/ShutDown + SetupProfile in MDML.cpp and HooksManager::SetupHooks/
// ShutDown). Called from DllMain only. MDML-internal, not exported.
namespace mdml::runtime {
	// DLL_PROCESS_ATTACH, under the loader lock: only creates the init thread, which then runs (in this order)
	// loader config + logs, NoOverwrite list, game profile, symbol resolution, MinHook, overwrite links, pak hooks,
	// core mod DLLs (LoadOrder.ini order), logic-mod registration, game hooks, UI logic thread.
	void Start(HMODULE module);
	// DLL_PROCESS_DETACH: removes the overwrite links, removes all hooks, resets the loader/engine state.
	void ShutDown();
}
