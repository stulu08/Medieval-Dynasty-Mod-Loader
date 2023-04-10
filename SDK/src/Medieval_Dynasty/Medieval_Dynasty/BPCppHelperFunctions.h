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

	static float AngleBetweenCameraAndActor(class APlayerCameraManager* PlayerCameraMan, class AActor* Actor);

	static bool Array_Empty(const TArray<int32_t>& TargetArray);

	static void CheckAnotherAppInstance(bool IsEnabled);

	static struct FVector CheckIsBuilding(class UObject* WorldContextObject, struct FVector actorLocation, struct FVector checkLocation, struct FVector Destination, float capsuleRadius, float CapsuleHalfHeight);

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

	static void InitSaveModule();

	static struct FString Int64ToFStr(int64_t Value);

	static void IsInCameraRange(class USceneComponent* SceneComponent, float Range, bool* IsInRange);

	static void KillGameInstance();

	static void SaveKeyMappingsNoSort(class UInputSettings* Target);

	static void SetActorName(class UObject* Object, struct FString DisplayName);

	static void SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, TMap<int32_t, int32_t> LodToSkipSettings);

	static void SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, TArray<float> ScreenSizes);

	static void SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode);

	static bool SetMinimumLODForPlatforms(class UStaticMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods);

	static bool SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods);

	static void SetUnfocusedVolumeMultiplier(float Multiplier);

	static void UpdateMontageSlot(class UAnimMontage* Montage, struct FName SlotName, int32_t SlotIndex);

#pragma endregion
};
};