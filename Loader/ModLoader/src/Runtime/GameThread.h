#pragma once
#include "Core.h"

#include <functional>

namespace mdml {
	// Queue of tasks executed on the game thread (inside the UWorld::Tick hook).
	// UE is not thread-safe: any thread other than the game thread must go through Enqueue
	// before calling into the engine (UObject access, ProcessEvent, console commands, ...).
	class LOADER_API GameThread {
	public:
		// Thread-safe. Tasks always run later, from RunPending on the game thread (never inline,
		// even when called from the game thread itself). A task may enqueue further tasks;
		// those run on the next tick.
		static void Enqueue(std::function<void()> task);
		// True only on the game thread; false before the first RunPending call.
		static bool IsInGameThread();
		// Called by the loader from the Tick hook. Do not call from mods.
		static void RunPending();
	};
}
