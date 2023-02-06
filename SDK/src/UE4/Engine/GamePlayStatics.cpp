#include "GamePlayStatics.h"
#include "Engine/World.h"

namespace UE4 {
	class AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class UClass* ActorClass;
			struct FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
			class AActor* Owner;
			class AActor* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.ActorClass = ActorClass;
		params.SpawnTransform = SpawnTransform;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		params.Owner = Owner;
		GameplayStatics->UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class FString UGameplayStatics::GetCurrentLevelName(bool bRemovePrefixString)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetCurrentLevelName");
		//auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		auto GameplayStatics = UE4::UObject::GetDefaultObjectFromArray<UE4::UGameplayStatics>(UE4::UGameplayStatics::StaticClass());
		struct
		{
			class UObject* WorldContextObject;
			bool bRemovePrefixString;
			class FString ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.bRemovePrefixString = bRemovePrefixString;
		GameplayStatics->UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class AGameState* UGameplayStatics::GetGameState()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameState");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct UGameplayStatics_GetGameState_Params
		{
			class UObject* WorldContextObject;
			class AGameState* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class AGameMode* UGameplayStatics::GetGameMode()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameMode");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class AGameMode* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class UGameInstance* UGameplayStatics::GetGameInstance()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameInstance");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class UGameInstance* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class APawn* UGameplayStatics::GetPlayerPawn(int PlayerIndex)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerPawn");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			int PlayerIndex;
			class APawn* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.PlayerIndex = PlayerIndex;
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class APlayerController* UGameplayStatics::GetPlayerController(int PlayerIndex)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerController");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			int PlayerIndex;
			class APlayerController* ReturnValue;
		}params;

		params.WorldContextObject = UWorld::GetWorld();
		params.PlayerIndex = PlayerIndex;
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}


	void UGameplayStatics::ExecuteConsoleCommand(const class FString& Command, class APlayerController* SpecificPlayer)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ExecuteConsoleCommand");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class FString Command;
			class APlayerController* SpecificPlayer;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.Command = Command;
		params.SpecificPlayer = SpecificPlayer;
		GameplayStatics->ProcessEvent(fn, &params);
	}
}