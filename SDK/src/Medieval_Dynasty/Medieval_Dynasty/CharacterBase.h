#pragma once
#include "Structs.h"
#include "Engine/Character.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CharacterBase
// Super: Class Engine.Character
// Size: 1264
// Size inherited: 1216
/////////////////////////////////////////////
namespace UE4 {
class ACharacterBase : public ACharacter {
public:
#pragma region Members
	//struct FST_PresetsIDs	CurrentCharacterPresetsIDs;		//Offset: 1216	Size: 12	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FST_PresetsIDs M_GetCurrentCharacterPresetsIDs() const;
	struct FST_PresetsIDs* M_PtrGetCurrentCharacterPresetsIDs();
	void M_SetCurrentCharacterPresetsIDs(const struct FST_PresetsIDs& value);

	//bool	bIsInDialogue;		//Offset: 1228	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsInDialogue() const;
	bool* M_PtrGetbIsInDialogue();
	void M_SetbIsInDialogue(const bool& value);

	//TArray<struct FMontageDataForRep>	MontagesForReplication;		//Offset: 1232	Size: 16	Flags: BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FMontageDataForRep> M_GetMontagesForReplication() const;
	TArray<struct FMontageDataForRep>* M_PtrGetMontagesForReplication();
	void M_SetMontagesForReplication(const TArray<struct FMontageDataForRep>& value);

	//bool	bMontagesUpdated;		//Offset: 1248	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMontagesUpdated() const;
	bool* M_PtrGetbMontagesUpdated();
	void M_SetbMontagesUpdated(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CharacterBase");
		return ptr;
	}

#pragma region Functions
	float CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	struct FVector CheckAvailabilityOfLocation(struct FVector checkLocation, class AActor* actorToIgnore);

	void OnBeforePointDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const struct FHitResult& Hit, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void OnBeforeRadialDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void OnIsInDialogueUpdated();

	void OnRep_CurrentCharacterPresetsIDs();

	void OnRepIsInDialogue();

	void RemoveMontageFromMontagesForReplication(class UAnimMontage* montageToRemove);

	void SetCurrentCharacterPresetsIDs(int32_t MeshesRowNameID, int32_t BasePresetID, int32_t ProfessionPresetID);

	void SetIsInDialogue(bool newIsInDialogue);

	void UpdateCharacterMovementSettings(EStance stance, EGait gait, bool isInWater, bool isAiming, float randomSpeedMultiplier, float slopeSpeedMultiplier, float inWaterSpeedMultiplier, float WalkingSpeed, float runningSpeed, float sprintingSpeed, float crouchingSpeed, float WalkingAcceleration, float runningAcceleration, float walkingDeceleration, float runningDeceleration, float walkingGroundFriction, float runningGroundFriction);

	void UpdateMontagesData();

#pragma endregion
};
};