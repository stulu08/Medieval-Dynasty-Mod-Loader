#include "../SDK.h"
#include "BP_BaseCharacter_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_BaseCharacter_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 1216);
}
struct FPointerToUberGraphFrame* ABP_BaseCharacter_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 1216);
}
void ABP_BaseCharacter_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of UI_Inspector
// Declaration: class UWidgetComponent* UI_Inspector
class UWidgetComponent* ABP_BaseCharacter_C::M_GetUI_Inspector() const {
	return Read<class UWidgetComponent*>((byte*)this + 1224);
}
class UWidgetComponent** ABP_BaseCharacter_C::M_PtrGetUI_Inspector() {
	return reinterpret_cast<class UWidgetComponent**>((byte*)this + 1224);
}
void ABP_BaseCharacter_C::M_SetUI_Inspector(const class UWidgetComponent*& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of BP_AquaticInteractionLeftFoot
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionLeftFoot
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionLeftFoot() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1232);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionLeftFoot() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1232);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionLeftFoot(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of BP_AquaticInteractionRightFoot
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionRightFoot
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionRightFoot() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1240);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionRightFoot() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1240);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionRightFoot(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of BP_AquaticInteraction
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteraction
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteraction() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1248);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteraction() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1248);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteraction(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of BP_AquaticInteractionRightHand
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionRightHand
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionRightHand() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1256);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionRightHand() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1256);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionRightHand(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of BP_AquaticInteractionLeftHand
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionLeftHand
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionLeftHand() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1264);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionLeftHand() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1264);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionLeftHand(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of BP_CombatComponent
// Declaration: class UBP_CombatComponent_C* BP_CombatComponent
class UBP_CombatComponent_C* ABP_BaseCharacter_C::M_GetBP_CombatComponent() const {
	return Read<class UBP_CombatComponent_C*>((byte*)this + 1272);
}
class UBP_CombatComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_CombatComponent() {
	return reinterpret_cast<class UBP_CombatComponent_C**>((byte*)this + 1272);
}
void ABP_BaseCharacter_C::M_SetBP_CombatComponent(const class UBP_CombatComponent_C*& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of MountRider
// Declaration: class UMountRiderComponent* MountRider
class UMountRiderComponent* ABP_BaseCharacter_C::M_GetMountRider() const {
	return Read<class UMountRiderComponent*>((byte*)this + 1280);
}
class UMountRiderComponent** ABP_BaseCharacter_C::M_PtrGetMountRider() {
	return reinterpret_cast<class UMountRiderComponent**>((byte*)this + 1280);
}
void ABP_BaseCharacter_C::M_SetMountRider(const class UMountRiderComponent*& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of Pouch
// Declaration: class USkeletalMeshComponent* Pouch
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetPouch() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1288);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetPouch() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1288);
}
void ABP_BaseCharacter_C::M_SetPouch(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of Backpack
// Declaration: class USkeletalMeshComponent* Backpack
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetBackpack() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1296);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetBackpack() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1296);
}
void ABP_BaseCharacter_C::M_SetBackpack(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of Hair
// Declaration: class USkeletalMeshComponent* Hair
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHair() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1304);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHair() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1304);
}
void ABP_BaseCharacter_C::M_SetHair(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of BP_AquaticBuoyancy
// Declaration: class UBP_AquaticBuoyancy_C* BP_AquaticBuoyancy
class UBP_AquaticBuoyancy_C* ABP_BaseCharacter_C::M_GetBP_AquaticBuoyancy() const {
	return Read<class UBP_AquaticBuoyancy_C*>((byte*)this + 1312);
}
class UBP_AquaticBuoyancy_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticBuoyancy() {
	return reinterpret_cast<class UBP_AquaticBuoyancy_C**>((byte*)this + 1312);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticBuoyancy(const class UBP_AquaticBuoyancy_C*& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of BP_StageInteractionComponent
// Declaration: class UBP_StageInteractionComponent_C* BP_StageInteractionComponent
class UBP_StageInteractionComponent_C* ABP_BaseCharacter_C::M_GetBP_StageInteractionComponent() const {
	return Read<class UBP_StageInteractionComponent_C*>((byte*)this + 1320);
}
class UBP_StageInteractionComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_StageInteractionComponent() {
	return reinterpret_cast<class UBP_StageInteractionComponent_C**>((byte*)this + 1320);
}
void ABP_BaseCharacter_C::M_SetBP_StageInteractionComponent(const class UBP_StageInteractionComponent_C*& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of HatSKM
// Declaration: class USkeletalMeshComponent* HatSKM
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHatSKM() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1328);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHatSKM() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1328);
}
void ABP_BaseCharacter_C::M_SetHatSKM(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of Hood
// Declaration: class USkeletalMeshComponent* Hood
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHood() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1336);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHood() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1336);
}
void ABP_BaseCharacter_C::M_SetHood(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of Torso
// Declaration: class USkeletalMeshComponent* Torso
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetTorso() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1344);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetTorso() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1344);
}
void ABP_BaseCharacter_C::M_SetTorso(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of Feet
// Declaration: class USkeletalMeshComponent* Feet
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetFeet() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1352);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetFeet() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1352);
}
void ABP_BaseCharacter_C::M_SetFeet(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of Legs
// Declaration: class USkeletalMeshComponent* Legs
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetLegs() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1360);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetLegs() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1360);
}
void ABP_BaseCharacter_C::M_SetLegs(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of Hands
// Declaration: class USkeletalMeshComponent* Hands
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHands() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1368);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHands() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1368);
}
void ABP_BaseCharacter_C::M_SetHands(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of BP_CharacterStatsComponent
// Declaration: class UBP_CharacterStatsComponent_C* BP_CharacterStatsComponent
class UBP_CharacterStatsComponent_C* ABP_BaseCharacter_C::M_GetBP_CharacterStatsComponent() const {
	return Read<class UBP_CharacterStatsComponent_C*>((byte*)this + 1376);
}
class UBP_CharacterStatsComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_CharacterStatsComponent() {
	return reinterpret_cast<class UBP_CharacterStatsComponent_C**>((byte*)this + 1376);
}
void ABP_BaseCharacter_C::M_SetBP_CharacterStatsComponent(const class UBP_CharacterStatsComponent_C*& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of BP_RelationsComponent
// Declaration: class UBP_CharacterRelationsComponent_C* BP_RelationsComponent
class UBP_CharacterRelationsComponent_C* ABP_BaseCharacter_C::M_GetBP_RelationsComponent() const {
	return Read<class UBP_CharacterRelationsComponent_C*>((byte*)this + 1384);
}
class UBP_CharacterRelationsComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_RelationsComponent() {
	return reinterpret_cast<class UBP_CharacterRelationsComponent_C**>((byte*)this + 1384);
}
void ABP_BaseCharacter_C::M_SetBP_RelationsComponent(const class UBP_CharacterRelationsComponent_C*& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of InventoryComponent
// Declaration: class UInventoryComponent_C* InventoryComponent
class UInventoryComponent_C* ABP_BaseCharacter_C::M_GetInventoryComponent() const {
	return Read<class UInventoryComponent_C*>((byte*)this + 1392);
}
class UInventoryComponent_C** ABP_BaseCharacter_C::M_PtrGetInventoryComponent() {
	return reinterpret_cast<class UInventoryComponent_C**>((byte*)this + 1392);
}
void ABP_BaseCharacter_C::M_SetInventoryComponent(const class UInventoryComponent_C*& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of AIPerceptionStimuliSource
// Declaration: class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource
class UAIPerceptionStimuliSourceComponent* ABP_BaseCharacter_C::M_GetAIPerceptionStimuliSource() const {
	return Read<class UAIPerceptionStimuliSourceComponent*>((byte*)this + 1400);
}
class UAIPerceptionStimuliSourceComponent** ABP_BaseCharacter_C::M_PtrGetAIPerceptionStimuliSource() {
	return reinterpret_cast<class UAIPerceptionStimuliSourceComponent**>((byte*)this + 1400);
}
void ABP_BaseCharacter_C::M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99
// Declaration: float EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99
float ABP_BaseCharacter_C::M_GetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() const {
	return Read<float>((byte*)this + 1408);
}
float* ABP_BaseCharacter_C::M_PtrGetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() {
	return reinterpret_cast<float*>((byte*)this + 1408);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99(const float& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99
// Declaration: TEnumAsByte<ETimelineDirection> EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1412);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1412);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1412, value);
}
// Member Getter and Setter of EyesStateTL
// Declaration: class UTimelineComponent* EyesStateTL
class UTimelineComponent* ABP_BaseCharacter_C::M_GetEyesStateTL() const {
	return Read<class UTimelineComponent*>((byte*)this + 1416);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetEyesStateTL() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1416);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL(const class UTimelineComponent*& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
// Declaration: float Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
float ABP_BaseCharacter_C::M_GetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const {
	return Read<float>((byte*)this + 1424);
}
float* ABP_BaseCharacter_C::M_PtrGetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() {
	return reinterpret_cast<float*>((byte*)this + 1424);
}
void ABP_BaseCharacter_C::M_SetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const float& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
// Declaration: TEnumAsByte<ETimelineDirection> Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1428);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1428);
}
void ABP_BaseCharacter_C::M_SetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1428, value);
}
// Member Getter and Setter of Blinking
// Declaration: class UTimelineComponent* Blinking
class UTimelineComponent* ABP_BaseCharacter_C::M_GetBlinking() const {
	return Read<class UTimelineComponent*>((byte*)this + 1432);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetBlinking() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1432);
}
void ABP_BaseCharacter_C::M_SetBlinking(const class UTimelineComponent*& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813
// Declaration: float FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813
float ABP_BaseCharacter_C::M_GetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() const {
	return Read<float>((byte*)this + 1440);
}
float* ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() {
	return reinterpret_cast<float*>((byte*)this + 1440);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813(const float& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813
// Declaration: TEnumAsByte<ETimelineDirection> FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1444);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1444);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1444, value);
}
// Member Getter and Setter of FistFightingTimeline
// Declaration: class UTimelineComponent* FistFightingTimeline
class UTimelineComponent* ABP_BaseCharacter_C::M_GetFistFightingTimeline() const {
	return Read<class UTimelineComponent*>((byte*)this + 1448);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1448);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline(const class UTimelineComponent*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of ShouldSprint
// Declaration: bool ShouldSprint
bool ABP_BaseCharacter_C::M_GetShouldSprint() const {
	return Read<bool>((byte*)this + 1456);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldSprint() {
	return reinterpret_cast<bool*>((byte*)this + 1456);
}
void ABP_BaseCharacter_C::M_SetShouldSprint(const bool& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of LookUp_DownRate
// Declaration: float LookUp_DownRate
float ABP_BaseCharacter_C::M_GetLookUp_DownRate() const {
	return Read<float>((byte*)this + 1460);
}
float* ABP_BaseCharacter_C::M_PtrGetLookUp_DownRate() {
	return reinterpret_cast<float*>((byte*)this + 1460);
}
void ABP_BaseCharacter_C::M_SetLookUp_DownRate(const float& value) {
	Write((byte*)this + 1460, value);
}
// Member Getter and Setter of LookLeft_RightRate
// Declaration: float LookLeft_RightRate
float ABP_BaseCharacter_C::M_GetLookLeft_RightRate() const {
	return Read<float>((byte*)this + 1464);
}
float* ABP_BaseCharacter_C::M_PtrGetLookLeft_RightRate() {
	return reinterpret_cast<float*>((byte*)this + 1464);
}
void ABP_BaseCharacter_C::M_SetLookLeft_RightRate(const float& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of MovementInput
// Declaration: struct FVector MovementInput
struct FVector ABP_BaseCharacter_C::M_GetMovementInput() const {
	return Read<struct FVector>((byte*)this + 1468);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetMovementInput() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1468);
}
void ABP_BaseCharacter_C::M_SetMovementInput(const struct FVector& value) {
	Write((byte*)this + 1468, value);
}
// Member Getter and Setter of aimYawDelta
// Declaration: float aimYawDelta
float ABP_BaseCharacter_C::M_GetaimYawDelta() const {
	return Read<float>((byte*)this + 1480);
}
float* ABP_BaseCharacter_C::M_PtrGetaimYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 1480);
}
void ABP_BaseCharacter_C::M_SetaimYawDelta(const float& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of AimYawRate
// Declaration: float AimYawRate
float ABP_BaseCharacter_C::M_GetAimYawRate() const {
	return Read<float>((byte*)this + 1484);
}
float* ABP_BaseCharacter_C::M_PtrGetAimYawRate() {
	return reinterpret_cast<float*>((byte*)this + 1484);
}
void ABP_BaseCharacter_C::M_SetAimYawRate(const float& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of MovementInput_VelocityDifference
// Declaration: float MovementInput_VelocityDifference
float ABP_BaseCharacter_C::M_GetMovementInput_VelocityDifference() const {
	return Read<float>((byte*)this + 1488);
}
float* ABP_BaseCharacter_C::M_PtrGetMovementInput_VelocityDifference() {
	return reinterpret_cast<float*>((byte*)this + 1488);
}
void ABP_BaseCharacter_C::M_SetMovementInput_VelocityDifference(const float& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of Target_CharacterRotationDifference
// Declaration: float Target_CharacterRotationDifference
float ABP_BaseCharacter_C::M_GetTarget_CharacterRotationDifference() const {
	return Read<float>((byte*)this + 1492);
}
float* ABP_BaseCharacter_C::M_PtrGetTarget_CharacterRotationDifference() {
	return reinterpret_cast<float*>((byte*)this + 1492);
}
void ABP_BaseCharacter_C::M_SetTarget_CharacterRotationDifference(const float& value) {
	Write((byte*)this + 1492, value);
}
// Member Getter and Setter of Direction
// Declaration: float Direction
float ABP_BaseCharacter_C::M_GetDirection() const {
	return Read<float>((byte*)this + 1496);
}
float* ABP_BaseCharacter_C::M_PtrGetDirection() {
	return reinterpret_cast<float*>((byte*)this + 1496);
}
void ABP_BaseCharacter_C::M_SetDirection(const float& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of characterRotation
// Declaration: struct FRotator characterRotation
struct FRotator ABP_BaseCharacter_C::M_GetcharacterRotation() const {
	return Read<struct FRotator>((byte*)this + 1500);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetcharacterRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1500);
}
void ABP_BaseCharacter_C::M_SetcharacterRotation(const struct FRotator& value) {
	Write((byte*)this + 1500, value);
}
// Member Getter and Setter of LookingRotation
// Declaration: struct FRotator LookingRotation
struct FRotator ABP_BaseCharacter_C::M_GetLookingRotation() const {
	return Read<struct FRotator>((byte*)this + 1512);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetLookingRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1512);
}
void ABP_BaseCharacter_C::M_SetLookingRotation(const struct FRotator& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of lastVelocityRotation
// Declaration: struct FRotator lastVelocityRotation
struct FRotator ABP_BaseCharacter_C::M_GetlastVelocityRotation() const {
	return Read<struct FRotator>((byte*)this + 1524);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetlastVelocityRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1524);
}
void ABP_BaseCharacter_C::M_SetlastVelocityRotation(const struct FRotator& value) {
	Write((byte*)this + 1524, value);
}
// Member Getter and Setter of lastMovementInputRotation
// Declaration: struct FRotator lastMovementInputRotation
struct FRotator ABP_BaseCharacter_C::M_GetlastMovementInputRotation() const {
	return Read<struct FRotator>((byte*)this + 1536);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetlastMovementInputRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1536);
}
void ABP_BaseCharacter_C::M_SetlastMovementInputRotation(const struct FRotator& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool ABP_BaseCharacter_C::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1548);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1548);
}
void ABP_BaseCharacter_C::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1548, value);
}
// Member Getter and Setter of hasMovementInput
// Declaration: bool hasMovementInput
bool ABP_BaseCharacter_C::M_GethasMovementInput() const {
	return Read<bool>((byte*)this + 1549);
}
bool* ABP_BaseCharacter_C::M_PtrGethasMovementInput() {
	return reinterpret_cast<bool*>((byte*)this + 1549);
}
void ABP_BaseCharacter_C::M_SethasMovementInput(const bool& value) {
	Write((byte*)this + 1549, value);
}
// Member Getter and Setter of GaitType
// Declaration: TEnumAsByte<E_Gait> GaitType
TEnumAsByte<E_Gait> ABP_BaseCharacter_C::M_GetGaitType() const {
	return Read<TEnumAsByte<E_Gait>>((byte*)this + 1550);
}
TEnumAsByte<E_Gait>* ABP_BaseCharacter_C::M_PtrGetGaitType() {
	return reinterpret_cast<TEnumAsByte<E_Gait>*>((byte*)this + 1550);
}
void ABP_BaseCharacter_C::M_SetGaitType(const TEnumAsByte<E_Gait>& value) {
	Write((byte*)this + 1550, value);
}
// Member Getter and Setter of stance
// Declaration: TEnumAsByte<E_Stance> stance
TEnumAsByte<E_Stance> ABP_BaseCharacter_C::M_Getstance() const {
	return Read<TEnumAsByte<E_Stance>>((byte*)this + 1551);
}
TEnumAsByte<E_Stance>* ABP_BaseCharacter_C::M_PtrGetstance() {
	return reinterpret_cast<TEnumAsByte<E_Stance>*>((byte*)this + 1551);
}
void ABP_BaseCharacter_C::M_Setstance(const TEnumAsByte<E_Stance>& value) {
	Write((byte*)this + 1551, value);
}
// Member Getter and Setter of RotationMode
// Declaration: TEnumAsByte<E_RotationMode> RotationMode
TEnumAsByte<E_RotationMode> ABP_BaseCharacter_C::M_GetRotationMode() const {
	return Read<TEnumAsByte<E_RotationMode>>((byte*)this + 1552);
}
TEnumAsByte<E_RotationMode>* ABP_BaseCharacter_C::M_PtrGetRotationMode() {
	return reinterpret_cast<TEnumAsByte<E_RotationMode>*>((byte*)this + 1552);
}
void ABP_BaseCharacter_C::M_SetRotationMode(const TEnumAsByte<E_RotationMode>& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of MovementMode
// Declaration: TEnumAsByte<E_MovementMode> MovementMode
TEnumAsByte<E_MovementMode> ABP_BaseCharacter_C::M_GetMovementMode() const {
	return Read<TEnumAsByte<E_MovementMode>>((byte*)this + 1553);
}
TEnumAsByte<E_MovementMode>* ABP_BaseCharacter_C::M_PtrGetMovementMode() {
	return reinterpret_cast<TEnumAsByte<E_MovementMode>*>((byte*)this + 1553);
}
void ABP_BaseCharacter_C::M_SetMovementMode(const TEnumAsByte<E_MovementMode>& value) {
	Write((byte*)this + 1553, value);
}
// Member Getter and Setter of PrevMovementMode
// Declaration: TEnumAsByte<E_MovementMode> PrevMovementMode
TEnumAsByte<E_MovementMode> ABP_BaseCharacter_C::M_GetPrevMovementMode() const {
	return Read<TEnumAsByte<E_MovementMode>>((byte*)this + 1554);
}
TEnumAsByte<E_MovementMode>* ABP_BaseCharacter_C::M_PtrGetPrevMovementMode() {
	return reinterpret_cast<TEnumAsByte<E_MovementMode>*>((byte*)this + 1554);
}
void ABP_BaseCharacter_C::M_SetPrevMovementMode(const TEnumAsByte<E_MovementMode>& value) {
	Write((byte*)this + 1554, value);
}
// Member Getter and Setter of cardinalDirection
// Declaration: TEnumAsByte<E_CardinalDirection> cardinalDirection
TEnumAsByte<E_CardinalDirection> ABP_BaseCharacter_C::M_GetcardinalDirection() const {
	return Read<TEnumAsByte<E_CardinalDirection>>((byte*)this + 1555);
}
TEnumAsByte<E_CardinalDirection>* ABP_BaseCharacter_C::M_PtrGetcardinalDirection() {
	return reinterpret_cast<TEnumAsByte<E_CardinalDirection>*>((byte*)this + 1555);
}
void ABP_BaseCharacter_C::M_SetcardinalDirection(const TEnumAsByte<E_CardinalDirection>& value) {
	Write((byte*)this + 1555, value);
}
// Member Getter and Setter of TargetRotation
// Declaration: struct FRotator TargetRotation
struct FRotator ABP_BaseCharacter_C::M_GetTargetRotation() const {
	return Read<struct FRotator>((byte*)this + 1556);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetTargetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1556);
}
void ABP_BaseCharacter_C::M_SetTargetRotation(const struct FRotator& value) {
	Write((byte*)this + 1556, value);
}
// Member Getter and Setter of WalkingSpeed
// Declaration: float WalkingSpeed
float ABP_BaseCharacter_C::M_GetWalkingSpeed() const {
	return Read<float>((byte*)this + 1568);
}
float* ABP_BaseCharacter_C::M_PtrGetWalkingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1568);
}
void ABP_BaseCharacter_C::M_SetWalkingSpeed(const float& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of runningSpeed
// Declaration: float runningSpeed
float ABP_BaseCharacter_C::M_GetrunningSpeed() const {
	return Read<float>((byte*)this + 1572);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1572);
}
void ABP_BaseCharacter_C::M_SetrunningSpeed(const float& value) {
	Write((byte*)this + 1572, value);
}
// Member Getter and Setter of sprintingSpeed
// Declaration: float sprintingSpeed
float ABP_BaseCharacter_C::M_GetsprintingSpeed() const {
	return Read<float>((byte*)this + 1576);
}
float* ABP_BaseCharacter_C::M_PtrGetsprintingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1576);
}
void ABP_BaseCharacter_C::M_SetsprintingSpeed(const float& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of crouchingSpeed
// Declaration: float crouchingSpeed
float ABP_BaseCharacter_C::M_GetcrouchingSpeed() const {
	return Read<float>((byte*)this + 1580);
}
float* ABP_BaseCharacter_C::M_PtrGetcrouchingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1580);
}
void ABP_BaseCharacter_C::M_SetcrouchingSpeed(const float& value) {
	Write((byte*)this + 1580, value);
}
// Member Getter and Setter of WalkingAcceleration
// Declaration: float WalkingAcceleration
float ABP_BaseCharacter_C::M_GetWalkingAcceleration() const {
	return Read<float>((byte*)this + 1584);
}
float* ABP_BaseCharacter_C::M_PtrGetWalkingAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1584);
}
void ABP_BaseCharacter_C::M_SetWalkingAcceleration(const float& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of runningAcceleration
// Declaration: float runningAcceleration
float ABP_BaseCharacter_C::M_GetrunningAcceleration() const {
	return Read<float>((byte*)this + 1588);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1588);
}
void ABP_BaseCharacter_C::M_SetrunningAcceleration(const float& value) {
	Write((byte*)this + 1588, value);
}
// Member Getter and Setter of walkingDeceleration
// Declaration: float walkingDeceleration
float ABP_BaseCharacter_C::M_GetwalkingDeceleration() const {
	return Read<float>((byte*)this + 1592);
}
float* ABP_BaseCharacter_C::M_PtrGetwalkingDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1592);
}
void ABP_BaseCharacter_C::M_SetwalkingDeceleration(const float& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of runningDeceleration
// Declaration: float runningDeceleration
float ABP_BaseCharacter_C::M_GetrunningDeceleration() const {
	return Read<float>((byte*)this + 1596);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1596);
}
void ABP_BaseCharacter_C::M_SetrunningDeceleration(const float& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of walkingGroundFriction
// Declaration: float walkingGroundFriction
float ABP_BaseCharacter_C::M_GetwalkingGroundFriction() const {
	return Read<float>((byte*)this + 1600);
}
float* ABP_BaseCharacter_C::M_PtrGetwalkingGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1600);
}
void ABP_BaseCharacter_C::M_SetwalkingGroundFriction(const float& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of runningGroundFriction
// Declaration: float runningGroundFriction
float ABP_BaseCharacter_C::M_GetrunningGroundFriction() const {
	return Read<float>((byte*)this + 1604);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1604);
}
void ABP_BaseCharacter_C::M_SetrunningGroundFriction(const float& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of JumpRotation
// Declaration: struct FRotator JumpRotation
struct FRotator ABP_BaseCharacter_C::M_GetJumpRotation() const {
	return Read<struct FRotator>((byte*)this + 1608);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetJumpRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1608);
}
void ABP_BaseCharacter_C::M_SetJumpRotation(const struct FRotator& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of RotationOffset
// Declaration: float RotationOffset
float ABP_BaseCharacter_C::M_GetRotationOffset() const {
	return Read<float>((byte*)this + 1620);
}
float* ABP_BaseCharacter_C::M_PtrGetRotationOffset() {
	return reinterpret_cast<float*>((byte*)this + 1620);
}
void ABP_BaseCharacter_C::M_SetRotationOffset(const float& value) {
	Write((byte*)this + 1620, value);
}
// Member Getter and Setter of rotationRateMultiplier
// Declaration: float rotationRateMultiplier
float ABP_BaseCharacter_C::M_GetrotationRateMultiplier() const {
	return Read<float>((byte*)this + 1624);
}
float* ABP_BaseCharacter_C::M_PtrGetrotationRateMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1624);
}
void ABP_BaseCharacter_C::M_SetrotationRateMultiplier(const float& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of ForwardAxisValue
// Declaration: float ForwardAxisValue
float ABP_BaseCharacter_C::M_GetForwardAxisValue() const {
	return Read<float>((byte*)this + 1628);
}
float* ABP_BaseCharacter_C::M_PtrGetForwardAxisValue() {
	return reinterpret_cast<float*>((byte*)this + 1628);
}
void ABP_BaseCharacter_C::M_SetForwardAxisValue(const float& value) {
	Write((byte*)this + 1628, value);
}
// Member Getter and Setter of RightAxisValue
// Declaration: float RightAxisValue
float ABP_BaseCharacter_C::M_GetRightAxisValue() const {
	return Read<float>((byte*)this + 1632);
}
float* ABP_BaseCharacter_C::M_PtrGetRightAxisValue() {
	return reinterpret_cast<float*>((byte*)this + 1632);
}
void ABP_BaseCharacter_C::M_SetRightAxisValue(const float& value) {
	Write((byte*)this + 1632, value);
}
// Member Getter and Setter of ViewMode
// Declaration: TEnumAsByte<E_ViewMode> ViewMode
TEnumAsByte<E_ViewMode> ABP_BaseCharacter_C::M_GetViewMode() const {
	return Read<TEnumAsByte<E_ViewMode>>((byte*)this + 1636);
}
TEnumAsByte<E_ViewMode>* ABP_BaseCharacter_C::M_PtrGetViewMode() {
	return reinterpret_cast<TEnumAsByte<E_ViewMode>*>((byte*)this + 1636);
}
void ABP_BaseCharacter_C::M_SetViewMode(const TEnumAsByte<E_ViewMode>& value) {
	Write((byte*)this + 1636, value);
}
// Member Getter and Setter of Aiming
// Declaration: bool Aiming
bool ABP_BaseCharacter_C::M_GetAiming() const {
	return Read<bool>((byte*)this + 1637);
}
bool* ABP_BaseCharacter_C::M_PtrGetAiming() {
	return reinterpret_cast<bool*>((byte*)this + 1637);
}
void ABP_BaseCharacter_C::M_SetAiming(const bool& value) {
	Write((byte*)this + 1637, value);
}
// Member Getter and Setter of VoiceSocket
// Declaration: struct FName VoiceSocket
struct FName ABP_BaseCharacter_C::M_GetVoiceSocket() const {
	return Read<struct FName>((byte*)this + 1640);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetVoiceSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 1640);
}
void ABP_BaseCharacter_C::M_SetVoiceSocket(const struct FName& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of ShowTraces
// Declaration: bool ShowTraces
bool ABP_BaseCharacter_C::M_GetShowTraces() const {
	return Read<bool>((byte*)this + 1648);
}
bool* ABP_BaseCharacter_C::M_PtrGetShowTraces() {
	return reinterpret_cast<bool*>((byte*)this + 1648);
}
void ABP_BaseCharacter_C::M_SetShowTraces(const bool& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of ShowSettings
// Declaration: bool ShowSettings
bool ABP_BaseCharacter_C::M_GetShowSettings() const {
	return Read<bool>((byte*)this + 1649);
}
bool* ABP_BaseCharacter_C::M_PtrGetShowSettings() {
	return reinterpret_cast<bool*>((byte*)this + 1649);
}
void ABP_BaseCharacter_C::M_SetShowSettings(const bool& value) {
	Write((byte*)this + 1649, value);
}
// Member Getter and Setter of PelvisBone
// Declaration: struct FName PelvisBone
struct FName ABP_BaseCharacter_C::M_GetPelvisBone() const {
	return Read<struct FName>((byte*)this + 1652);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetPelvisBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 1652);
}
void ABP_BaseCharacter_C::M_SetPelvisBone(const struct FName& value) {
	Write((byte*)this + 1652, value);
}
// Member Getter and Setter of RagdollPoseSnapshot
// Declaration: struct FName RagdollPoseSnapshot
struct FName ABP_BaseCharacter_C::M_GetRagdollPoseSnapshot() const {
	return Read<struct FName>((byte*)this + 1660);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetRagdollPoseSnapshot() {
	return reinterpret_cast<struct FName*>((byte*)this + 1660);
}
void ABP_BaseCharacter_C::M_SetRagdollPoseSnapshot(const struct FName& value) {
	Write((byte*)this + 1660, value);
}
// Member Getter and Setter of RagdollOnGround
// Declaration: bool RagdollOnGround
bool ABP_BaseCharacter_C::M_GetRagdollOnGround() const {
	return Read<bool>((byte*)this + 1668);
}
bool* ABP_BaseCharacter_C::M_PtrGetRagdollOnGround() {
	return reinterpret_cast<bool*>((byte*)this + 1668);
}
void ABP_BaseCharacter_C::M_SetRagdollOnGround(const bool& value) {
	Write((byte*)this + 1668, value);
}
// Member Getter and Setter of RagdollLocation
// Declaration: struct FVector RagdollLocation
struct FVector ABP_BaseCharacter_C::M_GetRagdollLocation() const {
	return Read<struct FVector>((byte*)this + 1672);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetRagdollLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1672);
}
void ABP_BaseCharacter_C::M_SetRagdollLocation(const struct FVector& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of RagdollVelocity
// Declaration: struct FVector RagdollVelocity
struct FVector ABP_BaseCharacter_C::M_GetRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 1684);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1684);
}
void ABP_BaseCharacter_C::M_SetRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 1684, value);
}
// Member Getter and Setter of Inventory_Open
// Declaration: bool Inventory_Open
bool ABP_BaseCharacter_C::M_GetInventory_Open() const {
	return Read<bool>((byte*)this + 1696);
}
bool* ABP_BaseCharacter_C::M_PtrGetInventory_Open() {
	return reinterpret_cast<bool*>((byte*)this + 1696);
}
void ABP_BaseCharacter_C::M_SetInventory_Open(const bool& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of ShouldCrouch
// Declaration: bool ShouldCrouch
bool ABP_BaseCharacter_C::M_GetShouldCrouch() const {
	return Read<bool>((byte*)this + 1697);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldCrouch() {
	return reinterpret_cast<bool*>((byte*)this + 1697);
}
void ABP_BaseCharacter_C::M_SetShouldCrouch(const bool& value) {
	Write((byte*)this + 1697, value);
}
// Member Getter and Setter of SelectedItemID
// Declaration: int32_t SelectedItemID
int32_t ABP_BaseCharacter_C::M_GetSelectedItemID() const {
	return Read<int32_t>((byte*)this + 1700);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetSelectedItemID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1700);
}
void ABP_BaseCharacter_C::M_SetSelectedItemID(const int32_t& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of HitReference
// Declaration: struct FHitResult HitReference
struct FHitResult ABP_BaseCharacter_C::M_GetHitReference() const {
	return Read<struct FHitResult>((byte*)this + 1704);
}
struct FHitResult* ABP_BaseCharacter_C::M_PtrGetHitReference() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 1704);
}
void ABP_BaseCharacter_C::M_SetHitReference(const struct FHitResult& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of HeldItem
// Declaration: class ABP_MasterHoldableItem_C* HeldItem
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetHeldItem() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 1840);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetHeldItem() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 1840);
}
void ABP_BaseCharacter_C::M_SetHeldItem(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of BlockEquipping
// Declaration: bool BlockEquipping
bool ABP_BaseCharacter_C::M_GetBlockEquipping() const {
	return Read<bool>((byte*)this + 1848);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockEquipping() {
	return reinterpret_cast<bool*>((byte*)this + 1848);
}
void ABP_BaseCharacter_C::M_SetBlockEquipping(const bool& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of Tag
// Declaration: TArray<struct FName> Tag
TArray<struct FName> ABP_BaseCharacter_C::M_GetTag() const {
	return Read<TArray<struct FName>>((byte*)this + 1856);
}
TArray<struct FName>* ABP_BaseCharacter_C::M_PtrGetTag() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1856);
}
void ABP_BaseCharacter_C::M_SetTag(const TArray<struct FName>& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of EncumberedSpeedMultiplier
// Declaration: float EncumberedSpeedMultiplier
float ABP_BaseCharacter_C::M_GetEncumberedSpeedMultiplier() const {
	return Read<float>((byte*)this + 1872);
}
float* ABP_BaseCharacter_C::M_PtrGetEncumberedSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1872);
}
void ABP_BaseCharacter_C::M_SetEncumberedSpeedMultiplier(const float& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of BuildingMenuOpen
// Declaration: bool BuildingMenuOpen
bool ABP_BaseCharacter_C::M_GetBuildingMenuOpen() const {
	return Read<bool>((byte*)this + 1876);
}
bool* ABP_BaseCharacter_C::M_PtrGetBuildingMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1876);
}
void ABP_BaseCharacter_C::M_SetBuildingMenuOpen(const bool& value) {
	Write((byte*)this + 1876, value);
}
// Member Getter and Setter of BlockInteraction
// Declaration: bool BlockInteraction
bool ABP_BaseCharacter_C::M_GetBlockInteraction() const {
	return Read<bool>((byte*)this + 1877);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 1877);
}
void ABP_BaseCharacter_C::M_SetBlockInteraction(const bool& value) {
	Write((byte*)this + 1877, value);
}
// Member Getter and Setter of Off_HandItem
// Declaration: class ABP_MasterHoldableItem_C* Off_HandItem
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetOff_HandItem() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 1880);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetOff_HandItem() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 1880);
}
void ABP_BaseCharacter_C::M_SetOff_HandItem(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_BaseCharacter_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 1888);
}
class ABP_SystemsManager_C** ABP_BaseCharacter_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 1888);
}
void ABP_BaseCharacter_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of FieldChunk
// Declaration: struct FST_Chunks FieldChunk
struct FST_Chunks ABP_BaseCharacter_C::M_GetFieldChunk() const {
	return Read<struct FST_Chunks>((byte*)this + 1896);
}
struct FST_Chunks* ABP_BaseCharacter_C::M_PtrGetFieldChunk() {
	return reinterpret_cast<struct FST_Chunks*>((byte*)this + 1896);
}
void ABP_BaseCharacter_C::M_SetFieldChunk(const struct FST_Chunks& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of HitFieldChunk
// Declaration: struct FST_Chunks HitFieldChunk
struct FST_Chunks ABP_BaseCharacter_C::M_GetHitFieldChunk() const {
	return Read<struct FST_Chunks>((byte*)this + 2416);
}
struct FST_Chunks* ABP_BaseCharacter_C::M_PtrGetHitFieldChunk() {
	return reinterpret_cast<struct FST_Chunks*>((byte*)this + 2416);
}
void ABP_BaseCharacter_C::M_SetHitFieldChunk(const struct FST_Chunks& value) {
	Write((byte*)this + 2416, value);
}
// Member Getter and Setter of DefaultCharacterModules
// Declaration: struct FST_CharacterModules DefaultCharacterModules
struct FST_CharacterModules ABP_BaseCharacter_C::M_GetDefaultCharacterModules() const {
	return Read<struct FST_CharacterModules>((byte*)this + 2936);
}
struct FST_CharacterModules* ABP_BaseCharacter_C::M_PtrGetDefaultCharacterModules() {
	return reinterpret_cast<struct FST_CharacterModules*>((byte*)this + 2936);
}
void ABP_BaseCharacter_C::M_SetDefaultCharacterModules(const struct FST_CharacterModules& value) {
	Write((byte*)this + 2936, value);
}
// Member Getter and Setter of DynamicMaterials
// Declaration: TArray<struct FST_MeshDynamicMaterials> DynamicMaterials
TArray<struct FST_MeshDynamicMaterials> ABP_BaseCharacter_C::M_GetDynamicMaterials() const {
	return Read<TArray<struct FST_MeshDynamicMaterials>>((byte*)this + 3136);
}
TArray<struct FST_MeshDynamicMaterials>* ABP_BaseCharacter_C::M_PtrGetDynamicMaterials() {
	return reinterpret_cast<TArray<struct FST_MeshDynamicMaterials>*>((byte*)this + 3136);
}
void ABP_BaseCharacter_C::M_SetDynamicMaterials(const TArray<struct FST_MeshDynamicMaterials>& value) {
	Write((byte*)this + 3136, value);
}
// Member Getter and Setter of UseHeadForFullBodyAnimations
// Declaration: bool UseHeadForFullBodyAnimations
bool ABP_BaseCharacter_C::M_GetUseHeadForFullBodyAnimations() const {
	return Read<bool>((byte*)this + 3152);
}
bool* ABP_BaseCharacter_C::M_PtrGetUseHeadForFullBodyAnimations() {
	return reinterpret_cast<bool*>((byte*)this + 3152);
}
void ABP_BaseCharacter_C::M_SetUseHeadForFullBodyAnimations(const bool& value) {
	Write((byte*)this + 3152, value);
}
// Member Getter and Setter of InteractionCameraSlowDown
// Declaration: float InteractionCameraSlowDown
float ABP_BaseCharacter_C::M_GetInteractionCameraSlowDown() const {
	return Read<float>((byte*)this + 3156);
}
float* ABP_BaseCharacter_C::M_PtrGetInteractionCameraSlowDown() {
	return reinterpret_cast<float*>((byte*)this + 3156);
}
void ABP_BaseCharacter_C::M_SetInteractionCameraSlowDown(const float& value) {
	Write((byte*)this + 3156, value);
}
// Member Getter and Setter of InteractionMovementSlowDown
// Declaration: float InteractionMovementSlowDown
float ABP_BaseCharacter_C::M_GetInteractionMovementSlowDown() const {
	return Read<float>((byte*)this + 3160);
}
float* ABP_BaseCharacter_C::M_PtrGetInteractionMovementSlowDown() {
	return reinterpret_cast<float*>((byte*)this + 3160);
}
void ABP_BaseCharacter_C::M_SetInteractionMovementSlowDown(const float& value) {
	Write((byte*)this + 3160, value);
}
// Member Getter and Setter of UsePawnCameraRelativeRotation
// Declaration: struct FRotator UsePawnCameraRelativeRotation
struct FRotator ABP_BaseCharacter_C::M_GetUsePawnCameraRelativeRotation() const {
	return Read<struct FRotator>((byte*)this + 3164);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetUsePawnCameraRelativeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 3164);
}
void ABP_BaseCharacter_C::M_SetUsePawnCameraRelativeRotation(const struct FRotator& value) {
	Write((byte*)this + 3164, value);
}
// Member Getter and Setter of CameraFadeFinished
// Declaration: TAssetPtr<class FCameraFadeFinished__DelegateSignature> CameraFadeFinished
TAssetPtr<class FCameraFadeFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetCameraFadeFinished() const {
	return Read<TAssetPtr<class FCameraFadeFinished__DelegateSignature>>((byte*)this + 3176);
}
TAssetPtr<class FCameraFadeFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetCameraFadeFinished() {
	return reinterpret_cast<TAssetPtr<class FCameraFadeFinished__DelegateSignature>*>((byte*)this + 3176);
}
void ABP_BaseCharacter_C::M_SetCameraFadeFinished(const TAssetPtr<class FCameraFadeFinished__DelegateSignature>& value) {
	Write((byte*)this + 3176, value);
}
// Member Getter and Setter of TorchUsableToolTypes
// Declaration: TArray<TEnumAsByte<E_Tools>> TorchUsableToolTypes
TArray<TEnumAsByte<E_Tools>> ABP_BaseCharacter_C::M_GetTorchUsableToolTypes() const {
	return Read<TArray<TEnumAsByte<E_Tools>>>((byte*)this + 3192);
}
TArray<TEnumAsByte<E_Tools>>* ABP_BaseCharacter_C::M_PtrGetTorchUsableToolTypes() {
	return reinterpret_cast<TArray<TEnumAsByte<E_Tools>>*>((byte*)this + 3192);
}
void ABP_BaseCharacter_C::M_SetTorchUsableToolTypes(const TArray<TEnumAsByte<E_Tools>>& value) {
	Write((byte*)this + 3192, value);
}
// Member Getter and Setter of SkinTone
// Declaration: struct FLinearColor SkinTone
struct FLinearColor ABP_BaseCharacter_C::M_GetSkinTone() const {
	return Read<struct FLinearColor>((byte*)this + 3208);
}
struct FLinearColor* ABP_BaseCharacter_C::M_PtrGetSkinTone() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 3208);
}
void ABP_BaseCharacter_C::M_SetSkinTone(const struct FLinearColor& value) {
	Write((byte*)this + 3208, value);
}
// Member Getter and Setter of IsSwooned
// Declaration: bool IsSwooned
bool ABP_BaseCharacter_C::M_GetIsSwooned() const {
	return Read<bool>((byte*)this + 3224);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSwooned() {
	return reinterpret_cast<bool*>((byte*)this + 3224);
}
void ABP_BaseCharacter_C::M_SetIsSwooned(const bool& value) {
	Write((byte*)this + 3224, value);
}
// Member Getter and Setter of IsSprintKeyDown
// Declaration: bool IsSprintKeyDown
bool ABP_BaseCharacter_C::M_GetIsSprintKeyDown() const {
	return Read<bool>((byte*)this + 3225);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSprintKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 3225);
}
void ABP_BaseCharacter_C::M_SetIsSprintKeyDown(const bool& value) {
	Write((byte*)this + 3225, value);
}
// Member Getter and Setter of DefaultFPCameraFOV
// Declaration: float DefaultFPCameraFOV
float ABP_BaseCharacter_C::M_GetDefaultFPCameraFOV() const {
	return Read<float>((byte*)this + 3228);
}
float* ABP_BaseCharacter_C::M_PtrGetDefaultFPCameraFOV() {
	return reinterpret_cast<float*>((byte*)this + 3228);
}
void ABP_BaseCharacter_C::M_SetDefaultFPCameraFOV(const float& value) {
	Write((byte*)this + 3228, value);
}
// Member Getter and Setter of OnMovementFinished
// Declaration: TAssetPtr<class FOnMovementFinished__DelegateSignature> OnMovementFinished
TAssetPtr<class FOnMovementFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnMovementFinished() const {
	return Read<TAssetPtr<class FOnMovementFinished__DelegateSignature>>((byte*)this + 3232);
}
TAssetPtr<class FOnMovementFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnMovementFinished() {
	return reinterpret_cast<TAssetPtr<class FOnMovementFinished__DelegateSignature>*>((byte*)this + 3232);
}
void ABP_BaseCharacter_C::M_SetOnMovementFinished(const TAssetPtr<class FOnMovementFinished__DelegateSignature>& value) {
	Write((byte*)this + 3232, value);
}
// Member Getter and Setter of Sitting
// Declaration: bool Sitting
bool ABP_BaseCharacter_C::M_GetSitting() const {
	return Read<bool>((byte*)this + 3248);
}
bool* ABP_BaseCharacter_C::M_PtrGetSitting() {
	return reinterpret_cast<bool*>((byte*)this + 3248);
}
void ABP_BaseCharacter_C::M_SetSitting(const bool& value) {
	Write((byte*)this + 3248, value);
}
// Member Getter and Setter of GettingUp
// Declaration: bool GettingUp
bool ABP_BaseCharacter_C::M_GetGettingUp() const {
	return Read<bool>((byte*)this + 3249);
}
bool* ABP_BaseCharacter_C::M_PtrGetGettingUp() {
	return reinterpret_cast<bool*>((byte*)this + 3249);
}
void ABP_BaseCharacter_C::M_SetGettingUp(const bool& value) {
	Write((byte*)this + 3249, value);
}
// Member Getter and Setter of Sleeping
// Declaration: bool Sleeping
bool ABP_BaseCharacter_C::M_GetSleeping() const {
	return Read<bool>((byte*)this + 3250);
}
bool* ABP_BaseCharacter_C::M_PtrGetSleeping() {
	return reinterpret_cast<bool*>((byte*)this + 3250);
}
void ABP_BaseCharacter_C::M_SetSleeping(const bool& value) {
	Write((byte*)this + 3250, value);
}
// Member Getter and Setter of SleepingDirection
// Declaration: TEnumAsByte<E_SleepingDirection> SleepingDirection
TEnumAsByte<E_SleepingDirection> ABP_BaseCharacter_C::M_GetSleepingDirection() const {
	return Read<TEnumAsByte<E_SleepingDirection>>((byte*)this + 3251);
}
TEnumAsByte<E_SleepingDirection>* ABP_BaseCharacter_C::M_PtrGetSleepingDirection() {
	return reinterpret_cast<TEnumAsByte<E_SleepingDirection>*>((byte*)this + 3251);
}
void ABP_BaseCharacter_C::M_SetSleepingDirection(const TEnumAsByte<E_SleepingDirection>& value) {
	Write((byte*)this + 3251, value);
}
// Member Getter and Setter of OnSitIdleEntered
// Declaration: TAssetPtr<class FOnSitIdleEntered__DelegateSignature> OnSitIdleEntered
TAssetPtr<class FOnSitIdleEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitIdleEntered() const {
	return Read<TAssetPtr<class FOnSitIdleEntered__DelegateSignature>>((byte*)this + 3256);
}
TAssetPtr<class FOnSitIdleEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitIdleEntered() {
	return reinterpret_cast<TAssetPtr<class FOnSitIdleEntered__DelegateSignature>*>((byte*)this + 3256);
}
void ABP_BaseCharacter_C::M_SetOnSitIdleEntered(const TAssetPtr<class FOnSitIdleEntered__DelegateSignature>& value) {
	Write((byte*)this + 3256, value);
}
// Member Getter and Setter of OnSleepIdleEntered
// Declaration: TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> OnSleepIdleEntered
TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepIdleEntered() const {
	return Read<TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>>((byte*)this + 3272);
}
TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepIdleEntered() {
	return reinterpret_cast<TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>*>((byte*)this + 3272);
}
void ABP_BaseCharacter_C::M_SetOnSleepIdleEntered(const TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>& value) {
	Write((byte*)this + 3272, value);
}
// Member Getter and Setter of UseBedSleepingPose
// Declaration: bool UseBedSleepingPose
bool ABP_BaseCharacter_C::M_GetUseBedSleepingPose() const {
	return Read<bool>((byte*)this + 3288);
}
bool* ABP_BaseCharacter_C::M_PtrGetUseBedSleepingPose() {
	return reinterpret_cast<bool*>((byte*)this + 3288);
}
void ABP_BaseCharacter_C::M_SetUseBedSleepingPose(const bool& value) {
	Write((byte*)this + 3288, value);
}
// Member Getter and Setter of CraftingMenuOpen
// Declaration: bool CraftingMenuOpen
bool ABP_BaseCharacter_C::M_GetCraftingMenuOpen() const {
	return Read<bool>((byte*)this + 3289);
}
bool* ABP_BaseCharacter_C::M_PtrGetCraftingMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 3289);
}
void ABP_BaseCharacter_C::M_SetCraftingMenuOpen(const bool& value) {
	Write((byte*)this + 3289, value);
}
// Member Getter and Setter of IsCrafting
// Declaration: bool IsCrafting
bool ABP_BaseCharacter_C::M_GetIsCrafting() const {
	return Read<bool>((byte*)this + 3290);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3290);
}
void ABP_BaseCharacter_C::M_SetIsCrafting(const bool& value) {
	Write((byte*)this + 3290, value);
}
// Member Getter and Setter of InstantBuilding
// Declaration: bool InstantBuilding
bool ABP_BaseCharacter_C::M_GetInstantBuilding() const {
	return Read<bool>((byte*)this + 3291);
}
bool* ABP_BaseCharacter_C::M_PtrGetInstantBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 3291);
}
void ABP_BaseCharacter_C::M_SetInstantBuilding(const bool& value) {
	Write((byte*)this + 3291, value);
}
// Member Getter and Setter of EndLoopSectionDuration
// Declaration: float EndLoopSectionDuration
float ABP_BaseCharacter_C::M_GetEndLoopSectionDuration() const {
	return Read<float>((byte*)this + 3292);
}
float* ABP_BaseCharacter_C::M_PtrGetEndLoopSectionDuration() {
	return reinterpret_cast<float*>((byte*)this + 3292);
}
void ABP_BaseCharacter_C::M_SetEndLoopSectionDuration(const float& value) {
	Write((byte*)this + 3292, value);
}
// Member Getter and Setter of CraftingTime
// Declaration: float CraftingTime
float ABP_BaseCharacter_C::M_GetCraftingTime() const {
	return Read<float>((byte*)this + 3296);
}
float* ABP_BaseCharacter_C::M_PtrGetCraftingTime() {
	return reinterpret_cast<float*>((byte*)this + 3296);
}
void ABP_BaseCharacter_C::M_SetCraftingTime(const float& value) {
	Write((byte*)this + 3296, value);
}
// Member Getter and Setter of HadToolBeforeCrafting
// Declaration: bool HadToolBeforeCrafting
bool ABP_BaseCharacter_C::M_GetHadToolBeforeCrafting() const {
	return Read<bool>((byte*)this + 3300);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadToolBeforeCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3300);
}
void ABP_BaseCharacter_C::M_SetHadToolBeforeCrafting(const bool& value) {
	Write((byte*)this + 3300, value);
}
// Member Getter and Setter of SpawnedOffHandAnimItem
// Declaration: bool SpawnedOffHandAnimItem
bool ABP_BaseCharacter_C::M_GetSpawnedOffHandAnimItem() const {
	return Read<bool>((byte*)this + 3301);
}
bool* ABP_BaseCharacter_C::M_PtrGetSpawnedOffHandAnimItem() {
	return reinterpret_cast<bool*>((byte*)this + 3301);
}
void ABP_BaseCharacter_C::M_SetSpawnedOffHandAnimItem(const bool& value) {
	Write((byte*)this + 3301, value);
}
// Member Getter and Setter of HadOffhandBeforeCrafting
// Declaration: bool HadOffhandBeforeCrafting
bool ABP_BaseCharacter_C::M_GetHadOffhandBeforeCrafting() const {
	return Read<bool>((byte*)this + 3302);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadOffhandBeforeCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3302);
}
void ABP_BaseCharacter_C::M_SetHadOffhandBeforeCrafting(const bool& value) {
	Write((byte*)this + 3302, value);
}
// Member Getter and Setter of ChoiceMenuOpen
// Declaration: bool ChoiceMenuOpen
bool ABP_BaseCharacter_C::M_GetChoiceMenuOpen() const {
	return Read<bool>((byte*)this + 3303);
}
bool* ABP_BaseCharacter_C::M_PtrGetChoiceMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 3303);
}
void ABP_BaseCharacter_C::M_SetChoiceMenuOpen(const bool& value) {
	Write((byte*)this + 3303, value);
}
// Member Getter and Setter of CurrentPickingMontage
// Declaration: class UAnimMontage* CurrentPickingMontage
class UAnimMontage* ABP_BaseCharacter_C::M_GetCurrentPickingMontage() const {
	return Read<class UAnimMontage*>((byte*)this + 3304);
}
class UAnimMontage** ABP_BaseCharacter_C::M_PtrGetCurrentPickingMontage() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 3304);
}
void ABP_BaseCharacter_C::M_SetCurrentPickingMontage(const class UAnimMontage*& value) {
	Write((byte*)this + 3304, value);
}
// Member Getter and Setter of bLockMovement
// Declaration: bool bLockMovement
bool ABP_BaseCharacter_C::M_GetbLockMovement() const {
	return Read<bool>((byte*)this + 3312);
}
bool* ABP_BaseCharacter_C::M_PtrGetbLockMovement() {
	return reinterpret_cast<bool*>((byte*)this + 3312);
}
void ABP_BaseCharacter_C::M_SetbLockMovement(const bool& value) {
	Write((byte*)this + 3312, value);
}
// Member Getter and Setter of MontageSectionStartTime
// Declaration: float MontageSectionStartTime
float ABP_BaseCharacter_C::M_GetMontageSectionStartTime() const {
	return Read<float>((byte*)this + 3316);
}
float* ABP_BaseCharacter_C::M_PtrGetMontageSectionStartTime() {
	return reinterpret_cast<float*>((byte*)this + 3316);
}
void ABP_BaseCharacter_C::M_SetMontageSectionStartTime(const float& value) {
	Write((byte*)this + 3316, value);
}
// Member Getter and Setter of BlockCraftingMenuMovement
// Declaration: bool BlockCraftingMenuMovement
bool ABP_BaseCharacter_C::M_GetBlockCraftingMenuMovement() const {
	return Read<bool>((byte*)this + 3320);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockCraftingMenuMovement() {
	return reinterpret_cast<bool*>((byte*)this + 3320);
}
void ABP_BaseCharacter_C::M_SetBlockCraftingMenuMovement(const bool& value) {
	Write((byte*)this + 3320, value);
}
// Member Getter and Setter of BlockOffhandEquipping
// Declaration: bool BlockOffhandEquipping
bool ABP_BaseCharacter_C::M_GetBlockOffhandEquipping() const {
	return Read<bool>((byte*)this + 3321);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockOffhandEquipping() {
	return reinterpret_cast<bool*>((byte*)this + 3321);
}
void ABP_BaseCharacter_C::M_SetBlockOffhandEquipping(const bool& value) {
	Write((byte*)this + 3321, value);
}
// Member Getter and Setter of Oldness
// Declaration: float Oldness
float ABP_BaseCharacter_C::M_GetOldness() const {
	return Read<float>((byte*)this + 3324);
}
float* ABP_BaseCharacter_C::M_PtrGetOldness() {
	return reinterpret_cast<float*>((byte*)this + 3324);
}
void ABP_BaseCharacter_C::M_SetOldness(const float& value) {
	Write((byte*)this + 3324, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_BaseCharacter_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 3328);
}
TEnumAsByte<E_Ownership>* ABP_BaseCharacter_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 3328);
}
void ABP_BaseCharacter_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 3328, value);
}
// Member Getter and Setter of LeftHandReference
// Declaration: class ABP_MasterHoldableItem_C* LeftHandReference
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetLeftHandReference() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 3336);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetLeftHandReference() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 3336);
}
void ABP_BaseCharacter_C::M_SetLeftHandReference(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 3336, value);
}
// Member Getter and Setter of RightHandReference
// Declaration: class ABP_MasterHoldableItem_C* RightHandReference
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetRightHandReference() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 3344);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetRightHandReference() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 3344);
}
void ABP_BaseCharacter_C::M_SetRightHandReference(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 3344, value);
}
// Member Getter and Setter of FistFightingAlpha
// Declaration: float FistFightingAlpha
float ABP_BaseCharacter_C::M_GetFistFightingAlpha() const {
	return Read<float>((byte*)this + 3352);
}
float* ABP_BaseCharacter_C::M_PtrGetFistFightingAlpha() {
	return reinterpret_cast<float*>((byte*)this + 3352);
}
void ABP_BaseCharacter_C::M_SetFistFightingAlpha(const float& value) {
	Write((byte*)this + 3352, value);
}
// Member Getter and Setter of IsSick
// Declaration: bool IsSick
bool ABP_BaseCharacter_C::M_GetIsSick() const {
	return Read<bool>((byte*)this + 3356);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSick() {
	return reinterpret_cast<bool*>((byte*)this + 3356);
}
void ABP_BaseCharacter_C::M_SetIsSick(const bool& value) {
	Write((byte*)this + 3356, value);
}
// Member Getter and Setter of IsInjured
// Declaration: bool IsInjured
bool ABP_BaseCharacter_C::M_GetIsInjured() const {
	return Read<bool>((byte*)this + 3357);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInjured() {
	return reinterpret_cast<bool*>((byte*)this + 3357);
}
void ABP_BaseCharacter_C::M_SetIsInjured(const bool& value) {
	Write((byte*)this + 3357, value);
}
// Member Getter and Setter of UI_InspectorReference
// Declaration: class UUI_Inspector_NPC_C* UI_InspectorReference
class UUI_Inspector_NPC_C* ABP_BaseCharacter_C::M_GetUI_InspectorReference() const {
	return Read<class UUI_Inspector_NPC_C*>((byte*)this + 3360);
}
class UUI_Inspector_NPC_C** ABP_BaseCharacter_C::M_PtrGetUI_InspectorReference() {
	return reinterpret_cast<class UUI_Inspector_NPC_C**>((byte*)this + 3360);
}
void ABP_BaseCharacter_C::M_SetUI_InspectorReference(const class UUI_Inspector_NPC_C*& value) {
	Write((byte*)this + 3360, value);
}
// Member Getter and Setter of IsInIdleState
// Declaration: bool IsInIdleState
bool ABP_BaseCharacter_C::M_GetIsInIdleState() const {
	return Read<bool>((byte*)this + 3368);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInIdleState() {
	return reinterpret_cast<bool*>((byte*)this + 3368);
}
void ABP_BaseCharacter_C::M_SetIsInIdleState(const bool& value) {
	Write((byte*)this + 3368, value);
}
// Member Getter and Setter of IdleState
// Declaration: TEnumAsByte<E_IdleStates> IdleState
TEnumAsByte<E_IdleStates> ABP_BaseCharacter_C::M_GetIdleState() const {
	return Read<TEnumAsByte<E_IdleStates>>((byte*)this + 3369);
}
TEnumAsByte<E_IdleStates>* ABP_BaseCharacter_C::M_PtrGetIdleState() {
	return reinterpret_cast<TEnumAsByte<E_IdleStates>*>((byte*)this + 3369);
}
void ABP_BaseCharacter_C::M_SetIdleState(const TEnumAsByte<E_IdleStates>& value) {
	Write((byte*)this + 3369, value);
}
// Member Getter and Setter of CanTakeFallDamage
// Declaration: bool CanTakeFallDamage
bool ABP_BaseCharacter_C::M_GetCanTakeFallDamage() const {
	return Read<bool>((byte*)this + 3370);
}
bool* ABP_BaseCharacter_C::M_PtrGetCanTakeFallDamage() {
	return reinterpret_cast<bool*>((byte*)this + 3370);
}
void ABP_BaseCharacter_C::M_SetCanTakeFallDamage(const bool& value) {
	Write((byte*)this + 3370, value);
}
// Member Getter and Setter of FallingTimerHandle
// Declaration: struct FTimerHandle FallingTimerHandle
struct FTimerHandle ABP_BaseCharacter_C::M_GetFallingTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 3376);
}
struct FTimerHandle* ABP_BaseCharacter_C::M_PtrGetFallingTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 3376);
}
void ABP_BaseCharacter_C::M_SetFallingTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 3376, value);
}
// Member Getter and Setter of FallVelocity
// Declaration: float FallVelocity
float ABP_BaseCharacter_C::M_GetFallVelocity() const {
	return Read<float>((byte*)this + 3384);
}
float* ABP_BaseCharacter_C::M_PtrGetFallVelocity() {
	return reinterpret_cast<float*>((byte*)this + 3384);
}
void ABP_BaseCharacter_C::M_SetFallVelocity(const float& value) {
	Write((byte*)this + 3384, value);
}
// Member Getter and Setter of FallVelocityThreshold
// Declaration: float FallVelocityThreshold
float ABP_BaseCharacter_C::M_GetFallVelocityThreshold() const {
	return Read<float>((byte*)this + 3388);
}
float* ABP_BaseCharacter_C::M_PtrGetFallVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 3388);
}
void ABP_BaseCharacter_C::M_SetFallVelocityThreshold(const float& value) {
	Write((byte*)this + 3388, value);
}
// Member Getter and Setter of ShouldTakeFallDamage
// Declaration: bool ShouldTakeFallDamage
bool ABP_BaseCharacter_C::M_GetShouldTakeFallDamage() const {
	return Read<bool>((byte*)this + 3392);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldTakeFallDamage() {
	return reinterpret_cast<bool*>((byte*)this + 3392);
}
void ABP_BaseCharacter_C::M_SetShouldTakeFallDamage(const bool& value) {
	Write((byte*)this + 3392, value);
}
// Member Getter and Setter of FallDamageToApply
// Declaration: float FallDamageToApply
float ABP_BaseCharacter_C::M_GetFallDamageToApply() const {
	return Read<float>((byte*)this + 3396);
}
float* ABP_BaseCharacter_C::M_PtrGetFallDamageToApply() {
	return reinterpret_cast<float*>((byte*)this + 3396);
}
void ABP_BaseCharacter_C::M_SetFallDamageToApply(const float& value) {
	Write((byte*)this + 3396, value);
}
// Member Getter and Setter of StandingIdlePose
// Declaration: unsigned char StandingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetStandingIdlePose() const {
	return Read<unsigned char>((byte*)this + 3400);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetStandingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 3400);
}
void ABP_BaseCharacter_C::M_SetStandingIdlePose(const unsigned char& value) {
	Write((byte*)this + 3400, value);
}
// Member Getter and Setter of TalkingIdlePose
// Declaration: unsigned char TalkingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetTalkingIdlePose() const {
	return Read<unsigned char>((byte*)this + 3401);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetTalkingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 3401);
}
void ABP_BaseCharacter_C::M_SetTalkingIdlePose(const unsigned char& value) {
	Write((byte*)this + 3401, value);
}
// Member Getter and Setter of LookingIdlePose
// Declaration: unsigned char LookingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetLookingIdlePose() const {
	return Read<unsigned char>((byte*)this + 3402);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetLookingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 3402);
}
void ABP_BaseCharacter_C::M_SetLookingIdlePose(const unsigned char& value) {
	Write((byte*)this + 3402, value);
}
// Member Getter and Setter of OtherIdlePose
// Declaration: unsigned char OtherIdlePose
unsigned char ABP_BaseCharacter_C::M_GetOtherIdlePose() const {
	return Read<unsigned char>((byte*)this + 3403);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetOtherIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 3403);
}
void ABP_BaseCharacter_C::M_SetOtherIdlePose(const unsigned char& value) {
	Write((byte*)this + 3403, value);
}
// Member Getter and Setter of OnIdleAnimEntered
// Declaration: TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> OnIdleAnimEntered
TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnIdleAnimEntered() const {
	return Read<TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>>((byte*)this + 3408);
}
TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnIdleAnimEntered() {
	return reinterpret_cast<TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>*>((byte*)this + 3408);
}
void ABP_BaseCharacter_C::M_SetOnIdleAnimEntered(const TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>& value) {
	Write((byte*)this + 3408, value);
}
// Member Getter and Setter of OnIdleAnimFinished
// Declaration: TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> OnIdleAnimFinished
TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnIdleAnimFinished() const {
	return Read<TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>>((byte*)this + 3424);
}
TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnIdleAnimFinished() {
	return reinterpret_cast<TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>*>((byte*)this + 3424);
}
void ABP_BaseCharacter_C::M_SetOnIdleAnimFinished(const TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>& value) {
	Write((byte*)this + 3424, value);
}
// Member Getter and Setter of WavingIdlePose
// Declaration: unsigned char WavingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetWavingIdlePose() const {
	return Read<unsigned char>((byte*)this + 3440);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetWavingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 3440);
}
void ABP_BaseCharacter_C::M_SetWavingIdlePose(const unsigned char& value) {
	Write((byte*)this + 3440, value);
}
// Member Getter and Setter of HasLanded
// Declaration: bool HasLanded
bool ABP_BaseCharacter_C::M_GetHasLanded() const {
	return Read<bool>((byte*)this + 3441);
}
bool* ABP_BaseCharacter_C::M_PtrGetHasLanded() {
	return reinterpret_cast<bool*>((byte*)this + 3441);
}
void ABP_BaseCharacter_C::M_SetHasLanded(const bool& value) {
	Write((byte*)this + 3441, value);
}
// Member Getter and Setter of IsInDialogue
// Declaration: bool IsInDialogue
bool ABP_BaseCharacter_C::M_GetIsInDialogue() const {
	return Read<bool>((byte*)this + 3442);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 3442);
}
void ABP_BaseCharacter_C::M_SetIsInDialogue(const bool& value) {
	Write((byte*)this + 3442, value);
}
// Member Getter and Setter of BodyPartsIndexes
// Declaration: TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes
TMap<TEnumAsByte<E_BodyParts>, int32_t> ABP_BaseCharacter_C::M_GetBodyPartsIndexes() const {
	return Read<TMap<TEnumAsByte<E_BodyParts>, int32_t>>((byte*)this + 3448);
}
TMap<TEnumAsByte<E_BodyParts>, int32_t>* ABP_BaseCharacter_C::M_PtrGetBodyPartsIndexes() {
	return reinterpret_cast<TMap<TEnumAsByte<E_BodyParts>, int32_t>*>((byte*)this + 3448);
}
void ABP_BaseCharacter_C::M_SetBodyPartsIndexes(const TMap<TEnumAsByte<E_BodyParts>, int32_t>& value) {
	Write((byte*)this + 3448, value);
}
// Member Getter and Setter of MeshesRowName
// Declaration: struct FName MeshesRowName
struct FName ABP_BaseCharacter_C::M_GetMeshesRowName() const {
	return Read<struct FName>((byte*)this + 3528);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetMeshesRowName() {
	return reinterpret_cast<struct FName*>((byte*)this + 3528);
}
void ABP_BaseCharacter_C::M_SetMeshesRowName(const struct FName& value) {
	Write((byte*)this + 3528, value);
}
// Member Getter and Setter of PhysicsLocation
// Declaration: struct FVector PhysicsLocation
struct FVector ABP_BaseCharacter_C::M_GetPhysicsLocation() const {
	return Read<struct FVector>((byte*)this + 3536);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetPhysicsLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 3536);
}
void ABP_BaseCharacter_C::M_SetPhysicsLocation(const struct FVector& value) {
	Write((byte*)this + 3536, value);
}
// Member Getter and Setter of PhysicsVectorLength
// Declaration: float PhysicsVectorLength
float ABP_BaseCharacter_C::M_GetPhysicsVectorLength() const {
	return Read<float>((byte*)this + 3548);
}
float* ABP_BaseCharacter_C::M_PtrGetPhysicsVectorLength() {
	return reinterpret_cast<float*>((byte*)this + 3548);
}
void ABP_BaseCharacter_C::M_SetPhysicsVectorLength(const float& value) {
	Write((byte*)this + 3548, value);
}
// Member Getter and Setter of IsWorking
// Declaration: bool IsWorking
bool ABP_BaseCharacter_C::M_GetIsWorking() const {
	return Read<bool>((byte*)this + 3552);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsWorking() {
	return reinterpret_cast<bool*>((byte*)this + 3552);
}
void ABP_BaseCharacter_C::M_SetIsWorking(const bool& value) {
	Write((byte*)this + 3552, value);
}
// Member Getter and Setter of BagMode
// Declaration: TEnumAsByte<E_BagMode> BagMode
TEnumAsByte<E_BagMode> ABP_BaseCharacter_C::M_GetBagMode() const {
	return Read<TEnumAsByte<E_BagMode>>((byte*)this + 3553);
}
TEnumAsByte<E_BagMode>* ABP_BaseCharacter_C::M_PtrGetBagMode() {
	return reinterpret_cast<TEnumAsByte<E_BagMode>*>((byte*)this + 3553);
}
void ABP_BaseCharacter_C::M_SetBagMode(const TEnumAsByte<E_BagMode>& value) {
	Write((byte*)this + 3553, value);
}
// Member Getter and Setter of IsTakingBreak
// Declaration: bool IsTakingBreak
bool ABP_BaseCharacter_C::M_GetIsTakingBreak() const {
	return Read<bool>((byte*)this + 3554);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsTakingBreak() {
	return reinterpret_cast<bool*>((byte*)this + 3554);
}
void ABP_BaseCharacter_C::M_SetIsTakingBreak(const bool& value) {
	Write((byte*)this + 3554, value);
}
// Member Getter and Setter of OnInteractionFinished
// Declaration: TAssetPtr<class FOnInteractionFinished__DelegateSignature> OnInteractionFinished
TAssetPtr<class FOnInteractionFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnInteractionFinished() const {
	return Read<TAssetPtr<class FOnInteractionFinished__DelegateSignature>>((byte*)this + 3560);
}
TAssetPtr<class FOnInteractionFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnInteractionFinished() {
	return reinterpret_cast<TAssetPtr<class FOnInteractionFinished__DelegateSignature>*>((byte*)this + 3560);
}
void ABP_BaseCharacter_C::M_SetOnInteractionFinished(const TAssetPtr<class FOnInteractionFinished__DelegateSignature>& value) {
	Write((byte*)this + 3560, value);
}
// Member Getter and Setter of InteractionSlotIndex
// Declaration: int32_t InteractionSlotIndex
int32_t ABP_BaseCharacter_C::M_GetInteractionSlotIndex() const {
	return Read<int32_t>((byte*)this + 3576);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetInteractionSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 3576);
}
void ABP_BaseCharacter_C::M_SetInteractionSlotIndex(const int32_t& value) {
	Write((byte*)this + 3576, value);
}
// Member Getter and Setter of SpawnedMainHandAnimItem
// Declaration: bool SpawnedMainHandAnimItem
bool ABP_BaseCharacter_C::M_GetSpawnedMainHandAnimItem() const {
	return Read<bool>((byte*)this + 3580);
}
bool* ABP_BaseCharacter_C::M_PtrGetSpawnedMainHandAnimItem() {
	return reinterpret_cast<bool*>((byte*)this + 3580);
}
void ABP_BaseCharacter_C::M_SetSpawnedMainHandAnimItem(const bool& value) {
	Write((byte*)this + 3580, value);
}
// Member Getter and Setter of BuildingMode
// Declaration: TEnumAsByte<E_BuildingModifications> BuildingMode
TEnumAsByte<E_BuildingModifications> ABP_BaseCharacter_C::M_GetBuildingMode() const {
	return Read<TEnumAsByte<E_BuildingModifications>>((byte*)this + 3581);
}
TEnumAsByte<E_BuildingModifications>* ABP_BaseCharacter_C::M_PtrGetBuildingMode() {
	return reinterpret_cast<TEnumAsByte<E_BuildingModifications>*>((byte*)this + 3581);
}
void ABP_BaseCharacter_C::M_SetBuildingMode(const TEnumAsByte<E_BuildingModifications>& value) {
	Write((byte*)this + 3581, value);
}
// Member Getter and Setter of SitDownPosition
// Declaration: TEnumAsByte<E_SitDownPosition> SitDownPosition
TEnumAsByte<E_SitDownPosition> ABP_BaseCharacter_C::M_GetSitDownPosition() const {
	return Read<TEnumAsByte<E_SitDownPosition>>((byte*)this + 3582);
}
TEnumAsByte<E_SitDownPosition>* ABP_BaseCharacter_C::M_PtrGetSitDownPosition() {
	return reinterpret_cast<TEnumAsByte<E_SitDownPosition>*>((byte*)this + 3582);
}
void ABP_BaseCharacter_C::M_SetSitDownPosition(const TEnumAsByte<E_SitDownPosition>& value) {
	Write((byte*)this + 3582, value);
}
// Member Getter and Setter of OnSitStarted
// Declaration: TAssetPtr<class FOnSitStarted__DelegateSignature> OnSitStarted
TAssetPtr<class FOnSitStarted__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitStarted() const {
	return Read<TAssetPtr<class FOnSitStarted__DelegateSignature>>((byte*)this + 3584);
}
TAssetPtr<class FOnSitStarted__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitStarted() {
	return reinterpret_cast<TAssetPtr<class FOnSitStarted__DelegateSignature>*>((byte*)this + 3584);
}
void ABP_BaseCharacter_C::M_SetOnSitStarted(const TAssetPtr<class FOnSitStarted__DelegateSignature>& value) {
	Write((byte*)this + 3584, value);
}
// Member Getter and Setter of OnSitFinished
// Declaration: TAssetPtr<class FOnSitFinished__DelegateSignature> OnSitFinished
TAssetPtr<class FOnSitFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitFinished() const {
	return Read<TAssetPtr<class FOnSitFinished__DelegateSignature>>((byte*)this + 3600);
}
TAssetPtr<class FOnSitFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitFinished() {
	return reinterpret_cast<TAssetPtr<class FOnSitFinished__DelegateSignature>*>((byte*)this + 3600);
}
void ABP_BaseCharacter_C::M_SetOnSitFinished(const TAssetPtr<class FOnSitFinished__DelegateSignature>& value) {
	Write((byte*)this + 3600, value);
}
// Member Getter and Setter of OnSleepStarted
// Declaration: TAssetPtr<class FOnSleepStarted__DelegateSignature> OnSleepStarted
TAssetPtr<class FOnSleepStarted__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepStarted() const {
	return Read<TAssetPtr<class FOnSleepStarted__DelegateSignature>>((byte*)this + 3616);
}
TAssetPtr<class FOnSleepStarted__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepStarted() {
	return reinterpret_cast<TAssetPtr<class FOnSleepStarted__DelegateSignature>*>((byte*)this + 3616);
}
void ABP_BaseCharacter_C::M_SetOnSleepStarted(const TAssetPtr<class FOnSleepStarted__DelegateSignature>& value) {
	Write((byte*)this + 3616, value);
}
// Member Getter and Setter of OnSleepFinished
// Declaration: TAssetPtr<class FOnSleepFinished__DelegateSignature> OnSleepFinished
TAssetPtr<class FOnSleepFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepFinished() const {
	return Read<TAssetPtr<class FOnSleepFinished__DelegateSignature>>((byte*)this + 3632);
}
TAssetPtr<class FOnSleepFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepFinished() {
	return reinterpret_cast<TAssetPtr<class FOnSleepFinished__DelegateSignature>*>((byte*)this + 3632);
}
void ABP_BaseCharacter_C::M_SetOnSleepFinished(const TAssetPtr<class FOnSleepFinished__DelegateSignature>& value) {
	Write((byte*)this + 3632, value);
}
// Member Getter and Setter of isInWater
// Declaration: bool isInWater
bool ABP_BaseCharacter_C::M_GetisInWater() const {
	return Read<bool>((byte*)this + 3648);
}
bool* ABP_BaseCharacter_C::M_PtrGetisInWater() {
	return reinterpret_cast<bool*>((byte*)this + 3648);
}
void ABP_BaseCharacter_C::M_SetisInWater(const bool& value) {
	Write((byte*)this + 3648, value);
}
// Member Getter and Setter of inWaterIntensity
// Declaration: float inWaterIntensity
float ABP_BaseCharacter_C::M_GetinWaterIntensity() const {
	return Read<float>((byte*)this + 3652);
}
float* ABP_BaseCharacter_C::M_PtrGetinWaterIntensity() {
	return reinterpret_cast<float*>((byte*)this + 3652);
}
void ABP_BaseCharacter_C::M_SetinWaterIntensity(const float& value) {
	Write((byte*)this + 3652, value);
}
// Member Getter and Setter of OnStartCrafting
// Declaration: TAssetPtr<class FOnStartCrafting__DelegateSignature> OnStartCrafting
TAssetPtr<class FOnStartCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStartCrafting() const {
	return Read<TAssetPtr<class FOnStartCrafting__DelegateSignature>>((byte*)this + 3656);
}
TAssetPtr<class FOnStartCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStartCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnStartCrafting__DelegateSignature>*>((byte*)this + 3656);
}
void ABP_BaseCharacter_C::M_SetOnStartCrafting(const TAssetPtr<class FOnStartCrafting__DelegateSignature>& value) {
	Write((byte*)this + 3656, value);
}
// Member Getter and Setter of OnWaitForCrafting
// Declaration: TAssetPtr<class FOnWaitForCrafting__DelegateSignature> OnWaitForCrafting
TAssetPtr<class FOnWaitForCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnWaitForCrafting() const {
	return Read<TAssetPtr<class FOnWaitForCrafting__DelegateSignature>>((byte*)this + 3672);
}
TAssetPtr<class FOnWaitForCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnWaitForCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnWaitForCrafting__DelegateSignature>*>((byte*)this + 3672);
}
void ABP_BaseCharacter_C::M_SetOnWaitForCrafting(const TAssetPtr<class FOnWaitForCrafting__DelegateSignature>& value) {
	Write((byte*)this + 3672, value);
}
// Member Getter and Setter of OnEndCrafting
// Declaration: TAssetPtr<class FOnEndCrafting__DelegateSignature> OnEndCrafting
TAssetPtr<class FOnEndCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnEndCrafting() const {
	return Read<TAssetPtr<class FOnEndCrafting__DelegateSignature>>((byte*)this + 3688);
}
TAssetPtr<class FOnEndCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnEndCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnEndCrafting__DelegateSignature>*>((byte*)this + 3688);
}
void ABP_BaseCharacter_C::M_SetOnEndCrafting(const TAssetPtr<class FOnEndCrafting__DelegateSignature>& value) {
	Write((byte*)this + 3688, value);
}
// Member Getter and Setter of OnStoppingCrafting
// Declaration: TAssetPtr<class FOnStoppingCrafting__DelegateSignature> OnStoppingCrafting
TAssetPtr<class FOnStoppingCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStoppingCrafting() const {
	return Read<TAssetPtr<class FOnStoppingCrafting__DelegateSignature>>((byte*)this + 3704);
}
TAssetPtr<class FOnStoppingCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStoppingCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnStoppingCrafting__DelegateSignature>*>((byte*)this + 3704);
}
void ABP_BaseCharacter_C::M_SetOnStoppingCrafting(const TAssetPtr<class FOnStoppingCrafting__DelegateSignature>& value) {
	Write((byte*)this + 3704, value);
}
// Member Getter and Setter of IsWaitingForCrafting
// Declaration: bool IsWaitingForCrafting
bool ABP_BaseCharacter_C::M_GetIsWaitingForCrafting() const {
	return Read<bool>((byte*)this + 3720);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsWaitingForCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3720);
}
void ABP_BaseCharacter_C::M_SetIsWaitingForCrafting(const bool& value) {
	Write((byte*)this + 3720, value);
}
// Member Getter and Setter of InteractedActor
// Declaration: class AActor* InteractedActor
class AActor* ABP_BaseCharacter_C::M_GetInteractedActor() const {
	return Read<class AActor*>((byte*)this + 3728);
}
class AActor** ABP_BaseCharacter_C::M_PtrGetInteractedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 3728);
}
void ABP_BaseCharacter_C::M_SetInteractedActor(const class AActor*& value) {
	Write((byte*)this + 3728, value);
}
// Member Getter and Setter of HairColor
// Declaration: struct FLinearColor HairColor
struct FLinearColor ABP_BaseCharacter_C::M_GetHairColor() const {
	return Read<struct FLinearColor>((byte*)this + 3736);
}
struct FLinearColor* ABP_BaseCharacter_C::M_PtrGetHairColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 3736);
}
void ABP_BaseCharacter_C::M_SetHairColor(const struct FLinearColor& value) {
	Write((byte*)this + 3736, value);
}
// Member Getter and Setter of IKFPSLimit
// Declaration: float IKFPSLimit
float ABP_BaseCharacter_C::M_GetIKFPSLimit() const {
	return Read<float>((byte*)this + 3752);
}
float* ABP_BaseCharacter_C::M_PtrGetIKFPSLimit() {
	return reinterpret_cast<float*>((byte*)this + 3752);
}
void ABP_BaseCharacter_C::M_SetIKFPSLimit(const float& value) {
	Write((byte*)this + 3752, value);
}
// Member Getter and Setter of IKFPSRestore
// Declaration: float IKFPSRestore
float ABP_BaseCharacter_C::M_GetIKFPSRestore() const {
	return Read<float>((byte*)this + 3756);
}
float* ABP_BaseCharacter_C::M_PtrGetIKFPSRestore() {
	return reinterpret_cast<float*>((byte*)this + 3756);
}
void ABP_BaseCharacter_C::M_SetIKFPSRestore(const float& value) {
	Write((byte*)this + 3756, value);
}
// Member Getter and Setter of OnCharacterDeactivated
// Declaration: TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> OnCharacterDeactivated
TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCharacterDeactivated() const {
	return Read<TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>>((byte*)this + 3760);
}
TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCharacterDeactivated() {
	return reinterpret_cast<TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>*>((byte*)this + 3760);
}
void ABP_BaseCharacter_C::M_SetOnCharacterDeactivated(const TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>& value) {
	Write((byte*)this + 3760, value);
}
// Member Getter and Setter of OnCharacterActivated
// Declaration: TAssetPtr<class FOnCharacterActivated__DelegateSignature> OnCharacterActivated
TAssetPtr<class FOnCharacterActivated__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCharacterActivated() const {
	return Read<TAssetPtr<class FOnCharacterActivated__DelegateSignature>>((byte*)this + 3776);
}
TAssetPtr<class FOnCharacterActivated__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCharacterActivated() {
	return reinterpret_cast<TAssetPtr<class FOnCharacterActivated__DelegateSignature>*>((byte*)this + 3776);
}
void ABP_BaseCharacter_C::M_SetOnCharacterActivated(const TAssetPtr<class FOnCharacterActivated__DelegateSignature>& value) {
	Write((byte*)this + 3776, value);
}
// Member Getter and Setter of TargetLerpFOV
// Declaration: float TargetLerpFOV
float ABP_BaseCharacter_C::M_GetTargetLerpFOV() const {
	return Read<float>((byte*)this + 3792);
}
float* ABP_BaseCharacter_C::M_PtrGetTargetLerpFOV() {
	return reinterpret_cast<float*>((byte*)this + 3792);
}
void ABP_BaseCharacter_C::M_SetTargetLerpFOV(const float& value) {
	Write((byte*)this + 3792, value);
}
// Member Getter and Setter of StartingLerpFOV
// Declaration: float StartingLerpFOV
float ABP_BaseCharacter_C::M_GetStartingLerpFOV() const {
	return Read<float>((byte*)this + 3796);
}
float* ABP_BaseCharacter_C::M_PtrGetStartingLerpFOV() {
	return reinterpret_cast<float*>((byte*)this + 3796);
}
void ABP_BaseCharacter_C::M_SetStartingLerpFOV(const float& value) {
	Write((byte*)this + 3796, value);
}
// Member Getter and Setter of HeadID
// Declaration: int32_t HeadID
int32_t ABP_BaseCharacter_C::M_GetHeadID() const {
	return Read<int32_t>((byte*)this + 3800);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetHeadID() {
	return reinterpret_cast<int32_t*>((byte*)this + 3800);
}
void ABP_BaseCharacter_C::M_SetHeadID(const int32_t& value) {
	Write((byte*)this + 3800, value);
}
// Member Getter and Setter of HairID
// Declaration: int32_t HairID
int32_t ABP_BaseCharacter_C::M_GetHairID() const {
	return Read<int32_t>((byte*)this + 3804);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetHairID() {
	return reinterpret_cast<int32_t*>((byte*)this + 3804);
}
void ABP_BaseCharacter_C::M_SetHairID(const int32_t& value) {
	Write((byte*)this + 3804, value);
}
// Member Getter and Setter of PresetsIDs
// Declaration: TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs
TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> ABP_BaseCharacter_C::M_GetPresetsIDs() const {
	return Read<TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>>((byte*)this + 3808);
}
TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>* ABP_BaseCharacter_C::M_PtrGetPresetsIDs() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>*>((byte*)this + 3808);
}
void ABP_BaseCharacter_C::M_SetPresetsIDs(const TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>& value) {
	Write((byte*)this + 3808, value);
}
// Member Getter and Setter of IsCraftingClosed
// Declaration: bool IsCraftingClosed
bool ABP_BaseCharacter_C::M_GetIsCraftingClosed() const {
	return Read<bool>((byte*)this + 3888);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsCraftingClosed() {
	return reinterpret_cast<bool*>((byte*)this + 3888);
}
void ABP_BaseCharacter_C::M_SetIsCraftingClosed(const bool& value) {
	Write((byte*)this + 3888, value);
}
// Member Getter and Setter of PendingKill
// Declaration: bool PendingKill
bool ABP_BaseCharacter_C::M_GetPendingKill() const {
	return Read<bool>((byte*)this + 3889);
}
bool* ABP_BaseCharacter_C::M_PtrGetPendingKill() {
	return reinterpret_cast<bool*>((byte*)this + 3889);
}
void ABP_BaseCharacter_C::M_SetPendingKill(const bool& value) {
	Write((byte*)this + 3889, value);
}
// Member Getter and Setter of CaughtPrey
// Declaration: bool CaughtPrey
bool ABP_BaseCharacter_C::M_GetCaughtPrey() const {
	return Read<bool>((byte*)this + 3890);
}
bool* ABP_BaseCharacter_C::M_PtrGetCaughtPrey() {
	return reinterpret_cast<bool*>((byte*)this + 3890);
}
void ABP_BaseCharacter_C::M_SetCaughtPrey(const bool& value) {
	Write((byte*)this + 3890, value);
}
// Member Getter and Setter of Blinking_
// Declaration: bool Blinking_
bool ABP_BaseCharacter_C::M_GetBlinking_() const {
	return Read<bool>((byte*)this + 3891);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlinking_() {
	return reinterpret_cast<bool*>((byte*)this + 3891);
}
void ABP_BaseCharacter_C::M_SetBlinking_(const bool& value) {
	Write((byte*)this + 3891, value);
}
// Member Getter and Setter of EyesClosed
// Declaration: bool EyesClosed
bool ABP_BaseCharacter_C::M_GetEyesClosed() const {
	return Read<bool>((byte*)this + 3892);
}
bool* ABP_BaseCharacter_C::M_PtrGetEyesClosed() {
	return reinterpret_cast<bool*>((byte*)this + 3892);
}
void ABP_BaseCharacter_C::M_SetEyesClosed(const bool& value) {
	Write((byte*)this + 3892, value);
}
// Member Getter and Setter of EyesMovement
// Declaration: bool EyesMovement
bool ABP_BaseCharacter_C::M_GetEyesMovement() const {
	return Read<bool>((byte*)this + 3893);
}
bool* ABP_BaseCharacter_C::M_PtrGetEyesMovement() {
	return reinterpret_cast<bool*>((byte*)this + 3893);
}
void ABP_BaseCharacter_C::M_SetEyesMovement(const bool& value) {
	Write((byte*)this + 3893, value);
}
// Member Getter and Setter of HeadRotationAlpha
// Declaration: float HeadRotationAlpha
float ABP_BaseCharacter_C::M_GetHeadRotationAlpha() const {
	return Read<float>((byte*)this + 3896);
}
float* ABP_BaseCharacter_C::M_PtrGetHeadRotationAlpha() {
	return reinterpret_cast<float*>((byte*)this + 3896);
}
void ABP_BaseCharacter_C::M_SetHeadRotationAlpha(const float& value) {
	Write((byte*)this + 3896, value);
}
// Member Getter and Setter of BodyMovementAlpha
// Declaration: float BodyMovementAlpha
float ABP_BaseCharacter_C::M_GetBodyMovementAlpha() const {
	return Read<float>((byte*)this + 3900);
}
float* ABP_BaseCharacter_C::M_PtrGetBodyMovementAlpha() {
	return reinterpret_cast<float*>((byte*)this + 3900);
}
void ABP_BaseCharacter_C::M_SetBodyMovementAlpha(const float& value) {
	Write((byte*)this + 3900, value);
}
// Member Getter and Setter of MountMovementType
// Declaration: float MountMovementType
float ABP_BaseCharacter_C::M_GetMountMovementType() const {
	return Read<float>((byte*)this + 3904);
}
float* ABP_BaseCharacter_C::M_PtrGetMountMovementType() {
	return reinterpret_cast<float*>((byte*)this + 3904);
}
void ABP_BaseCharacter_C::M_SetMountMovementType(const float& value) {
	Write((byte*)this + 3904, value);
}
// Member Getter and Setter of MountTurnDirection
// Declaration: float MountTurnDirection
float ABP_BaseCharacter_C::M_GetMountTurnDirection() const {
	return Read<float>((byte*)this + 3908);
}
float* ABP_BaseCharacter_C::M_PtrGetMountTurnDirection() {
	return reinterpret_cast<float*>((byte*)this + 3908);
}
void ABP_BaseCharacter_C::M_SetMountTurnDirection(const float& value) {
	Write((byte*)this + 3908, value);
}
// Member Getter and Setter of IgnoreMountingAnimation
// Declaration: bool IgnoreMountingAnimation
bool ABP_BaseCharacter_C::M_GetIgnoreMountingAnimation() const {
	return Read<bool>((byte*)this + 3912);
}
bool* ABP_BaseCharacter_C::M_PtrGetIgnoreMountingAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 3912);
}
void ABP_BaseCharacter_C::M_SetIgnoreMountingAnimation(const bool& value) {
	Write((byte*)this + 3912, value);
}
// Member Getter and Setter of IgnoreDismountingAnimation
// Declaration: bool IgnoreDismountingAnimation
bool ABP_BaseCharacter_C::M_GetIgnoreDismountingAnimation() const {
	return Read<bool>((byte*)this + 3913);
}
bool* ABP_BaseCharacter_C::M_PtrGetIgnoreDismountingAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 3913);
}
void ABP_BaseCharacter_C::M_SetIgnoreDismountingAnimation(const bool& value) {
	Write((byte*)this + 3913, value);
}
// Member Getter and Setter of CurrentBasePresetID
// Declaration: struct FName CurrentBasePresetID
struct FName ABP_BaseCharacter_C::M_GetCurrentBasePresetID() const {
	return Read<struct FName>((byte*)this + 3916);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetCurrentBasePresetID() {
	return reinterpret_cast<struct FName*>((byte*)this + 3916);
}
void ABP_BaseCharacter_C::M_SetCurrentBasePresetID(const struct FName& value) {
	Write((byte*)this + 3916, value);
}
// Member Getter and Setter of CurrentProfessionPresetID
// Declaration: struct FName CurrentProfessionPresetID
struct FName ABP_BaseCharacter_C::M_GetCurrentProfessionPresetID() const {
	return Read<struct FName>((byte*)this + 3924);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetCurrentProfessionPresetID() {
	return reinterpret_cast<struct FName*>((byte*)this + 3924);
}
void ABP_BaseCharacter_C::M_SetCurrentProfessionPresetID(const struct FName& value) {
	Write((byte*)this + 3924, value);
}
// Member Getter and Setter of DrunkForwardAxis
// Declaration: float DrunkForwardAxis
float ABP_BaseCharacter_C::M_GetDrunkForwardAxis() const {
	return Read<float>((byte*)this + 3932);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardAxis() {
	return reinterpret_cast<float*>((byte*)this + 3932);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardAxis(const float& value) {
	Write((byte*)this + 3932, value);
}
// Member Getter and Setter of DrunkRightAxis
// Declaration: float DrunkRightAxis
float ABP_BaseCharacter_C::M_GetDrunkRightAxis() const {
	return Read<float>((byte*)this + 3936);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightAxis() {
	return reinterpret_cast<float*>((byte*)this + 3936);
}
void ABP_BaseCharacter_C::M_SetDrunkRightAxis(const float& value) {
	Write((byte*)this + 3936, value);
}
// Member Getter and Setter of DrunkForwardTarget
// Declaration: float DrunkForwardTarget
float ABP_BaseCharacter_C::M_GetDrunkForwardTarget() const {
	return Read<float>((byte*)this + 3940);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardTarget() {
	return reinterpret_cast<float*>((byte*)this + 3940);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardTarget(const float& value) {
	Write((byte*)this + 3940, value);
}
// Member Getter and Setter of DrunkRightTarget
// Declaration: float DrunkRightTarget
float ABP_BaseCharacter_C::M_GetDrunkRightTarget() const {
	return Read<float>((byte*)this + 3944);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightTarget() {
	return reinterpret_cast<float*>((byte*)this + 3944);
}
void ABP_BaseCharacter_C::M_SetDrunkRightTarget(const float& value) {
	Write((byte*)this + 3944, value);
}
// Member Getter and Setter of StartedCrafting
// Declaration: bool StartedCrafting
bool ABP_BaseCharacter_C::M_GetStartedCrafting() const {
	return Read<bool>((byte*)this + 3948);
}
bool* ABP_BaseCharacter_C::M_PtrGetStartedCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3948);
}
void ABP_BaseCharacter_C::M_SetStartedCrafting(const bool& value) {
	Write((byte*)this + 3948, value);
}
// Member Getter and Setter of DrunkForwardDelayDuration
// Declaration: float DrunkForwardDelayDuration
float ABP_BaseCharacter_C::M_GetDrunkForwardDelayDuration() const {
	return Read<float>((byte*)this + 3952);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardDelayDuration() {
	return reinterpret_cast<float*>((byte*)this + 3952);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardDelayDuration(const float& value) {
	Write((byte*)this + 3952, value);
}
// Member Getter and Setter of DrunkRightDelayDuration
// Declaration: float DrunkRightDelayDuration
float ABP_BaseCharacter_C::M_GetDrunkRightDelayDuration() const {
	return Read<float>((byte*)this + 3956);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightDelayDuration() {
	return reinterpret_cast<float*>((byte*)this + 3956);
}
void ABP_BaseCharacter_C::M_SetDrunkRightDelayDuration(const float& value) {
	Write((byte*)this + 3956, value);
}
// Member Getter and Setter of MountAnimalType
// Declaration: TEnumAsByte<E_AnimalType> MountAnimalType
TEnumAsByte<E_AnimalType> ABP_BaseCharacter_C::M_GetMountAnimalType() const {
	return Read<TEnumAsByte<E_AnimalType>>((byte*)this + 3960);
}
TEnumAsByte<E_AnimalType>* ABP_BaseCharacter_C::M_PtrGetMountAnimalType() {
	return reinterpret_cast<TEnumAsByte<E_AnimalType>*>((byte*)this + 3960);
}
void ABP_BaseCharacter_C::M_SetMountAnimalType(const TEnumAsByte<E_AnimalType>& value) {
	Write((byte*)this + 3960, value);
}
// Member Getter and Setter of OnCraftingAnimEnd
// Declaration: TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> OnCraftingAnimEnd
TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCraftingAnimEnd() const {
	return Read<TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>>((byte*)this + 3968);
}
TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCraftingAnimEnd() {
	return reinterpret_cast<TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>*>((byte*)this + 3968);
}
void ABP_BaseCharacter_C::M_SetOnCraftingAnimEnd(const TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>& value) {
	Write((byte*)this + 3968, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector ABP_BaseCharacter_C::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 3984);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 3984);
}
void ABP_BaseCharacter_C::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 3984, value);
}
// Member Getter and Setter of Blocking
// Declaration: bool Blocking
bool ABP_BaseCharacter_C::M_GetBlocking() const {
	return Read<bool>((byte*)this + 3996);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlocking() {
	return reinterpret_cast<bool*>((byte*)this + 3996);
}
void ABP_BaseCharacter_C::M_SetBlocking(const bool& value) {
	Write((byte*)this + 3996, value);
}
// Member Getter and Setter of InteractableHit
// Declaration: struct FHitResult InteractableHit
struct FHitResult ABP_BaseCharacter_C::M_GetInteractableHit() const {
	return Read<struct FHitResult>((byte*)this + 4000);
}
struct FHitResult* ABP_BaseCharacter_C::M_PtrGetInteractableHit() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 4000);
}
void ABP_BaseCharacter_C::M_SetInteractableHit(const struct FHitResult& value) {
	Write((byte*)this + 4000, value);
}
// Member Getter and Setter of MountRotation
// Declaration: struct FRotator MountRotation
struct FRotator ABP_BaseCharacter_C::M_GetMountRotation() const {
	return Read<struct FRotator>((byte*)this + 4136);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetMountRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 4136);
}
void ABP_BaseCharacter_C::M_SetMountRotation(const struct FRotator& value) {
	Write((byte*)this + 4136, value);
}
// Member Getter and Setter of ImpaledItems
// Declaration: TArray<class AActor*> ImpaledItems
TArray<class AActor*> ABP_BaseCharacter_C::M_GetImpaledItems() const {
	return Read<TArray<class AActor*>>((byte*)this + 4152);
}
TArray<class AActor*>* ABP_BaseCharacter_C::M_PtrGetImpaledItems() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 4152);
}
void ABP_BaseCharacter_C::M_SetImpaledItems(const TArray<class AActor*>& value) {
	Write((byte*)this + 4152, value);
}
// Member Getter and Setter of SittingType
// Declaration: TEnumAsByte<E_SittingType> SittingType
TEnumAsByte<E_SittingType> ABP_BaseCharacter_C::M_GetSittingType() const {
	return Read<TEnumAsByte<E_SittingType>>((byte*)this + 4168);
}
TEnumAsByte<E_SittingType>* ABP_BaseCharacter_C::M_PtrGetSittingType() {
	return reinterpret_cast<TEnumAsByte<E_SittingType>*>((byte*)this + 4168);
}
void ABP_BaseCharacter_C::M_SetSittingType(const TEnumAsByte<E_SittingType>& value) {
	Write((byte*)this + 4168, value);
}
// Member Getter and Setter of HadToolBeforeDialogue
// Declaration: bool HadToolBeforeDialogue
bool ABP_BaseCharacter_C::M_GetHadToolBeforeDialogue() const {
	return Read<bool>((byte*)this + 4169);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadToolBeforeDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 4169);
}
void ABP_BaseCharacter_C::M_SetHadToolBeforeDialogue(const bool& value) {
	Write((byte*)this + 4169, value);
}
// Member Getter and Setter of Underwater
// Declaration: bool Underwater
bool ABP_BaseCharacter_C::M_GetUnderwater() const {
	return Read<bool>((byte*)this + 4170);
}
bool* ABP_BaseCharacter_C::M_PtrGetUnderwater() {
	return reinterpret_cast<bool*>((byte*)this + 4170);
}
void ABP_BaseCharacter_C::M_SetUnderwater(const bool& value) {
	Write((byte*)this + 4170, value);
}
// Member Getter and Setter of IsInTPPCombatState
// Declaration: bool IsInTPPCombatState
bool ABP_BaseCharacter_C::M_GetIsInTPPCombatState() const {
	return Read<bool>((byte*)this + 4171);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInTPPCombatState() {
	return reinterpret_cast<bool*>((byte*)this + 4171);
}
void ABP_BaseCharacter_C::M_SetIsInTPPCombatState(const bool& value) {
	Write((byte*)this + 4171, value);
}
// Member Getter and Setter of EnemyDamageMultiplier
// Declaration: float EnemyDamageMultiplier
float ABP_BaseCharacter_C::M_GetEnemyDamageMultiplier() const {
	return Read<float>((byte*)this + 4172);
}
float* ABP_BaseCharacter_C::M_PtrGetEnemyDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4172);
}
void ABP_BaseCharacter_C::M_SetEnemyDamageMultiplier(const float& value) {
	Write((byte*)this + 4172, value);
}
// Member Getter and Setter of OnStartGettingUp
// Declaration: TAssetPtr<class FOnStartGettingUp__DelegateSignature> OnStartGettingUp
TAssetPtr<class FOnStartGettingUp__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStartGettingUp() const {
	return Read<TAssetPtr<class FOnStartGettingUp__DelegateSignature>>((byte*)this + 4176);
}
TAssetPtr<class FOnStartGettingUp__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStartGettingUp() {
	return reinterpret_cast<TAssetPtr<class FOnStartGettingUp__DelegateSignature>*>((byte*)this + 4176);
}
void ABP_BaseCharacter_C::M_SetOnStartGettingUp(const TAssetPtr<class FOnStartGettingUp__DelegateSignature>& value) {
	Write((byte*)this + 4176, value);
}
// Member Getter and Setter of OnViewmodeChanged
// Declaration: TAssetPtr<class FOnViewmodeChanged__DelegateSignature> OnViewmodeChanged
TAssetPtr<class FOnViewmodeChanged__DelegateSignature> ABP_BaseCharacter_C::M_GetOnViewmodeChanged() const {
	return Read<TAssetPtr<class FOnViewmodeChanged__DelegateSignature>>((byte*)this + 4192);
}
TAssetPtr<class FOnViewmodeChanged__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnViewmodeChanged() {
	return reinterpret_cast<TAssetPtr<class FOnViewmodeChanged__DelegateSignature>*>((byte*)this + 4192);
}
void ABP_BaseCharacter_C::M_SetOnViewmodeChanged(const TAssetPtr<class FOnViewmodeChanged__DelegateSignature>& value) {
	Write((byte*)this + 4192, value);
}
// Member Getter and Setter of WantsToDespawn
// Declaration: bool WantsToDespawn
bool ABP_BaseCharacter_C::M_GetWantsToDespawn() const {
	return Read<bool>((byte*)this + 4208);
}
bool* ABP_BaseCharacter_C::M_PtrGetWantsToDespawn() {
	return reinterpret_cast<bool*>((byte*)this + 4208);
}
void ABP_BaseCharacter_C::M_SetWantsToDespawn(const bool& value) {
	Write((byte*)this + 4208, value);
}
// Member Getter and Setter of Velocity_Length
// Declaration: float Velocity_Length
float ABP_BaseCharacter_C::M_GetVelocity_Length() const {
	return Read<float>((byte*)this + 4212);
}
float* ABP_BaseCharacter_C::M_PtrGetVelocity_Length() {
	return reinterpret_cast<float*>((byte*)this + 4212);
}
void ABP_BaseCharacter_C::M_SetVelocity_Length(const float& value) {
	Write((byte*)this + 4212, value);
}
// Member Getter and Setter of WorkPlayRate
// Declaration: float WorkPlayRate
float ABP_BaseCharacter_C::M_GetWorkPlayRate() const {
	return Read<float>((byte*)this + 4216);
}
float* ABP_BaseCharacter_C::M_PtrGetWorkPlayRate() {
	return reinterpret_cast<float*>((byte*)this + 4216);
}
void ABP_BaseCharacter_C::M_SetWorkPlayRate(const float& value) {
	Write((byte*)this + 4216, value);
}
// Member Getter and Setter of HatsValue
// Declaration: float HatsValue
float ABP_BaseCharacter_C::M_GetHatsValue() const {
	return Read<float>((byte*)this + 4220);
}
float* ABP_BaseCharacter_C::M_PtrGetHatsValue() {
	return reinterpret_cast<float*>((byte*)this + 4220);
}
void ABP_BaseCharacter_C::M_SetHatsValue(const float& value) {
	Write((byte*)this + 4220, value);
}
// Member Getter and Setter of CachedPreset
// Declaration: struct FST_NPCsPresets CachedPreset
struct FST_NPCsPresets ABP_BaseCharacter_C::M_GetCachedPreset() const {
	return Read<struct FST_NPCsPresets>((byte*)this + 4224);
}
struct FST_NPCsPresets* ABP_BaseCharacter_C::M_PtrGetCachedPreset() {
	return reinterpret_cast<struct FST_NPCsPresets*>((byte*)this + 4224);
}
void ABP_BaseCharacter_C::M_SetCachedPreset(const struct FST_NPCsPresets& value) {
	Write((byte*)this + 4224, value);
}
// Member Getter and Setter of MinRandomSpeedMultiplier
// Declaration: float MinRandomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetMinRandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 5648);
}
float* ABP_BaseCharacter_C::M_PtrGetMinRandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5648);
}
void ABP_BaseCharacter_C::M_SetMinRandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 5648, value);
}
// Member Getter and Setter of MaxRandomSpeedMultiplier
// Declaration: float MaxRandomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetMaxRandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 5652);
}
float* ABP_BaseCharacter_C::M_PtrGetMaxRandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5652);
}
void ABP_BaseCharacter_C::M_SetMaxRandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 5652, value);
}
// Member Getter and Setter of randomSpeedMultiplier
// Declaration: float randomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetrandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 5656);
}
float* ABP_BaseCharacter_C::M_PtrGetrandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5656);
}
void ABP_BaseCharacter_C::M_SetrandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 5656, value);
}
// Member Getter and Setter of IsRotationManaged
// Declaration: bool IsRotationManaged
bool ABP_BaseCharacter_C::M_GetIsRotationManaged() const {
	return Read<bool>((byte*)this + 5660);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRotationManaged() {
	return reinterpret_cast<bool*>((byte*)this + 5660);
}
void ABP_BaseCharacter_C::M_SetIsRotationManaged(const bool& value) {
	Write((byte*)this + 5660, value);
}
// Member Getter and Setter of FallDamageMultiplier
// Declaration: float FallDamageMultiplier
float ABP_BaseCharacter_C::M_GetFallDamageMultiplier() const {
	return Read<float>((byte*)this + 5664);
}
float* ABP_BaseCharacter_C::M_PtrGetFallDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5664);
}
void ABP_BaseCharacter_C::M_SetFallDamageMultiplier(const float& value) {
	Write((byte*)this + 5664, value);
}
// Member Getter and Setter of slopeSpeedMultiplier
// Declaration: float slopeSpeedMultiplier
float ABP_BaseCharacter_C::M_GetslopeSpeedMultiplier() const {
	return Read<float>((byte*)this + 5668);
}
float* ABP_BaseCharacter_C::M_PtrGetslopeSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5668);
}
void ABP_BaseCharacter_C::M_SetslopeSpeedMultiplier(const float& value) {
	Write((byte*)this + 5668, value);
}
// Member Getter and Setter of TicksDelayToCalculateEssentialVariables
// Declaration: int32_t TicksDelayToCalculateEssentialVariables
int32_t ABP_BaseCharacter_C::M_GetTicksDelayToCalculateEssentialVariables() const {
	return Read<int32_t>((byte*)this + 5672);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetTicksDelayToCalculateEssentialVariables() {
	return reinterpret_cast<int32_t*>((byte*)this + 5672);
}
void ABP_BaseCharacter_C::M_SetTicksDelayToCalculateEssentialVariables(const int32_t& value) {
	Write((byte*)this + 5672, value);
}
// Member Getter and Setter of TicksLeftToCalculateEssentialsVariables
// Declaration: int32_t TicksLeftToCalculateEssentialsVariables
int32_t ABP_BaseCharacter_C::M_GetTicksLeftToCalculateEssentialsVariables() const {
	return Read<int32_t>((byte*)this + 5676);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetTicksLeftToCalculateEssentialsVariables() {
	return reinterpret_cast<int32_t*>((byte*)this + 5676);
}
void ABP_BaseCharacter_C::M_SetTicksLeftToCalculateEssentialsVariables(const int32_t& value) {
	Write((byte*)this + 5676, value);
}
// Member Getter and Setter of FallStartTime
// Declaration: float FallStartTime
float ABP_BaseCharacter_C::M_GetFallStartTime() const {
	return Read<float>((byte*)this + 5680);
}
float* ABP_BaseCharacter_C::M_PtrGetFallStartTime() {
	return reinterpret_cast<float*>((byte*)this + 5680);
}
void ABP_BaseCharacter_C::M_SetFallStartTime(const float& value) {
	Write((byte*)this + 5680, value);
}
// Member Getter and Setter of IsRagdollActivationLocked
// Declaration: bool IsRagdollActivationLocked
bool ABP_BaseCharacter_C::M_GetIsRagdollActivationLocked() const {
	return Read<bool>((byte*)this + 5684);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollActivationLocked() {
	return reinterpret_cast<bool*>((byte*)this + 5684);
}
void ABP_BaseCharacter_C::M_SetIsRagdollActivationLocked(const bool& value) {
	Write((byte*)this + 5684, value);
}
// Member Getter and Setter of InitialRagdollVelocity
// Declaration: struct FVector InitialRagdollVelocity
struct FVector ABP_BaseCharacter_C::M_GetInitialRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 5688);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetInitialRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5688);
}
void ABP_BaseCharacter_C::M_SetInitialRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 5688, value);
}
// Member Getter and Setter of ShouldUpdateRateOptimizationsBeEnabled
// Declaration: bool ShouldUpdateRateOptimizationsBeEnabled
bool ABP_BaseCharacter_C::M_GetShouldUpdateRateOptimizationsBeEnabled() const {
	return Read<bool>((byte*)this + 5700);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldUpdateRateOptimizationsBeEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5700);
}
void ABP_BaseCharacter_C::M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value) {
	Write((byte*)this + 5700, value);
}
// Member Getter and Setter of CurrentLookAtTargetLocation
// Declaration: struct FVector CurrentLookAtTargetLocation
struct FVector ABP_BaseCharacter_C::M_GetCurrentLookAtTargetLocation() const {
	return Read<struct FVector>((byte*)this + 5704);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetCurrentLookAtTargetLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5704);
}
void ABP_BaseCharacter_C::M_SetCurrentLookAtTargetLocation(const struct FVector& value) {
	Write((byte*)this + 5704, value);
}
// Member Getter and Setter of CharacterEyesLocation
// Declaration: struct FVector CharacterEyesLocation
struct FVector ABP_BaseCharacter_C::M_GetCharacterEyesLocation() const {
	return Read<struct FVector>((byte*)this + 5716);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetCharacterEyesLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5716);
}
void ABP_BaseCharacter_C::M_SetCharacterEyesLocation(const struct FVector& value) {
	Write((byte*)this + 5716, value);
}
// Member Getter and Setter of IsPickingObject
// Declaration: bool IsPickingObject
bool ABP_BaseCharacter_C::M_GetIsPickingObject() const {
	return Read<bool>((byte*)this + 5728);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsPickingObject() {
	return reinterpret_cast<bool*>((byte*)this + 5728);
}
void ABP_BaseCharacter_C::M_SetIsPickingObject(const bool& value) {
	Write((byte*)this + 5728, value);
}
// Member Getter and Setter of CanPush
// Declaration: bool CanPush
bool ABP_BaseCharacter_C::M_GetCanPush() const {
	return Read<bool>((byte*)this + 5729);
}
bool* ABP_BaseCharacter_C::M_PtrGetCanPush() {
	return reinterpret_cast<bool*>((byte*)this + 5729);
}
void ABP_BaseCharacter_C::M_SetCanPush(const bool& value) {
	Write((byte*)this + 5729, value);
}
// Member Getter and Setter of HairDamping
// Declaration: float HairDamping
float ABP_BaseCharacter_C::M_GetHairDamping() const {
	return Read<float>((byte*)this + 5732);
}
float* ABP_BaseCharacter_C::M_PtrGetHairDamping() {
	return reinterpret_cast<float*>((byte*)this + 5732);
}
void ABP_BaseCharacter_C::M_SetHairDamping(const float& value) {
	Write((byte*)this + 5732, value);
}
// Member Getter and Setter of HairSpring
// Declaration: float HairSpring
float ABP_BaseCharacter_C::M_GetHairSpring() const {
	return Read<float>((byte*)this + 5736);
}
float* ABP_BaseCharacter_C::M_PtrGetHairSpring() {
	return reinterpret_cast<float*>((byte*)this + 5736);
}
void ABP_BaseCharacter_C::M_SetHairSpring(const float& value) {
	Write((byte*)this + 5736, value);
}
// Member Getter and Setter of IsHairMovementEnabled
// Declaration: bool IsHairMovementEnabled
bool ABP_BaseCharacter_C::M_GetIsHairMovementEnabled() const {
	return Read<bool>((byte*)this + 5740);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsHairMovementEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5740);
}
void ABP_BaseCharacter_C::M_SetIsHairMovementEnabled(const bool& value) {
	Write((byte*)this + 5740, value);
}
// Member Getter and Setter of PushSpeedMultiplier
// Declaration: float PushSpeedMultiplier
float ABP_BaseCharacter_C::M_GetPushSpeedMultiplier() const {
	return Read<float>((byte*)this + 5744);
}
float* ABP_BaseCharacter_C::M_PtrGetPushSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5744);
}
void ABP_BaseCharacter_C::M_SetPushSpeedMultiplier(const float& value) {
	Write((byte*)this + 5744, value);
}
// Member Getter and Setter of HitSpeedMultiplier
// Declaration: float HitSpeedMultiplier
float ABP_BaseCharacter_C::M_GetHitSpeedMultiplier() const {
	return Read<float>((byte*)this + 5748);
}
float* ABP_BaseCharacter_C::M_PtrGetHitSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 5748);
}
void ABP_BaseCharacter_C::M_SetHitSpeedMultiplier(const float& value) {
	Write((byte*)this + 5748, value);
}
// Member Getter and Setter of SimulatedBodiesBeforeRagdoll
// Declaration: TArray<bool> SimulatedBodiesBeforeRagdoll
TArray<bool> ABP_BaseCharacter_C::M_GetSimulatedBodiesBeforeRagdoll() const {
	return Read<TArray<bool>>((byte*)this + 5752);
}
TArray<bool>* ABP_BaseCharacter_C::M_PtrGetSimulatedBodiesBeforeRagdoll() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 5752);
}
void ABP_BaseCharacter_C::M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value) {
	Write((byte*)this + 5752, value);
}
// Member Getter and Setter of IsRagdollOnHitEnabled
// Declaration: bool IsRagdollOnHitEnabled
bool ABP_BaseCharacter_C::M_GetIsRagdollOnHitEnabled() const {
	return Read<bool>((byte*)this + 5768);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollOnHitEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5768);
}
void ABP_BaseCharacter_C::M_SetIsRagdollOnHitEnabled(const bool& value) {
	Write((byte*)this + 5768, value);
}
// Member Getter and Setter of HitPhysicsBlendWeight
// Declaration: float HitPhysicsBlendWeight
float ABP_BaseCharacter_C::M_GetHitPhysicsBlendWeight() const {
	return Read<float>((byte*)this + 5772);
}
float* ABP_BaseCharacter_C::M_PtrGetHitPhysicsBlendWeight() {
	return reinterpret_cast<float*>((byte*)this + 5772);
}
void ABP_BaseCharacter_C::M_SetHitPhysicsBlendWeight(const float& value) {
	Write((byte*)this + 5772, value);
}
// Member Getter and Setter of InactiveInfantPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveInfantPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveInfantPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5776);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveInfantPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5776);
}
void ABP_BaseCharacter_C::M_SetInactiveInfantPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5776, value);
}
// Member Getter and Setter of InactiveToddlerPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveToddlerPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveToddlerPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5784);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveToddlerPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5784);
}
void ABP_BaseCharacter_C::M_SetInactiveToddlerPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5784, value);
}
// Member Getter and Setter of InactiveGirlPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveGirlPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveGirlPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5792);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveGirlPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5792);
}
void ABP_BaseCharacter_C::M_SetInactiveGirlPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5792, value);
}
// Member Getter and Setter of InactiveBoyPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveBoyPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveBoyPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5800);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveBoyPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5800);
}
void ABP_BaseCharacter_C::M_SetInactiveBoyPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5800, value);
}
// Member Getter and Setter of InactiveFemalePhysicsAsset
// Declaration: class UPhysicsAsset* InactiveFemalePhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveFemalePhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5808);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveFemalePhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5808);
}
void ABP_BaseCharacter_C::M_SetInactiveFemalePhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5808, value);
}
// Member Getter and Setter of InactiveMalePhysicsAsset
// Declaration: class UPhysicsAsset* InactiveMalePhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveMalePhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5816);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveMalePhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5816);
}
void ABP_BaseCharacter_C::M_SetInactiveMalePhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5816, value);
}
// Member Getter and Setter of MeshCollisionDisableTime
// Declaration: float MeshCollisionDisableTime
float ABP_BaseCharacter_C::M_GetMeshCollisionDisableTime() const {
	return Read<float>((byte*)this + 5824);
}
float* ABP_BaseCharacter_C::M_PtrGetMeshCollisionDisableTime() {
	return reinterpret_cast<float*>((byte*)this + 5824);
}
void ABP_BaseCharacter_C::M_SetMeshCollisionDisableTime(const float& value) {
	Write((byte*)this + 5824, value);
}
// Member Getter and Setter of TargetMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> TargetMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_BaseCharacter_C::M_GetTargetMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 5828);
}
TEnumAsByte<ECollisionEnabled>* ABP_BaseCharacter_C::M_PtrGetTargetMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 5828);
}
void ABP_BaseCharacter_C::M_SetTargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 5828, value);
}
// Member Getter and Setter of PreviousMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> PreviousMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_BaseCharacter_C::M_GetPreviousMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 5829);
}
TEnumAsByte<ECollisionEnabled>* ABP_BaseCharacter_C::M_PtrGetPreviousMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 5829);
}
void ABP_BaseCharacter_C::M_SetPreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 5829, value);
}
// Member Getter and Setter of IsDistanceMeshCollisionOptimizationEnabled
// Declaration: bool IsDistanceMeshCollisionOptimizationEnabled
bool ABP_BaseCharacter_C::M_GetIsDistanceMeshCollisionOptimizationEnabled() const {
	return Read<bool>((byte*)this + 5830);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsDistanceMeshCollisionOptimizationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5830);
}
void ABP_BaseCharacter_C::M_SetIsDistanceMeshCollisionOptimizationEnabled(const bool& value) {
	Write((byte*)this + 5830, value);
}
// Member Getter and Setter of IsPhysicsAssetSwitchingEnabled
// Declaration: bool IsPhysicsAssetSwitchingEnabled
bool ABP_BaseCharacter_C::M_GetIsPhysicsAssetSwitchingEnabled() const {
	return Read<bool>((byte*)this + 5831);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsPhysicsAssetSwitchingEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5831);
}
void ABP_BaseCharacter_C::M_SetIsPhysicsAssetSwitchingEnabled(const bool& value) {
	Write((byte*)this + 5831, value);
}
// Member Getter and Setter of ImplementsPlayerInterface
// Declaration: bool ImplementsPlayerInterface
bool ABP_BaseCharacter_C::M_GetImplementsPlayerInterface() const {
	return Read<bool>((byte*)this + 5832);
}
bool* ABP_BaseCharacter_C::M_PtrGetImplementsPlayerInterface() {
	return reinterpret_cast<bool*>((byte*)this + 5832);
}
void ABP_BaseCharacter_C::M_SetImplementsPlayerInterface(const bool& value) {
	Write((byte*)this + 5832, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CameraFadeFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CameraFadeFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CameraFadeFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_CameraFadeFinished__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_CameraFadeFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnMovementFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_OnMovementFinished__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnMovementFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdleEntered__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSitIdleEntered__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdleEntered__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSitIdleEntered__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSitIdleEntered__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdleEntered__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSleepIdleEntered__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdleEntered__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSleepIdleEntered__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSleepIdleEntered__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEntered__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnIdleAnimEntered__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEntered__DelegateSignature");

	struct ABP_BaseCharacter_C_OnIdleAnimEntered__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnIdleAnimEntered__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnIdleAnimFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_OnIdleAnimFinished__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnIdleAnimFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnInteractionFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnInteractionFinished__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnInteractionFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_OnInteractionFinished__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnInteractionFinished__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitStarted__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSitStarted__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitStarted__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSitStarted__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSitStarted__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSitFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSitFinished__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSitFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepStarted__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSleepStarted__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepStarted__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSleepStarted__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSleepStarted__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSleepFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepFinished__DelegateSignature");

	struct ABP_BaseCharacter_C_OnSleepFinished__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnSleepFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartCrafting__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndCrafting__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStoppingCrafting__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterDeactivated__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCharacterDeactivated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterDeactivated__DelegateSignature");

	struct ABP_BaseCharacter_C_OnCharacterDeactivated__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnCharacterDeactivated__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterActivated__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCharacterActivated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterActivated__DelegateSignature");

	struct ABP_BaseCharacter_C_OnCharacterActivated__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnCharacterActivated__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnWaitForCrafting__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnWaitForCrafting__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnWaitForCrafting__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCraftingAnimEnd__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature");

	struct ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartGettingUp__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartGettingUp__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartGettingUp__DelegateSignature");

	struct ABP_BaseCharacter_C_OnStartGettingUp__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnStartGettingUp__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnViewmodeChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentViewmode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnViewmodeChanged__DelegateSignature(TEnumAsByte<E_ViewMode> CurrentViewmode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnViewmodeChanged__DelegateSignature");

	struct ABP_BaseCharacter_C_OnViewmodeChanged__DelegateSignature_Params {
		TEnumAsByte<E_ViewMode> CurrentViewmode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnViewmodeChanged__DelegateSignature_Params params;
	params.CurrentViewmode = CurrentViewmode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ExecuteUbergraph_BP_BaseCharacter(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter");

	struct ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params params;
	params.EntryPoint = EntryPoint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted");

	struct ABP_BaseCharacter_C_OnCombatStarted_Params {
	};
	ABP_BaseCharacter_C_OnCombatStarted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded");

	struct ABP_BaseCharacter_C_OnCombatEnded_Params {
	};
	ABP_BaseCharacter_C_OnCombatEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCheck
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCheck");

	struct ABP_BaseCharacter_C_OnCombatCheck_Params {
	};
	ABP_BaseCharacter_C_OnCombatCheck_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCauserStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserStarted");

	struct ABP_BaseCharacter_C_OnCombatCauserStarted_Params {
	};
	ABP_BaseCharacter_C_OnCombatCauserStarted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserEnded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCauserEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserEnded");

	struct ABP_BaseCharacter_C_OnCombatCauserEnded_Params {
	};
	ABP_BaseCharacter_C_OnCombatCauserEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Camera Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LerpCurve	Type: class UCurveFloat*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Update_Camera_Event(class UCurveFloat* LerpCurve) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Camera Event");

	struct ABP_BaseCharacter_C_Update_Camera_Event_Params {
		class UCurveFloat* LerpCurve;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_Update_Camera_Event_Params params;
	params.LerpCurve = LerpCurve;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopCameraFOVLerp");

	struct ABP_BaseCharacter_C_StopCameraFOVLerp_Params {
	};
	ABP_BaseCharacter_C_StopCameraFOVLerp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayFromStartCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayFromStartCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayFromStartCameraFOVLerp");

	struct ABP_BaseCharacter_C_PlayFromStartCameraFOVLerp_Params {
	};
	ABP_BaseCharacter_C_PlayFromStartCameraFOVLerp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCameraFOVLerp");

	struct ABP_BaseCharacter_C_PlayCameraFOVLerp_Params {
	};
	ABP_BaseCharacter_C_PlayCameraFOVLerp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReverseCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseCameraFOVLerp");

	struct ABP_BaseCharacter_C_ReverseCameraFOVLerp_Params {
	};
	ABP_BaseCharacter_C_ReverseCameraFOVLerp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFromEndCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReverseFromEndCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFromEndCameraFOVLerp");

	struct ABP_BaseCharacter_C_ReverseFromEndCameraFOVLerp_Params {
	};
	ABP_BaseCharacter_C_ReverseFromEndCameraFOVLerp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNewTimeCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetNewTimeCameraFOVLerp(float NewTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetNewTimeCameraFOVLerp");

	struct ABP_BaseCharacter_C_SetNewTimeCameraFOVLerp_Params {
		float NewTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetNewTimeCameraFOVLerp_Params params;
	params.NewTime = NewTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FOVLerpUpdateSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FloatCurve	Type: class UCurveFloat*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetFOV	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FOVLerpUpdateSettings");

	struct ABP_BaseCharacter_C_FOVLerpUpdateSettings_Params {
		class UCurveFloat* FloatCurve;			//Offset: 0 | ElementSize: 8
		float NewRate;			//Offset: 8 | ElementSize: 4
		float TargetFOV;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_FOVLerpUpdateSettings_Params params;
	params.FloatCurve = FloatCurve;
	params.NewRate = NewRate;
	params.TargetFOV = TargetFOV;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGetUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnGetUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnGetUp");

	struct ABP_BaseCharacter_C_OnGetUp_Params {
	};
	ABP_BaseCharacter_C_OnGetUp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSit");

	struct ABP_BaseCharacter_C_OnSit_Params {
	};
	ABP_BaseCharacter_C_OnSit_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGoToSleep
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnGoToSleep() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnGoToSleep");

	struct ABP_BaseCharacter_C_OnGoToSleep_Params {
	};
	ABP_BaseCharacter_C_OnGoToSleep_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWakeUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWakeUp");

	struct ABP_BaseCharacter_C_OnWakeUp_Params {
	};
	ABP_BaseCharacter_C_OnWakeUp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdle
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSitIdle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdle");

	struct ABP_BaseCharacter_C_OnSitIdle_Params {
	};
	ABP_BaseCharacter_C_OnSitIdle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdle
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSleepIdle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdle");

	struct ABP_BaseCharacter_C_OnSleepIdle_Params {
	};
	ABP_BaseCharacter_C_OnSleepIdle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartCrafting(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting");

	struct ABP_BaseCharacter_C_StartCrafting_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_StartCrafting_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: CancelAnimation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EndCrafting(bool CancelAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting");

	struct ABP_BaseCharacter_C_EndCrafting_Params {
		bool CancelAnimation;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EndCrafting_Params params;
	params.CancelAnimation = CancelAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFighting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting");

	struct ABP_BaseCharacter_C_FistFighting_Params {
	};
	ABP_BaseCharacter_C_FistFighting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFistTL
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartFistTL() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartFistTL");

	struct ABP_BaseCharacter_C_StartFistTL_Params {
	};
	ABP_BaseCharacter_C_StartFistTL_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistTL
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReverseFistTL() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistTL");

	struct ABP_BaseCharacter_C_ReverseFistTL_Params {
	};
	ABP_BaseCharacter_C_ReverseFistTL_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FallingEvent
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FallingEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FallingEvent");

	struct ABP_BaseCharacter_C_FallingEvent_Params {
	};
	ABP_BaseCharacter_C_FallingEvent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartFalling");

	struct ABP_BaseCharacter_C_StartFalling_Params {
	};
	ABP_BaseCharacter_C_StartFalling_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EndFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EndFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndFalling");

	struct ABP_BaseCharacter_C_EndFalling_Params {
	};
	ABP_BaseCharacter_C_EndFalling_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnIdleAnimStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimStart");

	struct ABP_BaseCharacter_C_OnIdleAnimStart_Params {
	};
	ABP_BaseCharacter_C_OnIdleAnimStart_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnIdleAnimEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEnd");

	struct ABP_BaseCharacter_C_OnIdleAnimEnd_Params {
	};
	ABP_BaseCharacter_C_OnIdleAnimEnd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Blink
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Blink() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blink");

	struct ABP_BaseCharacter_C_Blink_Params {
	};
	ABP_BaseCharacter_C_Blink_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartBlinking
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartBlinking() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartBlinking");

	struct ABP_BaseCharacter_C_StartBlinking_Params {
	};
	ABP_BaseCharacter_C_StartBlinking_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.BlinkMorph
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::BlinkMorph(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BlinkMorph");

	struct ABP_BaseCharacter_C_BlinkMorph_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_BlinkMorph_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CloseEyes
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CloseEyes() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CloseEyes");

	struct ABP_BaseCharacter_C_CloseEyes_Params {
	};
	ABP_BaseCharacter_C_CloseEyes_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OpenEyes
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OpenEyes() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OpenEyes");

	struct ABP_BaseCharacter_C_OpenEyes_Params {
	};
	ABP_BaseCharacter_C_OpenEyes_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Blinking
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Stop_Blinking() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Blinking");

	struct ABP_BaseCharacter_C_Stop_Blinking_Params {
	};
	ABP_BaseCharacter_C_Stop_Blinking_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::WaitCrafting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting");

	struct ABP_BaseCharacter_C_WaitCrafting_Params {
	};
	ABP_BaseCharacter_C_WaitCrafting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CraftingClosed(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed");

	struct ABP_BaseCharacter_C_CraftingClosed_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_CraftingClosed_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCraftingAnimEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded");

	struct ABP_BaseCharacter_C_OnCraftingAnimEnded_Params {
	};
	ABP_BaseCharacter_C_OnCraftingAnimEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShouldHolster() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster");

	struct ABP_BaseCharacter_C_ShouldHolster_Params {
	};
	ABP_BaseCharacter_C_ShouldHolster_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TPPCombatState
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TPPCombatState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TPPCombatState");

	struct ABP_BaseCharacter_C_TPPCombatState_Params {
	};
	ABP_BaseCharacter_C_TPPCombatState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetTPPCombatState
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ResetTPPCombatState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ResetTPPCombatState");

	struct ABP_BaseCharacter_C_ResetTPPCombatState_Params {
	};
	ABP_BaseCharacter_C_ResetTPPCombatState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGettingUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnGettingUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnGettingUp");

	struct ABP_BaseCharacter_C_OnGettingUp_Params {
	};
	ABP_BaseCharacter_C_OnGettingUp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Drunk
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Drunk() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Drunk");

	struct ABP_BaseCharacter_C_Drunk_Params {
	};
	ABP_BaseCharacter_C_Drunk_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: crouchingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_CrouchingSpeed_Event(float crouchingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed Event");

	struct ABP_BaseCharacter_C_Set_CrouchingSpeed_Event_Params {
		float crouchingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_CrouchingSpeed_Event_Params params;
	params.crouchingSpeed = crouchingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: sprintingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_SprintingSpeed_Event(float sprintingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed Event");

	struct ABP_BaseCharacter_C_Set_SprintingSpeed_Event_Params {
		float sprintingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_SprintingSpeed_Event_Params params;
	params.sprintingSpeed = sprintingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: runningSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_RunningSpeed_Event(float runningSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed Event");

	struct ABP_BaseCharacter_C_Set_RunningSpeed_Event_Params {
		float runningSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_RunningSpeed_Event_Params params;
	params.runningSpeed = runningSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WalkingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_WalkingSpeed_Event(float WalkingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed Event");

	struct ABP_BaseCharacter_C_Set_WalkingSpeed_Event_Params {
		float WalkingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_WalkingSpeed_Event_Params params;
	params.WalkingSpeed = WalkingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_ViewMode_Event(TEnumAsByte<E_ViewMode> ALS_ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event");

	struct ABP_BaseCharacter_C_Set_ALS_ViewMode_Event_Params {
		TEnumAsByte<E_ViewMode> ALS_ViewMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_ViewMode_Event_Params params;
	params.ALS_ViewMode = ALS_ViewMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event(bool ALS_Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event");

	struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event_Params {
		bool ALS_Aiming;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Aiming_Event_Params params;
	params.ALS_Aiming = ALS_Aiming;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_RotationMode	Type: TEnumAsByte<E_RotationMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode> New_ALS_RotationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event");

	struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event_Params {
		TEnumAsByte<E_RotationMode> New_ALS_RotationMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event_Params params;
	params.New_ALS_RotationMode = New_ALS_RotationMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_Stance	Type: TEnumAsByte<E_Stance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Stance_Event(TEnumAsByte<E_Stance> New_ALS_Stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance Event");

	struct ABP_BaseCharacter_C_Set_ALS_Stance_Event_Params {
		TEnumAsByte<E_Stance> New_ALS_Stance;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Stance_Event_Params params;
	params.New_ALS_Stance = New_ALS_Stance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Gait_Event(TEnumAsByte<E_Gait> New_ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event");

	struct ABP_BaseCharacter_C_Set_ALS_Gait_Event_Params {
		TEnumAsByte<E_Gait> New_ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Gait_Event_Params params;
	params.New_ALS_Gait = New_ALS_Gait;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_MovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_MovementMode_Event(TEnumAsByte<E_MovementMode> New_ALS_MovementMode, bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode Event");

	struct ABP_BaseCharacter_C_Set_ALS_MovementMode_Event_Params {
		TEnumAsByte<E_MovementMode> New_ALS_MovementMode;			//Offset: 0 | ElementSize: 1
		bool Force;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_MovementMode_Event_Params params;
	params.New_ALS_MovementMode = New_ALS_MovementMode;
	params.Force = Force;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping Event");

	struct ABP_BaseCharacter_C_Set_Sleeping_Event_Params {
		bool IsSleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_Sleeping_Event_Params params;
	params.IsSleeping = IsSleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting Event");

	struct ABP_BaseCharacter_C_Set_Sitting_Event_Params {
		bool IsSitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_Sitting_Event_Params params;
	params.IsSitting = IsSitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInIdleState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event");

	struct ABP_BaseCharacter_C_Set_IdleState_Event_Params {
		bool IsInIdleState;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdleState_Event_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipEndAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_WorkState_Event(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState Event");

	struct ABP_BaseCharacter_C_Set_WorkState_Event_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		unsigned char ProfessionState;			//Offset: 2 | ElementSize: 1
		int32_t Loops;			//Offset: 4 | ElementSize: 4
		bool SkipEndAnim;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_WorkState_Event_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;
	params.SkipEndAnim = SkipEndAnim;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomizeAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakType	Type: TEnumAsByte<E_AnimBreakType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_BreakState_Event(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState Event");

	struct ABP_BaseCharacter_C_Set_BreakState_Event_Params {
		bool IsTakingBreak;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		bool RandomizeAnim;			//Offset: 2 | ElementSize: 1
		unsigned char BreakAnimID;			//Offset: 3 | ElementSize: 1
		TEnumAsByte<E_AnimBreakType> BreakType;			//Offset: 4 | ElementSize: 1
		int32_t Loops;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_BreakState_Event_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;
	params.BreakType = BreakType;
	params.Loops = Loops;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ForceStanding Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ForceStanding_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ForceStanding Event");

	struct ABP_BaseCharacter_C_Set_ForceStanding_Event_Params {
	};
	ABP_BaseCharacter_C_Set_ForceStanding_Event_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Idle_State	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoAfterPose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdlePose_Event(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event");

	struct ABP_BaseCharacter_C_Set_IdlePose_Event_Params {
		TEnumAsByte<E_IdleStates> Idle_State;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> DoAfterPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdlePose_Event_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CaughtPrey Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: CaughtPrey	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_CaughtPrey_Event(bool CaughtPrey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CaughtPrey Event");

	struct ABP_BaseCharacter_C_Set_CaughtPrey_Event_Params {
		bool CaughtPrey;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_CaughtPrey_Event_Params params;
	params.CaughtPrey = CaughtPrey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetEnableIK_Event(bool IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Event");

	struct ABP_BaseCharacter_C_SetEnableIK_Event_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetEnableIK_Event_Params params;
	params.IK_Enabled = IK_Enabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetToolType_Event(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType_Event");

	struct ABP_BaseCharacter_C_SetToolType_Event_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetToolType_Event_Params params;
	params.ToolType = ToolType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetBlocking_Event(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Event");

	struct ABP_BaseCharacter_C_SetBlocking_Event_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetBlocking_Event_Params params;
	params.Blocking = Blocking;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set MovementInput Event ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementInput	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_MovementInput_Event___SERVER__(struct FVector MovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set MovementInput Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_MovementInput_Event___SERVER___Params {
		struct FVector MovementInput;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_Set_MovementInput_Event___SERVER___Params params;
	params.MovementInput = MovementInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set LookingRotation Event ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: LookingRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_LookingRotation_Event___SERVER__(struct FRotator LookingRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set LookingRotation Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_LookingRotation_Event___SERVER___Params {
		struct FRotator LookingRotation;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_Set_LookingRotation_Event___SERVER___Params params;
	params.LookingRotation = LookingRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CharacterRotation Event ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: characterRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_CharacterRotation_Event___SERVER__(struct FRotator TargetRotation, struct FRotator characterRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CharacterRotation Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_CharacterRotation_Event___SERVER___Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		struct FRotator characterRotation;			//Offset: 12 | ElementSize: 12
	};
	ABP_BaseCharacter_C_Set_CharacterRotation_Event___SERVER___Params params;
	params.TargetRotation = TargetRotation;
	params.characterRotation = characterRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( SERVER )
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InPlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InTimeToStartMontageAt	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bStopAllMontages	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Play_Networked_Montage___SERVER__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( SERVER )");

	struct ABP_BaseCharacter_C_Play_Networked_Montage___SERVER___Params {
		class UAnimMontage* MontageToPlay;			//Offset: 0 | ElementSize: 8
		float InPlayRate;			//Offset: 8 | ElementSize: 4
		float InTimeToStartMontageAt;			//Offset: 12 | ElementSize: 4
		bool bStopAllMontages;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Play_Networked_Montage___SERVER___Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InPlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InTimeToStartMontageAt	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bStopAllMontages	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Play_Networked_Montage___MULTICAST__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )");

	struct ABP_BaseCharacter_C_Play_Networked_Montage___MULTICAST___Params {
		class UAnimMontage* MontageToPlay;			//Offset: 0 | ElementSize: 8
		float InPlayRate;			//Offset: 8 | ElementSize: 4
		float InTimeToStartMontageAt;			//Offset: 12 | ElementSize: 4
		bool bStopAllMontages;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Play_Networked_Montage___MULTICAST___Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event___MULTICAST__(bool ALS_Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( MULTICAST )");

	struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event___MULTICAST___Params {
		bool ALS_Aiming;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Aiming_Event___MULTICAST___Params params;
	params.ALS_Aiming = ALS_Aiming;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event___SERVER__(bool ALS_Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event___SERVER___Params {
		bool ALS_Aiming;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Aiming_Event___SERVER___Params params;
	params.ALS_Aiming = ALS_Aiming;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_RotationMode	Type: TEnumAsByte<E_RotationMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event___MULTICAST__(TEnumAsByte<E_RotationMode> ALS_RotationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( MULTICAST )");

	struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___MULTICAST___Params {
		TEnumAsByte<E_RotationMode> ALS_RotationMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___MULTICAST___Params params;
	params.ALS_RotationMode = ALS_RotationMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_RotationMode	Type: TEnumAsByte<E_RotationMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event___SERVER__(TEnumAsByte<E_RotationMode> ALS_RotationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___SERVER___Params {
		TEnumAsByte<E_RotationMode> ALS_RotationMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___SERVER___Params params;
	params.ALS_RotationMode = ALS_RotationMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Gait_Event___MULTICAST__(TEnumAsByte<E_Gait> ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( MULTICAST )");

	struct ABP_BaseCharacter_C_Set_ALS_Gait_Event___MULTICAST___Params {
		TEnumAsByte<E_Gait> ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Gait_Event___MULTICAST___Params params;
	params.ALS_Gait = ALS_Gait;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( SERVER )
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Gait_Event___SERVER__(TEnumAsByte<E_Gait> ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( SERVER )");

	struct ABP_BaseCharacter_C_Set_ALS_Gait_Event___SERVER___Params {
		TEnumAsByte<E_Gait> ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Gait_Event___SERVER___Params params;
	params.ALS_Gait = ALS_Gait;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: RagdollVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RagdollLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ActorLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateRagdoll___SERVER__(struct FVector RagdollVelocity, struct FVector RagdollLocation, struct FRotator ActorRotation, struct FVector ActorLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( SERVER )");

	struct ABP_BaseCharacter_C_UpdateRagdoll___SERVER___Params {
		struct FVector RagdollVelocity;			//Offset: 0 | ElementSize: 12
		struct FVector RagdollLocation;			//Offset: 12 | ElementSize: 12
		struct FRotator ActorRotation;			//Offset: 24 | ElementSize: 12
		struct FVector ActorLocation;			//Offset: 36 | ElementSize: 12
	};
	ABP_BaseCharacter_C_UpdateRagdoll___SERVER___Params params;
	params.RagdollVelocity = RagdollVelocity;
	params.RagdollLocation = RagdollLocation;
	params.ActorRotation = ActorRotation;
	params.ActorLocation = ActorLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateRagdoll___MULTICAST__(struct FVector ActorLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( MULTICAST )");

	struct ABP_BaseCharacter_C_UpdateRagdoll___MULTICAST___Params {
		struct FVector ActorLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_UpdateRagdoll___MULTICAST___Params params;
	params.ActorLocation = ActorLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: OnGround	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Un_Ragdoll___SERVER__(bool OnGround) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( SERVER )");

	struct ABP_BaseCharacter_C_Un_Ragdoll___SERVER___Params {
		bool OnGround;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Un_Ragdoll___SERVER___Params params;
	params.OnGround = OnGround;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( SERVER )
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::To_Ragdoll___SERVER__() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( SERVER )");

	struct ABP_BaseCharacter_C_To_Ragdoll___SERVER___Params {
	};
	ABP_BaseCharacter_C_To_Ragdoll___SERVER___Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddAmount	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddCharacterRotation_BPI(struct FRotator AddAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation_BPI");

	struct ABP_BaseCharacter_C_AddCharacterRotation_BPI_Params {
		struct FRotator AddAmount;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Stance	Type: TEnumAsByte<E_Stance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Stance_BPI(TEnumAsByte<E_Stance> ALS_Stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance BPI");

	struct ABP_BaseCharacter_C_Set_ALS_Stance_BPI_Params {
		TEnumAsByte<E_Stance> ALS_Stance;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Stance_BPI_Params params;
	params.ALS_Stance = ALS_Stance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Gait_BPI(TEnumAsByte<E_Gait> ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait BPI");

	struct ABP_BaseCharacter_C_Set_ALS_Gait_BPI_Params {
		TEnumAsByte<E_Gait> ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Gait_BPI_Params params;
	params.ALS_Gait = ALS_Gait;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_MovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode> ALS_MovementMode, bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode BPI");

	struct ABP_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params {
		TEnumAsByte<E_MovementMode> ALS_MovementMode;			//Offset: 0 | ElementSize: 1
		bool Force;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params params;
	params.ALS_MovementMode = ALS_MovementMode;
	params.Force = Force;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAiming
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartAiming() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartAiming");

	struct ABP_BaseCharacter_C_StartAiming_Params {
	};
	ABP_BaseCharacter_C_StartAiming_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAiming
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopAiming() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopAiming");

	struct ABP_BaseCharacter_C_StopAiming_Params {
	};
	ABP_BaseCharacter_C_StopAiming_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping BPI");

	struct ABP_BaseCharacter_C_Set_Sleeping_BPI_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_Sleeping_BPI_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting BPI");

	struct ABP_BaseCharacter_C_Set_Sitting_BPI_Params {
		bool Sitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_Sitting_BPI_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_DespawnAnimItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HoldablesToDespawn	Type: TEnumAsByte<E_HandsForHolstering>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_DespawnAnimItem(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_DespawnAnimItem");

	struct ABP_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params {
		TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params params;
	params.HoldablesToDespawn = HoldablesToDespawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemClass	Type: TAssetPtr<class UClass>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsOffHand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffHand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem");

	struct ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params {
		TAssetPtr<class UClass> ItemClass;			//Offset: 0 | ElementSize: 40
		bool IsOffHand;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_HolsterWeapon
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_HolsterWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_HolsterWeapon");

	struct ABP_BaseCharacter_C_AnimNotify_HolsterWeapon_Params {
	};
	ABP_BaseCharacter_C_AnimNotify_HolsterWeapon_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInIdleState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI");

	struct ABP_BaseCharacter_C_Set_IdleState_BPI_Params {
		bool IsInIdleState;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdleState_BPI_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetCameraPitch
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ResetCameraPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ResetCameraPitch");

	struct ABP_BaseCharacter_C_ResetCameraPitch_Params {
	};
	ABP_BaseCharacter_C_ResetCameraPitch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipEndAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState BPI");

	struct ABP_BaseCharacter_C_Set_WorkState_BPI_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		unsigned char ProfessionState;			//Offset: 2 | ElementSize: 1
		int32_t Loops;			//Offset: 4 | ElementSize: 4
		bool SkipEndAnim;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_WorkState_BPI_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;
	params.SkipEndAnim = SkipEndAnim;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomizeAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakType	Type: TEnumAsByte<E_AnimBreakType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState BPI");

	struct ABP_BaseCharacter_C_Set_BreakState_BPI_Params {
		bool IsTakingBreak;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		bool RandomizeAnim;			//Offset: 2 | ElementSize: 1
		unsigned char BreakAnimID;			//Offset: 3 | ElementSize: 1
		TEnumAsByte<E_AnimBreakType> BreakType;			//Offset: 4 | ElementSize: 1
		int32_t Loops;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_BreakState_BPI_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;
	params.BreakType = BreakType;
	params.Loops = Loops;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ForceStanding
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ForceStanding() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ForceStanding");

	struct ABP_BaseCharacter_C_ForceStanding_Params {
	};
	ABP_BaseCharacter_C_ForceStanding_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_AnimObjectNotify
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ObjectToNotify	Type: TEnumAsByte<E_NotifyObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotifyName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject> ObjectToNotify, struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_AnimObjectNotify");

	struct ABP_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params {
		TEnumAsByte<E_NotifyObject> ObjectToNotify;			//Offset: 0 | ElementSize: 1
		struct FName NotifyName;			//Offset: 4 | ElementSize: 8
	};
	ABP_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params params;
	params.ObjectToNotify = ObjectToNotify;
	params.NotifyName = NotifyName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Knockback
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KnockbackDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KnockbackStrength	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Knockback(struct FVector KnockbackDirection, float KnockbackStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Knockback");

	struct ABP_BaseCharacter_C_Knockback_Params {
		struct FVector KnockbackDirection;			//Offset: 0 | ElementSize: 12
		float KnockbackStrength;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Knockback_Params params;
	params.KnockbackDirection = KnockbackDirection;
	params.KnockbackStrength = KnockbackStrength;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Idle_State	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoAfterPose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI");

	struct ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params {
		TEnumAsByte<E_IdleStates> Idle_State;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> DoAfterPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDeath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDeath");

	struct ABP_BaseCharacter_C_OnDeath_Params {
	};
	ABP_BaseCharacter_C_OnDeath_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Caught Prey BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CaughtPrey	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Caught_Prey_BPI(bool CaughtPrey) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Caught Prey BPI");

	struct ABP_BaseCharacter_C_Set_Caught_Prey_BPI_Params {
		bool CaughtPrey;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_Caught_Prey_BPI_Params params;
	params.CaughtPrey = CaughtPrey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountStopAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayMountStopAnimation(int32_t AnimIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountStopAnimation");

	struct ABP_BaseCharacter_C_PlayMountStopAnimation_Params {
		int32_t AnimIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayMountStopAnimation_Params params;
	params.AnimIndex = AnimIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountSpecial
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayMountSpecial() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountSpecial");

	struct ABP_BaseCharacter_C_PlayMountSpecial_Params {
	};
	ABP_BaseCharacter_C_PlayMountSpecial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateIKAlpha
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateIKAlpha(float Alpha, bool Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateIKAlpha");

	struct ABP_BaseCharacter_C_UpdateIKAlpha_Params {
		float Alpha;			//Offset: 0 | ElementSize: 4
		bool Enabled;			//Offset: 4 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateIKAlpha_Params params;
	params.Alpha = Alpha;
	params.Enabled = Enabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartCombat_BPI(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCombat BPI");

	struct ABP_BaseCharacter_C_StartCombat_BPI_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StartCombat_BPI_Params params;
	params.CombatCauser = CombatCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EndCombat_BPI(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCombat BPI");

	struct ABP_BaseCharacter_C_EndCombat_BPI_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_EndCombat_BPI_Params params;
	params.CombatCauser = CombatCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetEnableIK_BPI(bool IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_BPI");

	struct ABP_BaseCharacter_C_SetEnableIK_BPI_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetEnableIK_BPI_Params params;
	params.IK_Enabled = IK_Enabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMountAnimalType BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MountAnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMountAnimalType_BPI(TEnumAsByte<E_AnimalType> MountAnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMountAnimalType BPI");

	struct ABP_BaseCharacter_C_SetMountAnimalType_BPI_Params {
		TEnumAsByte<E_AnimalType> MountAnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMountAnimalType_BPI_Params params;
	params.MountAnimalType = MountAnimalType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCraftingNumbers BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToCraft	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentCraft	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateCraftingNumbers_BPI(int32_t ToCraft, int32_t CurrentCraft, float CraftTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCraftingNumbers BPI");

	struct ABP_BaseCharacter_C_UpdateCraftingNumbers_BPI_Params {
		int32_t ToCraft;			//Offset: 0 | ElementSize: 4
		int32_t CurrentCraft;			//Offset: 4 | ElementSize: 4
		float CraftTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_UpdateCraftingNumbers_BPI_Params params;
	params.ToCraft = ToCraft;
	params.CurrentCraft = CurrentCraft;
	params.CraftTime = CraftTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetToolType_BPI(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType BPI");

	struct ABP_BaseCharacter_C_SetToolType_BPI_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetToolType_BPI_Params params;
	params.ToolType = ToolType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetBlocking_BPI(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking BPI");

	struct ABP_BaseCharacter_C_SetBlocking_BPI_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetBlocking_BPI_Params params;
	params.Blocking = Blocking;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddImpaledItem");

	struct ABP_BaseCharacter_C_AddImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveImpaledItem");

	struct ABP_BaseCharacter_C_RemoveImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PoisonCharacter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PoisonCharacter(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PoisonCharacter");

	struct ABP_BaseCharacter_C_PoisonCharacter_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PoisonCharacter_Params params;
	params.Poison = Poison;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopHolsterAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlendOutTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopHolsterAnimation(float BlendOutTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopHolsterAnimation");

	struct ABP_BaseCharacter_C_StopHolsterAnimation_Params {
		float BlendOutTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_StopHolsterAnimation_Params params;
	params.BlendOutTime = BlendOutTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsIKActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCharacterMovementActive(bool IsActive, bool IsIKActive) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterMovementActive");

	struct ABP_BaseCharacter_C_SetCharacterMovementActive_Params {
		bool IsActive;			//Offset: 0 | ElementSize: 1
		bool IsIKActive;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCharacterMovementActive_Params params;
	params.IsActive = IsActive;
	params.IsIKActive = IsIKActive;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ForceEndCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ForceEndCombat_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ForceEndCombat BPI");

	struct ABP_BaseCharacter_C_ForceEndCombat_BPI_Params {
	};
	ABP_BaseCharacter_C_ForceEndCombat_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTechnology_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TechnologyType	Type: TEnumAsByte<E_TechnologyTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IncreaseTechnology_BPI(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTechnology_BPI");

	struct ABP_BaseCharacter_C_IncreaseTechnology_BPI_Params {
		TEnumAsByte<E_TechnologyTypes> TechnologyType;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IncreaseTechnology_BPI_Params params;
	params.TechnologyType = TechnologyType;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CharacterAddSkills_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CharacterAddSkills_BPI(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CharacterAddSkills_BPI");

	struct ABP_BaseCharacter_C_CharacterAddSkills_BPI_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool AffectedByGameSettings;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CharacterAddSkills_BPI_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.AffectedByGameSettings = AffectedByGameSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: PrevMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PrevCustomMode	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewCustomMode	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged");

	struct ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params {
		TEnumAsByte<EMovementMode> PrevMovementMode;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<EMovementMode> NewMovementMode;			//Offset: 1 | ElementSize: 1
		unsigned char PrevCustomMode;			//Offset: 2 | ElementSize: 1
		unsigned char NewCustomMode;			//Offset: 3 | ElementSize: 1
	};
	ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnStartCrouch
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: HalfHeightAdjust	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ScaledHalfHeightAdjust	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnStartCrouch");

	struct ABP_BaseCharacter_C_K2_OnStartCrouch_Params {
		float HalfHeightAdjust;			//Offset: 0 | ElementSize: 4
		float ScaledHalfHeightAdjust;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: HalfHeightAdjust	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ScaledHalfHeightAdjust	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch");

	struct ABP_BaseCharacter_C_K2_OnEndCrouch_Params {
		float HalfHeightAdjust;			//Offset: 0 | ElementSize: 4
		float ScaledHalfHeightAdjust;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded
// Flags: Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLanded(const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded");

	struct ABP_BaseCharacter_C_OnLanded_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
	};
	ABP_BaseCharacter_C_OnLanded_Params params;
	params.Hit = Hit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveEndPlay");

	struct ABP_BaseCharacter_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::To_Ragdoll___MULTICAST__() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( MULTICAST )");

	struct ABP_BaseCharacter_C_To_Ragdoll___MULTICAST___Params {
	};
	ABP_BaseCharacter_C_To_Ragdoll___MULTICAST___Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( MULTICAST )
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: OnGround	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Un_Ragdoll___MULTICAST__(bool OnGround) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( MULTICAST )");

	struct ABP_BaseCharacter_C_Un_Ragdoll___MULTICAST___Params {
		bool OnGround;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Un_Ragdoll___MULTICAST___Params params;
	params.OnGround = OnGround;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::To_Ragdoll_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll Event");

	struct ABP_BaseCharacter_C_To_Ragdoll_Event_Params {
	};
	ABP_BaseCharacter_C_To_Ragdoll_Event_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SkipAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Un_Ragdoll_Event(bool SkipAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll Event");

	struct ABP_BaseCharacter_C_Un_Ragdoll_Event_Params {
		bool SkipAnim;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Un_Ragdoll_Event_Params params;
	params.SkipAnim = SkipAnim;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Ragdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll");

	struct ABP_BaseCharacter_C_Ragdoll_Params {
	};
	ABP_BaseCharacter_C_Ragdoll_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshCollisionKeepTime_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keep_Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshCollisionKeepTime_BPI(float Keep_Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshCollisionKeepTime_BPI");

	struct ABP_BaseCharacter_C_SetMeshCollisionKeepTime_BPI_Params {
		float Keep_Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetMeshCollisionKeepTime_BPI_Params params;
	params.Keep_Time = Keep_Time;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshCollision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Collision_Type	Type: TEnumAsByte<ECollisionEnabled>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshCollision_BPI");

	struct ABP_BaseCharacter_C_SetMeshCollision_BPI_Params {
		TEnumAsByte<ECollisionEnabled> Collision_Type;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMeshCollision_BPI_Params params;
	params.Collision_Type = Collision_Type;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Hit
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitForce	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Hit");

	struct ABP_BaseCharacter_C_Hit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector HitForce;			//Offset: 12 | ElementSize: 12
		struct FName HitBoneName;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_Hit_Params params;
	params.HitLocation = HitLocation;
	params.HitForce = HitForce;
	params.HitBoneName = HitBoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PresetLoad
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Array	Type: TArray<struct FST_NPCItemColors>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Tattoo	Type: class UTexture2D*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Async	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PresetLoad(TArray<struct FST_NPCItemColors>* Array, class UTexture2D* Tattoo, bool Async) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PresetLoad");

	struct ABP_BaseCharacter_C_PresetLoad_Params {
		TArray<struct FST_NPCItemColors> Array;			//Offset: 0 | ElementSize: 16
		class UTexture2D* Tattoo;			//Offset: 16 | ElementSize: 8
		bool Async;			//Offset: 24 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PresetLoad_Params params;
	params.Tattoo = Tattoo;
	params.Async = Async;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Array != nullptr)
		*Array = params.Array;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InWater	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsInWater(bool InWater, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInWater");

	struct ABP_BaseCharacter_C_SetIsInWater_Params {
		bool InWater;			//Offset: 0 | ElementSize: 1
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SectionNameToChange	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NextSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeMontageNextSection(struct FName SectionNameToChange, struct FName NextSection, const class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection");

	struct ABP_BaseCharacter_C_ChangeMontageNextSection_Params {
		struct FName SectionNameToChange;			//Offset: 0 | ElementSize: 8
		struct FName NextSection;			//Offset: 8 | ElementSize: 8
		class UAnimMontage* Montage;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ChangeMontageNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShowInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShowInspectorUI");

	struct ABP_BaseCharacter_C_ShowInspectorUI_Params {
	};
	ABP_BaseCharacter_C_ShowInspectorUI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature");

	struct ABP_BaseCharacter_C_BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageSettings");

	struct ABP_BaseCharacter_C_SetMontageSettings_Params {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings;			//Offset: 0 | ElementSize: 80
	};
	ABP_BaseCharacter_C_SetMontageSettings_Params params;
	params.MontagesSettings = MontagesSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Public, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveAnyDamage");

	struct ABP_BaseCharacter_C_ReceiveAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage_Type	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMontageType(TEnumAsByte<E_AnimInteractionTypes> Montage_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageType");

	struct ABP_BaseCharacter_C_SetMontageType_Params {
		TEnumAsByte<E_AnimInteractionTypes> Montage_Type;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMontageType_Params params;
	params.Montage_Type = Montage_Type;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CancelAnimationLoops() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops");

	struct ABP_BaseCharacter_C_CancelAnimationLoops_Params {
	};
	ABP_BaseCharacter_C_CancelAnimationLoops_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnimation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayAnimSound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SelectPickUpAnimation(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnimation");

	struct ABP_BaseCharacter_C_SelectPickUpAnimation_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
		bool PlayAnimSound;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SelectPickUpAnimation_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;
	params.PlayAnimSound = PlayAnimSound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: DisablePlayerInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangePlayerInput(bool DisablePlayerInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput");

	struct ABP_BaseCharacter_C_ChangePlayerInput_Params {
		bool DisablePlayerInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangePlayerInput_Params params;
	params.DisablePlayerInput = DisablePlayerInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshAndMaterials
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TorsoMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HandsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LegsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FeetMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HatSKMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HoodMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Backpack	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Pouch	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DynamicMaterials	Type: TArray<struct FST_MeshDynamicMaterials>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UObject* AnimClass, const TArray<struct FST_MeshDynamicMaterials>& DynamicMaterials) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshAndMaterials");

	struct ABP_BaseCharacter_C_SetMeshAndMaterials_Params {
		class USkeletalMesh* HeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* TorsoMesh;			//Offset: 8 | ElementSize: 8
		class USkeletalMesh* HandsMesh;			//Offset: 16 | ElementSize: 8
		class USkeletalMesh* LegsMesh;			//Offset: 24 | ElementSize: 8
		class USkeletalMesh* FeetMesh;			//Offset: 32 | ElementSize: 8
		class USkeletalMesh* HatSKMesh;			//Offset: 40 | ElementSize: 8
		class USkeletalMesh* HoodMesh;			//Offset: 48 | ElementSize: 8
		class USkeletalMesh* Backpack;			//Offset: 56 | ElementSize: 8
		class USkeletalMesh* Pouch;			//Offset: 64 | ElementSize: 8
		class UObject* AnimClass;			//Offset: 72 | ElementSize: 8
		TArray<struct FST_MeshDynamicMaterials> DynamicMaterials;			//Offset: 80 | ElementSize: 16
	};
	ABP_BaseCharacter_C_SetMeshAndMaterials_Params params;
	params.HeadMesh = HeadMesh;
	params.TorsoMesh = TorsoMesh;
	params.HandsMesh = HandsMesh;
	params.LegsMesh = LegsMesh;
	params.FeetMesh = FeetMesh;
	params.HatSKMesh = HatSKMesh;
	params.HoodMesh = HoodMesh;
	params.Backpack = Backpack;
	params.Pouch = Pouch;
	params.AnimClass = AnimClass;
	params.DynamicMaterials = DynamicMaterials;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickingUpMontage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayAnimSound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickingUpMontage");

	struct ABP_BaseCharacter_C_PlayPickingUpMontage_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
		bool PlayAnimSound;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayPickingUpMontage_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;
	params.PlayAnimSound = PlayAnimSound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Action_Montage_Settings	Type: struct FST_MontagesSettingsArray	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableHitAction(struct FST_MontagesSettingsArray Action_Montage_Settings, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction");

	struct ABP_BaseCharacter_C_HoldableHitAction_Params {
		struct FST_MontagesSettingsArray Action_Montage_Settings;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 16 | ElementSize: 1
		int32_t AnimID;			//Offset: 20 | ElementSize: 4
		bool IgnorePlayingMontage;			//Offset: 24 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HoldableHitAction_Params params;
	params.Action_Montage_Settings = Action_Montage_Settings;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: UseLookingDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookingDownAngle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Attack	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OverrideMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction");

	struct ABP_BaseCharacter_C_HoldableAction_Params {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings;			//Offset: 0 | ElementSize: 80
		bool UseLookingDown;			//Offset: 80 | ElementSize: 1
		float LookingDownAngle;			//Offset: 84 | ElementSize: 4
		bool Loop;			//Offset: 88 | ElementSize: 1
		bool Attack;			//Offset: 89 | ElementSize: 1
		bool OverrideMontage;			//Offset: 90 | ElementSize: 1
		bool IgnorePlayingMontage;			//Offset: 91 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 92 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 93 | ElementSize: 1
		int32_t AnimID;			//Offset: 96 | ElementSize: 4
	};
	ABP_BaseCharacter_C_HoldableAction_Params params;
	params.MontagesSettings = MontagesSettings;
	params.UseLookingDown = UseLookingDown;
	params.LookingDownAngle = LookingDownAngle;
	params.Loop = Loop;
	params.Attack = Attack;
	params.OverrideMontage = OverrideMontage;
	params.IgnorePlayingMontage = IgnorePlayingMontage;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Camera Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraRotationLimits	Type: struct FST_CameraRotationLimits	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Camera Rotation");

	struct ABP_BaseCharacter_C_Limit_Camera_Rotation_Params {
		struct FST_CameraRotationLimits CameraRotationLimits;			//Offset: 0 | ElementSize: 24
	};
	ABP_BaseCharacter_C_Limit_Camera_Rotation_Params params;
	params.CameraRotationLimits = CameraRotationLimits;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Stage Interaction Camera Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bUseHeadForFullBodyAnimations	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bUsePlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bLimitPlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Stage Interaction Camera Rotation");

	struct ABP_BaseCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params {
		bool bUseHeadForFullBodyAnimations;			//Offset: 0 | ElementSize: 1
		bool bUsePlayerCamera;			//Offset: 1 | ElementSize: 1
		bool bLimitPlayerCamera;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params params;
	params.bUseHeadForFullBodyAnimations = bUseHeadForFullBodyAnimations;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.bLimitPlayerCamera = bLimitPlayerCamera;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Movement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bStopMovementInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Stop_Character_Movement(bool bStopMovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Movement");

	struct ABP_BaseCharacter_C_Stop_Character_Movement_Params {
		bool bStopMovementInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Stop_Character_Movement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Swoon
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Swoon() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Swoon");

	struct ABP_BaseCharacter_C_Swoon_Params {
	};
	ABP_BaseCharacter_C_Swoon_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FinishStageInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction");

	struct ABP_BaseCharacter_C_FinishStageInteraction_Params {
	};
	ABP_BaseCharacter_C_FinishStageInteraction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FromAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bShouldFadeAudio	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bHoldWhenFinished	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bReverseOnFinish	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn");

	struct ABP_BaseCharacter_C_StartCameraFade_Pawn_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool bReverseOnFinish;			//Offset: 30 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartCameraFade_Pawn_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.bReverseOnFinish = bReverseOnFinish;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bUsePlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BlendTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Change_Camera(bool bUsePlayerCamera, float BlendTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera");

	struct ABP_BaseCharacter_C_Change_Camera_Params {
		bool bUsePlayerCamera;			//Offset: 0 | ElementSize: 1
		float BlendTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Change_Camera_Params params;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.BlendTime = BlendTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: StopRotationInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Stop_Character_Rotation(bool StopRotationInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Rotation");

	struct ABP_BaseCharacter_C_Stop_Character_Rotation_Params {
		bool StopRotationInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Stop_Character_Rotation_Params params;
	params.StopRotationInput = StopRotationInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SectionsToPlay	Type: TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutomaticPlay	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NumberOfAutomaticLoops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SwapItemsOnInteraction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction");

	struct ABP_BaseCharacter_C_SetupStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay;			//Offset: 8 | ElementSize: 80
		class UAnimMontage* MontageToPlay;			//Offset: 88 | ElementSize: 8
		float PlayRate;			//Offset: 96 | ElementSize: 4
		float StartingPosition;			//Offset: 100 | ElementSize: 4
		bool AutomaticPlay;			//Offset: 104 | ElementSize: 1
		int32_t NumberOfAutomaticLoops;			//Offset: 108 | ElementSize: 4
		bool SwapItemsOnInteraction;			//Offset: 112 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetupStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.SectionsToPlay = SectionsToPlay;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.AutomaticPlay = AutomaticPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewHeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewTorsoMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHandsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewLegsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewFeetMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHatSKMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHoodMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHairMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewBackpackMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewPouchMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UObject* NewClass, bool UpdateOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh");

	struct ABP_BaseCharacter_C_SetMesh_Params {
		class USkeletalMesh* NewHeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* NewTorsoMesh;			//Offset: 8 | ElementSize: 8
		class USkeletalMesh* NewHandsMesh;			//Offset: 16 | ElementSize: 8
		class USkeletalMesh* NewLegsMesh;			//Offset: 24 | ElementSize: 8
		class USkeletalMesh* NewFeetMesh;			//Offset: 32 | ElementSize: 8
		class USkeletalMesh* NewHatSKMesh;			//Offset: 40 | ElementSize: 8
		class USkeletalMesh* NewHoodMesh;			//Offset: 48 | ElementSize: 8
		class USkeletalMesh* NewHairMesh;			//Offset: 56 | ElementSize: 8
		class USkeletalMesh* NewBackpackMesh;			//Offset: 64 | ElementSize: 8
		class USkeletalMesh* NewPouchMesh;			//Offset: 72 | ElementSize: 8
		class UObject* NewClass;			//Offset: 80 | ElementSize: 8
		bool UpdateOnly;			//Offset: 88 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMesh_Params params;
	params.NewHeadMesh = NewHeadMesh;
	params.NewTorsoMesh = NewTorsoMesh;
	params.NewHandsMesh = NewHandsMesh;
	params.NewLegsMesh = NewLegsMesh;
	params.NewFeetMesh = NewFeetMesh;
	params.NewHatSKMesh = NewHatSKMesh;
	params.NewHoodMesh = NewHoodMesh;
	params.NewHairMesh = NewHairMesh;
	params.NewBackpackMesh = NewBackpackMesh;
	params.NewPouchMesh = NewPouchMesh;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay");

	struct ABP_BaseCharacter_C_ReceiveBeginPlay_Params {
	};
	ABP_BaseCharacter_C_ReceiveBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick");

	struct ABP_BaseCharacter_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountMovementMode_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MountMovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetMountMovementMode_BPI(TEnumAsByte<E_MovementMode> MountMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountMovementMode_BPI");

	struct ABP_BaseCharacter_C_GetMountMovementMode_BPI_Params {
		TEnumAsByte<E_MovementMode> MountMovementMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetMountMovementMode_BPI_Params params;
	params.MountMovementMode = MountMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetProfessionData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetProfessionData(struct FST_Profession ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetProfessionData");

	struct ABP_BaseCharacter_C_SetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	ABP_BaseCharacter_C_SetProfessionData_Params params;
	params.ProfessionData = ProfessionData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakLoopsFinished");

	struct ABP_BaseCharacter_C_AnimNotify_BreakLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_BreakLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakLoopIncreased");

	struct ABP_BaseCharacter_C_AnimNotify_BreakLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_BreakLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitForCrafting
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::WaitForCrafting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitForCrafting");

	struct ABP_BaseCharacter_C_WaitForCrafting_Params {
	};
	ABP_BaseCharacter_C_WaitForCrafting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageInterrupted");

	struct ABP_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageBlendOut");

	struct ABP_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageComplete");

	struct ABP_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopsFinished");

	struct ABP_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopIncreased");

	struct ABP_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageInterrupted");

	struct ABP_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageComplete");

	struct ABP_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnim
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayAnimSound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnim");

	struct ABP_BaseCharacter_C_SelectPickUpAnim_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
		bool PlayAnimSound;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SelectPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;
	params.PlayAnimSound = PlayAnimSound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCraftingAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CancelAnimation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, bool CancelAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCraftingAnimation");

	struct ABP_BaseCharacter_C_PlayCraftingAnimation_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
		bool CancelAnimation;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;
	params.CancelAnimation = CancelAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: bStopMovementInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_StopMovement(bool bStopMovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopMovement");

	struct ABP_BaseCharacter_C_AnimNotify_StopMovement_Params {
		bool bStopMovementInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_StopMovement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StopRotationInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_StopRotation(bool StopRotationInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopRotation");

	struct ABP_BaseCharacter_C_AnimNotify_StopRotation_Params {
		bool StopRotationInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_StopRotation_Params params;
	params.StopRotationInput = StopRotationInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerLookAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayerLookAt(class AActor* Target, struct FVector TargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerLookAt");

	struct ABP_BaseCharacter_C_PlayerLookAt_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector TargetLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMoveForInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtTarget	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RotateDuringMovement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UsePlayerLookAt	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ResetLookAtPitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMoveForInteraction");

	struct ABP_BaseCharacter_C_PlayerMoveForInteraction_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
		struct FVector Target;			//Offset: 8 | ElementSize: 12
		struct FVector LookAtTarget;			//Offset: 20 | ElementSize: 12
		bool RotateDuringMovement;			//Offset: 32 | ElementSize: 1
		bool UsePlayerLookAt;			//Offset: 33 | ElementSize: 1
		bool ResetLookAtPitch;			//Offset: 34 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayerMoveForInteraction_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickUpAnim
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickUpAnim");

	struct ABP_BaseCharacter_C_PlayPickUpAnim_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OverrideCanPerfromHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPerfromHitAction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OverrideCanPerfromHitAction(bool CanPerfromHitAction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OverrideCanPerfromHitAction");

	struct ABP_BaseCharacter_C_OverrideCanPerfromHitAction_Params {
		bool CanPerfromHitAction;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OverrideCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetStrengthAlpha
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetStrengthAlpha(float Alpha) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetStrengthAlpha");

	struct ABP_BaseCharacter_C_SetStrengthAlpha_Params {
		float Alpha;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetStrengthAlpha_Params params;
	params.Alpha = Alpha;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Range Strength
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Strength	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_Range_Strength(float Strength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Range Strength");

	struct ABP_BaseCharacter_C_Set_Range_Strength_Params {
		float Strength;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_Range_Strength_Params params;
	params.Strength = Strength;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction");

	struct ABP_BaseCharacter_C_OnEndStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnEndStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoopStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoopStageInteraction");

	struct ABP_BaseCharacter_C_OnLoopStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoopStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction");

	struct ABP_BaseCharacter_C_OnStartStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnStartStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopSnappingIK
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_StopSnappingIK() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopSnappingIK");

	struct ABP_BaseCharacter_C_AnimNotify_StopSnappingIK_Params {
	};
	ABP_BaseCharacter_C_AnimNotify_StopSnappingIK_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StartSnappingIK
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_StartSnappingIK() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StartSnappingIK");

	struct ABP_BaseCharacter_C_AnimNotify_StartSnappingIK_Params {
	};
	ABP_BaseCharacter_C_AnimNotify_StartSnappingIK_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeAnimLoopState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLooping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeAnimLoopState(bool IsLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeAnimLoopState");

	struct ABP_BaseCharacter_C_ChangeAnimLoopState_Params {
		bool IsLooping;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangeAnimLoopState_Params params;
	params.IsLooping = IsLooping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SnapPoint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SnapComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetSnapAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetSnapAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LeftHandSocketName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RightHandSocketName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, struct FName LeftHandSocketName, struct FName RightHandSocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SnapPoint");

	struct ABP_BaseCharacter_C_AnimNotify_SnapPoint_Params {
		class USceneComponent* SnapComponent;			//Offset: 0 | ElementSize: 8
		float TargetSnapAlpha;			//Offset: 8 | ElementSize: 4
		float ResetSnapAlpha;			//Offset: 12 | ElementSize: 4
		bool Reset;			//Offset: 16 | ElementSize: 1
		struct FName LeftHandSocketName;			//Offset: 20 | ElementSize: 8
		struct FName RightHandSocketName;			//Offset: 28 | ElementSize: 8
	};
	ABP_BaseCharacter_C_AnimNotify_SnapPoint_Params params;
	params.SnapComponent = SnapComponent;
	params.TargetSnapAlpha = TargetSnapAlpha;
	params.ResetSnapAlpha = ResetSnapAlpha;
	params.Reset = Reset;
	params.LeftHandSocketName = LeftHandSocketName;
	params.RightHandSocketName = RightHandSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RF_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RF	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_RF_BPI(bool RF) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RF_BPI");

	struct ABP_BaseCharacter_C_Set_RF_BPI_Params {
		bool RF;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_RF_BPI_Params params;
	params.RF = RF;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: crouchingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_CrouchingSpeed_BPI(float crouchingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed BPI");

	struct ABP_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params {
		float crouchingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params params;
	params.crouchingSpeed = crouchingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: sprintingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_SprintingSpeed_BPI(float sprintingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed BPI");

	struct ABP_BaseCharacter_C_Set_SprintingSpeed_BPI_Params {
		float sprintingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_SprintingSpeed_BPI_Params params;
	params.sprintingSpeed = sprintingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: runningSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_RunningSpeed_BPI(float runningSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed BPI");

	struct ABP_BaseCharacter_C_Set_RunningSpeed_BPI_Params {
		float runningSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_RunningSpeed_BPI_Params params;
	params.runningSpeed = runningSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WalkingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_WalkingSpeed_BPI(float WalkingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed BPI");

	struct ABP_BaseCharacter_C_Set_WalkingSpeed_BPI_Params {
		float WalkingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_WalkingSpeed_BPI_Params params;
	params.WalkingSpeed = WalkingSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowTraces_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShowTraces	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShowTraces_BPI(bool ShowTraces) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShowTraces_BPI");

	struct ABP_BaseCharacter_C_ShowTraces_BPI_Params {
		bool ShowTraces;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ShowTraces_BPI_Params params;
	params.ShowTraces = ShowTraces;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode> ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode BPI");

	struct ABP_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params params;
	params.ViewMode = ViewMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SavePoseSnapshot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PoseName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SavePoseSnapshot_BPI(struct FName PoseName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SavePoseSnapshot_BPI");

	struct ABP_BaseCharacter_C_SavePoseSnapshot_BPI_Params {
		struct FName PoseName;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SavePoseSnapshot_BPI_Params params;
	params.PoseName = PoseName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Play_GetUp_Anim BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FaceDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Play_GetUp_Anim_BPI(bool FaceDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play_GetUp_Anim BPI");

	struct ABP_BaseCharacter_C_Play_GetUp_Anim_BPI_Params {
		bool FaceDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Play_GetUp_Anim_BPI_Params params;
	params.FaceDown = FaceDown;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_Aiming_BPI(bool Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming BPI");

	struct ABP_BaseCharacter_C_Set_ALS_Aiming_BPI_Params {
		bool Aiming;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_Aiming_BPI_Params params;
	params.Aiming = Aiming;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_IdleEntryState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IdleEntryState	Type: TEnumAsByte<E_IdleEntryState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState> IdleEntryState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_IdleEntryState BPI");

	struct ABP_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params {
		TEnumAsByte<E_IdleEntryState> IdleEntryState;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params params;
	params.IdleEntryState = IdleEntryState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_TurningInPlace BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TurnInPlaceMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldTurnInPlace	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TurningInPlace	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TurningRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_TurningInPlace BPI");

	struct ABP_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params {
		class UAnimMontage* TurnInPlaceMontage;			//Offset: 0 | ElementSize: 8
		bool ShouldTurnInPlace;			//Offset: 8 | ElementSize: 1
		bool TurningInPlace;			//Offset: 9 | ElementSize: 1
		bool TurningRight;			//Offset: 10 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params params;
	params.TurnInPlaceMontage = TurnInPlaceMontage;
	params.ShouldTurnInPlace = ShouldTurnInPlace;
	params.TurningInPlace = TurningInPlace;
	params.TurningRight = TurningRight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_Pivot BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PivotParams	Type: struct FST_PivotParams	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_Pivot_BPI(struct FST_PivotParams PivotParams) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_Pivot BPI");

	struct ABP_BaseCharacter_C_AnimNotify_Pivot_BPI_Params {
		struct FST_PivotParams PivotParams;			//Offset: 0 | ElementSize: 20
	};
	ABP_BaseCharacter_C_AnimNotify_Pivot_BPI_Params params;
	params.PivotParams = PivotParams;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_RotationMode_BPI	Type: TEnumAsByte<E_RotationMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode BPI");

	struct ABP_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params {
		TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params params;
	params.ALS_RotationMode_BPI = ALS_RotationMode_BPI;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RotateYaw
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RotateYaw(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RotateYaw");

	struct ABP_BaseCharacter_C_RotateYaw_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_RotateYaw_Params params;
	params.Angle = Angle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RotatePitch
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RotatePitch(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RotatePitch");

	struct ABP_BaseCharacter_C_RotatePitch_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_RotatePitch_Params params;
	params.Angle = Angle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DetachItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DetachItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DetachItem");

	struct ABP_BaseCharacter_C_DetachItem_Params {
	};
	ABP_BaseCharacter_C_DetachItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRotateMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RotateLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RotateRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetRotateMode(bool RotateLeft, bool RotateRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRotateMode");

	struct ABP_BaseCharacter_C_SetRotateMode_Params {
		bool RotateLeft;			//Offset: 0 | ElementSize: 1
		bool RotateRight;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetRotateMode_Params params;
	params.RotateLeft = RotateLeft;
	params.RotateRight = RotateRight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopAttackFunction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopAttackFunction");

	struct ABP_BaseCharacter_C_StopAttackFunction_Params {
	};
	ABP_BaseCharacter_C_StopAttackFunction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Socket	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartAttackFunction(bool Timer, struct FName Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartAttackFunction");

	struct ABP_BaseCharacter_C_StartAttackFunction_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
		struct FName Socket;			//Offset: 4 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractWithImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractWithImpaledItem");

	struct ABP_BaseCharacter_C_InteractWithImpaledItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsLookedAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Active	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsLookedAt(bool Active) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsLookedAt");

	struct ABP_BaseCharacter_C_IsLookedAt_Params {
		bool Active;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsLookedAt_Params params;
	params.Active = Active;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformActorInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PerformActorInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PerformActorInteraction");

	struct ABP_BaseCharacter_C_PerformActorInteraction_Params {
	};
	ABP_BaseCharacter_C_PerformActorInteraction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: UseChunkData	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ChunkData	Type: struct FST_Chunks	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract");

	struct ABP_BaseCharacter_C_ToolInteract_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool UseChunkData;			//Offset: 144 | ElementSize: 1
		struct FST_Chunks ChunkData;			//Offset: 152 | ElementSize: 520
	};
	ABP_BaseCharacter_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOccupied
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetOccupied(class APawn* Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOccupied");

	struct ABP_BaseCharacter_C_SetOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetOccupied_Params params;
	params.Character = Character;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel");

	struct ABP_BaseCharacter_C_InteractCancel_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractStart
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractStart");

	struct ABP_BaseCharacter_C_InteractStart_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeyDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InteractInput(bool KeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractInput");

	struct ABP_BaseCharacter_C_InteractInput_Params {
		bool KeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interact");

	struct ABP_BaseCharacter_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool Timer;			//Offset: 144 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_62CC4B9841F5F4A3D73E44B6D98215C9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_62CC4B9841F5F4A3D73E44B6D98215C9(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_62CC4B9841F5F4A3D73E44B6D98215C9");

	struct ABP_BaseCharacter_C_OnLoaded_62CC4B9841F5F4A3D73E44B6D98215C9_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_62CC4B9841F5F4A3D73E44B6D98215C9_Params params;
	params.Loaded = Loaded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_AF7514B049C1F96364328B9F425197C1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_AF7514B049C1F96364328B9F425197C1(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_AF7514B049C1F96364328B9F425197C1");

	struct ABP_BaseCharacter_C_OnLoaded_AF7514B049C1F96364328B9F425197C1_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_AF7514B049C1F96364328B9F425197C1_Params params;
	params.Loaded = Loaded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2");

	struct ABP_BaseCharacter_C_OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2_Params params;
	params.Loaded = Loaded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFightingTimeline__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__UpdateFunc");

	struct ABP_BaseCharacter_C_FistFightingTimeline__UpdateFunc_Params {
	};
	ABP_BaseCharacter_C_FistFightingTimeline__UpdateFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFightingTimeline__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__FinishedFunc");

	struct ABP_BaseCharacter_C_FistFightingTimeline__FinishedFunc_Params {
	};
	ABP_BaseCharacter_C_FistFightingTimeline__FinishedFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Blinking__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__UpdateFunc");

	struct ABP_BaseCharacter_C_Blinking__UpdateFunc_Params {
	};
	ABP_BaseCharacter_C_Blinking__UpdateFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Blinking__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__FinishedFunc");

	struct ABP_BaseCharacter_C_Blinking__FinishedFunc_Params {
	};
	ABP_BaseCharacter_C_Blinking__FinishedFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EyesStateTL__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__UpdateFunc");

	struct ABP_BaseCharacter_C_EyesStateTL__UpdateFunc_Params {
	};
	ABP_BaseCharacter_C_EyesStateTL__UpdateFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EyesStateTL__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__FinishedFunc");

	struct ABP_BaseCharacter_C_EyesStateTL__FinishedFunc_Params {
	};
	ABP_BaseCharacter_C_EyesStateTL__FinishedFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript");

	struct ABP_BaseCharacter_C_UserConstructionScript_Params {
	};
	ABP_BaseCharacter_C_UserConstructionScript_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Calculate Essential Variables
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Calculate_Essential_Variables() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Calculate Essential Variables");

	struct ABP_BaseCharacter_C_Calculate_Essential_Variables_Params {
	};
	ABP_BaseCharacter_C_Calculate_Essential_Variables_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On PawnMovementMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PrevMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PrevCustomMode	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewCustomMove	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_PawnMovementMode_Changed(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMove) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On PawnMovementMode Changed");

	struct ABP_BaseCharacter_C_On_PawnMovementMode_Changed_Params {
		TEnumAsByte<EMovementMode> PrevMovementMode;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<EMovementMode> NewMovementMode;			//Offset: 1 | ElementSize: 1
		unsigned char PrevCustomMode;			//Offset: 2 | ElementSize: 1
		unsigned char NewCustomMove;			//Offset: 3 | ElementSize: 1
	};
	ABP_BaseCharacter_C_On_PawnMovementMode_Changed_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMove = NewCustomMove;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_MovementMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_MovementMode_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_MovementMode Changed");

	struct ABP_BaseCharacter_C_On_ALS_MovementMode_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_MovementMode_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Gait Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_Gait_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Gait Changed");

	struct ABP_BaseCharacter_C_On_ALS_Gait_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_Gait_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Stance Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_Stance_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Stance Changed");

	struct ABP_BaseCharacter_C_On_ALS_Stance_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_Stance_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_RotationMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_RotationMode_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_RotationMode Changed");

	struct ABP_BaseCharacter_C_On_ALS_RotationMode_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_RotationMode_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation");

	struct ABP_BaseCharacter_C_SetCharacterRotation_Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateALS_CharacterMovementSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateALS_CharacterMovementSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateALS_CharacterMovementSettings");

	struct ABP_BaseCharacter_C_UpdateALS_CharacterMovementSettings_Params {
	};
	ABP_BaseCharacter_C_UpdateALS_CharacterMovementSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxWalkSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxWalkSpeed");

	struct ABP_BaseCharacter_C_ChooseMaxWalkSpeed_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ChooseMaxWalkSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxAcceleration
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseMaxAcceleration(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxAcceleration");

	struct ABP_BaseCharacter_C_ChooseMaxAcceleration_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ChooseMaxAcceleration_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseBrakingDeceleration
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseBrakingDeceleration(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseBrakingDeceleration");

	struct ABP_BaseCharacter_C_ChooseBrakingDeceleration_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ChooseBrakingDeceleration_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseGroundFriction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseGroundFriction(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseGroundFriction");

	struct ABP_BaseCharacter_C_ChooseGroundFriction_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ChooseGroundFriction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddAmount	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddCharacterRotation(struct FRotator AddAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation");

	struct ABP_BaseCharacter_C_AddCharacterRotation_Params {
		struct FRotator AddAmount;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_AddCharacterRotation_Params params;
	params.AddAmount = AddAmount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.LookingDirectionWithOffset
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OffsetInterpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NE_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NW_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SE_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SW_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Buffer	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LookingDirectionWithOffset");

	struct ABP_BaseCharacter_C_LookingDirectionWithOffset_Params {
		float OffsetInterpSpeed;			//Offset: 0 | ElementSize: 4
		float NE_Angle;			//Offset: 4 | ElementSize: 4
		float NW_Angle;			//Offset: 8 | ElementSize: 4
		float SE_Angle;			//Offset: 12 | ElementSize: 4
		float SW_Angle;			//Offset: 16 | ElementSize: 4
		float Buffer;			//Offset: 20 | ElementSize: 4
		struct FRotator TargetRotation;			//Offset: 24 | ElementSize: 12
	};
	ABP_BaseCharacter_C_LookingDirectionWithOffset_Params params;
	params.OffsetInterpSpeed = OffsetInterpSpeed;
	params.NE_Angle = NE_Angle;
	params.NW_Angle = NW_Angle;
	params.SE_Angle = SE_Angle;
	params.SW_Angle = SW_Angle;
	params.Buffer = Buffer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateRotationRate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SlowSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlowSpeedRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastSpeedRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::CalculateRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateRotationRate");

	struct ABP_BaseCharacter_C_CalculateRotationRate_Params {
		float SlowSpeed;			//Offset: 0 | ElementSize: 4
		float SlowSpeedRate;			//Offset: 4 | ElementSize: 4
		float FastSpeed;			//Offset: 8 | ElementSize: 4
		float FastSpeedRate;			//Offset: 12 | ElementSize: 4
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	ABP_BaseCharacter_C_CalculateRotationRate_Params params;
	params.SlowSpeed = SlowSpeed;
	params.SlowSpeedRate = SlowSpeedRate;
	params.FastSpeed = FastSpeed;
	params.FastSpeedRate = FastSpeedRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseCameraSettings
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TargetCameraSettings	Type: struct FST_CameraSettings	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseCameraSettings");

	struct ABP_BaseCharacter_C_ChooseCameraSettings_Params {
		struct FST_CameraSettings TargetCameraSettings;			//Offset: 0 | ElementSize: 20
	};
	ABP_BaseCharacter_C_ChooseCameraSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (TargetCameraSettings != nullptr)
		*TargetCameraSettings = params.TargetCameraSettings;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.LerpCameraSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LerpAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetSpringArm	Type: class USpringArmComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LerpCameraSettings");

	struct ABP_BaseCharacter_C_LerpCameraSettings_Params {
		float LerpAlpha;			//Offset: 0 | ElementSize: 4
		class USpringArmComponent* TargetSpringArm;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_LerpCameraSettings_Params params;
	params.LerpAlpha = LerpAlpha;
	params.TargetSpringArm = TargetSpringArm;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Aiming Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_Aiming_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Aiming Changed");

	struct ABP_BaseCharacter_C_On_ALS_Aiming_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_Aiming_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.LimitRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimYawLimit	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::LimitRotation(float AimYawLimit, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LimitRotation");

	struct ABP_BaseCharacter_C_LimitRotation_Params {
		float AimYawLimit;			//Offset: 0 | ElementSize: 4
		float interpSpeed;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_LimitRotation_Params params;
	params.AimYawLimit = AimYawLimit;
	params.interpSpeed = interpSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseVelocity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Velocity	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChooseVelocity(struct FVector* Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseVelocity");

	struct ABP_BaseCharacter_C_ChooseVelocity_Params {
		struct FVector Velocity;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_ChooseVelocity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DebugMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DebugMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DebugMode");

	struct ABP_BaseCharacter_C_DebugMode_Params {
	};
	ABP_BaseCharacter_C_DebugMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_ViewMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_ALS_ViewMode_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_ViewMode Changed");

	struct ABP_BaseCharacter_C_On_ALS_ViewMode_Changed_Params {
	};
	ABP_BaseCharacter_C_On_ALS_ViewMode_Changed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CustomAcceleration
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CustomAcceleration() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CustomAcceleration");

	struct ABP_BaseCharacter_C_CustomAcceleration_Params {
	};
	ABP_BaseCharacter_C_CustomAcceleration_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanSprint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CanSprint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanSprint(bool* CanSprint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanSprint");

	struct ABP_BaseCharacter_C_CanSprint_Params {
		bool CanSprint;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanSprint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CanSprint != nullptr)
		*CanSprint = params.CanSprint;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RagdollRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RagdollLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ActorLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateActorLocationAndRotationInRagdoll(struct FRotator RagdollRotation, struct FVector RagdollLocation, struct FRotator* ActorRotation, struct FVector* ActorLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll");

	struct ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params {
		struct FRotator RagdollRotation;			//Offset: 0 | ElementSize: 12
		struct FVector RagdollLocation;			//Offset: 12 | ElementSize: 12
		struct FRotator ActorRotation;			//Offset: 24 | ElementSize: 12
		struct FVector ActorLocation;			//Offset: 36 | ElementSize: 12
	};
	ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params params;
	params.RagdollRotation = RagdollRotation;
	params.RagdollLocation = RagdollLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ActorRotation != nullptr)
		*ActorRotation = params.ActorRotation;
	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMovementInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Is_Forward_Axis	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayerMovementInput(bool Is_Forward_Axis) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMovementInput");

	struct ABP_BaseCharacter_C_PlayerMovementInput_Params {
		bool Is_Forward_Axis;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayerMovementInput_Params params;
	params.Is_Forward_Axis = Is_Forward_Axis;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEncumberedSpeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateEncumberedSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEncumberedSpeed");

	struct ABP_BaseCharacter_C_CalculateEncumberedSpeed_Params {
	};
	ABP_BaseCharacter_C_CalculateEncumberedSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomSkinTone
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetRandomSkinTone() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomSkinTone");

	struct ABP_BaseCharacter_C_SetRandomSkinTone_Params {
	};
	ABP_BaseCharacter_C_SetRandomSkinTone_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHoldableItemActionSpeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateHoldableItemActionSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHoldableItemActionSpeed");

	struct ABP_BaseCharacter_C_UpdateHoldableItemActionSpeed_Params {
	};
	ABP_BaseCharacter_C_UpdateHoldableItemActionSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterials
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitializeMaterials() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterials");

	struct ABP_BaseCharacter_C_InitializeMaterials_Params {
	};
	ABP_BaseCharacter_C_InitializeMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ClearMaterials
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ClearMaterials() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ClearMaterials");

	struct ABP_BaseCharacter_C_ClearMaterials_Params {
	};
	ABP_BaseCharacter_C_ClearMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialIndex
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDynamicMaterialIndex(class UMeshComponent* Mesh, int32_t* Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialIndex");

	struct ABP_BaseCharacter_C_GetDynamicMaterialIndex_Params {
		class UMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		int32_t Index;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetDynamicMaterialIndex_Params params;
	params.Mesh = Mesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Index != nullptr)
		*Index = params.Index;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialStruct
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Array_Element	Type: struct FST_MeshDynamicMaterials	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDynamicMaterialStruct(class UMeshComponent* Mesh, struct FST_MeshDynamicMaterials* Array_Element) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialStruct");

	struct ABP_BaseCharacter_C_GetDynamicMaterialStruct_Params {
		class UMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		struct FST_MeshDynamicMaterials Array_Element;			//Offset: 8 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetDynamicMaterialStruct_Params params;
	params.Mesh = Mesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialsArray
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DynamicMaterialReferences	Type: TArray<class UMaterialInstanceDynamic*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDynamicMaterialsArray(class UMeshComponent* Mesh, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialReferences) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialsArray");

	struct ABP_BaseCharacter_C_GetDynamicMaterialsArray_Params {
		class UMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		TArray<class UMaterialInstanceDynamic*> DynamicMaterialReferences;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetDynamicMaterialsArray_Params params;
	params.Mesh = Mesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (DynamicMaterialReferences != nullptr)
		*DynamicMaterialReferences = params.DynamicMaterialReferences;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetMeshMaterials
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ResetMeshMaterials(class UMeshComponent* Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ResetMeshMaterials");

	struct ABP_BaseCharacter_C_ResetMeshMaterials_Params {
		class UMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ResetMeshMaterials_Params params;
	params.Mesh = Mesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CreateNewMeshMaterials
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dye	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CreateNewMeshMaterials(class UMeshComponent* Mesh, struct FST_ColorTable Dye) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CreateNewMeshMaterials");

	struct ABP_BaseCharacter_C_CreateNewMeshMaterials_Params {
		class UMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		struct FST_ColorTable Dye;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_CreateNewMeshMaterials_Params params;
	params.Mesh = Mesh;
	params.Dye = Dye;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Range Strength
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Strength	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Update_Range_Strength(float Strength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Range Strength");

	struct ABP_BaseCharacter_C_Update_Range_Strength_Params {
		float Strength;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Update_Range_Strength_Params params;
	params.Strength = Strength;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCanPerfromHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPerfromHitAction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCanPerfromHitAction(bool CanPerfromHitAction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCanPerfromHitAction");

	struct ABP_BaseCharacter_C_SetCanPerfromHitAction_Params {
		bool CanPerfromHitAction;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Components
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Attach_Components() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Components");

	struct ABP_BaseCharacter_C_Attach_Components_Params {
	};
	ABP_BaseCharacter_C_Attach_Components_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentCameraFOV
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InFieldOfView	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCurrentCameraFOV(float InFieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentCameraFOV");

	struct ABP_BaseCharacter_C_SetCurrentCameraFOV_Params {
		float InFieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetCurrentCameraFOV_Params params;
	params.InFieldOfView = InFieldOfView;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStrengthAlpha
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateStrengthAlpha(float Alpha) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStrengthAlpha");

	struct ABP_BaseCharacter_C_UpdateStrengthAlpha_Params {
		float Alpha;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_UpdateStrengthAlpha_Params params;
	params.Alpha = Alpha;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Holster Weapon
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSwitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bIsSwitch	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsValidHeldItem	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Holster Weapon");

	struct ABP_BaseCharacter_C_Holster_Weapon_Params {
		bool IsSwitch;			//Offset: 0 | ElementSize: 1
		bool bIsSwitch;			//Offset: 1 | ElementSize: 1
		bool IsValidHeldItem;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Holster_Weapon_Params params;
	params.IsSwitch = IsSwitch;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (bIsSwitch != nullptr)
		*bIsSwitch = params.bIsSwitch;
	if (IsValidHeldItem != nullptr)
		*IsValidHeldItem = params.IsValidHeldItem;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetLookingRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
struct FRotator ABP_BaseCharacter_C::GetLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetLookingRotation");

	struct ABP_BaseCharacter_C_GetLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_GetLookingRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseLeftRightAxisInput
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::GetMouseLeftRightAxisInput() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseLeftRightAxisInput");

	struct ABP_BaseCharacter_C_GetMouseLeftRightAxisInput_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetMouseLeftRightAxisInput_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseUpDownAxisInput
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::GetMouseUpDownAxisInput() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseUpDownAxisInput");

	struct ABP_BaseCharacter_C_GetMouseUpDownAxisInput_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetMouseUpDownAxisInput_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemClass	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsOffHand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipAnimHoldable(class ABP_MasterHoldableItem_C* ItemClass, bool IsOffHand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable");

	struct ABP_BaseCharacter_C_EquipAnimHoldable_Params {
		class ABP_MasterHoldableItem_C* ItemClass;			//Offset: 0 | ElementSize: 8
		bool IsOffHand;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EquipAnimHoldable_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DespawnAnimHoldable
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HoldablesToDespawn	Type: TEnumAsByte<E_HandsForHolstering>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DespawnAnimHoldable(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DespawnAnimHoldable");

	struct ABP_BaseCharacter_C_DespawnAnimHoldable_Params {
		TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_DespawnAnimHoldable_Params params;
	params.HoldablesToDespawn = HoldablesToDespawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsMontagePlaying(const class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying");

	struct ABP_BaseCharacter_C_IsMontagePlaying_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsMontagePlaying_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetOldness(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness");

	struct ABP_BaseCharacter_C_SetOldness_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetOldness_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateOldness
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateOldness(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateOldness");

	struct ABP_BaseCharacter_C_UpdateOldness_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_UpdateOldness_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnOwnershipSwap
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewOwnership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnOwnershipSwap");

	struct ABP_BaseCharacter_C_OnOwnershipSwap_Params {
		TEnumAsByte<E_Ownership> NewOwnership;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DestroyHeldItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem");

	struct ABP_BaseCharacter_C_DestroyHeldItem_Params {
	};
	ABP_BaseCharacter_C_DestroyHeldItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DestroyOffHandItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandItem");

	struct ABP_BaseCharacter_C_DestroyOffHandItem_Params {
	};
	ABP_BaseCharacter_C_DestroyOffHandItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfUsingHands
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::CheckIfUsingHands() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfUsingHands");

	struct ABP_BaseCharacter_C_CheckIfUsingHands_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CheckIfUsingHands_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Class	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: CollisionHandlingOverride	Type: ESpawnActorCollisionHandlingMethod	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Owner	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerCharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Instigator	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Output_Get	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnHeldItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem");

	struct ABP_BaseCharacter_C_SpawnHeldItem_Params {
		class ABP_MasterHoldableItem_C* Class;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;			//Offset: 64 | ElementSize: 1
		class AActor* Owner;			//Offset: 72 | ElementSize: 8
		class ABP_BaseCharacter_C* PlayerCharacterReference;			//Offset: 80 | ElementSize: 8
		int32_t Capacity;			//Offset: 88 | ElementSize: 4
		float CurrentHP;			//Offset: 92 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 96 | ElementSize: 1
		class APawn* Instigator;			//Offset: 104 | ElementSize: 8
		class ABP_MasterHoldableItem_C* Output_Get;			//Offset: 112 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SpawnHeldItem_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;
	params.PlayerCharacterReference = PlayerCharacterReference;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Ownership = Ownership;
	params.Instigator = Instigator;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Class	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: CollisionHandlingOverride	Type: ESpawnActorCollisionHandlingMethod	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Owner	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerCharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Instigator	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Output_Get	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnOffHandItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandItem");

	struct ABP_BaseCharacter_C_SpawnOffHandItem_Params {
		class ABP_MasterHoldableItem_C* Class;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;			//Offset: 64 | ElementSize: 1
		class AActor* Owner;			//Offset: 72 | ElementSize: 8
		class ABP_BaseCharacter_C* PlayerCharacterReference;			//Offset: 80 | ElementSize: 8
		int32_t Capacity;			//Offset: 88 | ElementSize: 4
		float CurrentHP;			//Offset: 92 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 96 | ElementSize: 1
		class APawn* Instigator;			//Offset: 104 | ElementSize: 8
		class ABP_MasterHoldableItem_C* Output_Get;			//Offset: 112 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SpawnOffHandItem_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;
	params.PlayerCharacterReference = PlayerCharacterReference;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Ownership = Ownership;
	params.Instigator = Instigator;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHands
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnHands() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHands");

	struct ABP_BaseCharacter_C_SpawnHands_Params {
	};
	ABP_BaseCharacter_C_SpawnHands_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsSick
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSick	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsSick(bool IsSick) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsSick");

	struct ABP_BaseCharacter_C_SetIsSick_Params {
		bool IsSick;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetIsSick_Params params;
	params.IsSick = IsSick;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInjured
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInjured	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsInjured(bool IsInjured) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInjured");

	struct ABP_BaseCharacter_C_SetIsInjured_Params {
		bool IsInjured;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetIsInjured_Params params;
	params.IsInjured = IsInjured;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnAfterPoseChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AfterIdlePose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnAfterPoseChanged(TEnumAsByte<E_AfterIdlePose> AfterIdlePose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnAfterPoseChanged");

	struct ABP_BaseCharacter_C_OnAfterPoseChanged_Params {
		TEnumAsByte<E_AfterIdlePose> AfterIdlePose;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnAfterPoseChanged_Params params;
	params.AfterIdlePose = AfterIdlePose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckItemForInteraction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Holdable	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WantedToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedToolType, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckItemForInteraction");

	struct ABP_BaseCharacter_C_CheckItemForInteraction_Params {
		class ABP_MasterHoldableItem_C* Holdable;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> WantedToolType;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CheckItemForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedToolType = WantedToolType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonChanged");

	struct ABP_BaseCharacter_C_OnSeasonChanged_Params {
	};
	ABP_BaseCharacter_C_OnSeasonChanged_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterTypeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCharacterTypeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterTypeChanged");

	struct ABP_BaseCharacter_C_OnCharacterTypeChanged_Params {
	};
	ABP_BaseCharacter_C_OnCharacterTypeChanged_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDialogueStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted");

	struct ABP_BaseCharacter_C_OnDialogueStarted_Params {
	};
	ABP_BaseCharacter_C_OnDialogueStarted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDialogueEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded");

	struct ABP_BaseCharacter_C_OnDialogueEnded_Params {
	};
	ABP_BaseCharacter_C_OnDialogueEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCDataToSave
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCData	Type: struct FST_SAVE_NPC	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetNPCDataToSave(struct FST_SAVE_NPC* NPCData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCDataToSave");

	struct ABP_BaseCharacter_C_GetNPCDataToSave_Params {
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1160
	};
	ABP_BaseCharacter_C_GetNPCDataToSave_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (NPCData != nullptr)
		*NPCData = params.NPCData;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNPCDataFromSave
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCData	Type: struct FST_SAVE_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: ResetEQ	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetNPCDataFromSave");

	struct ABP_BaseCharacter_C_SetNPCDataFromSave_Params {
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1160
		bool ResetEQ;			//Offset: 1160 | ElementSize: 1
		struct FString SaveGameVersion;			//Offset: 1168 | ElementSize: 16
	};
	ABP_BaseCharacter_C_SetNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Destroy NPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Destroy_NPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Destroy NPC");

	struct ABP_BaseCharacter_C_Destroy_NPC_Params {
	};
	ABP_BaseCharacter_C_Destroy_NPC_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCharacterSpeedByCharacterType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateCharacterSpeedByCharacterType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCharacterSpeedByCharacterType");

	struct ABP_BaseCharacter_C_UpdateCharacterSpeedByCharacterType_Params {
	};
	ABP_BaseCharacter_C_UpdateCharacterSpeedByCharacterType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: StartVector	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Radius	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ActorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Observed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::VisibilityCheck(const struct FVector StartVector, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class AActor* ActorToIgnore, bool* Observed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck");

	struct ABP_BaseCharacter_C_VisibilityCheck_Params {
		struct FVector StartVector;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 16 | ElementSize: 16
		class AActor* ActorToIgnore;			//Offset: 32 | ElementSize: 8
		bool Observed;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_VisibilityCheck_Params params;
	params.StartVector = StartVector;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.ActorToIgnore = ActorToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Observed != nullptr)
		*Observed = params.Observed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEarMorph
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetEarMorph(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEarMorph");

	struct ABP_BaseCharacter_C_SetEarMorph_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetEarMorph_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: crouchingSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCrouchingSpeed(float* crouchingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed");

	struct ABP_BaseCharacter_C_GetCrouchingSpeed_Params {
		float crouchingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCrouchingSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (crouchingSpeed != nullptr)
		*crouchingSpeed = params.crouchingSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On Start Workbench Interaction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangeCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UseLocation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookAtBehavior	Type: TEnumAsByte<E_LookAtOptions>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On Start Workbench Interaction");

	struct ABP_BaseCharacter_C_On_Start_Workbench_Interaction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
		bool ChangeCamera;			//Offset: 28 | ElementSize: 1
		bool UseLocation;			//Offset: 29 | ElementSize: 1
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 30 | ElementSize: 1
		struct FRotator LookAtRotation;			//Offset: 32 | ElementSize: 12
	};
	ABP_BaseCharacter_C_On_Start_Workbench_Interaction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;
	params.ChangeCamera = ChangeCamera;
	params.UseLocation = UseLocation;
	params.LookAtBehavior = LookAtBehavior;
	params.LookAtRotation = LookAtRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction");

	struct ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckToSwap
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: New_House	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CanSwap	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: House1	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Family1	Type: TArray<class ABP_BaseCharacter_C*>	Flags: Parm, OutParm
// Name: House2	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Family2	Type: TArray<class ABP_BaseCharacter_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckToSwap(class ABP_MasterBuilding_C* New_House, bool* CanSwap, class ABP_MasterBuilding_C** House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C** House2, TArray<class ABP_BaseCharacter_C*>* Family2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckToSwap");

	struct ABP_BaseCharacter_C_CheckToSwap_Params {
		class ABP_MasterBuilding_C* New_House;			//Offset: 0 | ElementSize: 8
		bool CanSwap;			//Offset: 8 | ElementSize: 1
		class ABP_MasterBuilding_C* House1;			//Offset: 16 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> Family1;			//Offset: 24 | ElementSize: 16
		class ABP_MasterBuilding_C* House2;			//Offset: 40 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> Family2;			//Offset: 48 | ElementSize: 16
	};
	ABP_BaseCharacter_C_CheckToSwap_Params params;
	params.New_House = New_House;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CanSwap != nullptr)
		*CanSwap = params.CanSwap;
	if (House1 != nullptr)
		*House1 = params.House1;
	if (Family1 != nullptr)
		*Family1 = params.Family1;
	if (House2 != nullptr)
		*House2 = params.House2;
	if (Family2 != nullptr)
		*Family2 = params.Family2;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDestroyFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDestroyFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDestroyFurniture");

	struct ABP_BaseCharacter_C_OnDestroyFurniture_Params {
	};
	ABP_BaseCharacter_C_OnDestroyFurniture_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnbindFurnitureEvents
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnbindFurnitureEvents");

	struct ABP_BaseCharacter_C_UnbindFurnitureEvents_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UnbindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.BindFurnitureEvents
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BindFurnitureEvents");

	struct ABP_BaseCharacter_C_BindFurnitureEvents_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_BindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SwapHouses
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: House1	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Family1	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: House2	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Family2	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Succeed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SwapHouses(class ABP_MasterBuilding_C* House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C* House2, TArray<class ABP_BaseCharacter_C*>* Family2, bool* Succeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SwapHouses");

	struct ABP_BaseCharacter_C_SwapHouses_Params {
		class ABP_MasterBuilding_C* House1;			//Offset: 0 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> Family1;			//Offset: 8 | ElementSize: 16
		class ABP_MasterBuilding_C* House2;			//Offset: 24 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> Family2;			//Offset: 32 | ElementSize: 16
		bool Succeed;			//Offset: 48 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SwapHouses_Params params;
	params.House1 = House1;
	params.House2 = House2;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Family1 != nullptr)
		*Family1 = params.Family1;
	if (Family2 != nullptr)
		*Family2 = params.Family2;
	if (Succeed != nullptr)
		*Succeed = params.Succeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDayChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChanged");

	struct ABP_BaseCharacter_C_OnDayChanged_Params {
	};
	ABP_BaseCharacter_C_OnDayChanged_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPlayerOccupy
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnPlayerOccupy");

	struct ABP_BaseCharacter_C_OnPlayerOccupy_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnPlayerOccupy_Params params;
	params.Furniture = Furniture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomHairColor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetRandomHairColor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomHairColor");

	struct ABP_BaseCharacter_C_SetRandomHairColor_Params {
	};
	ABP_BaseCharacter_C_SetRandomHairColor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipToolForInteraction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Holdable	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WantedTool	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedTool, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipToolForInteraction");

	struct ABP_BaseCharacter_C_EquipToolForInteraction_Params {
		class ABP_MasterHoldableItem_C* Holdable;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> WantedTool;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EquipToolForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedTool = WantedTool;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentCameraFOV
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: FieldOfView	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCurrentCameraFOV(float* FieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentCameraFOV");

	struct ABP_BaseCharacter_C_GetCurrentCameraFOV_Params {
		float FieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCurrentCameraFOV_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FieldOfView != nullptr)
		*FieldOfView = params.FieldOfView;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshesFromPreset(const TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset");

	struct ABP_BaseCharacter_C_SetMeshesFromPreset_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UObject* NewClass;			//Offset: 8 | ElementSize: 8
		bool UpdateOnly;			//Offset: 16 | ElementSize: 1
		bool LoadGame;			//Offset: 17 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMeshesFromPreset_Params params;
	params.Profession = Profession;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;
	params.LoadGame = LoadGame;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Preset	Type: struct FST_NPCsPresets	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetPresetForProfession(const TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets* Preset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession");

	struct ABP_BaseCharacter_C_GetPresetForProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		struct FST_NPCsPresets Preset;			//Offset: 8 | ElementSize: 1424
	};
	ABP_BaseCharacter_C_GetPresetForProfession_Params params;
	params.Profession = Profession;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Preset != nullptr)
		*Preset = params.Preset;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BasePreset	Type: struct FST_NPCsPresets	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: PresetID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Meshes	Type: struct FST_NPCsMeshesDyes	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CombinePresets(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets BasePreset, struct FName* PresetID, struct FST_NPCsMeshesDyes* Meshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresets");

	struct ABP_BaseCharacter_C_CombinePresets_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		struct FST_NPCsPresets BasePreset;			//Offset: 8 | ElementSize: 1424
		struct FName PresetID;			//Offset: 1432 | ElementSize: 8
		struct FST_NPCsMeshesDyes Meshes;			//Offset: 1440 | ElementSize: 1360
	};
	ABP_BaseCharacter_C_CombinePresets_Params params;
	params.Profession = Profession;
	params.BasePreset = BasePreset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PresetID != nullptr)
		*PresetID = params.PresetID;
	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMeshFromPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalComponent	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mesh	Type: struct FST_NPCItemColors	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Tattoo	Type: class UTexture2D*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitializeMeshFromPreset(class USkeletalMeshComponent* SkeletalComponent, struct FST_NPCItemColors Mesh, class UTexture2D* Tattoo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMeshFromPreset");

	struct ABP_BaseCharacter_C_InitializeMeshFromPreset_Params {
		class USkeletalMeshComponent* SkeletalComponent;			//Offset: 0 | ElementSize: 8
		struct FST_NPCItemColors Mesh;			//Offset: 8 | ElementSize: 192
		class UTexture2D* Tattoo;			//Offset: 200 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InitializeMeshFromPreset_Params params;
	params.SkeletalComponent = SkeletalComponent;
	params.Mesh = Mesh;
	params.Tattoo = Tattoo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHairRow
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ST_NPCMeshesGen	Type: struct FST_NPCMeshesGen	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHairRow");

	struct ABP_BaseCharacter_C_GetHeadAndHairRow_Params {
		struct FST_NPCMeshesGen ST_NPCMeshesGen;			//Offset: 0 | ElementSize: 128
	};
	ABP_BaseCharacter_C_GetHeadAndHairRow_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ST_NPCMeshesGen != nullptr)
		*ST_NPCMeshesGen = params.ST_NPCMeshesGen;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHair
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: head	Type: class USkeletalMesh*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hair	Type: class USkeletalMesh*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetHeadAndHair(class USkeletalMesh** head, class USkeletalMesh** Hair) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHair");

	struct ABP_BaseCharacter_C_GetHeadAndHair_Params {
		class USkeletalMesh* head;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* Hair;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetHeadAndHair_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (head != nullptr)
		*head = params.head;
	if (Hair != nullptr)
		*Hair = params.Hair;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalComponent	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tattoo	Type: class UTexture2D*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent, class UTexture2D* Tattoo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials");

	struct ABP_BaseCharacter_C_InitializeComponentMaterials_Params {
		class USkeletalMeshComponent* SkeletalComponent;			//Offset: 0 | ElementSize: 8
		class UTexture2D* Tattoo;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InitializeComponentMaterials_Params params;
	params.SkeletalComponent = SkeletalComponent;
	params.Tattoo = Tattoo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDyeColor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dye	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Material	Type: class UMaterialInstanceDynamic*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDyeColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDyeColor");

	struct ABP_BaseCharacter_C_UpdateDyeColor_Params {
		struct FST_ColorTable Dye;			//Offset: 0 | ElementSize: 16
		class UMaterialInstanceDynamic* Material;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateDyeColor_Params params;
	params.Dye = Dye;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStitchColor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dye	Type: struct FST_ColorTable	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Material	Type: class UMaterialInstanceDynamic*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateStitchColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStitchColor");

	struct ABP_BaseCharacter_C_UpdateStitchColor_Params {
		struct FST_ColorTable Dye;			//Offset: 0 | ElementSize: 16
		class UMaterialInstanceDynamic* Material;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateStitchColor_Params params;
	params.Dye = Dye;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimClassForNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UObject* ABP_BaseCharacter_C::GetAnimClassForNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimClassForNPC");

	struct ABP_BaseCharacter_C_GetAnimClassForNPC_Params {
		class UObject* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetAnimClassForNPC_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDefaultFov
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InFieldOfView	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDefaultFov(float InFieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDefaultFov");

	struct ABP_BaseCharacter_C_UpdateDefaultFov_Params {
		float InFieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_UpdateDefaultFov_Params params;
	params.InFieldOfView = InFieldOfView;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SnapToSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LocationOffset	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFinalTransform	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SnapToSlot(int32_t SlotIndex, class AActor* InteractedActor, struct FVector LocationOffset, const bool IsFinalTransform, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SnapToSlot");

	struct ABP_BaseCharacter_C_SnapToSlot_Params {
		int32_t SlotIndex;			//Offset: 0 | ElementSize: 4
		class AActor* InteractedActor;			//Offset: 8 | ElementSize: 8
		struct FVector LocationOffset;			//Offset: 16 | ElementSize: 12
		bool IsFinalTransform;			//Offset: 28 | ElementSize: 1
		bool Success;			//Offset: 29 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SnapToSlot_Params params;
	params.SlotIndex = SlotIndex;
	params.InteractedActor = InteractedActor;
	params.LocationOffset = LocationOffset;
	params.IsFinalTransform = IsFinalTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsWearingCorrectPreset
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CheckProfession	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsWearingCorrectPreset(bool CheckProfession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsWearingCorrectPreset");

	struct ABP_BaseCharacter_C_IsWearingCorrectPreset_Params {
		bool CheckProfession;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsWearingCorrectPreset_Params params;
	params.CheckProfession = CheckProfession;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDrunkMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDrunkMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDrunkMovement");

	struct ABP_BaseCharacter_C_UpdateDrunkMovement_Params {
	};
	ABP_BaseCharacter_C_UpdateDrunkMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction");

	struct ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction");

	struct ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
		bool ResetCamera;			//Offset: 20 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;
	params.ResetCamera = ResetCamera;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDirection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Direction	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDirection(float* Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDirection");

	struct ABP_BaseCharacter_C_GetDirection_Params {
		float Direction;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetDirection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRowName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ChangeSex	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeName");

	struct ABP_BaseCharacter_C_ChangeName_Params {
		struct FName NewRowName;			//Offset: 0 | ElementSize: 8
		struct FText NewName;			//Offset: 8 | ElementSize: 24
		bool ChangeSex;			//Offset: 32 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangeName_Params params;
	params.NewRowName = NewRowName;
	params.NewName = NewName;
	params.ChangeSex = ChangeSex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HolsterToolsForDialogue
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hide	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HolsterToolsForDialogue(bool Hide) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HolsterToolsForDialogue");

	struct ABP_BaseCharacter_C_HolsterToolsForDialogue_Params {
		bool Hide;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HolsterToolsForDialogue_Params params;
	params.Hide = Hide;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartFurnitureInteraction");

	struct ABP_BaseCharacter_C_OnStartFurnitureInteraction_Params {
		class ABP_MasterFurniture_C* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnStartFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndFurnitureInteraction");

	struct ABP_BaseCharacter_C_OnEndFurnitureInteraction_Params {
		class ABP_MasterFurniture_C* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnEndFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GroundedRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GroundedRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GroundedRotation");

	struct ABP_BaseCharacter_C_GroundedRotation_Params {
	};
	ABP_BaseCharacter_C_GroundedRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.On MountMovementMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewMountMovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::On_MountMovementMode_Changed(TEnumAsByte<E_MovementMode> NewMountMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On MountMovementMode Changed");

	struct ABP_BaseCharacter_C_On_MountMovementMode_Changed_Params {
		TEnumAsByte<E_MovementMode> NewMountMovementMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_On_MountMovementMode_Changed_Params params;
	params.NewMountMovementMode = NewMountMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateWorkPlayRateByMoodAndSkill
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateWorkPlayRateByMoodAndSkill(TEnumAsByte<E_Profession> Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateWorkPlayRateByMoodAndSkill");

	struct ABP_BaseCharacter_C_CalculateWorkPlayRateByMoodAndSkill_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CalculateWorkPlayRateByMoodAndSkill_Params params;
	params.Profession = Profession;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CacheProfessionPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CacheProfessionPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CacheProfessionPreset");

	struct ABP_BaseCharacter_C_CacheProfessionPreset_Params {
	};
	ABP_BaseCharacter_C_CacheProfessionPreset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ClearCachedProfessionPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ClearCachedProfessionPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ClearCachedProfessionPreset");

	struct ABP_BaseCharacter_C_ClearCachedProfessionPreset_Params {
	};
	ABP_BaseCharacter_C_ClearCachedProfessionPreset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddSkillsToApprentices
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddSkillsToApprentices");

	struct ABP_BaseCharacter_C_AddSkillsToApprentices_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AddSkillsToApprentices_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.Profession = Profession;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckLocationAvailability
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CorrectLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckLocationAvailability(struct FVector CheckLocation, class AActor* ActorToIgnore, struct FVector* CorrectLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckLocationAvailability");

	struct ABP_BaseCharacter_C_CheckLocationAvailability_Params {
		struct FVector CheckLocation;			//Offset: 0 | ElementSize: 12
		class AActor* ActorToIgnore;			//Offset: 16 | ElementSize: 8
		struct FVector CorrectLocation;			//Offset: 24 | ElementSize: 12
	};
	ABP_BaseCharacter_C_CheckLocationAvailability_Params params;
	params.CheckLocation = CheckLocation;
	params.ActorToIgnore = ActorToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CorrectLocation != nullptr)
		*CorrectLocation = params.CorrectLocation;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.MeshSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::MeshSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.MeshSettings");

	struct ABP_BaseCharacter_C_MeshSettings_Params {
	};
	ABP_BaseCharacter_C_MeshSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsRagdolling
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsRagdolling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsRagdolling");

	struct ABP_BaseCharacter_C_IsRagdolling_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsRagdolling_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHairMovement
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateHairMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHairMovement");

	struct ABP_BaseCharacter_C_UpdateHairMovement_Params {
	};
	ABP_BaseCharacter_C_UpdateHairMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Get ALS_Stance BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: stance	Type: TEnumAsByte<E_Stance>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Get_ALS_Stance_BPI(TEnumAsByte<E_Stance>* stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get ALS_Stance BPI");

	struct ABP_BaseCharacter_C_Get_ALS_Stance_BPI_Params {
		TEnumAsByte<E_Stance> stance;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Get_ALS_Stance_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (stance != nullptr)
		*stance = params.stance;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Return_Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsAnyMontageFromMapPlaying(bool* Return_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsAnyMontageFromMapPlaying");

	struct ABP_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params {
		bool Return_Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentPickUpAnim
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PickUpMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentPickUpAnim");

	struct ABP_BaseCharacter_C_GetCurrentPickUpAnim_Params {
		class UAnimMontage* PickUpMontage;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCurrentPickUpAnim_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PickUpMontage != nullptr)
		*PickUpMontage = params.PickUpMontage;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfession
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetProfession(TEnumAsByte<E_Profession>* Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfession");

	struct ABP_BaseCharacter_C_GetProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetProfession_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Profession != nullptr)
		*Profession = params.Profession;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadTransform
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetHeadTransform(struct FTransform* HeadTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadTransform");

	struct ABP_BaseCharacter_C_GetHeadTransform_Params {
		struct FTransform HeadTransform;			//Offset: 0 | ElementSize: 48
	};
	ABP_BaseCharacter_C_GetHeadTransform_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HeadTransform != nullptr)
		*HeadTransform = params.HeadTransform;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TakeOutDuration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, float* Duration, float* TakeOutDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation");

	struct ABP_BaseCharacter_C_PlayHolsterAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		float Duration;			//Offset: 8 | ElementSize: 4
		float TakeOutDuration;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayHolsterAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (TakeOutDuration != nullptr)
		*TakeOutDuration = params.TakeOutDuration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetBaseCharacterWorldLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetBaseCharacterWorldLocation(struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetBaseCharacterWorldLocation");

	struct ABP_BaseCharacter_C_GetBaseCharacterWorldLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_GetBaseCharacterWorldLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInDialogue_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInDialogue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsInDialogue_BPI(bool* IsInDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInDialogue_BPI");

	struct ABP_BaseCharacter_C_GetIsInDialogue_BPI_Params {
		bool IsInDialogue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsInDialogue_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsInDialogue != nullptr)
		*IsInDialogue = params.IsInDialogue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfessionData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetProfessionData(struct FST_Profession* ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfessionData");

	struct ABP_BaseCharacter_C_GetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	ABP_BaseCharacter_C_GetProfessionData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Type	Type: TEnumAsByte<E_MountAnimType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayMountAnimation(EMountingDirection Position, TEnumAsByte<E_MountAnimType> Type, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountAnimation");

	struct ABP_BaseCharacter_C_PlayMountAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_MountAnimType> Type;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayMountAnimation_Params params;
	params.Position = Position;
	params.Type = Type;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPhysicsHandle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PhysicsHandle	Type: class UPhysicsHandleComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPhysicsHandle");

	struct ABP_BaseCharacter_C_GetPhysicsHandle_Params {
		class UPhysicsHandleComponent* PhysicsHandle;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetPhysicsHandle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionEndpoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionEndpoint");

	struct ABP_BaseCharacter_C_GetInteractionEndpoint_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
		struct FVector EndPoint;			//Offset: 4 | ElementSize: 12
	};
	ABP_BaseCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimalRepelStat BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalRepel	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetAnimalRepelStat_BPI(bool* AnimalRepel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimalRepelStat BPI");

	struct ABP_BaseCharacter_C_GetAnimalRepelStat_BPI_Params {
		bool AnimalRepel;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetAnimalRepelStat_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (AnimalRepel != nullptr)
		*AnimalRepel = params.AnimalRepel;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayAttackAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayAttackAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayAttackAnimation");

	struct ABP_BaseCharacter_C_PlayAttackAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayAttackAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDodgeAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: TEnumAsByte<E_AnimDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Movement	Type: TEnumAsByte<E_AnimMovement>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayDodgeAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, TEnumAsByte<E_AnimDirection> Direction, TEnumAsByte<E_AnimMovement> Movement, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDodgeAnimation");

	struct ABP_BaseCharacter_C_PlayDodgeAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		TEnumAsByte<E_AnimDirection> Direction;			//Offset: 12 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> Movement;			//Offset: 13 | ElementSize: 1
		float Duration;			//Offset: 16 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayDodgeAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;
	params.Direction = Direction;
	params.Movement = Movement;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayBlockAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayBlockAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayBlockAnimation");

	struct ABP_BaseCharacter_C_PlayBlockAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayBlockAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHitAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayHitAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHitAnimation");

	struct ABP_BaseCharacter_C_PlayHitAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayHitAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType BPI");

	struct ABP_BaseCharacter_C_GetToolType_BPI_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetToolType_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ToolType != nullptr)
		*ToolType = params.ToolType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsBlocking BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsBlocking_BPI(bool* Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsBlocking BPI");

	struct ABP_BaseCharacter_C_GetIsBlocking_BPI_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsBlocking_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Blocking != nullptr)
		*Blocking = params.Blocking;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCraftingAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CraftingMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoopWait	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoopEnd	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, bool FastAnim, class UAnimMontage** CraftingMontage, float* Duration, float* Loop, float* LoopWait, float* LoopEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCraftingAnimation");

	struct ABP_BaseCharacter_C_GetCraftingAnimation_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		bool FastAnim;			//Offset: 1 | ElementSize: 1
		class UAnimMontage* CraftingMontage;			//Offset: 8 | ElementSize: 8
		float Duration;			//Offset: 16 | ElementSize: 4
		float Loop;			//Offset: 20 | ElementSize: 4
		float LoopWait;			//Offset: 24 | ElementSize: 4
		float LoopEnd;			//Offset: 28 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.FastAnim = FastAnim;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CraftingMontage != nullptr)
		*CraftingMontage = params.CraftingMontage;
	if (Duration != nullptr)
		*Duration = params.Duration;
	if (Loop != nullptr)
		*Loop = params.Loop;
	if (LoopWait != nullptr)
		*LoopWait = params.LoopWait;
	if (LoopEnd != nullptr)
		*LoopEnd = params.LoopEnd;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentCraftingMontage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CraftingMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCurrentCraftingMontage(class UAnimMontage** CraftingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentCraftingMontage");

	struct ABP_BaseCharacter_C_GetCurrentCraftingMontage_Params {
		class UAnimMontage* CraftingMontage;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCurrentCraftingMontage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CraftingMontage != nullptr)
		*CraftingMontage = params.CraftingMontage;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterOwnership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterOwnership(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterOwnership");

	struct ABP_BaseCharacter_C_GetCharacterOwnership_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetCharacterOwnership_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetEnableIK_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetEnableIK_BPI(bool* IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetEnableIK_BPI");

	struct ABP_BaseCharacter_C_GetEnableIK_BPI_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetEnableIK_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IK_Enabled != nullptr)
		*IK_Enabled = params.IK_Enabled;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMass
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetMass(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMass");

	struct ABP_BaseCharacter_C_GetMass_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetMass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanPushOthers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPushOthers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanPushOthers(bool* CanPushOthers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanPushOthers");

	struct ABP_BaseCharacter_C_CanPushOthers_Params {
		bool CanPushOthers;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanPushOthers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CanPushOthers != nullptr)
		*CanPushOthers = params.CanPushOthers;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMesh_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetMesh_BPI(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMesh_BPI");

	struct ABP_BaseCharacter_C_GetMesh_BPI_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetMesh_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMoving_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMoving	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsMoving_BPI(bool* IsMoving) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMoving_BPI");

	struct ABP_BaseCharacter_C_IsMoving_BPI_Params {
		bool IsMoving;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsMoving_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPushAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayPushAnimation(float PlayRate, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPushAnimation");

	struct ABP_BaseCharacter_C_PlayPushAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		int32_t animationId;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlayPushAnimation_Params params;
	params.PlayRate = PlayRate;
	params.animationId = animationId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetTime(struct FST_Time* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetTime");

	struct ABP_BaseCharacter_C_GetTime_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterStamina_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxStamina	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterStamina_BPI(float* Stamina, float* MaxStamina) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterStamina_BPI");

	struct ABP_BaseCharacter_C_GetCharacterStamina_BPI_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		float MaxStamina;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCharacterStamina_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Stamina != nullptr)
		*Stamina = params.Stamina;
	if (MaxStamina != nullptr)
		*MaxStamina = params.MaxStamina;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterHealth_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Health	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxHealth	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterHealth_BPI(float* Health, float* MaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterHealth_BPI");

	struct ABP_BaseCharacter_C_GetCharacterHealth_BPI_Params {
		float Health;			//Offset: 0 | ElementSize: 4
		float MaxHealth;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCharacterHealth_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Health != nullptr)
		*Health = params.Health;
	if (MaxHealth != nullptr)
		*MaxHealth = params.MaxHealth;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseStamina_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dirtiness	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DecreaseStamina_BPI(float Stamina, bool Dirtiness, bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseStamina_BPI");

	struct ABP_BaseCharacter_C_DecreaseStamina_BPI_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		bool Dirtiness;			//Offset: 4 | ElementSize: 1
		bool Enough;			//Offset: 5 | ElementSize: 1
	};
	ABP_BaseCharacter_C_DecreaseStamina_BPI_Params params;
	params.Stamina = Stamina;
	params.Dirtiness = Dirtiness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCount
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractCount(int32_t* Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCount");

	struct ABP_BaseCharacter_C_GetInteractCount_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetInteractCount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Count != nullptr)
		*Count = params.Count;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool");

	struct ABP_BaseCharacter_C_GetInteractTool_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Tool != nullptr)
		*Tool = params.Tool;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractable
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
void ABP_BaseCharacter_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractable");

	struct ABP_BaseCharacter_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction");

	struct ABP_BaseCharacter_C_GetInteractAction_Params {
		struct FText InteractActionText;			//Offset: 0 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 24 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetInteractAction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractName");

	struct ABP_BaseCharacter_C_GetInteractName_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FText InteractName;			//Offset: 8 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeldItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeldItem");

	struct ABP_BaseCharacter_C_GetHeldItem_Params {
		class ABP_MasterHoldableItem_C* HeldItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetHeldItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetResourceType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetResourceType(TEnumAsByte<E_Resources>* ResourceType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetResourceType");

	struct ABP_BaseCharacter_C_GetResourceType_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetResourceType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckOccupied
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckOccupied(class APawn** Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckOccupied");

	struct ABP_BaseCharacter_C_CheckOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_CheckOccupied_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Character != nullptr)
		*Character = params.Character;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable");

	struct ABP_BaseCharacter_C_IsToolInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetNPCInteractTime(float* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractTime");

	struct ABP_BaseCharacter_C_GetNPCInteractTime_Params {
		float Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetNPCInteractTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable_UI");

	struct ABP_BaseCharacter_C_IsToolInteractable_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BagMode	Type: TEnumAsByte<E_BagMode>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool, TEnumAsByte<E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications>* BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool_UI");

	struct ABP_BaseCharacter_C_GetInteractTool_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagMode;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 10 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFluidType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FluidType	Type: TEnumAsByte<E_Fluids>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetFluidType(TEnumAsByte<E_Fluids>* FluidType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetFluidType");

	struct ABP_BaseCharacter_C_GetFluidType_Params {
		TEnumAsByte<E_Fluids> FluidType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetFluidType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FluidType != nullptr)
		*FluidType = params.FluidType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractResources
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Show	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Resources	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractResources");

	struct ABP_BaseCharacter_C_GetInteractResources_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		TArray<struct FST_ItemResource> Resources;			//Offset: 16 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTitle
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
void ABP_BaseCharacter_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTitle");

	struct ABP_BaseCharacter_C_GetInteractTitle_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		struct FText Title;			//Offset: 16 | ElementSize: 24
		bool ShowAdditionalTitle1;			//Offset: 40 | ElementSize: 1
		struct FText AdditionalTitleText1;			//Offset: 48 | ElementSize: 24
		bool ShowAdditionalTitle2;			//Offset: 72 | ElementSize: 1
		struct FText AdditionalTitleText2;			//Offset: 80 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetInteractTitle_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOwnershipType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetOwnershipType(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOwnershipType");

	struct ABP_BaseCharacter_C_GetOwnershipType_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetOwnershipType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolNeeded
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckTools	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolNeeded");

	struct ABP_BaseCharacter_C_IsToolNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckTools;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractCondition
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckCondition	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractCondition");

	struct ABP_BaseCharacter_C_IsInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckCondition;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCondition
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
void ABP_BaseCharacter_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCondition");

	struct ABP_BaseCharacter_C_GetInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		float Condition;			//Offset: 144 | ElementSize: 4
		bool CustomText;			//Offset: 148 | ElementSize: 1
		struct FText Text;			//Offset: 152 | ElementSize: 24
		bool CustomColor;			//Offset: 176 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 180 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOff-HandItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Off_HandItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOff-HandItem");

	struct ABP_BaseCharacter_C_GetOff_HandItem_Params {
		class ABP_MasterHoldableItem_C* Off_HandItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetOff_HandItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractionDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionDistance");

	struct ABP_BaseCharacter_C_GetInteractionDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetInteractionDistance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetID(struct FName* ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetID");

	struct ABP_BaseCharacter_C_GetID_Params {
		struct FName ID;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ID != nullptr)
		*ID = params.ID;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFishData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemResource	Flags: Parm, OutParm, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetFishData");

	struct ABP_BaseCharacter_C_GetFishData_Params {
		struct FST_ItemResource Item;			//Offset: 0 | ElementSize: 24
		struct FTransform Transform;			//Offset: 32 | ElementSize: 48
	};
	ABP_BaseCharacter_C_GetFishData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractAdditionalStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShowStatus	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractAdditionalStatus");

	struct ABP_BaseCharacter_C_IsInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool ShowStatus;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAdditionalStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomColor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Status	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAdditionalStatus");

	struct ABP_BaseCharacter_C_GetInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CustomColor;			//Offset: 8 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		struct FText Status;			//Offset: 32 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
	if (Status != nullptr)
		*Status = params.Status;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemInteractable");

	struct ABP_BaseCharacter_C_IsItemInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractItem");

	struct ABP_BaseCharacter_C_GetInteractItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FDataTableRowHandle ItemHandler;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemNeeded
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckItems	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemNeeded");

	struct ABP_BaseCharacter_C_IsItemNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckItems;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsGrabbable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Grabbable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsGrabbable(bool* Grabbable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsGrabbable");

	struct ABP_BaseCharacter_C_IsGrabbable_Params {
		bool Grabbable;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsGrabbable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolActivityType	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetToolType(TEnumAsByte<E_Tools>* ToolType, TEnumAsByte<E_Tools_Activity>* ToolActivityType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType");

	struct ABP_BaseCharacter_C_GetToolType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> ToolActivityType;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetToolType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ToolType != nullptr)
		*ToolType = params.ToolType;
	if (ToolActivityType != nullptr)
		*ToolActivityType = params.ToolActivityType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPC_Interactable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Interactable	Type: TArray<bool>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetNPC_Interactable(TArray<bool>* NPC_Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPC_Interactable");

	struct ABP_BaseCharacter_C_GetNPC_Interactable_Params {
		TArray<bool> NPC_Interactable;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetNPC_Interactable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (NPC_Interactable != nullptr)
		*NPC_Interactable = params.NPC_Interactable;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMounting
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMounting");

	struct ABP_BaseCharacter_C_StartPawnMounting_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartPawnMounting_Params params;
	params.newMountActor = newMountActor;
	params.linkedActor = linkedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnDismounting
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: oldPawnMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnDismounting");

	struct ABP_BaseCharacter_C_StartPawnDismounting_Params {
		class AActor* oldPawnMount;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartPawnDismounting_Params params;
	params.oldPawnMount = oldPawnMount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRiderCollisionEnabled
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: shouldEnable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::SetRiderCollisionEnabled(bool shouldEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRiderCollisionEnabled");

	struct ABP_BaseCharacter_C_SetRiderCollisionEnabled_Params {
		bool shouldEnable;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetRiderCollisionEnabled_Params params;
	params.shouldEnable = shouldEnable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMoveToSeatAnimation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: currentSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: oldSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::PlayMoveToSeatAnimation(int32_t currentSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMoveToSeatAnimation");

	struct ABP_BaseCharacter_C_PlayMoveToSeatAnimation_Params {
		int32_t currentSeatId;			//Offset: 0 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 4 | ElementSize: 4
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayMoveToSeatAnimation_Params params;
	params.currentSeatId = currentSeatId;
	params.oldSeatId = oldSeatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::PlayMountingAnimation(EMountingDirection Position) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation");

	struct ABP_BaseCharacter_C_PlayMountingAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayMountingAnimation_Params params;
	params.Position = Position;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDismountingAnimation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::PlayDismountingAnimation(EMountingDirection Position) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDismountingAnimation");

	struct ABP_BaseCharacter_C_PlayDismountingAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayDismountingAnimation_Params params;
	params.Position = Position;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMoveToMountingLocationCompleted
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::OnMoveToMountingLocationCompleted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMoveToMountingLocationCompleted");

	struct ABP_BaseCharacter_C_OnMoveToMountingLocationCompleted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnMoveToMountingLocationCompleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingPawnFinished
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::OnMountingPawnFinished(class AActor* newMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingPawnFinished");

	struct ABP_BaseCharacter_C_OnMountingPawnFinished_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingPawnFinished
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: oldPawnMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::OnDismountingPawnFinished(class AActor* oldPawnMount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingPawnFinished");

	struct ABP_BaseCharacter_C_OnDismountingPawnFinished_Params {
		class AActor* oldPawnMount;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnChangeToNewSeatCompleted
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::OnChangeToNewSeatCompleted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnChangeToNewSeatCompleted");

	struct ABP_BaseCharacter_C_OnChangeToNewSeatCompleted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnChangeToNewSeatCompleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.MoveToMountingLocation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.MoveToMountingLocation");

	struct ABP_BaseCharacter_C_MoveToMountingLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 12 | ElementSize: 12
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	ABP_BaseCharacter_C_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsSeatedOnMount() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount");

	struct ABP_BaseCharacter_C_IsSeatedOnMount_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsSeatedOnMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsDriver() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver");

	struct ABP_BaseCharacter_C_IsDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_BaseCharacter_C::GetSeatId() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId");

	struct ABP_BaseCharacter_C_GetSeatId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetSeatId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMeshComponent* ABP_BaseCharacter_C::GetRiderMesh() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh");

	struct ABP_BaseCharacter_C_GetRiderMesh_Params {
		class UMeshComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetRiderMesh_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMountRiderComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMountRiderComponent* ABP_BaseCharacter_C::GetMountRiderComponent() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent");

	struct ABP_BaseCharacter_C_GetMountRiderComponent_Params {
		class UMountRiderComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetMountRiderComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class USkeletalMeshComponent*>	Flags: Parm, OutParm, ReturnParm, ContainsInstancedReference
/////////////////////////////////////////////
TArray<class USkeletalMeshComponent*> ABP_BaseCharacter_C::GetAllRiderSkeletalMeshes() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes");

	struct ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params {
		TArray<class USkeletalMeshComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMountingToSeat
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::StartPawnMountingToSeat(class AActor* newMountActor, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMountingToSeat");

	struct ABP_BaseCharacter_C_StartPawnMountingToSeat_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartPawnMountingToSeat_Params params;
	params.newMountActor = newMountActor;
	params.linkedActor = linkedActor;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToMount");

	struct ABP_BaseCharacter_C_PrepareToMount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToDismount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToDismount");

	struct ABP_BaseCharacter_C_PrepareToDismount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsMounted() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted");

	struct ABP_BaseCharacter_C_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsMounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class APawn* ABP_BaseCharacter_C::GetCharacterPawn() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn");

	struct ABP_BaseCharacter_C_GetCharacterPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AActor* ABP_BaseCharacter_C::GetCharacterMount() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount");

	struct ABP_BaseCharacter_C_GetCharacterMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AController* ABP_BaseCharacter_C::GetCharacterController() const {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController");

	struct ABP_BaseCharacter_C_GetCharacterController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInCombat BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InCombat	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsInCombat_BPI(bool* InCombat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInCombat BPI");

	struct ABP_BaseCharacter_C_IsInCombat_BPI_Params {
		bool InCombat;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsInCombat_BPI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InCombat != nullptr)
		*InCombat = params.InCombat;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDistance");

	struct ABP_BaseCharacter_C_GetDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetDistance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOptimalizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetOptimalizationStage(int32_t* Stage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOptimalizationStage");

	struct ABP_BaseCharacter_C_GetOptimalizationStage_Params {
		int32_t Stage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetOptimalizationStage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Stage != nullptr)
		*Stage = params.Stage;
}

/////////////////////////////////////////////
// ComponentDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.ComponentDelegateBinding_1
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ComponentDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("ComponentDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.ComponentDelegateBinding_1");

	struct ABP_BaseCharacter_C_ComponentDelegateBinding_1_Params {
	};
	ABP_BaseCharacter_C_ComponentDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_3
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CurveFloat_3() {
	static auto fn = UObject::FindObject<UFunction>("CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_3");

	struct ABP_BaseCharacter_C_CurveFloat_3_Params {
	};
	ABP_BaseCharacter_C_CurveFloat_3_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_4
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CurveFloat_4() {
	static auto fn = UObject::FindObject<UFunction>("CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_4");

	struct ABP_BaseCharacter_C_CurveFloat_4_Params {
	};
	ABP_BaseCharacter_C_CurveFloat_4_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_3_5
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CurveFloat_3_5() {
	static auto fn = UObject::FindObject<UFunction>("CurveFloat BP_BaseCharacter.BP_BaseCharacter_C.CurveFloat_3_5");

	struct ABP_BaseCharacter_C_CurveFloat_3_5_Params {
	};
	ABP_BaseCharacter_C_CurveFloat_3_5_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// InputAxisDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.InputAxisDelegateBinding_1
// Flags: Native, NetResponse, MulticastDelegate, Private, NetClient, DLLImport, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InputAxisDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputAxisDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.InputAxisDelegateBinding_1");

	struct ABP_BaseCharacter_C_InputAxisDelegateBinding_1_Params {
	};
	ABP_BaseCharacter_C_InputAxisDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.Blinking_Template
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Blinking_Template() {
	static auto fn = UObject::FindObject<UFunction>("TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.Blinking_Template");

	struct ABP_BaseCharacter_C_Blinking_Template_Params {
	};
	ABP_BaseCharacter_C_Blinking_Template_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL_Template
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EyesStateTL_Template() {
	static auto fn = UObject::FindObject<UFunction>("TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL_Template");

	struct ABP_BaseCharacter_C_EyesStateTL_Template_Params {
	};
	ABP_BaseCharacter_C_EyesStateTL_Template_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline_Template
// Flags: 
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFightingTimeline_Template() {
	static auto fn = UObject::FindObject<UFunction>("TimelineTemplate BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline_Template");

	struct ABP_BaseCharacter_C_FistFightingTimeline_Template_Params {
	};
	ABP_BaseCharacter_C_FistFightingTimeline_Template_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}