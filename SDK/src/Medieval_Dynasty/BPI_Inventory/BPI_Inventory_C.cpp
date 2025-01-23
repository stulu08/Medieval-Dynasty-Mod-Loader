#include "../SDK.h"
#include "BPI_Inventory_C.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetInitialOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBPI_Inventory_C::GetInitialOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetInitialOverloadWeight_BPI");

	struct UBPI_Inventory_C_GetInitialOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_GetInitialOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetFinalOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBPI_Inventory_C::GetFinalOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetFinalOverloadWeight_BPI");

	struct UBPI_Inventory_C_GetFinalOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_GetFinalOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.SetFinalOverloadWeight_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::SetFinalOverloadWeight_BPI(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.SetFinalOverloadWeight_BPI");

	struct UBPI_Inventory_C_SetFinalOverloadWeight_BPI_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_SetFinalOverloadWeight_BPI_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetCurrentTotalWeightOfInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBPI_Inventory_C::GetCurrentTotalWeightOfInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetCurrentTotalWeightOfInventory_BPI");

	struct UBPI_Inventory_C_GetCurrentTotalWeightOfInventory_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_GetCurrentTotalWeightOfInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.BaseInitialOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBPI_Inventory_C::BaseInitialOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.BaseInitialOverloadWeight_BPI");

	struct UBPI_Inventory_C_BaseInitialOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_BaseInitialOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.BaseFinalOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBPI_Inventory_C::BaseFinalOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.BaseFinalOverloadWeight_BPI");

	struct UBPI_Inventory_C_BaseFinalOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBPI_Inventory_C_BaseFinalOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.CalculateClothesStatsMount_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_Inventory_C::CalculateClothesStatsMount_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.CalculateClothesStatsMount_BPI");

	struct UBPI_Inventory_C_CalculateClothesStatsMount_BPI_Params {
	};
	UBPI_Inventory_C_CalculateClothesStatsMount_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetCurrentlyEquippedItemMount_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FST_ItemInventorys	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetCurrentlyEquippedItemMount_BPI");

	struct UBPI_Inventory_C_GetCurrentlyEquippedItemMount_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemInventorys Item;			//Offset: 4 | ElementSize: 56
		bool found;			//Offset: 60 | ElementSize: 1
	};
	UBPI_Inventory_C_GetCurrentlyEquippedItemMount_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetInventoryItems_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_Inventory_C::GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetInventoryItems_BPI");

	struct UBPI_Inventory_C_GetInventoryItems_BPI_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UBPI_Inventory_C_GetInventoryItems_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.ClearInventory_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_Inventory_C::ClearInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.ClearInventory_BPI");

	struct UBPI_Inventory_C_ClearInventory_BPI_Params {
	};
	UBPI_Inventory_C_ClearInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.AddItemToInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Server	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemId	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PassCondition	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Freshness	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CountAsPickUp	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AddedAtIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::AddItemToInventory_BPI(bool Server, struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.AddItemToInventory_BPI");

	struct UBPI_Inventory_C_AddItemToInventory_BPI_Params {
		bool Server;			//Offset: 0 | ElementSize: 1
		struct FName ItemId;			//Offset: 4 | ElementSize: 8
		int32_t Count;			//Offset: 12 | ElementSize: 4
		bool PassCondition;			//Offset: 16 | ElementSize: 1
		float CurrentHP;			//Offset: 20 | ElementSize: 4
		float MaxHP;			//Offset: 24 | ElementSize: 4
		int32_t Capacity;			//Offset: 28 | ElementSize: 4
		float Freshness;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 36 | ElementSize: 1
		bool DisplayNotification;			//Offset: 37 | ElementSize: 1
		bool UpdateInventory;			//Offset: 38 | ElementSize: 1
		bool CountAsPickUp;			//Offset: 39 | ElementSize: 1
		float NotificationDelay;			//Offset: 40 | ElementSize: 4
		int32_t AddedAtIndex;			//Offset: 44 | ElementSize: 4
	};
	UBPI_Inventory_C_AddItemToInventory_BPI_Params params;
	params.Server = Server;
	params.ItemId = ItemId;
	params.Count = Count;
	params.PassCondition = PassCondition;
	params.CurrentHP = CurrentHP;
	params.MaxHP = MaxHP;
	params.Capacity = Capacity;
	params.Freshness = Freshness;
	params.Ownership = Ownership;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.CountAsPickUp = CountAsPickUp;
	params.NotificationDelay = NotificationDelay;

	UObject::ProcessEvent(fn, &params);
	if (AddedAtIndex != nullptr)
		*AddedAtIndex = params.AddedAtIndex;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetArmorHorse_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorHorse	Type: struct FST_ArmorMap	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::GetArmorHorse_BPI(struct FST_ArmorMap* ArmorHorse) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetArmorHorse_BPI");

	struct UBPI_Inventory_C_GetArmorHorse_BPI_Params {
		struct FST_ArmorMap ArmorHorse;			//Offset: 0 | ElementSize: 32
	};
	UBPI_Inventory_C_GetArmorHorse_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ArmorHorse != nullptr)
		*ArmorHorse = params.ArmorHorse;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.EquipArmorHorse_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeVariantOverride	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.EquipArmorHorse_BPI");

	struct UBPI_Inventory_C_EquipArmorHorse_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		struct FST_ColorTable DyeVariantOverride;			//Offset: 56 | ElementSize: 16
	};
	UBPI_Inventory_C_EquipArmorHorse_BPI_Params params;
	params.Item = Item;
	params.DyeVariantOverride = DyeVariantOverride;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.UpdateTotalWeightOfInventory_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_Inventory_C::UpdateTotalWeightOfInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.UpdateTotalWeightOfInventory_BPI");

	struct UBPI_Inventory_C_UpdateTotalWeightOfInventory_BPI_Params {
	};
	UBPI_Inventory_C_UpdateTotalWeightOfInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetCurrentlyEquippedItemDetailsMount_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::GetCurrentlyEquippedItemDetailsMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetCurrentlyEquippedItemDetailsMount_BPI");

	struct UBPI_Inventory_C_GetCurrentlyEquippedItemDetailsMount_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 968
		bool found;			//Offset: 976 | ElementSize: 1
	};
	UBPI_Inventory_C_GetCurrentlyEquippedItemDetailsMount_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.RemoveItemFromInventory_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldSpawn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UseCustomTransformForSpawn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CustomTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::RemoveItemFromInventory_BPI(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.RemoveItemFromInventory_BPI");

	struct UBPI_Inventory_C_RemoveItemFromInventory_BPI_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
		bool ShouldSpawn;			//Offset: 4 | ElementSize: 1
		bool UseCustomTransformForSpawn;			//Offset: 5 | ElementSize: 1
		struct FTransform CustomTransform;			//Offset: 16 | ElementSize: 48
		bool DisplayNotification;			//Offset: 64 | ElementSize: 1
		bool UpdateInventory;			//Offset: 65 | ElementSize: 1
		int32_t ArrayID;			//Offset: 68 | ElementSize: 4
		struct FName ItemName;			//Offset: 72 | ElementSize: 8
		float NotificationDelay;			//Offset: 80 | ElementSize: 4
	};
	UBPI_Inventory_C_RemoveItemFromInventory_BPI_Params params;
	params.Count = Count;
	params.ShouldSpawn = ShouldSpawn;
	params.UseCustomTransformForSpawn = UseCustomTransformForSpawn;
	params.CustomTransform = CustomTransform;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.ArrayID = ArrayID;
	params.ItemName = ItemName;
	params.NotificationDelay = NotificationDelay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.RemoveCraftingResourceWithLowestCondition_ByName_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AutoTransferExhausterItemToStorage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VillageManager	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseConsumeInsteadOfRemove	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OnlyRemoveItemsWithFullCapacity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RemainingCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnedHP	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemovedItemsCache	Type: TArray<struct FST_ItemCache>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_Inventory_C::RemoveCraftingResourceWithLowestCondition_ByName_BPI(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhausterItemToStorage, class AActor* VillageManager, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.RemoveCraftingResourceWithLowestCondition_ByName_BPI");

	struct UBPI_Inventory_C_RemoveCraftingResourceWithLowestCondition_ByName_BPI_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		bool DisplayNotification;			//Offset: 12 | ElementSize: 1
		bool AutoTransferExhausterItemToStorage;			//Offset: 13 | ElementSize: 1
		class AActor* VillageManager;			//Offset: 16 | ElementSize: 8
		bool UseConsumeInsteadOfRemove;			//Offset: 24 | ElementSize: 1
		bool OnlyRemoveItemsWithFullCapacity;			//Offset: 25 | ElementSize: 1
		bool Success;			//Offset: 26 | ElementSize: 1
		int32_t RemainingCount;			//Offset: 28 | ElementSize: 4
		float ReturnedHP;			//Offset: 32 | ElementSize: 4
		TArray<struct FST_ItemCache> RemovedItemsCache;			//Offset: 40 | ElementSize: 16
	};
	UBPI_Inventory_C_RemoveCraftingResourceWithLowestCondition_ByName_BPI_Params params;
	params.ItemName = ItemName;
	params.Count = Count;
	params.DisplayNotification = DisplayNotification;
	params.AutoTransferExhausterItemToStorage = AutoTransferExhausterItemToStorage;
	params.VillageManager = VillageManager;
	params.UseConsumeInsteadOfRemove = UseConsumeInsteadOfRemove;
	params.OnlyRemoveItemsWithFullCapacity = OnlyRemoveItemsWithFullCapacity;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (RemainingCount != nullptr)
		*RemainingCount = params.RemainingCount;
	if (ReturnedHP != nullptr)
		*ReturnedHP = params.ReturnedHP;
	if (RemovedItemsCache != nullptr)
		*RemovedItemsCache = params.RemovedItemsCache;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.RemoveItemFromInventory_ByName_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CountLeft	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemovedItems	Type: TArray<struct FST_ItemCache>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_Inventory_C::RemoveItemFromInventory_ByName_BPI(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.RemoveItemFromInventory_ByName_BPI");

	struct UBPI_Inventory_C_RemoveItemFromInventory_ByName_BPI_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		int32_t CountLeft;			//Offset: 12 | ElementSize: 4
		TArray<struct FST_ItemCache> RemovedItems;			//Offset: 16 | ElementSize: 16
	};
	UBPI_Inventory_C_RemoveItemFromInventory_ByName_BPI_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
	if (CountLeft != nullptr)
		*CountLeft = params.CountLeft;
	if (RemovedItems != nullptr)
		*RemovedItems = params.RemovedItems;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.FindItemInInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OmmitEquippedItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::FindItemInInventory_BPI(struct FName ItemName, bool OmmitEquippedItem, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.FindItemInInventory_BPI");

	struct UBPI_Inventory_C_FindItemInInventory_BPI_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		bool OmmitEquippedItem;			//Offset: 8 | ElementSize: 1
		bool found;			//Offset: 9 | ElementSize: 1
	};
	UBPI_Inventory_C_FindItemInInventory_BPI_Params params;
	params.ItemName = ItemName;
	params.OmmitEquippedItem = OmmitEquippedItem;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.FindAllItemsOfID_InInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnCapacityIfPossible	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OmmitEquippedItems	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReturnOnlyItemsWithFullCapacity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::FindAllItemsOfID_InInventory_BPI(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.FindAllItemsOfID_InInventory_BPI");

	struct UBPI_Inventory_C_FindAllItemsOfID_InInventory_BPI_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		bool ReturnCapacityIfPossible;			//Offset: 8 | ElementSize: 1
		bool OmmitEquippedItems;			//Offset: 9 | ElementSize: 1
		bool ReturnOnlyItemsWithFullCapacity;			//Offset: 10 | ElementSize: 1
		bool found;			//Offset: 11 | ElementSize: 1
		int32_t Count;			//Offset: 12 | ElementSize: 4
	};
	UBPI_Inventory_C_FindAllItemsOfID_InInventory_BPI_Params params;
	params.ItemName = ItemName;
	params.ReturnCapacityIfPossible = ReturnCapacityIfPossible;
	params.OmmitEquippedItems = OmmitEquippedItems;
	params.ReturnOnlyItemsWithFullCapacity = ReturnOnlyItemsWithFullCapacity;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (Count != nullptr)
		*Count = params.Count;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.FindToolByActivityInInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType_Activity	Type: TEnumAsByte<E_Tools_Activity>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GetItemWithLowestHP	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemHP	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::FindToolByActivityInInventory_BPI(TEnumAsByte<E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* found, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex, float* ItemHP) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.FindToolByActivityInInventory_BPI");

	struct UBPI_Inventory_C_FindToolByActivityInInventory_BPI_Params {
		TEnumAsByte<E_Tools_Activity> ToolType_Activity;			//Offset: 0 | ElementSize: 1
		bool GetItemWithLowestHP;			//Offset: 1 | ElementSize: 1
		bool found;			//Offset: 2 | ElementSize: 1
		int32_t Count;			//Offset: 4 | ElementSize: 4
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 968
		struct FName ItemName;			//Offset: 976 | ElementSize: 8
		int32_t ArrayIndex;			//Offset: 984 | ElementSize: 4
		float ItemHP;			//Offset: 988 | ElementSize: 4
	};
	UBPI_Inventory_C_FindToolByActivityInInventory_BPI_Params params;
	params.ToolType_Activity = ToolType_Activity;
	params.GetItemWithLowestHP = GetItemWithLowestHP;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
	if (ItemHP != nullptr)
		*ItemHP = params.ItemHP;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.IsFull_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemsCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SingleWeight	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Full	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CountOfItemsThatWillFitIn	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_Inventory_C::IsFull_BPI(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.IsFull_BPI");

	struct UBPI_Inventory_C_IsFull_BPI_Params {
		int32_t ItemsCount;			//Offset: 0 | ElementSize: 4
		float SingleWeight;			//Offset: 4 | ElementSize: 4
		bool Full;			//Offset: 8 | ElementSize: 1
		int32_t CountOfItemsThatWillFitIn;			//Offset: 12 | ElementSize: 4
	};
	UBPI_Inventory_C_IsFull_BPI_Params params;
	params.ItemsCount = ItemsCount;
	params.SingleWeight = SingleWeight;

	UObject::ProcessEvent(fn, &params);
	if (Full != nullptr)
		*Full = params.Full;
	if (CountOfItemsThatWillFitIn != nullptr)
		*CountOfItemsThatWillFitIn = params.CountOfItemsThatWillFitIn;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetIsEmpty_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsEmpty	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::GetIsEmpty_BPI(bool* IsEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetIsEmpty_BPI");

	struct UBPI_Inventory_C_GetIsEmpty_BPI_Params {
		bool IsEmpty;			//Offset: 0 | ElementSize: 1
	};
	UBPI_Inventory_C_GetIsEmpty_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.ReplicateInventory_Server_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::ReplicateInventory_Server_BPI(bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.ReplicateInventory_Server_BPI");

	struct UBPI_Inventory_C_ReplicateInventory_Server_BPI_Params {
		bool ClientOnly;			//Offset: 0 | ElementSize: 1
	};
	UBPI_Inventory_C_ReplicateInventory_Server_BPI_Params params;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.SortInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SortMethod	Type: TEnumAsByte<E_InventorySortingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedInventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_Inventory_C::SortInventory_BPI(TEnumAsByte<E_InventorySortingType> SortMethod, TMap<struct FName, struct FST_InventoryItemsArray>* SortedInventory) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.SortInventory_BPI");

	struct UBPI_Inventory_C_SortInventory_BPI_Params {
		TEnumAsByte<E_InventorySortingType> SortMethod;			//Offset: 0 | ElementSize: 1
		TMap<struct FName, struct FST_InventoryItemsArray> SortedInventory;			//Offset: 8 | ElementSize: 80
	};
	UBPI_Inventory_C_SortInventory_BPI_Params params;
	params.SortMethod = SortMethod;

	UObject::ProcessEvent(fn, &params);
	if (SortedInventory != nullptr)
		*SortedInventory = params.SortedInventory;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.AddArmor_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemCategory	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemToAdd	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HorseArmor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_Inventory_C::AddArmor_BPI(TEnumAsByte<E_EquipmentCategories> ItemCategory, struct FST_ItemInventorys ItemToAdd, bool HorseArmor) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.AddArmor_BPI");

	struct UBPI_Inventory_C_AddArmor_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> ItemCategory;			//Offset: 0 | ElementSize: 1
		struct FST_ItemInventorys ItemToAdd;			//Offset: 4 | ElementSize: 56
		bool HorseArmor;			//Offset: 60 | ElementSize: 1
	};
	UBPI_Inventory_C_AddArmor_BPI_Params params;
	params.ItemCategory = ItemCategory;
	params.ItemToAdd = ItemToAdd;
	params.HorseArmor = HorseArmor;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}