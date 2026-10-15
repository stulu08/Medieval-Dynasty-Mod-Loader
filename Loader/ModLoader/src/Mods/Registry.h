#pragma once
// Loader-internal registry of all mods (Wave 4: was the exported class Global in Globals.h; owner decision 2026-10-14
// "Global intern machen"). Not exported: mods use MDML/Mod.h (Mod, ModContext) and MDML/Mods.h instead.
// Since mod-components phase 1 there is ONE list of Mod containers (one per mod folder) instead of separate lists for
// core, logic and overwrite mods; the core components additionally sit in the ModStack (event order).
#include "UE4.h"

#include "MDML/CoreMod.h"
#include "MDML/Mod.h"
#include "Mods/ModStack.h"

namespace mdml::mods {
	// Load phases (docs/design/mod-components.md section 4). Phases 4 and 5 (engine ready, per level) are runtime.
	enum class LoadPhase {
		NotStarted,
		Scan,		// 0: mod.ini of every enabled folder is parsed
		Core,		// 1: DLLs are loaded, CoreMod::OnLoad may change the components
		Overwrite,	// 2: links over the final file lists
		Blueprint,	// 3: actors / persistent objects are registered
		Loaded,		// frozen
	};

	// Friend of Mod, CoreMod and ModContext: the only place that creates Mods and fills in their components.
	struct ModAccess {
		static Mod& Create(ModInfo info);
		static void SetCore(Mod& mod, CoreMod* core, HMODULE module);
		// Drops every component of the mod and marks it failed (Mod::Failed). The caller removes the core from the ModStack.
		static void Fail(Mod& mod, const std::string& reason);
		static BlueprintMod& EnsureBlueprint(Mod& mod);
		static OverwriteMod& EnsureOverwrite(Mod& mod);
		static ModContext MakeContext(Mod& self);
		// CoreMod::hModule / logger / GetMod are set before OnLoad
		static void SetupCore(CoreMod& core, Ref<Logger> logger);
	};

	class Registry {
	public:
		static Registry& Get();

		// All mods in load order (phase 0 fills it, the order is final after the scan). Stable addresses; changed only
		// on the init thread before LoadPhase::Loaded, read by the game and render threads afterwards.
		std::vector<std::unique_ptr<Mod>> Mods;
		LoadPhase Phase = LoadPhase::NotStarted;
		// The core components of the mods and their event handlers, in load order. Thread-safe, see ModStack.h.
		ModStack CoreMods;
		// Blueprint function wrappers (REGISTER_FUNCTION), looked up by LogicMods on the game thread.
		std::unordered_map<std::string, void*> BPFunctionWrappers;

		void* FindBPFunctionWrapper(const std::string& funcName) const {
			auto it = BPFunctionWrappers.find(funcName);
			return it != BPFunctionWrappers.end() ? it->second : nullptr;
		}
	};
}
