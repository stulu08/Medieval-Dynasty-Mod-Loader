#include "Core.h"
#include "GameHooks.h"

#include "Globals.h"
#include "Mods/CoreModLoader.h"
#include "Mods/LogicMods.h"
#include "Platform/Hooks.h"
#include "Runtime/GameThread.h"
#include "Runtime/LoaderConfig.h"

#include "UE4.h"
#include "EngineAddresses.h"

namespace mdml::runtime {
	namespace {
		// Set by the first InitGameState hook (was MDML::GameStateClassInitNotRan, inverted).
		bool s_gameStateInitialized = false;

		void OnInitGameState() {
			Log::Info_UML("GameStateHook");
			Global::GetGlobals()->bIsMenuOpen = false;

			if (!s_gameStateInitialized) {
				mods::InitCoreMods();
				s_gameStateInitialized = true;
			}
			mods::CleanUpMods();

			if (mdml::Addresses.StaticLoadObject) {
				mods::SpawnLogicMods();
				Global::GetGlobals()->CoreMods.callEvent("InitGameState");
			}

			Log::Info_UML("Returning to GameState --------------------------------------------------------");
		}

		void OnBeginPlay(UE4::AActor* Actor) {
			if (!s_gameStateInitialized) {
				return;
			}
			if (Actor->IsA(UE4::ACustomClass::StaticClass(Config.BeginPlayOverwrite)))
			{
				Log::Info_UML("Beginplay Called");
				mods::PostBeginPlayLogicMods();
			}
			Global::GetGlobals()->CoreMods.callEvent("BeginPlay", Actor);
		}

		void OnTick(UE4::ELevelTick tick, float deltaTime) {
			GameThread::RunPending();
			Global::GetGlobals()->CoreMods.callEvent("Tick", tick, deltaTime);
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
