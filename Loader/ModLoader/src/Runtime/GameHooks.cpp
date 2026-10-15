#include "Core.h"
#include "GameHooks.h"

#include "Mods/Registry.h"
#include "Mods/ModLoading.h"
#include "Mods/LogicMods.h"
#include "UI/ImGuiHost.h"
#include "MDML/Hooks.h"
#include "MDML/GameThread.h"
#include "Runtime/LoaderConfig.h"

#include "UE4.h"
#include "Engine.hpp"
#include "EngineAddresses.h"

namespace mdml::runtime {
	namespace {
		// Set by the first InitGameState hook (was MDML::GameStateClassInitNotRan, inverted).
		bool s_gameStateInitialized = false;

		void OnInitGameState() {
			MarkGameThread();
			Log::Info_UML("GameStateHook");
			ui::ImGuiHost::SetMenuOpen(false);

			if (!s_gameStateInitialized) {
				mods::InitCoreMods();
				s_gameStateInitialized = true;
			}
			mods::CleanUpMods();

			if (mdml::Addresses.StaticLoadObject) {
				mods::SpawnLogicMods();
				mdml::mods::Registry::Get().CoreMods.callEvent("InitGameState");
			}

			Log::Info_UML("Returning to GameState --------------------------------------------------------");
		}

		void OnBeginPlay(UE4::AActor* Actor) {
			if (!s_gameStateInitialized) {
				return;
			}
			// The logic mods' PostBeginPlay runs when a PlayerController begins play (hard-coded since Wave 3E; was the
			// UML [GameInfo] BeginPlayOverwrite class, always PlayerController).
			if (Actor->IsA(UE4::APlayerController::StaticClass()))
			{
				Log::Info_UML("Beginplay Called");
				mods::PostBeginPlayLogicMods();
			}
			mdml::mods::Registry::Get().CoreMods.callEvent("BeginPlay", Actor);
		}

		void OnTick(UE4::ELevelTick tick, float deltaTime) {
			GameThread::RunPending();
			mdml::mods::Registry::Get().CoreMods.callEvent("Tick", tick, deltaTime);
		}

		PVOID(*origProcessFunction)(UE4::UObject*, UE4::FFrame*, void* const);
		PVOID hookProcessFunction(UE4::UObject* obj, UE4::FFrame* Frame, void* const Result)
		{
			if (s_gameStateInitialized && mods::HandleScriptFunction(obj, Frame, Result))
				return nullptr;
			return origProcessFunction(obj, Frame, Result);
		}

		PVOID(*origInitGameState)(void*);
		PVOID hookInitGameState(void* Ret)
		{
			OnInitGameState();
			return origInitGameState(Ret);
		}

		// FEngineLoop::Exit runs once on the game thread when the game quits, before GEngine->PreExit(); UObjects are alive.
		void (*origEngineExit)(void*);
		void hookEngineExit(void* thisPtr)
		{
			mods::UnloadCoreMods();
			origEngineExit(thisPtr);
		}

		PVOID(*origBeginPlay)(UE4::AActor*);
		PVOID hookBeginPlay(UE4::AActor* Actor)
		{
			OnBeginPlay(Actor);
			return origBeginPlay(Actor);
		}

		PVOID(*origTick)(__int64, UE4::ELevelTick, float);
		PVOID hookTick(__int64 thisPtr, UE4::ELevelTick tick, float delta)
		{
			OnTick(tick, delta);
			return origTick(thisPtr, tick, delta);
		}
	}

	void InstallGameHooks() {
		platform::Hooks::Add(mdml::Addresses.GameStateInit, &hookInitGameState, &origInitGameState, "AGameModeBase::InitGameState");
		platform::Hooks::Add(mdml::Addresses.BeginPlay, &hookBeginPlay, &origBeginPlay, "AActor::BeginPlay");
		platform::Hooks::Add(mdml::Addresses.Tick, &hookTick, &origTick, "UWorld::Tick");
		if (mdml::Addresses.EngineExit)
			platform::Hooks::Add(mdml::Addresses.EngineExit, &hookEngineExit, &origEngineExit, "FEngineLoop::Exit");
		else
			Log::Warn_MDML("No FEngineLoop::Exit hook: CoreMod::OnUnload will not be called");
	}
	void InstallScriptFunctionHook() {
		platform::Hooks::Add(mdml::Addresses.ProcessInternals, &hookProcessFunction, &origProcessFunction, "ProcessBlueprintFunctions");
	}
	bool IsGameStateInitialized() {
		return s_gameStateInitialized;
	}
	void ResetGameHooks() {
		s_gameStateInitialized = false;
	}
}
