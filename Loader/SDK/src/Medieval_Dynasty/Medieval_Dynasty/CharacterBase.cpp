#include "../SDK.h"
#include "CharacterBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CurrentCharacterPresetsIDs
// Declaration: struct FST_PresetsIDs CurrentCharacterPresetsIDs
struct FST_PresetsIDs ACharacterBase::M_GetCurrentCharacterPresetsIDs() const {
	return Read<struct FST_PresetsIDs>((byte*)this + 1216);
}
struct FST_PresetsIDs* ACharacterBase::M_PtrGetCurrentCharacterPresetsIDs() {
	return reinterpret_cast<struct FST_PresetsIDs*>((byte*)this + 1216);
}
void ACharacterBase::M_SetCurrentCharacterPresetsIDs(const struct FST_PresetsIDs& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of bIsInDialogue
// Declaration: bool bIsInDialogue
bool ACharacterBase::M_GetbIsInDialogue() const {
	return Read<bool>((byte*)this + 1228);
}
bool* ACharacterBase::M_PtrGetbIsInDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 1228);
}
void ACharacterBase::M_SetbIsInDialogue(const bool& value) {
	Write((byte*)this + 1228, value);
}
// Member Getter and Setter of MontagesForReplication
// Declaration: TArray<struct FMontageDataForRep> MontagesForReplication
TArray<struct FMontageDataForRep> ACharacterBase::M_GetMontagesForReplication() const {
	return Read<TArray<struct FMontageDataForRep>>((byte*)this + 1232);
}
TArray<struct FMontageDataForRep>* ACharacterBase::M_PtrGetMontagesForReplication() {
	return reinterpret_cast<TArray<struct FMontageDataForRep>*>((byte*)this + 1232);
}
void ACharacterBase::M_SetMontagesForReplication(const TArray<struct FMontageDataForRep>& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of bMontagesUpdated
// Declaration: bool bMontagesUpdated
bool ACharacterBase::M_GetbMontagesUpdated() const {
	return Read<bool>((byte*)this + 1248);
}
bool* ACharacterBase::M_PtrGetbMontagesUpdated() {
	return reinterpret_cast<bool*>((byte*)this + 1248);
}
void ACharacterBase::M_SetbMontagesUpdated(const bool& value) {
	Write((byte*)this + 1248, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateDamageToReceive
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: appliedDamage	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hits	Type: TArray<struct FHitResult>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float ACharacterBase::CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateDamageToReceive");

	struct ACharacterBase_CalculateDamageToReceive_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		TArray<struct FHitResult> hits;			//Offset: 16 | ElementSize: 16
		class AController* damageInstigator;			//Offset: 32 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 40 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 48 | ElementSize: 8
		float ReturnValue;			//Offset: 56 | ElementSize: 4
	};
	ACharacterBase_CalculateDamageToReceive_Params params;
	params.appliedDamage = appliedDamage;
	params.hitFromDirection = hitFromDirection;
	params.hits = hits;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CheckAvailabilityOfLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: checkLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: actorToIgnore	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector ACharacterBase::CheckAvailabilityOfLocation(struct FVector checkLocation, class AActor* actorToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CheckAvailabilityOfLocation");

	struct ACharacterBase_CheckAvailabilityOfLocation_Params {
		struct FVector checkLocation;			//Offset: 0 | ElementSize: 12
		class AActor* actorToIgnore;			//Offset: 16 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 24 | ElementSize: 12
	};
	ACharacterBase_CheckAvailabilityOfLocation_Params params;
	params.checkLocation = checkLocation;
	params.actorToIgnore = actorToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.OnBeforePointDamageApplied
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: damageToApply	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::OnBeforePointDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const struct FHitResult& Hit, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.OnBeforePointDamageApplied");

	struct ACharacterBase_OnBeforePointDamageApplied_Params {
		float damageToApply;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 16 | ElementSize: 136
		class AController* damageInstigator;			//Offset: 152 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 160 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 168 | ElementSize: 8
	};
	ACharacterBase_OnBeforePointDamageApplied_Params params;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.OnBeforeRadialDamageApplied
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: damageToApply	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hits	Type: TArray<struct FHitResult>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::OnBeforeRadialDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.OnBeforeRadialDamageApplied");

	struct ACharacterBase_OnBeforeRadialDamageApplied_Params {
		float damageToApply;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		TArray<struct FHitResult> hits;			//Offset: 16 | ElementSize: 16
		class AController* damageInstigator;			//Offset: 32 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 40 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 48 | ElementSize: 8
	};
	ACharacterBase_OnBeforeRadialDamageApplied_Params params;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.hits = hits;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.OnIsInDialogueUpdated
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacterBase::OnIsInDialogueUpdated() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.OnIsInDialogueUpdated");

	struct ACharacterBase_OnIsInDialogueUpdated_Params {
	};
	ACharacterBase_OnIsInDialogueUpdated_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.OnRep_CurrentCharacterPresetsIDs
// Flags: Native, Event, Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacterBase::OnRep_CurrentCharacterPresetsIDs() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.OnRep_CurrentCharacterPresetsIDs");

	struct ACharacterBase_OnRep_CurrentCharacterPresetsIDs_Params {
	};
	ACharacterBase_OnRep_CurrentCharacterPresetsIDs_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.OnRepIsInDialogue
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacterBase::OnRepIsInDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.OnRepIsInDialogue");

	struct ACharacterBase_OnRepIsInDialogue_Params {
	};
	ACharacterBase_OnRepIsInDialogue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.RemoveMontageFromMontagesForReplication
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: montageToRemove	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::RemoveMontageFromMontagesForReplication(class UAnimMontage* montageToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.RemoveMontageFromMontagesForReplication");

	struct ACharacterBase_RemoveMontageFromMontagesForReplication_Params {
		class UAnimMontage* montageToRemove;			//Offset: 0 | ElementSize: 8
	};
	ACharacterBase_RemoveMontageFromMontagesForReplication_Params params;
	params.montageToRemove = montageToRemove;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.SetCurrentCharacterPresetsIDs
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: MeshesRowNameID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BasePresetID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfessionPresetID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::SetCurrentCharacterPresetsIDs(int32_t MeshesRowNameID, int32_t BasePresetID, int32_t ProfessionPresetID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.SetCurrentCharacterPresetsIDs");

	struct ACharacterBase_SetCurrentCharacterPresetsIDs_Params {
		int32_t MeshesRowNameID;			//Offset: 0 | ElementSize: 4
		int32_t BasePresetID;			//Offset: 4 | ElementSize: 4
		int32_t ProfessionPresetID;			//Offset: 8 | ElementSize: 4
	};
	ACharacterBase_SetCurrentCharacterPresetsIDs_Params params;
	params.MeshesRowNameID = MeshesRowNameID;
	params.BasePresetID = BasePresetID;
	params.ProfessionPresetID = ProfessionPresetID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.SetIsInDialogue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newIsInDialogue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::SetIsInDialogue(bool newIsInDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.SetIsInDialogue");

	struct ACharacterBase_SetIsInDialogue_Params {
		bool newIsInDialogue;			//Offset: 0 | ElementSize: 1
	};
	ACharacterBase_SetIsInDialogue_Params params;
	params.newIsInDialogue = newIsInDialogue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.UpdateCharacterMovementSettings
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
// Name: stance	Type: EStance	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: gait	Type: EGait	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isInWater	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isAiming	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: randomSpeedMultiplier	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: slopeSpeedMultiplier	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inWaterSpeedMultiplier	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WalkingSpeed	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningSpeed	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: sprintingSpeed	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: crouchingSpeed	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WalkingAcceleration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningAcceleration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: walkingDeceleration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningDeceleration	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: walkingGroundFriction	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningGroundFriction	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::UpdateCharacterMovementSettings(EStance stance, EGait gait, bool isInWater, bool isAiming, float randomSpeedMultiplier, float slopeSpeedMultiplier, float inWaterSpeedMultiplier, float WalkingSpeed, float runningSpeed, float sprintingSpeed, float crouchingSpeed, float WalkingAcceleration, float runningAcceleration, float walkingDeceleration, float runningDeceleration, float walkingGroundFriction, float runningGroundFriction) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.UpdateCharacterMovementSettings");

	struct ACharacterBase_UpdateCharacterMovementSettings_Params {
		EStance stance;			//Offset: 0 | ElementSize: 1
		EGait gait;			//Offset: 1 | ElementSize: 1
		bool isInWater;			//Offset: 2 | ElementSize: 1
		bool isAiming;			//Offset: 3 | ElementSize: 1
		float randomSpeedMultiplier;			//Offset: 4 | ElementSize: 4
		float slopeSpeedMultiplier;			//Offset: 8 | ElementSize: 4
		float inWaterSpeedMultiplier;			//Offset: 12 | ElementSize: 4
		float WalkingSpeed;			//Offset: 16 | ElementSize: 4
		float runningSpeed;			//Offset: 20 | ElementSize: 4
		float sprintingSpeed;			//Offset: 24 | ElementSize: 4
		float crouchingSpeed;			//Offset: 28 | ElementSize: 4
		float WalkingAcceleration;			//Offset: 32 | ElementSize: 4
		float runningAcceleration;			//Offset: 36 | ElementSize: 4
		float walkingDeceleration;			//Offset: 40 | ElementSize: 4
		float runningDeceleration;			//Offset: 44 | ElementSize: 4
		float walkingGroundFriction;			//Offset: 48 | ElementSize: 4
		float runningGroundFriction;			//Offset: 52 | ElementSize: 4
	};
	ACharacterBase_UpdateCharacterMovementSettings_Params params;
	params.stance = stance;
	params.gait = gait;
	params.isInWater = isInWater;
	params.isAiming = isAiming;
	params.randomSpeedMultiplier = randomSpeedMultiplier;
	params.slopeSpeedMultiplier = slopeSpeedMultiplier;
	params.inWaterSpeedMultiplier = inWaterSpeedMultiplier;
	params.WalkingSpeed = WalkingSpeed;
	params.runningSpeed = runningSpeed;
	params.sprintingSpeed = sprintingSpeed;
	params.crouchingSpeed = crouchingSpeed;
	params.WalkingAcceleration = WalkingAcceleration;
	params.runningAcceleration = runningAcceleration;
	params.walkingDeceleration = walkingDeceleration;
	params.runningDeceleration = runningDeceleration;
	params.walkingGroundFriction = walkingGroundFriction;
	params.runningGroundFriction = runningGroundFriction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.UpdateMontagesData
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacterBase::UpdateMontagesData() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.UpdateMontagesData");

	struct ACharacterBase_UpdateMontagesData_Params {
	};
	ACharacterBase_UpdateMontagesData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}