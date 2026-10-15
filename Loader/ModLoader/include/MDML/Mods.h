#pragma once
// The mod list for mods (Wave 4, locked ModStack API, 3E-Q3; one entry per mod folder since mod-components phase 1):
// replaces direct access to the loader's registry. During CoreMod::OnLoad prefer ModContext (MDML/Mod.h), which may
// also change the components. Also the Blueprint function wrapper registration (REGISTER_FUNCTION).
#include "MDML/Core.h"

class Mod;
class CoreMod;

namespace mdml::mods {
	// Calls fn for every mod in load order. The list is frozen once loading is done, so this is safe from any thread
	// after OnLoad; the components' own state (actors, ...) is owned by the game thread.
	LOADER_API void ForEachMod(const std::function<void(Mod&)>& fn);
	// Number of mods (a snapshot).
	LOADER_API size_t GetModCount();
	// The mod with this Info().Name, or null.
	LOADER_API Mod* FindMod(const std::string& name);
	// Moves the core component to the front of the event order, so it gets every event first. Applied immediately, or
	// after the current dispatch when called from inside one.
	LOADER_API void MoveToFront(CoreMod* mod);

	// Registers a Blueprint function wrapper (BPFUNCTION) that logic mods can call by name. Use REGISTER_FUNCTION.
	LOADER_API void RegisterBPFunction(const std::string& name, void* function);
}

#define REGISTER_FUNCTION(Function) mdml::mods::RegisterBPFunction(#Function, (void*)&Function);
#define REGISTER_FUNCTION_NAMED(Function, StringName) mdml::mods::RegisterBPFunction(StringName, (void*)&Function);
