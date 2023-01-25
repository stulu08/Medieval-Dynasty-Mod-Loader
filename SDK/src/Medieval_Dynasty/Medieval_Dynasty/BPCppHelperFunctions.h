#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BPCppHelperFunctions
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPCppHelperFunctions : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppHelperFunctions");
		return ptr;
	}

#pragma region Functions
	static bool AdjustTeleportLocation(const class AActor* TestActor, struct FVector* PlaceLocation, struct FRotator PlaceRotation);

	static float AngleBetweenCameraAndActor(const class APlayerCameraManager* PlayerCameraMan, class AActor* Actor);

	static bool Array_Empty(const TArray<int32_t>& TargetArray);

	static void CalculateDistanceForDisplay(class ACharacter* ownerComponent, float closeRadiusForDisplay, float mediumRadiusForDisplay, float farRadiusForDisplay, float activeRadius, float viewDistanceScale, bool ignoreRenderVisibility, float* Distance, int32_t* optimizationStage);

	static void CheckAnotherAppInstance(bool IsEnabled);

	static void CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target);

	static void CopyCurves(class UAnimSequence* Source, class UAnimSequence* Target, bool overwriteIfExists);

	static class UAnimMontage* CreateMontageCopyWithNewSlot(class UAnimMontage* MontageToCopy, struct FName SlotNodeName, int32_t SlotIndex);

	static int64_t FStrToInt64(struct FString String);

	static TEnumAsByte<EAspectRatioAxisConstraint> GetCurrentAspectRatioConstraint(class APlayerController* Controller);

	static bool GetFiles(TArray<struct FString>* Files, struct FString RootFolderFullPath, struct FString Ext, TArray<struct FString> FileNameFilters, TArray<struct FString> FilesToExclude, int32_t UserID);

	static int64_t GetFileSize(struct FString Filename);

	static struct FName GetOnlineSubsystem(class UObject* InWorldContextObject);

	static EMD_SpecificPlatform GetPlatformType();

	static float GetSectionPosition(class UAnimMontage* Montage, struct FName SectionName);

	static void GroundedRotation(class ACharacter* Character, bool IsMoving, bool lookInVelocityDirection, bool isAiming, bool isFirstPerson, struct FRotator currentLookingRotation, struct FRotator lastVelocityRotation, bool hasMovementInput, struct FRotator lastMovementInputRotation, float aimYawDelta, ECardinalDirection currentCardinalDirection, float currentRotationOffset, EGait gait, struct FVector Velocity, float currentRotationRateMultiplier, bool* shouldChangeRotation, struct FRotator* TargetRotation, bool* interpRotation, float* interpSpeed, ECardinalDirection* cardinalDirection, float* RotationOffset, float* rotationRateMultiplier);

	static void InitSaveModule();

	static struct FString Int64ToFStr(int64_t Value);

	static void KillGameInstance();

	static void SaveKeyMappingsNoSort(class UInputSettings* Target);

	static void SetActorName(class UObject* Object, struct FString DisplayName);

	static void SetAnimalRotation(class UCharacterMovementComponent* CharacterMovement, class AController* controllerReference, struct FRotator currentAnimalRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, struct FRotator* animalRotation);

	static void SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, const TMap<int32_t, int32_t> LodToSkipSettings);

	static void SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, const TArray<float> ScreenSizes);

	static void SetCharacterRotation(class UCharacterMovementComponent* CharacterMovement, struct FRotator currentCharacterRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, bool useControllerRotationYaw, struct FRotator* characterRotation, float* rotationDifference);

	static void SetCurrentAspectRatioConstraint(class APlayerController* Controller, const TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode);

	static bool SetMinimumLODForPlatforms(class UStaticMesh* Mesh, const TMap<struct FName, int32_t> PerPlatformMinLods);

	static bool SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, const TMap<struct FName, int32_t> PerPlatformMinLods);

	static void SetUnfocusedVolumeMultiplier(float Multiplier);

	static void UpdateCharacterMovementSettings(class UCharacterMovementComponent* CharacterMovement, EStance stance, EGait gait, bool isInWater, bool isAiming, float randomSpeedMultiplier, float slopeSpeedMultiplier, float inWaterIntensity, float WalkingSpeed, float runningSpeed, float sprintingSpeed, float crouchingSpeed, float WalkingAcceleration, float runningAcceleration, float walkingDeceleration, float runningDeceleration, float walkingGroundFriction, float runningGroundFriction);

	static void UpdateMontageSlot(class UAnimMontage* Montage, struct FName SlotName, int32_t SlotIndex);

#pragma endregion
};
};