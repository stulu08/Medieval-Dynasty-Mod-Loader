#pragma once
#include <windows.h>

namespace Loader
{
	// Starts a thread that loads MDML.dll from the directory of proxyModule (this xinput1_3.dll).
	// Safe to call from DllMain.
	void LoadModLoader(HMODULE proxyModule);
};
