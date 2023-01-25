#pragma once
#include "BlueprintFunctionLibrary.h"


namespace UE4 {
	enum class ESpawnActorCollisionHandlingMethod : uint8_t
	{
		Undefined = 0,
		AlwaysSpawn = 1,
		AdjustIfPossibleButAlwaysSpawn = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding = 4,
		ESpawnActorCollisionHandlingMethod_MAX = 5
	};
	class UGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:

		static class AActor* BeginDeferredActorSpawnFromClass(class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);

		static class FString GetCurrentLevelName(bool bRemovePrefixString);

		static class AGameState* GetGameState();
		static class AGameMode* GetGameMode();
		static class UGameInstance* GetGameInstance();
		static class APawn* GetPlayerPawn(int PlayerIndex);
		static class APlayerController* GetPlayerController(int PlayerIndex);

		static void ExecuteConsoleCommand(const class FString& Command, class APlayerController* SpecificPlayer);

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
			return ptr;
		}
	};
}