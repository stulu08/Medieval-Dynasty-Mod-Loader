#pragma once
#include <string>

namespace ModLoader
{
	// Loads every core mod DLL synchronously (BaseMod first, then alphabetical) and registers logic mods.
	void LoadMods();

	void CreateSysLinks();
	void DeleteSysLinks(bool isOld = false);
};