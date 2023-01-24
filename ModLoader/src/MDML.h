#pragma once
#include "GameInfo.h"

namespace UE4 {
	class AActor;
	class UClass;
	struct FTransform;
	struct FActorSpawnParameters;
}
struct ModInfo;
class LOADER_API MDML {
public:
	static void InitGameState(void* Return);
	static void BeginPlay(class UE4::AActor* Actor);

	static void InitCoreMods();
	static void CreateMod(struct ModInfo& mod);
	static void CleanUpMods();

	static class UE4::AActor* SpawnActor(class UE4::UClass* Class, const struct UE4::FTransform& transform, struct UE4::FActorSpawnParameters spawnParams);

	static void Start();
	static void ShutDown();

	static std::string FormatPath(const std::filesystem::path& path);
	//%LocalAppData%/Medieval_Dynasty/Saved
	static std::string GetDataFolder();

	static GameProfile SelectedGameProfile;
	static inline bool bIsProcessInternalsHooked = false;
	static inline bool GameStateClassInitNotRan = true;
};