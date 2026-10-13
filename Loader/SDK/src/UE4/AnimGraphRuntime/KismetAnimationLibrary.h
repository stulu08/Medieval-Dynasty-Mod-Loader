#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class AnimGraphRuntime.KismetAnimationLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}

#pragma region Functions
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);

	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);

	static struct FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo);

	static float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, struct FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);

	static float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix);

	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector upvector, float ClampConeInDegree);

	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);

	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);

	static void K2_StartProfilingTimer();

	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);

#pragma endregion
};
};