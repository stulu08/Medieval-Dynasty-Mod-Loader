#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_Inventory.BPI_Inventory_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_Inventory_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Inventory.BPI_Inventory_C");
		return ptr;
	}

#pragma region Functions
	float GetInitialOverloadWeight_BPI();

	float GetFinalOverloadWeight_BPI();

	void SetFinalOverloadWeight_BPI(float NewValue);

	float GetCurrentTotalWeightOfInventory_BPI();

	float BaseInitialOverloadWeight_BPI();

	float BaseFinalOverloadWeight_BPI();

	void CalculateClothesStatsMount_BPI();

	void GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void ClearInventory_BPI();

	void AddItemToInventory_BPI(bool Server, struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void GetArmorHorse_BPI(struct FST_ArmorMap* ArmorHorse);

	void EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride);

	void UpdateTotalWeightOfInventory_BPI();

	void GetCurrentlyEquippedItemDetailsMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found);

	void RemoveItemFromInventory_BPI(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay);

	void RemoveCraftingResourceWithLowestCondition_ByName_BPI(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhausterItemToStorage, class AActor* VillageManager, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache);

	void RemoveItemFromInventory_ByName_BPI(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems);

	void FindItemInInventory_BPI(struct FName ItemName, bool OmmitEquippedItem, bool* found);

	void FindAllItemsOfID_InInventory_BPI(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count);

	void FindToolByActivityInInventory_BPI(TEnumAsByte<E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* found, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex, float* ItemHP);

	void IsFull_BPI(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn);

	void GetIsEmpty_BPI(bool* IsEmpty);

	void ReplicateInventory_Server_BPI(bool ClientOnly);

	void SortInventory_BPI(TEnumAsByte<E_InventorySortingType> SortMethod, TMap<struct FName, struct FST_InventoryItemsArray>* SortedInventory);

	void AddArmor_BPI(TEnumAsByte<E_EquipmentCategories> ItemCategory, struct FST_ItemInventorys ItemToAdd, bool HorseArmor);

#pragma endregion
};
};