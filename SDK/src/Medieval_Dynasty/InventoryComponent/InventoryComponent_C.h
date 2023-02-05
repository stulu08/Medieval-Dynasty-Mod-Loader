#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
// Super: Class Engine.ActorComponent
// Size: 984
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UInventoryComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//float	InitialOverloadWeight;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInitialOverloadWeight() const;
	float* M_PtrGetInitialOverloadWeight();
	void M_SetInitialOverloadWeight(const float& value);

	//float	FinalOverloadWeight;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFinalOverloadWeight() const;
	float* M_PtrGetFinalOverloadWeight();
	void M_SetFinalOverloadWeight(const float& value);

	//float	CurrentTotalWeightOfInventory;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentTotalWeightOfInventory() const;
	float* M_PtrGetCurrentTotalWeightOfInventory();
	void M_SetCurrentTotalWeightOfInventory(const float& value);

	//class ABP_BaseCharacter_C*	OwningCharacterReference;		//Offset: 200	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetOwningCharacterReference() const;
	class ABP_BaseCharacter_C** M_PtrGetOwningCharacterReference();
	void M_SetOwningCharacterReference(const class ABP_BaseCharacter_C*& value);

	//bool	CountIntoGlobalResources;		//Offset: 208	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetCountIntoGlobalResources() const;
	bool* M_PtrGetCountIntoGlobalResources();
	void M_SetCountIntoGlobalResources(const bool& value);

	//TArray<struct FST_ItemInventorys>	QuickSlots;		//Offset: 216	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemInventorys> M_GetQuickSlots() const;
	TArray<struct FST_ItemInventorys>* M_PtrGetQuickSlots();
	void M_SetQuickSlots(const TArray<struct FST_ItemInventorys>& value);

	//TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>	Armor;		//Offset: 232	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> M_GetArmor() const;
	TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* M_PtrGetArmor();
	void M_SetArmor(const TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>& value);

	//TAssetPtr<class FOnQuickSlotChange__DelegateSignature>	OnQuickSlotChange;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnQuickSlotChange__DelegateSignature> M_GetOnQuickSlotChange() const;
	TAssetPtr<class FOnQuickSlotChange__DelegateSignature>* M_PtrGetOnQuickSlotChange();
	void M_SetOnQuickSlotChange(const TAssetPtr<class FOnQuickSlotChange__DelegateSignature>& value);

	//TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>	Armor_Horse;		//Offset: 328	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> M_GetArmor_Horse() const;
	TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* M_PtrGetArmor_Horse();
	void M_SetArmor_Horse(const TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>& value);

	//bool	PlayerCharacter;		//Offset: 408	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayerCharacter() const;
	bool* M_PtrGetPlayerCharacter();
	void M_SetPlayerCharacter(const bool& value);

	//TAssetPtr<class FOnInventoryChange__DelegateSignature>	OnInventoryChange;		//Offset: 416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInventoryChange__DelegateSignature> M_GetOnInventoryChange() const;
	TAssetPtr<class FOnInventoryChange__DelegateSignature>* M_PtrGetOnInventoryChange();
	void M_SetOnInventoryChange(const TAssetPtr<class FOnInventoryChange__DelegateSignature>& value);

	//bool	CheckWeightWhileTransfering;		//Offset: 432	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetCheckWeightWhileTransfering() const;
	bool* M_PtrGetCheckWeightWhileTransfering();
	void M_SetCheckWeightWhileTransfering(const bool& value);

	//class USkeletalMeshComponent*	HeadRef;		//Offset: 440	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHeadRef() const;
	class USkeletalMeshComponent** M_PtrGetHeadRef();
	void M_SetHeadRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	TorsoRef;		//Offset: 448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetTorsoRef() const;
	class USkeletalMeshComponent** M_PtrGetTorsoRef();
	void M_SetTorsoRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	HandsRef;		//Offset: 456	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHandsRef() const;
	class USkeletalMeshComponent** M_PtrGetHandsRef();
	void M_SetHandsRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	LegsRef;		//Offset: 464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetLegsRef() const;
	class USkeletalMeshComponent** M_PtrGetLegsRef();
	void M_SetLegsRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	FeetRef;		//Offset: 472	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetFeetRef() const;
	class USkeletalMeshComponent** M_PtrGetFeetRef();
	void M_SetFeetRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	HatSKMRef;		//Offset: 480	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHatSKMRef() const;
	class USkeletalMeshComponent** M_PtrGetHatSKMRef();
	void M_SetHatSKMRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	HoodRef;		//Offset: 488	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHoodRef() const;
	class USkeletalMeshComponent** M_PtrGetHoodRef();
	void M_SetHoodRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	HairRef;		//Offset: 496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHairRef() const;
	class USkeletalMeshComponent** M_PtrGetHairRef();
	void M_SetHairRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	BackpackRef;		//Offset: 504	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetBackpackRef() const;
	class USkeletalMeshComponent** M_PtrGetBackpackRef();
	void M_SetBackpackRef(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	PouchRef;		//Offset: 512	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetPouchRef() const;
	class USkeletalMeshComponent** M_PtrGetPouchRef();
	void M_SetPouchRef(const class USkeletalMeshComponent*& value);

	//bool	IsHoodOn;		//Offset: 520	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsHoodOn() const;
	bool* M_PtrGetIsHoodOn();
	void M_SetIsHoodOn(const bool& value);

	//struct FST_CharacterModules	DefaultCharacterModules;		//Offset: 528	Size: 200	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_CharacterModules M_GetDefaultCharacterModules() const;
	struct FST_CharacterModules* M_PtrGetDefaultCharacterModules();
	void M_SetDefaultCharacterModules(const struct FST_CharacterModules& value);

	//TAssetPtr<class FOnArmorChange__DelegateSignature>	OnArmorChange;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnArmorChange__DelegateSignature> M_GetOnArmorChange() const;
	TAssetPtr<class FOnArmorChange__DelegateSignature>* M_PtrGetOnArmorChange();
	void M_SetOnArmorChange(const TAssetPtr<class FOnArmorChange__DelegateSignature>& value);

	//float	BaseInitialOverloadWeight;		//Offset: 744	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseInitialOverloadWeight() const;
	float* M_PtrGetBaseInitialOverloadWeight();
	void M_SetBaseInitialOverloadWeight(const float& value);

	//float	BaseFinalOverloadWeight;		//Offset: 748	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseFinalOverloadWeight() const;
	float* M_PtrGetBaseFinalOverloadWeight();
	void M_SetBaseFinalOverloadWeight(const float& value);

	//TEnumAsByte<E_InventoryOwnerType>	OwnerType;		//Offset: 752	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_InventoryOwnerType> M_GetOwnerType() const;
	TEnumAsByte<E_InventoryOwnerType>* M_PtrGetOwnerType();
	void M_SetOwnerType(const TEnumAsByte<E_InventoryOwnerType>& value);

	//TEnumAsByte<E_Ownership>	LocationType;		//Offset: 753	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetLocationType() const;
	TEnumAsByte<E_Ownership>* M_PtrGetLocationType();
	void M_SetLocationType(const TEnumAsByte<E_Ownership>& value);

	//TAssetPtr<class FOnWeightChange__DelegateSignature>	OnWeightChange;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnWeightChange__DelegateSignature> M_GetOnWeightChange() const;
	TAssetPtr<class FOnWeightChange__DelegateSignature>* M_PtrGetOnWeightChange();
	void M_SetOnWeightChange(const TAssetPtr<class FOnWeightChange__DelegateSignature>& value);

	//TAssetPtr<class FOnOffHandItemChange__DelegateSignature>	OnOffHandItemChange;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnOffHandItemChange__DelegateSignature> M_GetOnOffHandItemChange() const;
	TAssetPtr<class FOnOffHandItemChange__DelegateSignature>* M_PtrGetOnOffHandItemChange();
	void M_SetOnOffHandItemChange(const TAssetPtr<class FOnOffHandItemChange__DelegateSignature>& value);

	//TAssetPtr<class FOnInventoryUpdated__DelegateSignature>	OnInventoryUpdated;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInventoryUpdated__DelegateSignature> M_GetOnInventoryUpdated() const;
	TAssetPtr<class FOnInventoryUpdated__DelegateSignature>* M_PtrGetOnInventoryUpdated();
	void M_SetOnInventoryUpdated(const TAssetPtr<class FOnInventoryUpdated__DelegateSignature>& value);

	//TMap<struct FName, struct FST_InventoryItemsArray>	Inventory_New;		//Offset: 808	Size: 80	Flags: Edit, BlueprintVisible
	TMap<struct FName, struct FST_InventoryItemsArray> M_GetInventory_New() const;
	TMap<struct FName, struct FST_InventoryItemsArray>* M_PtrGetInventory_New();
	void M_SetInventory_New(const TMap<struct FName, struct FST_InventoryItemsArray>& value);

	//class ABP_VillageManager_C*	VillageManagerReference;		//Offset: 888	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_VillageManager_C* M_GetVillageManagerReference() const;
	class ABP_VillageManager_C** M_PtrGetVillageManagerReference();
	void M_SetVillageManagerReference(const class ABP_VillageManager_C*& value);

	//class ABP_MasterFurniture_C*	ChestFurnitureReference;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterFurniture_C* M_GetChestFurnitureReference() const;
	class ABP_MasterFurniture_C** M_PtrGetChestFurnitureReference();
	void M_SetChestFurnitureReference(const class ABP_MasterFurniture_C*& value);

	//TAssetPtr<class FNone_435>	ArmorParams;		//Offset: 904	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_435> M_GetArmorParams() const;
	TAssetPtr<class FNone_435>* M_PtrGetArmorParams();
	void M_SetArmorParams(const TAssetPtr<class FNone_435>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryComponent.InventoryComponent_C");
		return ptr;
	}

#pragma region Functions
	void OnQuickSlotChange__DelegateSignature();

	void OnInventoryChange__DelegateSignature();

	void OnArmorChange__DelegateSignature();

	void OnWeightChange__DelegateSignature();

	void OnOffHandItemChange__DelegateSignature();

	void OnInventoryUpdated__DelegateSignature();

	void ExecuteUbergraph_InventoryComponent(int32_t EntryPoint);

	void UpdateTotalWeightOfInventory_BPI();

	void EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride);

	void ClearInventory_BPI();

	void CalculateClothesStatsMount_BPI();

	void ExecuteFoodDecreaseOnSeasonChange();

	void ReceiveBeginPlay();

	void InitMeshes();

	void AddItemToInventory(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void RemoveItemFromInventory(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay);

	void UpdateTotalWeightOfInventory();

	void FindItemInInventory(struct FName ItemName, bool OmmitEquippedItem, bool* found);

	void TransferItem(int32_t Count, class UInventoryComponent_C* TransferDestination, struct FName ItemName, int32_t ArrayID, bool CoinTransaction, bool* Success);

	void RemoveItemFromInventory_ByName(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems);

	void Assign_to_Quick_Slot_Split_Stack(int32_t QuickSlotID, const struct FName& ItemName, int32_t ArrayID);

	void AssignToArmorSlot_SplitStack(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID);

	void ClearQuickSlot(int32_t QuickSlotID);

	void AssignToQuickSlot_NoSplit(int32_t QuickSlotID, struct FName ItemName, int32_t ArrayID);

	void RecalculateQuickSlotIndexes();

	void UpdateOldGearStatus(TEnumAsByte<E_EquipmentCategories> EquipmentSlot);

	void UpdateHeadWear(bool IsHoodOn);

	void EquipArmor(struct FST_ItemInventorys* Item, struct FST_ColorTable DyeVariantOverride);

	void UnequipArmor(struct FST_ItemInventorys* Item, bool RemoveFromInventory);

	void EquipTorch();

	void UnequipTorch();

	void Init_Mesh_Ref(class USkeletalMeshComponent* head, class USkeletalMeshComponent* Torso, class USkeletalMeshComponent* Hands, class USkeletalMeshComponent* Legs, class USkeletalMeshComponent* Feet, class USkeletalMeshComponent* Hat_SKM, class USkeletalMeshComponent* Hood, class USkeletalMeshComponent* Hair, class USkeletalMeshComponent* Backpack, class USkeletalMeshComponent* Pouch);

	void GetCurrentlyEquippedItemDetails(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found);

	void SetMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck, class USkeletalMesh* EquippedMesh, class USkeletalMesh* AlternativeEquippedMesh);

	void SetMeshAndUpdateEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, class USkeletalMesh* EquippedMesh, TEnumAsByte<E_EquipmentCategories> EquipmentSlot, class USkeletalMeshComponent* SkeletalMeshSlotToUpdate);

	void SetSoftMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck, TAssetPtr<class USkeletalMesh> EquippedMesh, TAssetPtr<class USkeletalMesh> AlternativeEquippedMesh);

	void SetIsHoodOn(bool IsHoodOn);

	void UpdateEquippedItemsOnDrop(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, int32_t Count, struct FName ItemName, int32_t ArrayID);

	void GetCurrentlyEquippedItem(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void CompareStrings(struct FString String1, struct FString String2, bool* Equal_, bool* _1Before2_);

	void Sort_Inventory_by_Name();

	void RandomizeNPCClothing(class ABP_BaseCharacter_C* NPC);

	void FindToolInInventory(TEnumAsByte<E_Tools> ToolType, bool* Found_, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex);

	void FindAmmoInInventory(TEnumAsByte<E_Ammo> AmmoType, bool* Found_, int32_t* Count, struct FName* ItemName, int32_t* ArrayID);

	void UpdateEquippedItemCapacity(int32_t Capacity);

	void GetEquippedItemIndex(struct FName* ItemName, int32_t* ArrayIndex);

	void DecreaseFreshness();

	void FreshnessDropToZero(struct FName ItemName, int32_t ArrayID);

	void UpdateEquippedItemHP(float HP, bool Offhand);

	void CalculateClothesStats();

	void ConditionDropToZero(bool Offhand, struct FName ItemName, int32_t ArrayID);

	void EmptyContainer(int32_t CountToEmpty, struct FName ItemName, int32_t ArrayID);

	void AddItemsFromPreset(struct FST_OutfitsPresets OutfitPresetRow, TArray<int32_t>* ItemsIndexes);

	void RemoveCraftingResourceWithLowestCondition_ByName(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache);

	void FindAllItemsOfID_InInventory(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count);

	void CalculateItemTradePricePerUnit(struct FST_ItemInventorys ItemReference, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, float* Price);

	void IsFull(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn);

	void DecreaseItemsCapacity(int32_t CapacityToDecrease, struct FName ItemName, int32_t ArrayID);

	void CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedToolType, bool* Success);

	void ClearArmorSlot(TEnumAsByte<E_EquipmentCategories> ArmorSlot);

	void ClearInventory();

	void RemoveItemFromInventory_ForTransfer(int32_t Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, const struct FName& ItemName);

	void ConsumeItem(int32_t CountToConsume, struct FName ItemName, int32_t ArrayID, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool DisplayNotifications);

	void AssignSelectedItemToSelectedQuickslot_New(const struct FName& ItemName, int32_t ArrayIndex, int32_t QuickslotIndex);

	void UpdateWeightOnRemove(struct FName ItemName, int32_t Count);

	void UpdateWeightOnAdd(struct FName ItemName, int32_t Count);

	void EquipArmor_Horse(struct FST_ItemInventorys* Item, struct FST_ColorTable DyeVariantOverride);

	void UnequipArmor_Horse(struct FST_ItemInventorys* Item, bool RemoveFromInventory);

	void GetCurrentlyEquippedItem_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void CalculateClothesStats_Horse();

	void UpdateOldGearStatus_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot);

	void AssignToArmorSlot_SplitStack_Horse(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID);

	void ClearArmorSlot_Horse(TEnumAsByte<E_EquipmentCategories> ArmorSlot);

	void GetCurrentlyEquippedItemDetails_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found);

	void FindToolByActivityInInventory(TEnumAsByte<E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* Found_, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex, float* ItemHP);

	void UpdateArmorParams();

	void CalculatePriceOfMarketSoldItems(TArray<struct FST_ItemCache>* SoldItems, int32_t* CoinsForTransaction);

	void DecreaseHPOfMostUsedToolOfType(TEnumAsByte<E_Tools> ToolType, float HPAmount);

	void DecreaseHPOfMostUsedToolOfName(struct FName ToolName, int32_t ToolIndex, float HPAmount);

	void SortUIInventory_ByName_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* SortedInventory);

	void SortUIInventory_ByCount_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCount_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCondition_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCondition_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByWeight_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByWeight_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByPrice_Increasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByPrice_Decreasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	bool ShouldBindOnSeasonChanged();

	float BaseFinalOverloadWeight_BPI();

	float BaseInitialOverloadWeight_BPI();

	float GetCurrentTotalWeightOfInventory_BPI();

	float GetFinalOverloadWeight_BPI();

	float GetInitialOverloadWeight_BPI();

	void GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void AddItemToInventory_BPI(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void GetArmorHorse_BPI(TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* ArmorHorse);

#pragma endregion
};
};