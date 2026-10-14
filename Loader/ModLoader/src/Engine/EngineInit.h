#pragma once

// Engine initialization (Wave 2.3; declarations moved here from MDML.h in Wave 3E). The engine core (GObjects, GNames,
// GWorld, ...) lives once in MDML.dll and is exported, so mods do not call these. Defined in Engine/EngineInit.cpp,
// MDML-internal (not exported).
namespace UE4 {
	// Binds UObject::GObjects / FName::GNames / UWorld::GWorld to the addresses resolved into mdml::Addresses.
	// Idempotent and cheap. Today only called by InitSDK(); could be called right after the addresses are resolved.
	void InitEngineGlobals();
	// InitEngineGlobals() + the engine layout check (ClassDefFinder::VerifyEngineLayout, Runtime/EngineDefFinder.h).
	// Called once, from mdml::mods::InitCoreMods() (first InitGameState), before any mod's InitializeMod() registers
	// its events.
	void InitSDK();
}
