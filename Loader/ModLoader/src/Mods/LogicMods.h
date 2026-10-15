#pragma once
#include "Core.h"

class Mod;
struct BlueprintMod;
namespace UE4 {
	class AActor;
	class UClass;
	class UObject;
	class FFrame;
}

// Logic mods = Blueprint mod actors (Wave 3A, were MDML::CreateMod/CleanUpMods/SpawnActor in MDML.cpp, the
// [LogicMod] registration in Mod/ModLoader.cpp and the Blueprint-call handling in Platform/HooksManager.cpp).
// Everything but RegisterBlueprintMods runs on the game thread. MDML-internal, not exported.
// Since mod-components phase 1 a logic mod is the [Blueprint] component of a Mod (Mod::Blueprint(), MDML/Mod.h).
namespace mdml::mods {
	// Load phase 3 (init thread, after the overwrite links): asset paths from the final [Blueprint] settings of every
	// mod that has an Actor. Ends loading (the mod list is frozen).
	void RegisterBlueprintMods();
	// InitGameState: spawns the actor of every registered Blueprint component (CreateMod), logs "Finished Spawning Mods".
	void SpawnLogicMods();
	void CreateMod(Mod& mod, BlueprintMod& blueprint);
	// InitGameState, before spawning: calls ModCleanUp on the old actors and forgets them.
	void CleanUpMods();
	// BeginPlay of a PlayerController (Runtime/GameHooks.cpp): collects ModButtons, calls PostBeginPlay on the actors and the
	// "PostBeginPlay" core-mod event.
	void PostBeginPlayLogicMods();
	// ProcessLocalScriptFunction hook: PrintToModLoader, GetPersistentObject and the BP function wrappers mods
	// registered with REGISTER_FUNCTION. Returns true if a wrapper handled the call (the original must not run).
	bool HandleScriptFunction(UE4::UObject* obj, UE4::FFrame* Frame, void* const Result);
	// ShutDown: the script-function hook is installed again after a restart.
	void ResetLogicMods();
}
