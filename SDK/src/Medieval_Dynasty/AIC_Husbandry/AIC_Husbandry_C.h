#pragma once
#include "Structs.h"
#include "AIModule/AIController.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass AIC_Husbandry.AIC_Husbandry_C
// Super: Class AIModule.AIController
// Size: 816
// Size inherited: 808
/////////////////////////////////////////////
namespace UE4 {
class AAIC_Husbandry_C : public AAIController {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 808	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Husbandry.AIC_Husbandry_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_AIC_Husbandry(int32_t EntryPoint);

	void UnpauseBrain();

	void PauseBrain();

	void ReceiveBeginPlay();

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void SetSleepSlotIndex(int32_t SleepSlotIndex);

	void SetSleepValues();

	void SavePoseSnapshot_BPI(struct FName PoseNameToSave);

	void Play_GetUp_Anim_BPI(bool FromLeftSide);

	void SetOccupyByNPC(bool OccupyByNPC);

	void SetBirdTypeBPI(bool IsWaterType);

	void SetHusbandryAnimalCapacity(float Capacity);

	void SetAnimalCustomName(struct FString CustomName);

	void PoisonAnimal(float Poison);

	void SetIsInWater(bool InWater, float Intensity);

	void UpdateMountEquipment(bool Unequip, struct FST_ItemOutfit ItemData);

	void SetForSale(bool ForSale);

	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode> MovementMode);

	void CauseBleeding(float BleedDamage, float BleedDuration);

	void SetEngageTargetBPI(class AActor* Causer);

	void SetFear(int32_t Fear);

	void AddItemToHouse();

	void GetFear(int32_t* FearFactor);

	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);

	void CheckIsBuilding(struct FVector CheckLocation, struct FVector Destination, struct FVector* NewLocation);

	void GetInventoryComponent_AnimalBPI(class UActorComponent** InventoryComponent);

	void GetForSale(bool* ForSale);

	void GetPrice_Buy(int32_t* Price);

	void GetPrice_Sell(int32_t* Price);

	void GetAnimalWorldLocation(struct FVector* Location);

	void GetAnimalHeight(float* Height);

	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);

	void GetDead(bool* Dead);

	void WarnAnimal(class AActor* EngageActor, bool* Success);

	void GetAnimalCustomName(struct FString* CustomName);

	void GetOccupyByNPC(bool* OccupyByNPC);

	void GetSkinningSocketLocation(struct FVector* SkinningSocketLocation);

	void GetAnimalType(TEnumAsByte<E_AnimalType>* AnimalType);

	void GetMass(float* Mass);

	void CanPushOthers(bool* CanPushOthers);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void GetSleepSlotIndex(int32_t* SleepSlotIndex);

	void IsMoving_BPI(bool* IsMoving);

	void IAnimal_CalculateEncumberedSpeed(bool* Success);

	void IAnimal_GetTime(struct FST_Time* Time);

	void GetOwnership_BPI(TEnumAsByte<E_Ownership>* Ownership);

	void GetVoiceComponent(class UAudioComponent** Voice);

#pragma endregion
};
};