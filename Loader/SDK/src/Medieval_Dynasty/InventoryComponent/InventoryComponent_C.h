#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
// Super: Class Engine.ActorComponent
// Size: 680
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

	//float	InitialOverloadWeight;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInitialOverloadWeight() const;
	float* M_PtrGetInitialOverloadWeight();
	void M_SetInitialOverloadWeight(const float& value);

	//float	FinalOverloadWeight;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	float M_GetFinalOverloadWeight() const;
	float* M_PtrGetFinalOverloadWeight();
	void M_SetFinalOverloadWeight(const float& value);

	//float	CurrentTotalWeightOfInventory;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
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

	//TAssetPtr<class FOnQuickSlotChange__DelegateSignature>	OnQuickSlotChange;		//Offset: 232	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnQuickSlotChange__DelegateSignature> M_GetOnQuickSlotChange() const;
	TAssetPtr<class FOnQuickSlotChange__DelegateSignature>* M_PtrGetOnQuickSlotChange();
	void M_SetOnQuickSlotChange(const TAssetPtr<class FOnQuickSlotChange__DelegateSignature>& value);

	//bool	PlayerCharacter;		//Offset: 248	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayerCharacter() const;
	bool* M_PtrGetPlayerCharacter();
	void M_SetPlayerCharacter(const bool& value);

	//TAssetPtr<class FOnInventoryChange__DelegateSignature>	OnInventoryChange;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInventoryChange__DelegateSignature> M_GetOnInventoryChange() const;
	TAssetPtr<class FOnInventoryChange__DelegateSignature>* M_PtrGetOnInventoryChange();
	void M_SetOnInventoryChange(const TAssetPtr<class FOnInventoryChange__DelegateSignature>& value);

	//bool	CheckWeightWhileTransfering;		//Offset: 272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetCheckWeightWhileTransfering() const;
	bool* M_PtrGetCheckWeightWhileTransfering();
	void M_SetCheckWeightWhileTransfering(const bool& value);

	//bool	IsHoodOn;		//Offset: 273	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsHoodOn() const;
	bool* M_PtrGetIsHoodOn();
	void M_SetIsHoodOn(const bool& value);

	//TAssetPtr<class FOnArmorChange__DelegateSignature>	OnArmorChange;		//Offset: 280	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnArmorChange__DelegateSignature> M_GetOnArmorChange() const;
	TAssetPtr<class FOnArmorChange__DelegateSignature>* M_PtrGetOnArmorChange();
	void M_SetOnArmorChange(const TAssetPtr<class FOnArmorChange__DelegateSignature>& value);

	//float	BaseInitialOverloadWeight;		//Offset: 296	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseInitialOverloadWeight() const;
	float* M_PtrGetBaseInitialOverloadWeight();
	void M_SetBaseInitialOverloadWeight(const float& value);

	//float	BaseFinalOverloadWeight;		//Offset: 300	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseFinalOverloadWeight() const;
	float* M_PtrGetBaseFinalOverloadWeight();
	void M_SetBaseFinalOverloadWeight(const float& value);

	//TEnumAsByte<E_InventoryOwnerType>	OwnerType;		//Offset: 304	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_InventoryOwnerType> M_GetOwnerType() const;
	TEnumAsByte<E_InventoryOwnerType>* M_PtrGetOwnerType();
	void M_SetOwnerType(const TEnumAsByte<E_InventoryOwnerType>& value);

	//TEnumAsByte<E_Ownership>	LocationType;		//Offset: 305	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetLocationType() const;
	TEnumAsByte<E_Ownership>* M_PtrGetLocationType();
	void M_SetLocationType(const TEnumAsByte<E_Ownership>& value);

	//TAssetPtr<class FOnWeightChange__DelegateSignature>	OnWeightChange;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnWeightChange__DelegateSignature> M_GetOnWeightChange() const;
	TAssetPtr<class FOnWeightChange__DelegateSignature>* M_PtrGetOnWeightChange();
	void M_SetOnWeightChange(const TAssetPtr<class FOnWeightChange__DelegateSignature>& value);

	//TAssetPtr<class FOnOffHandItemChange__DelegateSignature>	OnOffHandItemChange;		//Offset: 328	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnOffHandItemChange__DelegateSignature> M_GetOnOffHandItemChange() const;
	TAssetPtr<class FOnOffHandItemChange__DelegateSignature>* M_PtrGetOnOffHandItemChange();
	void M_SetOnOffHandItemChange(const TAssetPtr<class FOnOffHandItemChange__DelegateSignature>& value);

	//TAssetPtr<class FOnInventoryUpdated__DelegateSignature>	OnInventoryUpdated;		//Offset: 344	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInventoryUpdated__DelegateSignature> M_GetOnInventoryUpdated() const;
	TAssetPtr<class FOnInventoryUpdated__DelegateSignature>* M_PtrGetOnInventoryUpdated();
	void M_SetOnInventoryUpdated(const TAssetPtr<class FOnInventoryUpdated__DelegateSignature>& value);

	//TMap<struct FName, struct FST_InventoryItemsArray>	Inventory_New;		//Offset: 360	Size: 80	Flags: Edit, BlueprintVisible
	TMap<struct FName, struct FST_InventoryItemsArray> M_GetInventory_New() const;
	TMap<struct FName, struct FST_InventoryItemsArray>* M_PtrGetInventory_New();
	void M_SetInventory_New(const TMap<struct FName, struct FST_InventoryItemsArray>& value);

	//class ABP_VillageManager_C*	VillageManagerReference;		//Offset: 440	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_VillageManager_C* M_GetVillageManagerReference() const;
	class ABP_VillageManager_C** M_PtrGetVillageManagerReference();
	void M_SetVillageManagerReference(const class ABP_VillageManager_C*& value);

	//class ABP_MasterFurniture_C*	ChestFurnitureReference;		//Offset: 448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterFurniture_C* M_GetChestFurnitureReference() const;
	class ABP_MasterFurniture_C** M_PtrGetChestFurnitureReference();
	void M_SetChestFurnitureReference(const class ABP_MasterFurniture_C*& value);

	//TAssetPtr<class FNone_513>	ArmorParams;		//Offset: 456	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetArmorParams() const;
	TAssetPtr<class FNone_513>* M_PtrGetArmorParams();
	void M_SetArmorParams(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FOnInventoryReplicationDone__DelegateSignature>	OnInventoryReplicationDone;		//Offset: 536	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInventoryReplicationDone__DelegateSignature> M_GetOnInventoryReplicationDone() const;
	TAssetPtr<class FOnInventoryReplicationDone__DelegateSignature>* M_PtrGetOnInventoryReplicationDone();
	void M_SetOnInventoryReplicationDone(const TAssetPtr<class FOnInventoryReplicationDone__DelegateSignature>& value);

	//int32_t	Tmp_ServerAddedAtIndex;		//Offset: 552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTmp_ServerAddedAtIndex() const;
	int32_t* M_PtrGetTmp_ServerAddedAtIndex();
	void M_SetTmp_ServerAddedAtIndex(const int32_t& value);

	//struct FST_ArmorMap	ArmorCharacter;		//Offset: 560	Size: 32	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
	struct FST_ArmorMap M_GetArmorCharacter() const;
	struct FST_ArmorMap* M_PtrGetArmorCharacter();
	void M_SetArmorCharacter(const struct FST_ArmorMap& value);

	//struct FST_ArmorMap	ArmorHorse;		//Offset: 592	Size: 32	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
	struct FST_ArmorMap M_GetArmorHorse() const;
	struct FST_ArmorMap* M_PtrGetArmorHorse();
	void M_SetArmorHorse(const struct FST_ArmorMap& value);

	//bool	IsEmpty;		//Offset: 624	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsEmpty() const;
	bool* M_PtrGetIsEmpty();
	void M_SetIsEmpty(const bool& value);

	//TAssetPtr<class FOnArmorHealthChange__DelegateSignature>	OnArmorHealthChange;		//Offset: 632	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnArmorHealthChange__DelegateSignature> M_GetOnArmorHealthChange() const;
	TAssetPtr<class FOnArmorHealthChange__DelegateSignature>* M_PtrGetOnArmorHealthChange();
	void M_SetOnArmorHealthChange(const TAssetPtr<class FOnArmorHealthChange__DelegateSignature>& value);

	//struct FST_ArmorMap	OldArmorCharacter;		//Offset: 648	Size: 32	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_ArmorMap M_GetOldArmorCharacter() const;
	struct FST_ArmorMap* M_PtrGetOldArmorCharacter();
	void M_SetOldArmorCharacter(const struct FST_ArmorMap& value);

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

	void OnInventoryReplicationDone__DelegateSignature(class ABP_BaseCharacter_C* Owner);

	void OnArmorHealthChange__DelegateSignature(TEnumAsByte<E_EquipmentCategories> ArmorEquipmentTypeWithNewHP, float NewArmorHealthInPercent, float OldArmorHealthInPercent);

	void ExecuteUbergraph_InventoryComponent(int32_t EntryPoint);

	void AddArmor_BPI(TEnumAsByte<E_EquipmentCategories> ItemCategory, struct FST_ItemInventorys ItemToAdd, bool HorseArmor);

	void SetFinalOverloadWeight_BPI(float NewValue);

	void ReplicateInventory_Server_BPI(bool ClientOnly);

	void RemoveItemFromInventory_BPI(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay);

	void UpdateTotalWeightOfInventory_BPI();

	void EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride);

	void ClearInventory_BPI();

	void CalculateClothesStatsMount_BPI();

	void ExecuteFoodDecreaseOnSeasonChange();

	void ReceiveBeginPlay();

	void InitMeshes();

	void Server_InventoryArmorAction(const struct FName& ItemName, int32_t ItemArrayIndex, TEnumAsByte<E_EquipmentCategories> ItemToFind);

	void Client_AssignHoldableItemOnBreak();

	void ReplicateInventoryByItemNameToServer_Server(const struct FName& ItemName, const struct FST_InventoryItemsArray& Items);

	void AssignToArmorSlotSplitStackHorse_Server(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID);

	void SetInventoryIsEquipped_Server(int32_t SlotIndex, bool IsEquippedQuickSlot, bool IsEquippedInventory);

	void OnQuickSlotChange_Client();

	void AssignHoldableItemOnBreak_Server(const struct FName& ItemName, int32_t QuickslotIndex);

	void AssigntoArmorSlotSplitStack_Server(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID);

	void ClearQuickslotServer(int32_t QuickslotID);

	void ReplicateInventoryByItemName_Multicast(const struct FName& Key, const struct FST_InventoryItemsArray& Value);

	void ReplicateInventoryByItemName_Client(const struct FName& Key, const struct FST_InventoryItemsArray& Value);

	void ReplicateInventoryByItemName_Server(bool ClientOnly, struct FName ItemName);

	void UpdateQuickSlots_Client(TArray<struct FST_ItemInventorys>* QuickSlots);

	void AssignSelectedItemToSelectedQuickslot_New_Server(const struct FName& ItemName, int32_t ArrayIndex, int32_t QuickslotIndex);

	void InventoryReplicationDone_Server();

	void ReplicateInventory_Client(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values);

	void UpdateUIOnInventoryItemConsumedClient(const struct FST_ItemInventorys& ItemToConsume, struct FName ItemName, int32_t InventoryID);

	void UpdateUIOnInventoryItemConsumedServer(const struct FST_ItemInventorys& ItemToConsume, struct FName ItemName, int32_t InventoryID);

	void UpdateArmor_Server(TEnumAsByte<E_EquipmentCategories> ItemCategory, struct FST_ItemInventorys ItemToAdd, bool HorseArmor);

	void ReplicateInventory_Multicast(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values);

	void ReplicateInventory_Server(bool ClientOnly);

	void UpdateInventoryClient(bool UpdateInventory, bool UpdateInventoryListDueToRemove, bool UpdateInventoryListElement, bool FindAndUpdateInventoryListElement, struct FST_ItemInventorys ItemToRemove, int32_t OldSelectedInventoryIndex);

	void UpdateMeshes();

	void SpawnDroppedItem_server(struct FTransform SpawnTransform, struct FName Item_Row_Name, int32_t ResourceCount, float CurrentHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership);

	void RemoveItemFromInventory_Client(const struct FName& ItemId);

	void RemoveItemFromInventory_Server(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay, bool UpdateInventoryListDueToRemove, bool UpdateInventoryListElement, struct FST_ItemInventorys ItemToRemove, int32_t OldSelectedInventoryIndex);

	void AddItemToInventory_Client(const struct FName& ItemId, const struct FST_InventoryItemsArray& Inventory, int32_t ItemAddedAtIndex);

	void AddItemToInventory_Server(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay);

	void AddItemToInventory(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void RemoveItemFromInventory(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay);

	void UpdateTotalWeightOfInventory();

	void FindItemInInventory(struct FName ItemName, bool OmmitEquippedItem, bool* found);

	void TransferItem(int32_t Count, class UInventoryComponent_C* TransferDestination, struct FName ItemName, int32_t ArrayID, bool CoinTransaction, bool* Success);

	void RemoveItemFromInventory_ByName(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems);

	void Assign_to_Quick_Slot_Split_Stack(int32_t QuickslotID, const struct FName& ItemName, int32_t ArrayID);

	void Assign_to_Armor_Slot_Split_Stack(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID);

	void ClearQuickSlot(int32_t QuickslotID);

	void AssignToQuickSlot_NoSplit(int32_t QuickslotID, struct FName ItemName, int32_t ArrayID);

	void RecalculateQuickSlotIndexes();

	void UpdateOldGearStatus(TEnumAsByte<E_EquipmentCategories> EquipmentSlot);

	void UpdateHeadWear(bool IsHoodOn);

	void EquipArmor(struct FST_ItemInventorys* Item);

	void UnequipArmor(struct FST_ItemInventorys* Item, bool RemoveFromInventory);

	void EquipOffhand(bool EquipShield);

	void UnequipOffhand();

	void Init_Mesh_Ref(class USkeletalMeshComponent* head, class USkeletalMeshComponent* Torso, class USkeletalMeshComponent* Hands, class USkeletalMeshComponent* Legs, class USkeletalMeshComponent* Feet, class USkeletalMeshComponent* Hat_SKM, class USkeletalMeshComponent* Hood, class USkeletalMeshComponent* Hair, class USkeletalMeshComponent* Backpack, class USkeletalMeshComponent* Pouch);

	void GetCurrentlyEquippedItemDetails(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, struct FST_ItemInventorys* Item, bool* found);

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

	void UpdateEquippedItemHP(float HP, bool OffHand);

	void CalculateClothesStats();

	void ConditionDropToZero(bool OffHand, struct FName ItemName, int32_t ArrayID);

	void EmptyContainer(int32_t CountToEmpty, struct FName ItemName, int32_t ArrayID);

	void AddItemsFromPreset(struct FST_OutfitsPresets OutfitPresetRow, TArray<int32_t>* ItemsIndexes);

	void RemoveCraftingResourceWithLowestCondition_ByName(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhaustedItemToStorage, class AActor* VillageManagerRef, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache);

	void FindAllItemsOfID_InInventory(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count);

	void CalculateItemTradePricePerUnit(struct FST_ItemInventorys ItemReference, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, float* Price);

	void IsFull(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn);

	void DecreaseItemsCapacity(int32_t CapacityToDecrease, struct FName ItemName, int32_t ArrayID);

	void CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedToolType, bool* Success);

	void ClearArmorSlot(TEnumAsByte<E_EquipmentCategories> ArmorSlot);

	void ClearInventory();

	void RemoveItemFromInventory_ForTransfer(int32_t Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, const struct FName& ItemName);

	void ConsumeItem(int32_t CountToConsume, struct FName ItemName, int32_t ArrayID, bool AutoTransferExhaustedItemToStorage, class AActor* VillageManagerRef, bool DisplayNotifications);

	void AssignSelectedItemToSelectedQuickslot_New(const struct FName& ItemName, int32_t ArrayIndex, int32_t QuickslotIndex, bool DrawQuickslotOnFinish);

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

	void Sort_UIInventory_by_Count_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCount_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCondition_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByCondition_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByWeight_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByWeight_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByPrice_Increasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void SortUIInventory_ByPrice_Decreasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	bool ShouldBindOnSeasonChanged();

	void MergePlayerMeshes(struct FST_ColorTable DyeVariant);

	void FindArmorSlot(TEnumAsByte<E_EquipmentCategories> ItemToFind, bool HorseArmor, bool* found);

	void FindArmor(TEnumAsByte<E_EquipmentCategories> ItemToFind, bool HorseArmor, struct FST_ItemInventorys* Value, bool* found);

	void AddArmor(TEnumAsByte<E_EquipmentCategories> ItemCategory, struct FST_ItemInventorys ItemToAdd, bool HorseArmor);

	void RemoveArmor(TEnumAsByte<E_EquipmentCategories> ItemCategory, bool HorseArmor);

	void GetItemMeshByPlayerSex(struct FST_ItemDetails* ItemDetails, TAssetPtr<class USkeletalMesh>* EquippedMesh, TAssetPtr<class USkeletalMesh>* AlternativeMesh);

	void TransferItem_ServerWise(int32_t Count, class UInventoryComponent_C* TransferDestination, struct FName ItemName, int32_t ArrayID, bool CoinTransaction, bool* Success);

	void OnRep_CurrentTotalWeightOfInventory();

	void OnRep_FinalOverloadWeight();

	void SetInventoryIsEquipped(int32_t SlotIndex, bool IsEquipped, bool IsEquippedInventory);

	void SetIsEquipped(int32_t SlotIndex, bool IsEquipped, bool IsEquippedInventory);

	void OnRep_ArmorCharacter();

	void OnRep_ArmorHorse();

	void OnArmorCharacterChanged();

	void OnArmorHorseChanged();

	void InventoryArmorAction(const struct FName& ItemName, int32_t ItemArrayIndex, TEnumAsByte<E_EquipmentCategories> ItemToFind);

	void ArmorAction_Horse(struct FName ItemName, int32_t ItemArrayID, TEnumAsByte<E_EquipmentCategories> ItemToFind);

	void TransferAllItems(class UInventoryComponent_C* TransferDestination, bool* Success);

	void RecalculateArmorIndexes(struct FName ItemName);

	void DrawingItemCountInRange(TArray<bool>* SeasonalAvailability, const TMap<int32_t, struct FST_DrawItemInRange>& DrawingSettings, int32_t Season, int32_t Year, bool* Success, int32_t* Count);

	void ApplyDyesToEquipment(TMap<TEnumAsByte<E_EquipmentCategories>, class USkeletalMesh*> Meshes);

	void DecreaseArmorHP(TEnumAsByte<E_EquipmentCategories> ArmorEquipmentCategories, float ValueToSubtractFromHP);

	void ResetComponent();

	void GetPercentOfInventoryValueInCoins(float Percent, int32_t* Coins);

	void OnNewCharacter();

	float GetProtectionValueBasedOnItemDurability(float Value, struct FST_ItemInventorys Item);

	void CalculateClothesProtection();

	void OnArmorHealthChanged(TEnumAsByte<E_EquipmentCategories> ArmorEquipmentTypeWithNewHP, float NewArmorHealthInPercent, float OldArmorHealthInPercent);

	void CreateBrokenNotificationOnEquipedArmor(TEnumAsByte<E_EquipmentCategories> EquipmentSlot);

	void CallEventsIfArmorChanged();

	void SortInventoryItems(TEnumAsByte<E_SortItemsType> SortItemsType, bool SortByIncrease, TArray<struct FST_InventoryItemsArray>* SortedItems);

	float BaseFinalOverloadWeight_BPI();

	float BaseInitialOverloadWeight_BPI();

	float GetCurrentTotalWeightOfInventory_BPI();

	float GetFinalOverloadWeight_BPI();

	float GetInitialOverloadWeight_BPI();

	void GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void AddItemToInventory_BPI(bool Server, struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void GetArmorHorse_BPI(struct FST_ArmorMap* ArmorHorse);

	void GetCurrentlyEquippedItemDetailsMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found);

	void RemoveCraftingResourceWithLowestCondition_ByName_BPI(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhausterItemToStorage, class AActor* VillageManager, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache);

	void FindItemInInventory_BPI(struct FName ItemName, bool OmmitEquippedItem, bool* found);

	void RemoveItemFromInventory_ByName_BPI(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems);

	void IsFull_BPI(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn);

	void FindAllItemsOfID_InInventory_BPI(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count);

	void FindToolByActivityInInventory_BPI(TEnumAsByte<E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* found, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex, float* ItemHP);

	void GetIsEmpty_BPI(bool* IsEmpty);

	void SortInventory_BPI(TEnumAsByte<E_InventorySortingType> SortMethod, TMap<struct FName, struct FST_InventoryItemsArray>* SortedInventory);

#pragma endregion
};
};