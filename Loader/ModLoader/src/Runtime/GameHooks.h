#pragma once
#include "Core.h"

// The loader's hooks into the game loop (Wave 3A, were MDML::InitGameState/BeginPlay/Tick in MDML.cpp and the
// detours in Platform/HooksManager.cpp). All of them run on the game thread. MDML-internal, not exported.
namespace mdml::runtime {
	// AGameModeBase::InitGameState, AActor::BeginPlay, UWorld::Tick. Called once on the init thread, after the mods
	// are loaded (Bootstrap/Startup.cpp).
	void InstallGameHooks();
	// ProcessLocalScriptFunction (logic-mod Blueprint calls, see mods::HandleScriptFunction). Installed when the first
	// logic-mod actor is spawned (Mods/LogicMods.cpp).
	void InstallScriptFunctionHook();
	// False until the first InitGameState hook has initialized the core mods (UE4::InitSDK + InitializeMod).
	bool IsGameStateInitialized();
	// ShutDown: back to the state before the first InitGameState.
	void ResetGameHooks();
	// Records the calling thread as the game thread for GameThread::IsInGameThread (first call wins; Runtime/GameThread.cpp).
	// The hooks call it so that the first InitGameState, which runs before the first UWorld::Tick, already counts.
	void MarkGameThread();
}
