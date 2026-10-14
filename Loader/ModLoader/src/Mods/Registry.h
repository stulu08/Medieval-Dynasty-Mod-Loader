#pragma once
// Loader-internal registry of all mods (Wave 4: was the exported class Global in Globals.h; owner decision 2026-10-14
// "Global intern machen"). Not exported: mods use the public functions in include/MDML/Mods.h instead.
#include "UE4.h"

#include "MDML/Mod.h"
#include "Mods/ModStack.h"

namespace mdml::mods {
	// A logic mod (Blueprint mod pak with a ModActor), see Mods/LogicMods.
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
	// A file overwrite mod, see Mods/OverwriteMods.
	struct OverwriteMod {
		std::string Name;
		std::string Author;
		std::string Description;

		std::vector<std::string> Files;
	};

	class Registry {
	public:
		static Registry& Get();

		// Logic mods (game thread).
		std::vector<ModInfo> ModInfoList;
		// Core mods (native mod DLLs) and their event handlers, in load order. Thread-safe, see ModStack.h.
		ModStack CoreMods;
		// Blueprint function wrappers (REGISTER_FUNCTION), looked up by LogicMods on the game thread.
		std::unordered_map<std::string, void*> BPFunctionWrappers;
		// Overwrite mods (filled during setup, read by the UI).
		std::vector<OverwriteMod> OverwriteMods;

		void* FindBPFunctionWrapper(const std::string& funcName) const {
			auto it = BPFunctionWrappers.find(funcName);
			return it != BPFunctionWrappers.end() ? it->second : nullptr;
		}
	};
}
