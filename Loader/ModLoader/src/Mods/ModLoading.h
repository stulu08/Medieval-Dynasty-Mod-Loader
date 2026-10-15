#pragma once
#include "Core.h"

// Mod loading in phases (docs/design/mod-components.md section 4). Phases 0-3 run on the loader's init thread, in
// LoadOrder.ini order, each phase over ALL mods before the next starts:
//   0 ScanMods                 parse mod.ini of every enabled folder, build the Mod list with its components
//   1 LoadCoreMods             LoadLibrary + MDML_CreateMod + CoreMod::OnLoad(ModContext&); components still mutable
//   2 mods::CreateSysLinks     (OverwriteMods.h) links over the final overwrite file lists, then the pak hooks
//   3 mods::RegisterBlueprintMods (LogicMods.h) actors / persistent objects from the final settings; then frozen
// Failed mods (core did not load / OnLoad threw) lose all components, see Mod::Failed.
// Phase 4 (InitCoreMods, first InitGameState, game thread) is the "engine ready" step. MDML-internal, not exported.
namespace mdml::mods {
	enum class LoadPhase;

	// Phase 0. Needs the loader config (paths). Also resolves Config/LoadOrder.ini.
	void ScanMods();
	// Phase 1.
	void LoadCoreMods();
	// Marks the start of a phase (Registry::Phase, checked by ModContext). Phase 3 ends with SetPhase(Loaded).
	void SetPhase(LoadPhase phase);
	// Engine exit (hook on FEngineLoop::Exit, game thread): CoreMod::OnUnload of every loaded core in reverse load
	// order, exception-safe, at most once per process.
	void UnloadCoreMods();
	// First InitGameState (game thread): UE4::InitSDK, then InitializeMod() of every core mod in load order.
	void InitCoreMods();
	// Reads/updates Config/LoadOrder.ini (next to NoOverwrite.ini) once; later calls are no-ops.
	void ResolveLoadOrder();
}
