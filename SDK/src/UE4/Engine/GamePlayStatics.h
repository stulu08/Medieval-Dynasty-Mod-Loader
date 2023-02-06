#pragma once
#include "Structs.h"
#include "BlueprintFunctionLibrary.h"


namespace UE4 {
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