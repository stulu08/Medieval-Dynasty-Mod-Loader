#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BPCppAnimOperations
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPCppAnimOperations : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppAnimOperations");
		return ptr;
	}

#pragma region Functions
	static void ActivateMontageData(class UObject* InWorldContextObject, class UAnimInstance* AnimInst, TArray<struct FMontageDataForRep> MontageData);

	static float CalculateMontagePositionFromRepData(class UObject* InWorldContextObject, struct FMontageDataForRep MontageData);

	static void ChangeMontageBlendTime(class UAnimMontage* Montage, float BlendTime, bool ChangeBlendOut);

	static void CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target);

	static void CopyCurves(class UAnimSequence* sourceAnimationSequence, class UAnimSequence* targetAnimationSequence, bool shouldOverwriteExistingCurves);

	static class UAnimMontage* CreateMontageCopyWithNewSlot(class UAnimMontage* MontageToCopy, struct FName SlotNodeName, int32_t SlotIndex);

	static bool DoesGivenSectionExist(class UAnimMontage* Montage, struct FName SectionName);

	static TArray<struct FMontageDataForRep> GatherMontageData(class UObject* InWorldContextObject, class UAnimInstance* AnimInst);

	static TArray<struct FMontageDataForRep> GatherMontageDataForSlots(class UObject* InWorldContextObject, class UAnimInstance* AnimInst, TArray<struct FName> Slots);

	static class UAnimMontage* GetActiveMontageForSlot(class UAnimInstance* AnimInst, struct FName AnimSlot);

	static TArray<class UAnimMontage*> GetAllActiveMontages(class UAnimInstance* AnimInst);

	static void GetAnimMetaData(class UAnimationAsset* Animation, const TArray<class UAnimMetaData*> MetaData, bool* IsValid);

	static class UAnimMetaData* GetAnimMetaDataSpecific(class UAnimationAsset* Animation, class UObject* SearchedClass, bool* IsValid);

	static float GetSectionPosition(class UAnimMontage* Montage, struct FName SectionName);

	static bool IsAnyMontagePlayingOnGivenSlot(class UAnimInstance* AnimInstance, struct FName SlotName);

	static void RemoveBoneAnimations(TArray<class UAnimSequence*> animationSequences, const TArray<struct FName>& BoneNames, bool includeChildren, bool keepParent, bool postProcessAnimationSequence);

	static void UpdateMontageSlot(class UAnimMontage* Montage, struct FName SlotName, int32_t SlotIndex);

#pragma endregion
};
};