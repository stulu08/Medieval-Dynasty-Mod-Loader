#pragma once
#include "Core.h"

namespace UE4 {
	class AActor;
	class UClass;
	class UObject;
	class FFrame;
	struct FTransform;
	struct FActorSpawnParameters;
}
struct ModInfo;

// Logic mods = Blueprint mod actors (Wave 3A, were MDML::CreateMod/CleanUpMods/SpawnActor in MDML.cpp, the
// [LogicMod] registration in Mod/ModLoader.cpp and the Blueprint-call handling in Platform/HooksManager.cpp).
// Everything but RegisterLogicMods runs on the game thread. MDML-internal, not exported.
// Registered mods: Global::GetGlobals()->ModInfoList.
namespace mdml::mods {
	// Init thread, after the core mods: one ModInfo per mod folder whose mod.ini has a [LogicMod] section.
	void RegisterLogicMods();
	// InitGameState: spawns the actor of every enabled logic mod (CreateMod), logs "Finished Spawning Mods".
	void SpawnLogicMods();
	void CreateMod(ModInfo& mod);
	// InitGameState, before spawning: calls ModCleanUp on the old actors and forgets them.
	void CleanUpMods();
	// BeginPlay of the BeginPlayOverwrite class: collects ModButtons, calls PostBeginPlay on the actors and the
	// "PostBeginPlay" core-mod event.
	void PostBeginPlayLogicMods();
	UE4::AActor* SpawnActor(UE4::UClass* Class, const UE4::FTransform& transform, UE4::FActorSpawnParameters spawnParams);
	// ProcessLocalScriptFunction hook: PrintToModLoader, GetPersistentObject and the BP function wrappers mods
	// registered with REGISTER_FUNCTION. Returns true if a wrapper handled the call (the original must not run).
	bool HandleScriptFunction(UE4::UObject* obj, UE4::FFrame* Frame, void* const Result);
	// ShutDown: the script-function hook is installed again after a restart.
	void ResetLogicMods();
}
