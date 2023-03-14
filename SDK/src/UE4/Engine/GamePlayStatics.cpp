#include "GamePlayStatics.h"
#include "../SDK.h"

namespace UE4 {
	//class AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		class UClass* ActorClass;
	//		struct FTransform SpawnTransform;
	//		ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
	//		class AActor* Owner;
	//		class AActor* ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	params.ActorClass = ActorClass;
	//	params.SpawnTransform = SpawnTransform;
	//	params.CollisionHandlingOverride = CollisionHandlingOverride;
	//	params.Owner = Owner;
	//	GameplayStatics->UObject::ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class FString UGameplayStatics::GetCurrentLevelName(bool bRemovePrefixString)
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetCurrentLevelName");
	//	//auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	auto GameplayStatics = UE4::UObject::GetDefaultObjectFromArray<UE4::UGameplayStatics>(UE4::UGameplayStatics::StaticClass());
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		bool bRemovePrefixString;
	//		class FString ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	params.bRemovePrefixString = bRemovePrefixString;
	//	GameplayStatics->UObject::ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class AGameState* UGameplayStatics::GetGameState()
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameState");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct UGameplayStatics_GetGameState_Params
	//	{
	//		class UObject* WorldContextObject;
	//		class AGameState* ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	GameplayStatics->ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class AGameMode* UGameplayStatics::GetGameMode()
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameMode");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		class AGameMode* ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	GameplayStatics->ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class UGameInstance* UGameplayStatics::GetGameInstance()
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameInstance");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		class UGameInstance* ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	GameplayStatics->ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class APawn* UGameplayStatics::GetPlayerPawn(int PlayerIndex)
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerPawn");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		int PlayerIndex;
	//		class APawn* ReturnValue;
	//	}params;
	//	params.WorldContextObject = UWorld::GetWorld();
	//	params.PlayerIndex = PlayerIndex;
	//	GameplayStatics->ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}
	//
	//class APlayerController* UGameplayStatics::GetPlayerController(int PlayerIndex)
	//{
	//	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerController");
	//	auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
	//	struct
	//	{
	//		class UObject* WorldContextObject;
	//		int PlayerIndex;
	//		class APlayerController* ReturnValue;
	//	}params;
	//
	//	params.WorldContextObject = UWorld::GetWorld();
	//	params.PlayerIndex = PlayerIndex;
	//	GameplayStatics->ProcessEvent(fn, &params);
	//	return params.ReturnValue;
	//}


	void UGameplayStatics::ExecuteConsoleCommand(const class FString& Command, class APlayerController* SpecificPlayer)
	{
		//static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ExecuteConsoleCommand");
		//auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		//struct
		//{
		//	class UObject* WorldContextObject;
		//	class FString Command;
		//	class APlayerController* SpecificPlayer;
		//}params;
		//params.WorldContextObject = UWorld::GetWorld();
		//params.Command = Command;
		//params.SpecificPlayer = SpecificPlayer;
		UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), Command, SpecificPlayer);
		//GameplayStatics->ProcessEvent(fn, &params);
	}

	/////////////////////////////////////////////
// Function Engine.GameplayStatics.ActivateReverbEffect
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReverbEffect	Type: class UReverbEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TagName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Priority	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Volume	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FadeTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
	void UGameplayStatics::ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ActivateReverbEffect");

		struct UGameplayStatics_ActivateReverbEffect_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UReverbEffect* ReverbEffect;			//Offset: 8 | ElementSize: 8
			struct FName TagName;			//Offset: 16 | ElementSize: 8
			float Priority;			//Offset: 24 | ElementSize: 4
			float Volume;			//Offset: 28 | ElementSize: 4
			float FadeTime;			//Offset: 32 | ElementSize: 4
		};
		UGameplayStatics_ActivateReverbEffect_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ReverbEffect = ReverbEffect;
		params.TagName = TagName;
		params.Priority = Priority;
		params.Volume = Volume;
		params.FadeTime = FadeTime;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.AnnounceAccessibleString
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: AnnouncementString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::AnnounceAccessibleString(struct FString AnnouncementString) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.AnnounceAccessibleString");

		struct UGameplayStatics_AnnounceAccessibleString_Params {
			struct FString AnnouncementString;			//Offset: 0 | ElementSize: 16
		};
		UGameplayStatics_AnnounceAccessibleString_Params params;
		params.AnnouncementString = AnnouncementString;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ApplyDamage
	// Flags: Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: DamagedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: BaseDamage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: EventInstigator	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ApplyDamage");

		struct UGameplayStatics_ApplyDamage_Params {
			class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
			float BaseDamage;			//Offset: 8 | ElementSize: 4
			class AController* EventInstigator;			//Offset: 16 | ElementSize: 8
			class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
			class UDamageType* DamageTypeClass;			//Offset: 32 | ElementSize: 8
			float ReturnValue;			//Offset: 40 | ElementSize: 4
		};
		UGameplayStatics_ApplyDamage_Params params;
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.DamageTypeClass = DamageTypeClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ApplyPointDamage
	// Flags: Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: DamagedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: BaseDamage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: EventInstigator	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ApplyPointDamage");

		struct UGameplayStatics_ApplyPointDamage_Params {
			class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
			float BaseDamage;			//Offset: 8 | ElementSize: 4
			struct FVector HitFromDirection;			//Offset: 12 | ElementSize: 12
			struct FHitResult HitInfo;			//Offset: 24 | ElementSize: 136
			class AController* EventInstigator;			//Offset: 160 | ElementSize: 8
			class AActor* DamageCauser;			//Offset: 168 | ElementSize: 8
			class UDamageType* DamageTypeClass;			//Offset: 176 | ElementSize: 8
			float ReturnValue;			//Offset: 184 | ElementSize: 4
		};
		UGameplayStatics_ApplyPointDamage_Params params;
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.HitFromDirection = HitFromDirection;
		params.HitInfo = HitInfo;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.DamageTypeClass = DamageTypeClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ApplyRadialDamage
	// Flags: Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: BaseDamage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Origin	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: IgnoreActors	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InstigatedByController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bDoFullDamage	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamagePreventionChannel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UDamageType* DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ApplyRadialDamage");

		struct UGameplayStatics_ApplyRadialDamage_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float BaseDamage;			//Offset: 8 | ElementSize: 4
			struct FVector Origin;			//Offset: 12 | ElementSize: 12
			float DamageRadius;			//Offset: 24 | ElementSize: 4
			class UDamageType* DamageTypeClass;			//Offset: 32 | ElementSize: 8
			TArray<class AActor*> IgnoreActors;			//Offset: 40 | ElementSize: 16
			class AActor* DamageCauser;			//Offset: 56 | ElementSize: 8
			class AController* InstigatedByController;			//Offset: 64 | ElementSize: 8
			bool bDoFullDamage;			//Offset: 72 | ElementSize: 1
			TEnumAsByte<ECollisionChannel> DamagePreventionChannel;			//Offset: 73 | ElementSize: 1
			bool ReturnValue;			//Offset: 74 | ElementSize: 1
		};
		UGameplayStatics_ApplyRadialDamage_Params params;
		params.WorldContextObject = WorldContextObject;
		params.BaseDamage = BaseDamage;
		params.Origin = Origin;
		params.DamageRadius = DamageRadius;
		params.DamageTypeClass = DamageTypeClass;
		params.IgnoreActors = IgnoreActors;
		params.DamageCauser = DamageCauser;
		params.InstigatedByController = InstigatedByController;
		params.bDoFullDamage = bDoFullDamage;
		params.DamagePreventionChannel = DamagePreventionChannel;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ApplyRadialDamageWithFalloff
	// Flags: Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: BaseDamage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MinimumDamage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Origin	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageInnerRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageOuterRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageFalloff	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: IgnoreActors	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InstigatedByController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DamagePreventionChannel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UDamageType* DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ApplyRadialDamageWithFalloff");

		struct UGameplayStatics_ApplyRadialDamageWithFalloff_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float BaseDamage;			//Offset: 8 | ElementSize: 4
			float MinimumDamage;			//Offset: 12 | ElementSize: 4
			struct FVector Origin;			//Offset: 16 | ElementSize: 12
			float DamageInnerRadius;			//Offset: 28 | ElementSize: 4
			float DamageOuterRadius;			//Offset: 32 | ElementSize: 4
			float DamageFalloff;			//Offset: 36 | ElementSize: 4
			class UDamageType* DamageTypeClass;			//Offset: 40 | ElementSize: 8
			TArray<class AActor*> IgnoreActors;			//Offset: 48 | ElementSize: 16
			class AActor* DamageCauser;			//Offset: 64 | ElementSize: 8
			class AController* InstigatedByController;			//Offset: 72 | ElementSize: 8
			TEnumAsByte<ECollisionChannel> DamagePreventionChannel;			//Offset: 80 | ElementSize: 1
			bool ReturnValue;			//Offset: 81 | ElementSize: 1
		};
		UGameplayStatics_ApplyRadialDamageWithFalloff_Params params;
		params.WorldContextObject = WorldContextObject;
		params.BaseDamage = BaseDamage;
		params.MinimumDamage = MinimumDamage;
		params.Origin = Origin;
		params.DamageInnerRadius = DamageInnerRadius;
		params.DamageOuterRadius = DamageOuterRadius;
		params.DamageFalloff = DamageFalloff;
		params.DamageTypeClass = DamageTypeClass;
		params.IgnoreActors = IgnoreActors;
		params.DamageCauser = DamageCauser;
		params.InstigatedByController = InstigatedByController;
		params.DamagePreventionChannel = DamagePreventionChannel;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.AreAnyListenersWithinRange
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MaximumRange	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.AreAnyListenersWithinRange");

		struct UGameplayStatics_AreAnyListenersWithinRange_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector Location;			//Offset: 8 | ElementSize: 12
			float MaximumRange;			//Offset: 20 | ElementSize: 4
			bool ReturnValue;			//Offset: 24 | ElementSize: 1
		};
		UGameplayStatics_AreAnyListenersWithinRange_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.MaximumRange = MaximumRange;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.AreSubtitlesEnabled
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::AreSubtitlesEnabled() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.AreSubtitlesEnabled");

		struct UGameplayStatics_AreSubtitlesEnabled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		UGameplayStatics_AreSubtitlesEnabled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: CollisionHandlingOverride	Type: ESpawnActorCollisionHandlingMethod	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Owner	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class AActor* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass");

		struct UGameplayStatics_BeginDeferredActorSpawnFromClass_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AActor* ActorClass;			//Offset: 8 | ElementSize: 8
			struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;			//Offset: 64 | ElementSize: 1
			class AActor* Owner;			//Offset: 72 | ElementSize: 8
			class AActor* ReturnValue;			//Offset: 80 | ElementSize: 8
		};
		UGameplayStatics_BeginDeferredActorSpawnFromClass_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.SpawnTransform = SpawnTransform;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		params.Owner = Owner;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Blueprint	Type: class UBlueprint*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: bNoCollisionFail	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint");

		struct UGameplayStatics_BeginSpawningActorFromBlueprint_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UBlueprint* Blueprint;			//Offset: 8 | ElementSize: 8
			struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
			bool bNoCollisionFail;			//Offset: 64 | ElementSize: 1
			class AActor* ReturnValue;			//Offset: 72 | ElementSize: 8
		};
		UGameplayStatics_BeginSpawningActorFromBlueprint_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Blueprint = Blueprint;
		params.SpawnTransform = SpawnTransform;
		params.bNoCollisionFail = bNoCollisionFail;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.BeginSpawningActorFromClass
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: bNoCollisionFail	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Owner	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::BeginSpawningActorFromClass(class UObject* WorldContextObject, class AActor* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginSpawningActorFromClass");

		struct UGameplayStatics_BeginSpawningActorFromClass_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AActor* ActorClass;			//Offset: 8 | ElementSize: 8
			struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
			bool bNoCollisionFail;			//Offset: 64 | ElementSize: 1
			class AActor* Owner;			//Offset: 72 | ElementSize: 8
			class AActor* ReturnValue;			//Offset: 80 | ElementSize: 8
		};
		UGameplayStatics_BeginSpawningActorFromClass_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.SpawnTransform = SpawnTransform;
		params.bNoCollisionFail = bNoCollisionFail;
		params.Owner = Owner;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_Advanced
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PredictParams	Type: struct FPredictProjectilePathParams	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: PredictResult	Type: struct FPredictProjectilePathResult	Flags: Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_Advanced");

		struct UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FPredictProjectilePathParams PredictParams;			//Offset: 8 | ElementSize: 96
			struct FPredictProjectilePathResult PredictResult;			//Offset: 104 | ElementSize: 184
			bool ReturnValue;			//Offset: 288 | ElementSize: 1
		};
		UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PredictParams = PredictParams;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (PredictResult != nullptr)
			*PredictResult = params.PredictResult;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: OutPathPositions	Type: TArray<struct FVector>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	// Name: OutLastTraceDestination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartPos	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LaunchVelocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bTracePath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ProjectileRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DrawDebugTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SimFrequency	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MaxSimTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OverrideGravityZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType");

		struct UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FHitResult OutHit;			//Offset: 8 | ElementSize: 136
			TArray<struct FVector> OutPathPositions;			//Offset: 144 | ElementSize: 16
			struct FVector OutLastTraceDestination;			//Offset: 160 | ElementSize: 12
			struct FVector StartPos;			//Offset: 172 | ElementSize: 12
			struct FVector LaunchVelocity;			//Offset: 184 | ElementSize: 12
			bool bTracePath;			//Offset: 196 | ElementSize: 1
			float ProjectileRadius;			//Offset: 200 | ElementSize: 4
			TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 208 | ElementSize: 16
			bool bTraceComplex;			//Offset: 224 | ElementSize: 1
			TArray<class AActor*> ActorsToIgnore;			//Offset: 232 | ElementSize: 16
			TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 248 | ElementSize: 1
			float DrawDebugTime;			//Offset: 252 | ElementSize: 4
			float SimFrequency;			//Offset: 256 | ElementSize: 4
			float MaxSimTime;			//Offset: 260 | ElementSize: 4
			float OverrideGravityZ;			//Offset: 264 | ElementSize: 4
			bool ReturnValue;			//Offset: 268 | ElementSize: 1
		};
		UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Params params;
		params.WorldContextObject = WorldContextObject;
		params.StartPos = StartPos;
		params.LaunchVelocity = LaunchVelocity;
		params.bTracePath = bTracePath;
		params.ProjectileRadius = ProjectileRadius;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		params.DrawDebugType = DrawDebugType;
		params.DrawDebugTime = DrawDebugTime;
		params.SimFrequency = SimFrequency;
		params.MaxSimTime = MaxSimTime;
		params.OverrideGravityZ = OverrideGravityZ;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		if (OutPathPositions != nullptr)
			*OutPathPositions = params.OutPathPositions;
		if (OutLastTraceDestination != nullptr)
			*OutLastTraceDestination = params.OutLastTraceDestination;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: OutPathPositions	Type: TArray<struct FVector>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	// Name: OutLastTraceDestination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartPos	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LaunchVelocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bTracePath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ProjectileRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceChannel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DrawDebugTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SimFrequency	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MaxSimTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OverrideGravityZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel");

		struct UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FHitResult OutHit;			//Offset: 8 | ElementSize: 136
			TArray<struct FVector> OutPathPositions;			//Offset: 144 | ElementSize: 16
			struct FVector OutLastTraceDestination;			//Offset: 160 | ElementSize: 12
			struct FVector StartPos;			//Offset: 172 | ElementSize: 12
			struct FVector LaunchVelocity;			//Offset: 184 | ElementSize: 12
			bool bTracePath;			//Offset: 196 | ElementSize: 1
			float ProjectileRadius;			//Offset: 200 | ElementSize: 4
			TEnumAsByte<ECollisionChannel> TraceChannel;			//Offset: 204 | ElementSize: 1
			bool bTraceComplex;			//Offset: 205 | ElementSize: 1
			TArray<class AActor*> ActorsToIgnore;			//Offset: 208 | ElementSize: 16
			TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 224 | ElementSize: 1
			float DrawDebugTime;			//Offset: 228 | ElementSize: 4
			float SimFrequency;			//Offset: 232 | ElementSize: 4
			float MaxSimTime;			//Offset: 236 | ElementSize: 4
			float OverrideGravityZ;			//Offset: 240 | ElementSize: 4
			bool ReturnValue;			//Offset: 244 | ElementSize: 1
		};
		UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Params params;
		params.WorldContextObject = WorldContextObject;
		params.StartPos = StartPos;
		params.LaunchVelocity = LaunchVelocity;
		params.bTracePath = bTracePath;
		params.ProjectileRadius = ProjectileRadius;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		params.DrawDebugType = DrawDebugType;
		params.DrawDebugTime = DrawDebugTime;
		params.SimFrequency = SimFrequency;
		params.MaxSimTime = MaxSimTime;
		params.OverrideGravityZ = OverrideGravityZ;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		if (OutPathPositions != nullptr)
			*OutPathPositions = params.OutPathPositions;
		if (OutLastTraceDestination != nullptr)
			*OutLastTraceDestination = params.OutLastTraceDestination;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.BlueprintSuggestProjectileVelocity
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TossVelocity	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: EndLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LaunchSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OverrideGravityZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceOption	Type: TEnumAsByte<ESuggestProjVelocityTraceOption>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: CollisionRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bFavorHighArc	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bDrawDebug	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, struct FVector* TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BlueprintSuggestProjectileVelocity");

		struct UGameplayStatics_BlueprintSuggestProjectileVelocity_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector TossVelocity;			//Offset: 8 | ElementSize: 12
			struct FVector StartLocation;			//Offset: 20 | ElementSize: 12
			struct FVector EndLocation;			//Offset: 32 | ElementSize: 12
			float LaunchSpeed;			//Offset: 44 | ElementSize: 4
			float OverrideGravityZ;			//Offset: 48 | ElementSize: 4
			TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption;			//Offset: 52 | ElementSize: 1
			float CollisionRadius;			//Offset: 56 | ElementSize: 4
			bool bFavorHighArc;			//Offset: 60 | ElementSize: 1
			bool bDrawDebug;			//Offset: 61 | ElementSize: 1
			bool ReturnValue;			//Offset: 62 | ElementSize: 1
		};
		UGameplayStatics_BlueprintSuggestProjectileVelocity_Params params;
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.LaunchSpeed = LaunchSpeed;
		params.OverrideGravityZ = OverrideGravityZ;
		params.TraceOption = TraceOption;
		params.CollisionRadius = CollisionRadius;
		params.bFavorHighArc = bFavorHighArc;
		params.bDrawDebug = bDrawDebug;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (TossVelocity != nullptr)
			*TossVelocity = params.TossVelocity;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.BreakHitResult
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: bBlockingHit	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bInitialOverlap	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ImpactPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Normal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ImpactNormal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PhysMat	Type: class UPhysicalMaterial*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitActor	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitBoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitItem	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ElementIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FaceIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceStart	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceEnd	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int32_t* HitItem, int32_t* ElementIndex, int32_t* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BreakHitResult");

		struct UGameplayStatics_BreakHitResult_Params {
			struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
			bool bBlockingHit;			//Offset: 136 | ElementSize: 1
			bool bInitialOverlap;			//Offset: 137 | ElementSize: 1
			float Time;			//Offset: 140 | ElementSize: 4
			float Distance;			//Offset: 144 | ElementSize: 4
			struct FVector Location;			//Offset: 148 | ElementSize: 12
			struct FVector ImpactPoint;			//Offset: 160 | ElementSize: 12
			struct FVector Normal;			//Offset: 172 | ElementSize: 12
			struct FVector ImpactNormal;			//Offset: 184 | ElementSize: 12
			class UPhysicalMaterial* PhysMat;			//Offset: 200 | ElementSize: 8
			class AActor* HitActor;			//Offset: 208 | ElementSize: 8
			class UPrimitiveComponent* HitComponent;			//Offset: 216 | ElementSize: 8
			struct FName HitBoneName;			//Offset: 224 | ElementSize: 8
			int32_t HitItem;			//Offset: 232 | ElementSize: 4
			int32_t ElementIndex;			//Offset: 236 | ElementSize: 4
			int32_t FaceIndex;			//Offset: 240 | ElementSize: 4
			struct FVector TraceStart;			//Offset: 244 | ElementSize: 12
			struct FVector TraceEnd;			//Offset: 256 | ElementSize: 12
		};
		UGameplayStatics_BreakHitResult_Params params;
		params.Hit = Hit;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (bBlockingHit != nullptr)
			*bBlockingHit = params.bBlockingHit;
		if (bInitialOverlap != nullptr)
			*bInitialOverlap = params.bInitialOverlap;
		if (Time != nullptr)
			*Time = params.Time;
		if (Distance != nullptr)
			*Distance = params.Distance;
		if (Location != nullptr)
			*Location = params.Location;
		if (ImpactPoint != nullptr)
			*ImpactPoint = params.ImpactPoint;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (ImpactNormal != nullptr)
			*ImpactNormal = params.ImpactNormal;
		if (PhysMat != nullptr)
			*PhysMat = params.PhysMat;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
		if (HitComponent != nullptr)
			*HitComponent = params.HitComponent;
		if (HitBoneName != nullptr)
			*HitBoneName = params.HitBoneName;
		if (HitItem != nullptr)
			*HitItem = params.HitItem;
		if (ElementIndex != nullptr)
			*ElementIndex = params.ElementIndex;
		if (FaceIndex != nullptr)
			*FaceIndex = params.FaceIndex;
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.CancelAsyncLoading
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	/////////////////////////////////////////////
	void UGameplayStatics::CancelAsyncLoading() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.CancelAsyncLoading");

		struct UGameplayStatics_CancelAsyncLoading_Params {
		};
		UGameplayStatics_CancelAsyncLoading_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ClearSoundMixClassOverride
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundMixModifier	Type: class USoundMix*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundClass	Type: class USoundClass*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FadeOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ClearSoundMixClassOverride");

		struct UGameplayStatics_ClearSoundMixClassOverride_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundMix* InSoundMixModifier;			//Offset: 8 | ElementSize: 8
			class USoundClass* InSoundClass;			//Offset: 16 | ElementSize: 8
			float FadeOutTime;			//Offset: 24 | ElementSize: 4
		};
		UGameplayStatics_ClearSoundMixClassOverride_Params params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundMixModifier = InSoundMixModifier;
		params.InSoundClass = InSoundClass;
		params.FadeOutTime = FadeOutTime;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ClearSoundMixModifiers
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::ClearSoundMixModifiers(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ClearSoundMixModifiers");

		struct UGameplayStatics_ClearSoundMixModifiers_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		};
		UGameplayStatics_ClearSoundMixModifiers_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.CreatePlayer
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bSpawnPlayerController	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class APlayerController* UGameplayStatics::CreatePlayer(class UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.CreatePlayer");

		struct UGameplayStatics_CreatePlayer_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t ControllerId;			//Offset: 8 | ElementSize: 4
			bool bSpawnPlayerController;			//Offset: 12 | ElementSize: 1
			class APlayerController* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_CreatePlayer_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ControllerId = ControllerId;
		params.bSpawnPlayerController = bSpawnPlayerController;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.CreateSaveGameObject
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: SaveGameClass	Type: class USaveGame*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class USaveGame*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class USaveGame* UGameplayStatics::CreateSaveGameObject(class USaveGame* SaveGameClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.CreateSaveGameObject");

		struct UGameplayStatics_CreateSaveGameObject_Params {
			class USaveGame* SaveGameClass;			//Offset: 0 | ElementSize: 8
			class USaveGame* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_CreateSaveGameObject_Params params;
		params.SaveGameClass = SaveGameClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.CreateSound2D
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bPersistAcrossLevelTransition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.CreateSound2D");

		struct UGameplayStatics_CreateSound2D_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundBase* Sound;			//Offset: 8 | ElementSize: 8
			float VolumeMultiplier;			//Offset: 16 | ElementSize: 4
			float PitchMultiplier;			//Offset: 20 | ElementSize: 4
			float StartTime;			//Offset: 24 | ElementSize: 4
			class USoundConcurrency* ConcurrencySettings;			//Offset: 32 | ElementSize: 8
			bool bPersistAcrossLevelTransition;			//Offset: 40 | ElementSize: 1
			bool bAutoDestroy;			//Offset: 41 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 48 | ElementSize: 8
		};
		UGameplayStatics_CreateSound2D_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.DeactivateReverbEffect
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TagName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::DeactivateReverbEffect(class UObject* WorldContextObject, struct FName TagName) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.DeactivateReverbEffect");

		struct UGameplayStatics_DeactivateReverbEffect_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName TagName;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_DeactivateReverbEffect_Params params;
		params.WorldContextObject = WorldContextObject;
		params.TagName = TagName;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.DeleteGameInSlot
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: SlotName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: UserIndex	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::DeleteGameInSlot(struct FString SlotName, int32_t UserIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.DeleteGameInSlot");

		struct UGameplayStatics_DeleteGameInSlot_Params {
			struct FString SlotName;			//Offset: 0 | ElementSize: 16
			int32_t UserIndex;			//Offset: 16 | ElementSize: 4
			bool ReturnValue;			//Offset: 20 | ElementSize: 1
		};
		UGameplayStatics_DeleteGameInSlot_Params params;
		params.SlotName = SlotName;
		params.UserIndex = UserIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.DeprojectScreenToWorld
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ScreenPosition	Type: struct FVector2D	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: WorldPosition	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: WorldDirection	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.DeprojectScreenToWorld");

		struct UGameplayStatics_DeprojectScreenToWorld_Params {
			class APlayerController* Player;			//Offset: 0 | ElementSize: 8
			struct FVector2D ScreenPosition;			//Offset: 8 | ElementSize: 8
			struct FVector WorldPosition;			//Offset: 16 | ElementSize: 12
			struct FVector WorldDirection;			//Offset: 28 | ElementSize: 12
			bool ReturnValue;			//Offset: 40 | ElementSize: 1
		};
		UGameplayStatics_DeprojectScreenToWorld_Params params;
		params.Player = Player;
		params.ScreenPosition = ScreenPosition;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (WorldPosition != nullptr)
			*WorldPosition = params.WorldPosition;
		if (WorldDirection != nullptr)
			*WorldDirection = params.WorldDirection;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.DoesSaveGameExist
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: SlotName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: UserIndex	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::DoesSaveGameExist(struct FString SlotName, int32_t UserIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.DoesSaveGameExist");

		struct UGameplayStatics_DoesSaveGameExist_Params {
			struct FString SlotName;			//Offset: 0 | ElementSize: 16
			int32_t UserIndex;			//Offset: 16 | ElementSize: 4
			bool ReturnValue;			//Offset: 20 | ElementSize: 1
		};
		UGameplayStatics_DoesSaveGameExist_Params params;
		params.SlotName = SlotName;
		params.UserIndex = UserIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.EnableLiveStreaming
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: enable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::EnableLiveStreaming(bool enable) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.EnableLiveStreaming");

		struct UGameplayStatics_EnableLiveStreaming_Params {
			bool enable;			//Offset: 0 | ElementSize: 1
		};
		UGameplayStatics_EnableLiveStreaming_Params params;
		params.enable = enable;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.FindCollisionUV
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: UVChannel	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: UV	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::FindCollisionUV(const struct FHitResult& Hit, int32_t UVChannel, struct FVector2D* UV) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.FindCollisionUV");

		struct UGameplayStatics_FindCollisionUV_Params {
			struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
			int32_t UVChannel;			//Offset: 136 | ElementSize: 4
			struct FVector2D UV;			//Offset: 140 | ElementSize: 8
			bool ReturnValue;			//Offset: 148 | ElementSize: 1
		};
		UGameplayStatics_FindCollisionUV_Params params;
		params.Hit = Hit;
		params.UVChannel = UVChannel;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (UV != nullptr)
			*UV = params.UV;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.FindNearestActor
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Origin	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorsToCheck	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::FindNearestActor(struct FVector Origin, const TArray<class AActor*>& ActorsToCheck, float* Distance) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.FindNearestActor");

		struct UGameplayStatics_FindNearestActor_Params {
			struct FVector Origin;			//Offset: 0 | ElementSize: 12
			TArray<class AActor*> ActorsToCheck;			//Offset: 16 | ElementSize: 16
			float Distance;			//Offset: 32 | ElementSize: 4
			class AActor* ReturnValue;			//Offset: 40 | ElementSize: 8
		};
		UGameplayStatics_FindNearestActor_Params params;
		params.Origin = Origin;
		params.ActorsToCheck = ActorsToCheck;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (Distance != nullptr)
			*Distance = params.Distance;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.FinishSpawningActor
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.FinishSpawningActor");

		struct UGameplayStatics_FinishSpawningActor_Params {
			class AActor* Actor;			//Offset: 0 | ElementSize: 8
			struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
			class AActor* ReturnValue;			//Offset: 64 | ElementSize: 8
		};
		UGameplayStatics_FinishSpawningActor_Params params;
		params.Actor = Actor;
		params.SpawnTransform = SpawnTransform;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.FlushLevelStreaming
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::FlushLevelStreaming(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.FlushLevelStreaming");

		struct UGameplayStatics_FlushLevelStreaming_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		};
		UGameplayStatics_FlushLevelStreaming_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAccurateRealTime
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Seconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PartialSeconds	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetAccurateRealTime(int32_t* Seconds, float* PartialSeconds) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAccurateRealTime");

		struct UGameplayStatics_GetAccurateRealTime_Params {
			int32_t Seconds;			//Offset: 0 | ElementSize: 4
			float PartialSeconds;			//Offset: 4 | ElementSize: 4
		};
		UGameplayStatics_GetAccurateRealTime_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (PartialSeconds != nullptr)
			*PartialSeconds = params.PartialSeconds;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetActorArrayAverageLocation
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: Actors	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector UGameplayStatics::GetActorArrayAverageLocation(const TArray<class AActor*>& Actors) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetActorArrayAverageLocation");

		struct UGameplayStatics_GetActorArrayAverageLocation_Params {
			TArray<class AActor*> Actors;			//Offset: 0 | ElementSize: 16
			struct FVector ReturnValue;			//Offset: 16 | ElementSize: 12
		};
		UGameplayStatics_GetActorArrayAverageLocation_Params params;
		params.Actors = Actors;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetActorArrayBounds
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: Actors	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
	// Name: bOnlyCollidingComponents	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Center	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: BoxExtent	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetActorArrayBounds(const TArray<class AActor*>& Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetActorArrayBounds");

		struct UGameplayStatics_GetActorArrayBounds_Params {
			TArray<class AActor*> Actors;			//Offset: 0 | ElementSize: 16
			bool bOnlyCollidingComponents;			//Offset: 16 | ElementSize: 1
			struct FVector Center;			//Offset: 20 | ElementSize: 12
			struct FVector BoxExtent;			//Offset: 32 | ElementSize: 12
		};
		UGameplayStatics_GetActorArrayBounds_Params params;
		params.Actors = Actors;
		params.bOnlyCollidingComponents = bOnlyCollidingComponents;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (Center != nullptr)
			*Center = params.Center;
		if (BoxExtent != nullptr)
			*BoxExtent = params.BoxExtent;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetActorOfClass
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* UGameplayStatics::GetActorOfClass(class UObject* WorldContextObject, class AActor* ActorClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetActorOfClass");

		struct UGameplayStatics_GetActorOfClass_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AActor* ActorClass;			//Offset: 8 | ElementSize: 8
			class AActor* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetActorOfClass_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAllActorsOfClass
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetAllActorsOfClass(class UObject* WorldContextObject, class AActor* ActorClass, TArray<class AActor*>* OutActors) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAllActorsOfClass");

		struct UGameplayStatics_GetAllActorsOfClass_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AActor* ActorClass;			//Offset: 8 | ElementSize: 8
			TArray<class AActor*> OutActors;			//Offset: 16 | ElementSize: 16
		};
		UGameplayStatics_GetAllActorsOfClass_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAllActorsOfClassWithTag
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetAllActorsOfClassWithTag(class UObject* WorldContextObject, class AActor* ActorClass, struct FName Tag, TArray<class AActor*>* OutActors) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAllActorsOfClassWithTag");

		struct UGameplayStatics_GetAllActorsOfClassWithTag_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AActor* ActorClass;			//Offset: 8 | ElementSize: 8
			struct FName Tag;			//Offset: 16 | ElementSize: 8
			TArray<class AActor*> OutActors;			//Offset: 24 | ElementSize: 16
		};
		UGameplayStatics_GetAllActorsOfClassWithTag_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Tag = Tag;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAllActorsWithInterface
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Interface	Type: class UInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetAllActorsWithInterface(class UObject* WorldContextObject, class UInterface* Interface, TArray<class AActor*>* OutActors) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAllActorsWithInterface");

		struct UGameplayStatics_GetAllActorsWithInterface_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UInterface* Interface;			//Offset: 8 | ElementSize: 8
			TArray<class AActor*> OutActors;			//Offset: 16 | ElementSize: 16
		};
		UGameplayStatics_GetAllActorsWithInterface_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Interface = Interface;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAllActorsWithTag
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetAllActorsWithTag(class UObject* WorldContextObject, struct FName Tag, TArray<class AActor*>* OutActors) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAllActorsWithTag");

		struct UGameplayStatics_GetAllActorsWithTag_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName Tag;			//Offset: 8 | ElementSize: 8
			TArray<class AActor*> OutActors;			//Offset: 16 | ElementSize: 16
		};
		UGameplayStatics_GetAllActorsWithTag_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Tag = Tag;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetAudioTimeSeconds
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetAudioTimeSeconds(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetAudioTimeSeconds");

		struct UGameplayStatics_GetAudioTimeSeconds_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetAudioTimeSeconds_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetClosestListenerLocation
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MaximumRange	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAllowAttenuationOverride	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ListenerPosition	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, struct FVector* ListenerPosition) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetClosestListenerLocation");

		struct UGameplayStatics_GetClosestListenerLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector Location;			//Offset: 8 | ElementSize: 12
			float MaximumRange;			//Offset: 20 | ElementSize: 4
			bool bAllowAttenuationOverride;			//Offset: 24 | ElementSize: 1
			struct FVector ListenerPosition;			//Offset: 28 | ElementSize: 12
			bool ReturnValue;			//Offset: 40 | ElementSize: 1
		};
		UGameplayStatics_GetClosestListenerLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.MaximumRange = MaximumRange;
		params.bAllowAttenuationOverride = bAllowAttenuationOverride;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (ListenerPosition != nullptr)
			*ListenerPosition = params.ListenerPosition;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetCurrentLevelName
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bRemovePrefixString	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UGameplayStatics::GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetCurrentLevelName");

		struct UGameplayStatics_GetCurrentLevelName_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool bRemovePrefixString;			//Offset: 8 | ElementSize: 1
			struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
		};
		UGameplayStatics_GetCurrentLevelName_Params params;
		params.WorldContextObject = WorldContextObject;
		params.bRemovePrefixString = bRemovePrefixString;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetCurrentReverbEffect
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UReverbEffect*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UReverbEffect* UGameplayStatics::GetCurrentReverbEffect(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetCurrentReverbEffect");

		struct UGameplayStatics_GetCurrentReverbEffect_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UReverbEffect* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_GetCurrentReverbEffect_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetEnableWorldRendering
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::GetEnableWorldRendering(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetEnableWorldRendering");

		struct UGameplayStatics_GetEnableWorldRendering_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool ReturnValue;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_GetEnableWorldRendering_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetGameInstance
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UGameInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UGameInstance* UGameplayStatics::GetGameInstance(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameInstance");

		struct UGameplayStatics_GetGameInstance_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UGameInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_GetGameInstance_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetGameMode
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AGameModeBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AGameModeBase* UGameplayStatics::GetGameMode(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameMode");

		struct UGameplayStatics_GetGameMode_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AGameModeBase* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_GetGameMode_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetGameState
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AGameStateBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AGameStateBase* UGameplayStatics::GetGameState(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameState");

		struct UGameplayStatics_GetGameState_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class AGameStateBase* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_GetGameState_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetGlobalTimeDilation
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetGlobalTimeDilation(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGlobalTimeDilation");

		struct UGameplayStatics_GetGlobalTimeDilation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetGlobalTimeDilation_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetIntOption
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Options	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DefaultValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	int32_t UGameplayStatics::GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetIntOption");

		struct UGameplayStatics_GetIntOption_Params {
			struct FString Options;			//Offset: 0 | ElementSize: 16
			struct FString Key;			//Offset: 16 | ElementSize: 16
			int32_t DefaultValue;			//Offset: 32 | ElementSize: 4
			int32_t ReturnValue;			//Offset: 36 | ElementSize: 4
		};
		UGameplayStatics_GetIntOption_Params params;
		params.Options = Options;
		params.Key = Key;
		params.DefaultValue = DefaultValue;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetKeyValue
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Pair	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Value	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetKeyValue(struct FString Pair, struct FString* Key, struct FString* Value) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetKeyValue");

		struct UGameplayStatics_GetKeyValue_Params {
			struct FString Pair;			//Offset: 0 | ElementSize: 16
			struct FString Key;			//Offset: 16 | ElementSize: 16
			struct FString Value;			//Offset: 32 | ElementSize: 16
		};
		UGameplayStatics_GetKeyValue_Params params;
		params.Pair = Pair;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetMaxAudioChannelCount
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	int32_t UGameplayStatics::GetMaxAudioChannelCount(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetMaxAudioChannelCount");

		struct UGameplayStatics_GetMaxAudioChannelCount_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetMaxAudioChannelCount_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetObjectClass
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UObject* UGameplayStatics::GetObjectClass(class UObject* Object) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetObjectClass");

		struct UGameplayStatics_GetObjectClass_Params {
			class UObject* Object;			//Offset: 0 | ElementSize: 8
			class UObject* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_GetObjectClass_Params params;
		params.Object = Object;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlatformName
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UGameplayStatics::GetPlatformName() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlatformName");

		struct UGameplayStatics_GetPlatformName_Params {
			struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
		};
		UGameplayStatics_GetPlatformName_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerCameraManager
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class APlayerCameraManager*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class APlayerCameraManager* UGameplayStatics::GetPlayerCameraManager(class UObject* WorldContextObject, int32_t PlayerIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerCameraManager");

		struct UGameplayStatics_GetPlayerCameraManager_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t PlayerIndex;			//Offset: 8 | ElementSize: 4
			class APlayerCameraManager* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetPlayerCameraManager_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerCharacter
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class ACharacter*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class ACharacter* UGameplayStatics::GetPlayerCharacter(class UObject* WorldContextObject, int32_t PlayerIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerCharacter");

		struct UGameplayStatics_GetPlayerCharacter_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t PlayerIndex;			//Offset: 8 | ElementSize: 4
			class ACharacter* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetPlayerCharacter_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerController
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class APlayerController* UGameplayStatics::GetPlayerController(class UObject* WorldContextObject, int32_t PlayerIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerController");

		struct UGameplayStatics_GetPlayerController_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t PlayerIndex;			//Offset: 8 | ElementSize: 4
			class APlayerController* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetPlayerController_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerControllerFromID
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class APlayerController* UGameplayStatics::GetPlayerControllerFromID(class UObject* WorldContextObject, int32_t ControllerId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerControllerFromID");

		struct UGameplayStatics_GetPlayerControllerFromID_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t ControllerId;			//Offset: 8 | ElementSize: 4
			class APlayerController* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetPlayerControllerFromID_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ControllerId = ControllerId;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerControllerID
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	int32_t UGameplayStatics::GetPlayerControllerID(class APlayerController* Player) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerControllerID");

		struct UGameplayStatics_GetPlayerControllerID_Params {
			class APlayerController* Player;			//Offset: 0 | ElementSize: 8
			int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetPlayerControllerID_Params params;
		params.Player = Player;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetPlayerPawn
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class APawn* UGameplayStatics::GetPlayerPawn(class UObject* WorldContextObject, int32_t PlayerIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerPawn");

		struct UGameplayStatics_GetPlayerPawn_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			int32_t PlayerIndex;			//Offset: 8 | ElementSize: 4
			class APawn* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetPlayerPawn_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetRealTimeSeconds
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetRealTimeSeconds(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetRealTimeSeconds");

		struct UGameplayStatics_GetRealTimeSeconds_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetRealTimeSeconds_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetStreamingLevel
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class ULevelStreaming*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class ULevelStreaming* UGameplayStatics::GetStreamingLevel(class UObject* WorldContextObject, struct FName PackageName) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetStreamingLevel");

		struct UGameplayStatics_GetStreamingLevel_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName PackageName;			//Offset: 8 | ElementSize: 8
			class ULevelStreaming* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_GetStreamingLevel_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PackageName = PackageName;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetSurfaceType
	// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: TEnumAsByte<EPhysicalSurface>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	TEnumAsByte<EPhysicalSurface> UGameplayStatics::GetSurfaceType(const struct FHitResult& Hit) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetSurfaceType");

		struct UGameplayStatics_GetSurfaceType_Params {
			struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
			TEnumAsByte<EPhysicalSurface> ReturnValue;			//Offset: 136 | ElementSize: 1
		};
		UGameplayStatics_GetSurfaceType_Params params;
		params.Hit = Hit;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetTimeSeconds
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetTimeSeconds(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetTimeSeconds");

		struct UGameplayStatics_GetTimeSeconds_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetTimeSeconds_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetUnpausedTimeSeconds
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetUnpausedTimeSeconds(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetUnpausedTimeSeconds");

		struct UGameplayStatics_GetUnpausedTimeSeconds_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetUnpausedTimeSeconds_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetViewportMouseCaptureMode
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: EMouseCaptureMode	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	EMouseCaptureMode UGameplayStatics::GetViewportMouseCaptureMode(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetViewportMouseCaptureMode");

		struct UGameplayStatics_GetViewportMouseCaptureMode_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			EMouseCaptureMode ReturnValue;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_GetViewportMouseCaptureMode_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetViewProjectionMatrix
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: DesiredView	Type: struct FMinimalViewInfo	Flags: Parm, NativeAccessSpecifierPublic
	// Name: ViewMatrix	Type: struct FMatrix	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: ProjectionMatrix	Type: struct FMatrix	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: ViewProjectionMatrix	Type: struct FMatrix	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::GetViewProjectionMatrix(struct FMinimalViewInfo DesiredView, struct FMatrix* ViewMatrix, struct FMatrix* ProjectionMatrix, struct FMatrix* ViewProjectionMatrix) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetViewProjectionMatrix");

		struct UGameplayStatics_GetViewProjectionMatrix_Params {
			struct FMinimalViewInfo DesiredView;			//Offset: 0 | ElementSize: 1520
			struct FMatrix ViewMatrix;			//Offset: 1520 | ElementSize: 64
			struct FMatrix ProjectionMatrix;			//Offset: 1584 | ElementSize: 64
			struct FMatrix ViewProjectionMatrix;			//Offset: 1648 | ElementSize: 64
		};
		UGameplayStatics_GetViewProjectionMatrix_Params params;
		params.DesiredView = DesiredView;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (ViewMatrix != nullptr)
			*ViewMatrix = params.ViewMatrix;
		if (ProjectionMatrix != nullptr)
			*ProjectionMatrix = params.ProjectionMatrix;
		if (ViewProjectionMatrix != nullptr)
			*ViewProjectionMatrix = params.ViewProjectionMatrix;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetWorldDeltaSeconds
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	float UGameplayStatics::GetWorldDeltaSeconds(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetWorldDeltaSeconds");

		struct UGameplayStatics_GetWorldDeltaSeconds_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float ReturnValue;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_GetWorldDeltaSeconds_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GetWorldOriginLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FIntVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FIntVector UGameplayStatics::GetWorldOriginLocation(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetWorldOriginLocation");

		struct UGameplayStatics_GetWorldOriginLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FIntVector ReturnValue;			//Offset: 8 | ElementSize: 12
		};
		UGameplayStatics_GetWorldOriginLocation_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.GrassOverlappingSphereCount
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StaticMesh	Type: class UStaticMesh*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: CenterPosition	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	int32_t UGameplayStatics::GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GrassOverlappingSphereCount");

		struct UGameplayStatics_GrassOverlappingSphereCount_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UStaticMesh* StaticMesh;			//Offset: 8 | ElementSize: 8
			struct FVector CenterPosition;			//Offset: 16 | ElementSize: 12
			float Radius;			//Offset: 28 | ElementSize: 4
			int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
		};
		UGameplayStatics_GrassOverlappingSphereCount_Params params;
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.CenterPosition = CenterPosition;
		params.Radius = Radius;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.HasLaunchOption
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: OptionToCheck	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::HasLaunchOption(struct FString OptionToCheck) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.HasLaunchOption");

		struct UGameplayStatics_HasLaunchOption_Params {
			struct FString OptionToCheck;			//Offset: 0 | ElementSize: 16
			bool ReturnValue;			//Offset: 16 | ElementSize: 1
		};
		UGameplayStatics_HasLaunchOption_Params params;
		params.OptionToCheck = OptionToCheck;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.HasOption
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Options	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InKey	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::HasOption(struct FString Options, struct FString InKey) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.HasOption");

		struct UGameplayStatics_HasOption_Params {
			struct FString Options;			//Offset: 0 | ElementSize: 16
			struct FString InKey;			//Offset: 16 | ElementSize: 16
			bool ReturnValue;			//Offset: 32 | ElementSize: 1
		};
		UGameplayStatics_HasOption_Params params;
		params.Options = Options;
		params.InKey = InKey;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.IsGamePaused
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::IsGamePaused(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.IsGamePaused");

		struct UGameplayStatics_IsGamePaused_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool ReturnValue;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_IsGamePaused_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.IsSplitscreenForceDisabled
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::IsSplitscreenForceDisabled(class UObject* WorldContextObject) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.IsSplitscreenForceDisabled");

		struct UGameplayStatics_IsSplitscreenForceDisabled_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool ReturnValue;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_IsSplitscreenForceDisabled_Params params;
		params.WorldContextObject = WorldContextObject;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.LoadGameFromSlot
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: SlotName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: UserIndex	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class USaveGame*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class USaveGame* UGameplayStatics::LoadGameFromSlot(struct FString SlotName, int32_t UserIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.LoadGameFromSlot");

		struct UGameplayStatics_LoadGameFromSlot_Params {
			struct FString SlotName;			//Offset: 0 | ElementSize: 16
			int32_t UserIndex;			//Offset: 16 | ElementSize: 4
			class USaveGame* ReturnValue;			//Offset: 24 | ElementSize: 8
		};
		UGameplayStatics_LoadGameFromSlot_Params params;
		params.SlotName = SlotName;
		params.UserIndex = UserIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.LoadStreamLevel
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LevelName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bMakeVisibleAfterLoad	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bShouldBlockOnLoad	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::LoadStreamLevel(class UObject* WorldContextObject, struct FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.LoadStreamLevel");

		struct UGameplayStatics_LoadStreamLevel_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName LevelName;			//Offset: 8 | ElementSize: 8
			bool bMakeVisibleAfterLoad;			//Offset: 16 | ElementSize: 1
			bool bShouldBlockOnLoad;			//Offset: 17 | ElementSize: 1
			struct FLatentActionInfo LatentInfo;			//Offset: 24 | ElementSize: 24
		};
		UGameplayStatics_LoadStreamLevel_Params params;
		params.WorldContextObject = WorldContextObject;
		params.LevelName = LevelName;
		params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		params.LatentInfo = LatentInfo;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.LoadStreamLevelBySoftObjectPtr
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Level	Type: TAssetPtr<class UWorld>	Flags: ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bMakeVisibleAfterLoad	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bShouldBlockOnLoad	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::LoadStreamLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.LoadStreamLevelBySoftObjectPtr");

		struct UGameplayStatics_LoadStreamLevelBySoftObjectPtr_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			TAssetPtr<class UWorld> Level;			//Offset: 8 | ElementSize: 40
			bool bMakeVisibleAfterLoad;			//Offset: 48 | ElementSize: 1
			bool bShouldBlockOnLoad;			//Offset: 49 | ElementSize: 1
			struct FLatentActionInfo LatentInfo;			//Offset: 56 | ElementSize: 24
		};
		UGameplayStatics_LoadStreamLevelBySoftObjectPtr_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Level = Level;
		params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		params.LatentInfo = LatentInfo;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.MakeHitResult
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: bBlockingHit	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bInitialOverlap	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Time	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Distance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ImpactPoint	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Normal	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ImpactNormal	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PhysMat	Type: class UPhysicalMaterial*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: HitItem	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FaceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceStart	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TraceEnd	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FHitResult	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FHitResult UGameplayStatics::MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, struct FVector Location, struct FVector ImpactPoint, struct FVector Normal, struct FVector ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, struct FVector TraceStart, struct FVector TraceEnd) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.MakeHitResult");

		struct UGameplayStatics_MakeHitResult_Params {
			bool bBlockingHit;			//Offset: 0 | ElementSize: 1
			bool bInitialOverlap;			//Offset: 1 | ElementSize: 1
			float Time;			//Offset: 4 | ElementSize: 4
			float Distance;			//Offset: 8 | ElementSize: 4
			struct FVector Location;			//Offset: 12 | ElementSize: 12
			struct FVector ImpactPoint;			//Offset: 24 | ElementSize: 12
			struct FVector Normal;			//Offset: 36 | ElementSize: 12
			struct FVector ImpactNormal;			//Offset: 48 | ElementSize: 12
			class UPhysicalMaterial* PhysMat;			//Offset: 64 | ElementSize: 8
			class AActor* HitActor;			//Offset: 72 | ElementSize: 8
			class UPrimitiveComponent* HitComponent;			//Offset: 80 | ElementSize: 8
			struct FName HitBoneName;			//Offset: 88 | ElementSize: 8
			int32_t HitItem;			//Offset: 96 | ElementSize: 4
			int32_t ElementIndex;			//Offset: 100 | ElementSize: 4
			int32_t FaceIndex;			//Offset: 104 | ElementSize: 4
			struct FVector TraceStart;			//Offset: 108 | ElementSize: 12
			struct FVector TraceEnd;			//Offset: 120 | ElementSize: 12
			struct FHitResult ReturnValue;			//Offset: 132 | ElementSize: 136
		};
		UGameplayStatics_MakeHitResult_Params params;
		params.bBlockingHit = bBlockingHit;
		params.bInitialOverlap = bInitialOverlap;
		params.Time = Time;
		params.Distance = Distance;
		params.Location = Location;
		params.ImpactPoint = ImpactPoint;
		params.Normal = Normal;
		params.ImpactNormal = ImpactNormal;
		params.PhysMat = PhysMat;
		params.HitActor = HitActor;
		params.HitComponent = HitComponent;
		params.HitBoneName = HitBoneName;
		params.HitItem = HitItem;
		params.ElementIndex = ElementIndex;
		params.FaceIndex = FaceIndex;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.OpenLevel
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LevelName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAbsolute	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Options	Type: struct FString	Flags: Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::OpenLevel(class UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString Options) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.OpenLevel");

		struct UGameplayStatics_OpenLevel_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName LevelName;			//Offset: 8 | ElementSize: 8
			bool bAbsolute;			//Offset: 16 | ElementSize: 1
			struct FString Options;			//Offset: 24 | ElementSize: 16
		};
		UGameplayStatics_OpenLevel_Params params;
		params.WorldContextObject = WorldContextObject;
		params.LevelName = LevelName;
		params.bAbsolute = bAbsolute;
		params.Options = Options;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.OpenLevelBySoftObjectPtr
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Level	Type: TAssetPtr<class UWorld>	Flags: ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAbsolute	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Options	Type: struct FString	Flags: Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::OpenLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, bool bAbsolute, struct FString Options) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.OpenLevelBySoftObjectPtr");

		struct UGameplayStatics_OpenLevelBySoftObjectPtr_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			TAssetPtr<class UWorld> Level;			//Offset: 8 | ElementSize: 40
			bool bAbsolute;			//Offset: 48 | ElementSize: 1
			struct FString Options;			//Offset: 56 | ElementSize: 16
		};
		UGameplayStatics_OpenLevelBySoftObjectPtr_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Level = Level;
		params.bAbsolute = bAbsolute;
		params.Options = Options;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ParseOption
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Options	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UGameplayStatics::ParseOption(struct FString Options, struct FString Key) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ParseOption");

		struct UGameplayStatics_ParseOption_Params {
			struct FString Options;			//Offset: 0 | ElementSize: 16
			struct FString Key;			//Offset: 16 | ElementSize: 16
			struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
		};
		UGameplayStatics_ParseOption_Params params;
		params.Options = Options;
		params.Key = Key;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PlayDialogue2D
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Dialogue	Type: class UDialogueWave*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Context	Type: struct FDialogueContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PlayDialogue2D");

		struct UGameplayStatics_PlayDialogue2D_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UDialogueWave* Dialogue;			//Offset: 8 | ElementSize: 8
			struct FDialogueContext Context;			//Offset: 16 | ElementSize: 24
			float VolumeMultiplier;			//Offset: 40 | ElementSize: 4
			float PitchMultiplier;			//Offset: 44 | ElementSize: 4
			float StartTime;			//Offset: 48 | ElementSize: 4
		};
		UGameplayStatics_PlayDialogue2D_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Dialogue = Dialogue;
		params.Context = Context;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PlayDialogueAtLocation
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Dialogue	Type: class UDialogueWave*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Context	Type: struct FDialogueContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PlayDialogueAtLocation");

		struct UGameplayStatics_PlayDialogueAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UDialogueWave* Dialogue;			//Offset: 8 | ElementSize: 8
			struct FDialogueContext Context;			//Offset: 16 | ElementSize: 24
			struct FVector Location;			//Offset: 40 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 52 | ElementSize: 12
			float VolumeMultiplier;			//Offset: 64 | ElementSize: 4
			float PitchMultiplier;			//Offset: 68 | ElementSize: 4
			float StartTime;			//Offset: 72 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 80 | ElementSize: 8
		};
		UGameplayStatics_PlayDialogueAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Dialogue = Dialogue;
		params.Context = Context;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PlaySound2D
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OwningActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bIsUISound	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor, bool bIsUISound) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PlaySound2D");

		struct UGameplayStatics_PlaySound2D_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundBase* Sound;			//Offset: 8 | ElementSize: 8
			float VolumeMultiplier;			//Offset: 16 | ElementSize: 4
			float PitchMultiplier;			//Offset: 20 | ElementSize: 4
			float StartTime;			//Offset: 24 | ElementSize: 4
			class USoundConcurrency* ConcurrencySettings;			//Offset: 32 | ElementSize: 8
			class AActor* OwningActor;			//Offset: 40 | ElementSize: 8
			bool bIsUISound;			//Offset: 48 | ElementSize: 1
		};
		UGameplayStatics_PlaySound2D_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.ConcurrencySettings = ConcurrencySettings;
		params.OwningActor = OwningActor;
		params.bIsUISound = bIsUISound;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PlaySoundAtLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OwningActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PlaySoundAtLocation");

		struct UGameplayStatics_PlaySoundAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundBase* Sound;			//Offset: 8 | ElementSize: 8
			struct FVector Location;			//Offset: 16 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 28 | ElementSize: 12
			float VolumeMultiplier;			//Offset: 40 | ElementSize: 4
			float PitchMultiplier;			//Offset: 44 | ElementSize: 4
			float StartTime;			//Offset: 48 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 56 | ElementSize: 8
			class USoundConcurrency* ConcurrencySettings;			//Offset: 64 | ElementSize: 8
			class AActor* OwningActor;			//Offset: 72 | ElementSize: 8
		};
		UGameplayStatics_PlaySoundAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.OwningActor = OwningActor;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PlayWorldCameraShake
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Epicenter	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InnerRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OuterRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Falloff	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bOrientShakeTowardsEpicenter	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PlayWorldCameraShake(class UObject* WorldContextObject, class UCameraShakeBase* Shake, struct FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PlayWorldCameraShake");

		struct UGameplayStatics_PlayWorldCameraShake_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UCameraShakeBase* Shake;			//Offset: 8 | ElementSize: 8
			struct FVector Epicenter;			//Offset: 16 | ElementSize: 12
			float InnerRadius;			//Offset: 28 | ElementSize: 4
			float OuterRadius;			//Offset: 32 | ElementSize: 4
			float Falloff;			//Offset: 36 | ElementSize: 4
			bool bOrientShakeTowardsEpicenter;			//Offset: 40 | ElementSize: 1
		};
		UGameplayStatics_PlayWorldCameraShake_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Shake = Shake;
		params.Epicenter = Epicenter;
		params.InnerRadius = InnerRadius;
		params.OuterRadius = OuterRadius;
		params.Falloff = Falloff;
		params.bOrientShakeTowardsEpicenter = bOrientShakeTowardsEpicenter;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PopSoundMixModifier
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundMixModifier	Type: class USoundMix*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PopSoundMixModifier");

		struct UGameplayStatics_PopSoundMixModifier_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundMix* InSoundMixModifier;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_PopSoundMixModifier_Params params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundMixModifier = InSoundMixModifier;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PrimeAllSoundsInSoundClass
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: InSoundClass	Type: class USoundClass*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PrimeAllSoundsInSoundClass(class USoundClass* InSoundClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PrimeAllSoundsInSoundClass");

		struct UGameplayStatics_PrimeAllSoundsInSoundClass_Params {
			class USoundClass* InSoundClass;			//Offset: 0 | ElementSize: 8
		};
		UGameplayStatics_PrimeAllSoundsInSoundClass_Params params;
		params.InSoundClass = InSoundClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PrimeSound
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: InSound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PrimeSound(class USoundBase* InSound) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PrimeSound");

		struct UGameplayStatics_PrimeSound_Params {
			class USoundBase* InSound;			//Offset: 0 | ElementSize: 8
		};
		UGameplayStatics_PrimeSound_Params params;
		params.InSound = InSound;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.ProjectWorldToScreen
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: WorldPosition	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ScreenPosition	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bPlayerViewportRelative	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.ProjectWorldToScreen");

		struct UGameplayStatics_ProjectWorldToScreen_Params {
			class APlayerController* Player;			//Offset: 0 | ElementSize: 8
			struct FVector WorldPosition;			//Offset: 8 | ElementSize: 12
			struct FVector2D ScreenPosition;			//Offset: 20 | ElementSize: 8
			bool bPlayerViewportRelative;			//Offset: 28 | ElementSize: 1
			bool ReturnValue;			//Offset: 29 | ElementSize: 1
		};
		UGameplayStatics_ProjectWorldToScreen_Params params;
		params.Player = Player;
		params.WorldPosition = WorldPosition;
		params.bPlayerViewportRelative = bPlayerViewportRelative;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (ScreenPosition != nullptr)
			*ScreenPosition = params.ScreenPosition;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.PushSoundMixModifier
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundMixModifier	Type: class USoundMix*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.PushSoundMixModifier");

		struct UGameplayStatics_PushSoundMixModifier_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundMix* InSoundMixModifier;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_PushSoundMixModifier_Params params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundMixModifier = InSoundMixModifier;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.RebaseLocalOriginOntoZero
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: WorldLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector UGameplayStatics::RebaseLocalOriginOntoZero(class UObject* WorldContextObject, struct FVector WorldLocation) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.RebaseLocalOriginOntoZero");

		struct UGameplayStatics_RebaseLocalOriginOntoZero_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector WorldLocation;			//Offset: 8 | ElementSize: 12
			struct FVector ReturnValue;			//Offset: 20 | ElementSize: 12
		};
		UGameplayStatics_RebaseLocalOriginOntoZero_Params params;
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.RebaseZeroOriginOntoLocal
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: WorldLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector UGameplayStatics::RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, struct FVector WorldLocation) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.RebaseZeroOriginOntoLocal");

		struct UGameplayStatics_RebaseZeroOriginOntoLocal_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector WorldLocation;			//Offset: 8 | ElementSize: 12
			struct FVector ReturnValue;			//Offset: 20 | ElementSize: 12
		};
		UGameplayStatics_RebaseZeroOriginOntoLocal_Params params;
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.RemovePlayer
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bDestroyPawn	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::RemovePlayer(class APlayerController* Player, bool bDestroyPawn) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.RemovePlayer");

		struct UGameplayStatics_RemovePlayer_Params {
			class APlayerController* Player;			//Offset: 0 | ElementSize: 8
			bool bDestroyPawn;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_RemovePlayer_Params params;
		params.Player = Player;
		params.bDestroyPawn = bDestroyPawn;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SaveGameToSlot
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: SaveGameObject	Type: class USaveGame*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SlotName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: UserIndex	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::SaveGameToSlot(class USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SaveGameToSlot");

		struct UGameplayStatics_SaveGameToSlot_Params {
			class USaveGame* SaveGameObject;			//Offset: 0 | ElementSize: 8
			struct FString SlotName;			//Offset: 8 | ElementSize: 16
			int32_t UserIndex;			//Offset: 24 | ElementSize: 4
			bool ReturnValue;			//Offset: 28 | ElementSize: 1
		};
		UGameplayStatics_SaveGameToSlot_Params params;
		params.SaveGameObject = SaveGameObject;
		params.SlotName = SlotName;
		params.UserIndex = UserIndex;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetBaseSoundMix
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundMix	Type: class USoundMix*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetBaseSoundMix");

		struct UGameplayStatics_SetBaseSoundMix_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundMix* InSoundMix;			//Offset: 8 | ElementSize: 8
		};
		UGameplayStatics_SetBaseSoundMix_Params params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundMix = InSoundMix;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetEnableWorldRendering
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bEnable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetEnableWorldRendering(class UObject* WorldContextObject, bool bEnable) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetEnableWorldRendering");

		struct UGameplayStatics_SetEnableWorldRendering_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool bEnable;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_SetEnableWorldRendering_Params params;
		params.WorldContextObject = WorldContextObject;
		params.bEnable = bEnable;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetForceDisableSplitscreen
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bDisable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetForceDisableSplitscreen(class UObject* WorldContextObject, bool bDisable) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetForceDisableSplitscreen");

		struct UGameplayStatics_SetForceDisableSplitscreen_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool bDisable;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_SetForceDisableSplitscreen_Params params;
		params.WorldContextObject = WorldContextObject;
		params.bDisable = bDisable;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetGamePaused
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bPaused	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::SetGamePaused(class UObject* WorldContextObject, bool bPaused) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetGamePaused");

		struct UGameplayStatics_SetGamePaused_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			bool bPaused;			//Offset: 8 | ElementSize: 1
			bool ReturnValue;			//Offset: 9 | ElementSize: 1
		};
		UGameplayStatics_SetGamePaused_Params params;
		params.WorldContextObject = WorldContextObject;
		params.bPaused = bPaused;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetGlobalListenerFocusParameters
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FocusAzimuthScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NonFocusAzimuthScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FocusDistanceScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NonFocusDistanceScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FocusVolumeScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NonFocusVolumeScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FocusPriorityScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NonFocusPriorityScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetGlobalListenerFocusParameters");

		struct UGameplayStatics_SetGlobalListenerFocusParameters_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float FocusAzimuthScale;			//Offset: 8 | ElementSize: 4
			float NonFocusAzimuthScale;			//Offset: 12 | ElementSize: 4
			float FocusDistanceScale;			//Offset: 16 | ElementSize: 4
			float NonFocusDistanceScale;			//Offset: 20 | ElementSize: 4
			float FocusVolumeScale;			//Offset: 24 | ElementSize: 4
			float NonFocusVolumeScale;			//Offset: 28 | ElementSize: 4
			float FocusPriorityScale;			//Offset: 32 | ElementSize: 4
			float NonFocusPriorityScale;			//Offset: 36 | ElementSize: 4
		};
		UGameplayStatics_SetGlobalListenerFocusParameters_Params params;
		params.WorldContextObject = WorldContextObject;
		params.FocusAzimuthScale = FocusAzimuthScale;
		params.NonFocusAzimuthScale = NonFocusAzimuthScale;
		params.FocusDistanceScale = FocusDistanceScale;
		params.NonFocusDistanceScale = NonFocusDistanceScale;
		params.FocusVolumeScale = FocusVolumeScale;
		params.NonFocusVolumeScale = NonFocusVolumeScale;
		params.FocusPriorityScale = FocusPriorityScale;
		params.NonFocusPriorityScale = NonFocusPriorityScale;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetGlobalPitchModulation
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchModulation	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TimeSec	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetGlobalPitchModulation");

		struct UGameplayStatics_SetGlobalPitchModulation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float PitchModulation;			//Offset: 8 | ElementSize: 4
			float TimeSec;			//Offset: 12 | ElementSize: 4
		};
		UGameplayStatics_SetGlobalPitchModulation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.PitchModulation = PitchModulation;
		params.TimeSec = TimeSec;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetGlobalTimeDilation
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TimeDilation	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetGlobalTimeDilation");

		struct UGameplayStatics_SetGlobalTimeDilation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float TimeDilation;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_SetGlobalTimeDilation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.TimeDilation = TimeDilation;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetMaxAudioChannelsScaled
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MaxChannelCountScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetMaxAudioChannelsScaled(class UObject* WorldContextObject, float MaxChannelCountScale) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetMaxAudioChannelsScaled");

		struct UGameplayStatics_SetMaxAudioChannelsScaled_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			float MaxChannelCountScale;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_SetMaxAudioChannelsScaled_Params params;
		params.WorldContextObject = WorldContextObject;
		params.MaxChannelCountScale = MaxChannelCountScale;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetPlayerControllerID
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetPlayerControllerID(class APlayerController* Player, int32_t ControllerId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetPlayerControllerID");

		struct UGameplayStatics_SetPlayerControllerID_Params {
			class APlayerController* Player;			//Offset: 0 | ElementSize: 8
			int32_t ControllerId;			//Offset: 8 | ElementSize: 4
		};
		UGameplayStatics_SetPlayerControllerID_Params params;
		params.Player = Player;
		params.ControllerId = ControllerId;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetSoundClassDistanceScale
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: SoundClass	Type: class USoundClass*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DistanceAttenuationScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: TimeSec	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetSoundClassDistanceScale(class UObject* WorldContextObject, class USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetSoundClassDistanceScale");

		struct UGameplayStatics_SetSoundClassDistanceScale_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundClass* SoundClass;			//Offset: 8 | ElementSize: 8
			float DistanceAttenuationScale;			//Offset: 16 | ElementSize: 4
			float TimeSec;			//Offset: 20 | ElementSize: 4
		};
		UGameplayStatics_SetSoundClassDistanceScale_Params params;
		params.WorldContextObject = WorldContextObject;
		params.SoundClass = SoundClass;
		params.DistanceAttenuationScale = DistanceAttenuationScale;
		params.TimeSec = TimeSec;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetSoundMixClassOverride
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundMixModifier	Type: class USoundMix*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: InSoundClass	Type: class USoundClass*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Volume	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Pitch	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: FadeInTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bApplyToChildren	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetSoundMixClassOverride");

		struct UGameplayStatics_SetSoundMixClassOverride_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundMix* InSoundMixModifier;			//Offset: 8 | ElementSize: 8
			class USoundClass* InSoundClass;			//Offset: 16 | ElementSize: 8
			float Volume;			//Offset: 24 | ElementSize: 4
			float Pitch;			//Offset: 28 | ElementSize: 4
			float FadeInTime;			//Offset: 32 | ElementSize: 4
			bool bApplyToChildren;			//Offset: 36 | ElementSize: 1
		};
		UGameplayStatics_SetSoundMixClassOverride_Params params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundMixModifier = InSoundMixModifier;
		params.InSoundClass = InSoundClass;
		params.Volume = Volume;
		params.Pitch = Pitch;
		params.FadeInTime = FadeInTime;
		params.bApplyToChildren = bApplyToChildren;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetSubtitlesEnabled
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: bEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetSubtitlesEnabled(bool bEnabled) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetSubtitlesEnabled");

		struct UGameplayStatics_SetSubtitlesEnabled_Params {
			bool bEnabled;			//Offset: 0 | ElementSize: 1
		};
		UGameplayStatics_SetSubtitlesEnabled_Params params;
		params.bEnabled = bEnabled;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetViewportMouseCaptureMode
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MouseCaptureMode	Type: EMouseCaptureMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetViewportMouseCaptureMode(class UObject* WorldContextObject, EMouseCaptureMode MouseCaptureMode) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetViewportMouseCaptureMode");

		struct UGameplayStatics_SetViewportMouseCaptureMode_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			EMouseCaptureMode MouseCaptureMode;			//Offset: 8 | ElementSize: 1
		};
		UGameplayStatics_SetViewportMouseCaptureMode_Params params;
		params.WorldContextObject = WorldContextObject;
		params.MouseCaptureMode = MouseCaptureMode;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SetWorldOriginLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NewLocation	Type: struct FIntVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::SetWorldOriginLocation(class UObject* WorldContextObject, struct FIntVector NewLocation) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SetWorldOriginLocation");

		struct UGameplayStatics_SetWorldOriginLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FIntVector NewLocation;			//Offset: 8 | ElementSize: 12
		};
		UGameplayStatics_SetWorldOriginLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.NewLocation = NewLocation;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnDecalAtLocation
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DecalMaterial	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DecalSize	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: LifeSpan	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UDecalComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UDecalComponent* UGameplayStatics::SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnDecalAtLocation");

		struct UGameplayStatics_SpawnDecalAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UMaterialInterface* DecalMaterial;			//Offset: 8 | ElementSize: 8
			struct FVector DecalSize;			//Offset: 16 | ElementSize: 12
			struct FVector Location;			//Offset: 28 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 40 | ElementSize: 12
			float LifeSpan;			//Offset: 52 | ElementSize: 4
			class UDecalComponent* ReturnValue;			//Offset: 56 | ElementSize: 8
		};
		UGameplayStatics_SpawnDecalAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.DecalMaterial = DecalMaterial;
		params.DecalSize = DecalSize;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LifeSpan = LifeSpan;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnDecalAttached
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: DecalMaterial	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: DecalSize	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachPointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: LocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LifeSpan	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UDecalComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UDecalComponent* UGameplayStatics::SpawnDecalAttached(class UMaterialInterface* DecalMaterial, struct FVector DecalSize, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnDecalAttached");

		struct UGameplayStatics_SpawnDecalAttached_Params {
			class UMaterialInterface* DecalMaterial;			//Offset: 0 | ElementSize: 8
			struct FVector DecalSize;			//Offset: 8 | ElementSize: 12
			class USceneComponent* AttachToComponent;			//Offset: 24 | ElementSize: 8
			struct FName AttachPointName;			//Offset: 32 | ElementSize: 8
			struct FVector Location;			//Offset: 40 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 52 | ElementSize: 12
			TEnumAsByte<EAttachLocation> LocationType;			//Offset: 64 | ElementSize: 1
			float LifeSpan;			//Offset: 68 | ElementSize: 4
			class UDecalComponent* ReturnValue;			//Offset: 72 | ElementSize: 8
		};
		UGameplayStatics_SpawnDecalAttached_Params params;
		params.DecalMaterial = DecalMaterial;
		params.DecalSize = DecalSize;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.LifeSpan = LifeSpan;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnDialogue2D
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Dialogue	Type: class UDialogueWave*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Context	Type: struct FDialogueContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnDialogue2D");

		struct UGameplayStatics_SpawnDialogue2D_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UDialogueWave* Dialogue;			//Offset: 8 | ElementSize: 8
			struct FDialogueContext Context;			//Offset: 16 | ElementSize: 24
			float VolumeMultiplier;			//Offset: 40 | ElementSize: 4
			float PitchMultiplier;			//Offset: 44 | ElementSize: 4
			float StartTime;			//Offset: 48 | ElementSize: 4
			bool bAutoDestroy;			//Offset: 52 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 56 | ElementSize: 8
		};
		UGameplayStatics_SpawnDialogue2D_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Dialogue = Dialogue;
		params.Context = Context;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnDialogueAtLocation
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Dialogue	Type: class UDialogueWave*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Context	Type: struct FDialogueContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnDialogueAtLocation");

		struct UGameplayStatics_SpawnDialogueAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UDialogueWave* Dialogue;			//Offset: 8 | ElementSize: 8
			struct FDialogueContext Context;			//Offset: 16 | ElementSize: 24
			struct FVector Location;			//Offset: 40 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 52 | ElementSize: 12
			float VolumeMultiplier;			//Offset: 64 | ElementSize: 4
			float PitchMultiplier;			//Offset: 68 | ElementSize: 4
			float StartTime;			//Offset: 72 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 80 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 88 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 96 | ElementSize: 8
		};
		UGameplayStatics_SpawnDialogueAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Dialogue = Dialogue;
		params.Context = Context;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnDialogueAttached
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: Dialogue	Type: class UDialogueWave*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Context	Type: struct FDialogueContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
	// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachPointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: LocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bStopWhenAttachedToDestroyed	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnDialogueAttached");

		struct UGameplayStatics_SpawnDialogueAttached_Params {
			class UDialogueWave* Dialogue;			//Offset: 0 | ElementSize: 8
			struct FDialogueContext Context;			//Offset: 8 | ElementSize: 24
			class USceneComponent* AttachToComponent;			//Offset: 32 | ElementSize: 8
			struct FName AttachPointName;			//Offset: 40 | ElementSize: 8
			struct FVector Location;			//Offset: 48 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 60 | ElementSize: 12
			TEnumAsByte<EAttachLocation> LocationType;			//Offset: 72 | ElementSize: 1
			bool bStopWhenAttachedToDestroyed;			//Offset: 73 | ElementSize: 1
			float VolumeMultiplier;			//Offset: 76 | ElementSize: 4
			float PitchMultiplier;			//Offset: 80 | ElementSize: 4
			float StartTime;			//Offset: 84 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 88 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 96 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 104 | ElementSize: 8
		};
		UGameplayStatics_SpawnDialogueAttached_Params params;
		params.Dialogue = Dialogue;
		params.Context = Context;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnEmitterAtLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: EmitterTemplate	Type: class UParticleSystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: Scale	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PoolingMethod	Type: EPSCPoolMethod	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoActivateSystem	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UParticleSystemComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UParticleSystemComponent* UGameplayStatics::SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnEmitterAtLocation");

		struct UGameplayStatics_SpawnEmitterAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UParticleSystem* EmitterTemplate;			//Offset: 8 | ElementSize: 8
			struct FVector Location;			//Offset: 16 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 28 | ElementSize: 12
			struct FVector Scale;			//Offset: 40 | ElementSize: 12
			bool bAutoDestroy;			//Offset: 52 | ElementSize: 1
			EPSCPoolMethod PoolingMethod;			//Offset: 53 | ElementSize: 1
			bool bAutoActivateSystem;			//Offset: 54 | ElementSize: 1
			class UParticleSystemComponent* ReturnValue;			//Offset: 56 | ElementSize: 8
		};
		UGameplayStatics_SpawnEmitterAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.EmitterTemplate = EmitterTemplate;
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.bAutoDestroy = bAutoDestroy;
		params.PoolingMethod = PoolingMethod;
		params.bAutoActivateSystem = bAutoActivateSystem;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnEmitterAttached
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: EmitterTemplate	Type: class UParticleSystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachPointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	// Name: Scale	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PoolingMethod	Type: EPSCPoolMethod	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoActivate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UParticleSystemComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UParticleSystemComponent* UGameplayStatics::SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, struct FVector Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnEmitterAttached");

		struct UGameplayStatics_SpawnEmitterAttached_Params {
			class UParticleSystem* EmitterTemplate;			//Offset: 0 | ElementSize: 8
			class USceneComponent* AttachToComponent;			//Offset: 8 | ElementSize: 8
			struct FName AttachPointName;			//Offset: 16 | ElementSize: 8
			struct FVector Location;			//Offset: 24 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 36 | ElementSize: 12
			struct FVector Scale;			//Offset: 48 | ElementSize: 12
			TEnumAsByte<EAttachLocation> LocationType;			//Offset: 60 | ElementSize: 1
			bool bAutoDestroy;			//Offset: 61 | ElementSize: 1
			EPSCPoolMethod PoolingMethod;			//Offset: 62 | ElementSize: 1
			bool bAutoActivate;			//Offset: 63 | ElementSize: 1
			class UParticleSystemComponent* ReturnValue;			//Offset: 64 | ElementSize: 8
		};
		UGameplayStatics_SpawnEmitterAttached_Params params;
		params.EmitterTemplate = EmitterTemplate;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.LocationType = LocationType;
		params.bAutoDestroy = bAutoDestroy;
		params.PoolingMethod = PoolingMethod;
		params.bAutoActivate = bAutoActivate;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnForceFeedbackAtLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: IntensityMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class UForceFeedbackAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UForceFeedbackComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAtLocation(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, struct FVector Location, struct FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnForceFeedbackAtLocation");

		struct UGameplayStatics_SpawnForceFeedbackAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 8 | ElementSize: 8
			struct FVector Location;			//Offset: 16 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 28 | ElementSize: 12
			bool bLooping;			//Offset: 40 | ElementSize: 1
			float IntensityMultiplier;			//Offset: 44 | ElementSize: 4
			float StartTime;			//Offset: 48 | ElementSize: 4
			class UForceFeedbackAttenuation* AttenuationSettings;			//Offset: 56 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 64 | ElementSize: 1
			class UForceFeedbackComponent* ReturnValue;			//Offset: 72 | ElementSize: 8
		};
		UGameplayStatics_SpawnForceFeedbackAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.ForceFeedbackEffect = ForceFeedbackEffect;
		params.Location = Location;
		params.Rotation = Rotation;
		params.bLooping = bLooping;
		params.IntensityMultiplier = IntensityMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnForceFeedbackAttached
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachPointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: LocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bStopWhenAttachedToDestroyed	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: IntensityMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class UForceFeedbackAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UForceFeedbackComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnForceFeedbackAttached");

		struct UGameplayStatics_SpawnForceFeedbackAttached_Params {
			class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
			class USceneComponent* AttachToComponent;			//Offset: 8 | ElementSize: 8
			struct FName AttachPointName;			//Offset: 16 | ElementSize: 8
			struct FVector Location;			//Offset: 24 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 36 | ElementSize: 12
			TEnumAsByte<EAttachLocation> LocationType;			//Offset: 48 | ElementSize: 1
			bool bStopWhenAttachedToDestroyed;			//Offset: 49 | ElementSize: 1
			bool bLooping;			//Offset: 50 | ElementSize: 1
			float IntensityMultiplier;			//Offset: 52 | ElementSize: 4
			float StartTime;			//Offset: 56 | ElementSize: 4
			class UForceFeedbackAttenuation* AttenuationSettings;			//Offset: 64 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 72 | ElementSize: 1
			class UForceFeedbackComponent* ReturnValue;			//Offset: 80 | ElementSize: 8
		};
		UGameplayStatics_SpawnForceFeedbackAttached_Params params;
		params.ForceFeedbackEffect = ForceFeedbackEffect;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.bLooping = bLooping;
		params.IntensityMultiplier = IntensityMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnObject
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: ObjectClass	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Outer	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UObject* UGameplayStatics::SpawnObject(class UObject* ObjectClass, class UObject* Outer) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnObject");

		struct UGameplayStatics_SpawnObject_Params {
			class UObject* ObjectClass;			//Offset: 0 | ElementSize: 8
			class UObject* Outer;			//Offset: 8 | ElementSize: 8
			class UObject* ReturnValue;			//Offset: 16 | ElementSize: 8
		};
		UGameplayStatics_SpawnObject_Params params;
		params.ObjectClass = ObjectClass;
		params.Outer = Outer;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnSound2D
	// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bPersistAcrossLevelTransition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnSound2D");

		struct UGameplayStatics_SpawnSound2D_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundBase* Sound;			//Offset: 8 | ElementSize: 8
			float VolumeMultiplier;			//Offset: 16 | ElementSize: 4
			float PitchMultiplier;			//Offset: 20 | ElementSize: 4
			float StartTime;			//Offset: 24 | ElementSize: 4
			class USoundConcurrency* ConcurrencySettings;			//Offset: 32 | ElementSize: 8
			bool bPersistAcrossLevelTransition;			//Offset: 40 | ElementSize: 1
			bool bAutoDestroy;			//Offset: 41 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 48 | ElementSize: 8
		};
		UGameplayStatics_SpawnSound2D_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnSoundAtLocation
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnSoundAtLocation");

		struct UGameplayStatics_SpawnSoundAtLocation_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			class USoundBase* Sound;			//Offset: 8 | ElementSize: 8
			struct FVector Location;			//Offset: 16 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 28 | ElementSize: 12
			float VolumeMultiplier;			//Offset: 40 | ElementSize: 4
			float PitchMultiplier;			//Offset: 44 | ElementSize: 4
			float StartTime;			//Offset: 48 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 56 | ElementSize: 8
			class USoundConcurrency* ConcurrencySettings;			//Offset: 64 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 72 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 80 | ElementSize: 8
		};
		UGameplayStatics_SpawnSoundAtLocation_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SpawnSoundAttached
	// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttachPointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	// Name: LocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bStopWhenAttachedToDestroyed	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bAutoDestroy	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class UAudioComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UAudioComponent* UGameplayStatics::SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SpawnSoundAttached");

		struct UGameplayStatics_SpawnSoundAttached_Params {
			class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
			class USceneComponent* AttachToComponent;			//Offset: 8 | ElementSize: 8
			struct FName AttachPointName;			//Offset: 16 | ElementSize: 8
			struct FVector Location;			//Offset: 24 | ElementSize: 12
			struct FRotator Rotation;			//Offset: 36 | ElementSize: 12
			TEnumAsByte<EAttachLocation> LocationType;			//Offset: 48 | ElementSize: 1
			bool bStopWhenAttachedToDestroyed;			//Offset: 49 | ElementSize: 1
			float VolumeMultiplier;			//Offset: 52 | ElementSize: 4
			float PitchMultiplier;			//Offset: 56 | ElementSize: 4
			float StartTime;			//Offset: 60 | ElementSize: 4
			class USoundAttenuation* AttenuationSettings;			//Offset: 64 | ElementSize: 8
			class USoundConcurrency* ConcurrencySettings;			//Offset: 72 | ElementSize: 8
			bool bAutoDestroy;			//Offset: 80 | ElementSize: 1
			class UAudioComponent* ReturnValue;			//Offset: 88 | ElementSize: 8
		};
		UGameplayStatics_SpawnSoundAttached_Params params;
		params.Sound = Sound;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.SuggestProjectileVelocity_CustomArc
	// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OutLaunchVelocity	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: StartPos	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: EndPos	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: OverrideGravityZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ArcParam	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UGameplayStatics::SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, struct FVector* OutLaunchVelocity, struct FVector StartPos, struct FVector EndPos, float OverrideGravityZ, float ArcParam) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.SuggestProjectileVelocity_CustomArc");

		struct UGameplayStatics_SuggestProjectileVelocity_CustomArc_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FVector OutLaunchVelocity;			//Offset: 8 | ElementSize: 12
			struct FVector StartPos;			//Offset: 20 | ElementSize: 12
			struct FVector EndPos;			//Offset: 32 | ElementSize: 12
			float OverrideGravityZ;			//Offset: 44 | ElementSize: 4
			float ArcParam;			//Offset: 48 | ElementSize: 4
			bool ReturnValue;			//Offset: 52 | ElementSize: 1
		};
		UGameplayStatics_SuggestProjectileVelocity_CustomArc_Params params;
		params.WorldContextObject = WorldContextObject;
		params.StartPos = StartPos;
		params.EndPos = EndPos;
		params.OverrideGravityZ = OverrideGravityZ;
		params.ArcParam = ArcParam;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (OutLaunchVelocity != nullptr)
			*OutLaunchVelocity = params.OutLaunchVelocity;
		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.UnloadStreamLevel
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LevelName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
	// Name: bShouldBlockOnUnload	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::UnloadStreamLevel(class UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.UnloadStreamLevel");

		struct UGameplayStatics_UnloadStreamLevel_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			struct FName LevelName;			//Offset: 8 | ElementSize: 8
			struct FLatentActionInfo LatentInfo;			//Offset: 16 | ElementSize: 24
			bool bShouldBlockOnUnload;			//Offset: 40 | ElementSize: 1
		};
		UGameplayStatics_UnloadStreamLevel_Params params;
		params.WorldContextObject = WorldContextObject;
		params.LevelName = LevelName;
		params.LatentInfo = LatentInfo;
		params.bShouldBlockOnUnload = bShouldBlockOnUnload;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.UnloadStreamLevelBySoftObjectPtr
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Level	Type: TAssetPtr<class UWorld>	Flags: ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
	// Name: bShouldBlockOnUnload	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.UnloadStreamLevelBySoftObjectPtr");

		struct UGameplayStatics_UnloadStreamLevelBySoftObjectPtr_Params {
			class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
			TAssetPtr<class UWorld> Level;			//Offset: 8 | ElementSize: 40
			struct FLatentActionInfo LatentInfo;			//Offset: 48 | ElementSize: 24
			bool bShouldBlockOnUnload;			//Offset: 72 | ElementSize: 1
		};
		UGameplayStatics_UnloadStreamLevelBySoftObjectPtr_Params params;
		params.WorldContextObject = WorldContextObject;
		params.Level = Level;
		params.LatentInfo = LatentInfo;
		params.bShouldBlockOnUnload = bShouldBlockOnUnload;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.GameplayStatics.UnRetainAllSoundsInSoundClass
	// Flags: Final, Native, Static, Public, BlueprintCallable
	// Params:
	// Name: InSoundClass	Type: class USoundClass*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void UGameplayStatics::UnRetainAllSoundsInSoundClass(class USoundClass* InSoundClass) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.UnRetainAllSoundsInSoundClass");

		struct UGameplayStatics_UnRetainAllSoundsInSoundClass_Params {
			class USoundClass* InSoundClass;			//Offset: 0 | ElementSize: 8
		};
		UGameplayStatics_UnRetainAllSoundsInSoundClass_Params params;
		params.InSoundClass = InSoundClass;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

	}
}