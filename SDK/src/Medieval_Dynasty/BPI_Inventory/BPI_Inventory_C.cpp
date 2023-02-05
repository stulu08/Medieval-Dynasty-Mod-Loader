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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
		struct FST_ItemInventorys Item;			//Offset: 4 | ElementSize: 48
		bool found;			//Offset: 52 | ElementSize: 1
	};
	UBPI_Inventory_C_GetCurrentlyEquippedItemMount_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.AddItemToInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
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
void UBPI_Inventory_C::AddItemToInventory_BPI(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.AddItemToInventory_BPI");

	struct UBPI_Inventory_C_AddItemToInventory_BPI_Params {
		struct FName ItemId;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		bool PassCondition;			//Offset: 12 | ElementSize: 1
		float CurrentHP;			//Offset: 16 | ElementSize: 4
		float MaxHP;			//Offset: 20 | ElementSize: 4
		int32_t Capacity;			//Offset: 24 | ElementSize: 4
		float Freshness;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 32 | ElementSize: 1
		bool DisplayNotification;			//Offset: 33 | ElementSize: 1
		bool UpdateInventory;			//Offset: 34 | ElementSize: 1
		bool CountAsPickUp;			//Offset: 35 | ElementSize: 1
		float NotificationDelay;			//Offset: 36 | ElementSize: 4
		int32_t AddedAtIndex;			//Offset: 40 | ElementSize: 4
	};
	UBPI_Inventory_C_AddItemToInventory_BPI_Params params;
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (AddedAtIndex != nullptr)
		*AddedAtIndex = params.AddedAtIndex;
}

/////////////////////////////////////////////
// Function BPI_Inventory.BPI_Inventory_C.GetArmorHorse_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorHorse	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_Inventory_C::GetArmorHorse_BPI(TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* ArmorHorse) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Inventory.BPI_Inventory_C.GetArmorHorse_BPI");

	struct UBPI_Inventory_C_GetArmorHorse_BPI_Params {
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> ArmorHorse;			//Offset: 0 | ElementSize: 80
	};
	UBPI_Inventory_C_GetArmorHorse_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		struct FST_ColorTable DyeVariantOverride;			//Offset: 48 | ElementSize: 16
	};
	UBPI_Inventory_C_EquipArmorHorse_BPI_Params params;
	params.Item = Item;
	params.DyeVariantOverride = DyeVariantOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}