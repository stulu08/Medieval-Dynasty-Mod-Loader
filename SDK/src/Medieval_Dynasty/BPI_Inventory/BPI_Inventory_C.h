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

	float GetCurrentTotalWeightOfInventory_BPI();

	float BaseInitialOverloadWeight_BPI();

	float BaseFinalOverloadWeight_BPI();

	void CalculateClothesStatsMount_BPI();

	void GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found);

	void GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory);

	void ClearInventory_BPI();

	void AddItemToInventory_BPI(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex);

	void GetArmorHorse_BPI(TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* ArmorHorse);

	void EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride);

	void UpdateTotalWeightOfInventory_BPI();

#pragma endregion
};
};