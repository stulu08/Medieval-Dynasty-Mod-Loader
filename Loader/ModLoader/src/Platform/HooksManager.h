#pragma once

namespace HooksManager
{
	// Blocking: MinHook, overwrite links, pak hooks, mod loading, game hooks, UI logic thread.
	// Called on MDML's init thread, never from DllMain.
	void SetupHooks();
	void AddProcessInternalHook();
	void ShutDown();
};