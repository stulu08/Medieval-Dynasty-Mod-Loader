#include "../SDK.h"
#include "KismetAnimationLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Position	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: History	Type: struct FPositionHistory	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: NumberOfSamples	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VelocityMin	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VelocityMax	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");

	struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
		struct FVector Position;			//Offset: 4 | ElementSize: 12
		struct FPositionHistory History;			//Offset: 16 | ElementSize: 48
		int32_t NumberOfSamples;			//Offset: 64 | ElementSize: 4
		float VelocityMin;			//Offset: 68 | ElementSize: 4
		float VelocityMax;			//Offset: 72 | ElementSize: 4
		float ReturnValue;			//Offset: 76 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Position = Position;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (History != nullptr)
		*History = params.History;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Component	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketOrBoneName	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReferenceSocketOrBone	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketSpace	Type: TEnumAsByte<ERelativeTransformSpace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OffsetInBoneSpace	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: History	Type: struct FPositionHistory	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: NumberOfSamples	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VelocityMin	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VelocityMax	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EasingType	Type: EEasingFuncType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CustomCurve	Type: struct FRuntimeFloatCurve	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");

	struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
		class USkeletalMeshComponent* Component;			//Offset: 8 | ElementSize: 8
		struct FName SocketOrBoneName;			//Offset: 16 | ElementSize: 8
		struct FName ReferenceSocketOrBone;			//Offset: 24 | ElementSize: 8
		TEnumAsByte<ERelativeTransformSpace> SocketSpace;			//Offset: 32 | ElementSize: 1
		struct FVector OffsetInBoneSpace;			//Offset: 36 | ElementSize: 12
		struct FPositionHistory History;			//Offset: 48 | ElementSize: 48
		int32_t NumberOfSamples;			//Offset: 96 | ElementSize: 4
		float VelocityMin;			//Offset: 100 | ElementSize: 4
		float VelocityMax;			//Offset: 104 | ElementSize: 4
		EEasingFuncType EasingType;			//Offset: 108 | ElementSize: 1
		struct FRuntimeFloatCurve CustomCurve;			//Offset: 112 | ElementSize: 136
		float ReturnValue;			//Offset: 248 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Component = Component;
	params.SocketOrBoneName = SocketOrBoneName;
	params.ReferenceSocketOrBone = ReferenceSocketOrBone;
	params.SocketSpace = SocketSpace;
	params.OffsetInBoneSpace = OffsetInBoneSpace;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;
	params.EasingType = EasingType;
	params.CustomCurve = CustomCurve;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (History != nullptr)
		*History = params.History;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Component	Type: class USkeletalMeshComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketOrBoneNameFrom	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketOrBoneNameTo	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");

	struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params {
		class USkeletalMeshComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FName SocketOrBoneNameFrom;			//Offset: 8 | ElementSize: 8
		struct FName SocketOrBoneNameTo;			//Offset: 16 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 24 | ElementSize: 12
	};
	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;
	params.Component = Component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Component	Type: class USkeletalMeshComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketOrBoneNameA	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketSpaceA	Type: TEnumAsByte<ERelativeTransformSpace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketOrBoneNameB	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketSpaceB	Type: TEnumAsByte<ERelativeTransformSpace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRemapRange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRangeMin	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRangeMax	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRangeMin	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRangeMax	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, struct FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");

	struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params {
		class USkeletalMeshComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FName SocketOrBoneNameA;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<ERelativeTransformSpace> SocketSpaceA;			//Offset: 16 | ElementSize: 1
		struct FName SocketOrBoneNameB;			//Offset: 20 | ElementSize: 8
		TEnumAsByte<ERelativeTransformSpace> SocketSpaceB;			//Offset: 28 | ElementSize: 1
		bool bRemapRange;			//Offset: 29 | ElementSize: 1
		float InRangeMin;			//Offset: 32 | ElementSize: 4
		float InRangeMax;			//Offset: 36 | ElementSize: 4
		float OutRangeMin;			//Offset: 40 | ElementSize: 4
		float OutRangeMax;			//Offset: 44 | ElementSize: 4
		float ReturnValue;			//Offset: 48 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;
	params.Component = Component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: bLog	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LogPrefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, struct FString LogPrefix) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");

	struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params {
		bool bLog;			//Offset: 0 | ElementSize: 1
		struct FString LogPrefix;			//Offset: 8 | ElementSize: 16
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_EndProfilingTimer_Params params;
	params.bLog = bLog;
	params.LogPrefix = LogPrefix;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: CurrentTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TargetPosition	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookAtVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseUpVector	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: upvector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClampConeInDegree	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector upvector, float ClampConeInDegree) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	struct UKismetAnimationLibrary_K2_LookAt_Params {
		struct FTransform CurrentTransform;			//Offset: 0 | ElementSize: 48
		struct FVector TargetPosition;			//Offset: 48 | ElementSize: 12
		struct FVector LookAtVector;			//Offset: 60 | ElementSize: 12
		bool bUseUpVector;			//Offset: 72 | ElementSize: 1
		struct FVector upvector;			//Offset: 76 | ElementSize: 12
		float ClampConeInDegree;			//Offset: 88 | ElementSize: 4
		struct FTransform ReturnValue;			//Offset: 96 | ElementSize: 48
	};
	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.upvector = upvector;
	params.ClampConeInDegree = ClampConeInDegree;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMin	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMax	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");

	struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		float RangeOutMin;			//Offset: 4 | ElementSize: 4
		float RangeOutMax;			//Offset: 8 | ElementSize: 4
		float ReturnValue;			//Offset: 12 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;
	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: X	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMinX	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMaxX	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMinY	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMaxY	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMinZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RangeOutMaxZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");

	struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params {
		float X;			//Offset: 0 | ElementSize: 4
		float Y;			//Offset: 4 | ElementSize: 4
		float Z;			//Offset: 8 | ElementSize: 4
		float RangeOutMinX;			//Offset: 12 | ElementSize: 4
		float RangeOutMaxX;			//Offset: 16 | ElementSize: 4
		float RangeOutMinY;			//Offset: 20 | ElementSize: 4
		float RangeOutMaxY;			//Offset: 24 | ElementSize: 4
		float RangeOutMinZ;			//Offset: 28 | ElementSize: 4
		float RangeOutMaxZ;			//Offset: 32 | ElementSize: 4
		struct FVector ReturnValue;			//Offset: 36 | ElementSize: 12
	};
	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

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
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetAnimationLibrary::K2_StartProfilingTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");

	struct UKismetAnimationLibrary_K2_StartProfilingTimer_Params {
	};
	UKismetAnimationLibrary_K2_StartProfilingTimer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: RootPos	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: JointPos	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndPos	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: JointTarget	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Effector	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutJointPos	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutEndPos	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllowStretching	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartStretchRatio	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaxStretchScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	struct UKismetAnimationLibrary_K2_TwoBoneIK_Params {
		struct FVector RootPos;			//Offset: 0 | ElementSize: 12
		struct FVector JointPos;			//Offset: 12 | ElementSize: 12
		struct FVector EndPos;			//Offset: 24 | ElementSize: 12
		struct FVector JointTarget;			//Offset: 36 | ElementSize: 12
		struct FVector Effector;			//Offset: 48 | ElementSize: 12
		struct FVector OutJointPos;			//Offset: 60 | ElementSize: 12
		struct FVector OutEndPos;			//Offset: 72 | ElementSize: 12
		bool bAllowStretching;			//Offset: 84 | ElementSize: 1
		float StartStretchRatio;			//Offset: 88 | ElementSize: 4
		float MaxStretchScale;			//Offset: 92 | ElementSize: 4
	};
	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}

#pragma endregion
}