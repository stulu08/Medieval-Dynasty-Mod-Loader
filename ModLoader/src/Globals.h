#pragma once
#include <map>
#include <iostream>
#include <string>

#include "UE4/UE4.hpp"

#include "Mod/Mod.h"
#include "Mod/ModStack.h"

#include "Core.h"


struct ModInfo
{
	// BaseMod
	std::wstring ModName;
	// ModActor
	std::wstring ActorName;
	// /Game/Mods/BaseMod/ModActor.ModActor_C
	std::wstring ActorPath;
	std::string ModAuthor = "Unknown Author";
	std::string ModDescription = "No Description";
	std::string ModVersion = "Unknown Version";
	UE4::AActor* CurrentModActor = nullptr;
	UE4::UObject* PersistentObject = nullptr;
	bool IsEnabled = 0;
	bool ContainsButton = 0;
	bool WasInitialized = 0;
	std::vector<std::string> ModButtons;
};

class LOADER_API Global {
public:
	struct BPFunctionWrapper
	{
		std::string FunctionName;
		void* FuncPtr;
	};
	std::vector<ModInfo> ModInfoList;
	std::string GameName;
	bool bIsMenuOpen;
	ModStack CoreMods;
	std::vector<BPFunctionWrapper> BPFunctionWrappers;

	static Global* GetGlobals();

	void AddBPFunctionWrapper(std::string FunctionName, void* FuncPtr)
	{
		BPFunctionWrapper FunctionWrap;
		FunctionWrap.FunctionName = FunctionName;
		FunctionWrap.FuncPtr = FuncPtr;
		BPFunctionWrappers.push_back(FunctionWrap);
	}

	void AddToCoreMods(Mod* mod)
	{
		CoreMods.push_back(mod);
	}

	std::vector<BPFunctionWrapper> GetBPFunctionWrappers()
	{
		return BPFunctionWrappers;
	}

private:
	static Global* glb;
};
