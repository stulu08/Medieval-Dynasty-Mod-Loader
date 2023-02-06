#pragma once
#include "UE4.h"

#include "Mod/Mod.h"
#include "Mod/ModStack.h"

struct ModInfo
{
	// BaseMod
	std::wstring ModName;

	// ModActor
	std::wstring ActorName;
	// /Game/Mods/BaseMod/ModActor.ModActor_C
	std::wstring ActorPath;

	// ModInstanceObject
	std::wstring PersistentObjectName;
	// /Game/Mods/BaseMod/ModInstanceObject.ModInstanceObject
	std::wstring PersistentObjectPath;

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
struct OverwriteMod {
	std::string Name;
	std::string Author;
	std::string Description;

	std::vector<std::string> Files;
};
typedef std::pair<std::string, void*> BPFunctionWrapper;
class LOADER_API Global {
public:
	std::vector<ModInfo> ModInfoList;
	std::string GameName;
	bool bIsMenuOpen;
	ModStack CoreMods;
	std::unordered_map<std::string, void*> BPFunctionWrappers;
	std::vector<OverwriteMod> OverwriteMods;

	static Global* GetGlobals();

	void AddBPFunctionWrapper(std::string FunctionName, void* FuncPtr) {
		BPFunctionWrapper FunctionWrap;
		FunctionWrap.first = FunctionName;
		FunctionWrap.second = FuncPtr;
		BPFunctionWrappers.insert(FunctionWrap);
	}

	void AddToCoreMods(Mod* mod)
	{
		CoreMods.push_back(mod);
	}

	void* FindBPfunctionWrapper(const std::string& funcName) {
		auto it = BPFunctionWrappers.find(funcName);
		if (it != BPFunctionWrappers.end()) {
			return (*it).second;
		}
		return nullptr;
	}

	std::unordered_map<std::string, void*> GetBPFunctionWrappers() {
		return BPFunctionWrappers;
	}

private:
	static Global* glb;
};
