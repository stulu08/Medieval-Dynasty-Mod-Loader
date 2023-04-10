#include "../SDK.h"
#include "InventoryComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UInventoryComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UInventoryComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UInventoryComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of InitialOverloadWeight
// Declaration: float InitialOverloadWeight
float UInventoryComponent_C::M_GetInitialOverloadWeight() const {
	return Read<float>((byte*)this + 184);
}
float* UInventoryComponent_C::M_PtrGetInitialOverloadWeight() {
	return reinterpret_cast<float*>((byte*)this + 184);
}
void UInventoryComponent_C::M_SetInitialOverloadWeight(const float& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of FinalOverloadWeight
// Declaration: float FinalOverloadWeight
float UInventoryComponent_C::M_GetFinalOverloadWeight() const {
	return Read<float>((byte*)this + 188);
}
float* UInventoryComponent_C::M_PtrGetFinalOverloadWeight() {
	return reinterpret_cast<float*>((byte*)this + 188);
}
void UInventoryComponent_C::M_SetFinalOverloadWeight(const float& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of CurrentTotalWeightOfInventory
// Declaration: float CurrentTotalWeightOfInventory
float UInventoryComponent_C::M_GetCurrentTotalWeightOfInventory() const {
	return Read<float>((byte*)this + 192);
}
float* UInventoryComponent_C::M_PtrGetCurrentTotalWeightOfInventory() {
	return reinterpret_cast<float*>((byte*)this + 192);
}
void UInventoryComponent_C::M_SetCurrentTotalWeightOfInventory(const float& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of OwningCharacterReference
// Declaration: class ABP_BaseCharacter_C* OwningCharacterReference
class ABP_BaseCharacter_C* UInventoryComponent_C::M_GetOwningCharacterReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 200);
}
class ABP_BaseCharacter_C** UInventoryComponent_C::M_PtrGetOwningCharacterReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 200);
}
void UInventoryComponent_C::M_SetOwningCharacterReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of CountIntoGlobalResources
// Declaration: bool CountIntoGlobalResources
bool UInventoryComponent_C::M_GetCountIntoGlobalResources() const {
	return Read<bool>((byte*)this + 208);
}
bool* UInventoryComponent_C::M_PtrGetCountIntoGlobalResources() {
	return reinterpret_cast<bool*>((byte*)this + 208);
}
void UInventoryComponent_C::M_SetCountIntoGlobalResources(const bool& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of QuickSlots
// Declaration: TArray<struct FST_ItemInventorys> QuickSlots
TArray<struct FST_ItemInventorys> UInventoryComponent_C::M_GetQuickSlots() const {
	return Read<TArray<struct FST_ItemInventorys>>((byte*)this + 216);
}
TArray<struct FST_ItemInventorys>* UInventoryComponent_C::M_PtrGetQuickSlots() {
	return reinterpret_cast<TArray<struct FST_ItemInventorys>*>((byte*)this + 216);
}
void UInventoryComponent_C::M_SetQuickSlots(const TArray<struct FST_ItemInventorys>& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of Armor
// Declaration: TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> Armor
TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> UInventoryComponent_C::M_GetArmor() const {
	return Read<TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>>((byte*)this + 232);
}
TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* UInventoryComponent_C::M_PtrGetArmor() {
	return reinterpret_cast<TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>*>((byte*)this + 232);
}
void UInventoryComponent_C::M_SetArmor(const TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of OnQuickSlotChange
// Declaration: TAssetPtr<class FOnQuickSlotChange__DelegateSignature> OnQuickSlotChange
TAssetPtr<class FOnQuickSlotChange__DelegateSignature> UInventoryComponent_C::M_GetOnQuickSlotChange() const {
	return Read<TAssetPtr<class FOnQuickSlotChange__DelegateSignature>>((byte*)this + 312);
}
TAssetPtr<class FOnQuickSlotChange__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnQuickSlotChange() {
	return reinterpret_cast<TAssetPtr<class FOnQuickSlotChange__DelegateSignature>*>((byte*)this + 312);
}
void UInventoryComponent_C::M_SetOnQuickSlotChange(const TAssetPtr<class FOnQuickSlotChange__DelegateSignature>& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Armor_Horse
// Declaration: TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> Armor_Horse
TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> UInventoryComponent_C::M_GetArmor_Horse() const {
	return Read<TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>>((byte*)this + 328);
}
TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* UInventoryComponent_C::M_PtrGetArmor_Horse() {
	return reinterpret_cast<TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>*>((byte*)this + 328);
}
void UInventoryComponent_C::M_SetArmor_Horse(const TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of PlayerCharacter
// Declaration: bool PlayerCharacter
bool UInventoryComponent_C::M_GetPlayerCharacter() const {
	return Read<bool>((byte*)this + 408);
}
bool* UInventoryComponent_C::M_PtrGetPlayerCharacter() {
	return reinterpret_cast<bool*>((byte*)this + 408);
}
void UInventoryComponent_C::M_SetPlayerCharacter(const bool& value) {
	Write((byte*)this + 408, value);
}
// Member Getter and Setter of OnInventoryChange
// Declaration: TAssetPtr<class FOnInventoryChange__DelegateSignature> OnInventoryChange
TAssetPtr<class FOnInventoryChange__DelegateSignature> UInventoryComponent_C::M_GetOnInventoryChange() const {
	return Read<TAssetPtr<class FOnInventoryChange__DelegateSignature>>((byte*)this + 416);
}
TAssetPtr<class FOnInventoryChange__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnInventoryChange() {
	return reinterpret_cast<TAssetPtr<class FOnInventoryChange__DelegateSignature>*>((byte*)this + 416);
}
void UInventoryComponent_C::M_SetOnInventoryChange(const TAssetPtr<class FOnInventoryChange__DelegateSignature>& value) {
	Write((byte*)this + 416, value);
}
// Member Getter and Setter of CheckWeightWhileTransfering
// Declaration: bool CheckWeightWhileTransfering
bool UInventoryComponent_C::M_GetCheckWeightWhileTransfering() const {
	return Read<bool>((byte*)this + 432);
}
bool* UInventoryComponent_C::M_PtrGetCheckWeightWhileTransfering() {
	return reinterpret_cast<bool*>((byte*)this + 432);
}
void UInventoryComponent_C::M_SetCheckWeightWhileTransfering(const bool& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of IsHoodOn
// Declaration: bool IsHoodOn
bool UInventoryComponent_C::M_GetIsHoodOn() const {
	return Read<bool>((byte*)this + 433);
}
bool* UInventoryComponent_C::M_PtrGetIsHoodOn() {
	return reinterpret_cast<bool*>((byte*)this + 433);
}
void UInventoryComponent_C::M_SetIsHoodOn(const bool& value) {
	Write((byte*)this + 433, value);
}
// Member Getter and Setter of OnArmorChange
// Declaration: TAssetPtr<class FOnArmorChange__DelegateSignature> OnArmorChange
TAssetPtr<class FOnArmorChange__DelegateSignature> UInventoryComponent_C::M_GetOnArmorChange() const {
	return Read<TAssetPtr<class FOnArmorChange__DelegateSignature>>((byte*)this + 440);
}
TAssetPtr<class FOnArmorChange__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnArmorChange() {
	return reinterpret_cast<TAssetPtr<class FOnArmorChange__DelegateSignature>*>((byte*)this + 440);
}
void UInventoryComponent_C::M_SetOnArmorChange(const TAssetPtr<class FOnArmorChange__DelegateSignature>& value) {
	Write((byte*)this + 440, value);
}
// Member Getter and Setter of BaseInitialOverloadWeight
// Declaration: float BaseInitialOverloadWeight
float UInventoryComponent_C::M_GetBaseInitialOverloadWeight() const {
	return Read<float>((byte*)this + 456);
}
float* UInventoryComponent_C::M_PtrGetBaseInitialOverloadWeight() {
	return reinterpret_cast<float*>((byte*)this + 456);
}
void UInventoryComponent_C::M_SetBaseInitialOverloadWeight(const float& value) {
	Write((byte*)this + 456, value);
}
// Member Getter and Setter of BaseFinalOverloadWeight
// Declaration: float BaseFinalOverloadWeight
float UInventoryComponent_C::M_GetBaseFinalOverloadWeight() const {
	return Read<float>((byte*)this + 460);
}
float* UInventoryComponent_C::M_PtrGetBaseFinalOverloadWeight() {
	return reinterpret_cast<float*>((byte*)this + 460);
}
void UInventoryComponent_C::M_SetBaseFinalOverloadWeight(const float& value) {
	Write((byte*)this + 460, value);
}
// Member Getter and Setter of OwnerType
// Declaration: TEnumAsByte<E_InventoryOwnerType> OwnerType
TEnumAsByte<E_InventoryOwnerType> UInventoryComponent_C::M_GetOwnerType() const {
	return Read<TEnumAsByte<E_InventoryOwnerType>>((byte*)this + 464);
}
TEnumAsByte<E_InventoryOwnerType>* UInventoryComponent_C::M_PtrGetOwnerType() {
	return reinterpret_cast<TEnumAsByte<E_InventoryOwnerType>*>((byte*)this + 464);
}
void UInventoryComponent_C::M_SetOwnerType(const TEnumAsByte<E_InventoryOwnerType>& value) {
	Write((byte*)this + 464, value);
}
// Member Getter and Setter of LocationType
// Declaration: TEnumAsByte<E_Ownership> LocationType
TEnumAsByte<E_Ownership> UInventoryComponent_C::M_GetLocationType() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 465);
}
TEnumAsByte<E_Ownership>* UInventoryComponent_C::M_PtrGetLocationType() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 465);
}
void UInventoryComponent_C::M_SetLocationType(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 465, value);
}
// Member Getter and Setter of OnWeightChange
// Declaration: TAssetPtr<class FOnWeightChange__DelegateSignature> OnWeightChange
TAssetPtr<class FOnWeightChange__DelegateSignature> UInventoryComponent_C::M_GetOnWeightChange() const {
	return Read<TAssetPtr<class FOnWeightChange__DelegateSignature>>((byte*)this + 472);
}
TAssetPtr<class FOnWeightChange__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnWeightChange() {
	return reinterpret_cast<TAssetPtr<class FOnWeightChange__DelegateSignature>*>((byte*)this + 472);
}
void UInventoryComponent_C::M_SetOnWeightChange(const TAssetPtr<class FOnWeightChange__DelegateSignature>& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of OnOffHandItemChange
// Declaration: TAssetPtr<class FOnOffHandItemChange__DelegateSignature> OnOffHandItemChange
TAssetPtr<class FOnOffHandItemChange__DelegateSignature> UInventoryComponent_C::M_GetOnOffHandItemChange() const {
	return Read<TAssetPtr<class FOnOffHandItemChange__DelegateSignature>>((byte*)this + 488);
}
TAssetPtr<class FOnOffHandItemChange__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnOffHandItemChange() {
	return reinterpret_cast<TAssetPtr<class FOnOffHandItemChange__DelegateSignature>*>((byte*)this + 488);
}
void UInventoryComponent_C::M_SetOnOffHandItemChange(const TAssetPtr<class FOnOffHandItemChange__DelegateSignature>& value) {
	Write((byte*)this + 488, value);
}
// Member Getter and Setter of OnInventoryUpdated
// Declaration: TAssetPtr<class FOnInventoryUpdated__DelegateSignature> OnInventoryUpdated
TAssetPtr<class FOnInventoryUpdated__DelegateSignature> UInventoryComponent_C::M_GetOnInventoryUpdated() const {
	return Read<TAssetPtr<class FOnInventoryUpdated__DelegateSignature>>((byte*)this + 504);
}
TAssetPtr<class FOnInventoryUpdated__DelegateSignature>* UInventoryComponent_C::M_PtrGetOnInventoryUpdated() {
	return reinterpret_cast<TAssetPtr<class FOnInventoryUpdated__DelegateSignature>*>((byte*)this + 504);
}
void UInventoryComponent_C::M_SetOnInventoryUpdated(const TAssetPtr<class FOnInventoryUpdated__DelegateSignature>& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of Inventory_New
// Declaration: TMap<struct FName, struct FST_InventoryItemsArray> Inventory_New
TMap<struct FName, struct FST_InventoryItemsArray> UInventoryComponent_C::M_GetInventory_New() const {
	return Read<TMap<struct FName, struct FST_InventoryItemsArray>>((byte*)this + 520);
}
TMap<struct FName, struct FST_InventoryItemsArray>* UInventoryComponent_C::M_PtrGetInventory_New() {
	return reinterpret_cast<TMap<struct FName, struct FST_InventoryItemsArray>*>((byte*)this + 520);
}
void UInventoryComponent_C::M_SetInventory_New(const TMap<struct FName, struct FST_InventoryItemsArray>& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of VillageManagerReference
// Declaration: class ABP_VillageManager_C* VillageManagerReference
class ABP_VillageManager_C* UInventoryComponent_C::M_GetVillageManagerReference() const {
	return Read<class ABP_VillageManager_C*>((byte*)this + 600);
}
class ABP_VillageManager_C** UInventoryComponent_C::M_PtrGetVillageManagerReference() {
	return reinterpret_cast<class ABP_VillageManager_C**>((byte*)this + 600);
}
void UInventoryComponent_C::M_SetVillageManagerReference(const class ABP_VillageManager_C*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of ChestFurnitureReference
// Declaration: class ABP_MasterFurniture_C* ChestFurnitureReference
class ABP_MasterFurniture_C* UInventoryComponent_C::M_GetChestFurnitureReference() const {
	return Read<class ABP_MasterFurniture_C*>((byte*)this + 608);
}
class ABP_MasterFurniture_C** UInventoryComponent_C::M_PtrGetChestFurnitureReference() {
	return reinterpret_cast<class ABP_MasterFurniture_C**>((byte*)this + 608);
}
void UInventoryComponent_C::M_SetChestFurnitureReference(const class ABP_MasterFurniture_C*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of ArmorParams
// Declaration: TAssetPtr<class FNone_413> ArmorParams
TAssetPtr<class FNone_413> UInventoryComponent_C::M_GetArmorParams() const {
	return Read<TAssetPtr<class FNone_413>>((byte*)this + 616);
}
TAssetPtr<class FNone_413>* UInventoryComponent_C::M_PtrGetArmorParams() {
	return reinterpret_cast<TAssetPtr<class FNone_413>*>((byte*)this + 616);
}
void UInventoryComponent_C::M_SetArmorParams(const TAssetPtr<class FNone_413>& value) {
	Write((byte*)this + 616, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnQuickSlotChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnQuickSlotChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnQuickSlotChange__DelegateSignature");

	struct UInventoryComponent_C_OnQuickSlotChange__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnQuickSlotChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnInventoryChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnInventoryChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnInventoryChange__DelegateSignature");

	struct UInventoryComponent_C_OnInventoryChange__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnInventoryChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnArmorChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnArmorChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnArmorChange__DelegateSignature");

	struct UInventoryComponent_C_OnArmorChange__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnArmorChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnWeightChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnWeightChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnWeightChange__DelegateSignature");

	struct UInventoryComponent_C_OnWeightChange__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnWeightChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnOffHandItemChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnOffHandItemChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnOffHandItemChange__DelegateSignature");

	struct UInventoryComponent_C_OnOffHandItemChange__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnOffHandItemChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.OnInventoryUpdated__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::OnInventoryUpdated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnInventoryUpdated__DelegateSignature");

	struct UInventoryComponent_C_OnInventoryUpdated__DelegateSignature_Params {
	};
	UInventoryComponent_C_OnInventoryUpdated__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::ExecuteUbergraph_InventoryComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent");

	struct UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateTotalWeightOfInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory_BPI");

	struct UInventoryComponent_C_UpdateTotalWeightOfInventory_BPI_Params {
	};
	UInventoryComponent_C_UpdateTotalWeightOfInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.EquipArmorHorse_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeVariantOverride	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::EquipArmorHorse_BPI(const struct FST_ItemInventorys& Item, struct FST_ColorTable DyeVariantOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipArmorHorse_BPI");

	struct UInventoryComponent_C_EquipArmorHorse_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		struct FST_ColorTable DyeVariantOverride;			//Offset: 48 | ElementSize: 16
	};
	UInventoryComponent_C_EquipArmorHorse_BPI_Params params;
	params.Item = Item;
	params.DyeVariantOverride = DyeVariantOverride;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ClearInventory_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::ClearInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearInventory_BPI");

	struct UInventoryComponent_C_ClearInventory_BPI_Params {
	};
	UInventoryComponent_C_ClearInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CalculateClothesStatsMount_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::CalculateClothesStatsMount_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateClothesStatsMount_BPI");

	struct UInventoryComponent_C_CalculateClothesStatsMount_BPI_Params {
	};
	UInventoryComponent_C_CalculateClothesStatsMount_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ExecuteFoodDecreaseOnSeasonChange
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::ExecuteFoodDecreaseOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteFoodDecreaseOnSeasonChange");

	struct UInventoryComponent_C_ExecuteFoodDecreaseOnSeasonChange_Params {
	};
	UInventoryComponent_C_ExecuteFoodDecreaseOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ReceiveBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ReceiveBeginPlay");

	struct UInventoryComponent_C_ReceiveBeginPlay_Params {
	};
	UInventoryComponent_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.InitMeshes
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::InitMeshes() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.InitMeshes");

	struct UInventoryComponent_C_InitMeshes_Params {
	};
	UInventoryComponent_C_InitMeshes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AddItemToInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
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
void UInventoryComponent_C::AddItemToInventory(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItemToInventory");

	struct UInventoryComponent_C_AddItemToInventory_Params {
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
	UInventoryComponent_C_AddItemToInventory_Params params;
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
// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
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
void UInventoryComponent_C::RemoveItemFromInventory(int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory");

	struct UInventoryComponent_C_RemoveItemFromInventory_Params {
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
	UInventoryComponent_C_RemoveItemFromInventory_Params params;
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
// Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateTotalWeightOfInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory");

	struct UInventoryComponent_C_UpdateTotalWeightOfInventory_Params {
	};
	UInventoryComponent_C_UpdateTotalWeightOfInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.FindItemInInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OmmitEquippedItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::FindItemInInventory(struct FName ItemName, bool OmmitEquippedItem, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindItemInInventory");

	struct UInventoryComponent_C_FindItemInInventory_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		bool OmmitEquippedItem;			//Offset: 8 | ElementSize: 1
		bool found;			//Offset: 9 | ElementSize: 1
	};
	UInventoryComponent_C_FindItemInInventory_Params params;
	params.ItemName = ItemName;
	params.OmmitEquippedItem = OmmitEquippedItem;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.TransferItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TransferDestination	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CoinTransaction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::TransferItem(int32_t Count, class UInventoryComponent_C* TransferDestination, struct FName ItemName, int32_t ArrayID, bool CoinTransaction, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.TransferItem");

	struct UInventoryComponent_C_TransferItem_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
		class UInventoryComponent_C* TransferDestination;			//Offset: 8 | ElementSize: 8
		struct FName ItemName;			//Offset: 16 | ElementSize: 8
		int32_t ArrayID;			//Offset: 24 | ElementSize: 4
		bool CoinTransaction;			//Offset: 28 | ElementSize: 1
		bool Success;			//Offset: 29 | ElementSize: 1
	};
	UInventoryComponent_C_TransferItem_Params params;
	params.Count = Count;
	params.TransferDestination = TransferDestination;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;
	params.CoinTransaction = CoinTransaction;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ByName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CountLeft	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemovedItems	Type: TArray<struct FST_ItemCache>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::RemoveItemFromInventory_ByName(struct FName ItemName, int32_t Count, int32_t* CountLeft, TArray<struct FST_ItemCache>* RemovedItems) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ByName");

	struct UInventoryComponent_C_RemoveItemFromInventory_ByName_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		int32_t CountLeft;			//Offset: 12 | ElementSize: 4
		TArray<struct FST_ItemCache> RemovedItems;			//Offset: 16 | ElementSize: 16
	};
	UInventoryComponent_C_RemoveItemFromInventory_ByName_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
	if (CountLeft != nullptr)
		*CountLeft = params.CountLeft;
	if (RemovedItems != nullptr)
		*RemovedItems = params.RemovedItems;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.Assign to Quick Slot Split Stack
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::Assign_to_Quick_Slot_Split_Stack(int32_t QuickSlotID, const struct FName& ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Assign to Quick Slot Split Stack");

	struct UInventoryComponent_C_Assign_to_Quick_Slot_Split_Stack_Params {
		int32_t QuickSlotID;			//Offset: 0 | ElementSize: 4
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_Assign_to_Quick_Slot_Split_Stack_Params params;
	params.QuickSlotID = QuickSlotID;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::AssignToArmorSlot_SplitStack(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack");

	struct UInventoryComponent_C_AssignToArmorSlot_SplitStack_Params {
		TEnumAsByte<E_EquipmentCategories> ArmorSlot;			//Offset: 0 | ElementSize: 1
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_AssignToArmorSlot_SplitStack_Params params;
	params.ArmorSlot = ArmorSlot;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ClearQuickSlot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::ClearQuickSlot(int32_t QuickSlotID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearQuickSlot");

	struct UInventoryComponent_C_ClearQuickSlot_Params {
		int32_t QuickSlotID;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_ClearQuickSlot_Params params;
	params.QuickSlotID = QuickSlotID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AssignToQuickSlot_NoSplit
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::AssignToQuickSlot_NoSplit(int32_t QuickSlotID, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToQuickSlot_NoSplit");

	struct UInventoryComponent_C_AssignToQuickSlot_NoSplit_Params {
		int32_t QuickSlotID;			//Offset: 0 | ElementSize: 4
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_AssignToQuickSlot_NoSplit_Params params;
	params.QuickSlotID = QuickSlotID;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.RecalculateQuickSlotIndexes
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::RecalculateQuickSlotIndexes() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RecalculateQuickSlotIndexes");

	struct UInventoryComponent_C_RecalculateQuickSlotIndexes_Params {
	};
	UInventoryComponent_C_RecalculateQuickSlotIndexes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateOldGearStatus(TEnumAsByte<E_EquipmentCategories> EquipmentSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus");

	struct UInventoryComponent_C_UpdateOldGearStatus_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_UpdateOldGearStatus_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateHeadWear
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsHoodOn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateHeadWear(bool IsHoodOn) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateHeadWear");

	struct UInventoryComponent_C_UpdateHeadWear_Params {
		bool IsHoodOn;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_UpdateHeadWear_Params params;
	params.IsHoodOn = IsHoodOn;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.EquipArmor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeVariantOverride	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: UpdateMeshes	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::EquipArmor(struct FST_ItemInventorys* Item, struct FST_ColorTable DyeVariantOverride, bool UpdateMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipArmor");

	struct UInventoryComponent_C_EquipArmor_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		struct FST_ColorTable DyeVariantOverride;			//Offset: 48 | ElementSize: 16
		bool UpdateMeshes;			//Offset: 64 | ElementSize: 1
	};
	UInventoryComponent_C_EquipArmor_Params params;
	params.DyeVariantOverride = DyeVariantOverride;
	params.UpdateMeshes = UpdateMeshes;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UnequipArmor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemoveFromInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::UnequipArmor(struct FST_ItemInventorys* Item, bool RemoveFromInventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipArmor");

	struct UInventoryComponent_C_UnequipArmor_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		bool RemoveFromInventory;			//Offset: 48 | ElementSize: 1
	};
	UInventoryComponent_C_UnequipArmor_Params params;
	params.RemoveFromInventory = RemoveFromInventory;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.EquipTorch
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::EquipTorch() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipTorch");

	struct UInventoryComponent_C_EquipTorch_Params {
	};
	UInventoryComponent_C_EquipTorch_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UnequipTorch
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::UnequipTorch() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipTorch");

	struct UInventoryComponent_C_UnequipTorch_Params {
	};
	UInventoryComponent_C_UnequipTorch_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.Init Mesh Ref
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: head	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Torso	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hands	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Legs	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Feet	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hat_SKM	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hood	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hair	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Backpack	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Pouch	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::Init_Mesh_Ref(class USkeletalMeshComponent* head, class USkeletalMeshComponent* Torso, class USkeletalMeshComponent* Hands, class USkeletalMeshComponent* Legs, class USkeletalMeshComponent* Feet, class USkeletalMeshComponent* Hat_SKM, class USkeletalMeshComponent* Hood, class USkeletalMeshComponent* Hair, class USkeletalMeshComponent* Backpack, class USkeletalMeshComponent* Pouch) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Init Mesh Ref");

	struct UInventoryComponent_C_Init_Mesh_Ref_Params {
		class USkeletalMeshComponent* head;			//Offset: 0 | ElementSize: 8
		class USkeletalMeshComponent* Torso;			//Offset: 8 | ElementSize: 8
		class USkeletalMeshComponent* Hands;			//Offset: 16 | ElementSize: 8
		class USkeletalMeshComponent* Legs;			//Offset: 24 | ElementSize: 8
		class USkeletalMeshComponent* Feet;			//Offset: 32 | ElementSize: 8
		class USkeletalMeshComponent* Hat_SKM;			//Offset: 40 | ElementSize: 8
		class USkeletalMeshComponent* Hood;			//Offset: 48 | ElementSize: 8
		class USkeletalMeshComponent* Hair;			//Offset: 56 | ElementSize: 8
		class USkeletalMeshComponent* Backpack;			//Offset: 64 | ElementSize: 8
		class USkeletalMeshComponent* Pouch;			//Offset: 72 | ElementSize: 8
	};
	UInventoryComponent_C_Init_Mesh_Ref_Params params;
	params.head = head;
	params.Torso = Torso;
	params.Hands = Hands;
	params.Legs = Legs;
	params.Feet = Feet;
	params.Hat_SKM = Hat_SKM;
	params.Hood = Hood;
	params.Hair = Hair;
	params.Backpack = Backpack;
	params.Pouch = Pouch;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItemDetails(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails");

	struct UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
		bool found;			//Offset: 856 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SetMeshDependingOnEquippedItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalMeshSlot	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquipmentSlotToCheck	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquippedMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AlternativeEquippedMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::SetMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck, class USkeletalMesh* EquippedMesh, class USkeletalMesh* AlternativeEquippedMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetMeshDependingOnEquippedItems");

	struct UInventoryComponent_C_SetMeshDependingOnEquippedItems_Params {
		class USkeletalMeshComponent* SkeletalMeshSlot;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck;			//Offset: 8 | ElementSize: 1
		class USkeletalMesh* EquippedMesh;			//Offset: 16 | ElementSize: 8
		class USkeletalMesh* AlternativeEquippedMesh;			//Offset: 24 | ElementSize: 8
	};
	UInventoryComponent_C_SetMeshDependingOnEquippedItems_Params params;
	params.SkeletalMeshSlot = SkeletalMeshSlot;
	params.EquipmentSlotToCheck = EquipmentSlotToCheck;
	params.EquippedMesh = EquippedMesh;
	params.AlternativeEquippedMesh = AlternativeEquippedMesh;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SetMeshAndUpdateEquippedItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalMeshSlot	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquippedMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkeletalMeshSlotToUpdate	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::SetMeshAndUpdateEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, class USkeletalMesh* EquippedMesh, TEnumAsByte<E_EquipmentCategories> EquipmentSlot, class USkeletalMeshComponent* SkeletalMeshSlotToUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetMeshAndUpdateEquippedItems");

	struct UInventoryComponent_C_SetMeshAndUpdateEquippedItems_Params {
		class USkeletalMeshComponent* SkeletalMeshSlot;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* EquippedMesh;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 16 | ElementSize: 1
		class USkeletalMeshComponent* SkeletalMeshSlotToUpdate;			//Offset: 24 | ElementSize: 8
	};
	UInventoryComponent_C_SetMeshAndUpdateEquippedItems_Params params;
	params.SkeletalMeshSlot = SkeletalMeshSlot;
	params.EquippedMesh = EquippedMesh;
	params.EquipmentSlot = EquipmentSlot;
	params.SkeletalMeshSlotToUpdate = SkeletalMeshSlotToUpdate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SetSoftMeshDependingOnEquippedItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalMeshSlot	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquipmentSlotToCheck	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquippedMesh	Type: TAssetPtr<class USkeletalMesh>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: AlternativeEquippedMesh	Type: TAssetPtr<class USkeletalMesh>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::SetSoftMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck, TAssetPtr<class USkeletalMesh> EquippedMesh, TAssetPtr<class USkeletalMesh> AlternativeEquippedMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetSoftMeshDependingOnEquippedItems");

	struct UInventoryComponent_C_SetSoftMeshDependingOnEquippedItems_Params {
		class USkeletalMeshComponent* SkeletalMeshSlot;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_EquipmentCategories> EquipmentSlotToCheck;			//Offset: 8 | ElementSize: 1
		TAssetPtr<class USkeletalMesh> EquippedMesh;			//Offset: 16 | ElementSize: 40
		TAssetPtr<class USkeletalMesh> AlternativeEquippedMesh;			//Offset: 56 | ElementSize: 40
	};
	UInventoryComponent_C_SetSoftMeshDependingOnEquippedItems_Params params;
	params.SkeletalMeshSlot = SkeletalMeshSlot;
	params.EquipmentSlotToCheck = EquipmentSlotToCheck;
	params.EquippedMesh = EquippedMesh;
	params.AlternativeEquippedMesh = AlternativeEquippedMesh;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SetIsHoodOn
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsHoodOn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::SetIsHoodOn(bool IsHoodOn) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetIsHoodOn");

	struct UInventoryComponent_C_SetIsHoodOn_Params {
		bool IsHoodOn;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_SetIsHoodOn_Params params;
	params.IsHoodOn = IsHoodOn;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemsOnDrop
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateEquippedItemsOnDrop(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, int32_t Count, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemsOnDrop");

	struct UInventoryComponent_C_UpdateEquippedItemsOnDrop_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		int32_t Count;			//Offset: 4 | ElementSize: 4
		struct FName ItemName;			//Offset: 8 | ElementSize: 8
		int32_t ArrayID;			//Offset: 16 | ElementSize: 4
	};
	UInventoryComponent_C_UpdateEquippedItemsOnDrop_Params params;
	params.EquipmentSlot = EquipmentSlot;
	params.Count = Count;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FST_ItemInventorys	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItem(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem");

	struct UInventoryComponent_C_GetCurrentlyEquippedItem_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemInventorys Item;			//Offset: 4 | ElementSize: 48
		bool found;			//Offset: 52 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItem_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CompareStrings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: String1	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: String2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Equal_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: _1Before2_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::CompareStrings(struct FString String1, struct FString String2, bool* Equal_, bool* _1Before2_) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CompareStrings");

	struct UInventoryComponent_C_CompareStrings_Params {
		struct FString String1;			//Offset: 0 | ElementSize: 16
		struct FString String2;			//Offset: 16 | ElementSize: 16
		bool Equal_;			//Offset: 32 | ElementSize: 1
		bool _1Before2_;			//Offset: 33 | ElementSize: 1
	};
	UInventoryComponent_C_CompareStrings_Params params;
	params.String1 = String1;
	params.String2 = String2;

	UObject::ProcessEvent(fn, &params);
	if (Equal_ != nullptr)
		*Equal_ = params.Equal_;
	if (_1Before2_ != nullptr)
		*_1Before2_ = params._1Before2_;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.Sort Inventory by Name
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::Sort_Inventory_by_Name() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Sort Inventory by Name");

	struct UInventoryComponent_C_Sort_Inventory_by_Name_Params {
	};
	UInventoryComponent_C_Sort_Inventory_by_Name_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.RandomizeNPCClothing
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::RandomizeNPCClothing(class ABP_BaseCharacter_C* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RandomizeNPCClothing");

	struct UInventoryComponent_C_RandomizeNPCClothing_Params {
		class ABP_BaseCharacter_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	UInventoryComponent_C_RandomizeNPCClothing_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.FindToolInInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Found_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::FindToolInInventory(TEnumAsByte<E_Tools> ToolType, bool* Found_, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindToolInInventory");

	struct UInventoryComponent_C_FindToolInInventory_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		bool Found_;			//Offset: 1 | ElementSize: 1
		int32_t Count;			//Offset: 4 | ElementSize: 4
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
		struct FName ItemName;			//Offset: 856 | ElementSize: 8
		int32_t ArrayIndex;			//Offset: 864 | ElementSize: 4
	};
	UInventoryComponent_C_FindToolInInventory_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.FindAmmoInInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AmmoType	Type: TEnumAsByte<E_Ammo>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Found_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::FindAmmoInInventory(TEnumAsByte<E_Ammo> AmmoType, bool* Found_, int32_t* Count, struct FName* ItemName, int32_t* ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindAmmoInInventory");

	struct UInventoryComponent_C_FindAmmoInInventory_Params {
		TEnumAsByte<E_Ammo> AmmoType;			//Offset: 0 | ElementSize: 1
		bool Found_;			//Offset: 1 | ElementSize: 1
		int32_t Count;			//Offset: 4 | ElementSize: 4
		struct FName ItemName;			//Offset: 8 | ElementSize: 8
		int32_t ArrayID;			//Offset: 16 | ElementSize: 4
	};
	UInventoryComponent_C_FindAmmoInInventory_Params params;
	params.AmmoType = AmmoType;

	UObject::ProcessEvent(fn, &params);
	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayID != nullptr)
		*ArrayID = params.ArrayID;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemCapacity
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateEquippedItemCapacity(int32_t Capacity) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemCapacity");

	struct UInventoryComponent_C_UpdateEquippedItemCapacity_Params {
		int32_t Capacity;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_UpdateEquippedItemCapacity_Params params;
	params.Capacity = Capacity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetEquippedItemIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::GetEquippedItemIndex(struct FName* ItemName, int32_t* ArrayIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetEquippedItemIndex");

	struct UInventoryComponent_C_GetEquippedItemIndex_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t ArrayIndex;			//Offset: 8 | ElementSize: 4
	};
	UInventoryComponent_C_GetEquippedItemIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.DecreaseFreshness
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::DecreaseFreshness() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseFreshness");

	struct UInventoryComponent_C_DecreaseFreshness_Params {
	};
	UInventoryComponent_C_DecreaseFreshness_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.FreshnessDropToZero
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::FreshnessDropToZero(struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FreshnessDropToZero");

	struct UInventoryComponent_C_FreshnessDropToZero_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t ArrayID;			//Offset: 8 | ElementSize: 4
	};
	UInventoryComponent_C_FreshnessDropToZero_Params params;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemHP
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Offhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateEquippedItemHP(float HP, bool Offhand) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemHP");

	struct UInventoryComponent_C_UpdateEquippedItemHP_Params {
		float HP;			//Offset: 0 | ElementSize: 4
		bool Offhand;			//Offset: 4 | ElementSize: 1
	};
	UInventoryComponent_C_UpdateEquippedItemHP_Params params;
	params.HP = HP;
	params.Offhand = Offhand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::CalculateClothesStats() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateClothesStats");

	struct UInventoryComponent_C_CalculateClothesStats_Params {
	};
	UInventoryComponent_C_CalculateClothesStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ConditionDropToZero
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Offhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::ConditionDropToZero(bool Offhand, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ConditionDropToZero");

	struct UInventoryComponent_C_ConditionDropToZero_Params {
		bool Offhand;			//Offset: 0 | ElementSize: 1
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_ConditionDropToZero_Params params;
	params.Offhand = Offhand;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.EmptyContainer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CountToEmpty	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::EmptyContainer(int32_t CountToEmpty, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EmptyContainer");

	struct UInventoryComponent_C_EmptyContainer_Params {
		int32_t CountToEmpty;			//Offset: 0 | ElementSize: 4
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_EmptyContainer_Params params;
	params.CountToEmpty = CountToEmpty;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AddItemsFromPreset
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutfitPresetRow	Type: struct FST_OutfitsPresets	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: ItemsIndexes	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::AddItemsFromPreset(struct FST_OutfitsPresets OutfitPresetRow, TArray<int32_t>* ItemsIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItemsFromPreset");

	struct UInventoryComponent_C_AddItemsFromPreset_Params {
		struct FST_OutfitsPresets OutfitPresetRow;			//Offset: 0 | ElementSize: 192
		TArray<int32_t> ItemsIndexes;			//Offset: 192 | ElementSize: 16
	};
	UInventoryComponent_C_AddItemsFromPreset_Params params;
	params.OutfitPresetRow = OutfitPresetRow;

	UObject::ProcessEvent(fn, &params);
	if (ItemsIndexes != nullptr)
		*ItemsIndexes = params.ItemsIndexes;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.RemoveCraftingResourceWithLowestCondition_ByName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AutoTransferExhaustedItemToStorage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VillageManagerReference	Type: class ABP_VillageManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseConsumeInsteadOfRemove	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OnlyRemoveItemsWithFullCapacity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RemainingCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnedHP	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemovedItemsCache	Type: TArray<struct FST_ItemCache>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::RemoveCraftingResourceWithLowestCondition_ByName(struct FName ItemName, int32_t Count, bool DisplayNotification, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool UseConsumeInsteadOfRemove, bool OnlyRemoveItemsWithFullCapacity, bool* Success, int32_t* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveCraftingResourceWithLowestCondition_ByName");

	struct UInventoryComponent_C_RemoveCraftingResourceWithLowestCondition_ByName_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		bool DisplayNotification;			//Offset: 12 | ElementSize: 1
		bool AutoTransferExhaustedItemToStorage;			//Offset: 13 | ElementSize: 1
		class ABP_VillageManager_C* VillageManagerReference;			//Offset: 16 | ElementSize: 8
		bool UseConsumeInsteadOfRemove;			//Offset: 24 | ElementSize: 1
		bool OnlyRemoveItemsWithFullCapacity;			//Offset: 25 | ElementSize: 1
		bool Success;			//Offset: 26 | ElementSize: 1
		int32_t RemainingCount;			//Offset: 28 | ElementSize: 4
		float ReturnedHP;			//Offset: 32 | ElementSize: 4
		TArray<struct FST_ItemCache> RemovedItemsCache;			//Offset: 40 | ElementSize: 16
	};
	UInventoryComponent_C_RemoveCraftingResourceWithLowestCondition_ByName_Params params;
	params.ItemName = ItemName;
	params.Count = Count;
	params.DisplayNotification = DisplayNotification;
	params.AutoTransferExhaustedItemToStorage = AutoTransferExhaustedItemToStorage;
	params.VillageManagerReference = VillageManagerReference;
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
// Function InventoryComponent.InventoryComponent_C.FindAllItemsOfID_InInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnCapacityIfPossible	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OmmitEquippedItems	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReturnOnlyItemsWithFullCapacity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::FindAllItemsOfID_InInventory(struct FName ItemName, bool ReturnCapacityIfPossible, bool OmmitEquippedItems, bool ReturnOnlyItemsWithFullCapacity, bool* found, int32_t* Count) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindAllItemsOfID_InInventory");

	struct UInventoryComponent_C_FindAllItemsOfID_InInventory_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		bool ReturnCapacityIfPossible;			//Offset: 8 | ElementSize: 1
		bool OmmitEquippedItems;			//Offset: 9 | ElementSize: 1
		bool ReturnOnlyItemsWithFullCapacity;			//Offset: 10 | ElementSize: 1
		bool found;			//Offset: 11 | ElementSize: 1
		int32_t Count;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_FindAllItemsOfID_InInventory_Params params;
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
// Function InventoryComponent.InventoryComponent_C.CalculateItemTradePricePerUnit
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ItemReference	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsPlayerOwnerOfItem_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsMarketSelling_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Price	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::CalculateItemTradePricePerUnit(struct FST_ItemInventorys ItemReference, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, float* Price) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateItemTradePricePerUnit");

	struct UInventoryComponent_C_CalculateItemTradePricePerUnit_Params {
		struct FST_ItemInventorys ItemReference;			//Offset: 0 | ElementSize: 48
		bool IsPlayerOwnerOfItem_;			//Offset: 48 | ElementSize: 1
		bool IsMarketSelling_;			//Offset: 49 | ElementSize: 1
		float Price;			//Offset: 52 | ElementSize: 4
	};
	UInventoryComponent_C_CalculateItemTradePricePerUnit_Params params;
	params.ItemReference = ItemReference;
	params.IsPlayerOwnerOfItem_ = IsPlayerOwnerOfItem_;
	params.IsMarketSelling_ = IsMarketSelling_;

	UObject::ProcessEvent(fn, &params);
	if (Price != nullptr)
		*Price = params.Price;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.IsFull
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemsCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SingleWeight	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Full	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CountOfItemsThatWillFitIn	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::IsFull(int32_t ItemsCount, float SingleWeight, bool* Full, int32_t* CountOfItemsThatWillFitIn) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.IsFull");

	struct UInventoryComponent_C_IsFull_Params {
		int32_t ItemsCount;			//Offset: 0 | ElementSize: 4
		float SingleWeight;			//Offset: 4 | ElementSize: 4
		bool Full;			//Offset: 8 | ElementSize: 1
		int32_t CountOfItemsThatWillFitIn;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_IsFull_Params params;
	params.ItemsCount = ItemsCount;
	params.SingleWeight = SingleWeight;

	UObject::ProcessEvent(fn, &params);
	if (Full != nullptr)
		*Full = params.Full;
	if (CountOfItemsThatWillFitIn != nullptr)
		*CountOfItemsThatWillFitIn = params.CountOfItemsThatWillFitIn;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.DecreaseItemsCapacity
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CapacityToDecrease	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::DecreaseItemsCapacity(int32_t CapacityToDecrease, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseItemsCapacity");

	struct UInventoryComponent_C_DecreaseItemsCapacity_Params {
		int32_t CapacityToDecrease;			//Offset: 0 | ElementSize: 4
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_DecreaseItemsCapacity_Params params;
	params.CapacityToDecrease = CapacityToDecrease;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CheckItemForInteraction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Holdable	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WantedToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedToolType, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CheckItemForInteraction");

	struct UInventoryComponent_C_CheckItemForInteraction_Params {
		class ABP_MasterHoldableItem_C* Holdable;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> WantedToolType;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	UInventoryComponent_C_CheckItemForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedToolType = WantedToolType;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::ClearArmorSlot(TEnumAsByte<E_EquipmentCategories> ArmorSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearArmorSlot");

	struct UInventoryComponent_C_ClearArmorSlot_Params {
		TEnumAsByte<E_EquipmentCategories> ArmorSlot;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_ClearArmorSlot_Params params;
	params.ArmorSlot = ArmorSlot;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ClearInventory
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::ClearInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearInventory");

	struct UInventoryComponent_C_ClearInventory_Params {
	};
	UInventoryComponent_C_ClearInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ForTransfer
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldSpawn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::RemoveItemFromInventory_ForTransfer(int32_t Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, const struct FName& ItemName) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ForTransfer");

	struct UInventoryComponent_C_RemoveItemFromInventory_ForTransfer_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
		bool ShouldSpawn;			//Offset: 4 | ElementSize: 1
		bool DisplayNotification;			//Offset: 5 | ElementSize: 1
		bool UpdateInventory;			//Offset: 6 | ElementSize: 1
		int32_t ArrayID;			//Offset: 8 | ElementSize: 4
		struct FName ItemName;			//Offset: 12 | ElementSize: 8
	};
	UInventoryComponent_C_RemoveItemFromInventory_ForTransfer_Params params;
	params.Count = Count;
	params.ShouldSpawn = ShouldSpawn;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.ArrayID = ArrayID;
	params.ItemName = ItemName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ConsumeItem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CountToConsume	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutoTransferExhaustedItemToStorage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VillageManagerReference	Type: class ABP_VillageManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DisplayNotifications	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::ConsumeItem(int32_t CountToConsume, struct FName ItemName, int32_t ArrayID, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool DisplayNotifications) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ConsumeItem");

	struct UInventoryComponent_C_ConsumeItem_Params {
		int32_t CountToConsume;			//Offset: 0 | ElementSize: 4
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
		bool AutoTransferExhaustedItemToStorage;			//Offset: 16 | ElementSize: 1
		class ABP_VillageManager_C* VillageManagerReference;			//Offset: 24 | ElementSize: 8
		bool DisplayNotifications;			//Offset: 32 | ElementSize: 1
	};
	UInventoryComponent_C_ConsumeItem_Params params;
	params.CountToConsume = CountToConsume;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;
	params.AutoTransferExhaustedItemToStorage = AutoTransferExhaustedItemToStorage;
	params.VillageManagerReference = VillageManagerReference;
	params.DisplayNotifications = DisplayNotifications;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AssignSelectedItemToSelectedQuickslot_New
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuickslotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::AssignSelectedItemToSelectedQuickslot_New(const struct FName& ItemName, int32_t ArrayIndex, int32_t QuickslotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignSelectedItemToSelectedQuickslot_New");

	struct UInventoryComponent_C_AssignSelectedItemToSelectedQuickslot_New_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t ArrayIndex;			//Offset: 8 | ElementSize: 4
		int32_t QuickslotIndex;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_AssignSelectedItemToSelectedQuickslot_New_Params params;
	params.ItemName = ItemName;
	params.ArrayIndex = ArrayIndex;
	params.QuickslotIndex = QuickslotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnRemove
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateWeightOnRemove(struct FName ItemName, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateWeightOnRemove");

	struct UInventoryComponent_C_UpdateWeightOnRemove_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
	};
	UInventoryComponent_C_UpdateWeightOnRemove_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnAdd
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateWeightOnAdd(struct FName ItemName, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateWeightOnAdd");

	struct UInventoryComponent_C_UpdateWeightOnAdd_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
	};
	UInventoryComponent_C_UpdateWeightOnAdd_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.EquipArmor_Horse
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeVariantOverride	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::EquipArmor_Horse(struct FST_ItemInventorys* Item, struct FST_ColorTable DyeVariantOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipArmor_Horse");

	struct UInventoryComponent_C_EquipArmor_Horse_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		struct FST_ColorTable DyeVariantOverride;			//Offset: 48 | ElementSize: 16
	};
	UInventoryComponent_C_EquipArmor_Horse_Params params;
	params.DyeVariantOverride = DyeVariantOverride;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UnequipArmor_Horse
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RemoveFromInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::UnequipArmor_Horse(struct FST_ItemInventorys* Item, bool RemoveFromInventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipArmor_Horse");

	struct UInventoryComponent_C_UnequipArmor_Horse_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		bool RemoveFromInventory;			//Offset: 48 | ElementSize: 1
	};
	UInventoryComponent_C_UnequipArmor_Horse_Params params;
	params.RemoveFromInventory = RemoveFromInventory;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem_Horse
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FST_ItemInventorys	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItem_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem_Horse");

	struct UInventoryComponent_C_GetCurrentlyEquippedItem_Horse_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemInventorys Item;			//Offset: 4 | ElementSize: 48
		bool found;			//Offset: 52 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItem_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats_Horse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::CalculateClothesStats_Horse() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateClothesStats_Horse");

	struct UInventoryComponent_C_CalculateClothesStats_Horse_Params {
	};
	UInventoryComponent_C_CalculateClothesStats_Horse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus_Horse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateOldGearStatus_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus_Horse");

	struct UInventoryComponent_C_UpdateOldGearStatus_Horse_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_UpdateOldGearStatus_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack_Horse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::AssignToArmorSlot_SplitStack_Horse(TEnumAsByte<E_EquipmentCategories> ArmorSlot, struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack_Horse");

	struct UInventoryComponent_C_AssignToArmorSlot_SplitStack_Horse_Params {
		TEnumAsByte<E_EquipmentCategories> ArmorSlot;			//Offset: 0 | ElementSize: 1
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		int32_t ArrayID;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_AssignToArmorSlot_SplitStack_Horse_Params params;
	params.ArmorSlot = ArmorSlot;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot_Horse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::ClearArmorSlot_Horse(TEnumAsByte<E_EquipmentCategories> ArmorSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearArmorSlot_Horse");

	struct UInventoryComponent_C_ClearArmorSlot_Horse_Params {
		TEnumAsByte<E_EquipmentCategories> ArmorSlot;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_ClearArmorSlot_Horse_Params params;
	params.ArmorSlot = ArmorSlot;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails_Horse
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItemDetails_Horse(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails_Horse");

	struct UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Horse_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
		bool found;			//Offset: 856 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.FindToolByActivityInInventory
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType_Activity	Type: TEnumAsByte<E_Tools_Activity>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GetItemWithLowestHP	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Found_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemHP	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::FindToolByActivityInInventory(TEnumAsByte<E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* Found_, int32_t* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int32_t* ArrayIndex, float* ItemHP) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindToolByActivityInInventory");

	struct UInventoryComponent_C_FindToolByActivityInInventory_Params {
		TEnumAsByte<E_Tools_Activity> ToolType_Activity;			//Offset: 0 | ElementSize: 1
		bool GetItemWithLowestHP;			//Offset: 1 | ElementSize: 1
		bool Found_;			//Offset: 2 | ElementSize: 1
		int32_t Count;			//Offset: 4 | ElementSize: 4
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
		struct FName ItemName;			//Offset: 856 | ElementSize: 8
		int32_t ArrayIndex;			//Offset: 864 | ElementSize: 4
		float ItemHP;			//Offset: 868 | ElementSize: 4
	};
	UInventoryComponent_C_FindToolByActivityInInventory_Params params;
	params.ToolType_Activity = ToolType_Activity;
	params.GetItemWithLowestHP = GetItemWithLowestHP;

	UObject::ProcessEvent(fn, &params);
	if (Found_ != nullptr)
		*Found_ = params.Found_;
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
// Function InventoryComponent.InventoryComponent_C.UpdateArmorParams
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UInventoryComponent_C::UpdateArmorParams() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateArmorParams");

	struct UInventoryComponent_C_UpdateArmorParams_Params {
	};
	UInventoryComponent_C_UpdateArmorParams_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.CalculatePriceOfMarketSoldItems
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SoldItems	Type: TArray<struct FST_ItemCache>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: CoinsForTransaction	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::CalculatePriceOfMarketSoldItems(TArray<struct FST_ItemCache>* SoldItems, int32_t* CoinsForTransaction) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculatePriceOfMarketSoldItems");

	struct UInventoryComponent_C_CalculatePriceOfMarketSoldItems_Params {
		TArray<struct FST_ItemCache> SoldItems;			//Offset: 0 | ElementSize: 16
		int32_t CoinsForTransaction;			//Offset: 16 | ElementSize: 4
	};
	UInventoryComponent_C_CalculatePriceOfMarketSoldItems_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SoldItems != nullptr)
		*SoldItems = params.SoldItems;
	if (CoinsForTransaction != nullptr)
		*CoinsForTransaction = params.CoinsForTransaction;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.DecreaseHPOfMostUsedToolOfType
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HPAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::DecreaseHPOfMostUsedToolOfType(TEnumAsByte<E_Tools> ToolType, float HPAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseHPOfMostUsedToolOfType");

	struct UInventoryComponent_C_DecreaseHPOfMostUsedToolOfType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		float HPAmount;			//Offset: 4 | ElementSize: 4
	};
	UInventoryComponent_C_DecreaseHPOfMostUsedToolOfType_Params params;
	params.ToolType = ToolType;
	params.HPAmount = HPAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.DecreaseHPOfMostUsedToolOfName
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HPAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::DecreaseHPOfMostUsedToolOfName(struct FName ToolName, int32_t ToolIndex, float HPAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseHPOfMostUsedToolOfName");

	struct UInventoryComponent_C_DecreaseHPOfMostUsedToolOfName_Params {
		struct FName ToolName;			//Offset: 0 | ElementSize: 8
		int32_t ToolIndex;			//Offset: 8 | ElementSize: 4
		float HPAmount;			//Offset: 12 | ElementSize: 4
	};
	UInventoryComponent_C_DecreaseHPOfMostUsedToolOfName_Params params;
	params.ToolName = ToolName;
	params.ToolIndex = ToolIndex;
	params.HPAmount = HPAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByName_Decreasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SortedInventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByName_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* SortedInventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByName_Decreasing");

	struct UInventoryComponent_C_SortUIInventory_ByName_Decreasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> SortedInventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByName_Decreasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SortedInventory != nullptr)
		*SortedInventory = params.SortedInventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCount_Increasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByCount_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCount_Increasing");

	struct UInventoryComponent_C_SortUIInventory_ByCount_Increasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByCount_Increasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCount_Decreasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByCount_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCount_Decreasing");

	struct UInventoryComponent_C_SortUIInventory_ByCount_Decreasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByCount_Decreasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCondition_Increasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByCondition_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCondition_Increasing");

	struct UInventoryComponent_C_SortUIInventory_ByCondition_Increasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByCondition_Increasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCondition_Decreasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByCondition_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByCondition_Decreasing");

	struct UInventoryComponent_C_SortUIInventory_ByCondition_Decreasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByCondition_Decreasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByWeight_Increasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByWeight_Increasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByWeight_Increasing");

	struct UInventoryComponent_C_SortUIInventory_ByWeight_Increasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByWeight_Increasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByWeight_Decreasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByWeight_Decreasing(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByWeight_Decreasing");

	struct UInventoryComponent_C_SortUIInventory_ByWeight_Decreasing_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByWeight_Decreasing_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByPrice_Increasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CalculatePrice	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsPlayerOwnerOfItem_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsMarketSelling_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByPrice_Increasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByPrice_Increasing");

	struct UInventoryComponent_C_SortUIInventory_ByPrice_Increasing_Params {
		bool CalculatePrice;			//Offset: 0 | ElementSize: 1
		bool IsPlayerOwnerOfItem_;			//Offset: 1 | ElementSize: 1
		bool IsMarketSelling_;			//Offset: 2 | ElementSize: 1
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 8 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByPrice_Increasing_Params params;
	params.CalculatePrice = CalculatePrice;
	params.IsPlayerOwnerOfItem_ = IsPlayerOwnerOfItem_;
	params.IsMarketSelling_ = IsMarketSelling_;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByPrice_Decreasing
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CalculatePrice	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsPlayerOwnerOfItem_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsMarketSelling_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::SortUIInventory_ByPrice_Decreasing(bool CalculatePrice, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SortUIInventory_ByPrice_Decreasing");

	struct UInventoryComponent_C_SortUIInventory_ByPrice_Decreasing_Params {
		bool CalculatePrice;			//Offset: 0 | ElementSize: 1
		bool IsPlayerOwnerOfItem_;			//Offset: 1 | ElementSize: 1
		bool IsMarketSelling_;			//Offset: 2 | ElementSize: 1
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 8 | ElementSize: 80
	};
	UInventoryComponent_C_SortUIInventory_ByPrice_Decreasing_Params params;
	params.CalculatePrice = CalculatePrice;
	params.IsPlayerOwnerOfItem_ = IsPlayerOwnerOfItem_;
	params.IsMarketSelling_ = IsMarketSelling_;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.ShouldBindOnSeasonChanged
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool UInventoryComponent_C::ShouldBindOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ShouldBindOnSeasonChanged");

	struct UInventoryComponent_C_ShouldBindOnSeasonChanged_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UInventoryComponent_C_ShouldBindOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.MergePlayerMeshes
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Unequip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DyeVariant	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UInventoryComponent_C::MergePlayerMeshes(bool Unequip, struct FST_ColorTable DyeVariant) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.MergePlayerMeshes");

	struct UInventoryComponent_C_MergePlayerMeshes_Params {
		bool Unequip;			//Offset: 0 | ElementSize: 1
		struct FST_ColorTable DyeVariant;			//Offset: 8 | ElementSize: 16
	};
	UInventoryComponent_C_MergePlayerMeshes_Params params;
	params.Unequip = Unequip;
	params.DyeVariant = DyeVariant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.BaseFinalOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UInventoryComponent_C::BaseFinalOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BaseFinalOverloadWeight_BPI");

	struct UInventoryComponent_C_BaseFinalOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_BaseFinalOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.BaseInitialOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UInventoryComponent_C::BaseInitialOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BaseInitialOverloadWeight_BPI");

	struct UInventoryComponent_C_BaseInitialOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_BaseInitialOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentTotalWeightOfInventory_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UInventoryComponent_C::GetCurrentTotalWeightOfInventory_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentTotalWeightOfInventory_BPI");

	struct UInventoryComponent_C_GetCurrentTotalWeightOfInventory_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_GetCurrentTotalWeightOfInventory_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetFinalOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UInventoryComponent_C::GetFinalOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetFinalOverloadWeight_BPI");

	struct UInventoryComponent_C_GetFinalOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_GetFinalOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetInitialOverloadWeight_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UInventoryComponent_C::GetInitialOverloadWeight_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetInitialOverloadWeight_BPI");

	struct UInventoryComponent_C_GetInitialOverloadWeight_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInventoryComponent_C_GetInitialOverloadWeight_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemMount_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FST_ItemInventorys	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItemMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemMount_BPI");

	struct UInventoryComponent_C_GetCurrentlyEquippedItemMount_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemInventorys Item;			//Offset: 4 | ElementSize: 48
		bool found;			//Offset: 52 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItemMount_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetInventoryItems_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Inventory	Type: TMap<struct FName, struct FST_InventoryItemsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::GetInventoryItems_BPI(TMap<struct FName, struct FST_InventoryItemsArray>* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetInventoryItems_BPI");

	struct UInventoryComponent_C_GetInventoryItems_BPI_Params {
		TMap<struct FName, struct FST_InventoryItemsArray> Inventory;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_GetInventoryItems_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.AddItemToInventory_BPI
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
void UInventoryComponent_C::AddItemToInventory_BPI(struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int32_t* AddedAtIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItemToInventory_BPI");

	struct UInventoryComponent_C_AddItemToInventory_BPI_Params {
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
	UInventoryComponent_C_AddItemToInventory_BPI_Params params;
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
// Function InventoryComponent.InventoryComponent_C.GetArmorHorse_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArmorHorse	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UInventoryComponent_C::GetArmorHorse_BPI(TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys>* ArmorHorse) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetArmorHorse_BPI");

	struct UInventoryComponent_C_GetArmorHorse_BPI_Params {
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FST_ItemInventorys> ArmorHorse;			//Offset: 0 | ElementSize: 80
	};
	UInventoryComponent_C_GetArmorHorse_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ArmorHorse != nullptr)
		*ArmorHorse = params.ArmorHorse;
}

/////////////////////////////////////////////
// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetailsMount_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UInventoryComponent_C::GetCurrentlyEquippedItemDetailsMount_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetailsMount_BPI");

	struct UInventoryComponent_C_GetCurrentlyEquippedItemDetailsMount_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
		bool found;			//Offset: 856 | ElementSize: 1
	};
	UInventoryComponent_C_GetCurrentlyEquippedItemDetailsMount_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (found != nullptr)
		*found = params.found;
}

#pragma endregion
}