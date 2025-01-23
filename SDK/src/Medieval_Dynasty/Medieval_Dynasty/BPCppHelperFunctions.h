#pragma once
#include "Structs.h"
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
	static bool AdjustTeleportLocation(class AActor* TestActor, struct FVector* PlaceLocation, struct FRotator PlaceRotation);

	static float AngleBetweenCameraAndActor(class APlayerCameraManager* PlayerCameraManager, class AActor* Actor);

	static float AngleBetweenCameraAndLocation(class APlayerCameraManager* PlayerCameraManager, struct FVector Location);

	static bool Array_Empty(const TArray<int32_t>& TargetArray);

	static void CalculateDistanceForDisplay(class UObject* WorldContextObject, class UActorComponent* ActorComponent, float closeRadiusForDisplay, float mediumRadiusForDisplay, float farRadiusForDisplay, float activeRadius, float viewDistanceScale, bool ignoreRenderVisibility, bool DrawDebugInfo, float* Distance, int32_t* optimizationStage, class AActor** NearestPlayer);

	static bool CapsuleMultiTraceByChannel(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FRotator& Rotation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool shouldTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);

	static void CheckAnotherAppInstance(bool IsEnabled);

	static struct FVector CheckIsBuilding(class UObject* WorldContextObject, struct FVector actorLocation, struct FVector checkLocation, struct FVector Destination, float capsuleRadius, float CapsuleHalfHeight);

	static bool CheckIsRooted(class UObject* WorldContextObject, class UObject* ObjectToCheck);

	static void CopyStringToClipboard(struct FString StringToCopy);

	static void Discombobulate(int32_t firstDigit, int32_t secondDigit, int32_t thirdDigit, int32_t fourthDigit, bool hardMode);

	static void FlushPrintsFromScreen();

	static int64_t FStrToInt64(struct FString String);

	static struct FString GenerateInviteCode(int32_t Length);

	static TEnumAsByte<EAspectRatioAxisConstraint> GetCurrentAspectRatioConstraint(class APlayerController* Controller);

	static struct FName GetDefaultOnlineSubsystem(class UObject* InWorldContextObject);

	static float GetDurationOfLoopingSoundCue(class USoundCue* cue);

	static bool GetFiles(TArray<struct FString>* Files, struct FString RootFolderFullPath, struct FString Ext, TArray<struct FString> FileNameFilters, TArray<struct FString> FilesToExclude, int32_t UserID);

	static int64_t GetFileSize(struct FString Filename);

	static class APlayerController* GetLocalPlayerController(class UObject* WorldContextObject);

	static struct FString GetNativePlatformSubsystem();

	static struct FString GetNativeUniqueNetIdFromDefaultNetId(struct FString NetID);

	static struct FName GetOnlineSubsystem(class UObject* InWorldContextObject);

	static class UObject* GetParentClassOfClass(class UObject* Class);

	static EMD_SpecificPlatform GetPlatformType();

	static int32_t GetPlayerControllerIdByIterator(class UObject* InWorldContextObject, class APlayerController* PlayerController);

	static TArray<struct FString> GetPlayersUniqueNetIdsRepl(class UObject* InWorldContextObject, TArray<struct FName>* PlayerUniquesIdsTypes);

	static struct FString GetPlayerUniqueNetIdRepl(class UObject* InWorldContextObject, class APlayerState* PlayerState, struct FName* PlayerUniqueIdType);

	static class UPhysicalMaterial* GetStaticMeshPhysicalMaterial(class UStaticMesh* StaticMesh);

	static class UWorld* GetWorld(class UObject* WorldContextObject);

	static void GroundedRotation(class ACharacter* Character, bool IsMoving, bool lookInVelocityDirection, bool isAiming, bool isFirstPerson, struct FRotator currentLookingRotation, struct FRotator lastVelocityRotation, bool hasMovementInput, struct FRotator lastMovementInputRotation, float aimYawDelta, ECardinalDirection currentCardinalDirection, float currentRotationOffset, EGait gait, struct FVector Velocity, float currentRotationRateMultiplier, bool* shouldChangeRotation, struct FRotator* TargetRotation, bool* interpRotation, float* interpSpeed, ECardinalDirection* cardinalDirection, float* RotationOffset, float* rotationRateMultiplier);

	static void InitSaveModule();

	static struct FString Int64ToFStr(int64_t Value);

	static bool IsCameraMoveableWhenPaused(class UObject* WorldContextObject);

	static void IsInCameraRangeSquared(class USceneComponent* SceneComponent, float rangeSquared, bool* isInRangeSquared);

	static void KillGameInstance();

	static void LogPieError(class UObject* WorldContextObject, struct FString Message);

	static struct FString PasteStringFromClipboard();

	static void PrintError(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration);

	static void PrintInfo(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration);

	static void PrintWarning(class UObject* WorldContextObject, int32_t indentationLevel, struct FString Message, float Duration);

	static void RecreatePhysicsState(class UActorComponent* ActorComponent);

	static void SaveKeyMappingsNoSort(class UInputSettings* Target);

	static void SetActorName(class UObject* Object, struct FString DisplayName);

	static void SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, TMap<int32_t, int32_t> LodToSkipSettings);

	static void SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, TArray<float> ScreenSizes);

	static void SetCameraMoveableWhenPaused(class UObject* WorldContextObject, bool IsCameraMoveableWhenPaused);

	static void SetCameraRenderingForPlayer(class APlayerController* Player, bool enable);

	static void SetCharacterRotation(class UCharacterMovementComponent* CharacterMovement, struct FRotator currentCharacterRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, bool useControllerRotationYaw, struct FRotator* characterRotation, float* rotationDifference);

	static void SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode);

	static bool SetMinimumLODForPlatforms(class UStaticMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods);

	static bool SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods);

	static void SetNetAdressableHelper(class AActor* ActorToUpdate);

	static void SetNetCullDistanceSquared(class AActor* ActorToUpdate, float NetCullDistanceSquared);

	static void SetUnfocusedVolumeMultiplier(float Multiplier);

	static void TryMe(struct FString Message);

#pragma endregion
};
};