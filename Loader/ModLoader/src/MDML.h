#pragma once
#include "Runtime/EngineDefFinder.h"

// What is left of the old static class MDML (dissolved in Wave 3A, see docs/reports/wave3/3A-runtime.md):
//   MDML::Start/ShutDown                      -> mdml::runtime::Start/ShutDown          (Bootstrap/Startup.h)
//   MDML::InitGameState/BeginPlay/Tick        -> mdml::runtime game hooks              (Runtime/GameHooks.h)
//   MDML::InitCoreMods                        -> mdml::mods::InitCoreMods              (Mods/CoreModLoader.h)
//   MDML::CreateMod/CleanUpMods/SpawnActor    -> mdml::mods                            (Mods/LogicMods.h)
//   MDML::FormatPath/GetDataFolder            -> mdml::runtime::FormatPath/GetDataFolder (Runtime/Paths.h)
// This header only keeps engine declarations that src/Engine/EngineInit.cpp, Runtime/Dumper.cpp and Mods/Mod.h still
// include through it; they move into src/Engine with package 3D.

namespace UE4 {
	class AActor;
	class UClass;
	struct FTransform;
	struct FActorSpawnParameters;

	enum class ELevelTick
	{
		/** Update the level time only. */
		TimeOnly = 0,
		/** Update time and viewports. */
		ViewportsOnly = 1,
		/** Update all. */
		All = 2,
		/** Delta time is zero, we are paused. Components don't tick. */
		PauseTick = 3,
	};
}

namespace UE4 {
	// Engine initialization (Wave 2.3). The engine core (GObjects, GNames, GWorld, ...) lives once in MDML.dll and is
	// exported, so mods no longer call InitSDK() themselves. Defined in Engine/EngineInit.cpp, MDML-internal (not exported).
	// Binds UObject::GObjects / FName::GNames / UWorld::GWorld to the addresses resolved into mdml::Addresses.
	// Idempotent and cheap. Today only called by InitSDK(); could be called right after the addresses are resolved.
	void InitEngineGlobals();
	// InitEngineGlobals() + EngineDefFinder scan for engine offsets that are still missing. Called once, from
	// mdml::mods::InitCoreMods(), i.e. before any mod's InitializeMod() registers its events (same timing as before).
	void InitSDK();
}
