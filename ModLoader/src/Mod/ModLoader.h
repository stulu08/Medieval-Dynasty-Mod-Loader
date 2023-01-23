#pragma once
#include <string>

namespace ModLoader
{
	void InjectDLL(std::string path);
	void LoadMods();

	void CreateSysLinks();
	void DeleteSysLinks(bool isOld = false);
};