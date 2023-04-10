#include "../SDK.h"
#include "BP_MasterItem_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_MasterItem_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_MasterItem_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_MasterItem_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of InspectorPoint
// Declaration: class USphereComponent* InspectorPoint
class USphereComponent* ABP_MasterItem_C::M_GetInspectorPoint() const {
	return Read<class USphereComponent*>((byte*)this + 552);
}
class USphereComponent** ABP_MasterItem_C::M_PtrGetInspectorPoint() {
	return reinterpret_cast<class USphereComponent**>((byte*)this + 552);
}
void ABP_MasterItem_C::M_SetInspectorPoint(const class USphereComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of AquaticBoyuancy
// Declaration: class UBP_AquaticBuoyancy_C* AquaticBoyuancy
class UBP_AquaticBuoyancy_C* ABP_MasterItem_C::M_GetAquaticBoyuancy() const {
	return Read<class UBP_AquaticBuoyancy_C*>((byte*)this + 560);
}
class UBP_AquaticBuoyancy_C** ABP_MasterItem_C::M_PtrGetAquaticBoyuancy() {
	return reinterpret_cast<class UBP_AquaticBuoyancy_C**>((byte*)this + 560);
}
void ABP_MasterItem_C::M_SetAquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of UI_Inspector
// Declaration: class UWidgetComponent* UI_Inspector
class UWidgetComponent* ABP_MasterItem_C::M_GetUI_Inspector() const {
	return Read<class UWidgetComponent*>((byte*)this + 568);
}
class UWidgetComponent** ABP_MasterItem_C::M_PtrGetUI_Inspector() {
	return reinterpret_cast<class UWidgetComponent**>((byte*)this + 568);
}
void ABP_MasterItem_C::M_SetUI_Inspector(const class UWidgetComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of StaticMesh
// Declaration: class UStaticMeshComponent* StaticMesh
class UStaticMeshComponent* ABP_MasterItem_C::M_GetStaticMesh() const {
	return Read<class UStaticMeshComponent*>((byte*)this + 576);
}
class UStaticMeshComponent** ABP_MasterItem_C::M_PtrGetStaticMesh() {
	return reinterpret_cast<class UStaticMeshComponent**>((byte*)this + 576);
}
void ABP_MasterItem_C::M_SetStaticMesh(const class UStaticMeshComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of AquaticInteraction
// Declaration: class UBP_AquaticInteraction_C* AquaticInteraction
class UBP_AquaticInteraction_C* ABP_MasterItem_C::M_GetAquaticInteraction() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 584);
}
class UBP_AquaticInteraction_C** ABP_MasterItem_C::M_PtrGetAquaticInteraction() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 584);
}
void ABP_MasterItem_C::M_SetAquaticInteraction(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of Item
// Declaration: struct FDataTableRowHandle Item
struct FDataTableRowHandle ABP_MasterItem_C::M_GetItem() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 592);
}
struct FDataTableRowHandle* ABP_MasterItem_C::M_PtrGetItem() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 592);
}
void ABP_MasterItem_C::M_SetItem(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of ResourceCount
// Declaration: int32_t ResourceCount
int32_t ABP_MasterItem_C::M_GetResourceCount() const {
	return Read<int32_t>((byte*)this + 608);
}
int32_t* ABP_MasterItem_C::M_PtrGetResourceCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 608);
}
void ABP_MasterItem_C::M_SetResourceCount(const int32_t& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of CharacterReference
// Declaration: class APawn* CharacterReference
class APawn* ABP_MasterItem_C::M_GetCharacterReference() const {
	return Read<class APawn*>((byte*)this + 616);
}
class APawn** ABP_MasterItem_C::M_PtrGetCharacterReference() {
	return reinterpret_cast<class APawn**>((byte*)this + 616);
}
void ABP_MasterItem_C::M_SetCharacterReference(const class APawn*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of ItemDetails
// Declaration: struct FST_ItemDetails ItemDetails
struct FST_ItemDetails ABP_MasterItem_C::M_GetItemDetails() const {
	return Read<struct FST_ItemDetails>((byte*)this + 624);
}
struct FST_ItemDetails* ABP_MasterItem_C::M_PtrGetItemDetails() {
	return reinterpret_cast<struct FST_ItemDetails*>((byte*)this + 624);
}
void ABP_MasterItem_C::M_SetItemDetails(const struct FST_ItemDetails& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of ItemName
// Declaration: struct FName ItemName
struct FName ABP_MasterItem_C::M_GetItemName() const {
	return Read<struct FName>((byte*)this + 1472);
}
struct FName* ABP_MasterItem_C::M_PtrGetItemName() {
	return reinterpret_cast<struct FName*>((byte*)this + 1472);
}
void ABP_MasterItem_C::M_SetItemName(const struct FName& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of CurrentHP
// Declaration: float CurrentHP
float ABP_MasterItem_C::M_GetCurrentHP() const {
	return Read<float>((byte*)this + 1480);
}
float* ABP_MasterItem_C::M_PtrGetCurrentHP() {
	return reinterpret_cast<float*>((byte*)this + 1480);
}
void ABP_MasterItem_C::M_SetCurrentHP(const float& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of SimulatePhysicsOverride
// Declaration: bool SimulatePhysicsOverride
bool ABP_MasterItem_C::M_GetSimulatePhysicsOverride() const {
	return Read<bool>((byte*)this + 1484);
}
bool* ABP_MasterItem_C::M_PtrGetSimulatePhysicsOverride() {
	return reinterpret_cast<bool*>((byte*)this + 1484);
}
void ABP_MasterItem_C::M_SetSimulatePhysicsOverride(const bool& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of SimulatePhysics
// Declaration: bool SimulatePhysics
bool ABP_MasterItem_C::M_GetSimulatePhysics() const {
	return Read<bool>((byte*)this + 1485);
}
bool* ABP_MasterItem_C::M_PtrGetSimulatePhysics() {
	return reinterpret_cast<bool*>((byte*)this + 1485);
}
void ABP_MasterItem_C::M_SetSimulatePhysics(const bool& value) {
	Write((byte*)this + 1485, value);
}
// Member Getter and Setter of LifeTime
// Declaration: float LifeTime
float ABP_MasterItem_C::M_GetLifeTime() const {
	return Read<float>((byte*)this + 1488);
}
float* ABP_MasterItem_C::M_PtrGetLifeTime() {
	return reinterpret_cast<float*>((byte*)this + 1488);
}
void ABP_MasterItem_C::M_SetLifeTime(const float& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of InteractingActorReference
// Declaration: class ABP_BaseCharacter_C* InteractingActorReference
class ABP_BaseCharacter_C* ABP_MasterItem_C::M_GetInteractingActorReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 1496);
}
class ABP_BaseCharacter_C** ABP_MasterItem_C::M_PtrGetInteractingActorReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 1496);
}
void ABP_MasterItem_C::M_SetInteractingActorReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of Capacity
// Declaration: int32_t Capacity
int32_t ABP_MasterItem_C::M_GetCapacity() const {
	return Read<int32_t>((byte*)this + 1504);
}
int32_t* ABP_MasterItem_C::M_PtrGetCapacity() {
	return reinterpret_cast<int32_t*>((byte*)this + 1504);
}
void ABP_MasterItem_C::M_SetCapacity(const int32_t& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of found
// Declaration: bool found
bool ABP_MasterItem_C::M_Getfound() const {
	return Read<bool>((byte*)this + 1508);
}
bool* ABP_MasterItem_C::M_PtrGetfound() {
	return reinterpret_cast<bool*>((byte*)this + 1508);
}
void ABP_MasterItem_C::M_Setfound(const bool& value) {
	Write((byte*)this + 1508, value);
}
// Member Getter and Setter of PickUpTimerHandle
// Declaration: struct FTimerHandle PickUpTimerHandle
struct FTimerHandle ABP_MasterItem_C::M_GetPickUpTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 1512);
}
struct FTimerHandle* ABP_MasterItem_C::M_PtrGetPickUpTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1512);
}
void ABP_MasterItem_C::M_SetPickUpTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of Freshness
// Declaration: float Freshness
float ABP_MasterItem_C::M_GetFreshness() const {
	return Read<float>((byte*)this + 1520);
}
float* ABP_MasterItem_C::M_PtrGetFreshness() {
	return reinterpret_cast<float*>((byte*)this + 1520);
}
void ABP_MasterItem_C::M_SetFreshness(const float& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of UI_InspectorReference
// Declaration: class UUI_Inspector_Item_C* UI_InspectorReference
class UUI_Inspector_Item_C* ABP_MasterItem_C::M_GetUI_InspectorReference() const {
	return Read<class UUI_Inspector_Item_C*>((byte*)this + 1528);
}
class UUI_Inspector_Item_C** ABP_MasterItem_C::M_PtrGetUI_InspectorReference() {
	return reinterpret_cast<class UUI_Inspector_Item_C**>((byte*)this + 1528);
}
void ABP_MasterItem_C::M_SetUI_InspectorReference(const class UUI_Inspector_Item_C*& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_MasterItem_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 1536);
}
TEnumAsByte<E_Ownership>* ABP_MasterItem_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 1536);
}
void ABP_MasterItem_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of SeasonalRemoveOverride
// Declaration: bool SeasonalRemoveOverride
bool ABP_MasterItem_C::M_GetSeasonalRemoveOverride() const {
	return Read<bool>((byte*)this + 1537);
}
bool* ABP_MasterItem_C::M_PtrGetSeasonalRemoveOverride() {
	return reinterpret_cast<bool*>((byte*)this + 1537);
}
void ABP_MasterItem_C::M_SetSeasonalRemoveOverride(const bool& value) {
	Write((byte*)this + 1537, value);
}
// Member Getter and Setter of SeasonalRemove
// Declaration: bool SeasonalRemove
bool ABP_MasterItem_C::M_GetSeasonalRemove() const {
	return Read<bool>((byte*)this + 1538);
}
bool* ABP_MasterItem_C::M_PtrGetSeasonalRemove() {
	return reinterpret_cast<bool*>((byte*)this + 1538);
}
void ABP_MasterItem_C::M_SetSeasonalRemove(const bool& value) {
	Write((byte*)this + 1538, value);
}
// Member Getter and Setter of UsePickingAnimation
// Declaration: bool UsePickingAnimation
bool ABP_MasterItem_C::M_GetUsePickingAnimation() const {
	return Read<bool>((byte*)this + 1539);
}
bool* ABP_MasterItem_C::M_PtrGetUsePickingAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 1539);
}
void ABP_MasterItem_C::M_SetUsePickingAnimation(const bool& value) {
	Write((byte*)this + 1539, value);
}
// Member Getter and Setter of PreferTwoHandedAnimation
// Declaration: bool PreferTwoHandedAnimation
bool ABP_MasterItem_C::M_GetPreferTwoHandedAnimation() const {
	return Read<bool>((byte*)this + 1540);
}
bool* ABP_MasterItem_C::M_PtrGetPreferTwoHandedAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 1540);
}
void ABP_MasterItem_C::M_SetPreferTwoHandedAnimation(const bool& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of UseAdditionalMesh
// Declaration: bool UseAdditionalMesh
bool ABP_MasterItem_C::M_GetUseAdditionalMesh() const {
	return Read<bool>((byte*)this + 1541);
}
bool* ABP_MasterItem_C::M_PtrGetUseAdditionalMesh() {
	return reinterpret_cast<bool*>((byte*)this + 1541);
}
void ABP_MasterItem_C::M_SetUseAdditionalMesh(const bool& value) {
	Write((byte*)this + 1541, value);
}
// Member Getter and Setter of Guid
// Declaration: struct FGuid Guid
struct FGuid ABP_MasterItem_C::M_GetGuid() const {
	return Read<struct FGuid>((byte*)this + 1544);
}
struct FGuid* ABP_MasterItem_C::M_PtrGetGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 1544);
}
void ABP_MasterItem_C::M_SetGuid(const struct FGuid& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of Dropped
// Declaration: bool Dropped
bool ABP_MasterItem_C::M_GetDropped() const {
	return Read<bool>((byte*)this + 1560);
}
bool* ABP_MasterItem_C::M_PtrGetDropped() {
	return reinterpret_cast<bool*>((byte*)this + 1560);
}
void ABP_MasterItem_C::M_SetDropped(const bool& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of AttachedActors
// Declaration: TArray<class AActor*> AttachedActors
TArray<class AActor*> ABP_MasterItem_C::M_GetAttachedActors() const {
	return Read<TArray<class AActor*>>((byte*)this + 1568);
}
TArray<class AActor*>* ABP_MasterItem_C::M_PtrGetAttachedActors() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 1568);
}
void ABP_MasterItem_C::M_SetAttachedActors(const TArray<class AActor*>& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of Rotate_Left
// Declaration: bool Rotate_Left
bool ABP_MasterItem_C::M_GetRotate_Left() const {
	return Read<bool>((byte*)this + 1584);
}
bool* ABP_MasterItem_C::M_PtrGetRotate_Left() {
	return reinterpret_cast<bool*>((byte*)this + 1584);
}
void ABP_MasterItem_C::M_SetRotate_Left(const bool& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of Rotate_Right
// Declaration: bool Rotate_Right
bool ABP_MasterItem_C::M_GetRotate_Right() const {
	return Read<bool>((byte*)this + 1585);
}
bool* ABP_MasterItem_C::M_PtrGetRotate_Right() {
	return reinterpret_cast<bool*>((byte*)this + 1585);
}
void ABP_MasterItem_C::M_SetRotate_Right(const bool& value) {
	Write((byte*)this + 1585, value);
}
// Member Getter and Setter of PrecisionGrab
// Declaration: bool PrecisionGrab
bool ABP_MasterItem_C::M_GetPrecisionGrab() const {
	return Read<bool>((byte*)this + 1586);
}
bool* ABP_MasterItem_C::M_PtrGetPrecisionGrab() {
	return reinterpret_cast<bool*>((byte*)this + 1586);
}
void ABP_MasterItem_C::M_SetPrecisionGrab(const bool& value) {
	Write((byte*)this + 1586, value);
}
// Member Getter and Setter of ImpaledTimerHandle
// Declaration: struct FTimerHandle ImpaledTimerHandle
struct FTimerHandle ABP_MasterItem_C::M_GetImpaledTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 1592);
}
struct FTimerHandle* ABP_MasterItem_C::M_PtrGetImpaledTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1592);
}
void ABP_MasterItem_C::M_SetImpaledTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of RotationRoll
// Declaration: float RotationRoll
float ABP_MasterItem_C::M_GetRotationRoll() const {
	return Read<float>((byte*)this + 1600);
}
float* ABP_MasterItem_C::M_PtrGetRotationRoll() {
	return reinterpret_cast<float*>((byte*)this + 1600);
}
void ABP_MasterItem_C::M_SetRotationRoll(const float& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of RotationYaw
// Declaration: float RotationYaw
float ABP_MasterItem_C::M_GetRotationYaw() const {
	return Read<float>((byte*)this + 1604);
}
float* ABP_MasterItem_C::M_PtrGetRotationYaw() {
	return reinterpret_cast<float*>((byte*)this + 1604);
}
void ABP_MasterItem_C::M_SetRotationYaw(const float& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of FinalRotation
// Declaration: struct FRotator FinalRotation
struct FRotator ABP_MasterItem_C::M_GetFinalRotation() const {
	return Read<struct FRotator>((byte*)this + 1608);
}
struct FRotator* ABP_MasterItem_C::M_PtrGetFinalRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1608);
}
void ABP_MasterItem_C::M_SetFinalRotation(const struct FRotator& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of BaseYaw
// Declaration: float BaseYaw
float ABP_MasterItem_C::M_GetBaseYaw() const {
	return Read<float>((byte*)this + 1620);
}
float* ABP_MasterItem_C::M_PtrGetBaseYaw() {
	return reinterpret_cast<float*>((byte*)this + 1620);
}
void ABP_MasterItem_C::M_SetBaseYaw(const float& value) {
	Write((byte*)this + 1620, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ExecuteUbergraph_BP_MasterItem
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::ExecuteUbergraph_BP_MasterItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ExecuteUbergraph_BP_MasterItem");

	struct ABP_MasterItem_C_ExecuteUbergraph_BP_MasterItem_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_ExecuteUbergraph_BP_MasterItem_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.RotatePitch
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::RotatePitch(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.RotatePitch");

	struct ABP_MasterItem_C_RotatePitch_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_RotatePitch_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.RotateYaw
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::RotateYaw(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.RotateYaw");

	struct ABP_MasterItem_C_RotateYaw_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_RotateYaw_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.DetachItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::DetachItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.DetachItem");

	struct ABP_MasterItem_C_DetachItem_Params {
	};
	ABP_MasterItem_C_DetachItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.SetRotateMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RotateLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RotateRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::SetRotateMode(bool RotateLeft, bool RotateRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.SetRotateMode");

	struct ABP_MasterItem_C_SetRotateMode_Params {
		bool RotateLeft;			//Offset: 0 | ElementSize: 1
		bool RotateRight;			//Offset: 1 | ElementSize: 1
	};
	ABP_MasterItem_C_SetRotateMode_Params params;
	params.RotateLeft = RotateLeft;
	params.RotateRight = RotateRight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ReceiveEndPlay");

	struct ABP_MasterItem_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ReceiveTick");

	struct ABP_MasterItem_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.InteractStart
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.InteractStart");

	struct ABP_MasterItem_C_InteractStart_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.PerformActorInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::PerformActorInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.PerformActorInteraction");

	struct ABP_MasterItem_C_PerformActorInteraction_Params {
	};
	ABP_MasterItem_C_PerformActorInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.Interact");

	struct ABP_MasterItem_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool Timer;			//Offset: 144 | ElementSize: 1
	};
	ABP_MasterItem_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.InteractWithImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.InteractWithImpaledItem");

	struct ABP_MasterItem_C_InteractWithImpaledItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ShowInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::ShowInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ShowInspectorUI");

	struct ABP_MasterItem_C_ShowInspectorUI_Params {
	};
	ABP_MasterItem_C_ShowInspectorUI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.CheckOverlappingActor
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::CheckOverlappingActor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.CheckOverlappingActor");

	struct ABP_MasterItem_C_CheckOverlappingActor_Params {
	};
	ABP_MasterItem_C_CheckOverlappingActor_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.OnProjectileSpawned
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::OnProjectileSpawned() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.OnProjectileSpawned");

	struct ABP_MasterItem_C_OnProjectileSpawned_Params {
	};
	ABP_MasterItem_C_OnProjectileSpawned_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ReceiveBeginPlay");

	struct ABP_MasterItem_C_ReceiveBeginPlay_Params {
	};
	ABP_MasterItem_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.SetOccupied
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::SetOccupied(class APawn* Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.SetOccupied");

	struct ABP_MasterItem_C_SetOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_SetOccupied_Params params;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.StopAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::StopAttackFunction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.StopAttackFunction");

	struct ABP_MasterItem_C_StopAttackFunction_Params {
	};
	ABP_MasterItem_C_StopAttackFunction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.StartAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Socket	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::StartAttackFunction(bool Timer, struct FName Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.StartAttackFunction");

	struct ABP_MasterItem_C_StartAttackFunction_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
		struct FName Socket;			//Offset: 4 | ElementSize: 8
	};
	ABP_MasterItem_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.RemoveImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::RemoveImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.RemoveImpaledItem");

	struct ABP_MasterItem_C_RemoveImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.AddImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::AddImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.AddImpaledItem");

	struct ABP_MasterItem_C_AddImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsLookedAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Active	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsLookedAt(bool Active) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsLookedAt");

	struct ABP_MasterItem_C_IsLookedAt_Params {
		bool Active;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_IsLookedAt_Params params;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.ToolInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: UseChunkData	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ChunkData	Type: struct FST_Chunks	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.ToolInteract");

	struct ABP_MasterItem_C_ToolInteract_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool UseChunkData;			//Offset: 144 | ElementSize: 1
		struct FST_Chunks ChunkData;			//Offset: 152 | ElementSize: 520
	};
	ABP_MasterItem_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.InteractCancel
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.InteractCancel");

	struct ABP_MasterItem_C_InteractCancel_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.InteractInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeyDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::InteractInput(bool KeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.InteractInput");

	struct ABP_MasterItem_C_InteractInput_Params {
		bool KeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.UserConstructionScript
// Flags: Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.UserConstructionScript");

	struct ABP_MasterItem_C_UserConstructionScript_Params {
	};
	ABP_MasterItem_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.OnOwnershipSwap
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewOwnership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.OnOwnershipSwap");

	struct ABP_MasterItem_C_OnOwnershipSwap_Params {
		TEnumAsByte<E_Ownership> NewOwnership;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetDataToSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ItemData	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetDataToSave(struct FString* ItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetDataToSave");

	struct ABP_MasterItem_C_GetDataToSave_Params {
		struct FString ItemData;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterItem_C_GetDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ItemData != nullptr)
		*ItemData = params.ItemData;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.PickUpAttachedActors
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::PickUpAttachedActors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.PickUpAttachedActors");

	struct ABP_MasterItem_C_PickUpAttachedActors_Params {
	};
	ABP_MasterItem_C_PickUpAttachedActors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.SetMesh
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorldMesh	Type: TAssetPtr<class UObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash
// Name: AdditionaWorldMesh	Type: TAssetPtr<class UObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::SetMesh(TAssetPtr<class UObject> WorldMesh, TAssetPtr<class UObject> AdditionaWorldMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.SetMesh");

	struct ABP_MasterItem_C_SetMesh_Params {
		TAssetPtr<class UObject> WorldMesh;			//Offset: 0 | ElementSize: 40
		TAssetPtr<class UObject> AdditionaWorldMesh;			//Offset: 40 | ElementSize: 40
	};
	ABP_MasterItem_C_SetMesh_Params params;
	params.WorldMesh = WorldMesh;
	params.AdditionaWorldMesh = AdditionaWorldMesh;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.Grab
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractigActor	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_MasterItem_C::Grab(class ABP_BaseCharacter_C* InteractigActor, struct FHitResult Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.Grab");

	struct ABP_MasterItem_C_Grab_Params {
		class ABP_BaseCharacter_C* InteractigActor;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
	};
	ABP_MasterItem_C_Grab_Params params;
	params.InteractigActor = InteractigActor;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.CanGrab?
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_MasterItem_C::CanGrab_() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.CanGrab?");

	struct ABP_MasterItem_C_CanGrab__Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_CanGrab__Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.Rotate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Speed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GrabLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::Rotate(float Speed, struct FVector GrabLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.Rotate");

	struct ABP_MasterItem_C_Rotate_Params {
		float Speed;			//Offset: 0 | ElementSize: 4
		struct FVector GrabLocation;			//Offset: 4 | ElementSize: 12
	};
	ABP_MasterItem_C_Rotate_Params params;
	params.Speed = Speed;
	params.GrabLocation = GrabLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.SpecialRotation
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::SpecialRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.SpecialRotation");

	struct ABP_MasterItem_C_SpecialRotation_Params {
	};
	ABP_MasterItem_C_SpecialRotation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.CheckIfUnderground
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterItem_C::CheckIfUnderground() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.CheckIfUnderground");

	struct ABP_MasterItem_C_CheckIfUnderground_Params {
	};
	ABP_MasterItem_C_CheckIfUnderground_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.PlaySoundOnInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: TAssetPtr<class USoundBase>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::PlaySoundOnInteraction(TAssetPtr<class USoundBase> Sound, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.PlaySoundOnInteraction");

	struct ABP_MasterItem_C_PlaySoundOnInteraction_Params {
		TAssetPtr<class USoundBase> Sound;			//Offset: 0 | ElementSize: 40
		struct FVector Location;			//Offset: 40 | ElementSize: 12
	};
	ABP_MasterItem_C_PlaySoundOnInteraction_Params params;
	params.Sound = Sound;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowPressUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowTimerUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowOnlyName	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsInteractable");

	struct ABP_MasterItem_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_MasterItem_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractAction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractAction");

	struct ABP_MasterItem_C_GetInteractAction_Params {
		struct FText InteractActionText;			//Offset: 0 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 24 | ElementSize: 24
	};
	ABP_MasterItem_C_GetInteractAction_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractName");

	struct ABP_MasterItem_C_GetInteractName_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FText InteractName;			//Offset: 8 | ElementSize: 24
	};
	ABP_MasterItem_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractTool
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractTool");

	struct ABP_MasterItem_C_GetInteractTool_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterItem_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Tool != nullptr)
		*Tool = params.Tool;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractCount
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractCount(int32_t* Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractCount");

	struct ABP_MasterItem_C_GetInteractCount_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_GetInteractCount_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Count != nullptr)
		*Count = params.Count;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetHeldItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetHeldItem");

	struct ABP_MasterItem_C_GetHeldItem_Params {
		class ABP_MasterHoldableItem_C* HeldItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_GetHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetResourceType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetResourceType(TEnumAsByte<E_Resources>* ResourceType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetResourceType");

	struct ABP_MasterItem_C_GetResourceType_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_GetResourceType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.CheckOccupied
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::CheckOccupied(class APawn** Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.CheckOccupied");

	struct ABP_MasterItem_C_CheckOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_CheckOccupied_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Character != nullptr)
		*Character = params.Character;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsToolInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsToolInteractable");

	struct ABP_MasterItem_C_IsToolInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterItem_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetNPCInteractTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetNPCInteractTime(float* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetNPCInteractTime");

	struct ABP_MasterItem_C_GetNPCInteractTime_Params {
		float Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_GetNPCInteractTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsToolInteractable_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsToolInteractable_UI");

	struct ABP_MasterItem_C_IsToolInteractable_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterItem_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractTool_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BagMode	Type: TEnumAsByte<E_BagMode>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool, TEnumAsByte<E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications>* BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractTool_UI");

	struct ABP_MasterItem_C_GetInteractTool_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagMode;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 10 | ElementSize: 1
	};
	ABP_MasterItem_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetFluidType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FluidType	Type: TEnumAsByte<E_Fluids>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetFluidType(TEnumAsByte<E_Fluids>* FluidType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetFluidType");

	struct ABP_MasterItem_C_GetFluidType_Params {
		TEnumAsByte<E_Fluids> FluidType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_GetFluidType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FluidType != nullptr)
		*FluidType = params.FluidType;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractResources
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Show	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Resources	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractResources");

	struct ABP_MasterItem_C_GetInteractResources_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		TArray<struct FST_ItemResource> Resources;			//Offset: 16 | ElementSize: 16
	};
	ABP_MasterItem_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractTitle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Show	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Title	Type: struct FText	Flags: Parm, OutParm
// Name: ShowAdditionalTitle1	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalTitleText1	Type: struct FText	Flags: Parm, OutParm
// Name: ShowAdditionalTitle2	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalTitleText2	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractTitle");

	struct ABP_MasterItem_C_GetInteractTitle_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		struct FText Title;			//Offset: 16 | ElementSize: 24
		bool ShowAdditionalTitle1;			//Offset: 40 | ElementSize: 1
		struct FText AdditionalTitleText1;			//Offset: 48 | ElementSize: 24
		bool ShowAdditionalTitle2;			//Offset: 72 | ElementSize: 1
		struct FText AdditionalTitleText2;			//Offset: 80 | ElementSize: 24
	};
	ABP_MasterItem_C_GetInteractTitle_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Show != nullptr)
		*Show = params.Show;
	if (Title != nullptr)
		*Title = params.Title;
	if (ShowAdditionalTitle1 != nullptr)
		*ShowAdditionalTitle1 = params.ShowAdditionalTitle1;
	if (AdditionalTitleText1 != nullptr)
		*AdditionalTitleText1 = params.AdditionalTitleText1;
	if (ShowAdditionalTitle2 != nullptr)
		*ShowAdditionalTitle2 = params.ShowAdditionalTitle2;
	if (AdditionalTitleText2 != nullptr)
		*AdditionalTitleText2 = params.AdditionalTitleText2;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetOwnershipType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetOwnershipType(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetOwnershipType");

	struct ABP_MasterItem_C_GetOwnershipType_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_GetOwnershipType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsInteractCondition
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckCondition	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsInteractCondition");

	struct ABP_MasterItem_C_IsInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckCondition;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterItem_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractCondition
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Condition	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomText	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Text	Type: struct FText	Flags: Parm, OutParm
// Name: CustomColor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractCondition");

	struct ABP_MasterItem_C_GetInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		float Condition;			//Offset: 144 | ElementSize: 4
		bool CustomText;			//Offset: 148 | ElementSize: 1
		struct FText Text;			//Offset: 152 | ElementSize: 24
		bool CustomColor;			//Offset: 176 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 180 | ElementSize: 16
	};
	ABP_MasterItem_C_GetInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
	if (Condition != nullptr)
		*Condition = params.Condition;
	if (CustomText != nullptr)
		*CustomText = params.CustomText;
	if (Text != nullptr)
		*Text = params.Text;
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsToolNeeded
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckTools	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsToolNeeded");

	struct ABP_MasterItem_C_IsToolNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckTools;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterItem_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetOff-HandItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Off_HandItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetOff-HandItem");

	struct ABP_MasterItem_C_GetOff_HandItem_Params {
		class ABP_MasterHoldableItem_C* Off_HandItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_GetOff_HandItem_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractionDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractionDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractionDistance");

	struct ABP_MasterItem_C_GetInteractionDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterItem_C_GetInteractionDistance_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetID(struct FName* ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetID");

	struct ABP_MasterItem_C_GetID_Params {
		struct FName ID;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterItem_C_GetID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ID != nullptr)
		*ID = params.ID;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetFishData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemResource	Flags: Parm, OutParm, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetFishData");

	struct ABP_MasterItem_C_GetFishData_Params {
		struct FST_ItemResource Item;			//Offset: 0 | ElementSize: 24
		struct FTransform Transform;			//Offset: 32 | ElementSize: 48
	};
	ABP_MasterItem_C_GetFishData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsInteractAdditionalStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShowStatus	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsInteractAdditionalStatus");

	struct ABP_MasterItem_C_IsInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool ShowStatus;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterItem_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractAdditionalStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomColor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Status	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractAdditionalStatus");

	struct ABP_MasterItem_C_GetInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CustomColor;			//Offset: 8 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		struct FText Status;			//Offset: 32 | ElementSize: 24
	};
	ABP_MasterItem_C_GetInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
	if (Status != nullptr)
		*Status = params.Status;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsItemInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsItemInteractable");

	struct ABP_MasterItem_C_IsItemInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterItem_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetInteractItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetInteractItem");

	struct ABP_MasterItem_C_GetInteractItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FDataTableRowHandle ItemHandler;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterItem_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsItemNeeded
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckItems	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsItemNeeded");

	struct ABP_MasterItem_C_IsItemNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckItems;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterItem_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.IsGrabbable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Grabbable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterItem_C::IsGrabbable(bool* Grabbable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.IsGrabbable");

	struct ABP_MasterItem_C_IsGrabbable_Params {
		bool Grabbable;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterItem_C_IsGrabbable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetToolType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolActivityType	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterItem_C::GetToolType(TEnumAsByte<E_Tools>* ToolType, TEnumAsByte<E_Tools_Activity>* ToolActivityType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetToolType");

	struct ABP_MasterItem_C_GetToolType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> ToolActivityType;			//Offset: 1 | ElementSize: 1
	};
	ABP_MasterItem_C_GetToolType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToolType != nullptr)
		*ToolType = params.ToolType;
	if (ToolActivityType != nullptr)
		*ToolActivityType = params.ToolActivityType;
}

/////////////////////////////////////////////
// Function BP_MasterItem.BP_MasterItem_C.GetNPC_Interactable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Interactable	Type: TArray<bool>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterItem_C::GetNPC_Interactable(TArray<bool>* NPC_Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterItem.BP_MasterItem_C.GetNPC_Interactable");

	struct ABP_MasterItem_C_GetNPC_Interactable_Params {
		TArray<bool> NPC_Interactable;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterItem_C_GetNPC_Interactable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_Interactable != nullptr)
		*NPC_Interactable = params.NPC_Interactable;
}

#pragma endregion
}