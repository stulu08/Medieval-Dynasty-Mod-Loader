#pragma once
#include "Core.h"

// Core mods = native mod DLLs (Wave 3A, were ModLoader::LoadMods in Mod/ModLoader.cpp and MDML::InitCoreMods).
// MDML-internal, not exported.
namespace mdml::mods {
	// Loads every enabled core mod DLL from Content/Mods synchronously on the calling thread (MDML's init thread),
	// in Config/LoadOrder.ini order (BaseMod first). Each mod constructs itself in its DllMain and registers in
	// Global::CoreMods (Mod::CompleteModCreation), so it is complete once this returns.
	void LoadCoreMods();
	// First InitGameState (game thread): UE4::InitSDK, then InitializeMod() of every core mod in load order.
	void InitCoreMods();
	// Reads/updates Config/LoadOrder.ini (next to NoOverwrite.ini) once; later calls are no-ops.
	void ResolveLoadOrder();
}
