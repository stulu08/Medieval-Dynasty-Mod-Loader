#pragma once

// Hand-written engine types that the reflection data does not describe (Engine/Classes/Engine/EngineBaseTypes.h in UE).
// Wave 3E: moved here from MDML.h.
namespace UE4 {
	// Argument of UWorld::Tick (the loader's Tick hook, Mod::Tick).
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
