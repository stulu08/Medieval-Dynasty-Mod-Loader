#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_BaseCharacter.BPI_BaseCharacter_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_BaseCharacter_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BaseCharacter.BPI_BaseCharacter_C");
		return ptr;
	}

#pragma region Functions
	void Set_ALS_Gait_BPI(TEnumAsByte<E_Gait> ALS_Gait);

	void Set_ALS_Stance_BPI(TEnumAsByte<E_Stance> ALS_Stance);

	void Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI);

	void Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode> ALS_MovementMode, bool Force);

	void AnimNotify_Pivot_BPI(struct FST_PivotParams PivotParams);

	void AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight);

	void AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState> IdleEntryState);

	void Set_ALS_Aiming_BPI(bool Aiming);

	void Play_GetUp_Anim_BPI(bool FaceDown);

	void SavePoseSnapshot_BPI(struct FName PoseName);

	void AddCharacterRotation_BPI(struct FRotator AddAmount);

	void Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode> ViewMode);

	void ShowTraces_BPI(bool ShowTraces);

	void Set_WalkingSpeed_BPI(float WalkingSpeed);

	void Set_RunningSpeed_BPI(float runningSpeed);

	void Set_SprintingSpeed_BPI(float sprintingSpeed);

	void Set_CrouchingSpeed_BPI(float crouchingSpeed);

	void Set_RF_BPI(bool RF);

	void HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID);

	void CancelAnimationLoops();

	void SetToolType_BPI(TEnumAsByte<E_Tools> ToolType);

	void Get_ALS_Stance_BPI(TEnumAsByte<E_Stance>* stance);

	void AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, struct FName LeftHandSocketName, struct FName RightHandSocketName);

	void ChangeAnimLoopState(bool IsLooping);

	void AnimNotify_StartSnappingIK();

	void AnimNotify_StopSnappingIK();

	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void HoldableHitAction(struct FST_MontagesSettingsArray Action_Montage_Settings, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage);

	void Set_Range_Strength(float Strength);

	void SetStrengthAlpha(float Alpha);

	void OverrideCanPerfromHitAction(bool CanPerfromHitAction);

	void PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);

	void PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage);

	void GetIsAnyMontageFromMapPlaying(bool* Return_Value);

	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes> Montage_Type);

	void PlayerLookAt(class AActor* Target, struct FVector TargetLocation);

	void AnimNotify_StopRotation(bool StopRotationInput);

	void AnimNotify_StopMovement(bool bStopMovementInput);

	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, bool CancelAnimation);

	void AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffHand);

	void AnimNotify_DespawnAnimItem(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn);

	void AnimNotify_HolsterWeapon();

	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings);

	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState);

	void GetProfession(TEnumAsByte<E_Profession>* Profession);

	void GetHeadTransform(struct FTransform* HeadTransform);

	void PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, float* Duration, float* TakeOutDuration);

	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim);

	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops);

	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void SetIsInWater(bool InWater, float Intensity);

	void GetBaseCharacterWorldLocation(struct FVector* Location);

	void StopHolsterAnimation(float BlendOutTime);

	void WaitForCrafting();

	void ForceStanding();

	void AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject> ObjectToNotify, struct FName NotifyName);

	void Knockback(struct FVector KnockbackDirection, float KnockbackStrength);

	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose);

	void OnDeath();

	void GetIsInDialogue_BPI(bool* IsInDialogue);

	void Set_Caught_Prey_BPI(bool CaughtPrey);

	void GetProfessionData(struct FST_Profession* ProfessionData);

	void PlayMountAnimation(EMountingDirection Position, TEnumAsByte<E_MountAnimType> Type, bool* Success);

	void PlayMountStopAnimation(int32_t AnimIndex);

	void PlayMountSpecial();

	void UpdateIKAlpha(float Alpha, bool Enabled);

	void SetProfessionData(struct FST_Profession ProfessionData);

	void SetEnableIK_BPI(bool IK_Enabled);

	void SetMountAnimalType_BPI(TEnumAsByte<E_AnimalType> MountAnimalType);

	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);

	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);

	void UpdateCraftingNumbers_BPI(int32_t ToCraft, int32_t CurrentCraft, float CraftTime);

	void GetAnimalRepelStat_BPI(bool* AnimalRepel);

	void PlayAttackAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void PlayDodgeAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, TEnumAsByte<E_AnimDirection> Direction, TEnumAsByte<E_AnimMovement> Movement, float* Duration);

	void PlayBlockAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void PlayHitAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType);

	void SetBlocking_BPI(bool Blocking);

	void GetIsBlocking_BPI(bool* Blocking);

	void GetCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, bool FastAnim, class UAnimMontage** CraftingMontage, float* Duration, float* Loop, float* LoopWait, float* LoopEnd);

	void PoisonCharacter(float Poison);

	void GetCurrentCraftingMontage(class UAnimMontage** CraftingMontage);

	void GetCharacterOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void GetMountMovementMode_BPI(TEnumAsByte<E_MovementMode> MountMovementMode);

	void SetCharacterMovementActive(bool IsActive, bool IsIKActive);

	void GetEnableIK_BPI(bool* IK_Enabled);

	void GetMass(float* Value);

	void GetTime(struct FST_Time* Time);

	void CanPushOthers(bool* CanPushOthers);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void IsMoving_BPI(bool* IsMoving);

	void Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName);

	void PlayPushAnimation(float PlayRate, int32_t animationId, float* Duration);

	void IncreaseTechnology_BPI(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value);

	void GetCharacterStamina_BPI(float* Stamina, float* MaxStamina);

	void GetCharacterHealth_BPI(float* Health, float* MaxHealth);

	void CharacterAddSkills_BPI(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings);

	void DecreaseStamina_BPI(float Stamina, bool Dirtiness, bool* Enough);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

#pragma endregion
};
};