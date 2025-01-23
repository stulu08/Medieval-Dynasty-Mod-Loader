#include "../SDK.h"
#include "BPCppHelperFunctions.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: TestActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaceLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaceRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::AdjustTeleportLocation(class AActor* TestActor, struct FVector* PlaceLocation, struct FRotator PlaceRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation");

	struct UBPCppHelperFunctions_AdjustTeleportLocation_Params {
		class AActor* TestActor;			//Offset: 0 | ElementSize: 8
		struct FVector PlaceLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator PlaceRotation;			//Offset: 20 | ElementSize: 12
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UBPCppHelperFunctions_AdjustTeleportLocation_Params params;
	params.TestActor = TestActor;
	params.PlaceRotation = PlaceRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PlaceLocation != nullptr)
		*PlaceLocation = params.PlaceLocation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndActor
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: PlayerCameraManager	Type: class APlayerCameraManager*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppHelperFunctions::AngleBetweenCameraAndActor(class APlayerCameraManager* PlayerCameraManager, class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndActor");

	struct UBPCppHelperFunctions_AngleBetweenCameraAndActor_Params {
		class APlayerCameraManager* PlayerCameraManager;			//Offset: 0 | ElementSize: 8
		class AActor* Actor;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UBPCppHelperFunctions_AngleBetweenCameraAndActor_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.Actor = Actor;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndLocation
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PlayerCameraManager	Type: class APlayerCameraManager*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppHelperFunctions::AngleBetweenCameraAndLocation(class APlayerCameraManager* PlayerCameraManager, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndLocation");

	struct UBPCppHelperFunctions_AngleBetweenCameraAndLocation_Params {
		class APlayerCameraManager* PlayerCameraManager;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	UBPCppHelperFunctions_AngleBetweenCameraAndLocation_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.Location = Location;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::Array_Empty(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty");

	struct UBPCppHelperFunctions_Array_Empty_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBPCppHelperFunctions_Array_Empty_Params params;
	params.TargetArray = TargetArray;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.CalculateDistanceForDisplay
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: closeRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mediumRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: farRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: activeRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: viewDistanceScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ignoreRenderVisibility	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawDebugInfo	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: optimizationStage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NearestPlayer	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CalculateDistanceForDisplay(class UObject* WorldContextObject, class UActorComponent* ActorComponent, float closeRadiusForDisplay, float mediumRadiusForDisplay, float farRadiusForDisplay, float activeRadius, float viewDistanceScale, bool ignoreRenderVisibility, bool DrawDebugInfo, float* Distance, int32_t* optimizationStage, class AActor** NearestPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CalculateDistanceForDisplay");

	struct UBPCppHelperFunctions_CalculateDistanceForDisplay_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UActorComponent* ActorComponent;			//Offset: 8 | ElementSize: 8
		float closeRadiusForDisplay;			//Offset: 16 | ElementSize: 4
		float mediumRadiusForDisplay;			//Offset: 20 | ElementSize: 4
		float farRadiusForDisplay;			//Offset: 24 | ElementSize: 4
		float activeRadius;			//Offset: 28 | ElementSize: 4
		float viewDistanceScale;			//Offset: 32 | ElementSize: 4
		bool ignoreRenderVisibility;			//Offset: 36 | ElementSize: 1
		bool DrawDebugInfo;			//Offset: 37 | ElementSize: 1
		float Distance;			//Offset: 40 | ElementSize: 4
		int32_t optimizationStage;			//Offset: 44 | ElementSize: 4
		class AActor* NearestPlayer;			//Offset: 48 | ElementSize: 8
	};
	UBPCppHelperFunctions_CalculateDistanceForDisplay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorComponent = ActorComponent;
	params.closeRadiusForDisplay = closeRadiusForDisplay;
	params.mediumRadiusForDisplay = mediumRadiusForDisplay;
	params.farRadiusForDisplay = farRadiusForDisplay;
	params.activeRadius = activeRadius;
	params.viewDistanceScale = viewDistanceScale;
	params.ignoreRenderVisibility = ignoreRenderVisibility;
	params.DrawDebugInfo = DrawDebugInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (optimizationStage != nullptr)
		*optimizationStage = params.optimizationStage;
	if (NearestPlayer != nullptr)
		*NearestPlayer = params.NearestPlayer;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CapsuleMultiTraceByChannel
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: shouldTraceComplex	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::CapsuleMultiTraceByChannel(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FRotator& Rotation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool shouldTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CapsuleMultiTraceByChannel");

	struct UBPCppHelperFunctions_CapsuleMultiTraceByChannel_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 32 | ElementSize: 12
		float Radius;			//Offset: 44 | ElementSize: 4
		float HalfHeight;			//Offset: 48 | ElementSize: 4
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 52 | ElementSize: 1
		bool shouldTraceComplex;			//Offset: 53 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TArray<struct FHitResult> OutHits;			//Offset: 72 | ElementSize: 16
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBPCppHelperFunctions_CapsuleMultiTraceByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Rotation = Rotation;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.shouldTraceComplex = shouldTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CheckAnotherAppInstance
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: IsEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CheckAnotherAppInstance(bool IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CheckAnotherAppInstance");

	struct UBPCppHelperFunctions_CheckAnotherAppInstance_Params {
		bool IsEnabled;			//Offset: 0 | ElementSize: 1
	};
	UBPCppHelperFunctions_CheckAnotherAppInstance_Params params;
	params.IsEnabled = IsEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsBuilding
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: actorLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: checkLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Destination	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: capsuleRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CapsuleHalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UBPCppHelperFunctions::CheckIsBuilding(class UObject* WorldContextObject, struct FVector actorLocation, struct FVector checkLocation, struct FVector Destination, float capsuleRadius, float CapsuleHalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsBuilding");

	struct UBPCppHelperFunctions_CheckIsBuilding_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector actorLocation;			//Offset: 8 | ElementSize: 12
		struct FVector checkLocation;			//Offset: 20 | ElementSize: 12
		struct FVector Destination;			//Offset: 32 | ElementSize: 12
		float capsuleRadius;			//Offset: 44 | ElementSize: 4
		float CapsuleHalfHeight;			//Offset: 48 | ElementSize: 4
		struct FVector ReturnValue;			//Offset: 52 | ElementSize: 12
	};
	UBPCppHelperFunctions_CheckIsBuilding_Params params;
	params.WorldContextObject = WorldContextObject;
	params.actorLocation = actorLocation;
	params.checkLocation = checkLocation;
	params.Destination = Destination;
	params.capsuleRadius = capsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsRooted
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectToCheck	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::CheckIsRooted(class UObject* WorldContextObject, class UObject* ObjectToCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsRooted");

	struct UBPCppHelperFunctions_CheckIsRooted_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UObject* ObjectToCheck;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBPCppHelperFunctions_CheckIsRooted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ObjectToCheck = ObjectToCheck;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.CopyStringToClipboard
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: StringToCopy	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CopyStringToClipboard(struct FString StringToCopy) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CopyStringToClipboard");

	struct UBPCppHelperFunctions_CopyStringToClipboard_Params {
		struct FString StringToCopy;			//Offset: 0 | ElementSize: 16
	};
	UBPCppHelperFunctions_CopyStringToClipboard_Params params;
	params.StringToCopy = StringToCopy;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.Discombobulate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: firstDigit	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: secondDigit	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: thirdDigit	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: fourthDigit	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hardMode	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::Discombobulate(int32_t firstDigit, int32_t secondDigit, int32_t thirdDigit, int32_t fourthDigit, bool hardMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Discombobulate");

	struct UBPCppHelperFunctions_Discombobulate_Params {
		int32_t firstDigit;			//Offset: 0 | ElementSize: 4
		int32_t secondDigit;			//Offset: 4 | ElementSize: 4
		int32_t thirdDigit;			//Offset: 8 | ElementSize: 4
		int32_t fourthDigit;			//Offset: 12 | ElementSize: 4
		bool hardMode;			//Offset: 16 | ElementSize: 1
	};
	UBPCppHelperFunctions_Discombobulate_Params params;
	params.firstDigit = firstDigit;
	params.secondDigit = secondDigit;
	params.thirdDigit = thirdDigit;
	params.fourthDigit = fourthDigit;
	params.hardMode = hardMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.FlushPrintsFromScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBPCppHelperFunctions::FlushPrintsFromScreen() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.FlushPrintsFromScreen");

	struct UBPCppHelperFunctions_FlushPrintsFromScreen_Params {
	};
	UBPCppHelperFunctions_FlushPrintsFromScreen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: String	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int64_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int64_t UBPCppHelperFunctions::FStrToInt64(struct FString String) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64");

	struct UBPCppHelperFunctions_FStrToInt64_Params {
		struct FString String;			//Offset: 0 | ElementSize: 16
		int64_t ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UBPCppHelperFunctions_FStrToInt64_Params params;
	params.String = String;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GenerateInviteCode
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Length	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::GenerateInviteCode(int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GenerateInviteCode");

	struct UBPCppHelperFunctions_GenerateInviteCode_Params {
		int32_t Length;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_GenerateInviteCode_Params params;
	params.Length = Length;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Controller	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TEnumAsByte<EAspectRatioAxisConstraint>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EAspectRatioAxisConstraint> UBPCppHelperFunctions::GetCurrentAspectRatioConstraint(class APlayerController* Controller) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint");

	struct UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params {
		class APlayerController* Controller;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EAspectRatioAxisConstraint> ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetDefaultOnlineSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UBPCppHelperFunctions::GetDefaultOnlineSubsystem(class UObject* InWorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetDefaultOnlineSubsystem");

	struct UBPCppHelperFunctions_GetDefaultOnlineSubsystem_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetDefaultOnlineSubsystem_Params params;
	params.InWorldContextObject = InWorldContextObject;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetDurationOfLoopingSoundCue
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: cue	Type: class USoundCue*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppHelperFunctions::GetDurationOfLoopingSoundCue(class USoundCue* cue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetDurationOfLoopingSoundCue");

	struct UBPCppHelperFunctions_GetDurationOfLoopingSoundCue_Params {
		class USoundCue* cue;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UBPCppHelperFunctions_GetDurationOfLoopingSoundCue_Params params;
	params.cue = cue;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Files	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: RootFolderFullPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Ext	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FileNameFilters	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: FilesToExclude	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: UserID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::GetFiles(TArray<struct FString>* Files, struct FString RootFolderFullPath, struct FString Ext, TArray<struct FString> FileNameFilters, TArray<struct FString> FilesToExclude, int32_t UserID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles");

	struct UBPCppHelperFunctions_GetFiles_Params {
		TArray<struct FString> Files;			//Offset: 0 | ElementSize: 16
		struct FString RootFolderFullPath;			//Offset: 16 | ElementSize: 16
		struct FString Ext;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> FileNameFilters;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> FilesToExclude;			//Offset: 64 | ElementSize: 16
		int32_t UserID;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetFiles_Params params;
	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;
	params.FileNameFilters = FileNameFilters;
	params.FilesToExclude = FilesToExclude;
	params.UserID = UserID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Files != nullptr)
		*Files = params.Files;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetFileSize
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int64_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int64_t UBPCppHelperFunctions::GetFileSize(struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetFileSize");

	struct UBPCppHelperFunctions_GetFileSize_Params {
		struct FString Filename;			//Offset: 0 | ElementSize: 16
		int64_t ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetFileSize_Params params;
	params.Filename = Filename;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetLocalPlayerController
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerController* UBPCppHelperFunctions::GetLocalPlayerController(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetLocalPlayerController");

	struct UBPCppHelperFunctions_GetLocalPlayerController_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetLocalPlayerController_Params params;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetNativePlatformSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::GetNativePlatformSubsystem() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetNativePlatformSubsystem");

	struct UBPCppHelperFunctions_GetNativePlatformSubsystem_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBPCppHelperFunctions_GetNativePlatformSubsystem_Params params;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetNativeUniqueNetIdFromDefaultNetId
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: NetID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::GetNativeUniqueNetIdFromDefaultNetId(struct FString NetID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetNativeUniqueNetIdFromDefaultNetId");

	struct UBPCppHelperFunctions_GetNativeUniqueNetIdFromDefaultNetId_Params {
		struct FString NetID;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UBPCppHelperFunctions_GetNativeUniqueNetIdFromDefaultNetId_Params params;
	params.NetID = NetID;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UBPCppHelperFunctions::GetOnlineSubsystem(class UObject* InWorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem");

	struct UBPCppHelperFunctions_GetOnlineSubsystem_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetOnlineSubsystem_Params params;
	params.InWorldContextObject = InWorldContextObject;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetParentClassOfClass
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UBPCppHelperFunctions::GetParentClassOfClass(class UObject* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetParentClassOfClass");

	struct UBPCppHelperFunctions_GetParentClassOfClass_Params {
		class UObject* Class;			//Offset: 0 | ElementSize: 8
		class UObject* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetParentClassOfClass_Params params;
	params.Class = Class;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetPlatformType
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: EMD_SpecificPlatform	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMD_SpecificPlatform UBPCppHelperFunctions::GetPlatformType() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetPlatformType");

	struct UBPCppHelperFunctions_GetPlatformType_Params {
		EMD_SpecificPlatform ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetPlatformType_Params params;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayerControllerIdByIterator
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBPCppHelperFunctions::GetPlayerControllerIdByIterator(class UObject* InWorldContextObject, class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayerControllerIdByIterator");

	struct UBPCppHelperFunctions_GetPlayerControllerIdByIterator_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UBPCppHelperFunctions_GetPlayerControllerIdByIterator_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.PlayerController = PlayerController;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayersUniqueNetIdsRepl
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerUniquesIdsTypes	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBPCppHelperFunctions::GetPlayersUniqueNetIdsRepl(class UObject* InWorldContextObject, TArray<struct FName>* PlayerUniquesIdsTypes) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayersUniqueNetIdsRepl");

	struct UBPCppHelperFunctions_GetPlayersUniqueNetIdsRepl_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		TArray<struct FName> PlayerUniquesIdsTypes;			//Offset: 8 | ElementSize: 16
		TArray<struct FString> ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UBPCppHelperFunctions_GetPlayersUniqueNetIdsRepl_Params params;
	params.InWorldContextObject = InWorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PlayerUniquesIdsTypes != nullptr)
		*PlayerUniquesIdsTypes = params.PlayerUniquesIdsTypes;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayerUniqueNetIdRepl
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerUniqueIdType	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::GetPlayerUniqueNetIdRepl(class UObject* InWorldContextObject, class APlayerState* PlayerState, struct FName* PlayerUniqueIdType) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetPlayerUniqueNetIdRepl");

	struct UBPCppHelperFunctions_GetPlayerUniqueNetIdRepl_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerState* PlayerState;			//Offset: 8 | ElementSize: 8
		struct FName PlayerUniqueIdType;			//Offset: 16 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UBPCppHelperFunctions_GetPlayerUniqueNetIdRepl_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.PlayerState = PlayerState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PlayerUniqueIdType != nullptr)
		*PlayerUniqueIdType = params.PlayerUniqueIdType;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetStaticMeshPhysicalMaterial
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: StaticMesh	Type: class UStaticMesh*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UPhysicalMaterial*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicalMaterial* UBPCppHelperFunctions::GetStaticMeshPhysicalMaterial(class UStaticMesh* StaticMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetStaticMeshPhysicalMaterial");

	struct UBPCppHelperFunctions_GetStaticMeshPhysicalMaterial_Params {
		class UStaticMesh* StaticMesh;			//Offset: 0 | ElementSize: 8
		class UPhysicalMaterial* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetStaticMeshPhysicalMaterial_Params params;
	params.StaticMesh = StaticMesh;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.GetWorld
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWorld*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWorld* UBPCppHelperFunctions::GetWorld(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetWorld");

	struct UBPCppHelperFunctions_GetWorld_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UWorld* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetWorld_Params params;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.GroundedRotation
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Character	Type: class ACharacter*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsMoving	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: lookInVelocityDirection	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isAiming	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isFirstPerson	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentLookingRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: lastVelocityRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: hasMovementInput	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: lastMovementInputRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: aimYawDelta	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentCardinalDirection	Type: ECardinalDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentRotationOffset	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: gait	Type: EGait	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Velocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentRotationRateMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: shouldChangeRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: cardinalDirection	Type: ECardinalDirection	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationOffset	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rotationRateMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::GroundedRotation(class ACharacter* Character, bool IsMoving, bool lookInVelocityDirection, bool isAiming, bool isFirstPerson, struct FRotator currentLookingRotation, struct FRotator lastVelocityRotation, bool hasMovementInput, struct FRotator lastMovementInputRotation, float aimYawDelta, ECardinalDirection currentCardinalDirection, float currentRotationOffset, EGait gait, struct FVector Velocity, float currentRotationRateMultiplier, bool* shouldChangeRotation, struct FRotator* TargetRotation, bool* interpRotation, float* interpSpeed, ECardinalDirection* cardinalDirection, float* RotationOffset, float* rotationRateMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GroundedRotation");

	struct UBPCppHelperFunctions_GroundedRotation_Params {
		class ACharacter* Character;			//Offset: 0 | ElementSize: 8
		bool IsMoving;			//Offset: 8 | ElementSize: 1
		bool lookInVelocityDirection;			//Offset: 9 | ElementSize: 1
		bool isAiming;			//Offset: 10 | ElementSize: 1
		bool isFirstPerson;			//Offset: 11 | ElementSize: 1
		struct FRotator currentLookingRotation;			//Offset: 12 | ElementSize: 12
		struct FRotator lastVelocityRotation;			//Offset: 24 | ElementSize: 12
		bool hasMovementInput;			//Offset: 36 | ElementSize: 1
		struct FRotator lastMovementInputRotation;			//Offset: 40 | ElementSize: 12
		float aimYawDelta;			//Offset: 52 | ElementSize: 4
		ECardinalDirection currentCardinalDirection;			//Offset: 56 | ElementSize: 1
		float currentRotationOffset;			//Offset: 60 | ElementSize: 4
		EGait gait;			//Offset: 64 | ElementSize: 1
		struct FVector Velocity;			//Offset: 68 | ElementSize: 12
		float currentRotationRateMultiplier;			//Offset: 80 | ElementSize: 4
		bool shouldChangeRotation;			//Offset: 84 | ElementSize: 1
		struct FRotator TargetRotation;			//Offset: 88 | ElementSize: 12
		bool interpRotation;			//Offset: 100 | ElementSize: 1
		float interpSpeed;			//Offset: 104 | ElementSize: 4
		ECardinalDirection cardinalDirection;			//Offset: 108 | ElementSize: 1
		float RotationOffset;			//Offset: 112 | ElementSize: 4
		float rotationRateMultiplier;			//Offset: 116 | ElementSize: 4
	};
	UBPCppHelperFunctions_GroundedRotation_Params params;
	params.Character = Character;
	params.IsMoving = IsMoving;
	params.lookInVelocityDirection = lookInVelocityDirection;
	params.isAiming = isAiming;
	params.isFirstPerson = isFirstPerson;
	params.currentLookingRotation = currentLookingRotation;
	params.lastVelocityRotation = lastVelocityRotation;
	params.hasMovementInput = hasMovementInput;
	params.lastMovementInputRotation = lastMovementInputRotation;
	params.aimYawDelta = aimYawDelta;
	params.currentCardinalDirection = currentCardinalDirection;
	params.currentRotationOffset = currentRotationOffset;
	params.gait = gait;
	params.Velocity = Velocity;
	params.currentRotationRateMultiplier = currentRotationRateMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (shouldChangeRotation != nullptr)
		*shouldChangeRotation = params.shouldChangeRotation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	if (interpRotation != nullptr)
		*interpRotation = params.interpRotation;
	if (interpSpeed != nullptr)
		*interpSpeed = params.interpSpeed;
	if (cardinalDirection != nullptr)
		*cardinalDirection = params.cardinalDirection;
	if (RotationOffset != nullptr)
		*RotationOffset = params.RotationOffset;
	if (rotationRateMultiplier != nullptr)
		*rotationRateMultiplier = params.rotationRateMultiplier;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.InitSaveModule
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBPCppHelperFunctions::InitSaveModule() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.InitSaveModule");

	struct UBPCppHelperFunctions_InitSaveModule_Params {
	};
	UBPCppHelperFunctions_InitSaveModule_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.Int64ToFStr
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int64_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::Int64ToFStr(int64_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Int64ToFStr");

	struct UBPCppHelperFunctions_Int64ToFStr_Params {
		int64_t Value;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_Int64ToFStr_Params params;
	params.Value = Value;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.IsCameraMoveableWhenPaused
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::IsCameraMoveableWhenPaused(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.IsCameraMoveableWhenPaused");

	struct UBPCppHelperFunctions_IsCameraMoveableWhenPaused_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_IsCameraMoveableWhenPaused_Params params;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.IsInCameraRangeSquared
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: SceneComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rangeSquared	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isInRangeSquared	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::IsInCameraRangeSquared(class USceneComponent* SceneComponent, float rangeSquared, bool* isInRangeSquared) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.IsInCameraRangeSquared");

	struct UBPCppHelperFunctions_IsInCameraRangeSquared_Params {
		class USceneComponent* SceneComponent;			//Offset: 0 | ElementSize: 8
		float rangeSquared;			//Offset: 8 | ElementSize: 4
		bool isInRangeSquared;			//Offset: 12 | ElementSize: 1
	};
	UBPCppHelperFunctions_IsInCameraRangeSquared_Params params;
	params.SceneComponent = SceneComponent;
	params.rangeSquared = rangeSquared;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (isInRangeSquared != nullptr)
		*isInRangeSquared = params.isInRangeSquared;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.KillGameInstance
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBPCppHelperFunctions::KillGameInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.KillGameInstance");

	struct UBPCppHelperFunctions_KillGameInstance_Params {
	};
	UBPCppHelperFunctions_KillGameInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.LogPieError
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::LogPieError(class UObject* WorldContextObject, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.LogPieError");

	struct UBPCppHelperFunctions_LogPieError_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FString Message;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_LogPieError_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.PasteStringFromClipboard
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::PasteStringFromClipboard() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.PasteStringFromClipboard");

	struct UBPCppHelperFunctions_PasteStringFromClipboard_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBPCppHelperFunctions_PasteStringFromClipboard_Params params;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.PrintError
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: indentationLevel	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::PrintError(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.PrintError");

	struct UBPCppHelperFunctions_PrintError_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t indentationLevel;			//Offset: 8 | ElementSize: 4
		struct FString Message;			//Offset: 16 | ElementSize: 16
		float Duration;			//Offset: 32 | ElementSize: 4
	};
	UBPCppHelperFunctions_PrintError_Params params;
	params.WorldContextObject = WorldContextObject;
	params.indentationLevel = indentationLevel;
	params.Message = Message;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.PrintInfo
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: indentationLevel	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::PrintInfo(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.PrintInfo");

	struct UBPCppHelperFunctions_PrintInfo_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t indentationLevel;			//Offset: 8 | ElementSize: 4
		struct FString Message;			//Offset: 16 | ElementSize: 16
		float Duration;			//Offset: 32 | ElementSize: 4
	};
	UBPCppHelperFunctions_PrintInfo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.indentationLevel = indentationLevel;
	params.Message = Message;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.PrintWarning
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: indentationLevel	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::PrintWarning(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.PrintWarning");

	struct UBPCppHelperFunctions_PrintWarning_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t indentationLevel;			//Offset: 8 | ElementSize: 4
		struct FString Message;			//Offset: 16 | ElementSize: 16
		float Duration;			//Offset: 32 | ElementSize: 4
	};
	UBPCppHelperFunctions_PrintWarning_Params params;
	params.WorldContextObject = WorldContextObject;
	params.indentationLevel = indentationLevel;
	params.Message = Message;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.RecreatePhysicsState
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ActorComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::RecreatePhysicsState(class UActorComponent* ActorComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.RecreatePhysicsState");

	struct UBPCppHelperFunctions_RecreatePhysicsState_Params {
		class UActorComponent* ActorComponent;			//Offset: 0 | ElementSize: 8
	};
	UBPCppHelperFunctions_RecreatePhysicsState_Params params;
	params.ActorComponent = ActorComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SaveKeyMappingsNoSort
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Target	Type: class UInputSettings*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SaveKeyMappingsNoSort(class UInputSettings* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SaveKeyMappingsNoSort");

	struct UBPCppHelperFunctions_SaveKeyMappingsNoSort_Params {
		class UInputSettings* Target;			//Offset: 0 | ElementSize: 8
	};
	UBPCppHelperFunctions_SaveKeyMappingsNoSort_Params params;
	params.Target = Target;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DisplayName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetActorName(class UObject* Object, struct FString DisplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName");

	struct UBPCppHelperFunctions_SetActorName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString DisplayName;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_SetActorName_Params params;
	params.Object = Object;
	params.DisplayName = DisplayName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParams
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LodToSkipSettings	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, TMap<int32_t, int32_t> LodToSkipSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParams");

	struct UBPCppHelperFunctions_SetAnimUpdateRateParams_Params {
		class USkinnedMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<int32_t, int32_t> LodToSkipSettings;			//Offset: 8 | ElementSize: 80
	};
	UBPCppHelperFunctions_SetAnimUpdateRateParams_Params params;
	params.Mesh = Mesh;
	params.LodToSkipSettings = LodToSkipSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParamsScreenSize
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScreenSizes	Type: TArray<float>	Flags: ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, TArray<float> ScreenSizes) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParamsScreenSize");

	struct UBPCppHelperFunctions_SetAnimUpdateRateParamsScreenSize_Params {
		class USkinnedMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		TArray<float> ScreenSizes;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_SetAnimUpdateRateParamsScreenSize_Params params;
	params.Mesh = Mesh;
	params.ScreenSizes = ScreenSizes;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCameraMoveableWhenPaused
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsCameraMoveableWhenPaused	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCameraMoveableWhenPaused(class UObject* WorldContextObject, bool IsCameraMoveableWhenPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCameraMoveableWhenPaused");

	struct UBPCppHelperFunctions_SetCameraMoveableWhenPaused_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool IsCameraMoveableWhenPaused;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetCameraMoveableWhenPaused_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IsCameraMoveableWhenPaused = IsCameraMoveableWhenPaused;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCameraRenderingForPlayer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: enable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCameraRenderingForPlayer(class APlayerController* Player, bool enable) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCameraRenderingForPlayer");

	struct UBPCppHelperFunctions_SetCameraRenderingForPlayer_Params {
		class APlayerController* Player;			//Offset: 0 | ElementSize: 8
		bool enable;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetCameraRenderingForPlayer_Params params;
	params.Player = Player;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCharacterRotation
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: CharacterMovement	Type: class UCharacterMovementComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentCharacterRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: useControllerRotationYaw	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: characterRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: rotationDifference	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCharacterRotation(class UCharacterMovementComponent* CharacterMovement, struct FRotator currentCharacterRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, bool useControllerRotationYaw, struct FRotator* characterRotation, float* rotationDifference) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCharacterRotation");

	struct UBPCppHelperFunctions_SetCharacterRotation_Params {
		class UCharacterMovementComponent* CharacterMovement;			//Offset: 0 | ElementSize: 8
		struct FRotator currentCharacterRotation;			//Offset: 8 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 20 | ElementSize: 12
		bool interpRotation;			//Offset: 32 | ElementSize: 1
		float interpSpeed;			//Offset: 36 | ElementSize: 4
		bool useControllerRotationYaw;			//Offset: 40 | ElementSize: 1
		struct FRotator characterRotation;			//Offset: 44 | ElementSize: 12
		float rotationDifference;			//Offset: 56 | ElementSize: 4
	};
	UBPCppHelperFunctions_SetCharacterRotation_Params params;
	params.CharacterMovement = CharacterMovement;
	params.currentCharacterRotation = currentCharacterRotation;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;
	params.useControllerRotationYaw = useControllerRotationYaw;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (characterRotation != nullptr)
		*characterRotation = params.characterRotation;
	if (rotationDifference != nullptr)
		*rotationDifference = params.rotationDifference;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Controller	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ConstraintMode	Type: TEnumAsByte<EAspectRatioAxisConstraint>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint");

	struct UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params {
		class APlayerController* Controller;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;
	params.ConstraintMode = ConstraintMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatforms
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Mesh	Type: class UStaticMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PerPlatformMinLods	Type: TMap<struct FName, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::SetMinimumLODForPlatforms(class UStaticMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatforms");

	struct UBPCppHelperFunctions_SetMinimumLODForPlatforms_Params {
		class UStaticMesh* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<struct FName, int32_t> PerPlatformMinLods;			//Offset: 8 | ElementSize: 80
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetMinimumLODForPlatforms_Params params;
	params.Mesh = Mesh;
	params.PerPlatformMinLods = PerPlatformMinLods;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatformsForSkeletals
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkeletalMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PerPlatformMinLods	Type: TMap<struct FName, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatformsForSkeletals");

	struct UBPCppHelperFunctions_SetMinimumLODForPlatformsForSkeletals_Params {
		class USkeletalMesh* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<struct FName, int32_t> PerPlatformMinLods;			//Offset: 8 | ElementSize: 80
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetMinimumLODForPlatformsForSkeletals_Params params;
	params.Mesh = Mesh;
	params.PerPlatformMinLods = PerPlatformMinLods;

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
// Function Medieval_Dynasty.BPCppHelperFunctions.SetNetAdressableHelper
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ActorToUpdate	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetNetAdressableHelper(class AActor* ActorToUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetNetAdressableHelper");

	struct UBPCppHelperFunctions_SetNetAdressableHelper_Params {
		class AActor* ActorToUpdate;			//Offset: 0 | ElementSize: 8
	};
	UBPCppHelperFunctions_SetNetAdressableHelper_Params params;
	params.ActorToUpdate = ActorToUpdate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetNetCullDistanceSquared
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ActorToUpdate	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NetCullDistanceSquared	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetNetCullDistanceSquared(class AActor* ActorToUpdate, float NetCullDistanceSquared) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetNetCullDistanceSquared");

	struct UBPCppHelperFunctions_SetNetCullDistanceSquared_Params {
		class AActor* ActorToUpdate;			//Offset: 0 | ElementSize: 8
		float NetCullDistanceSquared;			//Offset: 8 | ElementSize: 4
	};
	UBPCppHelperFunctions_SetNetCullDistanceSquared_Params params;
	params.ActorToUpdate = ActorToUpdate;
	params.NetCullDistanceSquared = NetCullDistanceSquared;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetUnfocusedVolumeMultiplier
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Multiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetUnfocusedVolumeMultiplier(float Multiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetUnfocusedVolumeMultiplier");

	struct UBPCppHelperFunctions_SetUnfocusedVolumeMultiplier_Params {
		float Multiplier;			//Offset: 0 | ElementSize: 4
	};
	UBPCppHelperFunctions_SetUnfocusedVolumeMultiplier_Params params;
	params.Multiplier = Multiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.TryMe
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::TryMe(struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.TryMe");

	struct UBPCppHelperFunctions_TryMe_Params {
		struct FString Message;			//Offset: 0 | ElementSize: 16
	};
	UBPCppHelperFunctions_TryMe_Params params;
	params.Message = Message;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}