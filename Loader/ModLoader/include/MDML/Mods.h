#pragma once
// The core mods (native mod DLLs) for mods (Wave 4, locked ModStack API, 3E-Q3): replaces direct access to
// Global::CoreMods. Also the Blueprint function wrapper registration (REGISTER_FUNCTION).
#include "MDML/Core.h"

class Mod;

namespace mdml::mods {
	// Calls fn for every core mod in load order. Thread-safe: holds the mod stack's shared lock while iterating, like an
	// event dispatch. Changes made from inside fn (MoveToFront, Mod::SetupHooks, ...) are applied when ForEachMod
	// returns, so they never invalidate the iteration.
	LOADER_API void ForEachMod(const std::function<void(Mod&)>& fn);
	// Number of core mods (a snapshot).
	LOADER_API size_t GetModCount();
	// The core mod with this Mod::ModName, or null.
	LOADER_API Mod* FindMod(const std::string& name);
	// Moves the mod to the front of the load order, so it gets every event first. Applied immediately, or after the
	// current dispatch / ForEachMod when called from inside one.
	LOADER_API void MoveToFront(Mod* mod);

	// Registers a Blueprint function wrapper (BPFUNCTION) that logic mods can call by name. Use REGISTER_FUNCTION.
	LOADER_API void RegisterBPFunction(const std::string& name, void* function);
}

#define REGISTER_FUNCTION(Function) mdml::mods::RegisterBPFunction(#Function, (void*)&Function);
#define REGISTER_FUNCTION_NAMED(Function, StringName) mdml::mods::RegisterBPFunction(StringName, (void*)&Function);
