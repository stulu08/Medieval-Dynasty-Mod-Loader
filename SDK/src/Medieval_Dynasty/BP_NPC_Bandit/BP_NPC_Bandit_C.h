#pragma once
#include "Structs.h"
#include "BP_NPC/BP_NPC_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC_Bandit.BP_NPC_Bandit_C
// Super: BlueprintGeneratedClass BP_NPC.BP_NPC_C
// Size: 7744
// Size inherited: 7569
/////////////////////////////////////////////
namespace UE4 {
class ABP_NPC_Bandit_C : public ABP_NPC_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 7576	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class AActor*	DamageCauser;		//Offset: 7584	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetDamageCauser() const;
	class AActor** M_PtrGetDamageCauser();
	void M_SetDamageCauser(const class AActor*& value);

	//struct FTimerHandle	HitTimer;		//Offset: 7592	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetHitTimer() const;
	struct FTimerHandle* M_PtrGetHitTimer();
	void M_SetHitTimer(const struct FTimerHandle& value);

	//struct FVector	HitLocation;		//Offset: 7600	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetHitLocation() const;
	struct FVector* M_PtrGetHitLocation();
	void M_SetHitLocation(const struct FVector& value);

	//struct FName	HitBoneName;		//Offset: 7612	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetHitBoneName() const;
	struct FName* M_PtrGetHitBoneName();
	void M_SetHitBoneName(const struct FName& value);

	//struct FVector	ShotDirection;		//Offset: 7620	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetShotDirection() const;
	struct FVector* M_PtrGetShotDirection();
	void M_SetShotDirection(const struct FVector& value);

	//struct FTimerHandle	SplatTimer;		//Offset: 7632	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetSplatTimer() const;
	struct FTimerHandle* M_PtrGetSplatTimer();
	void M_SetSplatTimer(const struct FTimerHandle& value);

	//struct FDateTime	Time;		//Offset: 7640	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FDateTime M_GetTime() const;
	struct FDateTime* M_PtrGetTime();
	void M_SetTime(const struct FDateTime& value);

	//int32_t	SplatTime;		//Offset: 7648	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSplatTime() const;
	int32_t* M_PtrGetSplatTime();
	void M_SetSplatTime(const int32_t& value);

	//TArray<struct FName>	HitBoneNames;		//Offset: 7656	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetHitBoneNames() const;
	TArray<struct FName>* M_PtrGetHitBoneNames();
	void M_SetHitBoneNames(const TArray<struct FName>& value);

	//bool	CanHit;		//Offset: 7672	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanHit() const;
	bool* M_PtrGetCanHit();
	void M_SetCanHit(const bool& value);

	//bool	CanAvoid;		//Offset: 7673	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanAvoid() const;
	bool* M_PtrGetCanAvoid();
	void M_SetCanAvoid(const bool& value);

	//TEnumAsByte<E_AnimDirection>	AvoidDirection;		//Offset: 7674	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimDirection> M_GetAvoidDirection() const;
	TEnumAsByte<E_AnimDirection>* M_PtrGetAvoidDirection();
	void M_SetAvoidDirection(const TEnumAsByte<E_AnimDirection>& value);

	//TEnumAsByte<E_AnimMovement>	AvoidMovement;		//Offset: 7675	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimMovement> M_GetAvoidMovement() const;
	TEnumAsByte<E_AnimMovement>* M_PtrGetAvoidMovement();
	void M_SetAvoidMovement(const TEnumAsByte<E_AnimMovement>& value);

	//float	TakeDamageMultiplier;		//Offset: 7676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTakeDamageMultiplier() const;
	float* M_PtrGetTakeDamageMultiplier();
	void M_SetTakeDamageMultiplier(const float& value);

	//bool	StopSimulatingRagdoll;		//Offset: 7680	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopSimulatingRagdoll() const;
	bool* M_PtrGetStopSimulatingRagdoll();
	void M_SetStopSimulatingRagdoll(const bool& value);

	//struct FTimerHandle	RagdollTimer;		//Offset: 7688	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetRagdollTimer() const;
	struct FTimerHandle* M_PtrGetRagdollTimer();
	void M_SetRagdollTimer(const struct FTimerHandle& value);

	//bool	DamageTooSmall;		//Offset: 7696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDamageTooSmall() const;
	bool* M_PtrGetDamageTooSmall();
	void M_SetDamageTooSmall(const bool& value);

	//TAssetPtr<class UParticleSystem>	DamageParticles;		//Offset: 7704	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UParticleSystem> M_GetDamageParticles() const;
	TAssetPtr<class UParticleSystem>* M_PtrGetDamageParticles();
	void M_SetDamageParticles(const TAssetPtr<class UParticleSystem>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Bandit.BP_NPC_Bandit_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_NPC_Bandit(int32_t EntryPoint);

	void AI_SetCanAvoid(bool CanAvoid);

	void AI_SetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection> AvoidDirection, TEnumAsByte<E_AnimMovement> AvoidMovement);

	void OnCombatCauserStarted();

	void SeasonChanged();

	void Ragdoll();

	void DeathPoseDoOnceReset();

	void SnapshotDeathPose();

	void CloseOptimization();

	void NoneOptimization();

	void DisableNPC();

	void FarOptimization();

	void MediumOptimization();

	void AfterHit();

	void bLock();

	void SetBlocking_BPI(bool Blocking);

	void FinalSplat();

	void Splat(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, class UPhysicalMaterial* PhysMat);

	void ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer);

	void SetHitAnim();

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void Init_NPC(bool LoadGame);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void SetRandomInventory();

	void GetBanditBlackboardValues_Boolean(TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean, bool* Boolean_Value);

	void SetBanditBlackboardValues_Boolean(TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean, bool Value);

	void ChooseCharacterVoiceID();

	void AfterDeath();

	void CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice);

	void CheckIfShouldSimulate();

	void SetDamageAndHealth(bool LoadGame);

	void IncreaseReputation();

	void Push_Sounds();

	void AI_GetCanAvoid(bool* CanAvoid);

	void AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement);

	void InheritableComponentHandler();

#pragma endregion
};
};