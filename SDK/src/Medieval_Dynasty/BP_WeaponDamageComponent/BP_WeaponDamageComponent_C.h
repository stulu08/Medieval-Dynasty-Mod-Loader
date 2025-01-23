#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_WeaponDamageComponent.BP_WeaponDamageComponent_C
// Super: Class Engine.ActorComponent
// Size: 341
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBP_WeaponDamageComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//bool	isDebugEnabled;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//bool	CanDamageWithoutInterface;		//Offset: 185	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanDamageWithoutInterface() const;
	bool* M_PtrGetCanDamageWithoutInterface();
	void M_SetCanDamageWithoutInterface(const bool& value);

	//float	AttackAngle;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAttackAngle() const;
	float* M_PtrGetAttackAngle();
	void M_SetAttackAngle(const float& value);

	//float	AttackRange;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAttackRange() const;
	float* M_PtrGetAttackRange();
	void M_SetAttackRange(const float& value);

	//float	AttackDamage;		//Offset: 196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAttackDamage() const;
	float* M_PtrGetAttackDamage();
	void M_SetAttackDamage(const float& value);

	//float	DamageReductionPerHitMultiplier;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDamageReductionPerHitMultiplier() const;
	float* M_PtrGetDamageReductionPerHitMultiplier();
	void M_SetDamageReductionPerHitMultiplier(const float& value);

	//class UDamageType*	DamageTypeClass;		//Offset: 208	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	class UDamageType* M_GetDamageTypeClass() const;
	class UDamageType** M_PtrGetDamageTypeClass();
	void M_SetDamageTypeClass(const class UDamageType*& value);

	//struct FVector	DamagePointLocalOffset;		//Offset: 216	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetDamagePointLocalOffset() const;
	struct FVector* M_PtrGetDamagePointLocalOffset();
	void M_SetDamagePointLocalOffset(const struct FVector& value);

	//TArray<class AActor*>	ActorsToIgnore;		//Offset: 232	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetActorsToIgnore() const;
	TArray<class AActor*>* M_PtrGetActorsToIgnore();
	void M_SetActorsToIgnore(const TArray<class AActor*>& value);

	//TArray<struct FName>	ActorTagsToIgnore;		//Offset: 248	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetActorTagsToIgnore() const;
	TArray<struct FName>* M_PtrGetActorTagsToIgnore();
	void M_SetActorTagsToIgnore(const TArray<struct FName>& value);

	//TArray<class AActor*>	DamagedActorsDuringCurrentAttack;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetDamagedActorsDuringCurrentAttack() const;
	TArray<class AActor*>* M_PtrGetDamagedActorsDuringCurrentAttack();
	void M_SetDamagedActorsDuringCurrentAttack(const TArray<class AActor*>& value);

	//float	DamageMultiplier;		//Offset: 280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDamageMultiplier() const;
	float* M_PtrGetDamageMultiplier();
	void M_SetDamageMultiplier(const float& value);

	//struct FVector	WeaponMovementDirection;		//Offset: 284	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetWeaponMovementDirection() const;
	struct FVector* M_PtrGetWeaponMovementDirection();
	void M_SetWeaponMovementDirection(const struct FVector& value);

	//TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>	OnBeforePointDamageApplied;		//Offset: 296	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature> M_GetOnBeforePointDamageApplied() const;
	TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>* M_PtrGetOnBeforePointDamageApplied();
	void M_SetOnBeforePointDamageApplied(const TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>& value);

	//TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>	OnAfterPointDamageApplied;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature> M_GetOnAfterPointDamageApplied() const;
	TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>* M_PtrGetOnAfterPointDamageApplied();
	void M_SetOnAfterPointDamageApplied(const TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>& value);

	//struct FVector	PreviousWeaponLocation;		//Offset: 328	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPreviousWeaponLocation() const;
	struct FVector* M_PtrGetPreviousWeaponLocation();
	void M_SetPreviousWeaponLocation(const struct FVector& value);

	//bool	IsAttackFromLeftToRight;		//Offset: 340	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsAttackFromLeftToRight() const;
	bool* M_PtrGetIsAttackFromLeftToRight();
	void M_SetIsAttackFromLeftToRight(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponDamageComponent.BP_WeaponDamageComponent_C");
		return ptr;
	}

#pragma region Functions
	void OnAfterPointDamageApplied__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void OnBeforePointDamageApplied__DelegateSignature(class AActor* ActorToDamage, float damageToApply, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void ExecuteUbergraph_BP_WeaponDamageComponent(int32_t EntryPoint);

	void ApplyPointDamage_Server(class AActor* ActorToDamage, float damageToApply, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void ReplicatePointDamageApplied_Multicast(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void ReceiveTick(float DeltaSeconds);

	void SetAttackAngle(float AttackAngle);

	void SetAttackDamage(float AttackDamage);

	void SetAttackRange(float AttackRange);

	void SetDamageReductionPerHitMultiplier(float DamageReductionPerHitMultiplier);

	void SetDamageTypeClass(class UDamageType* DamageTypeClass);

	void SetDamagePointLocalOffset(struct FVector DamagePointLocalOffset);

	void SetActorsToIgnore(TArray<class AActor*>* ActorsToIgnore);

	void AddActorToIgnore(class AActor* actorToIgnore);

	void RemoveActorToIgnore(class AActor* actorToIgnore);

	void SetActorTagsToIgnore(TArray<struct FName>* ActorTagsToIgnore);

	void AddActorTagToIgnore(struct FName ActorTagToIgnore);

	void RemoveActorTagToIgnore(struct FName ActorTagToIgnore);

	void StartDealingDamage(bool* HasStartedDealingDamage);

	void StopDealingDamage();

	void IsDealingDamage(bool* IsDealingDamage)/* const*/;

	void DamageActors(bool ShouldCheckWholeRange);

	void AngleBetweenVectors2D(struct FVector2D FromVector, struct FVector2D ToVector, float* AngleBetweenVectors2D)/* const*/;

	void SignedAngleBetweenVectors2D(struct FVector2D FromVector, struct FVector2D ToVector, float* SignedAngleBetweenVectors2D)/* const*/;

#pragma endregion
};
};