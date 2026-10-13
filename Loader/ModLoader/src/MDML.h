#pragma once
#include "Engine/EngineDefFinder.h"


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
struct ModInfo;
class LOADER_API MDML {
public:
	static void InitGameState(void* Return);
	static void BeginPlay(class UE4::AActor* Actor);
	static void Tick(UE4::ELevelTick tick, float deltaTime);

	static void InitCoreMods();
	static void CreateMod(struct ModInfo& mod);
	static void CleanUpMods();

	static class UE4::AActor* SpawnActor(class UE4::UClass* Class, const struct UE4::FTransform& transform, struct UE4::FActorSpawnParameters spawnParams);

	// Called from DllMain(DLL_PROCESS_ATTACH): only starts the init thread (profile setup, hooks, mod loading).
	static void Start(HMODULE module);
	static void ShutDown();

	static std::string FormatPath(const std::filesystem::path& path);
	//%LocalAppData%/Medieval_Dynasty/Saved
	static std::string GetDataFolder();

	static inline bool IsProcessInternalsHooked = false;
	static inline bool GameStateClassInitNotRan = true;
	static inline Ref<Logger> UnrealEngineLoggerInstance = nullptr;
};

namespace UE4 {
	// Engine initialization (Wave 2.3). The engine core (GObjects, GNames, GWorld, ...) lives once in MDML.dll and is
	// exported, so mods no longer call InitSDK() themselves. Defined in Engine/EngineInit.cpp, MDML-internal (not exported).
	// Binds UObject::GObjects / FName::GNames / UWorld::GWorld to the addresses resolved into mdml::Addresses.
	// Idempotent and cheap. Today only called by InitSDK(); could be called right after the addresses are resolved.
	void InitEngineGlobals();
	// InitEngineGlobals() + EngineDefFinder scan for engine offsets that are still missing. Called once, from
	// MDML::InitCoreMods(), i.e. before any mod's InitializeMod() registers its events (same timing as before).
	void InitSDK();
}
