#include "../SDK.h"
#include "BP_MasterHoldableItem_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_MasterHoldableItem_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_MasterHoldableItem_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_MasterHoldableItem_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of AttachComponent
// Declaration: class USceneComponent* AttachComponent
class USceneComponent* ABP_MasterHoldableItem_C::M_GetAttachComponent() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_MasterHoldableItem_C::M_PtrGetAttachComponent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_MasterHoldableItem_C::M_SetAttachComponent(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_MasterHoldableItem_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 560);
}
class USceneComponent** ABP_MasterHoldableItem_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 560);
}
void ABP_MasterHoldableItem_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of Item
// Declaration: struct FST_ItemResource Item
struct FST_ItemResource ABP_MasterHoldableItem_C::M_GetItem() const {
	return Read<struct FST_ItemResource>((byte*)this + 568);
}
struct FST_ItemResource* ABP_MasterHoldableItem_C::M_PtrGetItem() {
	return reinterpret_cast<struct FST_ItemResource*>((byte*)this + 568);
}
void ABP_MasterHoldableItem_C::M_SetItem(const struct FST_ItemResource& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of SocketName
// Declaration: struct FName SocketName
struct FName ABP_MasterHoldableItem_C::M_GetSocketName() const {
	return Read<struct FName>((byte*)this + 592);
}
struct FName* ABP_MasterHoldableItem_C::M_PtrGetSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 592);
}
void ABP_MasterHoldableItem_C::M_SetSocketName(const struct FName& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of PlayerCharacterReference
// Declaration: class ABP_BaseCharacter_C* PlayerCharacterReference
class ABP_BaseCharacter_C* ABP_MasterHoldableItem_C::M_GetPlayerCharacterReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 600);
}
class ABP_BaseCharacter_C** ABP_MasterHoldableItem_C::M_PtrGetPlayerCharacterReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 600);
}
void ABP_MasterHoldableItem_C::M_SetPlayerCharacterReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of ToolType
// Declaration: TEnumAsByte<E_Tools> ToolType
TEnumAsByte<E_Tools> ABP_MasterHoldableItem_C::M_GetToolType() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 608);
}
TEnumAsByte<E_Tools>* ABP_MasterHoldableItem_C::M_PtrGetToolType() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 608);
}
void ABP_MasterHoldableItem_C::M_SetToolType(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of Damage
// Declaration: struct FVector2D Damage
struct FVector2D ABP_MasterHoldableItem_C::M_GetDamage() const {
	return Read<struct FVector2D>((byte*)this + 612);
}
struct FVector2D* ABP_MasterHoldableItem_C::M_PtrGetDamage() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 612);
}
void ABP_MasterHoldableItem_C::M_SetDamage(const struct FVector2D& value) {
	Write((byte*)this + 612, value);
}
// Member Getter and Setter of Extraction
// Declaration: float Extraction
float ABP_MasterHoldableItem_C::M_GetExtraction() const {
	return Read<float>((byte*)this + 620);
}
float* ABP_MasterHoldableItem_C::M_PtrGetExtraction() {
	return reinterpret_cast<float*>((byte*)this + 620);
}
void ABP_MasterHoldableItem_C::M_SetExtraction(const float& value) {
	Write((byte*)this + 620, value);
}
// Member Getter and Setter of MontagesSettings_ByName
// Declaration: TMap<struct FName, struct FST_MontagesSettingsEnum> MontagesSettings_ByName
TMap<struct FName, struct FST_MontagesSettingsEnum> ABP_MasterHoldableItem_C::M_GetMontagesSettings_ByName() const {
	return Read<TMap<struct FName, struct FST_MontagesSettingsEnum>>((byte*)this + 624);
}
TMap<struct FName, struct FST_MontagesSettingsEnum>* ABP_MasterHoldableItem_C::M_PtrGetMontagesSettings_ByName() {
	return reinterpret_cast<TMap<struct FName, struct FST_MontagesSettingsEnum>*>((byte*)this + 624);
}
void ABP_MasterHoldableItem_C::M_SetMontagesSettings_ByName(const TMap<struct FName, struct FST_MontagesSettingsEnum>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of MontagesSettings_ByName_TP
// Declaration: TMap<struct FName, struct FST_MontagesSettingsEnum> MontagesSettings_ByName_TP
TMap<struct FName, struct FST_MontagesSettingsEnum> ABP_MasterHoldableItem_C::M_GetMontagesSettings_ByName_TP() const {
	return Read<TMap<struct FName, struct FST_MontagesSettingsEnum>>((byte*)this + 704);
}
TMap<struct FName, struct FST_MontagesSettingsEnum>* ABP_MasterHoldableItem_C::M_PtrGetMontagesSettings_ByName_TP() {
	return reinterpret_cast<TMap<struct FName, struct FST_MontagesSettingsEnum>*>((byte*)this + 704);
}
void ABP_MasterHoldableItem_C::M_SetMontagesSettings_ByName_TP(const TMap<struct FName, struct FST_MontagesSettingsEnum>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of MontageName
// Declaration: struct FName MontageName
struct FName ABP_MasterHoldableItem_C::M_GetMontageName() const {
	return Read<struct FName>((byte*)this + 784);
}
struct FName* ABP_MasterHoldableItem_C::M_PtrGetMontageName() {
	return reinterpret_cast<struct FName*>((byte*)this + 784);
}
void ABP_MasterHoldableItem_C::M_SetMontageName(const struct FName& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of HolsterHand
// Declaration: TEnumAsByte<E_HandsForHolstering> HolsterHand
TEnumAsByte<E_HandsForHolstering> ABP_MasterHoldableItem_C::M_GetHolsterHand() const {
	return Read<TEnumAsByte<E_HandsForHolstering>>((byte*)this + 792);
}
TEnumAsByte<E_HandsForHolstering>* ABP_MasterHoldableItem_C::M_PtrGetHolsterHand() {
	return reinterpret_cast<TEnumAsByte<E_HandsForHolstering>*>((byte*)this + 792);
}
void ABP_MasterHoldableItem_C::M_SetHolsterHand(const TEnumAsByte<E_HandsForHolstering>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of UseCondition
// Declaration: bool UseCondition
bool ABP_MasterHoldableItem_C::M_GetUseCondition() const {
	return Read<bool>((byte*)this + 793);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetUseCondition() {
	return reinterpret_cast<bool*>((byte*)this + 793);
}
void ABP_MasterHoldableItem_C::M_SetUseCondition(const bool& value) {
	Write((byte*)this + 793, value);
}
// Member Getter and Setter of HPCostPerAction
// Declaration: float HPCostPerAction
float ABP_MasterHoldableItem_C::M_GetHPCostPerAction() const {
	return Read<float>((byte*)this + 796);
}
float* ABP_MasterHoldableItem_C::M_PtrGetHPCostPerAction() {
	return reinterpret_cast<float*>((byte*)this + 796);
}
void ABP_MasterHoldableItem_C::M_SetHPCostPerAction(const float& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of IsToolTurnedInInteraction_
// Declaration: bool IsToolTurnedInInteraction_
bool ABP_MasterHoldableItem_C::M_GetIsToolTurnedInInteraction_() const {
	return Read<bool>((byte*)this + 800);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetIsToolTurnedInInteraction_() {
	return reinterpret_cast<bool*>((byte*)this + 800);
}
void ABP_MasterHoldableItem_C::M_SetIsToolTurnedInInteraction_(const bool& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of StaminaCost
// Declaration: float StaminaCost
float ABP_MasterHoldableItem_C::M_GetStaminaCost() const {
	return Read<float>((byte*)this + 804);
}
float* ABP_MasterHoldableItem_C::M_PtrGetStaminaCost() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void ABP_MasterHoldableItem_C::M_SetStaminaCost(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of AnimationSpeed
// Declaration: float AnimationSpeed
float ABP_MasterHoldableItem_C::M_GetAnimationSpeed() const {
	return Read<float>((byte*)this + 808);
}
float* ABP_MasterHoldableItem_C::M_PtrGetAnimationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void ABP_MasterHoldableItem_C::M_SetAnimationSpeed(const float& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of BaseExtraction
// Declaration: float BaseExtraction
float ABP_MasterHoldableItem_C::M_GetBaseExtraction() const {
	return Read<float>((byte*)this + 812);
}
float* ABP_MasterHoldableItem_C::M_PtrGetBaseExtraction() {
	return reinterpret_cast<float*>((byte*)this + 812);
}
void ABP_MasterHoldableItem_C::M_SetBaseExtraction(const float& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of LeftKeyDown
// Declaration: bool LeftKeyDown
bool ABP_MasterHoldableItem_C::M_GetLeftKeyDown() const {
	return Read<bool>((byte*)this + 816);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetLeftKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 816);
}
void ABP_MasterHoldableItem_C::M_SetLeftKeyDown(const bool& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of TimerHandle
// Declaration: struct FTimerHandle TimerHandle
struct FTimerHandle ABP_MasterHoldableItem_C::M_GetTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 824);
}
struct FTimerHandle* ABP_MasterHoldableItem_C::M_PtrGetTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 824);
}
void ABP_MasterHoldableItem_C::M_SetTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of RightKeyDown
// Declaration: bool RightKeyDown
bool ABP_MasterHoldableItem_C::M_GetRightKeyDown() const {
	return Read<bool>((byte*)this + 832);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetRightKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 832);
}
void ABP_MasterHoldableItem_C::M_SetRightKeyDown(const bool& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of Capacity
// Declaration: int32_t Capacity
int32_t ABP_MasterHoldableItem_C::M_GetCapacity() const {
	return Read<int32_t>((byte*)this + 836);
}
int32_t* ABP_MasterHoldableItem_C::M_PtrGetCapacity() {
	return reinterpret_cast<int32_t*>((byte*)this + 836);
}
void ABP_MasterHoldableItem_C::M_SetCapacity(const int32_t& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of OverridenMontageType
// Declaration: TEnumAsByte<E_AnimInteractionTypes> OverridenMontageType
TEnumAsByte<E_AnimInteractionTypes> ABP_MasterHoldableItem_C::M_GetOverridenMontageType() const {
	return Read<TEnumAsByte<E_AnimInteractionTypes>>((byte*)this + 840);
}
TEnumAsByte<E_AnimInteractionTypes>* ABP_MasterHoldableItem_C::M_PtrGetOverridenMontageType() {
	return reinterpret_cast<TEnumAsByte<E_AnimInteractionTypes>*>((byte*)this + 840);
}
void ABP_MasterHoldableItem_C::M_SetOverridenMontageType(const TEnumAsByte<E_AnimInteractionTypes>& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of OverrideMontage
// Declaration: bool OverrideMontage
bool ABP_MasterHoldableItem_C::M_GetOverrideMontage() const {
	return Read<bool>((byte*)this + 841);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetOverrideMontage() {
	return reinterpret_cast<bool*>((byte*)this + 841);
}
void ABP_MasterHoldableItem_C::M_SetOverrideMontage(const bool& value) {
	Write((byte*)this + 841, value);
}
// Member Getter and Setter of ShouldSetToolPosition
// Declaration: bool ShouldSetToolPosition
bool ABP_MasterHoldableItem_C::M_GetShouldSetToolPosition() const {
	return Read<bool>((byte*)this + 842);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetShouldSetToolPosition() {
	return reinterpret_cast<bool*>((byte*)this + 842);
}
void ABP_MasterHoldableItem_C::M_SetShouldSetToolPosition(const bool& value) {
	Write((byte*)this + 842, value);
}
// Member Getter and Setter of CurrentHP
// Declaration: float CurrentHP
float ABP_MasterHoldableItem_C::M_GetCurrentHP() const {
	return Read<float>((byte*)this + 844);
}
float* ABP_MasterHoldableItem_C::M_PtrGetCurrentHP() {
	return reinterpret_cast<float*>((byte*)this + 844);
}
void ABP_MasterHoldableItem_C::M_SetCurrentHP(const float& value) {
	Write((byte*)this + 844, value);
}
// Member Getter and Setter of ItemHitLocation
// Declaration: struct FVector ItemHitLocation
struct FVector ABP_MasterHoldableItem_C::M_GetItemHitLocation() const {
	return Read<struct FVector>((byte*)this + 848);
}
struct FVector* ABP_MasterHoldableItem_C::M_PtrGetItemHitLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 848);
}
void ABP_MasterHoldableItem_C::M_SetItemHitLocation(const struct FVector& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of IsAnimOnly
// Declaration: bool IsAnimOnly
bool ABP_MasterHoldableItem_C::M_GetIsAnimOnly() const {
	return Read<bool>((byte*)this + 860);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetIsAnimOnly() {
	return reinterpret_cast<bool*>((byte*)this + 860);
}
void ABP_MasterHoldableItem_C::M_SetIsAnimOnly(const bool& value) {
	Write((byte*)this + 860, value);
}
// Member Getter and Setter of InteractionEnabled
// Declaration: bool InteractionEnabled
bool ABP_MasterHoldableItem_C::M_GetInteractionEnabled() const {
	return Read<bool>((byte*)this + 861);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetInteractionEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 861);
}
void ABP_MasterHoldableItem_C::M_SetInteractionEnabled(const bool& value) {
	Write((byte*)this + 861, value);
}
// Member Getter and Setter of InputMappingStages
// Declaration: TArray<struct FST_HoldableItemInput_Stage> InputMappingStages
TArray<struct FST_HoldableItemInput_Stage> ABP_MasterHoldableItem_C::M_GetInputMappingStages() const {
	return Read<TArray<struct FST_HoldableItemInput_Stage>>((byte*)this + 864);
}
TArray<struct FST_HoldableItemInput_Stage>* ABP_MasterHoldableItem_C::M_PtrGetInputMappingStages() {
	return reinterpret_cast<TArray<struct FST_HoldableItemInput_Stage>*>((byte*)this + 864);
}
void ABP_MasterHoldableItem_C::M_SetInputMappingStages(const TArray<struct FST_HoldableItemInput_Stage>& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of InputStage
// Declaration: int32_t InputStage
int32_t ABP_MasterHoldableItem_C::M_GetInputStage() const {
	return Read<int32_t>((byte*)this + 880);
}
int32_t* ABP_MasterHoldableItem_C::M_PtrGetInputStage() {
	return reinterpret_cast<int32_t*>((byte*)this + 880);
}
void ABP_MasterHoldableItem_C::M_SetInputStage(const int32_t& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of DecreaseToolHP
// Declaration: bool DecreaseToolHP
bool ABP_MasterHoldableItem_C::M_GetDecreaseToolHP() const {
	return Read<bool>((byte*)this + 884);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetDecreaseToolHP() {
	return reinterpret_cast<bool*>((byte*)this + 884);
}
void ABP_MasterHoldableItem_C::M_SetDecreaseToolHP(const bool& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of ViewmodeToolTransforms
// Declaration: TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms> ViewmodeToolTransforms
TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms> ABP_MasterHoldableItem_C::M_GetViewmodeToolTransforms() const {
	return Read<TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>>((byte*)this + 888);
}
TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>* ABP_MasterHoldableItem_C::M_PtrGetViewmodeToolTransforms() {
	return reinterpret_cast<TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>*>((byte*)this + 888);
}
void ABP_MasterHoldableItem_C::M_SetViewmodeToolTransforms(const TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of ToolTransforms
// Declaration: struct FST_ToolTransforms ToolTransforms
struct FST_ToolTransforms ABP_MasterHoldableItem_C::M_GetToolTransforms() const {
	return Read<struct FST_ToolTransforms>((byte*)this + 976);
}
struct FST_ToolTransforms* ABP_MasterHoldableItem_C::M_PtrGetToolTransforms() {
	return reinterpret_cast<struct FST_ToolTransforms*>((byte*)this + 976);
}
void ABP_MasterHoldableItem_C::M_SetToolTransforms(const struct FST_ToolTransforms& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of FlippedToolTransforms
// Declaration: struct FST_ToolTransforms FlippedToolTransforms
struct FST_ToolTransforms ABP_MasterHoldableItem_C::M_GetFlippedToolTransforms() const {
	return Read<struct FST_ToolTransforms>((byte*)this + 1408);
}
struct FST_ToolTransforms* ABP_MasterHoldableItem_C::M_PtrGetFlippedToolTransforms() {
	return reinterpret_cast<struct FST_ToolTransforms*>((byte*)this + 1408);
}
void ABP_MasterHoldableItem_C::M_SetFlippedToolTransforms(const struct FST_ToolTransforms& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of IsDestroyed
// Declaration: bool IsDestroyed
bool ABP_MasterHoldableItem_C::M_GetIsDestroyed() const {
	return Read<bool>((byte*)this + 1840);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetIsDestroyed() {
	return reinterpret_cast<bool*>((byte*)this + 1840);
}
void ABP_MasterHoldableItem_C::M_SetIsDestroyed(const bool& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of SC_WeaponLoad
// Declaration: class USoundBase* SC_WeaponLoad
class USoundBase* ABP_MasterHoldableItem_C::M_GetSC_WeaponLoad() const {
	return Read<class USoundBase*>((byte*)this + 1848);
}
class USoundBase** ABP_MasterHoldableItem_C::M_PtrGetSC_WeaponLoad() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 1848);
}
void ABP_MasterHoldableItem_C::M_SetSC_WeaponLoad(const class USoundBase*& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of HadAnotherTool
// Declaration: bool HadAnotherTool
bool ABP_MasterHoldableItem_C::M_GetHadAnotherTool() const {
	return Read<bool>((byte*)this + 1856);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetHadAnotherTool() {
	return reinterpret_cast<bool*>((byte*)this + 1856);
}
void ABP_MasterHoldableItem_C::M_SetHadAnotherTool(const bool& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of ScaleOnSpawn
// Declaration: bool ScaleOnSpawn
bool ABP_MasterHoldableItem_C::M_GetScaleOnSpawn() const {
	return Read<bool>((byte*)this + 1857);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetScaleOnSpawn() {
	return reinterpret_cast<bool*>((byte*)this + 1857);
}
void ABP_MasterHoldableItem_C::M_SetScaleOnSpawn(const bool& value) {
	Write((byte*)this + 1857, value);
}
// Member Getter and Setter of WeaponDamageType
// Declaration: TEnumAsByte<E_WeaponDamageType> WeaponDamageType
TEnumAsByte<E_WeaponDamageType> ABP_MasterHoldableItem_C::M_GetWeaponDamageType() const {
	return Read<TEnumAsByte<E_WeaponDamageType>>((byte*)this + 1858);
}
TEnumAsByte<E_WeaponDamageType>* ABP_MasterHoldableItem_C::M_PtrGetWeaponDamageType() {
	return reinterpret_cast<TEnumAsByte<E_WeaponDamageType>*>((byte*)this + 1858);
}
void ABP_MasterHoldableItem_C::M_SetWeaponDamageType(const TEnumAsByte<E_WeaponDamageType>& value) {
	Write((byte*)this + 1858, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_MasterHoldableItem_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 1859);
}
TEnumAsByte<E_Ownership>* ABP_MasterHoldableItem_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 1859);
}
void ABP_MasterHoldableItem_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 1859, value);
}
// Member Getter and Setter of ProfessionToolTransforms
// Declaration: TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms> ProfessionToolTransforms
TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms> ABP_MasterHoldableItem_C::M_GetProfessionToolTransforms() const {
	return Read<TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>>((byte*)this + 1864);
}
TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>* ABP_MasterHoldableItem_C::M_PtrGetProfessionToolTransforms() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>*>((byte*)this + 1864);
}
void ABP_MasterHoldableItem_C::M_SetProfessionToolTransforms(const TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of isPlayer
// Declaration: bool isPlayer
bool ABP_MasterHoldableItem_C::M_GetisPlayer() const {
	return Read<bool>((byte*)this + 1944);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetisPlayer() {
	return reinterpret_cast<bool*>((byte*)this + 1944);
}
void ABP_MasterHoldableItem_C::M_SetisPlayer(const bool& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of BaseAnimationSpeed
// Declaration: float BaseAnimationSpeed
float ABP_MasterHoldableItem_C::M_GetBaseAnimationSpeed() const {
	return Read<float>((byte*)this + 1948);
}
float* ABP_MasterHoldableItem_C::M_PtrGetBaseAnimationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1948);
}
void ABP_MasterHoldableItem_C::M_SetBaseAnimationSpeed(const float& value) {
	Write((byte*)this + 1948, value);
}
// Member Getter and Setter of HitShakeScale
// Declaration: TMap<TEnumAsByte<E_ViewMode>, float> HitShakeScale
TMap<TEnumAsByte<E_ViewMode>, float> ABP_MasterHoldableItem_C::M_GetHitShakeScale() const {
	return Read<TMap<TEnumAsByte<E_ViewMode>, float>>((byte*)this + 1952);
}
TMap<TEnumAsByte<E_ViewMode>, float>* ABP_MasterHoldableItem_C::M_PtrGetHitShakeScale() {
	return reinterpret_cast<TMap<TEnumAsByte<E_ViewMode>, float>*>((byte*)this + 1952);
}
void ABP_MasterHoldableItem_C::M_SetHitShakeScale(const TMap<TEnumAsByte<E_ViewMode>, float>& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of Flipped
// Declaration: bool Flipped
bool ABP_MasterHoldableItem_C::M_GetFlipped() const {
	return Read<bool>((byte*)this + 2032);
}
bool* ABP_MasterHoldableItem_C::M_PtrGetFlipped() {
	return reinterpret_cast<bool*>((byte*)this + 2032);
}
void ABP_MasterHoldableItem_C::M_SetFlipped(const bool& value) {
	Write((byte*)this + 2032, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ExecuteUbergraph_BP_MasterHoldableItem
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::ExecuteUbergraph_BP_MasterHoldableItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ExecuteUbergraph_BP_MasterHoldableItem");

	struct ABP_MasterHoldableItem_C_ExecuteUbergraph_BP_MasterHoldableItem_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterHoldableItem_C_ExecuteUbergraph_BP_MasterHoldableItem_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HoldableNotify
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NotifyName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::HoldableNotify(struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HoldableNotify");

	struct ABP_MasterHoldableItem_C_HoldableNotify_Params {
		struct FName NotifyName;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_HoldableNotify_Params params;
	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DespawnItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::DespawnItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DespawnItem");

	struct ABP_MasterHoldableItem_C_DespawnItem_Params {
	};
	ABP_MasterHoldableItem_C_DespawnItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SpawnItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::SpawnItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SpawnItem");

	struct ABP_MasterHoldableItem_C_SpawnItem_Params {
	};
	ABP_MasterHoldableItem_C_SpawnItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.StartTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::StartTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.StartTimer");

	struct ABP_MasterHoldableItem_C_StartTimer_Params {
	};
	ABP_MasterHoldableItem_C_StartTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::CheckForInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForInteraction");

	struct ABP_MasterHoldableItem_C_CheckForInteraction_Params {
	};
	ABP_MasterHoldableItem_C_CheckForInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ReceiveBeginPlay");

	struct ABP_MasterHoldableItem_C_ReceiveBeginPlay_Params {
	};
	ABP_MasterHoldableItem_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetTickEnabled
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bEnabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::SetTickEnabled(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetTickEnabled");

	struct ABP_MasterHoldableItem_C_SetTickEnabled_Params {
		bool bEnabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_SetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageBlendOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::HitMontageBlendOut(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageBlendOut");

	struct ABP_MasterHoldableItem_C_HitMontageBlendOut_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_HitMontageBlendOut_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::HitMontageInterrupted(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageInterrupted");

	struct ABP_MasterHoldableItem_C_HitMontageInterrupted_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_HitMontageInterrupted_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::HitMontageComplete(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageComplete");

	struct ABP_MasterHoldableItem_C_HitMontageComplete_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageBlendOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::MontageBlendOut(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageBlendOut");

	struct ABP_MasterHoldableItem_C_MontageBlendOut_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_MontageBlendOut_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::MontageInterrupted(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageInterrupted");

	struct ABP_MasterHoldableItem_C_MontageInterrupted_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_MontageInterrupted_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::MontageComplete(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageComplete");

	struct ABP_MasterHoldableItem_C_MontageComplete_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterHoldableItem_C_MontageComplete_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PerformInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::PerformInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PerformInteraction");

	struct ABP_MasterHoldableItem_C_PerformInteraction_Params {
	};
	ABP_MasterHoldableItem_C_PerformInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopFinish
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::OnLoopFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopFinish");

	struct ABP_MasterHoldableItem_C_OnLoopFinish_Params {
	};
	ABP_MasterHoldableItem_C_OnLoopFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.FlipRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnFlip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::FlipRotation(bool UnFlip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.FlipRotation");

	struct ABP_MasterHoldableItem_C_FlipRotation_Params {
		bool UnFlip;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_FlipRotation_Params params;
	params.UnFlip = UnFlip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ResetHoldable
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::ResetHoldable() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ResetHoldable");

	struct ABP_MasterHoldableItem_C_ResetHoldable_Params {
	};
	ABP_MasterHoldableItem_C_ResetHoldable_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.RightMouseInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeyDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::RightMouseInput(bool KeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.RightMouseInput");

	struct ABP_MasterHoldableItem_C_RightMouseInput_Params {
		bool KeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_RightMouseInput_Params params;
	params.KeyDown = KeyDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.LeftMouseInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeyDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::LeftMouseInput(bool KeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.LeftMouseInput");

	struct ABP_MasterHoldableItem_C_LeftMouseInput_Params {
		bool KeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UserConstructionScript
// Flags: Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UserConstructionScript");

	struct ABP_MasterHoldableItem_C_UserConstructionScript_Params {
	};
	ABP_MasterHoldableItem_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Offhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::DecreaseHoldableItemHP(float Value, bool Offhand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemHP");

	struct ABP_MasterHoldableItem_C_DecreaseHoldableItemHP_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool Offhand;			//Offset: 4 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_DecreaseHoldableItemHP_Params params;
	params.Value = Value;
	params.Offhand = Offhand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontageSettings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Key	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: struct FST_MontagesSettingsArray	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetMontageSettings(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, struct FST_MontagesSettingsArray* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontageSettings");

	struct ABP_MasterHoldableItem_C_GetMontageSettings_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> Key;			//Offset: 8 | ElementSize: 1
		struct FST_MontagesSettingsArray Montage;			//Offset: 16 | ElementSize: 16
	};
	ABP_MasterHoldableItem_C_GetMontageSettings_Params params;
	params.Name = Name;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
	if (Montage != nullptr)
		*Montage = params.Montage;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetStatsFromAbilities
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterStatsComponentReference	Type: class UBP_CharacterStatsComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OnlyAnimSpeed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::SetStatsFromAbilities(class UBP_CharacterStatsComponent_C** CharacterStatsComponentReference, bool OnlyAnimSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetStatsFromAbilities");

	struct ABP_MasterHoldableItem_C_SetStatsFromAbilities_Params {
		class UBP_CharacterStatsComponent_C* CharacterStatsComponentReference;			//Offset: 0 | ElementSize: 8
		bool OnlyAnimSpeed;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_SetStatsFromAbilities_Params params;
	params.OnlyAnimSpeed = OnlyAnimSpeed;

	UObject::ProcessEvent(fn, &params);
	if (CharacterStatsComponentReference != nullptr)
		*CharacterStatsComponentReference = params.CharacterStatsComponentReference;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.Set Montage Settings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Key	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageSettings	Type: struct FST_MontagesSettingsArray	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: MontagesSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::Set_Montage_Settings(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, struct FST_MontagesSettingsArray MontageSettings, TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>* MontagesSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.Set Montage Settings");

	struct ABP_MasterHoldableItem_C_Set_Montage_Settings_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> Key;			//Offset: 8 | ElementSize: 1
		struct FST_MontagesSettingsArray MontageSettings;			//Offset: 16 | ElementSize: 16
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings;			//Offset: 32 | ElementSize: 80
	};
	ABP_MasterHoldableItem_C_Set_Montage_Settings_Params params;
	params.Name = Name;
	params.Key = Key;
	params.MontageSettings = MontageSettings;

	UObject::ProcessEvent(fn, &params);
	if (MontagesSettings != nullptr)
		*MontagesSettings = params.MontagesSettings;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemCapacity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::DecreaseHoldableItemCapacity() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemCapacity");

	struct ABP_MasterHoldableItem_C_DecreaseHoldableItemCapacity_Params {
	};
	ABP_MasterHoldableItem_C_DecreaseHoldableItemCapacity_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UpdateToolTransform
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::UpdateToolTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UpdateToolTransform");

	struct ABP_MasterHoldableItem_C_UpdateToolTransform_Params {
	};
	ABP_MasterHoldableItem_C_UpdateToolTransform_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableTransform
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: HoldableTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetHoldableTransform(struct FTransform* HoldableTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableTransform");

	struct ABP_MasterHoldableItem_C_GetHoldableTransform_Params {
		struct FTransform HoldableTransform;			//Offset: 0 | ElementSize: 48
	};
	ABP_MasterHoldableItem_C_GetHoldableTransform_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HoldableTransform != nullptr)
		*HoldableTransform = params.HoldableTransform;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableFlippedTransform
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: HoldableTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetHoldableFlippedTransform(struct FTransform* HoldableTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableFlippedTransform");

	struct ABP_MasterHoldableItem_C_GetHoldableFlippedTransform_Params {
		struct FTransform HoldableTransform;			//Offset: 0 | ElementSize: 48
	};
	ABP_MasterHoldableItem_C_GetHoldableFlippedTransform_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HoldableTransform != nullptr)
		*HoldableTransform = params.HoldableTransform;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.On Tool Interact with Foliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageAmount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::On_Tool_Interact_with_Foliage(int32_t FoliageAmount, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.On Tool Interact with Foliage");

	struct ABP_MasterHoldableItem_C_On_Tool_Interact_with_Foliage_Params {
		int32_t FoliageAmount;			//Offset: 0 | ElementSize: 4
		struct FVector Location;			//Offset: 4 | ElementSize: 12
	};
	ABP_MasterHoldableItem_C_On_Tool_Interact_with_Foliage_Params params;
	params.FoliageAmount = FoliageAmount;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnStartInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::OnStartInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnStartInteraction");

	struct ABP_MasterHoldableItem_C_OnStartInteraction_Params {
	};
	ABP_MasterHoldableItem_C_OnStartInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnEndInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::OnEndInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnEndInteraction");

	struct ABP_MasterHoldableItem_C_OnEndInteraction_Params {
	};
	ABP_MasterHoldableItem_C_OnEndInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitBoneDetection
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamagePercent	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::HitBoneDetection(struct FName HitBoneName, float* DamagePercent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitBoneDetection");

	struct ABP_MasterHoldableItem_C_HitBoneDetection_Params {
		struct FName HitBoneName;			//Offset: 0 | ElementSize: 8
		float DamagePercent;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterHoldableItem_C_HitBoneDetection_Params params;
	params.HitBoneName = HitBoneName;

	UObject::ProcessEvent(fn, &params);
	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeInputStage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputStage	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::ChangeInputStage(int32_t InputStage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeInputStage");

	struct ABP_MasterHoldableItem_C_ChangeInputStage_Params {
		int32_t InputStage;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterHoldableItem_C_ChangeInputStage_Params params;
	params.InputStage = InputStage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForTorchEquipableItems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::CheckForTorchEquipableItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForTorchEquipableItems");

	struct ABP_MasterHoldableItem_C_CheckForTorchEquipableItems_Params {
	};
	ABP_MasterHoldableItem_C_CheckForTorchEquipableItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CompareMontages
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Key	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_MasterHoldableItem_C::CompareMontages(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CompareMontages");

	struct ABP_MasterHoldableItem_C_CompareMontages_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> Key;			//Offset: 8 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 16 | ElementSize: 8
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_CompareMontages_Params params;
	params.Name = Name;
	params.Key = Key;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.IsAnyMontagePlaying
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Key	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
bool ABP_MasterHoldableItem_C::IsAnyMontagePlaying(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, class UAnimMontage** Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.IsAnyMontagePlaying");

	struct ABP_MasterHoldableItem_C_IsAnyMontagePlaying_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> Key;			//Offset: 8 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 16 | ElementSize: 8
		bool ReturnValue;			//Offset: 9 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_IsAnyMontagePlaying_Params params;
	params.Name = Name;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
	if (Montage != nullptr)
		*Montage = params.Montage;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeAnimID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Changed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::ChangeAnimID(int32_t AnimID, bool* Changed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeAnimID");

	struct ABP_MasterHoldableItem_C_ChangeAnimID_Params {
		int32_t AnimID;			//Offset: 0 | ElementSize: 4
		bool Changed;			//Offset: 4 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_ChangeAnimID_Params params;
	params.AnimID = AnimID;

	UObject::ProcessEvent(fn, &params);
	if (Changed != nullptr)
		*Changed = params.Changed;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PlayPlayerCameraShake
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::PlayPlayerCameraShake() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PlayPlayerCameraShake");

	struct ABP_MasterHoldableItem_C_PlayPlayerCameraShake_Params {
	};
	ABP_MasterHoldableItem_C_PlayPlayerCameraShake_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontagesByViewmode
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MontageSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetMontagesByViewmode(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>* MontageSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontagesByViewmode");

	struct ABP_MasterHoldableItem_C_GetMontagesByViewmode_Params {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontageSettings;			//Offset: 0 | ElementSize: 80
	};
	ABP_MasterHoldableItem_C_GetMontagesByViewmode_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MontageSettings != nullptr)
		*MontageSettings = params.MontageSettings;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetMontageName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Changed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::SetMontageName(struct FName Name, bool* Changed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetMontageName");

	struct ABP_MasterHoldableItem_C_SetMontageName_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		bool Changed;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_SetMontageName_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
	if (Changed != nullptr)
		*Changed = params.Changed;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopStart
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanStart	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::OnLoopStart(bool* CanStart) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopStart");

	struct ABP_MasterHoldableItem_C_OnLoopStart_Params {
		bool CanStart;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_OnLoopStart_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanStart != nullptr)
		*CanStart = params.CanStart;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetFluidType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FluidType	Type: TEnumAsByte<E_Fluids>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetFluidType(TEnumAsByte<E_Fluids>* FluidType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetFluidType");

	struct ABP_MasterHoldableItem_C_GetFluidType_Params {
		TEnumAsByte<E_Fluids> FluidType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_GetFluidType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FluidType != nullptr)
		*FluidType = params.FluidType;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetWeaponDamageType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamageType	Type: TEnumAsByte<E_WeaponDamageType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetWeaponDamageType(TEnumAsByte<E_WeaponDamageType>* DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetWeaponDamageType");

	struct ABP_MasterHoldableItem_C_GetWeaponDamageType_Params {
		TEnumAsByte<E_WeaponDamageType> DamageType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterHoldableItem_C_GetWeaponDamageType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DamageType != nullptr)
		*DamageType = params.DamageType;
}

/////////////////////////////////////////////
// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetSpeeds
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: MinSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Speed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterHoldableItem_C::GetSpeeds(float* MinSpeed, float* Speed, float* MaxSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetSpeeds");

	struct ABP_MasterHoldableItem_C_GetSpeeds_Params {
		float MinSpeed;			//Offset: 0 | ElementSize: 4
		float Speed;			//Offset: 4 | ElementSize: 4
		float MaxSpeed;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterHoldableItem_C_GetSpeeds_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MinSpeed != nullptr)
		*MinSpeed = params.MinSpeed;
	if (Speed != nullptr)
		*Speed = params.Speed;
	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}

#pragma endregion
}