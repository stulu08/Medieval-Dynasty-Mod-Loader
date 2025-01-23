#pragma once
#include "Structs.h"
#include "BP_NPC/BP_NPC_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC_Bandit.BP_NPC_Bandit_C
// Super: BlueprintGeneratedClass BP_NPC.BP_NPC_C
// Size: 7619
// Size inherited: 7597
/////////////////////////////////////////////
namespace UE4 {
class ABP_NPC_Bandit_C : public ABP_NPC_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 7600	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class AController*	LastDamageInstigator;		//Offset: 7608	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AController* M_GetLastDamageInstigator() const;
	class AController** M_PtrGetLastDamageInstigator();
	void M_SetLastDamageInstigator(const class AController*& value);

	//bool	CanAvoidHit;		//Offset: 7616	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanAvoidHit() const;
	bool* M_PtrGetCanAvoidHit();
	void M_SetCanAvoidHit(const bool& value);

	//TEnumAsByte<E_AnimDirection>	AvoidHitDirection;		//Offset: 7617	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimDirection> M_GetAvoidHitDirection() const;
	TEnumAsByte<E_AnimDirection>* M_PtrGetAvoidHitDirection();
	void M_SetAvoidHitDirection(const TEnumAsByte<E_AnimDirection>& value);

	//TEnumAsByte<E_AnimMovement>	AvoidHitMovement;		//Offset: 7618	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimMovement> M_GetAvoidHitMovement() const;
	TEnumAsByte<E_AnimMovement>* M_PtrGetAvoidHitMovement();
	void M_SetAvoidHitMovement(const TEnumAsByte<E_AnimMovement>& value);

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

	void UpdateDamageAndHealth(bool ShouldResetHealth);

	void TryIncreaseReputation();

	void AfterDeathTick();

	void AI_GetCanAvoid(bool* CanAvoid);

	void AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement);

	void CloseOptimization();

	void NoneOptimization();

	void DisableNPC();

	void FarOptimization();

	void MediumOptimization();

	void Init_NPC(bool LoadGame);

	void AfterDeath();

	void FindChatter(bool* IsChatter, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, struct FChatterData* ChatterData);

	void Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void OnSeasonChanged();

	void OnDayChanged();

	void OnDayChangedByTimeUpdate();

	void GetEquippedItemNames(TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>* EquippedItemNames)/* const*/;

	void OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void OnBlockBroken(float ReceivedDamage);

	void OnHitBlocked(float ReceivedDamage);

	void OnHitNotBlocked(float ReceivedDamage);

	void OnKilled();

	void GetInteractAction(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/;

	void GetActorType(struct FName* ActorType)/* const*/;

	void CanDamage(struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, bool* CanDamage)/* const*/;

#pragma endregion
};
};