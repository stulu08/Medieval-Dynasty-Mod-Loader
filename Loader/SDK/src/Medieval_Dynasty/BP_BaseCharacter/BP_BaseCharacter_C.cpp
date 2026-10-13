#include "../SDK.h"
#include "BP_BaseCharacter_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_BaseCharacter_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 1264);
}
struct FPointerToUberGraphFrame* ABP_BaseCharacter_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 1264);
}
void ABP_BaseCharacter_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of CollisionShape
// Declaration: class UBoxComponent* CollisionShape
class UBoxComponent* ABP_BaseCharacter_C::M_GetCollisionShape() const {
	return Read<class UBoxComponent*>((byte*)this + 1272);
}
class UBoxComponent** ABP_BaseCharacter_C::M_PtrGetCollisionShape() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 1272);
}
void ABP_BaseCharacter_C::M_SetCollisionShape(const class UBoxComponent*& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of Collision
// Declaration: class UCollisionComponent* Collision
class UCollisionComponent* ABP_BaseCharacter_C::M_GetCollision() const {
	return Read<class UCollisionComponent*>((byte*)this + 1280);
}
class UCollisionComponent** ABP_BaseCharacter_C::M_PtrGetCollision() {
	return reinterpret_cast<class UCollisionComponent**>((byte*)this + 1280);
}
void ABP_BaseCharacter_C::M_SetCollision(const class UCollisionComponent*& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of PerceptionStimuliSource
// Declaration: class UPerceptionStimuliSourceComponent* PerceptionStimuliSource
class UPerceptionStimuliSourceComponent* ABP_BaseCharacter_C::M_GetPerceptionStimuliSource() const {
	return Read<class UPerceptionStimuliSourceComponent*>((byte*)this + 1288);
}
class UPerceptionStimuliSourceComponent** ABP_BaseCharacter_C::M_PtrGetPerceptionStimuliSource() {
	return reinterpret_cast<class UPerceptionStimuliSourceComponent**>((byte*)this + 1288);
}
void ABP_BaseCharacter_C::M_SetPerceptionStimuliSource(const class UPerceptionStimuliSourceComponent*& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of Perception
// Declaration: class UPerceptionComponent* Perception
class UPerceptionComponent* ABP_BaseCharacter_C::M_GetPerception() const {
	return Read<class UPerceptionComponent*>((byte*)this + 1296);
}
class UPerceptionComponent** ABP_BaseCharacter_C::M_PtrGetPerception() {
	return reinterpret_cast<class UPerceptionComponent**>((byte*)this + 1296);
}
void ABP_BaseCharacter_C::M_SetPerception(const class UPerceptionComponent*& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of BP_AquaticInteractionLeftHand
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionLeftHand
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionLeftHand() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1304);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionLeftHand() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1304);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionLeftHand(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of UI_Inspector
// Declaration: class UWidgetComponent* UI_Inspector
class UWidgetComponent* ABP_BaseCharacter_C::M_GetUI_Inspector() const {
	return Read<class UWidgetComponent*>((byte*)this + 1312);
}
class UWidgetComponent** ABP_BaseCharacter_C::M_PtrGetUI_Inspector() {
	return reinterpret_cast<class UWidgetComponent**>((byte*)this + 1312);
}
void ABP_BaseCharacter_C::M_SetUI_Inspector(const class UWidgetComponent*& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of BP_AquaticInteractionLeftFoot
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionLeftFoot
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionLeftFoot() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1320);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionLeftFoot() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1320);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionLeftFoot(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of BP_AquaticInteractionRightFoot
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionRightFoot
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionRightFoot() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1328);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionRightFoot() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1328);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionRightFoot(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of BP_AquaticInteraction
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteraction
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteraction() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1336);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteraction() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1336);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteraction(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of BP_AquaticInteractionRightHand
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteractionRightHand
class UBP_AquaticInteraction_C* ABP_BaseCharacter_C::M_GetBP_AquaticInteractionRightHand() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 1344);
}
class UBP_AquaticInteraction_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticInteractionRightHand() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 1344);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticInteractionRightHand(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of Beard
// Declaration: class USkeletalMeshComponent* Beard
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetBeard() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1352);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetBeard() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1352);
}
void ABP_BaseCharacter_C::M_SetBeard(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of Hat
// Declaration: class USkeletalMeshComponent* Hat
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHat() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1360);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHat() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1360);
}
void ABP_BaseCharacter_C::M_SetHat(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of SKModular
// Declaration: class USKModularComponent* SKModular
class USKModularComponent* ABP_BaseCharacter_C::M_GetSKModular() const {
	return Read<class USKModularComponent*>((byte*)this + 1368);
}
class USKModularComponent** ABP_BaseCharacter_C::M_PtrGetSKModular() {
	return reinterpret_cast<class USKModularComponent**>((byte*)this + 1368);
}
void ABP_BaseCharacter_C::M_SetSKModular(const class USKModularComponent*& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of BP_CombatComponent
// Declaration: class UBP_CombatComponent_C* BP_CombatComponent
class UBP_CombatComponent_C* ABP_BaseCharacter_C::M_GetBP_CombatComponent() const {
	return Read<class UBP_CombatComponent_C*>((byte*)this + 1376);
}
class UBP_CombatComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_CombatComponent() {
	return reinterpret_cast<class UBP_CombatComponent_C**>((byte*)this + 1376);
}
void ABP_BaseCharacter_C::M_SetBP_CombatComponent(const class UBP_CombatComponent_C*& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of MountRider
// Declaration: class UMountRiderComponent* MountRider
class UMountRiderComponent* ABP_BaseCharacter_C::M_GetMountRider() const {
	return Read<class UMountRiderComponent*>((byte*)this + 1384);
}
class UMountRiderComponent** ABP_BaseCharacter_C::M_PtrGetMountRider() {
	return reinterpret_cast<class UMountRiderComponent**>((byte*)this + 1384);
}
void ABP_BaseCharacter_C::M_SetMountRider(const class UMountRiderComponent*& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of Hair
// Declaration: class USkeletalMeshComponent* Hair
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetHair() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1392);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetHair() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1392);
}
void ABP_BaseCharacter_C::M_SetHair(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of BP_AquaticBuoyancy
// Declaration: class UBP_AquaticBuoyancy_C* BP_AquaticBuoyancy
class UBP_AquaticBuoyancy_C* ABP_BaseCharacter_C::M_GetBP_AquaticBuoyancy() const {
	return Read<class UBP_AquaticBuoyancy_C*>((byte*)this + 1400);
}
class UBP_AquaticBuoyancy_C** ABP_BaseCharacter_C::M_PtrGetBP_AquaticBuoyancy() {
	return reinterpret_cast<class UBP_AquaticBuoyancy_C**>((byte*)this + 1400);
}
void ABP_BaseCharacter_C::M_SetBP_AquaticBuoyancy(const class UBP_AquaticBuoyancy_C*& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of BP_StageInteractionComponent
// Declaration: class UBP_StageInteractionComponent_C* BP_StageInteractionComponent
class UBP_StageInteractionComponent_C* ABP_BaseCharacter_C::M_GetBP_StageInteractionComponent() const {
	return Read<class UBP_StageInteractionComponent_C*>((byte*)this + 1408);
}
class UBP_StageInteractionComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_StageInteractionComponent() {
	return reinterpret_cast<class UBP_StageInteractionComponent_C**>((byte*)this + 1408);
}
void ABP_BaseCharacter_C::M_SetBP_StageInteractionComponent(const class UBP_StageInteractionComponent_C*& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of Torso
// Declaration: class USkeletalMeshComponent* Torso
class USkeletalMeshComponent* ABP_BaseCharacter_C::M_GetTorso() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 1416);
}
class USkeletalMeshComponent** ABP_BaseCharacter_C::M_PtrGetTorso() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 1416);
}
void ABP_BaseCharacter_C::M_SetTorso(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of BP_CharacterStatsComponent
// Declaration: class UBP_CharacterStatsComponent_C* BP_CharacterStatsComponent
class UBP_CharacterStatsComponent_C* ABP_BaseCharacter_C::M_GetBP_CharacterStatsComponent() const {
	return Read<class UBP_CharacterStatsComponent_C*>((byte*)this + 1424);
}
class UBP_CharacterStatsComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_CharacterStatsComponent() {
	return reinterpret_cast<class UBP_CharacterStatsComponent_C**>((byte*)this + 1424);
}
void ABP_BaseCharacter_C::M_SetBP_CharacterStatsComponent(const class UBP_CharacterStatsComponent_C*& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of BP_RelationsComponent
// Declaration: class UBP_CharacterRelationsComponent_C* BP_RelationsComponent
class UBP_CharacterRelationsComponent_C* ABP_BaseCharacter_C::M_GetBP_RelationsComponent() const {
	return Read<class UBP_CharacterRelationsComponent_C*>((byte*)this + 1432);
}
class UBP_CharacterRelationsComponent_C** ABP_BaseCharacter_C::M_PtrGetBP_RelationsComponent() {
	return reinterpret_cast<class UBP_CharacterRelationsComponent_C**>((byte*)this + 1432);
}
void ABP_BaseCharacter_C::M_SetBP_RelationsComponent(const class UBP_CharacterRelationsComponent_C*& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of InventoryComponent
// Declaration: class UInventoryComponent_C* InventoryComponent
class UInventoryComponent_C* ABP_BaseCharacter_C::M_GetInventoryComponent() const {
	return Read<class UInventoryComponent_C*>((byte*)this + 1440);
}
class UInventoryComponent_C** ABP_BaseCharacter_C::M_PtrGetInventoryComponent() {
	return reinterpret_cast<class UInventoryComponent_C**>((byte*)this + 1440);
}
void ABP_BaseCharacter_C::M_SetInventoryComponent(const class UInventoryComponent_C*& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of AIPerceptionStimuliSource
// Declaration: class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource
class UAIPerceptionStimuliSourceComponent* ABP_BaseCharacter_C::M_GetAIPerceptionStimuliSource() const {
	return Read<class UAIPerceptionStimuliSourceComponent*>((byte*)this + 1448);
}
class UAIPerceptionStimuliSourceComponent** ABP_BaseCharacter_C::M_PtrGetAIPerceptionStimuliSource() {
	return reinterpret_cast<class UAIPerceptionStimuliSourceComponent**>((byte*)this + 1448);
}
void ABP_BaseCharacter_C::M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99
// Declaration: float EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99
float ABP_BaseCharacter_C::M_GetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() const {
	return Read<float>((byte*)this + 1456);
}
float* ABP_BaseCharacter_C::M_PtrGetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() {
	return reinterpret_cast<float*>((byte*)this + 1456);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99(const float& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99
// Declaration: TEnumAsByte<ETimelineDirection> EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1460);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1460);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1460, value);
}
// Member Getter and Setter of EyesStateTL
// Declaration: class UTimelineComponent* EyesStateTL
class UTimelineComponent* ABP_BaseCharacter_C::M_GetEyesStateTL() const {
	return Read<class UTimelineComponent*>((byte*)this + 1464);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetEyesStateTL() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1464);
}
void ABP_BaseCharacter_C::M_SetEyesStateTL(const class UTimelineComponent*& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
// Declaration: float Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
float ABP_BaseCharacter_C::M_GetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const {
	return Read<float>((byte*)this + 1472);
}
float* ABP_BaseCharacter_C::M_PtrGetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() {
	return reinterpret_cast<float*>((byte*)this + 1472);
}
void ABP_BaseCharacter_C::M_SetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const float& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
// Declaration: TEnumAsByte<ETimelineDirection> Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1476);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1476);
}
void ABP_BaseCharacter_C::M_SetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1476, value);
}
// Member Getter and Setter of Blinking
// Declaration: class UTimelineComponent* Blinking
class UTimelineComponent* ABP_BaseCharacter_C::M_GetBlinking() const {
	return Read<class UTimelineComponent*>((byte*)this + 1480);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetBlinking() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1480);
}
void ABP_BaseCharacter_C::M_SetBlinking(const class UTimelineComponent*& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813
// Declaration: float FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813
float ABP_BaseCharacter_C::M_GetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() const {
	return Read<float>((byte*)this + 1488);
}
float* ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() {
	return reinterpret_cast<float*>((byte*)this + 1488);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813(const float& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813
// Declaration: TEnumAsByte<ETimelineDirection> FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813
TEnumAsByte<ETimelineDirection> ABP_BaseCharacter_C::M_GetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1492);
}
TEnumAsByte<ETimelineDirection>* ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1492);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1492, value);
}
// Member Getter and Setter of FistFightingTimeline
// Declaration: class UTimelineComponent* FistFightingTimeline
class UTimelineComponent* ABP_BaseCharacter_C::M_GetFistFightingTimeline() const {
	return Read<class UTimelineComponent*>((byte*)this + 1496);
}
class UTimelineComponent** ABP_BaseCharacter_C::M_PtrGetFistFightingTimeline() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1496);
}
void ABP_BaseCharacter_C::M_SetFistFightingTimeline(const class UTimelineComponent*& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of ShouldSprint
// Declaration: bool ShouldSprint
bool ABP_BaseCharacter_C::M_GetShouldSprint() const {
	return Read<bool>((byte*)this + 1504);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldSprint() {
	return reinterpret_cast<bool*>((byte*)this + 1504);
}
void ABP_BaseCharacter_C::M_SetShouldSprint(const bool& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of LookUp_DownRate
// Declaration: float LookUp_DownRate
float ABP_BaseCharacter_C::M_GetLookUp_DownRate() const {
	return Read<float>((byte*)this + 1508);
}
float* ABP_BaseCharacter_C::M_PtrGetLookUp_DownRate() {
	return reinterpret_cast<float*>((byte*)this + 1508);
}
void ABP_BaseCharacter_C::M_SetLookUp_DownRate(const float& value) {
	Write((byte*)this + 1508, value);
}
// Member Getter and Setter of LookLeft_RightRate
// Declaration: float LookLeft_RightRate
float ABP_BaseCharacter_C::M_GetLookLeft_RightRate() const {
	return Read<float>((byte*)this + 1512);
}
float* ABP_BaseCharacter_C::M_PtrGetLookLeft_RightRate() {
	return reinterpret_cast<float*>((byte*)this + 1512);
}
void ABP_BaseCharacter_C::M_SetLookLeft_RightRate(const float& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of MovementInput
// Declaration: struct FVector MovementInput
struct FVector ABP_BaseCharacter_C::M_GetMovementInput() const {
	return Read<struct FVector>((byte*)this + 1516);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetMovementInput() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1516);
}
void ABP_BaseCharacter_C::M_SetMovementInput(const struct FVector& value) {
	Write((byte*)this + 1516, value);
}
// Member Getter and Setter of aimYawDelta
// Declaration: float aimYawDelta
float ABP_BaseCharacter_C::M_GetaimYawDelta() const {
	return Read<float>((byte*)this + 1528);
}
float* ABP_BaseCharacter_C::M_PtrGetaimYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 1528);
}
void ABP_BaseCharacter_C::M_SetaimYawDelta(const float& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of AimYawRate
// Declaration: float AimYawRate
float ABP_BaseCharacter_C::M_GetAimYawRate() const {
	return Read<float>((byte*)this + 1532);
}
float* ABP_BaseCharacter_C::M_PtrGetAimYawRate() {
	return reinterpret_cast<float*>((byte*)this + 1532);
}
void ABP_BaseCharacter_C::M_SetAimYawRate(const float& value) {
	Write((byte*)this + 1532, value);
}
// Member Getter and Setter of MovementInput_VelocityDifference
// Declaration: float MovementInput_VelocityDifference
float ABP_BaseCharacter_C::M_GetMovementInput_VelocityDifference() const {
	return Read<float>((byte*)this + 1536);
}
float* ABP_BaseCharacter_C::M_PtrGetMovementInput_VelocityDifference() {
	return reinterpret_cast<float*>((byte*)this + 1536);
}
void ABP_BaseCharacter_C::M_SetMovementInput_VelocityDifference(const float& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of Target_CharacterRotationDifference
// Declaration: float Target_CharacterRotationDifference
float ABP_BaseCharacter_C::M_GetTarget_CharacterRotationDifference() const {
	return Read<float>((byte*)this + 1540);
}
float* ABP_BaseCharacter_C::M_PtrGetTarget_CharacterRotationDifference() {
	return reinterpret_cast<float*>((byte*)this + 1540);
}
void ABP_BaseCharacter_C::M_SetTarget_CharacterRotationDifference(const float& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of Direction
// Declaration: float Direction
float ABP_BaseCharacter_C::M_GetDirection() const {
	return Read<float>((byte*)this + 1544);
}
float* ABP_BaseCharacter_C::M_PtrGetDirection() {
	return reinterpret_cast<float*>((byte*)this + 1544);
}
void ABP_BaseCharacter_C::M_SetDirection(const float& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of characterRotation
// Declaration: struct FRotator characterRotation
struct FRotator ABP_BaseCharacter_C::M_GetcharacterRotation() const {
	return Read<struct FRotator>((byte*)this + 1548);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetcharacterRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1548);
}
void ABP_BaseCharacter_C::M_SetcharacterRotation(const struct FRotator& value) {
	Write((byte*)this + 1548, value);
}
// Member Getter and Setter of LookingRotation
// Declaration: struct FRotator LookingRotation
struct FRotator ABP_BaseCharacter_C::M_GetLookingRotation() const {
	return Read<struct FRotator>((byte*)this + 1560);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetLookingRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1560);
}
void ABP_BaseCharacter_C::M_SetLookingRotation(const struct FRotator& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of lastVelocityRotation
// Declaration: struct FRotator lastVelocityRotation
struct FRotator ABP_BaseCharacter_C::M_GetlastVelocityRotation() const {
	return Read<struct FRotator>((byte*)this + 1572);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetlastVelocityRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1572);
}
void ABP_BaseCharacter_C::M_SetlastVelocityRotation(const struct FRotator& value) {
	Write((byte*)this + 1572, value);
}
// Member Getter and Setter of lastMovementInputRotation
// Declaration: struct FRotator lastMovementInputRotation
struct FRotator ABP_BaseCharacter_C::M_GetlastMovementInputRotation() const {
	return Read<struct FRotator>((byte*)this + 1584);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetlastMovementInputRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1584);
}
void ABP_BaseCharacter_C::M_SetlastMovementInputRotation(const struct FRotator& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool ABP_BaseCharacter_C::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1596);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1596);
}
void ABP_BaseCharacter_C::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of hasMovementInput
// Declaration: bool hasMovementInput
bool ABP_BaseCharacter_C::M_GethasMovementInput() const {
	return Read<bool>((byte*)this + 1597);
}
bool* ABP_BaseCharacter_C::M_PtrGethasMovementInput() {
	return reinterpret_cast<bool*>((byte*)this + 1597);
}
void ABP_BaseCharacter_C::M_SethasMovementInput(const bool& value) {
	Write((byte*)this + 1597, value);
}
// Member Getter and Setter of GaitType
// Declaration: TEnumAsByte<E_Gait> GaitType
TEnumAsByte<E_Gait> ABP_BaseCharacter_C::M_GetGaitType() const {
	return Read<TEnumAsByte<E_Gait>>((byte*)this + 1598);
}
TEnumAsByte<E_Gait>* ABP_BaseCharacter_C::M_PtrGetGaitType() {
	return reinterpret_cast<TEnumAsByte<E_Gait>*>((byte*)this + 1598);
}
void ABP_BaseCharacter_C::M_SetGaitType(const TEnumAsByte<E_Gait>& value) {
	Write((byte*)this + 1598, value);
}
// Member Getter and Setter of stance
// Declaration: TEnumAsByte<E_Stance> stance
TEnumAsByte<E_Stance> ABP_BaseCharacter_C::M_Getstance() const {
	return Read<TEnumAsByte<E_Stance>>((byte*)this + 1599);
}
TEnumAsByte<E_Stance>* ABP_BaseCharacter_C::M_PtrGetstance() {
	return reinterpret_cast<TEnumAsByte<E_Stance>*>((byte*)this + 1599);
}
void ABP_BaseCharacter_C::M_Setstance(const TEnumAsByte<E_Stance>& value) {
	Write((byte*)this + 1599, value);
}
// Member Getter and Setter of RotationMode
// Declaration: TEnumAsByte<E_RotationMode> RotationMode
TEnumAsByte<E_RotationMode> ABP_BaseCharacter_C::M_GetRotationMode() const {
	return Read<TEnumAsByte<E_RotationMode>>((byte*)this + 1600);
}
TEnumAsByte<E_RotationMode>* ABP_BaseCharacter_C::M_PtrGetRotationMode() {
	return reinterpret_cast<TEnumAsByte<E_RotationMode>*>((byte*)this + 1600);
}
void ABP_BaseCharacter_C::M_SetRotationMode(const TEnumAsByte<E_RotationMode>& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of MovementMode
// Declaration: TEnumAsByte<E_MovementMode> MovementMode
TEnumAsByte<E_MovementMode> ABP_BaseCharacter_C::M_GetMovementMode() const {
	return Read<TEnumAsByte<E_MovementMode>>((byte*)this + 1601);
}
TEnumAsByte<E_MovementMode>* ABP_BaseCharacter_C::M_PtrGetMovementMode() {
	return reinterpret_cast<TEnumAsByte<E_MovementMode>*>((byte*)this + 1601);
}
void ABP_BaseCharacter_C::M_SetMovementMode(const TEnumAsByte<E_MovementMode>& value) {
	Write((byte*)this + 1601, value);
}
// Member Getter and Setter of PrevMovementMode
// Declaration: TEnumAsByte<E_MovementMode> PrevMovementMode
TEnumAsByte<E_MovementMode> ABP_BaseCharacter_C::M_GetPrevMovementMode() const {
	return Read<TEnumAsByte<E_MovementMode>>((byte*)this + 1602);
}
TEnumAsByte<E_MovementMode>* ABP_BaseCharacter_C::M_PtrGetPrevMovementMode() {
	return reinterpret_cast<TEnumAsByte<E_MovementMode>*>((byte*)this + 1602);
}
void ABP_BaseCharacter_C::M_SetPrevMovementMode(const TEnumAsByte<E_MovementMode>& value) {
	Write((byte*)this + 1602, value);
}
// Member Getter and Setter of cardinalDirection
// Declaration: TEnumAsByte<E_CardinalDirection> cardinalDirection
TEnumAsByte<E_CardinalDirection> ABP_BaseCharacter_C::M_GetcardinalDirection() const {
	return Read<TEnumAsByte<E_CardinalDirection>>((byte*)this + 1603);
}
TEnumAsByte<E_CardinalDirection>* ABP_BaseCharacter_C::M_PtrGetcardinalDirection() {
	return reinterpret_cast<TEnumAsByte<E_CardinalDirection>*>((byte*)this + 1603);
}
void ABP_BaseCharacter_C::M_SetcardinalDirection(const TEnumAsByte<E_CardinalDirection>& value) {
	Write((byte*)this + 1603, value);
}
// Member Getter and Setter of TargetRotation
// Declaration: struct FRotator TargetRotation
struct FRotator ABP_BaseCharacter_C::M_GetTargetRotation() const {
	return Read<struct FRotator>((byte*)this + 1604);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetTargetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1604);
}
void ABP_BaseCharacter_C::M_SetTargetRotation(const struct FRotator& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of WalkingSpeed
// Declaration: float WalkingSpeed
float ABP_BaseCharacter_C::M_GetWalkingSpeed() const {
	return Read<float>((byte*)this + 1616);
}
float* ABP_BaseCharacter_C::M_PtrGetWalkingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1616);
}
void ABP_BaseCharacter_C::M_SetWalkingSpeed(const float& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of runningSpeed
// Declaration: float runningSpeed
float ABP_BaseCharacter_C::M_GetrunningSpeed() const {
	return Read<float>((byte*)this + 1620);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1620);
}
void ABP_BaseCharacter_C::M_SetrunningSpeed(const float& value) {
	Write((byte*)this + 1620, value);
}
// Member Getter and Setter of sprintingSpeed
// Declaration: float sprintingSpeed
float ABP_BaseCharacter_C::M_GetsprintingSpeed() const {
	return Read<float>((byte*)this + 1624);
}
float* ABP_BaseCharacter_C::M_PtrGetsprintingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1624);
}
void ABP_BaseCharacter_C::M_SetsprintingSpeed(const float& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of crouchingSpeed
// Declaration: float crouchingSpeed
float ABP_BaseCharacter_C::M_GetcrouchingSpeed() const {
	return Read<float>((byte*)this + 1628);
}
float* ABP_BaseCharacter_C::M_PtrGetcrouchingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1628);
}
void ABP_BaseCharacter_C::M_SetcrouchingSpeed(const float& value) {
	Write((byte*)this + 1628, value);
}
// Member Getter and Setter of WalkingAcceleration
// Declaration: float WalkingAcceleration
float ABP_BaseCharacter_C::M_GetWalkingAcceleration() const {
	return Read<float>((byte*)this + 1632);
}
float* ABP_BaseCharacter_C::M_PtrGetWalkingAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1632);
}
void ABP_BaseCharacter_C::M_SetWalkingAcceleration(const float& value) {
	Write((byte*)this + 1632, value);
}
// Member Getter and Setter of runningAcceleration
// Declaration: float runningAcceleration
float ABP_BaseCharacter_C::M_GetrunningAcceleration() const {
	return Read<float>((byte*)this + 1636);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1636);
}
void ABP_BaseCharacter_C::M_SetrunningAcceleration(const float& value) {
	Write((byte*)this + 1636, value);
}
// Member Getter and Setter of walkingDeceleration
// Declaration: float walkingDeceleration
float ABP_BaseCharacter_C::M_GetwalkingDeceleration() const {
	return Read<float>((byte*)this + 1640);
}
float* ABP_BaseCharacter_C::M_PtrGetwalkingDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1640);
}
void ABP_BaseCharacter_C::M_SetwalkingDeceleration(const float& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of runningDeceleration
// Declaration: float runningDeceleration
float ABP_BaseCharacter_C::M_GetrunningDeceleration() const {
	return Read<float>((byte*)this + 1644);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1644);
}
void ABP_BaseCharacter_C::M_SetrunningDeceleration(const float& value) {
	Write((byte*)this + 1644, value);
}
// Member Getter and Setter of walkingGroundFriction
// Declaration: float walkingGroundFriction
float ABP_BaseCharacter_C::M_GetwalkingGroundFriction() const {
	return Read<float>((byte*)this + 1648);
}
float* ABP_BaseCharacter_C::M_PtrGetwalkingGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1648);
}
void ABP_BaseCharacter_C::M_SetwalkingGroundFriction(const float& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of runningGroundFriction
// Declaration: float runningGroundFriction
float ABP_BaseCharacter_C::M_GetrunningGroundFriction() const {
	return Read<float>((byte*)this + 1652);
}
float* ABP_BaseCharacter_C::M_PtrGetrunningGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1652);
}
void ABP_BaseCharacter_C::M_SetrunningGroundFriction(const float& value) {
	Write((byte*)this + 1652, value);
}
// Member Getter and Setter of JumpRotation
// Declaration: struct FRotator JumpRotation
struct FRotator ABP_BaseCharacter_C::M_GetJumpRotation() const {
	return Read<struct FRotator>((byte*)this + 1656);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetJumpRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1656);
}
void ABP_BaseCharacter_C::M_SetJumpRotation(const struct FRotator& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of RotationOffset
// Declaration: float RotationOffset
float ABP_BaseCharacter_C::M_GetRotationOffset() const {
	return Read<float>((byte*)this + 1668);
}
float* ABP_BaseCharacter_C::M_PtrGetRotationOffset() {
	return reinterpret_cast<float*>((byte*)this + 1668);
}
void ABP_BaseCharacter_C::M_SetRotationOffset(const float& value) {
	Write((byte*)this + 1668, value);
}
// Member Getter and Setter of rotationRateMultiplier
// Declaration: float rotationRateMultiplier
float ABP_BaseCharacter_C::M_GetrotationRateMultiplier() const {
	return Read<float>((byte*)this + 1672);
}
float* ABP_BaseCharacter_C::M_PtrGetrotationRateMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1672);
}
void ABP_BaseCharacter_C::M_SetrotationRateMultiplier(const float& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of ForwardAxisValue
// Declaration: float ForwardAxisValue
float ABP_BaseCharacter_C::M_GetForwardAxisValue() const {
	return Read<float>((byte*)this + 1676);
}
float* ABP_BaseCharacter_C::M_PtrGetForwardAxisValue() {
	return reinterpret_cast<float*>((byte*)this + 1676);
}
void ABP_BaseCharacter_C::M_SetForwardAxisValue(const float& value) {
	Write((byte*)this + 1676, value);
}
// Member Getter and Setter of RightAxisValue
// Declaration: float RightAxisValue
float ABP_BaseCharacter_C::M_GetRightAxisValue() const {
	return Read<float>((byte*)this + 1680);
}
float* ABP_BaseCharacter_C::M_PtrGetRightAxisValue() {
	return reinterpret_cast<float*>((byte*)this + 1680);
}
void ABP_BaseCharacter_C::M_SetRightAxisValue(const float& value) {
	Write((byte*)this + 1680, value);
}
// Member Getter and Setter of ViewMode
// Declaration: TEnumAsByte<E_ViewMode> ViewMode
TEnumAsByte<E_ViewMode> ABP_BaseCharacter_C::M_GetViewMode() const {
	return Read<TEnumAsByte<E_ViewMode>>((byte*)this + 1684);
}
TEnumAsByte<E_ViewMode>* ABP_BaseCharacter_C::M_PtrGetViewMode() {
	return reinterpret_cast<TEnumAsByte<E_ViewMode>*>((byte*)this + 1684);
}
void ABP_BaseCharacter_C::M_SetViewMode(const TEnumAsByte<E_ViewMode>& value) {
	Write((byte*)this + 1684, value);
}
// Member Getter and Setter of Aiming
// Declaration: bool Aiming
bool ABP_BaseCharacter_C::M_GetAiming() const {
	return Read<bool>((byte*)this + 1685);
}
bool* ABP_BaseCharacter_C::M_PtrGetAiming() {
	return reinterpret_cast<bool*>((byte*)this + 1685);
}
void ABP_BaseCharacter_C::M_SetAiming(const bool& value) {
	Write((byte*)this + 1685, value);
}
// Member Getter and Setter of VoiceSocket
// Declaration: struct FName VoiceSocket
struct FName ABP_BaseCharacter_C::M_GetVoiceSocket() const {
	return Read<struct FName>((byte*)this + 1688);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetVoiceSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 1688);
}
void ABP_BaseCharacter_C::M_SetVoiceSocket(const struct FName& value) {
	Write((byte*)this + 1688, value);
}
// Member Getter and Setter of ShowTraces
// Declaration: bool ShowTraces
bool ABP_BaseCharacter_C::M_GetShowTraces() const {
	return Read<bool>((byte*)this + 1696);
}
bool* ABP_BaseCharacter_C::M_PtrGetShowTraces() {
	return reinterpret_cast<bool*>((byte*)this + 1696);
}
void ABP_BaseCharacter_C::M_SetShowTraces(const bool& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of ShowSettings
// Declaration: bool ShowSettings
bool ABP_BaseCharacter_C::M_GetShowSettings() const {
	return Read<bool>((byte*)this + 1697);
}
bool* ABP_BaseCharacter_C::M_PtrGetShowSettings() {
	return reinterpret_cast<bool*>((byte*)this + 1697);
}
void ABP_BaseCharacter_C::M_SetShowSettings(const bool& value) {
	Write((byte*)this + 1697, value);
}
// Member Getter and Setter of PelvisBone
// Declaration: struct FName PelvisBone
struct FName ABP_BaseCharacter_C::M_GetPelvisBone() const {
	return Read<struct FName>((byte*)this + 1700);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetPelvisBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 1700);
}
void ABP_BaseCharacter_C::M_SetPelvisBone(const struct FName& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of RagdollPoseSnapshot
// Declaration: struct FName RagdollPoseSnapshot
struct FName ABP_BaseCharacter_C::M_GetRagdollPoseSnapshot() const {
	return Read<struct FName>((byte*)this + 1708);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetRagdollPoseSnapshot() {
	return reinterpret_cast<struct FName*>((byte*)this + 1708);
}
void ABP_BaseCharacter_C::M_SetRagdollPoseSnapshot(const struct FName& value) {
	Write((byte*)this + 1708, value);
}
// Member Getter and Setter of RagdollOnGround
// Declaration: bool RagdollOnGround
bool ABP_BaseCharacter_C::M_GetRagdollOnGround() const {
	return Read<bool>((byte*)this + 1716);
}
bool* ABP_BaseCharacter_C::M_PtrGetRagdollOnGround() {
	return reinterpret_cast<bool*>((byte*)this + 1716);
}
void ABP_BaseCharacter_C::M_SetRagdollOnGround(const bool& value) {
	Write((byte*)this + 1716, value);
}
// Member Getter and Setter of RagdollVelocity
// Declaration: struct FVector RagdollVelocity
struct FVector ABP_BaseCharacter_C::M_GetRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 1720);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1720);
}
void ABP_BaseCharacter_C::M_SetRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of Inventory_Open
// Declaration: bool Inventory_Open
bool ABP_BaseCharacter_C::M_GetInventory_Open() const {
	return Read<bool>((byte*)this + 1732);
}
bool* ABP_BaseCharacter_C::M_PtrGetInventory_Open() {
	return reinterpret_cast<bool*>((byte*)this + 1732);
}
void ABP_BaseCharacter_C::M_SetInventory_Open(const bool& value) {
	Write((byte*)this + 1732, value);
}
// Member Getter and Setter of ShouldCrouch
// Declaration: bool ShouldCrouch
bool ABP_BaseCharacter_C::M_GetShouldCrouch() const {
	return Read<bool>((byte*)this + 1733);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldCrouch() {
	return reinterpret_cast<bool*>((byte*)this + 1733);
}
void ABP_BaseCharacter_C::M_SetShouldCrouch(const bool& value) {
	Write((byte*)this + 1733, value);
}
// Member Getter and Setter of SelectedItemID
// Declaration: int32_t SelectedItemID
int32_t ABP_BaseCharacter_C::M_GetSelectedItemID() const {
	return Read<int32_t>((byte*)this + 1736);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetSelectedItemID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1736);
}
void ABP_BaseCharacter_C::M_SetSelectedItemID(const int32_t& value) {
	Write((byte*)this + 1736, value);
}
// Member Getter and Setter of HitReference
// Declaration: struct FHitResult HitReference
struct FHitResult ABP_BaseCharacter_C::M_GetHitReference() const {
	return Read<struct FHitResult>((byte*)this + 1740);
}
struct FHitResult* ABP_BaseCharacter_C::M_PtrGetHitReference() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 1740);
}
void ABP_BaseCharacter_C::M_SetHitReference(const struct FHitResult& value) {
	Write((byte*)this + 1740, value);
}
// Member Getter and Setter of HeldItem
// Declaration: class ABP_MasterHoldableItem_C* HeldItem
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetHeldItem() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 1880);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetHeldItem() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 1880);
}
void ABP_BaseCharacter_C::M_SetHeldItem(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of BlockEquipping
// Declaration: bool BlockEquipping
bool ABP_BaseCharacter_C::M_GetBlockEquipping() const {
	return Read<bool>((byte*)this + 1888);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockEquipping() {
	return reinterpret_cast<bool*>((byte*)this + 1888);
}
void ABP_BaseCharacter_C::M_SetBlockEquipping(const bool& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of Tag
// Declaration: TArray<struct FName> Tag
TArray<struct FName> ABP_BaseCharacter_C::M_GetTag() const {
	return Read<TArray<struct FName>>((byte*)this + 1896);
}
TArray<struct FName>* ABP_BaseCharacter_C::M_PtrGetTag() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1896);
}
void ABP_BaseCharacter_C::M_SetTag(const TArray<struct FName>& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of EncumberedSpeedMultiplier
// Declaration: float EncumberedSpeedMultiplier
float ABP_BaseCharacter_C::M_GetEncumberedSpeedMultiplier() const {
	return Read<float>((byte*)this + 1912);
}
float* ABP_BaseCharacter_C::M_PtrGetEncumberedSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1912);
}
void ABP_BaseCharacter_C::M_SetEncumberedSpeedMultiplier(const float& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of BuildingMenuOpen
// Declaration: bool BuildingMenuOpen
bool ABP_BaseCharacter_C::M_GetBuildingMenuOpen() const {
	return Read<bool>((byte*)this + 1916);
}
bool* ABP_BaseCharacter_C::M_PtrGetBuildingMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1916);
}
void ABP_BaseCharacter_C::M_SetBuildingMenuOpen(const bool& value) {
	Write((byte*)this + 1916, value);
}
// Member Getter and Setter of BlockInteraction
// Declaration: bool BlockInteraction
bool ABP_BaseCharacter_C::M_GetBlockInteraction() const {
	return Read<bool>((byte*)this + 1917);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 1917);
}
void ABP_BaseCharacter_C::M_SetBlockInteraction(const bool& value) {
	Write((byte*)this + 1917, value);
}
// Member Getter and Setter of Off_HandItem
// Declaration: class ABP_MasterHoldableItem_C* Off_HandItem
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetOff_HandItem() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 1920);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetOff_HandItem() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 1920);
}
void ABP_BaseCharacter_C::M_SetOff_HandItem(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_BaseCharacter_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 1928);
}
class ABP_SystemsManager_C** ABP_BaseCharacter_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 1928);
}
void ABP_BaseCharacter_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 1928, value);
}
// Member Getter and Setter of FieldChunk
// Declaration: struct FST_ChunkData FieldChunk
struct FST_ChunkData ABP_BaseCharacter_C::M_GetFieldChunk() const {
	return Read<struct FST_ChunkData>((byte*)this + 1936);
}
struct FST_ChunkData* ABP_BaseCharacter_C::M_PtrGetFieldChunk() {
	return reinterpret_cast<struct FST_ChunkData*>((byte*)this + 1936);
}
void ABP_BaseCharacter_C::M_SetFieldChunk(const struct FST_ChunkData& value) {
	Write((byte*)this + 1936, value);
}
// Member Getter and Setter of HitFieldChunk
// Declaration: struct FST_ChunkData HitFieldChunk
struct FST_ChunkData ABP_BaseCharacter_C::M_GetHitFieldChunk() const {
	return Read<struct FST_ChunkData>((byte*)this + 2048);
}
struct FST_ChunkData* ABP_BaseCharacter_C::M_PtrGetHitFieldChunk() {
	return reinterpret_cast<struct FST_ChunkData*>((byte*)this + 2048);
}
void ABP_BaseCharacter_C::M_SetHitFieldChunk(const struct FST_ChunkData& value) {
	Write((byte*)this + 2048, value);
}
// Member Getter and Setter of DefaultCharacterModules
// Declaration: struct FST_CharacterModules DefaultCharacterModules
struct FST_CharacterModules ABP_BaseCharacter_C::M_GetDefaultCharacterModules() const {
	return Read<struct FST_CharacterModules>((byte*)this + 2160);
}
struct FST_CharacterModules* ABP_BaseCharacter_C::M_PtrGetDefaultCharacterModules() {
	return reinterpret_cast<struct FST_CharacterModules*>((byte*)this + 2160);
}
void ABP_BaseCharacter_C::M_SetDefaultCharacterModules(const struct FST_CharacterModules& value) {
	Write((byte*)this + 2160, value);
}
// Member Getter and Setter of DynamicMaterials
// Declaration: TArray<struct FST_MeshDynamicMaterials> DynamicMaterials
TArray<struct FST_MeshDynamicMaterials> ABP_BaseCharacter_C::M_GetDynamicMaterials() const {
	return Read<TArray<struct FST_MeshDynamicMaterials>>((byte*)this + 2400);
}
TArray<struct FST_MeshDynamicMaterials>* ABP_BaseCharacter_C::M_PtrGetDynamicMaterials() {
	return reinterpret_cast<TArray<struct FST_MeshDynamicMaterials>*>((byte*)this + 2400);
}
void ABP_BaseCharacter_C::M_SetDynamicMaterials(const TArray<struct FST_MeshDynamicMaterials>& value) {
	Write((byte*)this + 2400, value);
}
// Member Getter and Setter of UseHeadForFullBodyAnimations
// Declaration: bool UseHeadForFullBodyAnimations
bool ABP_BaseCharacter_C::M_GetUseHeadForFullBodyAnimations() const {
	return Read<bool>((byte*)this + 2416);
}
bool* ABP_BaseCharacter_C::M_PtrGetUseHeadForFullBodyAnimations() {
	return reinterpret_cast<bool*>((byte*)this + 2416);
}
void ABP_BaseCharacter_C::M_SetUseHeadForFullBodyAnimations(const bool& value) {
	Write((byte*)this + 2416, value);
}
// Member Getter and Setter of InteractionCameraSlowDown
// Declaration: float InteractionCameraSlowDown
float ABP_BaseCharacter_C::M_GetInteractionCameraSlowDown() const {
	return Read<float>((byte*)this + 2420);
}
float* ABP_BaseCharacter_C::M_PtrGetInteractionCameraSlowDown() {
	return reinterpret_cast<float*>((byte*)this + 2420);
}
void ABP_BaseCharacter_C::M_SetInteractionCameraSlowDown(const float& value) {
	Write((byte*)this + 2420, value);
}
// Member Getter and Setter of InteractionMovementSlowDown
// Declaration: float InteractionMovementSlowDown
float ABP_BaseCharacter_C::M_GetInteractionMovementSlowDown() const {
	return Read<float>((byte*)this + 2424);
}
float* ABP_BaseCharacter_C::M_PtrGetInteractionMovementSlowDown() {
	return reinterpret_cast<float*>((byte*)this + 2424);
}
void ABP_BaseCharacter_C::M_SetInteractionMovementSlowDown(const float& value) {
	Write((byte*)this + 2424, value);
}
// Member Getter and Setter of UsePawnCameraRelativeRotation
// Declaration: struct FRotator UsePawnCameraRelativeRotation
struct FRotator ABP_BaseCharacter_C::M_GetUsePawnCameraRelativeRotation() const {
	return Read<struct FRotator>((byte*)this + 2428);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetUsePawnCameraRelativeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 2428);
}
void ABP_BaseCharacter_C::M_SetUsePawnCameraRelativeRotation(const struct FRotator& value) {
	Write((byte*)this + 2428, value);
}
// Member Getter and Setter of CameraFadeFinished
// Declaration: TAssetPtr<class FCameraFadeFinished__DelegateSignature> CameraFadeFinished
TAssetPtr<class FCameraFadeFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetCameraFadeFinished() const {
	return Read<TAssetPtr<class FCameraFadeFinished__DelegateSignature>>((byte*)this + 2440);
}
TAssetPtr<class FCameraFadeFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetCameraFadeFinished() {
	return reinterpret_cast<TAssetPtr<class FCameraFadeFinished__DelegateSignature>*>((byte*)this + 2440);
}
void ABP_BaseCharacter_C::M_SetCameraFadeFinished(const TAssetPtr<class FCameraFadeFinished__DelegateSignature>& value) {
	Write((byte*)this + 2440, value);
}
// Member Getter and Setter of TorchUsableToolTypes
// Declaration: TArray<TEnumAsByte<E_Tools>> TorchUsableToolTypes
TArray<TEnumAsByte<E_Tools>> ABP_BaseCharacter_C::M_GetTorchUsableToolTypes() const {
	return Read<TArray<TEnumAsByte<E_Tools>>>((byte*)this + 2456);
}
TArray<TEnumAsByte<E_Tools>>* ABP_BaseCharacter_C::M_PtrGetTorchUsableToolTypes() {
	return reinterpret_cast<TArray<TEnumAsByte<E_Tools>>*>((byte*)this + 2456);
}
void ABP_BaseCharacter_C::M_SetTorchUsableToolTypes(const TArray<TEnumAsByte<E_Tools>>& value) {
	Write((byte*)this + 2456, value);
}
// Member Getter and Setter of IsSwooned
// Declaration: bool IsSwooned
bool ABP_BaseCharacter_C::M_GetIsSwooned() const {
	return Read<bool>((byte*)this + 2472);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSwooned() {
	return reinterpret_cast<bool*>((byte*)this + 2472);
}
void ABP_BaseCharacter_C::M_SetIsSwooned(const bool& value) {
	Write((byte*)this + 2472, value);
}
// Member Getter and Setter of IsSprintKeyDown
// Declaration: bool IsSprintKeyDown
bool ABP_BaseCharacter_C::M_GetIsSprintKeyDown() const {
	return Read<bool>((byte*)this + 2473);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSprintKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 2473);
}
void ABP_BaseCharacter_C::M_SetIsSprintKeyDown(const bool& value) {
	Write((byte*)this + 2473, value);
}
// Member Getter and Setter of DefaultFPCameraFOV
// Declaration: float DefaultFPCameraFOV
float ABP_BaseCharacter_C::M_GetDefaultFPCameraFOV() const {
	return Read<float>((byte*)this + 2476);
}
float* ABP_BaseCharacter_C::M_PtrGetDefaultFPCameraFOV() {
	return reinterpret_cast<float*>((byte*)this + 2476);
}
void ABP_BaseCharacter_C::M_SetDefaultFPCameraFOV(const float& value) {
	Write((byte*)this + 2476, value);
}
// Member Getter and Setter of OnMovementFinished
// Declaration: TAssetPtr<class FOnMovementFinished__DelegateSignature> OnMovementFinished
TAssetPtr<class FOnMovementFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnMovementFinished() const {
	return Read<TAssetPtr<class FOnMovementFinished__DelegateSignature>>((byte*)this + 2480);
}
TAssetPtr<class FOnMovementFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnMovementFinished() {
	return reinterpret_cast<TAssetPtr<class FOnMovementFinished__DelegateSignature>*>((byte*)this + 2480);
}
void ABP_BaseCharacter_C::M_SetOnMovementFinished(const TAssetPtr<class FOnMovementFinished__DelegateSignature>& value) {
	Write((byte*)this + 2480, value);
}
// Member Getter and Setter of Sitting
// Declaration: bool Sitting
bool ABP_BaseCharacter_C::M_GetSitting() const {
	return Read<bool>((byte*)this + 2496);
}
bool* ABP_BaseCharacter_C::M_PtrGetSitting() {
	return reinterpret_cast<bool*>((byte*)this + 2496);
}
void ABP_BaseCharacter_C::M_SetSitting(const bool& value) {
	Write((byte*)this + 2496, value);
}
// Member Getter and Setter of GettingUp
// Declaration: bool GettingUp
bool ABP_BaseCharacter_C::M_GetGettingUp() const {
	return Read<bool>((byte*)this + 2497);
}
bool* ABP_BaseCharacter_C::M_PtrGetGettingUp() {
	return reinterpret_cast<bool*>((byte*)this + 2497);
}
void ABP_BaseCharacter_C::M_SetGettingUp(const bool& value) {
	Write((byte*)this + 2497, value);
}
// Member Getter and Setter of SatDown
// Declaration: bool SatDown
bool ABP_BaseCharacter_C::M_GetSatDown() const {
	return Read<bool>((byte*)this + 2498);
}
bool* ABP_BaseCharacter_C::M_PtrGetSatDown() {
	return reinterpret_cast<bool*>((byte*)this + 2498);
}
void ABP_BaseCharacter_C::M_SetSatDown(const bool& value) {
	Write((byte*)this + 2498, value);
}
// Member Getter and Setter of Sleeping
// Declaration: bool Sleeping
bool ABP_BaseCharacter_C::M_GetSleeping() const {
	return Read<bool>((byte*)this + 2499);
}
bool* ABP_BaseCharacter_C::M_PtrGetSleeping() {
	return reinterpret_cast<bool*>((byte*)this + 2499);
}
void ABP_BaseCharacter_C::M_SetSleeping(const bool& value) {
	Write((byte*)this + 2499, value);
}
// Member Getter and Setter of SleepingDirection
// Declaration: TEnumAsByte<E_SleepingDirection> SleepingDirection
TEnumAsByte<E_SleepingDirection> ABP_BaseCharacter_C::M_GetSleepingDirection() const {
	return Read<TEnumAsByte<E_SleepingDirection>>((byte*)this + 2500);
}
TEnumAsByte<E_SleepingDirection>* ABP_BaseCharacter_C::M_PtrGetSleepingDirection() {
	return reinterpret_cast<TEnumAsByte<E_SleepingDirection>*>((byte*)this + 2500);
}
void ABP_BaseCharacter_C::M_SetSleepingDirection(const TEnumAsByte<E_SleepingDirection>& value) {
	Write((byte*)this + 2500, value);
}
// Member Getter and Setter of OnSitIdleEntered
// Declaration: TAssetPtr<class FOnSitIdleEntered__DelegateSignature> OnSitIdleEntered
TAssetPtr<class FOnSitIdleEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitIdleEntered() const {
	return Read<TAssetPtr<class FOnSitIdleEntered__DelegateSignature>>((byte*)this + 2504);
}
TAssetPtr<class FOnSitIdleEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitIdleEntered() {
	return reinterpret_cast<TAssetPtr<class FOnSitIdleEntered__DelegateSignature>*>((byte*)this + 2504);
}
void ABP_BaseCharacter_C::M_SetOnSitIdleEntered(const TAssetPtr<class FOnSitIdleEntered__DelegateSignature>& value) {
	Write((byte*)this + 2504, value);
}
// Member Getter and Setter of OnSleepIdleEntered
// Declaration: TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> OnSleepIdleEntered
TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepIdleEntered() const {
	return Read<TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>>((byte*)this + 2520);
}
TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepIdleEntered() {
	return reinterpret_cast<TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>*>((byte*)this + 2520);
}
void ABP_BaseCharacter_C::M_SetOnSleepIdleEntered(const TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>& value) {
	Write((byte*)this + 2520, value);
}
// Member Getter and Setter of UseBedSleepingPose
// Declaration: bool UseBedSleepingPose
bool ABP_BaseCharacter_C::M_GetUseBedSleepingPose() const {
	return Read<bool>((byte*)this + 2536);
}
bool* ABP_BaseCharacter_C::M_PtrGetUseBedSleepingPose() {
	return reinterpret_cast<bool*>((byte*)this + 2536);
}
void ABP_BaseCharacter_C::M_SetUseBedSleepingPose(const bool& value) {
	Write((byte*)this + 2536, value);
}
// Member Getter and Setter of CraftingMenuOpen
// Declaration: bool CraftingMenuOpen
bool ABP_BaseCharacter_C::M_GetCraftingMenuOpen() const {
	return Read<bool>((byte*)this + 2537);
}
bool* ABP_BaseCharacter_C::M_PtrGetCraftingMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 2537);
}
void ABP_BaseCharacter_C::M_SetCraftingMenuOpen(const bool& value) {
	Write((byte*)this + 2537, value);
}
// Member Getter and Setter of IsCrafting
// Declaration: bool IsCrafting
bool ABP_BaseCharacter_C::M_GetIsCrafting() const {
	return Read<bool>((byte*)this + 2538);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2538);
}
void ABP_BaseCharacter_C::M_SetIsCrafting(const bool& value) {
	Write((byte*)this + 2538, value);
}
// Member Getter and Setter of InstantBuilding
// Declaration: bool InstantBuilding
bool ABP_BaseCharacter_C::M_GetInstantBuilding() const {
	return Read<bool>((byte*)this + 2539);
}
bool* ABP_BaseCharacter_C::M_PtrGetInstantBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 2539);
}
void ABP_BaseCharacter_C::M_SetInstantBuilding(const bool& value) {
	Write((byte*)this + 2539, value);
}
// Member Getter and Setter of EndLoopSectionDuration
// Declaration: float EndLoopSectionDuration
float ABP_BaseCharacter_C::M_GetEndLoopSectionDuration() const {
	return Read<float>((byte*)this + 2540);
}
float* ABP_BaseCharacter_C::M_PtrGetEndLoopSectionDuration() {
	return reinterpret_cast<float*>((byte*)this + 2540);
}
void ABP_BaseCharacter_C::M_SetEndLoopSectionDuration(const float& value) {
	Write((byte*)this + 2540, value);
}
// Member Getter and Setter of CraftingTime
// Declaration: float CraftingTime
float ABP_BaseCharacter_C::M_GetCraftingTime() const {
	return Read<float>((byte*)this + 2544);
}
float* ABP_BaseCharacter_C::M_PtrGetCraftingTime() {
	return reinterpret_cast<float*>((byte*)this + 2544);
}
void ABP_BaseCharacter_C::M_SetCraftingTime(const float& value) {
	Write((byte*)this + 2544, value);
}
// Member Getter and Setter of HadToolBeforeCrafting
// Declaration: bool HadToolBeforeCrafting
bool ABP_BaseCharacter_C::M_GetHadToolBeforeCrafting() const {
	return Read<bool>((byte*)this + 2548);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadToolBeforeCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2548);
}
void ABP_BaseCharacter_C::M_SetHadToolBeforeCrafting(const bool& value) {
	Write((byte*)this + 2548, value);
}
// Member Getter and Setter of SpawnedOffHandAnimItem
// Declaration: bool SpawnedOffHandAnimItem
bool ABP_BaseCharacter_C::M_GetSpawnedOffHandAnimItem() const {
	return Read<bool>((byte*)this + 2549);
}
bool* ABP_BaseCharacter_C::M_PtrGetSpawnedOffHandAnimItem() {
	return reinterpret_cast<bool*>((byte*)this + 2549);
}
void ABP_BaseCharacter_C::M_SetSpawnedOffHandAnimItem(const bool& value) {
	Write((byte*)this + 2549, value);
}
// Member Getter and Setter of HadOffhandBeforeCrafting
// Declaration: bool HadOffhandBeforeCrafting
bool ABP_BaseCharacter_C::M_GetHadOffhandBeforeCrafting() const {
	return Read<bool>((byte*)this + 2550);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadOffhandBeforeCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2550);
}
void ABP_BaseCharacter_C::M_SetHadOffhandBeforeCrafting(const bool& value) {
	Write((byte*)this + 2550, value);
}
// Member Getter and Setter of ChoiceMenuOpen
// Declaration: bool ChoiceMenuOpen
bool ABP_BaseCharacter_C::M_GetChoiceMenuOpen() const {
	return Read<bool>((byte*)this + 2551);
}
bool* ABP_BaseCharacter_C::M_PtrGetChoiceMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 2551);
}
void ABP_BaseCharacter_C::M_SetChoiceMenuOpen(const bool& value) {
	Write((byte*)this + 2551, value);
}
// Member Getter and Setter of CurrentPickingMontage
// Declaration: class UAnimMontage* CurrentPickingMontage
class UAnimMontage* ABP_BaseCharacter_C::M_GetCurrentPickingMontage() const {
	return Read<class UAnimMontage*>((byte*)this + 2552);
}
class UAnimMontage** ABP_BaseCharacter_C::M_PtrGetCurrentPickingMontage() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 2552);
}
void ABP_BaseCharacter_C::M_SetCurrentPickingMontage(const class UAnimMontage*& value) {
	Write((byte*)this + 2552, value);
}
// Member Getter and Setter of bLockMovement
// Declaration: bool bLockMovement
bool ABP_BaseCharacter_C::M_GetbLockMovement() const {
	return Read<bool>((byte*)this + 2560);
}
bool* ABP_BaseCharacter_C::M_PtrGetbLockMovement() {
	return reinterpret_cast<bool*>((byte*)this + 2560);
}
void ABP_BaseCharacter_C::M_SetbLockMovement(const bool& value) {
	Write((byte*)this + 2560, value);
}
// Member Getter and Setter of MontageSectionStartTime
// Declaration: float MontageSectionStartTime
float ABP_BaseCharacter_C::M_GetMontageSectionStartTime() const {
	return Read<float>((byte*)this + 2564);
}
float* ABP_BaseCharacter_C::M_PtrGetMontageSectionStartTime() {
	return reinterpret_cast<float*>((byte*)this + 2564);
}
void ABP_BaseCharacter_C::M_SetMontageSectionStartTime(const float& value) {
	Write((byte*)this + 2564, value);
}
// Member Getter and Setter of BlockCraftingMenuMovement
// Declaration: bool BlockCraftingMenuMovement
bool ABP_BaseCharacter_C::M_GetBlockCraftingMenuMovement() const {
	return Read<bool>((byte*)this + 2568);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockCraftingMenuMovement() {
	return reinterpret_cast<bool*>((byte*)this + 2568);
}
void ABP_BaseCharacter_C::M_SetBlockCraftingMenuMovement(const bool& value) {
	Write((byte*)this + 2568, value);
}
// Member Getter and Setter of BlockOffhandEquipping
// Declaration: bool BlockOffhandEquipping
bool ABP_BaseCharacter_C::M_GetBlockOffhandEquipping() const {
	return Read<bool>((byte*)this + 2569);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlockOffhandEquipping() {
	return reinterpret_cast<bool*>((byte*)this + 2569);
}
void ABP_BaseCharacter_C::M_SetBlockOffhandEquipping(const bool& value) {
	Write((byte*)this + 2569, value);
}
// Member Getter and Setter of Oldness
// Declaration: float Oldness
float ABP_BaseCharacter_C::M_GetOldness() const {
	return Read<float>((byte*)this + 2572);
}
float* ABP_BaseCharacter_C::M_PtrGetOldness() {
	return reinterpret_cast<float*>((byte*)this + 2572);
}
void ABP_BaseCharacter_C::M_SetOldness(const float& value) {
	Write((byte*)this + 2572, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_BaseCharacter_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 2576);
}
TEnumAsByte<E_Ownership>* ABP_BaseCharacter_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 2576);
}
void ABP_BaseCharacter_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 2576, value);
}
// Member Getter and Setter of LeftHandReference
// Declaration: class ABP_MasterHoldableItem_C* LeftHandReference
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetLeftHandReference() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 2584);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetLeftHandReference() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 2584);
}
void ABP_BaseCharacter_C::M_SetLeftHandReference(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 2584, value);
}
// Member Getter and Setter of RightHandReference
// Declaration: class ABP_MasterHoldableItem_C* RightHandReference
class ABP_MasterHoldableItem_C* ABP_BaseCharacter_C::M_GetRightHandReference() const {
	return Read<class ABP_MasterHoldableItem_C*>((byte*)this + 2592);
}
class ABP_MasterHoldableItem_C** ABP_BaseCharacter_C::M_PtrGetRightHandReference() {
	return reinterpret_cast<class ABP_MasterHoldableItem_C**>((byte*)this + 2592);
}
void ABP_BaseCharacter_C::M_SetRightHandReference(const class ABP_MasterHoldableItem_C*& value) {
	Write((byte*)this + 2592, value);
}
// Member Getter and Setter of FistFightingAlpha
// Declaration: float FistFightingAlpha
float ABP_BaseCharacter_C::M_GetFistFightingAlpha() const {
	return Read<float>((byte*)this + 2600);
}
float* ABP_BaseCharacter_C::M_PtrGetFistFightingAlpha() {
	return reinterpret_cast<float*>((byte*)this + 2600);
}
void ABP_BaseCharacter_C::M_SetFistFightingAlpha(const float& value) {
	Write((byte*)this + 2600, value);
}
// Member Getter and Setter of IsSick
// Declaration: bool IsSick
bool ABP_BaseCharacter_C::M_GetIsSick() const {
	return Read<bool>((byte*)this + 2604);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsSick() {
	return reinterpret_cast<bool*>((byte*)this + 2604);
}
void ABP_BaseCharacter_C::M_SetIsSick(const bool& value) {
	Write((byte*)this + 2604, value);
}
// Member Getter and Setter of IsInjured
// Declaration: bool IsInjured
bool ABP_BaseCharacter_C::M_GetIsInjured() const {
	return Read<bool>((byte*)this + 2605);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInjured() {
	return reinterpret_cast<bool*>((byte*)this + 2605);
}
void ABP_BaseCharacter_C::M_SetIsInjured(const bool& value) {
	Write((byte*)this + 2605, value);
}
// Member Getter and Setter of IsInIdleState
// Declaration: bool IsInIdleState
bool ABP_BaseCharacter_C::M_GetIsInIdleState() const {
	return Read<bool>((byte*)this + 2606);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInIdleState() {
	return reinterpret_cast<bool*>((byte*)this + 2606);
}
void ABP_BaseCharacter_C::M_SetIsInIdleState(const bool& value) {
	Write((byte*)this + 2606, value);
}
// Member Getter and Setter of IdleState
// Declaration: TEnumAsByte<E_IdleStates> IdleState
TEnumAsByte<E_IdleStates> ABP_BaseCharacter_C::M_GetIdleState() const {
	return Read<TEnumAsByte<E_IdleStates>>((byte*)this + 2607);
}
TEnumAsByte<E_IdleStates>* ABP_BaseCharacter_C::M_PtrGetIdleState() {
	return reinterpret_cast<TEnumAsByte<E_IdleStates>*>((byte*)this + 2607);
}
void ABP_BaseCharacter_C::M_SetIdleState(const TEnumAsByte<E_IdleStates>& value) {
	Write((byte*)this + 2607, value);
}
// Member Getter and Setter of FallingTimerHandle
// Declaration: struct FTimerHandle FallingTimerHandle
struct FTimerHandle ABP_BaseCharacter_C::M_GetFallingTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 2608);
}
struct FTimerHandle* ABP_BaseCharacter_C::M_PtrGetFallingTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2608);
}
void ABP_BaseCharacter_C::M_SetFallingTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 2608, value);
}
// Member Getter and Setter of FallDamageToApply
// Declaration: float FallDamageToApply
float ABP_BaseCharacter_C::M_GetFallDamageToApply() const {
	return Read<float>((byte*)this + 2616);
}
float* ABP_BaseCharacter_C::M_PtrGetFallDamageToApply() {
	return reinterpret_cast<float*>((byte*)this + 2616);
}
void ABP_BaseCharacter_C::M_SetFallDamageToApply(const float& value) {
	Write((byte*)this + 2616, value);
}
// Member Getter and Setter of StandingIdlePose
// Declaration: unsigned char StandingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetStandingIdlePose() const {
	return Read<unsigned char>((byte*)this + 2620);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetStandingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2620);
}
void ABP_BaseCharacter_C::M_SetStandingIdlePose(const unsigned char& value) {
	Write((byte*)this + 2620, value);
}
// Member Getter and Setter of TalkingIdlePose
// Declaration: unsigned char TalkingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetTalkingIdlePose() const {
	return Read<unsigned char>((byte*)this + 2621);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetTalkingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2621);
}
void ABP_BaseCharacter_C::M_SetTalkingIdlePose(const unsigned char& value) {
	Write((byte*)this + 2621, value);
}
// Member Getter and Setter of LookingIdlePose
// Declaration: unsigned char LookingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetLookingIdlePose() const {
	return Read<unsigned char>((byte*)this + 2622);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetLookingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2622);
}
void ABP_BaseCharacter_C::M_SetLookingIdlePose(const unsigned char& value) {
	Write((byte*)this + 2622, value);
}
// Member Getter and Setter of OtherIdlePose
// Declaration: unsigned char OtherIdlePose
unsigned char ABP_BaseCharacter_C::M_GetOtherIdlePose() const {
	return Read<unsigned char>((byte*)this + 2623);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetOtherIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2623);
}
void ABP_BaseCharacter_C::M_SetOtherIdlePose(const unsigned char& value) {
	Write((byte*)this + 2623, value);
}
// Member Getter and Setter of OnIdleAnimEntered
// Declaration: TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> OnIdleAnimEntered
TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> ABP_BaseCharacter_C::M_GetOnIdleAnimEntered() const {
	return Read<TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>>((byte*)this + 2624);
}
TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnIdleAnimEntered() {
	return reinterpret_cast<TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>*>((byte*)this + 2624);
}
void ABP_BaseCharacter_C::M_SetOnIdleAnimEntered(const TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>& value) {
	Write((byte*)this + 2624, value);
}
// Member Getter and Setter of OnIdleAnimFinished
// Declaration: TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> OnIdleAnimFinished
TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnIdleAnimFinished() const {
	return Read<TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>>((byte*)this + 2640);
}
TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnIdleAnimFinished() {
	return reinterpret_cast<TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>*>((byte*)this + 2640);
}
void ABP_BaseCharacter_C::M_SetOnIdleAnimFinished(const TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>& value) {
	Write((byte*)this + 2640, value);
}
// Member Getter and Setter of WavingIdlePose
// Declaration: unsigned char WavingIdlePose
unsigned char ABP_BaseCharacter_C::M_GetWavingIdlePose() const {
	return Read<unsigned char>((byte*)this + 2656);
}
unsigned char* ABP_BaseCharacter_C::M_PtrGetWavingIdlePose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2656);
}
void ABP_BaseCharacter_C::M_SetWavingIdlePose(const unsigned char& value) {
	Write((byte*)this + 2656, value);
}
// Member Getter and Setter of HasLanded
// Declaration: bool HasLanded
bool ABP_BaseCharacter_C::M_GetHasLanded() const {
	return Read<bool>((byte*)this + 2657);
}
bool* ABP_BaseCharacter_C::M_PtrGetHasLanded() {
	return reinterpret_cast<bool*>((byte*)this + 2657);
}
void ABP_BaseCharacter_C::M_SetHasLanded(const bool& value) {
	Write((byte*)this + 2657, value);
}
// Member Getter and Setter of BodyPartsIndexes
// Declaration: TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes
TMap<TEnumAsByte<E_BodyParts>, int32_t> ABP_BaseCharacter_C::M_GetBodyPartsIndexes() const {
	return Read<TMap<TEnumAsByte<E_BodyParts>, int32_t>>((byte*)this + 2664);
}
TMap<TEnumAsByte<E_BodyParts>, int32_t>* ABP_BaseCharacter_C::M_PtrGetBodyPartsIndexes() {
	return reinterpret_cast<TMap<TEnumAsByte<E_BodyParts>, int32_t>*>((byte*)this + 2664);
}
void ABP_BaseCharacter_C::M_SetBodyPartsIndexes(const TMap<TEnumAsByte<E_BodyParts>, int32_t>& value) {
	Write((byte*)this + 2664, value);
}
// Member Getter and Setter of MeshesRowName
// Declaration: struct FName MeshesRowName
struct FName ABP_BaseCharacter_C::M_GetMeshesRowName() const {
	return Read<struct FName>((byte*)this + 2744);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetMeshesRowName() {
	return reinterpret_cast<struct FName*>((byte*)this + 2744);
}
void ABP_BaseCharacter_C::M_SetMeshesRowName(const struct FName& value) {
	Write((byte*)this + 2744, value);
}
// Member Getter and Setter of PhysicsLocation
// Declaration: struct FVector PhysicsLocation
struct FVector ABP_BaseCharacter_C::M_GetPhysicsLocation() const {
	return Read<struct FVector>((byte*)this + 2752);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetPhysicsLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2752);
}
void ABP_BaseCharacter_C::M_SetPhysicsLocation(const struct FVector& value) {
	Write((byte*)this + 2752, value);
}
// Member Getter and Setter of PhysicsVectorLength
// Declaration: float PhysicsVectorLength
float ABP_BaseCharacter_C::M_GetPhysicsVectorLength() const {
	return Read<float>((byte*)this + 2764);
}
float* ABP_BaseCharacter_C::M_PtrGetPhysicsVectorLength() {
	return reinterpret_cast<float*>((byte*)this + 2764);
}
void ABP_BaseCharacter_C::M_SetPhysicsVectorLength(const float& value) {
	Write((byte*)this + 2764, value);
}
// Member Getter and Setter of IsWorking
// Declaration: bool IsWorking
bool ABP_BaseCharacter_C::M_GetIsWorking() const {
	return Read<bool>((byte*)this + 2768);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsWorking() {
	return reinterpret_cast<bool*>((byte*)this + 2768);
}
void ABP_BaseCharacter_C::M_SetIsWorking(const bool& value) {
	Write((byte*)this + 2768, value);
}
// Member Getter and Setter of BagMode
// Declaration: TEnumAsByte<E_BagMode> BagMode
TEnumAsByte<E_BagMode> ABP_BaseCharacter_C::M_GetBagMode() const {
	return Read<TEnumAsByte<E_BagMode>>((byte*)this + 2769);
}
TEnumAsByte<E_BagMode>* ABP_BaseCharacter_C::M_PtrGetBagMode() {
	return reinterpret_cast<TEnumAsByte<E_BagMode>*>((byte*)this + 2769);
}
void ABP_BaseCharacter_C::M_SetBagMode(const TEnumAsByte<E_BagMode>& value) {
	Write((byte*)this + 2769, value);
}
// Member Getter and Setter of IsTakingBreak
// Declaration: bool IsTakingBreak
bool ABP_BaseCharacter_C::M_GetIsTakingBreak() const {
	return Read<bool>((byte*)this + 2770);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsTakingBreak() {
	return reinterpret_cast<bool*>((byte*)this + 2770);
}
void ABP_BaseCharacter_C::M_SetIsTakingBreak(const bool& value) {
	Write((byte*)this + 2770, value);
}
// Member Getter and Setter of OnInteractionFinished
// Declaration: TAssetPtr<class FOnInteractionFinished__DelegateSignature> OnInteractionFinished
TAssetPtr<class FOnInteractionFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnInteractionFinished() const {
	return Read<TAssetPtr<class FOnInteractionFinished__DelegateSignature>>((byte*)this + 2776);
}
TAssetPtr<class FOnInteractionFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnInteractionFinished() {
	return reinterpret_cast<TAssetPtr<class FOnInteractionFinished__DelegateSignature>*>((byte*)this + 2776);
}
void ABP_BaseCharacter_C::M_SetOnInteractionFinished(const TAssetPtr<class FOnInteractionFinished__DelegateSignature>& value) {
	Write((byte*)this + 2776, value);
}
// Member Getter and Setter of InteractionSlotIndex
// Declaration: int32_t InteractionSlotIndex
int32_t ABP_BaseCharacter_C::M_GetInteractionSlotIndex() const {
	return Read<int32_t>((byte*)this + 2792);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetInteractionSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 2792);
}
void ABP_BaseCharacter_C::M_SetInteractionSlotIndex(const int32_t& value) {
	Write((byte*)this + 2792, value);
}
// Member Getter and Setter of HadShieldBeforeCrafting
// Declaration: bool HadShieldBeforeCrafting
bool ABP_BaseCharacter_C::M_GetHadShieldBeforeCrafting() const {
	return Read<bool>((byte*)this + 2796);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadShieldBeforeCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2796);
}
void ABP_BaseCharacter_C::M_SetHadShieldBeforeCrafting(const bool& value) {
	Write((byte*)this + 2796, value);
}
// Member Getter and Setter of SpawnedMainHandAnimItem
// Declaration: bool SpawnedMainHandAnimItem
bool ABP_BaseCharacter_C::M_GetSpawnedMainHandAnimItem() const {
	return Read<bool>((byte*)this + 2797);
}
bool* ABP_BaseCharacter_C::M_PtrGetSpawnedMainHandAnimItem() {
	return reinterpret_cast<bool*>((byte*)this + 2797);
}
void ABP_BaseCharacter_C::M_SetSpawnedMainHandAnimItem(const bool& value) {
	Write((byte*)this + 2797, value);
}
// Member Getter and Setter of BuildingMode
// Declaration: TEnumAsByte<E_BuildingModifications> BuildingMode
TEnumAsByte<E_BuildingModifications> ABP_BaseCharacter_C::M_GetBuildingMode() const {
	return Read<TEnumAsByte<E_BuildingModifications>>((byte*)this + 2798);
}
TEnumAsByte<E_BuildingModifications>* ABP_BaseCharacter_C::M_PtrGetBuildingMode() {
	return reinterpret_cast<TEnumAsByte<E_BuildingModifications>*>((byte*)this + 2798);
}
void ABP_BaseCharacter_C::M_SetBuildingMode(const TEnumAsByte<E_BuildingModifications>& value) {
	Write((byte*)this + 2798, value);
}
// Member Getter and Setter of IsInActivity
// Declaration: bool IsInActivity
bool ABP_BaseCharacter_C::M_GetIsInActivity() const {
	return Read<bool>((byte*)this + 2799);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInActivity() {
	return reinterpret_cast<bool*>((byte*)this + 2799);
}
void ABP_BaseCharacter_C::M_SetIsInActivity(const bool& value) {
	Write((byte*)this + 2799, value);
}
// Member Getter and Setter of SitDownPosition
// Declaration: TEnumAsByte<E_SitDownPosition> SitDownPosition
TEnumAsByte<E_SitDownPosition> ABP_BaseCharacter_C::M_GetSitDownPosition() const {
	return Read<TEnumAsByte<E_SitDownPosition>>((byte*)this + 2800);
}
TEnumAsByte<E_SitDownPosition>* ABP_BaseCharacter_C::M_PtrGetSitDownPosition() {
	return reinterpret_cast<TEnumAsByte<E_SitDownPosition>*>((byte*)this + 2800);
}
void ABP_BaseCharacter_C::M_SetSitDownPosition(const TEnumAsByte<E_SitDownPosition>& value) {
	Write((byte*)this + 2800, value);
}
// Member Getter and Setter of OnSitStarted
// Declaration: TAssetPtr<class FOnSitStarted__DelegateSignature> OnSitStarted
TAssetPtr<class FOnSitStarted__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitStarted() const {
	return Read<TAssetPtr<class FOnSitStarted__DelegateSignature>>((byte*)this + 2808);
}
TAssetPtr<class FOnSitStarted__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitStarted() {
	return reinterpret_cast<TAssetPtr<class FOnSitStarted__DelegateSignature>*>((byte*)this + 2808);
}
void ABP_BaseCharacter_C::M_SetOnSitStarted(const TAssetPtr<class FOnSitStarted__DelegateSignature>& value) {
	Write((byte*)this + 2808, value);
}
// Member Getter and Setter of OnSitFinished
// Declaration: TAssetPtr<class FOnSitFinished__DelegateSignature> OnSitFinished
TAssetPtr<class FOnSitFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSitFinished() const {
	return Read<TAssetPtr<class FOnSitFinished__DelegateSignature>>((byte*)this + 2824);
}
TAssetPtr<class FOnSitFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSitFinished() {
	return reinterpret_cast<TAssetPtr<class FOnSitFinished__DelegateSignature>*>((byte*)this + 2824);
}
void ABP_BaseCharacter_C::M_SetOnSitFinished(const TAssetPtr<class FOnSitFinished__DelegateSignature>& value) {
	Write((byte*)this + 2824, value);
}
// Member Getter and Setter of OnSleepStarted
// Declaration: TAssetPtr<class FOnSleepStarted__DelegateSignature> OnSleepStarted
TAssetPtr<class FOnSleepStarted__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepStarted() const {
	return Read<TAssetPtr<class FOnSleepStarted__DelegateSignature>>((byte*)this + 2840);
}
TAssetPtr<class FOnSleepStarted__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepStarted() {
	return reinterpret_cast<TAssetPtr<class FOnSleepStarted__DelegateSignature>*>((byte*)this + 2840);
}
void ABP_BaseCharacter_C::M_SetOnSleepStarted(const TAssetPtr<class FOnSleepStarted__DelegateSignature>& value) {
	Write((byte*)this + 2840, value);
}
// Member Getter and Setter of OnSleepFinished
// Declaration: TAssetPtr<class FOnSleepFinished__DelegateSignature> OnSleepFinished
TAssetPtr<class FOnSleepFinished__DelegateSignature> ABP_BaseCharacter_C::M_GetOnSleepFinished() const {
	return Read<TAssetPtr<class FOnSleepFinished__DelegateSignature>>((byte*)this + 2856);
}
TAssetPtr<class FOnSleepFinished__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnSleepFinished() {
	return reinterpret_cast<TAssetPtr<class FOnSleepFinished__DelegateSignature>*>((byte*)this + 2856);
}
void ABP_BaseCharacter_C::M_SetOnSleepFinished(const TAssetPtr<class FOnSleepFinished__DelegateSignature>& value) {
	Write((byte*)this + 2856, value);
}
// Member Getter and Setter of isInWater
// Declaration: bool isInWater
bool ABP_BaseCharacter_C::M_GetisInWater() const {
	return Read<bool>((byte*)this + 2872);
}
bool* ABP_BaseCharacter_C::M_PtrGetisInWater() {
	return reinterpret_cast<bool*>((byte*)this + 2872);
}
void ABP_BaseCharacter_C::M_SetisInWater(const bool& value) {
	Write((byte*)this + 2872, value);
}
// Member Getter and Setter of InWaterMovementIntensity
// Declaration: float InWaterMovementIntensity
float ABP_BaseCharacter_C::M_GetInWaterMovementIntensity() const {
	return Read<float>((byte*)this + 2876);
}
float* ABP_BaseCharacter_C::M_PtrGetInWaterMovementIntensity() {
	return reinterpret_cast<float*>((byte*)this + 2876);
}
void ABP_BaseCharacter_C::M_SetInWaterMovementIntensity(const float& value) {
	Write((byte*)this + 2876, value);
}
// Member Getter and Setter of OnStartCrafting
// Declaration: TAssetPtr<class FOnStartCrafting__DelegateSignature> OnStartCrafting
TAssetPtr<class FOnStartCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStartCrafting() const {
	return Read<TAssetPtr<class FOnStartCrafting__DelegateSignature>>((byte*)this + 2880);
}
TAssetPtr<class FOnStartCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStartCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnStartCrafting__DelegateSignature>*>((byte*)this + 2880);
}
void ABP_BaseCharacter_C::M_SetOnStartCrafting(const TAssetPtr<class FOnStartCrafting__DelegateSignature>& value) {
	Write((byte*)this + 2880, value);
}
// Member Getter and Setter of OnEndCrafting
// Declaration: TAssetPtr<class FOnEndCrafting__DelegateSignature> OnEndCrafting
TAssetPtr<class FOnEndCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnEndCrafting() const {
	return Read<TAssetPtr<class FOnEndCrafting__DelegateSignature>>((byte*)this + 2896);
}
TAssetPtr<class FOnEndCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnEndCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnEndCrafting__DelegateSignature>*>((byte*)this + 2896);
}
void ABP_BaseCharacter_C::M_SetOnEndCrafting(const TAssetPtr<class FOnEndCrafting__DelegateSignature>& value) {
	Write((byte*)this + 2896, value);
}
// Member Getter and Setter of OnStoppingCrafting
// Declaration: TAssetPtr<class FOnStoppingCrafting__DelegateSignature> OnStoppingCrafting
TAssetPtr<class FOnStoppingCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStoppingCrafting() const {
	return Read<TAssetPtr<class FOnStoppingCrafting__DelegateSignature>>((byte*)this + 2912);
}
TAssetPtr<class FOnStoppingCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStoppingCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnStoppingCrafting__DelegateSignature>*>((byte*)this + 2912);
}
void ABP_BaseCharacter_C::M_SetOnStoppingCrafting(const TAssetPtr<class FOnStoppingCrafting__DelegateSignature>& value) {
	Write((byte*)this + 2912, value);
}
// Member Getter and Setter of IsWaitingForCrafting
// Declaration: bool IsWaitingForCrafting
bool ABP_BaseCharacter_C::M_GetIsWaitingForCrafting() const {
	return Read<bool>((byte*)this + 2928);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsWaitingForCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2928);
}
void ABP_BaseCharacter_C::M_SetIsWaitingForCrafting(const bool& value) {
	Write((byte*)this + 2928, value);
}
// Member Getter and Setter of InteractedActor
// Declaration: class AActor* InteractedActor
class AActor* ABP_BaseCharacter_C::M_GetInteractedActor() const {
	return Read<class AActor*>((byte*)this + 2936);
}
class AActor** ABP_BaseCharacter_C::M_PtrGetInteractedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 2936);
}
void ABP_BaseCharacter_C::M_SetInteractedActor(const class AActor*& value) {
	Write((byte*)this + 2936, value);
}
// Member Getter and Setter of OnCharacterDeactivated
// Declaration: TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> OnCharacterDeactivated
TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCharacterDeactivated() const {
	return Read<TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>>((byte*)this + 2944);
}
TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCharacterDeactivated() {
	return reinterpret_cast<TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>*>((byte*)this + 2944);
}
void ABP_BaseCharacter_C::M_SetOnCharacterDeactivated(const TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>& value) {
	Write((byte*)this + 2944, value);
}
// Member Getter and Setter of OnCharacterActivated
// Declaration: TAssetPtr<class FOnCharacterActivated__DelegateSignature> OnCharacterActivated
TAssetPtr<class FOnCharacterActivated__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCharacterActivated() const {
	return Read<TAssetPtr<class FOnCharacterActivated__DelegateSignature>>((byte*)this + 2960);
}
TAssetPtr<class FOnCharacterActivated__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCharacterActivated() {
	return reinterpret_cast<TAssetPtr<class FOnCharacterActivated__DelegateSignature>*>((byte*)this + 2960);
}
void ABP_BaseCharacter_C::M_SetOnCharacterActivated(const TAssetPtr<class FOnCharacterActivated__DelegateSignature>& value) {
	Write((byte*)this + 2960, value);
}
// Member Getter and Setter of TargetLerpFOV
// Declaration: float TargetLerpFOV
float ABP_BaseCharacter_C::M_GetTargetLerpFOV() const {
	return Read<float>((byte*)this + 2976);
}
float* ABP_BaseCharacter_C::M_PtrGetTargetLerpFOV() {
	return reinterpret_cast<float*>((byte*)this + 2976);
}
void ABP_BaseCharacter_C::M_SetTargetLerpFOV(const float& value) {
	Write((byte*)this + 2976, value);
}
// Member Getter and Setter of StartingLerpFOV
// Declaration: float StartingLerpFOV
float ABP_BaseCharacter_C::M_GetStartingLerpFOV() const {
	return Read<float>((byte*)this + 2980);
}
float* ABP_BaseCharacter_C::M_PtrGetStartingLerpFOV() {
	return reinterpret_cast<float*>((byte*)this + 2980);
}
void ABP_BaseCharacter_C::M_SetStartingLerpFOV(const float& value) {
	Write((byte*)this + 2980, value);
}
// Member Getter and Setter of HeadID
// Declaration: int32_t HeadID
int32_t ABP_BaseCharacter_C::M_GetHeadID() const {
	return Read<int32_t>((byte*)this + 2984);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetHeadID() {
	return reinterpret_cast<int32_t*>((byte*)this + 2984);
}
void ABP_BaseCharacter_C::M_SetHeadID(const int32_t& value) {
	Write((byte*)this + 2984, value);
}
// Member Getter and Setter of HairID
// Declaration: int32_t HairID
int32_t ABP_BaseCharacter_C::M_GetHairID() const {
	return Read<int32_t>((byte*)this + 2988);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetHairID() {
	return reinterpret_cast<int32_t*>((byte*)this + 2988);
}
void ABP_BaseCharacter_C::M_SetHairID(const int32_t& value) {
	Write((byte*)this + 2988, value);
}
// Member Getter and Setter of PresetsIDs
// Declaration: TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs
TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> ABP_BaseCharacter_C::M_GetPresetsIDs() const {
	return Read<TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>>((byte*)this + 2992);
}
TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>* ABP_BaseCharacter_C::M_PtrGetPresetsIDs() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>*>((byte*)this + 2992);
}
void ABP_BaseCharacter_C::M_SetPresetsIDs(const TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>& value) {
	Write((byte*)this + 2992, value);
}
// Member Getter and Setter of IsCraftingClosed
// Declaration: bool IsCraftingClosed
bool ABP_BaseCharacter_C::M_GetIsCraftingClosed() const {
	return Read<bool>((byte*)this + 3072);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsCraftingClosed() {
	return reinterpret_cast<bool*>((byte*)this + 3072);
}
void ABP_BaseCharacter_C::M_SetIsCraftingClosed(const bool& value) {
	Write((byte*)this + 3072, value);
}
// Member Getter and Setter of PendingKill
// Declaration: bool PendingKill
bool ABP_BaseCharacter_C::M_GetPendingKill() const {
	return Read<bool>((byte*)this + 3073);
}
bool* ABP_BaseCharacter_C::M_PtrGetPendingKill() {
	return reinterpret_cast<bool*>((byte*)this + 3073);
}
void ABP_BaseCharacter_C::M_SetPendingKill(const bool& value) {
	Write((byte*)this + 3073, value);
}
// Member Getter and Setter of CaughtPrey
// Declaration: bool CaughtPrey
bool ABP_BaseCharacter_C::M_GetCaughtPrey() const {
	return Read<bool>((byte*)this + 3074);
}
bool* ABP_BaseCharacter_C::M_PtrGetCaughtPrey() {
	return reinterpret_cast<bool*>((byte*)this + 3074);
}
void ABP_BaseCharacter_C::M_SetCaughtPrey(const bool& value) {
	Write((byte*)this + 3074, value);
}
// Member Getter and Setter of Blinking_
// Declaration: bool Blinking_
bool ABP_BaseCharacter_C::M_GetBlinking_() const {
	return Read<bool>((byte*)this + 3075);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlinking_() {
	return reinterpret_cast<bool*>((byte*)this + 3075);
}
void ABP_BaseCharacter_C::M_SetBlinking_(const bool& value) {
	Write((byte*)this + 3075, value);
}
// Member Getter and Setter of EyesClosed
// Declaration: bool EyesClosed
bool ABP_BaseCharacter_C::M_GetEyesClosed() const {
	return Read<bool>((byte*)this + 3076);
}
bool* ABP_BaseCharacter_C::M_PtrGetEyesClosed() {
	return reinterpret_cast<bool*>((byte*)this + 3076);
}
void ABP_BaseCharacter_C::M_SetEyesClosed(const bool& value) {
	Write((byte*)this + 3076, value);
}
// Member Getter and Setter of EyesMovement
// Declaration: bool EyesMovement
bool ABP_BaseCharacter_C::M_GetEyesMovement() const {
	return Read<bool>((byte*)this + 3077);
}
bool* ABP_BaseCharacter_C::M_PtrGetEyesMovement() {
	return reinterpret_cast<bool*>((byte*)this + 3077);
}
void ABP_BaseCharacter_C::M_SetEyesMovement(const bool& value) {
	Write((byte*)this + 3077, value);
}
// Member Getter and Setter of HeadRotationAlpha
// Declaration: float HeadRotationAlpha
float ABP_BaseCharacter_C::M_GetHeadRotationAlpha() const {
	return Read<float>((byte*)this + 3080);
}
float* ABP_BaseCharacter_C::M_PtrGetHeadRotationAlpha() {
	return reinterpret_cast<float*>((byte*)this + 3080);
}
void ABP_BaseCharacter_C::M_SetHeadRotationAlpha(const float& value) {
	Write((byte*)this + 3080, value);
}
// Member Getter and Setter of BodyMovementAlpha
// Declaration: float BodyMovementAlpha
float ABP_BaseCharacter_C::M_GetBodyMovementAlpha() const {
	return Read<float>((byte*)this + 3084);
}
float* ABP_BaseCharacter_C::M_PtrGetBodyMovementAlpha() {
	return reinterpret_cast<float*>((byte*)this + 3084);
}
void ABP_BaseCharacter_C::M_SetBodyMovementAlpha(const float& value) {
	Write((byte*)this + 3084, value);
}
// Member Getter and Setter of MountMovementType
// Declaration: float MountMovementType
float ABP_BaseCharacter_C::M_GetMountMovementType() const {
	return Read<float>((byte*)this + 3088);
}
float* ABP_BaseCharacter_C::M_PtrGetMountMovementType() {
	return reinterpret_cast<float*>((byte*)this + 3088);
}
void ABP_BaseCharacter_C::M_SetMountMovementType(const float& value) {
	Write((byte*)this + 3088, value);
}
// Member Getter and Setter of MountTurnDirection
// Declaration: float MountTurnDirection
float ABP_BaseCharacter_C::M_GetMountTurnDirection() const {
	return Read<float>((byte*)this + 3092);
}
float* ABP_BaseCharacter_C::M_PtrGetMountTurnDirection() {
	return reinterpret_cast<float*>((byte*)this + 3092);
}
void ABP_BaseCharacter_C::M_SetMountTurnDirection(const float& value) {
	Write((byte*)this + 3092, value);
}
// Member Getter and Setter of IgnoreMountingAnimation
// Declaration: bool IgnoreMountingAnimation
bool ABP_BaseCharacter_C::M_GetIgnoreMountingAnimation() const {
	return Read<bool>((byte*)this + 3096);
}
bool* ABP_BaseCharacter_C::M_PtrGetIgnoreMountingAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 3096);
}
void ABP_BaseCharacter_C::M_SetIgnoreMountingAnimation(const bool& value) {
	Write((byte*)this + 3096, value);
}
// Member Getter and Setter of IgnoreDismountingAnimation
// Declaration: bool IgnoreDismountingAnimation
bool ABP_BaseCharacter_C::M_GetIgnoreDismountingAnimation() const {
	return Read<bool>((byte*)this + 3097);
}
bool* ABP_BaseCharacter_C::M_PtrGetIgnoreDismountingAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 3097);
}
void ABP_BaseCharacter_C::M_SetIgnoreDismountingAnimation(const bool& value) {
	Write((byte*)this + 3097, value);
}
// Member Getter and Setter of CurrentBasePresetID
// Declaration: struct FName CurrentBasePresetID
struct FName ABP_BaseCharacter_C::M_GetCurrentBasePresetID() const {
	return Read<struct FName>((byte*)this + 3100);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetCurrentBasePresetID() {
	return reinterpret_cast<struct FName*>((byte*)this + 3100);
}
void ABP_BaseCharacter_C::M_SetCurrentBasePresetID(const struct FName& value) {
	Write((byte*)this + 3100, value);
}
// Member Getter and Setter of CurrentProfessionPresetID
// Declaration: struct FName CurrentProfessionPresetID
struct FName ABP_BaseCharacter_C::M_GetCurrentProfessionPresetID() const {
	return Read<struct FName>((byte*)this + 3108);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetCurrentProfessionPresetID() {
	return reinterpret_cast<struct FName*>((byte*)this + 3108);
}
void ABP_BaseCharacter_C::M_SetCurrentProfessionPresetID(const struct FName& value) {
	Write((byte*)this + 3108, value);
}
// Member Getter and Setter of DrunkForwardAxis
// Declaration: float DrunkForwardAxis
float ABP_BaseCharacter_C::M_GetDrunkForwardAxis() const {
	return Read<float>((byte*)this + 3116);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardAxis() {
	return reinterpret_cast<float*>((byte*)this + 3116);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardAxis(const float& value) {
	Write((byte*)this + 3116, value);
}
// Member Getter and Setter of DrunkRightAxis
// Declaration: float DrunkRightAxis
float ABP_BaseCharacter_C::M_GetDrunkRightAxis() const {
	return Read<float>((byte*)this + 3120);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightAxis() {
	return reinterpret_cast<float*>((byte*)this + 3120);
}
void ABP_BaseCharacter_C::M_SetDrunkRightAxis(const float& value) {
	Write((byte*)this + 3120, value);
}
// Member Getter and Setter of DrunkForwardTarget
// Declaration: float DrunkForwardTarget
float ABP_BaseCharacter_C::M_GetDrunkForwardTarget() const {
	return Read<float>((byte*)this + 3124);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardTarget() {
	return reinterpret_cast<float*>((byte*)this + 3124);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardTarget(const float& value) {
	Write((byte*)this + 3124, value);
}
// Member Getter and Setter of DrunkRightTarget
// Declaration: float DrunkRightTarget
float ABP_BaseCharacter_C::M_GetDrunkRightTarget() const {
	return Read<float>((byte*)this + 3128);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightTarget() {
	return reinterpret_cast<float*>((byte*)this + 3128);
}
void ABP_BaseCharacter_C::M_SetDrunkRightTarget(const float& value) {
	Write((byte*)this + 3128, value);
}
// Member Getter and Setter of StartedCrafting
// Declaration: bool StartedCrafting
bool ABP_BaseCharacter_C::M_GetStartedCrafting() const {
	return Read<bool>((byte*)this + 3132);
}
bool* ABP_BaseCharacter_C::M_PtrGetStartedCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 3132);
}
void ABP_BaseCharacter_C::M_SetStartedCrafting(const bool& value) {
	Write((byte*)this + 3132, value);
}
// Member Getter and Setter of DrunkForwardDelayDuration
// Declaration: float DrunkForwardDelayDuration
float ABP_BaseCharacter_C::M_GetDrunkForwardDelayDuration() const {
	return Read<float>((byte*)this + 3136);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkForwardDelayDuration() {
	return reinterpret_cast<float*>((byte*)this + 3136);
}
void ABP_BaseCharacter_C::M_SetDrunkForwardDelayDuration(const float& value) {
	Write((byte*)this + 3136, value);
}
// Member Getter and Setter of DrunkRightDelayDuration
// Declaration: float DrunkRightDelayDuration
float ABP_BaseCharacter_C::M_GetDrunkRightDelayDuration() const {
	return Read<float>((byte*)this + 3140);
}
float* ABP_BaseCharacter_C::M_PtrGetDrunkRightDelayDuration() {
	return reinterpret_cast<float*>((byte*)this + 3140);
}
void ABP_BaseCharacter_C::M_SetDrunkRightDelayDuration(const float& value) {
	Write((byte*)this + 3140, value);
}
// Member Getter and Setter of MountAnimalType
// Declaration: TEnumAsByte<E_AnimalType> MountAnimalType
TEnumAsByte<E_AnimalType> ABP_BaseCharacter_C::M_GetMountAnimalType() const {
	return Read<TEnumAsByte<E_AnimalType>>((byte*)this + 3144);
}
TEnumAsByte<E_AnimalType>* ABP_BaseCharacter_C::M_PtrGetMountAnimalType() {
	return reinterpret_cast<TEnumAsByte<E_AnimalType>*>((byte*)this + 3144);
}
void ABP_BaseCharacter_C::M_SetMountAnimalType(const TEnumAsByte<E_AnimalType>& value) {
	Write((byte*)this + 3144, value);
}
// Member Getter and Setter of OnCraftingAnimEnd
// Declaration: TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> OnCraftingAnimEnd
TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> ABP_BaseCharacter_C::M_GetOnCraftingAnimEnd() const {
	return Read<TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>>((byte*)this + 3152);
}
TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnCraftingAnimEnd() {
	return reinterpret_cast<TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>*>((byte*)this + 3152);
}
void ABP_BaseCharacter_C::M_SetOnCraftingAnimEnd(const TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>& value) {
	Write((byte*)this + 3152, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector ABP_BaseCharacter_C::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 3168);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 3168);
}
void ABP_BaseCharacter_C::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 3168, value);
}
// Member Getter and Setter of Blocking
// Declaration: bool Blocking
bool ABP_BaseCharacter_C::M_GetBlocking() const {
	return Read<bool>((byte*)this + 3180);
}
bool* ABP_BaseCharacter_C::M_PtrGetBlocking() {
	return reinterpret_cast<bool*>((byte*)this + 3180);
}
void ABP_BaseCharacter_C::M_SetBlocking(const bool& value) {
	Write((byte*)this + 3180, value);
}
// Member Getter and Setter of InteractableHit
// Declaration: struct FHitResult InteractableHit
struct FHitResult ABP_BaseCharacter_C::M_GetInteractableHit() const {
	return Read<struct FHitResult>((byte*)this + 3184);
}
struct FHitResult* ABP_BaseCharacter_C::M_PtrGetInteractableHit() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 3184);
}
void ABP_BaseCharacter_C::M_SetInteractableHit(const struct FHitResult& value) {
	Write((byte*)this + 3184, value);
}
// Member Getter and Setter of MountRotation
// Declaration: struct FRotator MountRotation
struct FRotator ABP_BaseCharacter_C::M_GetMountRotation() const {
	return Read<struct FRotator>((byte*)this + 3320);
}
struct FRotator* ABP_BaseCharacter_C::M_PtrGetMountRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 3320);
}
void ABP_BaseCharacter_C::M_SetMountRotation(const struct FRotator& value) {
	Write((byte*)this + 3320, value);
}
// Member Getter and Setter of ImpaledItems
// Declaration: TArray<class AActor*> ImpaledItems
TArray<class AActor*> ABP_BaseCharacter_C::M_GetImpaledItems() const {
	return Read<TArray<class AActor*>>((byte*)this + 3336);
}
TArray<class AActor*>* ABP_BaseCharacter_C::M_PtrGetImpaledItems() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 3336);
}
void ABP_BaseCharacter_C::M_SetImpaledItems(const TArray<class AActor*>& value) {
	Write((byte*)this + 3336, value);
}
// Member Getter and Setter of SittingType
// Declaration: TEnumAsByte<E_SittingType> SittingType
TEnumAsByte<E_SittingType> ABP_BaseCharacter_C::M_GetSittingType() const {
	return Read<TEnumAsByte<E_SittingType>>((byte*)this + 3352);
}
TEnumAsByte<E_SittingType>* ABP_BaseCharacter_C::M_PtrGetSittingType() {
	return reinterpret_cast<TEnumAsByte<E_SittingType>*>((byte*)this + 3352);
}
void ABP_BaseCharacter_C::M_SetSittingType(const TEnumAsByte<E_SittingType>& value) {
	Write((byte*)this + 3352, value);
}
// Member Getter and Setter of HadToolBeforeDialogue
// Declaration: bool HadToolBeforeDialogue
bool ABP_BaseCharacter_C::M_GetHadToolBeforeDialogue() const {
	return Read<bool>((byte*)this + 3353);
}
bool* ABP_BaseCharacter_C::M_PtrGetHadToolBeforeDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 3353);
}
void ABP_BaseCharacter_C::M_SetHadToolBeforeDialogue(const bool& value) {
	Write((byte*)this + 3353, value);
}
// Member Getter and Setter of Underwater
// Declaration: bool Underwater
bool ABP_BaseCharacter_C::M_GetUnderwater() const {
	return Read<bool>((byte*)this + 3354);
}
bool* ABP_BaseCharacter_C::M_PtrGetUnderwater() {
	return reinterpret_cast<bool*>((byte*)this + 3354);
}
void ABP_BaseCharacter_C::M_SetUnderwater(const bool& value) {
	Write((byte*)this + 3354, value);
}
// Member Getter and Setter of IsInTPPCombatState
// Declaration: bool IsInTPPCombatState
bool ABP_BaseCharacter_C::M_GetIsInTPPCombatState() const {
	return Read<bool>((byte*)this + 3355);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsInTPPCombatState() {
	return reinterpret_cast<bool*>((byte*)this + 3355);
}
void ABP_BaseCharacter_C::M_SetIsInTPPCombatState(const bool& value) {
	Write((byte*)this + 3355, value);
}
// Member Getter and Setter of EnemyDamageMultiplier
// Declaration: float EnemyDamageMultiplier
float ABP_BaseCharacter_C::M_GetEnemyDamageMultiplier() const {
	return Read<float>((byte*)this + 3356);
}
float* ABP_BaseCharacter_C::M_PtrGetEnemyDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 3356);
}
void ABP_BaseCharacter_C::M_SetEnemyDamageMultiplier(const float& value) {
	Write((byte*)this + 3356, value);
}
// Member Getter and Setter of OnStartGettingUp
// Declaration: TAssetPtr<class FOnStartGettingUp__DelegateSignature> OnStartGettingUp
TAssetPtr<class FOnStartGettingUp__DelegateSignature> ABP_BaseCharacter_C::M_GetOnStartGettingUp() const {
	return Read<TAssetPtr<class FOnStartGettingUp__DelegateSignature>>((byte*)this + 3360);
}
TAssetPtr<class FOnStartGettingUp__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnStartGettingUp() {
	return reinterpret_cast<TAssetPtr<class FOnStartGettingUp__DelegateSignature>*>((byte*)this + 3360);
}
void ABP_BaseCharacter_C::M_SetOnStartGettingUp(const TAssetPtr<class FOnStartGettingUp__DelegateSignature>& value) {
	Write((byte*)this + 3360, value);
}
// Member Getter and Setter of OnViewmodeChanged
// Declaration: TAssetPtr<class FOnViewmodeChanged__DelegateSignature> OnViewmodeChanged
TAssetPtr<class FOnViewmodeChanged__DelegateSignature> ABP_BaseCharacter_C::M_GetOnViewmodeChanged() const {
	return Read<TAssetPtr<class FOnViewmodeChanged__DelegateSignature>>((byte*)this + 3376);
}
TAssetPtr<class FOnViewmodeChanged__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnViewmodeChanged() {
	return reinterpret_cast<TAssetPtr<class FOnViewmodeChanged__DelegateSignature>*>((byte*)this + 3376);
}
void ABP_BaseCharacter_C::M_SetOnViewmodeChanged(const TAssetPtr<class FOnViewmodeChanged__DelegateSignature>& value) {
	Write((byte*)this + 3376, value);
}
// Member Getter and Setter of WantsToDespawn
// Declaration: bool WantsToDespawn
bool ABP_BaseCharacter_C::M_GetWantsToDespawn() const {
	return Read<bool>((byte*)this + 3392);
}
bool* ABP_BaseCharacter_C::M_PtrGetWantsToDespawn() {
	return reinterpret_cast<bool*>((byte*)this + 3392);
}
void ABP_BaseCharacter_C::M_SetWantsToDespawn(const bool& value) {
	Write((byte*)this + 3392, value);
}
// Member Getter and Setter of Velocity_Length
// Declaration: float Velocity_Length
float ABP_BaseCharacter_C::M_GetVelocity_Length() const {
	return Read<float>((byte*)this + 3396);
}
float* ABP_BaseCharacter_C::M_PtrGetVelocity_Length() {
	return reinterpret_cast<float*>((byte*)this + 3396);
}
void ABP_BaseCharacter_C::M_SetVelocity_Length(const float& value) {
	Write((byte*)this + 3396, value);
}
// Member Getter and Setter of WorkPlayRate
// Declaration: float WorkPlayRate
float ABP_BaseCharacter_C::M_GetWorkPlayRate() const {
	return Read<float>((byte*)this + 3400);
}
float* ABP_BaseCharacter_C::M_PtrGetWorkPlayRate() {
	return reinterpret_cast<float*>((byte*)this + 3400);
}
void ABP_BaseCharacter_C::M_SetWorkPlayRate(const float& value) {
	Write((byte*)this + 3400, value);
}
// Member Getter and Setter of HatsValue
// Declaration: float HatsValue
float ABP_BaseCharacter_C::M_GetHatsValue() const {
	return Read<float>((byte*)this + 3404);
}
float* ABP_BaseCharacter_C::M_PtrGetHatsValue() {
	return reinterpret_cast<float*>((byte*)this + 3404);
}
void ABP_BaseCharacter_C::M_SetHatsValue(const float& value) {
	Write((byte*)this + 3404, value);
}
// Member Getter and Setter of CachedPreset
// Declaration: struct FST_NPCsPresets CachedPreset
struct FST_NPCsPresets ABP_BaseCharacter_C::M_GetCachedPreset() const {
	return Read<struct FST_NPCsPresets>((byte*)this + 3408);
}
struct FST_NPCsPresets* ABP_BaseCharacter_C::M_PtrGetCachedPreset() {
	return reinterpret_cast<struct FST_NPCsPresets*>((byte*)this + 3408);
}
void ABP_BaseCharacter_C::M_SetCachedPreset(const struct FST_NPCsPresets& value) {
	Write((byte*)this + 3408, value);
}
// Member Getter and Setter of MinRandomSpeedMultiplier
// Declaration: float MinRandomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetMinRandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 4832);
}
float* ABP_BaseCharacter_C::M_PtrGetMinRandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4832);
}
void ABP_BaseCharacter_C::M_SetMinRandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 4832, value);
}
// Member Getter and Setter of MaxRandomSpeedMultiplier
// Declaration: float MaxRandomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetMaxRandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 4836);
}
float* ABP_BaseCharacter_C::M_PtrGetMaxRandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4836);
}
void ABP_BaseCharacter_C::M_SetMaxRandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 4836, value);
}
// Member Getter and Setter of randomSpeedMultiplier
// Declaration: float randomSpeedMultiplier
float ABP_BaseCharacter_C::M_GetrandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 4840);
}
float* ABP_BaseCharacter_C::M_PtrGetrandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4840);
}
void ABP_BaseCharacter_C::M_SetrandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 4840, value);
}
// Member Getter and Setter of IsRotationManaged
// Declaration: bool IsRotationManaged
bool ABP_BaseCharacter_C::M_GetIsRotationManaged() const {
	return Read<bool>((byte*)this + 4844);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRotationManaged() {
	return reinterpret_cast<bool*>((byte*)this + 4844);
}
void ABP_BaseCharacter_C::M_SetIsRotationManaged(const bool& value) {
	Write((byte*)this + 4844, value);
}
// Member Getter and Setter of slopeSpeedMultiplier
// Declaration: float slopeSpeedMultiplier
float ABP_BaseCharacter_C::M_GetslopeSpeedMultiplier() const {
	return Read<float>((byte*)this + 4848);
}
float* ABP_BaseCharacter_C::M_PtrGetslopeSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4848);
}
void ABP_BaseCharacter_C::M_SetslopeSpeedMultiplier(const float& value) {
	Write((byte*)this + 4848, value);
}
// Member Getter and Setter of TicksDelayToCalculateEssentialVariables
// Declaration: int32_t TicksDelayToCalculateEssentialVariables
int32_t ABP_BaseCharacter_C::M_GetTicksDelayToCalculateEssentialVariables() const {
	return Read<int32_t>((byte*)this + 4852);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetTicksDelayToCalculateEssentialVariables() {
	return reinterpret_cast<int32_t*>((byte*)this + 4852);
}
void ABP_BaseCharacter_C::M_SetTicksDelayToCalculateEssentialVariables(const int32_t& value) {
	Write((byte*)this + 4852, value);
}
// Member Getter and Setter of TicksLeftToCalculateEssentialsVariables
// Declaration: int32_t TicksLeftToCalculateEssentialsVariables
int32_t ABP_BaseCharacter_C::M_GetTicksLeftToCalculateEssentialsVariables() const {
	return Read<int32_t>((byte*)this + 4856);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetTicksLeftToCalculateEssentialsVariables() {
	return reinterpret_cast<int32_t*>((byte*)this + 4856);
}
void ABP_BaseCharacter_C::M_SetTicksLeftToCalculateEssentialsVariables(const int32_t& value) {
	Write((byte*)this + 4856, value);
}
// Member Getter and Setter of FallStartTime
// Declaration: float FallStartTime
float ABP_BaseCharacter_C::M_GetFallStartTime() const {
	return Read<float>((byte*)this + 4860);
}
float* ABP_BaseCharacter_C::M_PtrGetFallStartTime() {
	return reinterpret_cast<float*>((byte*)this + 4860);
}
void ABP_BaseCharacter_C::M_SetFallStartTime(const float& value) {
	Write((byte*)this + 4860, value);
}
// Member Getter and Setter of IsRagdollActivationLocked
// Declaration: bool IsRagdollActivationLocked
bool ABP_BaseCharacter_C::M_GetIsRagdollActivationLocked() const {
	return Read<bool>((byte*)this + 4864);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollActivationLocked() {
	return reinterpret_cast<bool*>((byte*)this + 4864);
}
void ABP_BaseCharacter_C::M_SetIsRagdollActivationLocked(const bool& value) {
	Write((byte*)this + 4864, value);
}
// Member Getter and Setter of InitialRagdollVelocity
// Declaration: struct FVector InitialRagdollVelocity
struct FVector ABP_BaseCharacter_C::M_GetInitialRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 4868);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetInitialRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 4868);
}
void ABP_BaseCharacter_C::M_SetInitialRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 4868, value);
}
// Member Getter and Setter of ShouldUpdateRateOptimizationsBeEnabled
// Declaration: bool ShouldUpdateRateOptimizationsBeEnabled
bool ABP_BaseCharacter_C::M_GetShouldUpdateRateOptimizationsBeEnabled() const {
	return Read<bool>((byte*)this + 4880);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldUpdateRateOptimizationsBeEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 4880);
}
void ABP_BaseCharacter_C::M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value) {
	Write((byte*)this + 4880, value);
}
// Member Getter and Setter of CurrentLookAtTargetLocation
// Declaration: struct FVector CurrentLookAtTargetLocation
struct FVector ABP_BaseCharacter_C::M_GetCurrentLookAtTargetLocation() const {
	return Read<struct FVector>((byte*)this + 4884);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetCurrentLookAtTargetLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 4884);
}
void ABP_BaseCharacter_C::M_SetCurrentLookAtTargetLocation(const struct FVector& value) {
	Write((byte*)this + 4884, value);
}
// Member Getter and Setter of CharacterEyesLocation
// Declaration: struct FVector CharacterEyesLocation
struct FVector ABP_BaseCharacter_C::M_GetCharacterEyesLocation() const {
	return Read<struct FVector>((byte*)this + 4896);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetCharacterEyesLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 4896);
}
void ABP_BaseCharacter_C::M_SetCharacterEyesLocation(const struct FVector& value) {
	Write((byte*)this + 4896, value);
}
// Member Getter and Setter of IsPickingObject
// Declaration: bool IsPickingObject
bool ABP_BaseCharacter_C::M_GetIsPickingObject() const {
	return Read<bool>((byte*)this + 4908);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsPickingObject() {
	return reinterpret_cast<bool*>((byte*)this + 4908);
}
void ABP_BaseCharacter_C::M_SetIsPickingObject(const bool& value) {
	Write((byte*)this + 4908, value);
}
// Member Getter and Setter of HairDamping
// Declaration: float HairDamping
float ABP_BaseCharacter_C::M_GetHairDamping() const {
	return Read<float>((byte*)this + 4912);
}
float* ABP_BaseCharacter_C::M_PtrGetHairDamping() {
	return reinterpret_cast<float*>((byte*)this + 4912);
}
void ABP_BaseCharacter_C::M_SetHairDamping(const float& value) {
	Write((byte*)this + 4912, value);
}
// Member Getter and Setter of HairSpring
// Declaration: float HairSpring
float ABP_BaseCharacter_C::M_GetHairSpring() const {
	return Read<float>((byte*)this + 4916);
}
float* ABP_BaseCharacter_C::M_PtrGetHairSpring() {
	return reinterpret_cast<float*>((byte*)this + 4916);
}
void ABP_BaseCharacter_C::M_SetHairSpring(const float& value) {
	Write((byte*)this + 4916, value);
}
// Member Getter and Setter of IsHairMovementEnabled
// Declaration: bool IsHairMovementEnabled
bool ABP_BaseCharacter_C::M_GetIsHairMovementEnabled() const {
	return Read<bool>((byte*)this + 4920);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsHairMovementEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 4920);
}
void ABP_BaseCharacter_C::M_SetIsHairMovementEnabled(const bool& value) {
	Write((byte*)this + 4920, value);
}
// Member Getter and Setter of PushSpeedMultiplier
// Declaration: float PushSpeedMultiplier
float ABP_BaseCharacter_C::M_GetPushSpeedMultiplier() const {
	return Read<float>((byte*)this + 4924);
}
float* ABP_BaseCharacter_C::M_PtrGetPushSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4924);
}
void ABP_BaseCharacter_C::M_SetPushSpeedMultiplier(const float& value) {
	Write((byte*)this + 4924, value);
}
// Member Getter and Setter of HitSpeedMultiplier
// Declaration: float HitSpeedMultiplier
float ABP_BaseCharacter_C::M_GetHitSpeedMultiplier() const {
	return Read<float>((byte*)this + 4928);
}
float* ABP_BaseCharacter_C::M_PtrGetHitSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4928);
}
void ABP_BaseCharacter_C::M_SetHitSpeedMultiplier(const float& value) {
	Write((byte*)this + 4928, value);
}
// Member Getter and Setter of TemporarySpeedMultiplier
// Declaration: float TemporarySpeedMultiplier
float ABP_BaseCharacter_C::M_GetTemporarySpeedMultiplier() const {
	return Read<float>((byte*)this + 4932);
}
float* ABP_BaseCharacter_C::M_PtrGetTemporarySpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 4932);
}
void ABP_BaseCharacter_C::M_SetTemporarySpeedMultiplier(const float& value) {
	Write((byte*)this + 4932, value);
}
// Member Getter and Setter of SimulatedBodiesBeforeRagdoll
// Declaration: TArray<bool> SimulatedBodiesBeforeRagdoll
TArray<bool> ABP_BaseCharacter_C::M_GetSimulatedBodiesBeforeRagdoll() const {
	return Read<TArray<bool>>((byte*)this + 4936);
}
TArray<bool>* ABP_BaseCharacter_C::M_PtrGetSimulatedBodiesBeforeRagdoll() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 4936);
}
void ABP_BaseCharacter_C::M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value) {
	Write((byte*)this + 4936, value);
}
// Member Getter and Setter of IsRagdollOnHitEnabled
// Declaration: bool IsRagdollOnHitEnabled
bool ABP_BaseCharacter_C::M_GetIsRagdollOnHitEnabled() const {
	return Read<bool>((byte*)this + 4952);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollOnHitEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 4952);
}
void ABP_BaseCharacter_C::M_SetIsRagdollOnHitEnabled(const bool& value) {
	Write((byte*)this + 4952, value);
}
// Member Getter and Setter of HitPhysicsBlendWeight
// Declaration: float HitPhysicsBlendWeight
float ABP_BaseCharacter_C::M_GetHitPhysicsBlendWeight() const {
	return Read<float>((byte*)this + 4956);
}
float* ABP_BaseCharacter_C::M_PtrGetHitPhysicsBlendWeight() {
	return reinterpret_cast<float*>((byte*)this + 4956);
}
void ABP_BaseCharacter_C::M_SetHitPhysicsBlendWeight(const float& value) {
	Write((byte*)this + 4956, value);
}
// Member Getter and Setter of InactiveInfantPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveInfantPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveInfantPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 4960);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveInfantPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 4960);
}
void ABP_BaseCharacter_C::M_SetInactiveInfantPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 4960, value);
}
// Member Getter and Setter of InactiveToddlerPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveToddlerPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveToddlerPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 4968);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveToddlerPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 4968);
}
void ABP_BaseCharacter_C::M_SetInactiveToddlerPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 4968, value);
}
// Member Getter and Setter of InactiveGirlPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveGirlPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveGirlPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 4976);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveGirlPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 4976);
}
void ABP_BaseCharacter_C::M_SetInactiveGirlPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 4976, value);
}
// Member Getter and Setter of InactiveBoyPhysicsAsset
// Declaration: class UPhysicsAsset* InactiveBoyPhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveBoyPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 4984);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveBoyPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 4984);
}
void ABP_BaseCharacter_C::M_SetInactiveBoyPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 4984, value);
}
// Member Getter and Setter of InactiveFemalePhysicsAsset
// Declaration: class UPhysicsAsset* InactiveFemalePhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveFemalePhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 4992);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveFemalePhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 4992);
}
void ABP_BaseCharacter_C::M_SetInactiveFemalePhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 4992, value);
}
// Member Getter and Setter of InactiveMalePhysicsAsset
// Declaration: class UPhysicsAsset* InactiveMalePhysicsAsset
class UPhysicsAsset* ABP_BaseCharacter_C::M_GetInactiveMalePhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 5000);
}
class UPhysicsAsset** ABP_BaseCharacter_C::M_PtrGetInactiveMalePhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 5000);
}
void ABP_BaseCharacter_C::M_SetInactiveMalePhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 5000, value);
}
// Member Getter and Setter of MeshCollisionDisableTime
// Declaration: float MeshCollisionDisableTime
float ABP_BaseCharacter_C::M_GetMeshCollisionDisableTime() const {
	return Read<float>((byte*)this + 5008);
}
float* ABP_BaseCharacter_C::M_PtrGetMeshCollisionDisableTime() {
	return reinterpret_cast<float*>((byte*)this + 5008);
}
void ABP_BaseCharacter_C::M_SetMeshCollisionDisableTime(const float& value) {
	Write((byte*)this + 5008, value);
}
// Member Getter and Setter of TargetMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> TargetMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_BaseCharacter_C::M_GetTargetMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 5012);
}
TEnumAsByte<ECollisionEnabled>* ABP_BaseCharacter_C::M_PtrGetTargetMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 5012);
}
void ABP_BaseCharacter_C::M_SetTargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 5012, value);
}
// Member Getter and Setter of PreviousMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> PreviousMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_BaseCharacter_C::M_GetPreviousMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 5013);
}
TEnumAsByte<ECollisionEnabled>* ABP_BaseCharacter_C::M_PtrGetPreviousMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 5013);
}
void ABP_BaseCharacter_C::M_SetPreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 5013, value);
}
// Member Getter and Setter of IsDistanceMeshCollisionOptimizationEnabled
// Declaration: bool IsDistanceMeshCollisionOptimizationEnabled
bool ABP_BaseCharacter_C::M_GetIsDistanceMeshCollisionOptimizationEnabled() const {
	return Read<bool>((byte*)this + 5014);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsDistanceMeshCollisionOptimizationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5014);
}
void ABP_BaseCharacter_C::M_SetIsDistanceMeshCollisionOptimizationEnabled(const bool& value) {
	Write((byte*)this + 5014, value);
}
// Member Getter and Setter of IsPhysicsAssetSwitchingEnabled
// Declaration: bool IsPhysicsAssetSwitchingEnabled
bool ABP_BaseCharacter_C::M_GetIsPhysicsAssetSwitchingEnabled() const {
	return Read<bool>((byte*)this + 5015);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsPhysicsAssetSwitchingEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5015);
}
void ABP_BaseCharacter_C::M_SetIsPhysicsAssetSwitchingEnabled(const bool& value) {
	Write((byte*)this + 5015, value);
}
// Member Getter and Setter of ImplementsPlayerInterface
// Declaration: bool ImplementsPlayerInterface
bool ABP_BaseCharacter_C::M_GetImplementsPlayerInterface() const {
	return Read<bool>((byte*)this + 5016);
}
bool* ABP_BaseCharacter_C::M_PtrGetImplementsPlayerInterface() {
	return reinterpret_cast<bool*>((byte*)this + 5016);
}
void ABP_BaseCharacter_C::M_SetImplementsPlayerInterface(const bool& value) {
	Write((byte*)this + 5016, value);
}
// Member Getter and Setter of MountReference
// Declaration: class APawn* MountReference
class APawn* ABP_BaseCharacter_C::M_GetMountReference() const {
	return Read<class APawn*>((byte*)this + 5024);
}
class APawn** ABP_BaseCharacter_C::M_PtrGetMountReference() {
	return reinterpret_cast<class APawn**>((byte*)this + 5024);
}
void ABP_BaseCharacter_C::M_SetMountReference(const class APawn*& value) {
	Write((byte*)this + 5024, value);
}
// Member Getter and Setter of CurrentMountID
// Declaration: struct FGuid CurrentMountID
struct FGuid ABP_BaseCharacter_C::M_GetCurrentMountID() const {
	return Read<struct FGuid>((byte*)this + 5032);
}
struct FGuid* ABP_BaseCharacter_C::M_PtrGetCurrentMountID() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 5032);
}
void ABP_BaseCharacter_C::M_SetCurrentMountID(const struct FGuid& value) {
	Write((byte*)this + 5032, value);
}
// Member Getter and Setter of CharacterID
// Declaration: struct FGuid CharacterID
struct FGuid ABP_BaseCharacter_C::M_GetCharacterID() const {
	return Read<struct FGuid>((byte*)this + 5048);
}
struct FGuid* ABP_BaseCharacter_C::M_PtrGetCharacterID() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 5048);
}
void ABP_BaseCharacter_C::M_SetCharacterID(const struct FGuid& value) {
	Write((byte*)this + 5048, value);
}
// Member Getter and Setter of MountWhistleSound
// Declaration: class USoundBase* MountWhistleSound
class USoundBase* ABP_BaseCharacter_C::M_GetMountWhistleSound() const {
	return Read<class USoundBase*>((byte*)this + 5064);
}
class USoundBase** ABP_BaseCharacter_C::M_PtrGetMountWhistleSound() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 5064);
}
void ABP_BaseCharacter_C::M_SetMountWhistleSound(const class USoundBase*& value) {
	Write((byte*)this + 5064, value);
}
// Member Getter and Setter of SkinColorID
// Declaration: int32_t SkinColorID
int32_t ABP_BaseCharacter_C::M_GetSkinColorID() const {
	return Read<int32_t>((byte*)this + 5072);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetSkinColorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 5072);
}
void ABP_BaseCharacter_C::M_SetSkinColorID(const int32_t& value) {
	Write((byte*)this + 5072, value);
}
// Member Getter and Setter of HairColorID
// Declaration: int32_t HairColorID
int32_t ABP_BaseCharacter_C::M_GetHairColorID() const {
	return Read<int32_t>((byte*)this + 5076);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetHairColorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 5076);
}
void ABP_BaseCharacter_C::M_SetHairColorID(const int32_t& value) {
	Write((byte*)this + 5076, value);
}
// Member Getter and Setter of OnWaitCrafting
// Declaration: TAssetPtr<class FOnWaitCrafting__DelegateSignature> OnWaitCrafting
TAssetPtr<class FOnWaitCrafting__DelegateSignature> ABP_BaseCharacter_C::M_GetOnWaitCrafting() const {
	return Read<TAssetPtr<class FOnWaitCrafting__DelegateSignature>>((byte*)this + 5080);
}
TAssetPtr<class FOnWaitCrafting__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnWaitCrafting() {
	return reinterpret_cast<TAssetPtr<class FOnWaitCrafting__DelegateSignature>*>((byte*)this + 5080);
}
void ABP_BaseCharacter_C::M_SetOnWaitCrafting(const TAssetPtr<class FOnWaitCrafting__DelegateSignature>& value) {
	Write((byte*)this + 5080, value);
}
// Member Getter and Setter of InWaterDeep
// Declaration: float InWaterDeep
float ABP_BaseCharacter_C::M_GetInWaterDeep() const {
	return Read<float>((byte*)this + 5096);
}
float* ABP_BaseCharacter_C::M_PtrGetInWaterDeep() {
	return reinterpret_cast<float*>((byte*)this + 5096);
}
void ABP_BaseCharacter_C::M_SetInWaterDeep(const float& value) {
	Write((byte*)this + 5096, value);
}
// Member Getter and Setter of SkipAnim
// Declaration: bool SkipAnim
bool ABP_BaseCharacter_C::M_GetSkipAnim() const {
	return Read<bool>((byte*)this + 5100);
}
bool* ABP_BaseCharacter_C::M_PtrGetSkipAnim() {
	return reinterpret_cast<bool*>((byte*)this + 5100);
}
void ABP_BaseCharacter_C::M_SetSkipAnim(const bool& value) {
	Write((byte*)this + 5100, value);
}
// Member Getter and Setter of OnUnRagdoll
// Declaration: TAssetPtr<class FOnUnRagdoll__DelegateSignature> OnUnRagdoll
TAssetPtr<class FOnUnRagdoll__DelegateSignature> ABP_BaseCharacter_C::M_GetOnUnRagdoll() const {
	return Read<TAssetPtr<class FOnUnRagdoll__DelegateSignature>>((byte*)this + 5104);
}
TAssetPtr<class FOnUnRagdoll__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnUnRagdoll() {
	return reinterpret_cast<TAssetPtr<class FOnUnRagdoll__DelegateSignature>*>((byte*)this + 5104);
}
void ABP_BaseCharacter_C::M_SetOnUnRagdoll(const TAssetPtr<class FOnUnRagdoll__DelegateSignature>& value) {
	Write((byte*)this + 5104, value);
}
// Member Getter and Setter of RagdollChange
// Declaration: bool RagdollChange
bool ABP_BaseCharacter_C::M_GetRagdollChange() const {
	return Read<bool>((byte*)this + 5120);
}
bool* ABP_BaseCharacter_C::M_PtrGetRagdollChange() {
	return reinterpret_cast<bool*>((byte*)this + 5120);
}
void ABP_BaseCharacter_C::M_SetRagdollChange(const bool& value) {
	Write((byte*)this + 5120, value);
}
// Member Getter and Setter of GameMenuOpen
// Declaration: bool GameMenuOpen
bool ABP_BaseCharacter_C::M_GetGameMenuOpen() const {
	return Read<bool>((byte*)this + 5121);
}
bool* ABP_BaseCharacter_C::M_PtrGetGameMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 5121);
}
void ABP_BaseCharacter_C::M_SetGameMenuOpen(const bool& value) {
	Write((byte*)this + 5121, value);
}
// Member Getter and Setter of IKEnabled
// Declaration: bool IKEnabled
bool ABP_BaseCharacter_C::M_GetIKEnabled() const {
	return Read<bool>((byte*)this + 5122);
}
bool* ABP_BaseCharacter_C::M_PtrGetIKEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5122);
}
void ABP_BaseCharacter_C::M_SetIKEnabled(const bool& value) {
	Write((byte*)this + 5122, value);
}
// Member Getter and Setter of ShouldStopCrafting
// Declaration: bool ShouldStopCrafting
bool ABP_BaseCharacter_C::M_GetShouldStopCrafting() const {
	return Read<bool>((byte*)this + 5123);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldStopCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 5123);
}
void ABP_BaseCharacter_C::M_SetShouldStopCrafting(const bool& value) {
	Write((byte*)this + 5123, value);
}
// Member Getter and Setter of CoopStatsProtection
// Declaration: bool CoopStatsProtection
bool ABP_BaseCharacter_C::M_GetCoopStatsProtection() const {
	return Read<bool>((byte*)this + 5124);
}
bool* ABP_BaseCharacter_C::M_PtrGetCoopStatsProtection() {
	return reinterpret_cast<bool*>((byte*)this + 5124);
}
void ABP_BaseCharacter_C::M_SetCoopStatsProtection(const bool& value) {
	Write((byte*)this + 5124, value);
}
// Member Getter and Setter of ShouldRagdollOnDismount
// Declaration: bool ShouldRagdollOnDismount
bool ABP_BaseCharacter_C::M_GetShouldRagdollOnDismount() const {
	return Read<bool>((byte*)this + 5125);
}
bool* ABP_BaseCharacter_C::M_PtrGetShouldRagdollOnDismount() {
	return reinterpret_cast<bool*>((byte*)this + 5125);
}
void ABP_BaseCharacter_C::M_SetShouldRagdollOnDismount(const bool& value) {
	Write((byte*)this + 5125, value);
}
// Member Getter and Setter of RagdollState
// Declaration: struct FST_CharacterRagdollState RagdollState
struct FST_CharacterRagdollState ABP_BaseCharacter_C::M_GetRagdollState() const {
	return Read<struct FST_CharacterRagdollState>((byte*)this + 5128);
}
struct FST_CharacterRagdollState* ABP_BaseCharacter_C::M_PtrGetRagdollState() {
	return reinterpret_cast<struct FST_CharacterRagdollState*>((byte*)this + 5128);
}
void ABP_BaseCharacter_C::M_SetRagdollState(const struct FST_CharacterRagdollState& value) {
	Write((byte*)this + 5128, value);
}
// Member Getter and Setter of RagdollCheckTimer
// Declaration: struct FTimerHandle RagdollCheckTimer
struct FTimerHandle ABP_BaseCharacter_C::M_GetRagdollCheckTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 5160);
}
struct FTimerHandle* ABP_BaseCharacter_C::M_PtrGetRagdollCheckTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5160);
}
void ABP_BaseCharacter_C::M_SetRagdollCheckTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 5160, value);
}
// Member Getter and Setter of IsRagdollEnabled
// Declaration: bool IsRagdollEnabled
bool ABP_BaseCharacter_C::M_GetIsRagdollEnabled() const {
	return Read<bool>((byte*)this + 5168);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 5168);
}
void ABP_BaseCharacter_C::M_SetIsRagdollEnabled(const bool& value) {
	Write((byte*)this + 5168, value);
}
// Member Getter and Setter of LastMountedVelocity
// Declaration: struct FVector LastMountedVelocity
struct FVector ABP_BaseCharacter_C::M_GetLastMountedVelocity() const {
	return Read<struct FVector>((byte*)this + 5172);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetLastMountedVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5172);
}
void ABP_BaseCharacter_C::M_SetLastMountedVelocity(const struct FVector& value) {
	Write((byte*)this + 5172, value);
}
// Member Getter and Setter of LastMountedLocation
// Declaration: struct FVector LastMountedLocation
struct FVector ABP_BaseCharacter_C::M_GetLastMountedLocation() const {
	return Read<struct FVector>((byte*)this + 5184);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetLastMountedLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5184);
}
void ABP_BaseCharacter_C::M_SetLastMountedLocation(const struct FVector& value) {
	Write((byte*)this + 5184, value);
}
// Member Getter and Setter of RagdollBonesData
// Declaration: TArray<struct FST_BoneReplicationData> RagdollBonesData
TArray<struct FST_BoneReplicationData> ABP_BaseCharacter_C::M_GetRagdollBonesData() const {
	return Read<TArray<struct FST_BoneReplicationData>>((byte*)this + 5200);
}
TArray<struct FST_BoneReplicationData>* ABP_BaseCharacter_C::M_PtrGetRagdollBonesData() {
	return reinterpret_cast<TArray<struct FST_BoneReplicationData>*>((byte*)this + 5200);
}
void ABP_BaseCharacter_C::M_SetRagdollBonesData(const TArray<struct FST_BoneReplicationData>& value) {
	Write((byte*)this + 5200, value);
}
// Member Getter and Setter of RagdollReplicatedBoneNames
// Declaration: TArray<struct FName> RagdollReplicatedBoneNames
TArray<struct FName> ABP_BaseCharacter_C::M_GetRagdollReplicatedBoneNames() const {
	return Read<TArray<struct FName>>((byte*)this + 5216);
}
TArray<struct FName>* ABP_BaseCharacter_C::M_PtrGetRagdollReplicatedBoneNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 5216);
}
void ABP_BaseCharacter_C::M_SetRagdollReplicatedBoneNames(const TArray<struct FName>& value) {
	Write((byte*)this + 5216, value);
}
// Member Getter and Setter of RagdollLastBoneReplicationTime
// Declaration: float RagdollLastBoneReplicationTime
float ABP_BaseCharacter_C::M_GetRagdollLastBoneReplicationTime() const {
	return Read<float>((byte*)this + 5232);
}
float* ABP_BaseCharacter_C::M_PtrGetRagdollLastBoneReplicationTime() {
	return reinterpret_cast<float*>((byte*)this + 5232);
}
void ABP_BaseCharacter_C::M_SetRagdollLastBoneReplicationTime(const float& value) {
	Write((byte*)this + 5232, value);
}
// Member Getter and Setter of PotentialInitialRagdollVelocity
// Declaration: struct FVector PotentialInitialRagdollVelocity
struct FVector ABP_BaseCharacter_C::M_GetPotentialInitialRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 5236);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetPotentialInitialRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5236);
}
void ABP_BaseCharacter_C::M_SetPotentialInitialRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 5236, value);
}
// Member Getter and Setter of RagdollStartTime
// Declaration: float RagdollStartTime
float ABP_BaseCharacter_C::M_GetRagdollStartTime() const {
	return Read<float>((byte*)this + 5248);
}
float* ABP_BaseCharacter_C::M_PtrGetRagdollStartTime() {
	return reinterpret_cast<float*>((byte*)this + 5248);
}
void ABP_BaseCharacter_C::M_SetRagdollStartTime(const float& value) {
	Write((byte*)this + 5248, value);
}
// Member Getter and Setter of StartRagdollImpulseForce
// Declaration: struct FVector StartRagdollImpulseForce
struct FVector ABP_BaseCharacter_C::M_GetStartRagdollImpulseForce() const {
	return Read<struct FVector>((byte*)this + 5252);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetStartRagdollImpulseForce() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5252);
}
void ABP_BaseCharacter_C::M_SetStartRagdollImpulseForce(const struct FVector& value) {
	Write((byte*)this + 5252, value);
}
// Member Getter and Setter of StartRagdollImpulseBoneName
// Declaration: struct FName StartRagdollImpulseBoneName
struct FName ABP_BaseCharacter_C::M_GetStartRagdollImpulseBoneName() const {
	return Read<struct FName>((byte*)this + 5264);
}
struct FName* ABP_BaseCharacter_C::M_PtrGetStartRagdollImpulseBoneName() {
	return reinterpret_cast<struct FName*>((byte*)this + 5264);
}
void ABP_BaseCharacter_C::M_SetStartRagdollImpulseBoneName(const struct FName& value) {
	Write((byte*)this + 5264, value);
}
// Member Getter and Setter of LastDamageInfluenceCoefficient
// Declaration: float LastDamageInfluenceCoefficient
float ABP_BaseCharacter_C::M_GetLastDamageInfluenceCoefficient() const {
	return Read<float>((byte*)this + 5272);
}
float* ABP_BaseCharacter_C::M_PtrGetLastDamageInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 5272);
}
void ABP_BaseCharacter_C::M_SetLastDamageInfluenceCoefficient(const float& value) {
	Write((byte*)this + 5272, value);
}
// Member Getter and Setter of WasMountDriverOverlappingPreviously
// Declaration: bool WasMountDriverOverlappingPreviously
bool ABP_BaseCharacter_C::M_GetWasMountDriverOverlappingPreviously() const {
	return Read<bool>((byte*)this + 5276);
}
bool* ABP_BaseCharacter_C::M_PtrGetWasMountDriverOverlappingPreviously() {
	return reinterpret_cast<bool*>((byte*)this + 5276);
}
void ABP_BaseCharacter_C::M_SetWasMountDriverOverlappingPreviously(const bool& value) {
	Write((byte*)this + 5276, value);
}
// Member Getter and Setter of PreviousMountDriverOverlappingCheckLocation
// Declaration: struct FVector PreviousMountDriverOverlappingCheckLocation
struct FVector ABP_BaseCharacter_C::M_GetPreviousMountDriverOverlappingCheckLocation() const {
	return Read<struct FVector>((byte*)this + 5280);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetPreviousMountDriverOverlappingCheckLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5280);
}
void ABP_BaseCharacter_C::M_SetPreviousMountDriverOverlappingCheckLocation(const struct FVector& value) {
	Write((byte*)this + 5280, value);
}
// Member Getter and Setter of IsPreviousMountDriverOverlappingCheckLocationValid
// Declaration: bool IsPreviousMountDriverOverlappingCheckLocationValid
bool ABP_BaseCharacter_C::M_GetIsPreviousMountDriverOverlappingCheckLocationValid() const {
	return Read<bool>((byte*)this + 5292);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsPreviousMountDriverOverlappingCheckLocationValid() {
	return reinterpret_cast<bool*>((byte*)this + 5292);
}
void ABP_BaseCharacter_C::M_SetIsPreviousMountDriverOverlappingCheckLocationValid(const bool& value) {
	Write((byte*)this + 5292, value);
}
// Member Getter and Setter of IsRagdollFrozen
// Declaration: bool IsRagdollFrozen
bool ABP_BaseCharacter_C::M_GetIsRagdollFrozen() const {
	return Read<bool>((byte*)this + 5293);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsRagdollFrozen() {
	return reinterpret_cast<bool*>((byte*)this + 5293);
}
void ABP_BaseCharacter_C::M_SetIsRagdollFrozen(const bool& value) {
	Write((byte*)this + 5293, value);
}
// Member Getter and Setter of Intimidation
// Declaration: float Intimidation
float ABP_BaseCharacter_C::M_GetIntimidation() const {
	return Read<float>((byte*)this + 5296);
}
float* ABP_BaseCharacter_C::M_PtrGetIntimidation() {
	return reinterpret_cast<float*>((byte*)this + 5296);
}
void ABP_BaseCharacter_C::M_SetIntimidation(const float& value) {
	Write((byte*)this + 5296, value);
}
// Member Getter and Setter of IntimidationDecayTick
// Declaration: float IntimidationDecayTick
float ABP_BaseCharacter_C::M_GetIntimidationDecayTick() const {
	return Read<float>((byte*)this + 5300);
}
float* ABP_BaseCharacter_C::M_PtrGetIntimidationDecayTick() {
	return reinterpret_cast<float*>((byte*)this + 5300);
}
void ABP_BaseCharacter_C::M_SetIntimidationDecayTick(const float& value) {
	Write((byte*)this + 5300, value);
}
// Member Getter and Setter of IntimidationDecaySpeed
// Declaration: float IntimidationDecaySpeed
float ABP_BaseCharacter_C::M_GetIntimidationDecaySpeed() const {
	return Read<float>((byte*)this + 5304);
}
float* ABP_BaseCharacter_C::M_PtrGetIntimidationDecaySpeed() {
	return reinterpret_cast<float*>((byte*)this + 5304);
}
void ABP_BaseCharacter_C::M_SetIntimidationDecaySpeed(const float& value) {
	Write((byte*)this + 5304, value);
}
// Member Getter and Setter of IntimidationDecayTimer
// Declaration: struct FTimerHandle IntimidationDecayTimer
struct FTimerHandle ABP_BaseCharacter_C::M_GetIntimidationDecayTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 5312);
}
struct FTimerHandle* ABP_BaseCharacter_C::M_PtrGetIntimidationDecayTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5312);
}
void ABP_BaseCharacter_C::M_SetIntimidationDecayTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 5312, value);
}
// Member Getter and Setter of IsMounting
// Declaration: bool IsMounting
bool ABP_BaseCharacter_C::M_GetIsMounting() const {
	return Read<bool>((byte*)this + 5320);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsMounting() {
	return reinterpret_cast<bool*>((byte*)this + 5320);
}
void ABP_BaseCharacter_C::M_SetIsMounting(const bool& value) {
	Write((byte*)this + 5320, value);
}
// Member Getter and Setter of IsDismounting
// Declaration: bool IsDismounting
bool ABP_BaseCharacter_C::M_GetIsDismounting() const {
	return Read<bool>((byte*)this + 5321);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsDismounting() {
	return reinterpret_cast<bool*>((byte*)this + 5321);
}
void ABP_BaseCharacter_C::M_SetIsDismounting(const bool& value) {
	Write((byte*)this + 5321, value);
}
// Member Getter and Setter of CurrentInteractedFurniture
// Declaration: class ABP_MasterFurniture_C* CurrentInteractedFurniture
class ABP_MasterFurniture_C* ABP_BaseCharacter_C::M_GetCurrentInteractedFurniture() const {
	return Read<class ABP_MasterFurniture_C*>((byte*)this + 5328);
}
class ABP_MasterFurniture_C** ABP_BaseCharacter_C::M_PtrGetCurrentInteractedFurniture() {
	return reinterpret_cast<class ABP_MasterFurniture_C**>((byte*)this + 5328);
}
void ABP_BaseCharacter_C::M_SetCurrentInteractedFurniture(const class ABP_MasterFurniture_C*& value) {
	Write((byte*)this + 5328, value);
}
// Member Getter and Setter of StaticCollisionCapsule
// Declaration: class UCapsuleComponent* StaticCollisionCapsule
class UCapsuleComponent* ABP_BaseCharacter_C::M_GetStaticCollisionCapsule() const {
	return Read<class UCapsuleComponent*>((byte*)this + 5336);
}
class UCapsuleComponent** ABP_BaseCharacter_C::M_PtrGetStaticCollisionCapsule() {
	return reinterpret_cast<class UCapsuleComponent**>((byte*)this + 5336);
}
void ABP_BaseCharacter_C::M_SetStaticCollisionCapsule(const class UCapsuleComponent*& value) {
	Write((byte*)this + 5336, value);
}
// Member Getter and Setter of HasStaticCollision
// Declaration: bool HasStaticCollision
bool ABP_BaseCharacter_C::M_GetHasStaticCollision() const {
	return Read<bool>((byte*)this + 5344);
}
bool* ABP_BaseCharacter_C::M_PtrGetHasStaticCollision() {
	return reinterpret_cast<bool*>((byte*)this + 5344);
}
void ABP_BaseCharacter_C::M_SetHasStaticCollision(const bool& value) {
	Write((byte*)this + 5344, value);
}
// Member Getter and Setter of RagdollSnapDistance
// Declaration: float RagdollSnapDistance
float ABP_BaseCharacter_C::M_GetRagdollSnapDistance() const {
	return Read<float>((byte*)this + 5348);
}
float* ABP_BaseCharacter_C::M_PtrGetRagdollSnapDistance() {
	return reinterpret_cast<float*>((byte*)this + 5348);
}
void ABP_BaseCharacter_C::M_SetRagdollSnapDistance(const float& value) {
	Write((byte*)this + 5348, value);
}
// Member Getter and Setter of IsAttacking
// Declaration: bool IsAttacking
bool ABP_BaseCharacter_C::M_GetIsAttacking() const {
	return Read<bool>((byte*)this + 5352);
}
bool* ABP_BaseCharacter_C::M_PtrGetIsAttacking() {
	return reinterpret_cast<bool*>((byte*)this + 5352);
}
void ABP_BaseCharacter_C::M_SetIsAttacking(const bool& value) {
	Write((byte*)this + 5352, value);
}
// Member Getter and Setter of CanFollowUpCombo
// Declaration: bool CanFollowUpCombo
bool ABP_BaseCharacter_C::M_GetCanFollowUpCombo() const {
	return Read<bool>((byte*)this + 5353);
}
bool* ABP_BaseCharacter_C::M_PtrGetCanFollowUpCombo() {
	return reinterpret_cast<bool*>((byte*)this + 5353);
}
void ABP_BaseCharacter_C::M_SetCanFollowUpCombo(const bool& value) {
	Write((byte*)this + 5353, value);
}
// Member Getter and Setter of CurrentAttackers
// Declaration: TMap<class AActor*, float> CurrentAttackers
TMap<class AActor*, float> ABP_BaseCharacter_C::M_GetCurrentAttackers() const {
	return Read<TMap<class AActor*, float>>((byte*)this + 5360);
}
TMap<class AActor*, float>* ABP_BaseCharacter_C::M_PtrGetCurrentAttackers() {
	return reinterpret_cast<TMap<class AActor*, float>*>((byte*)this + 5360);
}
void ABP_BaseCharacter_C::M_SetCurrentAttackers(const TMap<class AActor*, float>& value) {
	Write((byte*)this + 5360, value);
}
// Member Getter and Setter of CurrentAttackersTimer
// Declaration: struct FTimerHandle CurrentAttackersTimer
struct FTimerHandle ABP_BaseCharacter_C::M_GetCurrentAttackersTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 5440);
}
struct FTimerHandle* ABP_BaseCharacter_C::M_PtrGetCurrentAttackersTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5440);
}
void ABP_BaseCharacter_C::M_SetCurrentAttackersTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 5440, value);
}
// Member Getter and Setter of MaxConcurrentAttackersCount
// Declaration: int32_t MaxConcurrentAttackersCount
int32_t ABP_BaseCharacter_C::M_GetMaxConcurrentAttackersCount() const {
	return Read<int32_t>((byte*)this + 5448);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetMaxConcurrentAttackersCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 5448);
}
void ABP_BaseCharacter_C::M_SetMaxConcurrentAttackersCount(const int32_t& value) {
	Write((byte*)this + 5448, value);
}
// Member Getter and Setter of OnPointDamageAppliedToOtherActor
// Declaration: TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature> OnPointDamageAppliedToOtherActor
TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature> ABP_BaseCharacter_C::M_GetOnPointDamageAppliedToOtherActor() const {
	return Read<TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>>((byte*)this + 5456);
}
TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>* ABP_BaseCharacter_C::M_PtrGetOnPointDamageAppliedToOtherActor() {
	return reinterpret_cast<TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>*>((byte*)this + 5456);
}
void ABP_BaseCharacter_C::M_SetOnPointDamageAppliedToOtherActor(const TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>& value) {
	Write((byte*)this + 5456, value);
}
// Member Getter and Setter of ItemTypesPreventingBlocking
// Declaration: TAssetPtr<class FNone_513> ItemTypesPreventingBlocking
TAssetPtr<class FNone_513> ABP_BaseCharacter_C::M_GetItemTypesPreventingBlocking() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 5472);
}
TAssetPtr<class FNone_513>* ABP_BaseCharacter_C::M_PtrGetItemTypesPreventingBlocking() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 5472);
}
void ABP_BaseCharacter_C::M_SetItemTypesPreventingBlocking(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 5472, value);
}
// Member Getter and Setter of IrisID
// Declaration: int32_t IrisID
int32_t ABP_BaseCharacter_C::M_GetIrisID() const {
	return Read<int32_t>((byte*)this + 5552);
}
int32_t* ABP_BaseCharacter_C::M_PtrGetIrisID() {
	return reinterpret_cast<int32_t*>((byte*)this + 5552);
}
void ABP_BaseCharacter_C::M_SetIrisID(const int32_t& value) {
	Write((byte*)this + 5552, value);
}
// Member Getter and Setter of PreviousVelocity
// Declaration: struct FVector PreviousVelocity
struct FVector ABP_BaseCharacter_C::M_GetPreviousVelocity() const {
	return Read<struct FVector>((byte*)this + 5556);
}
struct FVector* ABP_BaseCharacter_C::M_PtrGetPreviousVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 5556);
}
void ABP_BaseCharacter_C::M_SetPreviousVelocity(const struct FVector& value) {
	Write((byte*)this + 5556, value);
}
// Member Getter and Setter of MinImpactDamageSpeed
// Declaration: float MinImpactDamageSpeed
float ABP_BaseCharacter_C::M_GetMinImpactDamageSpeed() const {
	return Read<float>((byte*)this + 5568);
}
float* ABP_BaseCharacter_C::M_PtrGetMinImpactDamageSpeed() {
	return reinterpret_cast<float*>((byte*)this + 5568);
}
void ABP_BaseCharacter_C::M_SetMinImpactDamageSpeed(const float& value) {
	Write((byte*)this + 5568, value);
}
// Member Getter and Setter of MaxImpactDamageSpeed
// Declaration: float MaxImpactDamageSpeed
float ABP_BaseCharacter_C::M_GetMaxImpactDamageSpeed() const {
	return Read<float>((byte*)this + 5572);
}
float* ABP_BaseCharacter_C::M_PtrGetMaxImpactDamageSpeed() {
	return reinterpret_cast<float*>((byte*)this + 5572);
}
void ABP_BaseCharacter_C::M_SetMaxImpactDamageSpeed(const float& value) {
	Write((byte*)this + 5572, value);
}
// Member Getter and Setter of Courage
// Declaration: float Courage
float ABP_BaseCharacter_C::M_GetCourage() const {
	return Read<float>((byte*)this + 5576);
}
float* ABP_BaseCharacter_C::M_PtrGetCourage() {
	return reinterpret_cast<float*>((byte*)this + 5576);
}
void ABP_BaseCharacter_C::M_SetCourage(const float& value) {
	Write((byte*)this + 5576, value);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStoppingCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCraftingAnimEnd__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature");

	struct ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitCrafting__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnWaitCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitCrafting__DelegateSignature");

	struct ABP_BaseCharacter_C_OnWaitCrafting__DelegateSignature_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnWaitCrafting__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnUnRagdoll__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnUnRagdoll__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnUnRagdoll__DelegateSignature");

	struct ABP_BaseCharacter_C_OnUnRagdoll__DelegateSignature_Params {
	};
	ABP_BaseCharacter_C_OnUnRagdoll__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageAppliedToOtherActor__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorUsedToApplyDamage	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnPointDamageAppliedToOtherActor__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageAppliedToOtherActor__DelegateSignature");

	struct ABP_BaseCharacter_C_OnPointDamageAppliedToOtherActor__DelegateSignature_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class AActor* ActorUsedToApplyDamage;			//Offset: 184 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 192 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnPointDamageAppliedToOtherActor__DelegateSignature_Params params;
	params.DamagedActor = DamagedActor;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.ActorUsedToApplyDamage = ActorUsedToApplyDamage;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShouldHolster(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster");

	struct ABP_BaseCharacter_C_ShouldHolster_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ShouldHolster_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInTPPCombatState_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInTPPCombatState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsInTPPCombatState_Server(bool IsInTPPCombatState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInTPPCombatState_Server");

	struct ABP_BaseCharacter_C_SetIsInTPPCombatState_Server_Params {
		bool IsInTPPCombatState;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetIsInTPPCombatState_Server_Params params;
	params.IsInTPPCombatState = IsInTPPCombatState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInTPPCombatState_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInTPPCombatState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsInTPPCombatState_Multicast(bool IsInTPPCombatState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInTPPCombatState_Multicast");

	struct ABP_BaseCharacter_C_SetIsInTPPCombatState_Multicast_Params {
		bool IsInTPPCombatState;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetIsInTPPCombatState_Multicast_Params params;
	params.IsInTPPCombatState = IsInTPPCombatState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartCrafting_Server(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting_Server");

	struct ABP_BaseCharacter_C_StartCrafting_Server_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_StartCrafting_Server_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartCrafting_Client(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting_Client");

	struct ABP_BaseCharacter_C_StartCrafting_Client_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_StartCrafting_Client_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::WaitCrafting_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting_Server");

	struct ABP_BaseCharacter_C_WaitCrafting_Server_Params {
	};
	ABP_BaseCharacter_C_WaitCrafting_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::WaitCrafting_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting_Client");

	struct ABP_BaseCharacter_C_WaitCrafting_Client_Params {
	};
	ABP_BaseCharacter_C_WaitCrafting_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CancelAnimation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EndCrafting_Server(bool CancelAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting_Server");

	struct ABP_BaseCharacter_C_EndCrafting_Server_Params {
		bool CancelAnimation;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EndCrafting_Server_Params params;
	params.CancelAnimation = CancelAnimation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: CancelAnimation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EndCrafting_Client(bool CancelAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting_Client");

	struct ABP_BaseCharacter_C_EndCrafting_Client_Params {
		bool CancelAnimation;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EndCrafting_Client_Params params;
	params.CancelAnimation = CancelAnimation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCraftingAnimEnded_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded_Server");

	struct ABP_BaseCharacter_C_OnCraftingAnimEnded_Server_Params {
	};
	ABP_BaseCharacter_C_OnCraftingAnimEnded_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCraftingAnimEnded_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded_Client");

	struct ABP_BaseCharacter_C_OnCraftingAnimEnded_Client_Params {
	};
	ABP_BaseCharacter_C_OnCraftingAnimEnded_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShouldHolster_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster_Server");

	struct ABP_BaseCharacter_C_ShouldHolster_Server_Params {
	};
	ABP_BaseCharacter_C_ShouldHolster_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ShouldHolster_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster_Client");

	struct ABP_BaseCharacter_C_ShouldHolster_Client_Params {
	};
	ABP_BaseCharacter_C_ShouldHolster_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CraftingClosed_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed_Server");

	struct ABP_BaseCharacter_C_CraftingClosed_Server_Params {
	};
	ABP_BaseCharacter_C_CraftingClosed_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CraftingClosed_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed_Client");

	struct ABP_BaseCharacter_C_CraftingClosed_Client_Params {
	};
	ABP_BaseCharacter_C_CraftingClosed_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndCrafting_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting_Server");

	struct ABP_BaseCharacter_C_OnEndCrafting_Server_Params {
	};
	ABP_BaseCharacter_C_OnEndCrafting_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStoppingCrafting_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting_Server");

	struct ABP_BaseCharacter_C_OnStoppingCrafting_Server_Params {
	};
	ABP_BaseCharacter_C_OnStoppingCrafting_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistDelay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReverseFistDelay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistDelay");

	struct ABP_BaseCharacter_C_ReverseFistDelay_Params {
	};
	ABP_BaseCharacter_C_ReverseFistDelay_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInIdleState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipDespawnAnimItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState, bool SkipDespawnAnimItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event");

	struct ABP_BaseCharacter_C_Set_IdleState_Event_Params {
		bool IsInIdleState;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 1 | ElementSize: 1
		bool SkipDespawnAnimItem;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdleState_Event_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;
	params.SkipDespawnAnimItem = SkipDespawnAnimItem;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Idle_State	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoAfterPose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipDespawnAnimItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdlePose_Event(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose, bool SkipDespawnAnimItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event");

	struct ABP_BaseCharacter_C_Set_IdlePose_Event_Params {
		TEnumAsByte<E_IdleStates> Idle_State;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> DoAfterPose;			//Offset: 2 | ElementSize: 1
		bool SkipDespawnAnimItem;			//Offset: 3 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdlePose_Event_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;
	params.SkipDespawnAnimItem = SkipDespawnAnimItem;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ActivityState Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInActivity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityType	Type: TEnumAsByte<E_AnimActivityType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ActivityState_Event(bool IsInActivity, unsigned char ActivityAnimID, TEnumAsByte<E_AnimActivityType> ActivityType, int32_t Loops) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ActivityState Event");

	struct ABP_BaseCharacter_C_Set_ActivityState_Event_Params {
		bool IsInActivity;			//Offset: 0 | ElementSize: 1
		unsigned char ActivityAnimID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AnimActivityType> ActivityType;			//Offset: 2 | ElementSize: 1
		int32_t Loops;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_ActivityState_Event_Params params;
	params.IsInActivity = IsInActivity;
	params.ActivityAnimID = ActivityAnimID;
	params.ActivityType = ActivityType;
	params.Loops = Loops;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementInput_Compressed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementInput	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMovementInput_Compressed(struct FVector MovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementInput_Compressed");

	struct ABP_BaseCharacter_C_SetMovementInput_Compressed_Params {
		struct FVector MovementInput;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_SetMovementInput_Compressed_Params params;
	params.MovementInput = MovementInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetLookingRotation_Compressed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LookingRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetLookingRotation_Compressed(struct FRotator LookingRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetLookingRotation_Compressed");

	struct ABP_BaseCharacter_C_SetLookingRotation_Compressed_Params {
		struct FRotator LookingRotation;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_SetLookingRotation_Compressed_Params params;
	params.LookingRotation = LookingRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation_Compressed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: characterRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCharacterRotation_Compressed(struct FRotator TargetRotation, struct FRotator characterRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation_Compressed");

	struct ABP_BaseCharacter_C_SetCharacterRotation_Compressed_Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		struct FRotator characterRotation;			//Offset: 12 | ElementSize: 12
	};
	ABP_BaseCharacter_C_SetCharacterRotation_Compressed_Params params;
	params.TargetRotation = TargetRotation;
	params.characterRotation = characterRotation;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetALSStance_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: stance	Type: TEnumAsByte<E_Stance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetALSStance_Server(TEnumAsByte<E_Stance> stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetALSStance_Server");

	struct ABP_BaseCharacter_C_SetALSStance_Server_Params {
		TEnumAsByte<E_Stance> stance;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetALSStance_Server_Params params;
	params.stance = stance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetALSStance_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: stance	Type: TEnumAsByte<E_Stance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetALSStance_Multicast(TEnumAsByte<E_Stance> stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetALSStance_Multicast");

	struct ABP_BaseCharacter_C_SetALSStance_Multicast_Params {
		TEnumAsByte<E_Stance> stance;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetALSStance_Multicast_Params params;
	params.stance = stance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementInput_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementInputX	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MovementInputY	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MovementInputZ	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMovementInput_Server(int32_t MovementInputX, int32_t MovementInputY, int32_t MovementInputZ) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementInput_Server");

	struct ABP_BaseCharacter_C_SetMovementInput_Server_Params {
		int32_t MovementInputX;			//Offset: 0 | ElementSize: 4
		int32_t MovementInputY;			//Offset: 4 | ElementSize: 4
		int32_t MovementInputZ;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetMovementInput_Server_Params params;
	params.MovementInputX = MovementInputX;
	params.MovementInputY = MovementInputY;
	params.MovementInputZ = MovementInputZ;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetLookingRotation_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Roll	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Pitch	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Yaw	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetLookingRotation_Server(unsigned char Roll, unsigned char Pitch, unsigned char Yaw) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetLookingRotation_Server");

	struct ABP_BaseCharacter_C_SetLookingRotation_Server_Params {
		unsigned char Roll;			//Offset: 0 | ElementSize: 1
		unsigned char Pitch;			//Offset: 1 | ElementSize: 1
		unsigned char Yaw;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetLookingRotation_Server_Params params;
	params.Roll = Roll;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRoll	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetPitch	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetYaw	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterRoll	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterPitch	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterYaw	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCharacterRotation_Server(unsigned char TargetRoll, unsigned char TargetPitch, unsigned char TargetYaw, unsigned char CharacterRoll, unsigned char CharacterPitch, unsigned char CharacterYaw) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation_Server");

	struct ABP_BaseCharacter_C_SetCharacterRotation_Server_Params {
		unsigned char TargetRoll;			//Offset: 0 | ElementSize: 1
		unsigned char TargetPitch;			//Offset: 1 | ElementSize: 1
		unsigned char TargetYaw;			//Offset: 2 | ElementSize: 1
		unsigned char CharacterRoll;			//Offset: 3 | ElementSize: 1
		unsigned char CharacterPitch;			//Offset: 4 | ElementSize: 1
		unsigned char CharacterYaw;			//Offset: 5 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCharacterRotation_Server_Params params;
	params.TargetRoll = TargetRoll;
	params.TargetPitch = TargetPitch;
	params.TargetYaw = TargetYaw;
	params.CharacterRoll = CharacterRoll;
	params.CharacterPitch = CharacterPitch;
	params.CharacterYaw = CharacterYaw;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateLocationAndRotationDuringRagdoll_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: actorLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateLocationAndRotationDuringRagdoll_Server(struct FVector actorLocation, struct FRotator ActorRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateLocationAndRotationDuringRagdoll_Server");

	struct ABP_BaseCharacter_C_UpdateLocationAndRotationDuringRagdoll_Server_Params {
		struct FVector actorLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator ActorRotation;			//Offset: 12 | ElementSize: 12
	};
	ABP_BaseCharacter_C_UpdateLocationAndRotationDuringRagdoll_Server_Params params;
	params.actorLocation = actorLocation;
	params.ActorRotation = ActorRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateLocationAndRotationDuringRagdoll_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: actorLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateLocationAndRotationDuringRagdoll_Multicast(struct FVector actorLocation, struct FRotator ActorRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateLocationAndRotationDuringRagdoll_Multicast");

	struct ABP_BaseCharacter_C_UpdateLocationAndRotationDuringRagdoll_Multicast_Params {
		struct FVector actorLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator ActorRotation;			//Offset: 12 | ElementSize: 12
	};
	ABP_BaseCharacter_C_UpdateLocationAndRotationDuringRagdoll_Multicast_Params params;
	params.actorLocation = actorLocation;
	params.ActorRotation = ActorRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateActorLocationAndRotationDuringRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateActorLocationAndRotationDuringRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateActorLocationAndRotationDuringRagdoll");

	struct ABP_BaseCharacter_C_UpdateActorLocationAndRotationDuringRagdoll_Params {
	};
	ABP_BaseCharacter_C_UpdateActorLocationAndRotationDuringRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemClass	Type: TAssetPtr<class UClass>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsOffhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffhand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem");

	struct ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params {
		TAssetPtr<class UClass> ItemClass;			//Offset: 0 | ElementSize: 40
		bool IsOffhand;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params params;
	params.ItemClass = ItemClass;
	params.IsOffhand = IsOffhand;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInIdleState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipDespawnAnimItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState, bool SkipDespawnAnimItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI");

	struct ABP_BaseCharacter_C_Set_IdleState_BPI_Params {
		bool IsInIdleState;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 1 | ElementSize: 1
		bool SkipDespawnAnimItem;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdleState_BPI_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;
	params.SkipDespawnAnimItem = SkipDespawnAnimItem;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Idle_State	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoAfterPose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipDespawnAnimItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose, bool SkipDespawnAnimItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI");

	struct ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params {
		TEnumAsByte<E_IdleStates> Idle_State;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> DoAfterPose;			//Offset: 2 | ElementSize: 1
		bool SkipDespawnAnimItem;			//Offset: 3 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;
	params.SkipDespawnAnimItem = SkipDespawnAnimItem;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDialogueAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DialogueAnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LipsyncAnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsRandomMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayDialogueAnimation_BPI(class UAnimMontage* DialogueAnimMontage, class UAnimMontage* LipsyncAnimMontage, bool IsRandomMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDialogueAnimation_BPI");

	struct ABP_BaseCharacter_C_PlayDialogueAnimation_BPI_Params {
		class UAnimMontage* DialogueAnimMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* LipsyncAnimMontage;			//Offset: 8 | ElementSize: 8
		bool IsRandomMontage;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayDialogueAnimation_BPI_Params params;
	params.DialogueAnimMontage = DialogueAnimMontage;
	params.LipsyncAnimMontage = LipsyncAnimMontage;
	params.IsRandomMontage = IsRandomMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ActivityState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInActivity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityType	Type: TEnumAsByte<E_AnimActivityType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Set_ActivityState_BPI(bool IsInActivity, unsigned char ActivityAnimID, TEnumAsByte<E_AnimActivityType> ActivityType, int32_t Loops) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ActivityState BPI");

	struct ABP_BaseCharacter_C_Set_ActivityState_BPI_Params {
		bool IsInActivity;			//Offset: 0 | ElementSize: 1
		unsigned char ActivityAnimID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AnimActivityType> ActivityType;			//Offset: 2 | ElementSize: 1
		int32_t Loops;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Set_ActivityState_BPI_Params params;
	params.IsInActivity = IsInActivity;
	params.ActivityAnimID = ActivityAnimID;
	params.ActivityType = ActivityType;
	params.Loops = Loops;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairAnimPhysics_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HairCategory	Type: TEnumAsByte<E_Hair>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHairAnimPhysics_BPI(TEnumAsByte<E_Hair> HairCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairAnimPhysics_BPI");

	struct ABP_BaseCharacter_C_SetHairAnimPhysics_BPI_Params {
		TEnumAsByte<E_Hair> HairCategory;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetHairAnimPhysics_BPI_Params params;
	params.HairCategory = HairCategory;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddPlayerToCheck_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddPlayerToCheck_BPI(class AActor* Player) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddPlayerToCheck_BPI");

	struct ABP_BaseCharacter_C_AddPlayerToCheck_BPI_Params {
		class AActor* Player;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_AddPlayerToCheck_BPI_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayLipsyncAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LipsyncAnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayLipsyncAnimation_BPI(class UAnimMontage* LipsyncAnimMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayLipsyncAnimation_BPI");

	struct ABP_BaseCharacter_C_PlayLipsyncAnimation_BPI_Params {
		class UAnimMontage* LipsyncAnimMontage;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_PlayLipsyncAnimation_BPI_Params params;
	params.LipsyncAnimMontage = LipsyncAnimMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartBodyDialogueAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPersistent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartBodyDialogueAnimation_BPI(bool IsPersistent, class UAnimMontage* AnimMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartBodyDialogueAnimation_BPI");

	struct ABP_BaseCharacter_C_StartBodyDialogueAnimation_BPI_Params {
		bool IsPersistent;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* AnimMontage;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StartBodyDialogueAnimation_BPI_Params params;
	params.IsPersistent = IsPersistent;
	params.AnimMontage = AnimMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishQuestAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FinishQuestAnimation_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishQuestAnimation_BPI");

	struct ABP_BaseCharacter_C_FinishQuestAnimation_BPI_Params {
	};
	ABP_BaseCharacter_C_FinishQuestAnimation_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayBardAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BardAnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LipsyncAnimMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Replicate	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayBardAnimation_BPI(class UAnimMontage* BardAnimMontage, class UAnimMontage* LipsyncAnimMontage, float StartPosition, bool Replicate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayBardAnimation_BPI");

	struct ABP_BaseCharacter_C_PlayBardAnimation_BPI_Params {
		class UAnimMontage* BardAnimMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* LipsyncAnimMontage;			//Offset: 8 | ElementSize: 8
		float StartPosition;			//Offset: 16 | ElementSize: 4
		bool Replicate;			//Offset: 20 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayBardAnimation_BPI_Params params;
	params.BardAnimMontage = BardAnimMontage;
	params.LipsyncAnimMontage = LipsyncAnimMontage;
	params.StartPosition = StartPosition;
	params.Replicate = Replicate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SynchronizeLipsyncAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SynchronizeLipsyncAnimation_BPI(float StartingPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SynchronizeLipsyncAnimation_BPI");

	struct ABP_BaseCharacter_C_SynchronizeLipsyncAnimation_BPI_Params {
		float StartingPosition;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SynchronizeLipsyncAnimation_BPI_Params params;
	params.StartingPosition = StartingPosition;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SynchronizeBardAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SynchronizeBardAnimation_BPI(float StartingPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SynchronizeBardAnimation_BPI");

	struct ABP_BaseCharacter_C_SynchronizeBardAnimation_BPI_Params {
		float StartingPosition;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SynchronizeBardAnimation_BPI_Params params;
	params.StartingPosition = StartingPosition;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOffHandToolType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetOffHandToolType(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOffHandToolType");

	struct ABP_BaseCharacter_C_SetOffHandToolType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetOffHandToolType_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Ragdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll");

	struct ABP_BaseCharacter_C_Ragdoll_Params {
	};
	ABP_BaseCharacter_C_Ragdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnUnRagdoll_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnUnRagdoll_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnUnRagdoll_Server");

	struct ABP_BaseCharacter_C_OnUnRagdoll_Server_Params {
	};
	ABP_BaseCharacter_C_OnUnRagdoll_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryStartRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryStartRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryStartRagdoll");

	struct ABP_BaseCharacter_C_TryStartRagdoll_Params {
	};
	ABP_BaseCharacter_C_TryStartRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryStopRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryStopRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryStopRagdoll");

	struct ABP_BaseCharacter_C_TryStopRagdoll_Params {
	};
	ABP_BaseCharacter_C_TryStopRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_StartRagdollCheck
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldEnableRagdoll	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_StartRagdollCheck(bool ShouldEnableRagdoll) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_StartRagdollCheck");

	struct ABP_BaseCharacter_C_Server_StartRagdollCheck_Params {
		bool ShouldEnableRagdoll;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Server_StartRagdollCheck_Params params;
	params.ShouldEnableRagdoll = ShouldEnableRagdoll;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_LaunchChar
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Velocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_LaunchChar(struct FVector Velocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_LaunchChar");

	struct ABP_BaseCharacter_C_Server_LaunchChar_Params {
		struct FVector Velocity;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_Server_LaunchChar_Params params;
	params.Velocity = Velocity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealth_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: newHealth	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHealth_Server(float newHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealth_Server");

	struct ABP_BaseCharacter_C_SetHealth_Server_Params {
		float newHealth;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHealth_Server_Params params;
	params.newHealth = newHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Heal
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Heal() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Heal");

	struct ABP_BaseCharacter_C_Heal_Params {
	};
	ABP_BaseCharacter_C_Heal_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Kill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Kill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Kill");

	struct ABP_BaseCharacter_C_Kill_Params {
	};
	ABP_BaseCharacter_C_Kill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealth
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newHealth	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHealth(float newHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealth");

	struct ABP_BaseCharacter_C_SetHealth_Params {
		float newHealth;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHealth_Params params;
	params.newHealth = newHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealthNormalized
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newHealthNormalized	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHealthNormalized(float newHealthNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHealthNormalized");

	struct ABP_BaseCharacter_C_SetHealthNormalized_Params {
		float newHealthNormalized;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHealthNormalized_Params params;
	params.newHealthNormalized = newHealthNormalized;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMaxHealth
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMaxHealth	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMaxHealth(float newMaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMaxHealth");

	struct ABP_BaseCharacter_C_SetMaxHealth_Params {
		float newMaxHealth;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetMaxHealth_Params params;
	params.newMaxHealth = newMaxHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// Flags: HasOutParms, BlueprintEvent
// Params:
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NormalImpulse	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_BaseCharacter_C::BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	struct ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params {
		class UPrimitiveComponent* HitComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		struct FVector NormalImpulse;			//Offset: 24 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 36 | ElementSize: 136
	};
	ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySwipeSound
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsOffhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlaySwipeSound(bool IsOffhand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySwipeSound");

	struct ABP_BaseCharacter_C_PlaySwipeSound_Params {
		bool IsOffhand;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlaySwipeSound_Params params;
	params.IsOffhand = IsOffhand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipItemFromLeftHand
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnequipItemFromLeftHand() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipItemFromLeftHand");

	struct ABP_BaseCharacter_C_UnequipItemFromLeftHand_Params {
	};
	ABP_BaseCharacter_C_UnequipItemFromLeftHand_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipItemFromRightHand
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnequipItemFromRightHand() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipItemFromRightHand");

	struct ABP_BaseCharacter_C_UnequipItemFromRightHand_Params {
	};
	ABP_BaseCharacter_C_UnequipItemFromRightHand_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipItemInLeftHand
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipItemInLeftHand(struct FName ItemName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipItemInLeftHand");

	struct ABP_BaseCharacter_C_EquipItemInLeftHand_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_EquipItemInLeftHand_Params params;
	params.ItemName = ItemName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipItemInRightHand
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipItemInRightHand(struct FName ItemName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipItemInRightHand");

	struct ABP_BaseCharacter_C_EquipItemInRightHand_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_EquipItemInRightHand_Params params;
	params.ItemName = ItemName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetAttackingPush_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsAttacking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetAttackingPush_BPI(bool IsAttacking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetAttackingPush_BPI");

	struct ABP_BaseCharacter_C_SetAttackingPush_BPI_Params {
		bool IsAttacking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetAttackingPush_BPI_Params params;
	params.IsAttacking = IsAttacking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StaggerOnBeingBlocked_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StaggerOnBeingBlocked_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StaggerOnBeingBlocked_Client");

	struct ABP_BaseCharacter_C_StaggerOnBeingBlocked_Client_Params {
	};
	ABP_BaseCharacter_C_StaggerOnBeingBlocked_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPushCombatAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayPushCombatAnimation_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPushCombatAnimation_BPI");

	struct ABP_BaseCharacter_C_PlayPushCombatAnimation_BPI_Params {
	};
	ABP_BaseCharacter_C_PlayPushCombatAnimation_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetShouldStagger
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldStagger	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetShouldStagger(bool ShouldStagger) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetShouldStagger");

	struct ABP_BaseCharacter_C_SetShouldStagger_Params {
		bool ShouldStagger;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetShouldStagger_Params params;
	params.ShouldStagger = ShouldStagger;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveDecayedAttackers
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveDecayedAttackers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveDecayedAttackers");

	struct ABP_BaseCharacter_C_RemoveDecayedAttackers_Params {
	};
	ABP_BaseCharacter_C_RemoveDecayedAttackers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.NotifyAttack
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AttackerActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::NotifyAttack(class AActor* AttackerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.NotifyAttack");

	struct ABP_BaseCharacter_C_NotifyAttack_Params {
		class AActor* AttackerActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_NotifyAttack_Params params;
	params.AttackerActor = AttackerActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StaggerOnBeingBlocked_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StaggerOnBeingBlocked_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StaggerOnBeingBlocked_BPI");

	struct ABP_BaseCharacter_C_StaggerOnBeingBlocked_BPI_Params {
	};
	ABP_BaseCharacter_C_StaggerOnBeingBlocked_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetAttackState_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsAttacking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetAttackState_BPI(bool IsAttacking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetAttackState_BPI");

	struct ABP_BaseCharacter_C_SetAttackState_BPI_Params {
		bool IsAttacking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetAttackState_BPI_Params params;
	params.IsAttacking = IsAttacking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FollowUpComboAttack_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FollowUpComboAttack_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FollowUpComboAttack_BPI");

	struct ABP_BaseCharacter_C_FollowUpComboAttack_BPI_Params {
	};
	ABP_BaseCharacter_C_FollowUpComboAttack_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartComboAttack_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InitialComboAttack	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartComboAttack_BPI(class UAnimMontage* InitialComboAttack) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartComboAttack_BPI");

	struct ABP_BaseCharacter_C_StartComboAttack_BPI_Params {
		class UAnimMontage* InitialComboAttack;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StartComboAttack_BPI_Params params;
	params.InitialComboAttack = InitialComboAttack;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetComboState_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanFollowUp	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetComboState_BPI(bool CanFollowUp) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetComboState_BPI");

	struct ABP_BaseCharacter_C_SetComboState_BPI_Params {
		bool CanFollowUp;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetComboState_BPI_Params params;
	params.CanFollowUp = CanFollowUp;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDismountingStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingStarted");

	struct ABP_BaseCharacter_C_OnDismountingStarted_Params {
	};
	ABP_BaseCharacter_C_OnDismountingStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnMountingStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingStarted");

	struct ABP_BaseCharacter_C_OnMountingStarted_Params {
	};
	ABP_BaseCharacter_C_OnMountingStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Intimidate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Intimidator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InfluenceMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Intimidate(class UObject* Intimidator, float InfluenceMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Intimidate");

	struct ABP_BaseCharacter_C_Intimidate_Params {
		class UObject* Intimidator;			//Offset: 0 | ElementSize: 8
		float InfluenceMultiplier;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_Intimidate_Params params;
	params.Intimidator = Intimidator;
	params.InfluenceMultiplier = InfluenceMultiplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTemporarySpeedMultiplier
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IncreaseBy	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxMultiplierValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IncreaseTemporarySpeedMultiplier(float IncreaseBy, float MaxMultiplierValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTemporarySpeedMultiplier");

	struct ABP_BaseCharacter_C_IncreaseTemporarySpeedMultiplier_Params {
		float IncreaseBy;			//Offset: 0 | ElementSize: 4
		float MaxMultiplierValue;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IncreaseTemporarySpeedMultiplier_Params params;
	params.IncreaseBy = IncreaseBy;
	params.MaxMultiplierValue = MaxMultiplierValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseTemporarySpeedMultiplier
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DecreaseBy	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinMultiplierValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DecreaseTemporarySpeedMultiplier(float DecreaseBy, float MinMultiplierValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseTemporarySpeedMultiplier");

	struct ABP_BaseCharacter_C_DecreaseTemporarySpeedMultiplier_Params {
		float DecreaseBy;			//Offset: 0 | ElementSize: 4
		float MinMultiplierValue;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_DecreaseTemporarySpeedMultiplier_Params params;
	params.DecreaseBy = DecreaseBy;
	params.MinMultiplierValue = MinMultiplierValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceivePointDamage
// Flags: BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitNormal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShotFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceivePointDamage");

	struct ABP_BaseCharacter_C_ReceivePointDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 28 | ElementSize: 12
		class UPrimitiveComponent* HitComponent;			//Offset: 40 | ElementSize: 8
		struct FName BoneName;			//Offset: 48 | ElementSize: 8
		struct FVector ShotFromDirection;			//Offset: 56 | ElementSize: 12
		class AController* InstigatedBy;			//Offset: 72 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 80 | ElementSize: 8
		struct FHitResult HitInfo;			//Offset: 88 | ElementSize: 136
	};
	ABP_BaseCharacter_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CancelAnimationLoops_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops_Client");

	struct ABP_BaseCharacter_C_CancelAnimationLoops_Client_Params {
	};
	ABP_BaseCharacter_C_CancelAnimationLoops_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonUpdateInventory
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnSeasonUpdateInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonUpdateInventory");

	struct ABP_BaseCharacter_C_OnSeasonUpdateInventory_Params {
	};
	ABP_BaseCharacter_C_OnSeasonUpdateInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHat_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MeshSoft	Type: TAssetPtr<class USkeletalMesh>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: HideHair	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHat_BPI(TAssetPtr<class USkeletalMesh> MeshSoft, bool HideHair) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHat_BPI");

	struct ABP_BaseCharacter_C_SetHat_BPI_Params {
		TAssetPtr<class USkeletalMesh> MeshSoft;			//Offset: 0 | ElementSize: 40
		bool HideHair;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetHat_BPI_Params params;
	params.MeshSoft = MeshSoft;
	params.HideHair = HideHair;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseReputation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DecreaseReputation_BPI(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseReputation_BPI");

	struct ABP_BaseCharacter_C_DecreaseReputation_BPI_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_DecreaseReputation_BPI_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseReputation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IncreaseReputation_BPI(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseReputation_BPI");

	struct ABP_BaseCharacter_C_IncreaseReputation_BPI_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IncreaseReputation_BPI_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewHeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHairMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewBodyMeshes	Type: TArray<class USkeletalMesh*>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh");

	struct ABP_BaseCharacter_C_SetMesh_Params {
		class USkeletalMesh* NewHeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* NewHairMesh;			//Offset: 8 | ElementSize: 8
		TArray<class USkeletalMesh*> NewBodyMeshes;			//Offset: 16 | ElementSize: 16
		class UObject* NewClass;			//Offset: 32 | ElementSize: 8
		bool UpdateOnly;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMesh_Params params;
	params.NewHeadMesh = NewHeadMesh;
	params.NewHairMesh = NewHairMesh;
	params.NewBodyMeshes = NewBodyMeshes;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Hit
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitForce	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Hit(struct FVector HitLocation, struct FVector hitForce, struct FName HitBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Hit");

	struct ABP_BaseCharacter_C_Hit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector hitForce;			//Offset: 12 | ElementSize: 12
		struct FName HitBoneName;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_Hit_Params params;
	params.HitLocation = HitLocation;
	params.hitForce = hitForce;
	params.HitBoneName = HitBoneName;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SectionNameToChange	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NextSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeMontageNextSection(struct FName SectionNameToChange, struct FName NextSection, class UAnimMontage* Montage) {
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
void ABP_BaseCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolFPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ToolTPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MontageName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableHitAction(TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage, struct FName MontageName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction");

	struct ABP_BaseCharacter_C_HoldableHitAction_Params {
		TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages;			//Offset: 0 | ElementSize: 80
		TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages;			//Offset: 80 | ElementSize: 80
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 160 | ElementSize: 1
		int32_t AnimID;			//Offset: 164 | ElementSize: 4
		bool IgnorePlayingMontage;			//Offset: 168 | ElementSize: 1
		struct FName MontageName;			//Offset: 172 | ElementSize: 8
	};
	ABP_BaseCharacter_C_HoldableHitAction_Params params;
	params.ToolFPMontages = ToolFPMontages;
	params.ToolTPMontages = ToolTPMontages;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.IgnorePlayingMontage = IgnorePlayingMontage;
	params.MontageName = MontageName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolFPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ToolTPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageType	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableAction(TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages, bool Loop, bool SkipLoopStartCheck, bool IgnorePlayingMontage, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, struct FName MontageName, TEnumAsByte<E_AnimInteractionTypes> MontageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction");

	struct ABP_BaseCharacter_C_HoldableAction_Params {
		TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages;			//Offset: 0 | ElementSize: 80
		TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages;			//Offset: 80 | ElementSize: 80
		bool Loop;			//Offset: 160 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 161 | ElementSize: 1
		bool IgnorePlayingMontage;			//Offset: 162 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 163 | ElementSize: 1
		int32_t AnimID;			//Offset: 164 | ElementSize: 4
		struct FName MontageName;			//Offset: 168 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> MontageType;			//Offset: 176 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HoldableAction_Params params;
	params.ToolFPMontages = ToolFPMontages;
	params.ToolTPMontages = ToolTPMontages;
	params.Loop = Loop;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.IgnorePlayingMontage = IgnorePlayingMontage;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.MontageName = MontageName;
	params.MontageType = MontageType;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StageInteractionType	Type: TEnumAsByte<E_StageInteractionsTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutomaticPlay	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NumberOfAutomaticLoops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SwapItemsOnInteraction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction");

	struct ABP_BaseCharacter_C_SetupStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_StageInteractionsTypes> StageInteractionType;			//Offset: 8 | ElementSize: 1
		class UAnimMontage* MontageToPlay;			//Offset: 16 | ElementSize: 8
		float PlayRate;			//Offset: 24 | ElementSize: 4
		float StartingPosition;			//Offset: 28 | ElementSize: 4
		bool AutomaticPlay;			//Offset: 32 | ElementSize: 1
		int32_t NumberOfAutomaticLoops;			//Offset: 36 | ElementSize: 4
		bool SwapItemsOnInteraction;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetupStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.StageInteractionType = StageInteractionType;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.AutomaticPlay = AutomaticPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageAppliedToOtherActor_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorUsedToApplyDamage	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnPointDamageAppliedToOtherActor_Multicast(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageAppliedToOtherActor_Multicast");

	struct ABP_BaseCharacter_C_OnPointDamageAppliedToOtherActor_Multicast_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class AActor* ActorUsedToApplyDamage;			//Offset: 184 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 192 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnPointDamageAppliedToOtherActor_Multicast_Params params;
	params.DamagedActor = DamagedActor;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.ActorUsedToApplyDamage = ActorUsedToApplyDamage;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCombatPushingActionState_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPerformingPush	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCombatPushingActionState_Multicast(bool IsPerformingPush) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCombatPushingActionState_Multicast");

	struct ABP_BaseCharacter_C_SetCombatPushingActionState_Multicast_Params {
		bool IsPerformingPush;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCombatPushingActionState_Multicast_Params params;
	params.IsPerformingPush = IsPerformingPush;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCombatPushingActionState_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPerformingPush	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCombatPushingActionState_Server(bool IsPerformingPush) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCombatPushingActionState_Server");

	struct ABP_BaseCharacter_C_SetCombatPushingActionState_Server_Params {
		bool IsPerformingPush;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCombatPushingActionState_Server_Params params;
	params.IsPerformingPush = IsPerformingPush;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishHoldableAction_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FinishHoldableAction_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishHoldableAction_Multicast");

	struct ABP_BaseCharacter_C_FinishHoldableAction_Multicast_Params {
	};
	ABP_BaseCharacter_C_FinishHoldableAction_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishHoldableAction_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FinishHoldableAction_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishHoldableAction_Server");

	struct ABP_BaseCharacter_C_FinishHoldableAction_Server_Params {
	};
	ABP_BaseCharacter_C_FinishHoldableAction_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartHoldableAction_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartHoldableAction_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartHoldableAction_Multicast");

	struct ABP_BaseCharacter_C_StartHoldableAction_Multicast_Params {
	};
	ABP_BaseCharacter_C_StartHoldableAction_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartHoldableAction_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartHoldableAction_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartHoldableAction_Server");

	struct ABP_BaseCharacter_C_StartHoldableAction_Server_Params {
	};
	ABP_BaseCharacter_C_StartHoldableAction_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionPlatformDestroyServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionPlatformDestroyServer(class ABP_MasterPlatform_C* Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionPlatformDestroyServer");

	struct ABP_BaseCharacter_C_ToolInteractionPlatformDestroyServer_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionPlatformDestroyServer_Params params;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionPlatformBuildServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionPlatformBuildServer(class ABP_MasterPlatform_C* Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionPlatformBuildServer");

	struct ABP_BaseCharacter_C_ToolInteractionPlatformBuildServer_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionPlatformBuildServer_Params params;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast_UpdateNPCForClientsOnOwnershipSwap
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DesiredOwnership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Multicast_UpdateNPCForClientsOnOwnershipSwap(class ABP_BaseCharacter_C* NPCReference, TEnumAsByte<E_Ownership> DesiredOwnership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast_UpdateNPCForClientsOnOwnershipSwap");

	struct ABP_BaseCharacter_C_Multicast_UpdateNPCForClientsOnOwnershipSwap_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Ownership> DesiredOwnership;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Multicast_UpdateNPCForClientsOnOwnershipSwap_Params params;
	params.NPCReference = NPCReference;
	params.DesiredOwnership = DesiredOwnership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_UpdateNPCForClientsOnOwnershipSwap
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_UpdateNPCForClientsOnOwnershipSwap(class ABP_BaseCharacter_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_UpdateNPCForClientsOnOwnershipSwap");

	struct ABP_BaseCharacter_C_Server_UpdateNPCForClientsOnOwnershipSwap_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_Server_UpdateNPCForClientsOnOwnershipSwap_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfAnimal	Type: TArray<struct FST_AnimalList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_AnimalCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAnimals_Client(TArray<struct FST_AnimalList>* ListOfAnimal, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Client");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Client_Params {
		TArray<struct FST_AnimalList> ListOfAnimal;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_AnimalCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Client_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfAnimal != nullptr)
		*ListOfAnimal = params.ListOfAnimal;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfFurniture	Type: TArray<struct FST_FurnitureList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FurnitureCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFurniture_Client(TArray<struct FST_FurnitureList>* ListOfFurniture, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Client");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Client_Params {
		TArray<struct FST_FurnitureList> ListOfFurniture;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_FurnitureCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Client_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfFurniture != nullptr)
		*ListOfFurniture = params.ListOfFurniture;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfFields	Type: TArray<struct FST_FieldList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FieldCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFields_Client(TArray<struct FST_FieldList>* ListOfFields, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Client");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Client_Params {
		TArray<struct FST_FieldList> ListOfFields;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_FieldCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Client_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfFields != nullptr)
		*ListOfFields = params.ListOfFields;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfBuildings	Type: TArray<struct FST_BuildingList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_BuildingCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfBuildings_Client(TArray<struct FST_BuildingList>* ListOfBuildings, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Client");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Client_Params {
		TArray<struct FST_BuildingList> ListOfBuildings;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_BuildingCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Client_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfBuildings != nullptr)
		*ListOfBuildings = params.ListOfBuildings;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfAllNPC	Type: TArray<struct FST_CharacterList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ListOfNPC	Type: TArray<class ABP_NPC_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfNPCs_Client(TArray<struct FST_CharacterList>* ListOfAllNPC, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Client");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Client_Params {
		TArray<struct FST_CharacterList> ListOfAllNPC;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<class ABP_NPC_C*> ListOfNPC;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Client_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfAllNPC != nullptr)
		*ListOfAllNPC = params.ListOfAllNPC;
	if (ListOfNPC != nullptr)
		*ListOfNPC = params.ListOfNPC;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRepNotify_DefaultCharacterModules
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRepNotify_DefaultCharacterModules() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRepNotify_DefaultCharacterModules");

	struct ABP_BaseCharacter_C_OnRepNotify_DefaultCharacterModules_Params {
	};
	ABP_BaseCharacter_C_OnRepNotify_DefaultCharacterModules_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.MoveFoliage_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::MoveFoliage_Client(class UBP_MasterFoliage_C* MasterFoliage, struct FVector InstanceLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.MoveFoliage_Client");

	struct ABP_BaseCharacter_C_MoveFoliage_Client_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		struct FVector InstanceLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_MoveFoliage_Client_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceLocation = InstanceLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Client_CreateCutscene
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Cutscenes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaFileURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Client_CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Client_CreateCutscene");

	struct ABP_BaseCharacter_C_Client_CreateCutscene_Params {
		TEnumAsByte<E_Cutscenes> Type;			//Offset: 0 | ElementSize: 1
		struct FString MediaFileURL;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_Client_CreateCutscene_Params params;
	params.Type = Type;
	params.MediaFileURL = MediaFileURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_CreateCutscene
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Cutscenes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaFileURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_CreateCutscene");

	struct ABP_BaseCharacter_C_Server_CreateCutscene_Params {
		TEnumAsByte<E_Cutscenes> Type;			//Offset: 0 | ElementSize: 1
		struct FString MediaFileURL;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_Server_CreateCutscene_Params params;
	params.Type = Type;
	params.MediaFileURL = MediaFileURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Client_ForceEndSpecificDialogue
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Client_ForceEndSpecificDialogue(struct FString NPCID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Client_ForceEndSpecificDialogue");

	struct ABP_BaseCharacter_C_Client_ForceEndSpecificDialogue_Params {
		struct FString NPCID;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_Client_ForceEndSpecificDialogue_Params params;
	params.NPCID = NPCID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_ForceEndSpecificDialogue
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_ForceEndSpecificDialogue(struct FString NPCID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_ForceEndSpecificDialogue");

	struct ABP_BaseCharacter_C_Server_ForceEndSpecificDialogue_Params {
		struct FString NPCID;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_Server_ForceEndSpecificDialogue_Params params;
	params.NPCID = NPCID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_ReleaseCharactersOnDialogueEnd
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_ReleaseCharactersOnDialogueEnd(class ABP_NPC_C* NPCReference, class ABP_PlayerCharacter_C* PlayerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_ReleaseCharactersOnDialogueEnd");

	struct ABP_BaseCharacter_C_Server_ReleaseCharactersOnDialogueEnd_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		class ABP_PlayerCharacter_C* PlayerReference;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_Server_ReleaseCharactersOnDialogueEnd_Params params;
	params.NPCReference = NPCReference;
	params.PlayerReference = PlayerReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Client_EndAllDialogues
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Client_EndAllDialogues() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Client_EndAllDialogues");

	struct ABP_BaseCharacter_C_Client_EndAllDialogues_Params {
	};
	ABP_BaseCharacter_C_Client_EndAllDialogues_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_EndAllDialogues
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_EndAllDialogues() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_EndAllDialogues");

	struct ABP_BaseCharacter_C_Server_EndAllDialogues_Params {
	};
	ABP_BaseCharacter_C_Server_EndAllDialogues_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlaySound_Client(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Client");

	struct ABP_BaseCharacter_C_PlaySound_Client_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 20 | ElementSize: 4
		float PitchMultiplier;			//Offset: 24 | ElementSize: 4
		float StartTime;			//Offset: 28 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlaySound_Client_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlaySound_Multicast(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Multicast");

	struct ABP_BaseCharacter_C_PlaySound_Multicast_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 20 | ElementSize: 4
		float PitchMultiplier;			//Offset: 24 | ElementSize: 4
		float StartTime;			//Offset: 28 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlaySound_Multicast_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlaySound_Server(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlaySound_Server");

	struct ABP_BaseCharacter_C_PlaySound_Server_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 20 | ElementSize: 4
		float PitchMultiplier;			//Offset: 24 | ElementSize: 4
		float StartTime;			//Offset: 28 | ElementSize: 4
	};
	ABP_BaseCharacter_C_PlaySound_Server_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Server_SetIsTargetOfTalkGoalForNPC
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Server_SetIsTargetOfTalkGoalForNPC(class ABP_NPC_C* NPCReference, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server_SetIsTargetOfTalkGoalForNPC");

	struct ABP_BaseCharacter_C_Server_SetIsTargetOfTalkGoalForNPC_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool Value;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Server_SetIsTargetOfTalkGoalForNPC_Params params;
	params.NPCReference = NPCReference;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_CurrentCharacterPresetsIDs
// Flags: Event, Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_CurrentCharacterPresetsIDs() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_CurrentCharacterPresetsIDs");

	struct ABP_BaseCharacter_C_OnRep_CurrentCharacterPresetsIDs_Params {
	};
	ABP_BaseCharacter_C_OnRep_CurrentCharacterPresetsIDs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnFoliageInteractionParticles_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnFoliageInteractionParticles_Multicast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnFoliageInteractionParticles_Multicast");

	struct ABP_BaseCharacter_C_SpawnFoliageInteractionParticles_Multicast_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SpawnFoliageInteractionParticles_Multicast_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnFoliageInteractionParticles_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnFoliageInteractionParticles_Server(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnFoliageInteractionParticles_Server");

	struct ABP_BaseCharacter_C_SpawnFoliageInteractionParticles_Server_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SpawnFoliageInteractionParticles_Server_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMasterFoliageMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnInteractionFX	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateMasterFoliageMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex, bool SpawnInteractionFX) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMasterFoliageMulticast");

	struct ABP_BaseCharacter_C_UpdateMasterFoliageMulticast_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
		bool SpawnInteractionFX;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateMasterFoliageMulticast_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;
	params.SpawnInteractionFX = SpawnInteractionFX;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMasterFoliageServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnInteractionFX	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateMasterFoliageServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex, bool SpawnInteractionFX) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMasterFoliageServer");

	struct ABP_BaseCharacter_C_UpdateMasterFoliageServer_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
		bool SpawnInteractionFX;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateMasterFoliageServer_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;
	params.SpawnInteractionFX = SpawnInteractionFX;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewResponse	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeCollisionResponseToChannel_Server(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel_Server");

	struct ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Server_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> NewResponse;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Server_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateBuildingsPeople_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: People	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateBuildingsPeople_Multicast(class ABP_MasterBuilding_C* BuildingReference, TArray<class ABP_BaseCharacter_C*>* People) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateBuildingsPeople_Multicast");

	struct ABP_BaseCharacter_C_UpdateBuildingsPeople_Multicast_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> People;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateBuildingsPeople_Multicast_Params params;
	params.BuildingReference = BuildingReference;

	UObject::ProcessEvent(fn, &params);
	if (People != nullptr)
		*People = params.People;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateBuildingsPeople_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: People	Type: TArray<class ABP_BaseCharacter_C*>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateBuildingsPeople_Server(class ABP_MasterBuilding_C* BuildingReference, const TArray<class ABP_BaseCharacter_C*>& People) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateBuildingsPeople_Server");

	struct ABP_BaseCharacter_C_UpdateBuildingsPeople_Server_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> People;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateBuildingsPeople_Server_Params params;
	params.BuildingReference = BuildingReference;
	params.People = People;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEquippedItemCapacity_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItemReference	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateEquippedItemCapacity_Server(class ABP_MasterHoldableItem_C* HeldItemReference, int32_t Capacity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEquippedItemCapacity_Server");

	struct ABP_BaseCharacter_C_UpdateEquippedItemCapacity_Server_Params {
		class ABP_MasterHoldableItem_C* HeldItemReference;			//Offset: 0 | ElementSize: 8
		int32_t Capacity;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_UpdateEquippedItemCapacity_Server_Params params;
	params.HeldItemReference = HeldItemReference;
	params.Capacity = Capacity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEquippedItemHP_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItemReference	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OffHand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateEquippedItemHP_Server(class ABP_MasterHoldableItem_C* HeldItemReference, float HP, bool OffHand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEquippedItemHP_Server");

	struct ABP_BaseCharacter_C_UpdateEquippedItemHP_Server_Params {
		class ABP_MasterHoldableItem_C* HeldItemReference;			//Offset: 0 | ElementSize: 8
		float HP;			//Offset: 8 | ElementSize: 4
		bool OffHand;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateEquippedItemHP_Server_Params params;
	params.HeldItemReference = HeldItemReference;
	params.HP = HP;
	params.OffHand = OffHand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllAnimals_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAllAnimals_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllAnimals_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAllAnimals_Server_Params {
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAllAnimals_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfAnimal	Type: TArray<struct FST_AnimalList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_AnimalCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAnimals_Multicast(TArray<struct FST_AnimalList>* ListOfAnimal, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Multicast");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Multicast_Params {
		TArray<struct FST_AnimalList> ListOfAnimal;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_AnimalCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Multicast_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfAnimal != nullptr)
		*ListOfAnimal = params.ListOfAnimal;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_AnimalCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UseDataFromManager	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAnimals_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories, bool UseDataFromManager, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAnimals_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Server_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_AnimalCategory> Categories;			//Offset: 8 | ElementSize: 16
		bool UseDataFromManager;			//Offset: 24 | ElementSize: 1
		bool ClientOnly;			//Offset: 25 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAnimals_Server_Params params;
	params.Ownership = Ownership;
	params.UseDataFromManager = UseDataFromManager;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllFurniture_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAllFurniture_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllFurniture_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAllFurniture_Server_Params {
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAllFurniture_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfFurniture	Type: TArray<struct FST_FurnitureList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FurnitureCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFurniture_Multicast(TArray<struct FST_FurnitureList>* ListOfFurniture, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Multicast");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Multicast_Params {
		TArray<struct FST_FurnitureList> ListOfFurniture;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_FurnitureCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Multicast_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfFurniture != nullptr)
		*ListOfFurniture = params.ListOfFurniture;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FurnitureCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UseDataFromManagement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ClientOnly	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFurniture_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories, bool UseDataFromManagement, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFurniture_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Server_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_FurnitureCategory> Categories;			//Offset: 8 | ElementSize: 16
		bool UseDataFromManagement;			//Offset: 24 | ElementSize: 1
		bool ClientOnly;			//Offset: 25 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFurniture_Server_Params params;
	params.Ownership = Ownership;
	params.UseDataFromManagement = UseDataFromManagement;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllFields_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAllFields_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllFields_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAllFields_Server_Params {
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAllFields_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfFields	Type: TArray<struct FST_FieldList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FieldCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFields_Multicast(TArray<struct FST_FieldList>* ListOfFields, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Multicast");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Multicast_Params {
		TArray<struct FST_FieldList> ListOfFields;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_FieldCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Multicast_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfFields != nullptr)
		*ListOfFields = params.ListOfFields;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_FieldCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UseDataFromManager	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfFields_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories, bool UseDataFromManager, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfFields_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Server_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_FieldCategory> Categories;			//Offset: 8 | ElementSize: 16
		bool UseDataFromManager;			//Offset: 24 | ElementSize: 1
		bool ClientOnly;			//Offset: 25 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfFields_Server_Params params;
	params.Ownership = Ownership;
	params.UseDataFromManager = UseDataFromManager;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllBuildings_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAllBuildings_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllBuildings_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAllBuildings_Server_Params {
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAllBuildings_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfBuildings	Type: TArray<struct FST_BuildingList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_BuildingCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfBuildings_Multicast(TArray<struct FST_BuildingList>* ListOfBuildings, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Multicast");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Multicast_Params {
		TArray<struct FST_BuildingList> ListOfBuildings;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_BuildingCategory> Categories;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Multicast_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfBuildings != nullptr)
		*ListOfBuildings = params.ListOfBuildings;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Categories	Type: TArray<struct FST_BuildingCategory>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UseDataFromManager	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfBuildings_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories, bool UseDataFromManager, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfBuildings_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Server_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_BuildingCategory> Categories;			//Offset: 8 | ElementSize: 16
		bool UseDataFromManager;			//Offset: 24 | ElementSize: 1
		bool ClientOnly;			//Offset: 25 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfBuildings_Server_Params params;
	params.Ownership = Ownership;
	params.UseDataFromManager = UseDataFromManager;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllNPCs_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfAllNPCs_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfAllNPCs_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfAllNPCs_Server_Params {
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfAllNPCs_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ListOfAllNPC	Type: TArray<struct FST_CharacterList>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OnlySpecificOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ListOfNPC	Type: TArray<class ABP_NPC_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfNPCs_Multicast(TArray<struct FST_CharacterList>* ListOfAllNPC, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Multicast");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Multicast_Params {
		TArray<struct FST_CharacterList> ListOfAllNPC;			//Offset: 0 | ElementSize: 16
		bool OnlySpecificOwnership;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 17 | ElementSize: 1
		TArray<class ABP_NPC_C*> ListOfNPC;			//Offset: 24 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Multicast_Params params;
	params.OnlySpecificOwnership = OnlySpecificOwnership;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (ListOfAllNPC != nullptr)
		*ListOfAllNPC = params.ListOfAllNPC;
	if (ListOfNPC != nullptr)
		*ListOfNPC = params.ListOfNPC;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ListOfNPC	Type: TArray<class ABP_NPC_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UseDataFromManager	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDataManager_ListOfNPCs_Server(TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC, bool UseDataFromManager, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDataManager_ListOfNPCs_Server");

	struct ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Server_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TArray<class ABP_NPC_C*> ListOfNPC;			//Offset: 8 | ElementSize: 16
		bool UseDataFromManager;			//Offset: 24 | ElementSize: 1
		bool ClientOnly;			//Offset: 25 | ElementSize: 1
	};
	ABP_BaseCharacter_C_UpdateDataManager_ListOfNPCs_Server_Params params;
	params.Ownership = Ownership;
	params.UseDataFromManager = UseDataFromManager;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
	if (ListOfNPC != nullptr)
		*ListOfNPC = params.ListOfNPC;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnSound_Client(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Client");

	struct ABP_BaseCharacter_C_SpawnSound_Client_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 32 | ElementSize: 4
		float PitchMultiplier;			//Offset: 36 | ElementSize: 4
		float StartTime;			//Offset: 40 | ElementSize: 4
		class USoundAttenuation* AttenuationSettings;			//Offset: 48 | ElementSize: 8
		class USoundConcurrency* ConcurrencySettings;			//Offset: 56 | ElementSize: 8
		bool bAutoDestroy;			//Offset: 64 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnSound_Client_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeRotation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRelativeRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRelativeRotation_Server(struct FRotator NewRelativeRotation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeRotation_Server");

	struct ABP_BaseCharacter_C_SetActorRelativeRotation_Server_Params {
		struct FRotator NewRelativeRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		bool bTeleport;			//Offset: 13 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRelativeRotation_Server_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeRotation_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRelativeRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRelativeRotation_Multicast(struct FRotator NewRelativeRotation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeRotation_Multicast");

	struct ABP_BaseCharacter_C_SetActorRelativeRotation_Multicast_Params {
		struct FRotator NewRelativeRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		bool bTeleport;			//Offset: 13 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRelativeRotation_Multicast_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeLocation_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRelativeLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRelativeLocation_Multicast(struct FVector NewRelativeLocation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeLocation_Multicast");

	struct ABP_BaseCharacter_C_SetActorRelativeLocation_Multicast_Params {
		struct FVector NewRelativeLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		bool bTeleport;			//Offset: 13 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRelativeLocation_Multicast_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeLocation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRelativeLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRelativeLocation_Server(struct FVector NewRelativeLocation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRelativeLocation_Server");

	struct ABP_BaseCharacter_C_SetActorRelativeLocation_Server_Params {
		struct FVector NewRelativeLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		bool bTeleport;			//Offset: 13 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRelativeLocation_Server_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSleeping_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSleeping_Multicast(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSleeping_Multicast");

	struct ABP_BaseCharacter_C_SetSleeping_Multicast_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSleeping_Multicast_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSitting_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSitting_Multicast(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSitting_Multicast");

	struct ABP_BaseCharacter_C_SetSitting_Multicast_Params {
		bool Sitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSitting_Multicast_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRotation_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleportPhysics	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRotation_Multicast(class AActor* Target, struct FRotator NewRotation, bool bTeleportPhysics) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRotation_Multicast");

	struct ABP_BaseCharacter_C_SetActorRotation_Multicast_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FRotator NewRotation;			//Offset: 8 | ElementSize: 12
		bool bTeleportPhysics;			//Offset: 20 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRotation_Multicast_Params params;
	params.Target = Target;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRotation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleportPhysics	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorRotation_Server(class AActor* Target, struct FRotator NewRotation, bool bTeleportPhysics) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorRotation_Server");

	struct ABP_BaseCharacter_C_SetActorRotation_Server_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FRotator NewRotation;			//Offset: 8 | ElementSize: 12
		bool bTeleportPhysics;			//Offset: 20 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorRotation_Server_Params params;
	params.Target = Target;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keys	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Values	Type: TArray<struct FST_InventoryItemsArray>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: InvComp	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplicateInventoryForNonCharacter_Multicast(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values, class UInventoryComponent_C* InvComp) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Multicast");

	struct ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Multicast_Params {
		TArray<struct FName> Keys;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_InventoryItemsArray> Values;			//Offset: 16 | ElementSize: 16
		class UInventoryComponent_C* InvComp;			//Offset: 32 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Multicast_Params params;
	params.Keys = Keys;
	params.Values = Values;
	params.InvComp = InvComp;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keys	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Values	Type: TArray<struct FST_InventoryItemsArray>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: InvComp	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplicateInventoryForNonCharacter_Client(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values, class UInventoryComponent_C* InvComp) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Client");

	struct ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Client_Params {
		TArray<struct FName> Keys;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_InventoryItemsArray> Values;			//Offset: 16 | ElementSize: 16
		class UInventoryComponent_C* InvComp;			//Offset: 32 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Client_Params params;
	params.Keys = Keys;
	params.Values = Values;
	params.InvComp = InvComp;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InvComp	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ClientOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplicateInventoryForNonCharacter_Server(class UInventoryComponent_C* InvComp, bool ClientOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForNonCharacter_Server");

	struct ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Server_Params {
		class UInventoryComponent_C* InvComp;			//Offset: 0 | ElementSize: 8
		bool ClientOnly;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ReplicateInventoryForNonCharacter_Server_Params params;
	params.InvComp = InvComp;
	params.ClientOnly = ClientOnly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InteractCancel_Server(class AActor* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel_Server");

	struct ABP_BaseCharacter_C_InteractCancel_Server_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InteractCancel_Server_Params params;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorHidden_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: bNewHidden	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorHidden_Server(bool bNewHidden) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorHidden_Server");

	struct ABP_BaseCharacter_C_SetActorHidden_Server_Params {
		bool bNewHidden;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorHidden_Server_Params params;
	params.bNewHidden = bNewHidden;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSleeping_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSleeping_Server(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSleeping_Server");

	struct ABP_BaseCharacter_C_SetSleeping_Server_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSleeping_Server_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSitting_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSitting_Server(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSitting_Server");

	struct ABP_BaseCharacter_C_SetSitting_Server_Params {
		bool Sitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSitting_Server_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetEnableIK_Server(bool IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Server");

	struct ABP_BaseCharacter_C_SetEnableIK_Server_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetEnableIK_Server_Params params;
	params.IK_Enabled = IK_Enabled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetInteractionSlotIndex_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetInteractionSlotIndex_Client(int32_t InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetInteractionSlotIndex_Client");

	struct ABP_BaseCharacter_C_SetInteractionSlotIndex_Client_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetInteractionSlotIndex_Client_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetInteractionSlotIndex_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetInteractionSlotIndex_Server(int32_t InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetInteractionSlotIndex_Server");

	struct ABP_BaseCharacter_C_SetInteractionSlotIndex_Server_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetInteractionSlotIndex_Server_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSatDown_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SatDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSatDown_Server(bool SatDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSatDown_Server");

	struct ABP_BaseCharacter_C_SetSatDown_Server_Params {
		bool SatDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSatDown_Server_Params params;
	params.SatDown = SatDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSatDown
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SatDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSatDown(bool SatDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSatDown");

	struct ABP_BaseCharacter_C_SetSatDown_Params {
		bool SatDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSatDown_Params params;
	params.SatDown = SatDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDialogueEnded_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded_Server");

	struct ABP_BaseCharacter_C_OnDialogueEnded_Server_Params {
	};
	ABP_BaseCharacter_C_OnDialogueEnded_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDialogueStarted_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted_Server");

	struct ABP_BaseCharacter_C_OnDialogueStarted_Server_Params {
	};
	ABP_BaseCharacter_C_OnDialogueStarted_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel_Mullticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewResponse	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeCollisionResponseToChannel_Mullticast(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel_Mullticast");

	struct ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Mullticast_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> NewResponse;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Mullticast_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocation_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorLocation_Client(struct FVector NewLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocation_Client");

	struct ABP_BaseCharacter_C_SetActorLocation_Client_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_SetActorLocation_Client_Params params;
	params.NewLocation = NewLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorLocation_Server(class AActor* Target, struct FVector NewLocation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocation_Server");

	struct ABP_BaseCharacter_C_SetActorLocation_Server_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector NewLocation;			//Offset: 8 | ElementSize: 12
		bool bSweep;			//Offset: 20 | ElementSize: 1
		bool bTeleport;			//Offset: 21 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorLocation_Server_Params params;
	params.Target = Target;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocationAndRotation_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorLocationAndRotation_Multicast(class AActor* Target, struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocationAndRotation_Multicast");

	struct ABP_BaseCharacter_C_SetActorLocationAndRotation_Multicast_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector NewLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 20 | ElementSize: 12
		bool bSweep;			//Offset: 32 | ElementSize: 1
		bool bTeleport;			//Offset: 33 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorLocationAndRotation_Multicast_Params params;
	params.Target = Target;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocationAndRotation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bTeleport	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetActorLocationAndRotation_Server(class AActor* Target, struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetActorLocationAndRotation_Server");

	struct ABP_BaseCharacter_C_SetActorLocationAndRotation_Server_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector NewLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 20 | ElementSize: 12
		bool bSweep;			//Offset: 32 | ElementSize: 1
		bool bTeleport;			//Offset: 33 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetActorLocationAndRotation_Server_Params params;
	params.Target = Target;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CallOnInteractionFinished_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CallOnInteractionFinished_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CallOnInteractionFinished_Server");

	struct ABP_BaseCharacter_C_CallOnInteractionFinished_Server_Params {
	};
	ABP_BaseCharacter_C_CallOnInteractionFinished_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewResponse	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeCollisionResponseToChannel");

	struct ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> NewResponse;			//Offset: 1 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ChangeCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateNumberOfDecorationsServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateNumberOfDecorationsServer(class ABP_MasterBuilding_C* Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateNumberOfDecorationsServer");

	struct ABP_BaseCharacter_C_UpdateNumberOfDecorationsServer_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateNumberOfDecorationsServer_Params params;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PreviewDecorationServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Module	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DecorObject	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PreviewDecorationServer(class ABP_MasterBuildModule_C* Module, int32_t SlotID, struct FName DecorObject) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PreviewDecorationServer");

	struct ABP_BaseCharacter_C_PreviewDecorationServer_Params {
		class ABP_MasterBuildModule_C* Module;			//Offset: 0 | ElementSize: 8
		int32_t SlotID;			//Offset: 8 | ElementSize: 4
		struct FName DecorObject;			//Offset: 12 | ElementSize: 8
	};
	ABP_BaseCharacter_C_PreviewDecorationServer_Params params;
	params.Module = Module;
	params.SlotID = SlotID;
	params.DecorObject = DecorObject;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDecorationServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Module	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OverwriteDecorObject	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DecorObject	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateDecorationServer(class ABP_MasterBuildModule_C* Module, int32_t SlotID, bool OverwriteDecorObject, struct FName DecorObject) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDecorationServer");

	struct ABP_BaseCharacter_C_UpdateDecorationServer_Params {
		class ABP_MasterBuildModule_C* Module;			//Offset: 0 | ElementSize: 8
		int32_t SlotID;			//Offset: 8 | ElementSize: 4
		bool OverwriteDecorObject;			//Offset: 12 | ElementSize: 1
		struct FName DecorObject;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateDecorationServer_Params params;
	params.Module = Module;
	params.SlotID = SlotID;
	params.OverwriteDecorObject = OverwriteDecorObject;
	params.DecorObject = DecorObject;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeBuildingModuleServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SocketID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Module_ID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Inventory	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeBuildingModuleServer(class ABP_MasterBuilding_C* Building, int32_t SocketID, int32_t Module_ID, class UInventoryComponent_C* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeBuildingModuleServer");

	struct ABP_BaseCharacter_C_ChangeBuildingModuleServer_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		int32_t SocketID;			//Offset: 8 | ElementSize: 4
		int32_t Module_ID;			//Offset: 12 | ElementSize: 4
		class UInventoryComponent_C* Inventory;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ChangeBuildingModuleServer_Params params;
	params.Building = Building;
	params.SocketID = SocketID;
	params.Module_ID = Module_ID;
	params.Inventory = Inventory;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: HairID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHairID_Multicast(int32_t HairID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID_Multicast");

	struct ABP_BaseCharacter_C_SetHairID_Multicast_Params {
		int32_t HairID;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHairID_Multicast_Params params;
	params.HairID = HairID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHeadID_Multicast(int32_t HeadID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID_Multicast");

	struct ABP_BaseCharacter_C_SetHeadID_Multicast_Params {
		int32_t HeadID;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHeadID_Multicast_Params params;
	params.HeadID = HeadID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HairID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHairID_Server(int32_t HairID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID_Server");

	struct ABP_BaseCharacter_C_SetHairID_Server_Params {
		int32_t HairID;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHairID_Server_Params params;
	params.HairID = HairID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHeadID_Server(int32_t HeadID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID_Server");

	struct ABP_BaseCharacter_C_SetHeadID_Server_Params {
		int32_t HeadID;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHeadID_Server_Params params;
	params.HeadID = HeadID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetFullBodyAimOffset_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimOffset	Type: class UBlendSpaceBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetFullBodyAimOffset_Multicast(class UBlendSpaceBase* AimOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetFullBodyAimOffset_Multicast");

	struct ABP_BaseCharacter_C_SetFullBodyAimOffset_Multicast_Params {
		class UBlendSpaceBase* AimOffset;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetFullBodyAimOffset_Multicast_Params params;
	params.AimOffset = AimOffset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetFullBodyAimOffset_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimOffset	Type: class UBlendSpaceBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetFullBodyAimOffset_Server(class UBlendSpaceBase* AimOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetFullBodyAimOffset_Server");

	struct ABP_BaseCharacter_C_SetFullBodyAimOffset_Server_Params {
		class UBlendSpaceBase* AimOffset;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetFullBodyAimOffset_Server_Params params;
	params.AimOffset = AimOffset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageAimOffset_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimOffset	Type: class UBlendSpaceBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMontageAimOffset_Multicast(class UBlendSpaceBase* AimOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageAimOffset_Multicast");

	struct ABP_BaseCharacter_C_SetMontageAimOffset_Multicast_Params {
		class UBlendSpaceBase* AimOffset;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetMontageAimOffset_Multicast_Params params;
	params.AimOffset = AimOffset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageAimOffset_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimOffset	Type: class UBlendSpaceBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMontageAimOffset_Server(class UBlendSpaceBase* AimOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageAimOffset_Server");

	struct ABP_BaseCharacter_C_SetMontageAimOffset_Server_Params {
		class UBlendSpaceBase* AimOffset;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetMontageAimOffset_Server_Params params;
	params.AimOffset = AimOffset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFighting_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting_Multicast");

	struct ABP_BaseCharacter_C_FistFighting_Multicast_Params {
	};
	ABP_BaseCharacter_C_FistFighting_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FistFighting_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting_Server");

	struct ABP_BaseCharacter_C_FistFighting_Server_Params {
	};
	ABP_BaseCharacter_C_FistFighting_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetBlocking_Multicast(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Multicast");

	struct ABP_BaseCharacter_C_SetBlocking_Multicast_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetBlocking_Multicast_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetBlocking_Server(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetBlocking_Server");

	struct ABP_BaseCharacter_C_SetBlocking_Server_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetBlocking_Server_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayHolsterAnimation_Multicast(float PlayRate, TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation_Multicast");

	struct ABP_BaseCharacter_C_PlayHolsterAnimation_Multicast_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayHolsterAnimation_Multicast_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayHolsterAnimation_Server(float PlayRate, TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation_Server");

	struct ABP_BaseCharacter_C_PlayHolsterAnimation_Server_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayHolsterAnimation_Server_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopMontage_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: InBlendOutTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopMontage_Multicast(float InBlendOutTime, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopMontage_Multicast");

	struct ABP_BaseCharacter_C_StopMontage_Multicast_Params {
		float InBlendOutTime;			//Offset: 0 | ElementSize: 4
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StopMontage_Multicast_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopMontage_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InBlendOutTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopMontage_Server(float InBlendOutTime, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopMontage_Server");

	struct ABP_BaseCharacter_C_StopMontage_Server_Params {
		float InBlendOutTime;			//Offset: 0 | ElementSize: 4
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_StopMontage_Server_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionGateDestroyServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gate	Type: class ABP_MasterGate_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionGateDestroyServer(class ABP_MasterGate_C* Gate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionGateDestroyServer");

	struct ABP_BaseCharacter_C_ToolInteractionGateDestroyServer_Params {
		class ABP_MasterGate_C* Gate;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionGateDestroyServer_Params params;
	params.Gate = Gate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionGateBuildServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gate	Type: class ABP_MasterGate_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionGateBuildServer(class ABP_MasterGate_C* Gate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionGateBuildServer");

	struct ABP_BaseCharacter_C_ToolInteractionGateBuildServer_Params {
		class ABP_MasterGate_C* Gate;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionGateBuildServer_Params params;
	params.Gate = Gate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FinishStageInteraction_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction_Client");

	struct ABP_BaseCharacter_C_FinishStageInteraction_Client_Params {
	};
	ABP_BaseCharacter_C_FinishStageInteraction_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartStageInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StageInteractionType	Type: TEnumAsByte<E_StageInteractionsTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfAutomaticLoops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SwapItemsOnInteraction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartStageInteraction_Client(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartStageInteraction_Client");

	struct ABP_BaseCharacter_C_StartStageInteraction_Client_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_StageInteractionsTypes> StageInteractionType;			//Offset: 8 | ElementSize: 1
		class UAnimMontage* MontageToPlay;			//Offset: 16 | ElementSize: 8
		int32_t NumberOfAutomaticLoops;			//Offset: 24 | ElementSize: 4
		bool SwapItemsOnInteraction;			//Offset: 28 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartStageInteraction_Client_Params params;
	params.InteractedActor = InteractedActor;
	params.StageInteractionType = StageInteractionType;
	params.MontageToPlay = MontageToPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionBuildingDestroyServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildModule	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionBuildingDestroyServer(class ABP_MasterBuildModule_C* BuildModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionBuildingDestroyServer");

	struct ABP_BaseCharacter_C_ToolInteractionBuildingDestroyServer_Params {
		class ABP_MasterBuildModule_C* BuildModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionBuildingDestroyServer_Params params;
	params.BuildModule = BuildModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteFinishBuildingVisualsMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Base	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Frame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ExecuteFinishBuildingVisualsMulticast(class ABP_MasterBuilding_C* Building, bool Base, bool Frame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteFinishBuildingVisualsMulticast");

	struct ABP_BaseCharacter_C_ExecuteFinishBuildingVisualsMulticast_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		bool Base;			//Offset: 8 | ElementSize: 1
		bool Frame;			//Offset: 9 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ExecuteFinishBuildingVisualsMulticast_Params params;
	params.Building = Building;
	params.Base = Base;
	params.Frame = Frame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMaterialsOnBuildingModuleConstructedMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingModule	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateMaterialsOnBuildingModuleConstructedMulticast(class ABP_MasterBuildModule_C* BuildingModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMaterialsOnBuildingModuleConstructedMulticast");

	struct ABP_BaseCharacter_C_UpdateMaterialsOnBuildingModuleConstructedMulticast_Params {
		class ABP_MasterBuildModule_C* BuildingModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateMaterialsOnBuildingModuleConstructedMulticast_Params params;
	params.BuildingModule = BuildingModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnParticles_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: EmitterTemplate	Type: class UParticleSystem*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Scale	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PoolingMethod	Type: EPSCPoolMethod	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoActivateSystem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnParticles_Multicast(class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnParticles_Multicast");

	struct ABP_BaseCharacter_C_SpawnParticles_Multicast_Params {
		class UParticleSystem* EmitterTemplate;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
		struct FVector Scale;			//Offset: 32 | ElementSize: 12
		bool bAutoDestroy;			//Offset: 44 | ElementSize: 1
		EPSCPoolMethod PoolingMethod;			//Offset: 45 | ElementSize: 1
		bool bAutoActivateSystem;			//Offset: 46 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnParticles_Multicast_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.PoolingMethod = PoolingMethod;
	params.bAutoActivateSystem = bAutoActivateSystem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnParticles_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: EmitterTemplate	Type: class UParticleSystem*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Scale	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PoolingMethod	Type: EPSCPoolMethod	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoActivateSystem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnParticles_Server(class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnParticles_Server");

	struct ABP_BaseCharacter_C_SpawnParticles_Server_Params {
		class UParticleSystem* EmitterTemplate;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
		struct FVector Scale;			//Offset: 32 | ElementSize: 12
		bool bAutoDestroy;			//Offset: 44 | ElementSize: 1
		EPSCPoolMethod PoolingMethod;			//Offset: 45 | ElementSize: 1
		bool bAutoActivateSystem;			//Offset: 46 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnParticles_Server_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.PoolingMethod = PoolingMethod;
	params.bAutoActivateSystem = bAutoActivateSystem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnSound_Multicast(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Multicast");

	struct ABP_BaseCharacter_C_SpawnSound_Multicast_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 32 | ElementSize: 4
		float PitchMultiplier;			//Offset: 36 | ElementSize: 4
		float StartTime;			//Offset: 40 | ElementSize: 4
		class USoundAttenuation* AttenuationSettings;			//Offset: 48 | ElementSize: 8
		class USoundConcurrency* ConcurrencySettings;			//Offset: 56 | ElementSize: 8
		bool bAutoDestroy;			//Offset: 64 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnSound_Multicast_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VolumeMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PitchMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AttenuationSettings	Type: class USoundAttenuation*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ConcurrencySettings	Type: class USoundConcurrency*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bAutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnSound_Server(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnSound_Server");

	struct ABP_BaseCharacter_C_SpawnSound_Server_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 32 | ElementSize: 4
		float PitchMultiplier;			//Offset: 36 | ElementSize: 4
		float StartTime;			//Offset: 40 | ElementSize: 4
		class USoundAttenuation* AttenuationSettings;			//Offset: 48 | ElementSize: 8
		class USoundConcurrency* ConcurrencySettings;			//Offset: 56 | ElementSize: 8
		bool bAutoDestroy;			//Offset: 64 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnSound_Server_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionSplineDestroyServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SplineModule	Type: class UBP_MasterSplineModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionSplineDestroyServer(class UBP_MasterSplineModule_C* SplineModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionSplineDestroyServer");

	struct ABP_BaseCharacter_C_ToolInteractionSplineDestroyServer_Params {
		class UBP_MasterSplineModule_C* SplineModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionSplineDestroyServer_Params params;
	params.SplineModule = SplineModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMaterialsOnSplineModuleConstructedMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: SplineModule	Type: class UBP_MasterSplineModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateMaterialsOnSplineModuleConstructedMulticast(class UBP_MasterSplineModule_C* SplineModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateMaterialsOnSplineModuleConstructedMulticast");

	struct ABP_BaseCharacter_C_UpdateMaterialsOnSplineModuleConstructedMulticast_Params {
		class UBP_MasterSplineModule_C* SplineModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_UpdateMaterialsOnSplineModuleConstructedMulticast_Params params;
	params.SplineModule = SplineModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionSplineBuildServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SplineModule	Type: class UBP_MasterSplineModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionSplineBuildServer(class UBP_MasterSplineModule_C* SplineModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionSplineBuildServer");

	struct ABP_BaseCharacter_C_ToolInteractionSplineBuildServer_Params {
		class UBP_MasterSplineModule_C* SplineModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionSplineBuildServer_Params params;
	params.SplineModule = SplineModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseReputationServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DecreaseReputationServer(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseReputationServer");

	struct ABP_BaseCharacter_C_DecreaseReputationServer_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_DecreaseReputationServer_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseReputationServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IncreaseReputationServer(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseReputationServer");

	struct ABP_BaseCharacter_C_IncreaseReputationServer_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IncreaseReputationServer_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTechnologyServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: TechnologyType	Type: TEnumAsByte<E_TechnologyTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IncreaseTechnologyServer(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IncreaseTechnologyServer");

	struct ABP_BaseCharacter_C_IncreaseTechnologyServer_Params {
		TEnumAsByte<E_TechnologyTypes> TechnologyType;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_IncreaseTechnologyServer_Params params;
	params.TechnologyType = TechnologyType;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionBuildServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildModule	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteractionBuildServer(class ABP_MasterBuildModule_C* BuildModule) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteractionBuildServer");

	struct ABP_BaseCharacter_C_ToolInteractionBuildServer_Params {
		class ABP_MasterBuildModule_C* BuildModule;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ToolInteractionBuildServer_Params params;
	params.BuildModule = BuildModule;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableActionHit_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableActionHit_Multicast(TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableActionHit_Multicast");

	struct ABP_BaseCharacter_C_HoldableActionHit_Multicast_Params {
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 0 | ElementSize: 1
		int32_t AnimID;			//Offset: 4 | ElementSize: 4
		bool IgnorePlayingMontage;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HoldableActionHit_Multicast_Params params;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableActionHit_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableActionHit_Server(TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableActionHit_Server");

	struct ABP_BaseCharacter_C_HoldableActionHit_Server_Params {
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 0 | ElementSize: 1
		int32_t AnimID;			//Offset: 4 | ElementSize: 4
		bool IgnorePlayingMontage;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HoldableActionHit_Server_Params params;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableAction_Multicast(bool Loop, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction Multicast");

	struct ABP_BaseCharacter_C_HoldableAction_Multicast_Params {
		bool Loop;			//Offset: 0 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 2 | ElementSize: 1
		int32_t AnimID;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_HoldableAction_Multicast_Params params;
	params.Loop = Loop;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: UseLookingDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookingDownAngle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OverrideMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::HoldableAction_Server(bool UseLookingDown, float LookingDownAngle, bool Loop, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction Server");

	struct ABP_BaseCharacter_C_HoldableAction_Server_Params {
		bool UseLookingDown;			//Offset: 0 | ElementSize: 1
		float LookingDownAngle;			//Offset: 4 | ElementSize: 4
		bool Loop;			//Offset: 8 | ElementSize: 1
		bool OverrideMontage;			//Offset: 9 | ElementSize: 1
		bool IgnorePlayingMontage;			//Offset: 10 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 11 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 12 | ElementSize: 1
		int32_t AnimID;			//Offset: 16 | ElementSize: 4
	};
	ABP_BaseCharacter_C_HoldableAction_Server_Params params;
	params.UseLookingDown = UseLookingDown;
	params.LookingDownAngle = LookingDownAngle;
	params.Loop = Loop;
	params.OverrideMontage = OverrideMontage;
	params.IgnorePlayingMontage = IgnorePlayingMontage;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PickUpMasterResourceItemServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemReference	Type: class ABP_MasterResourceItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PickUpMasterResourceItemServer(class ABP_MasterResourceItem_C* ItemReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PickUpMasterResourceItemServer");

	struct ABP_BaseCharacter_C_PickUpMasterResourceItemServer_Params {
		class ABP_MasterResourceItem_C* ItemReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_PickUpMasterResourceItemServer_Params params;
	params.ItemReference = ItemReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetAnimBPToolType_Server
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetAnimBPToolType_Server(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetAnimBPToolType_Server");

	struct ABP_BaseCharacter_C_SetAnimBPToolType_Server_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetAnimBPToolType_Server_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandHeldItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DestroyOffHandHeldItem_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandHeldItem_Server");

	struct ABP_BaseCharacter_C_DestroyOffHandHeldItem_Server_Params {
	};
	ABP_BaseCharacter_C_DestroyOffHandHeldItem_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DestroyHeldItem_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem_Server");

	struct ABP_BaseCharacter_C_DestroyHeldItem_Server_Params {
	};
	ABP_BaseCharacter_C_DestroyHeldItem_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandHeldItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Class	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateToolType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AttachHeldItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnOffHandHeldItem_Server(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, bool UpdateToolType, bool AttachHeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandHeldItem_Server");

	struct ABP_BaseCharacter_C_SpawnOffHandHeldItem_Server_Params {
		class ABP_MasterHoldableItem_C* Class;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		int32_t Capacity;			//Offset: 64 | ElementSize: 4
		float CurrentHP;			//Offset: 68 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 72 | ElementSize: 1
		bool UpdateToolType;			//Offset: 73 | ElementSize: 1
		bool AttachHeldItem;			//Offset: 74 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnOffHandHeldItem_Server_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Ownership = Ownership;
	params.UpdateToolType = UpdateToolType;
	params.AttachHeldItem = AttachHeldItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AttachHeldItem_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Holdable	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AttachHeldItem_Multicast(class ABP_MasterHoldableItem_C* Holdable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AttachHeldItem_Multicast");

	struct ABP_BaseCharacter_C_AttachHeldItem_Multicast_Params {
		class ABP_MasterHoldableItem_C* Holdable;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_AttachHeldItem_Multicast_Params params;
	params.Holdable = Holdable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetAnimBPToolType_Multicast
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetAnimBPToolType_Multicast(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetAnimBPToolType_Multicast");

	struct ABP_BaseCharacter_C_SetAnimBPToolType_Multicast_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetAnimBPToolType_Multicast_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyActor_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DestroyActor_Server(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyActor_Server");

	struct ABP_BaseCharacter_C_DestroyActor_Server_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_DestroyActor_Server_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Class	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Capacity	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateToolType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AttachHeldItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SpawnHeldItem_Server(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, bool UpdateToolType, bool AttachHeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem_Server");

	struct ABP_BaseCharacter_C_SpawnHeldItem_Server_Params {
		class ABP_MasterHoldableItem_C* Class;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		int32_t Capacity;			//Offset: 64 | ElementSize: 4
		float CurrentHP;			//Offset: 68 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 72 | ElementSize: 1
		bool UpdateToolType;			//Offset: 73 | ElementSize: 1
		bool AttachHeldItem;			//Offset: 74 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SpawnHeldItem_Server_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Ownership = Ownership;
	params.UpdateToolType = UpdateToolType;
	params.AttachHeldItem = AttachHeldItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplaceFoliageToEmptyMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplaceFoliageToEmptyMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplaceFoliageToEmptyMulticast");

	struct ABP_BaseCharacter_C_ReplaceFoliageToEmptyMulticast_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ReplaceFoliageToEmptyMulticast_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplaceFoliageToEmptyServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplaceFoliageToEmptyServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplaceFoliageToEmptyServer");

	struct ABP_BaseCharacter_C_ReplaceFoliageToEmptyServer_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ReplaceFoliageToEmptyServer_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveFoliageByMoveMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveFoliageByMoveMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveFoliageByMoveMulticast");

	struct ABP_BaseCharacter_C_RemoveFoliageByMoveMulticast_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_RemoveFoliageByMoveMulticast_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveFoliageByMoveServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstanceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveFoliageByMoveServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveFoliageByMoveServer");

	struct ABP_BaseCharacter_C_RemoveFoliageByMoveServer_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		int32_t InstanceIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_RemoveFoliageByMoveServer_Params params;
	params.MasterFoliage = MasterFoliage;
	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveItemFromInventoryTransferServer
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InvCompReference	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldSpawn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DisplayNotification	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveItemFromInventoryTransferServer(class UInventoryComponent_C* InvCompReference, int32_t Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, const struct FName& ItemName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveItemFromInventoryTransferServer");

	struct ABP_BaseCharacter_C_RemoveItemFromInventoryTransferServer_Params {
		class UInventoryComponent_C* InvCompReference;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		bool ShouldSpawn;			//Offset: 12 | ElementSize: 1
		bool DisplayNotification;			//Offset: 13 | ElementSize: 1
		bool UpdateInventory;			//Offset: 14 | ElementSize: 1
		int32_t ArrayID;			//Offset: 16 | ElementSize: 4
		struct FName ItemName;			//Offset: 20 | ElementSize: 8
	};
	ABP_BaseCharacter_C_RemoveItemFromInventoryTransferServer_Params params;
	params.InvCompReference = InvCompReference;
	params.Count = Count;
	params.ShouldSpawn = ShouldSpawn;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.ArrayID = ArrayID;
	params.ItemName = ItemName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveItemFromInventory Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InvCompReference	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
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
void ABP_BaseCharacter_C::RemoveItemFromInventory_Server(class UInventoryComponent_C* InvCompReference, int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveItemFromInventory Server");

	struct ABP_BaseCharacter_C_RemoveItemFromInventory_Server_Params {
		class UInventoryComponent_C* InvCompReference;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		bool ShouldSpawn;			//Offset: 12 | ElementSize: 1
		bool UseCustomTransformForSpawn;			//Offset: 13 | ElementSize: 1
		struct FTransform CustomTransform;			//Offset: 16 | ElementSize: 48
		bool DisplayNotification;			//Offset: 64 | ElementSize: 1
		bool UpdateInventory;			//Offset: 65 | ElementSize: 1
		int32_t ArrayID;			//Offset: 68 | ElementSize: 4
		struct FName ItemName;			//Offset: 72 | ElementSize: 8
		float NotificationDelay;			//Offset: 80 | ElementSize: 4
	};
	ABP_BaseCharacter_C_RemoveItemFromInventory_Server_Params params;
	params.InvCompReference = InvCompReference;
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
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddItemToDestinationInvCompServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InvCompReference	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
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
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddItemToDestinationInvCompServer(class UInventoryComponent_C* InvCompReference, struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddItemToDestinationInvCompServer");

	struct ABP_BaseCharacter_C_AddItemToDestinationInvCompServer_Params {
		class UInventoryComponent_C* InvCompReference;			//Offset: 0 | ElementSize: 8
		struct FName ItemId;			//Offset: 8 | ElementSize: 8
		int32_t Count;			//Offset: 16 | ElementSize: 4
		bool PassCondition;			//Offset: 20 | ElementSize: 1
		float CurrentHP;			//Offset: 24 | ElementSize: 4
		float MaxHP;			//Offset: 28 | ElementSize: 4
		int32_t Capacity;			//Offset: 32 | ElementSize: 4
		float Freshness;			//Offset: 36 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 40 | ElementSize: 1
		bool DisplayNotification;			//Offset: 41 | ElementSize: 1
		bool UpdateInventory;			//Offset: 42 | ElementSize: 1
		bool CountAsPickUp;			//Offset: 43 | ElementSize: 1
		float NotificationDelay;			//Offset: 44 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AddItemToDestinationInvCompServer_Params params;
	params.InvCompReference = InvCompReference;
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
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForComponent
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InventoryComponentReference	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplicateInventoryForComponent(class UInventoryComponent_C* InventoryComponentReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateInventoryForComponent");

	struct ABP_BaseCharacter_C_ReplicateInventoryForComponent_Params {
		class UInventoryComponent_C* InventoryComponentReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ReplicateInventoryForComponent_Params params;
	params.InventoryComponentReference = InventoryComponentReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetWasActorUpdated_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetWasActorUpdated_BPI(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetWasActorUpdated_BPI");

	struct ABP_BaseCharacter_C_SetWasActorUpdated_BPI_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetWasActorUpdated_BPI_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ApplySkeletalMontagesUpdate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesData	Type: TArray<struct FMontageDataForRep>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ApplySkeletalMontagesUpdate(const TArray<struct FMontageDataForRep>& MontagesData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ApplySkeletalMontagesUpdate");

	struct ABP_BaseCharacter_C_ApplySkeletalMontagesUpdate_Params {
		TArray<struct FMontageDataForRep> MontagesData;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_ApplySkeletalMontagesUpdate_Params params;
	params.MontagesData = MontagesData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteActorUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Requester	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ExecuteActorUpdate(class APlayerController* Requester) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteActorUpdate");

	struct ABP_BaseCharacter_C_ExecuteActorUpdate_Params {
		class APlayerController* Requester;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ExecuteActorUpdate_Params params;
	params.Requester = Requester;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PreviewDyeInSlot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoBackToSavedColor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PreviewDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, bool GoBackToSavedColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PreviewDyeInSlot_BPI");

	struct ABP_BaseCharacter_C_PreviewDyeInSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		bool GoBackToSavedColor;			//Offset: 3 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PreviewDyeInSlot_BPI_Params params;
	params.DyeEquipmentSlot = DyeEquipmentSlot;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;
	params.GoBackToSavedColor = GoBackToSavedColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeDyeInSlot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeItemNameRow	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ChangeDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, struct FName DyeItemNameRow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeDyeInSlot_BPI");

	struct ABP_BaseCharacter_C_ChangeDyeInSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		struct FName DyeItemNameRow;			//Offset: 4 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ChangeDyeInSlot_BPI_Params params;
	params.DyeEquipmentSlot = DyeEquipmentSlot;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;
	params.DyeItemNameRow = DyeItemNameRow;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsStaggered_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStaggered	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReduceStamina	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AmountToReduce	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsStaggered_BPI(bool IsStaggered, bool ReduceStamina, float AmountToReduce) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsStaggered_BPI");

	struct ABP_BaseCharacter_C_SetIsStaggered_BPI_Params {
		bool IsStaggered;			//Offset: 0 | ElementSize: 1
		bool ReduceStamina;			//Offset: 1 | ElementSize: 1
		float AmountToReduce;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetIsStaggered_BPI_Params params;
	params.IsStaggered = IsStaggered;
	params.ReduceStamina = ReduceStamina;
	params.AmountToReduce = AmountToReduce;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopStageInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopStageInteraction");

	struct ABP_BaseCharacter_C_StopStageInteraction_Params {
	};
	ABP_BaseCharacter_C_StopStageInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetBardTrackData_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TrackData	Type: struct FST_TrackData	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetBardTrackData_BPI(struct FST_TrackData TrackData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetBardTrackData_BPI");

	struct ABP_BaseCharacter_C_SetBardTrackData_BPI_Params {
		struct FST_TrackData TrackData;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_SetBardTrackData_BPI_Params params;
	params.TrackData = TrackData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsBardCurrentlyPlaying_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlaying	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIsBardCurrentlyPlaying_BPI(bool IsPlaying) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsBardCurrentlyPlaying_BPI");

	struct ABP_BaseCharacter_C_SetIsBardCurrentlyPlaying_BPI_Params {
		bool IsPlaying;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetIsBardCurrentlyPlaying_BPI_Params params;
	params.IsPlaying = IsPlaying;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterListeningToBard_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsListening	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCharacterListeningToBard_BPI(bool IsListening) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterListeningToBard_BPI");

	struct ABP_BaseCharacter_C_SetCharacterListeningToBard_BPI_Params {
		bool IsListening;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCharacterListeningToBard_BPI_Params params;
	params.IsListening = IsListening;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BandMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_BandMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BandMontageComplete");

	struct ABP_BaseCharacter_C_AnimNotify_BandMontageComplete_Params {
	};
	ABP_BaseCharacter_C_AnimNotify_BandMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_ActivityLoopsFinished(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityLoopsFinished");

	struct ABP_BaseCharacter_C_AnimNotify_ActivityLoopsFinished_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		unsigned char ActivityAnimID;			//Offset: 8 | ElementSize: 1
		int32_t Loop;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_ActivityLoopsFinished_Params params;
	params.Montage = Montage;
	params.ActivityAnimID = ActivityAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_ActivityLoopIncreased(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityLoopIncreased");

	struct ABP_BaseCharacter_C_AnimNotify_ActivityLoopIncreased_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		unsigned char ActivityAnimID;			//Offset: 8 | ElementSize: 1
		int32_t Loop;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_AnimNotify_ActivityLoopIncreased_Params params;
	params.Montage = Montage;
	params.ActivityAnimID = ActivityAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_ActivityMontageInterrupted(class UAnimMontage* Montage, unsigned char ActivityAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityMontageInterrupted");

	struct ABP_BaseCharacter_C_AnimNotify_ActivityMontageInterrupted_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		unsigned char ActivityAnimID;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_ActivityMontageInterrupted_Params params;
	params.Montage = Montage;
	params.ActivityAnimID = ActivityAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StopDialogueAnimation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StopDialogueAnimation_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopDialogueAnimation_BPI");

	struct ABP_BaseCharacter_C_StopDialogueAnimation_BPI_Params {
	};
	ABP_BaseCharacter_C_StopDialogueAnimation_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Old	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetOldness_BPI(float Old) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness_BPI");

	struct ABP_BaseCharacter_C_SetOldness_BPI_Params {
		float Old;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetOldness_BPI_Params params;
	params.Old = Old;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActivityAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AnimNotify_ActivityMontageComplete(class UAnimMontage* Montage, unsigned char ActivityAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_ActivityMontageComplete");

	struct ABP_BaseCharacter_C_AnimNotify_ActivityMontageComplete_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		unsigned char ActivityAnimID;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_AnimNotify_ActivityMontageComplete_Params params;
	params.Montage = Montage;
	params.ActivityAnimID = ActivityAnimID;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
// Name: AutomaticPlay	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection, bool AutomaticPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction");

	struct ABP_BaseCharacter_C_OnEndStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
		bool AutomaticPlay;			//Offset: 32 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnEndStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;
	params.AutomaticPlay = AutomaticPlay;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
// Name: AutomaticPlay	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection, bool AutomaticPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction");

	struct ABP_BaseCharacter_C_OnStartStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
		bool AutomaticPlay;			//Offset: 32 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnStartStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;
	params.AutomaticPlay = AutomaticPlay;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Interact_Client
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interact_Client");

	struct ABP_BaseCharacter_C_Interact_Client_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 8 | ElementSize: 12
		int32_t HitItem;			//Offset: 20 | ElementSize: 4
		bool Timer;			//Offset: 24 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Interact_Client_Params params;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: UseChunkData	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ChunkID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, int32_t ChunkID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract");

	struct ABP_BaseCharacter_C_ToolInteract_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool UseChunkData;			//Offset: 144 | ElementSize: 1
		int32_t ChunkID;			//Offset: 148 | ElementSize: 4
	};
	ABP_BaseCharacter_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkID = ChunkID;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interact");

	struct ABP_BaseCharacter_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 8 | ElementSize: 12
		int32_t HitItem;			//Offset: 20 | ElementSize: 4
		bool Timer;			//Offset: 24 | ElementSize: 1
	};
	ABP_BaseCharacter_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ApplyByteVarUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Byte	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ApplyByteVarUpdate(unsigned char Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ApplyByteVarUpdate");

	struct ABP_BaseCharacter_C_ApplyByteVarUpdate_Params {
		unsigned char Byte;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ApplyByteVarUpdate_Params params;
	params.Byte = Byte;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ProcessByteVarUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Byte	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ProcessByteVarUpdate(class AActor* Actor, unsigned char Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ProcessByteVarUpdate");

	struct ABP_BaseCharacter_C_ProcessByteVarUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		unsigned char Byte;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ProcessByteVarUpdate_Params params;
	params.Actor = Actor;
	params.Byte = Byte;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ProcessSkeletalMontagesUpdate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontagesData	Type: TArray<struct FMontageDataForRep>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ProcessSkeletalMontagesUpdate(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ProcessSkeletalMontagesUpdate");

	struct ABP_BaseCharacter_C_ProcessSkeletalMontagesUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		TArray<struct FMontageDataForRep> MontagesData;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_ProcessSkeletalMontagesUpdate_Params params;
	params.Actor = Actor;
	params.MontagesData = MontagesData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RequestActorUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RequestActorUpdate(class AActor* Actor, bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RequestActorUpdate");

	struct ABP_BaseCharacter_C_RequestActorUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		bool Force;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_RequestActorUpdate_Params params;
	params.Actor = Actor;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9");

	struct ABP_BaseCharacter_C_OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A");

	struct ABP_BaseCharacter_C_OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673");

	struct ABP_BaseCharacter_C_OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnMovementModeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementModeChanged");

	struct ABP_BaseCharacter_C_OnMovementModeChanged_Params {
	};
	ABP_BaseCharacter_C_OnMovementModeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (CanSprint != nullptr)
		*CanSprint = params.CanSprint;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: actorLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateActorLocationAndRotationInRagdoll(struct FRotator* ActorRotation, struct FVector* actorLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll");

	struct ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params {
		struct FRotator ActorRotation;			//Offset: 0 | ElementSize: 12
		struct FVector actorLocation;			//Offset: 12 | ElementSize: 12
	};
	ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorRotation != nullptr)
		*ActorRotation = params.ActorRotation;
	if (actorLocation != nullptr)
		*actorLocation = params.actorLocation;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemClass	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsOffhand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipAnimHoldable(class ABP_MasterHoldableItem_C* ItemClass, bool IsOffhand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable");

	struct ABP_BaseCharacter_C_EquipAnimHoldable_Params {
		class ABP_MasterHoldableItem_C* ItemClass;			//Offset: 0 | ElementSize: 8
		bool IsOffhand;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EquipAnimHoldable_Params params;
	params.ItemClass = ItemClass;
	params.IsOffhand = IsOffhand;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsMontagePlaying(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying");

	struct ABP_BaseCharacter_C_IsMontagePlaying_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsMontagePlaying_Params params;
	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1264
	};
	ABP_BaseCharacter_C_GetNPCDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
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
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1264
		bool ResetEQ;			//Offset: 1264 | ElementSize: 1
		struct FString SaveGameVersion;			//Offset: 1272 | ElementSize: 16
	};
	ABP_BaseCharacter_C_SetNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: StartVector	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Radius	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: actorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Observed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::VisibilityCheck(struct FVector StartVector, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class AActor* actorToIgnore, bool* Observed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck");

	struct ABP_BaseCharacter_C_VisibilityCheck_Params {
		struct FVector StartVector;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 16 | ElementSize: 16
		class AActor* actorToIgnore;			//Offset: 32 | ElementSize: 8
		bool Observed;			//Offset: 40 | ElementSize: 1
	};
	ABP_BaseCharacter_C_VisibilityCheck_Params params;
	params.StartVector = StartVector;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.actorToIgnore = actorToIgnore;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: crouchingSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCrouchingSpeed(float* crouchingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed");

	struct ABP_BaseCharacter_C_GetCrouchingSpeed_Params {
		float crouchingSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCrouchingSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (crouchingSpeed != nullptr)
		*crouchingSpeed = params.crouchingSpeed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartWorkbenchInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangeCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UseLocation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookAtBehavior	Type: TEnumAsByte<E_LookAtOptions>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartWorkbenchInteraction");

	struct ABP_BaseCharacter_C_OnStartWorkbenchInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
		bool ChangeCamera;			//Offset: 28 | ElementSize: 1
		bool UseLocation;			//Offset: 29 | ElementSize: 1
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 30 | ElementSize: 1
		struct FRotator LookAtRotation;			//Offset: 32 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnStartWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;
	params.ChangeCamera = ChangeCamera;
	params.UseLocation = UseLocation;
	params.LookAtBehavior = LookAtBehavior;
	params.LookAtRotation = LookAtRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction");

	struct ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
// Name: DontSetIfNotFound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame, bool DontSetIfNotFound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset");

	struct ABP_BaseCharacter_C_SetMeshesFromPreset_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UObject* NewClass;			//Offset: 8 | ElementSize: 8
		bool UpdateOnly;			//Offset: 16 | ElementSize: 1
		bool LoadGame;			//Offset: 17 | ElementSize: 1
		bool DontSetIfNotFound;			//Offset: 18 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMeshesFromPreset_Params params;
	params.Profession = Profession;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;
	params.LoadGame = LoadGame;
	params.DontSetIfNotFound = DontSetIfNotFound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Preset	Type: struct FST_NPCsPresets	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetPresetForProfession(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets* Preset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession");

	struct ABP_BaseCharacter_C_GetPresetForProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		struct FST_NPCsPresets Preset;			//Offset: 8 | ElementSize: 1424
	};
	ABP_BaseCharacter_C_GetPresetForProfession_Params params;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (PresetID != nullptr)
		*PresetID = params.PresetID;
	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresetsByIDs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BasePresetID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionPresetID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Meshes	Type: struct FST_NPCsMeshesDyes	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CombinePresetsByIDs(struct FName BasePresetID, struct FName ProfessionPresetID, struct FST_NPCsMeshesDyes* Meshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresetsByIDs");

	struct ABP_BaseCharacter_C_CombinePresetsByIDs_Params {
		struct FName BasePresetID;			//Offset: 0 | ElementSize: 8
		struct FName ProfessionPresetID;			//Offset: 8 | ElementSize: 8
		struct FST_NPCsMeshesDyes Meshes;			//Offset: 16 | ElementSize: 1360
	};
	ABP_BaseCharacter_C_CombinePresetsByIDs_Params params;
	params.BasePresetID = BasePresetID;
	params.ProfessionPresetID = ProfessionPresetID;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
// Name: CustomMaterial	Type: class UMaterialInstance*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent, class UTexture2D* Tattoo, class UMaterialInstance* CustomMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials");

	struct ABP_BaseCharacter_C_InitializeComponentMaterials_Params {
		class USkeletalMeshComponent* SkeletalComponent;			//Offset: 0 | ElementSize: 8
		class UTexture2D* Tattoo;			//Offset: 8 | ElementSize: 8
		class UMaterialInstance* CustomMaterial;			//Offset: 16 | ElementSize: 8
	};
	ABP_BaseCharacter_C_InitializeComponentMaterials_Params params;
	params.SkeletalComponent = SkeletalComponent;
	params.Tattoo = Tattoo;
	params.CustomMaterial = CustomMaterial;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
void ABP_BaseCharacter_C::SnapToSlot(int32_t SlotIndex, class AActor* InteractedActor, struct FVector LocationOffset, bool IsFinalTransform, bool* Success) {
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCloseCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction");

	struct ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnWaitForCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction");

	struct ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
		bool ResetCamera;			//Offset: 20 | ElementSize: 1
	};
	ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;
	params.ResetCamera = ResetCamera;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChangedByTimeUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnDayChangedByTimeUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChangedByTimeUpdate");

	struct ABP_BaseCharacter_C_OnDayChangedByTimeUpdate_Params {
	};
	ABP_BaseCharacter_C_OnDayChangedByTimeUpdate_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStartFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation, struct FRotator InteractRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartFurnitureInteraction");

	struct ABP_BaseCharacter_C_OnStartFurnitureInteraction_Params {
		class AActor* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator InteractRotation;			//Offset: 20 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnStartFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;
	params.InteractRotation = InteractRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnEndFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndFurnitureInteraction");

	struct ABP_BaseCharacter_C_OnEndFurnitureInteraction_Params {
		class AActor* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_BaseCharacter_C_OnEndFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsRagdolling
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsRagdolling()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsRagdolling");

	struct ABP_BaseCharacter_C_IsRagdolling_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsRagdolling_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CreateMergedMeshMaterials
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkeletalMeshComp	Type: class USkeletalMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaterialData	Type: TMap<class UMaterialInterface*, struct FST_NPCItemColors>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Tattoo	Type: class UTexture2D*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CreateMergedMeshMaterials(class USkeletalMeshComponent* SkeletalMeshComp, const TMap<class UMaterialInterface*, struct FST_NPCItemColors>& MaterialData, class UTexture2D* Tattoo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CreateMergedMeshMaterials");

	struct ABP_BaseCharacter_C_CreateMergedMeshMaterials_Params {
		class USkeletalMeshComponent* SkeletalMeshComp;			//Offset: 0 | ElementSize: 8
		TMap<class UMaterialInterface*, struct FST_NPCItemColors> MaterialData;			//Offset: 8 | ElementSize: 80
		class UTexture2D* Tattoo;			//Offset: 88 | ElementSize: 8
	};
	ABP_BaseCharacter_C_CreateMergedMeshMaterials_Params params;
	params.SkeletalMeshComp = SkeletalMeshComp;
	params.MaterialData = MaterialData;
	params.Tattoo = Tattoo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformHoldableAction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: TPMontages	Type: TMap<struct FName, struct FST_MontagesSettingsEnum>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OverrideMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageType	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageSettings	Type: struct FST_MontagesSettings	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PerformHoldableAction(TMap<struct FName, struct FST_MontagesSettingsEnum> FPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> TPMontages, bool Loop, bool OverrideMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, struct FName MontageName, TEnumAsByte<E_AnimInteractionTypes> MontageType, struct FST_MontagesSettings* MontageSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PerformHoldableAction");

	struct ABP_BaseCharacter_C_PerformHoldableAction_Params {
		TMap<struct FName, struct FST_MontagesSettingsEnum> FPMontages;			//Offset: 0 | ElementSize: 80
		TMap<struct FName, struct FST_MontagesSettingsEnum> TPMontages;			//Offset: 80 | ElementSize: 80
		bool Loop;			//Offset: 160 | ElementSize: 1
		bool OverrideMontage;			//Offset: 161 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 162 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 163 | ElementSize: 1
		int32_t AnimID;			//Offset: 164 | ElementSize: 4
		struct FName MontageName;			//Offset: 168 | ElementSize: 8
		TEnumAsByte<E_AnimInteractionTypes> MontageType;			//Offset: 176 | ElementSize: 1
		struct FST_MontagesSettings MontageSettings;			//Offset: 184 | ElementSize: 64
	};
	ABP_BaseCharacter_C_PerformHoldableAction_Params params;
	params.FPMontages = FPMontages;
	params.TPMontages = TPMontages;
	params.Loop = Loop;
	params.OverrideMontage = OverrideMontage;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.MontageName = MontageName;
	params.MontageType = MontageType;

	UObject::ProcessEvent(fn, &params);
	if (MontageSettings != nullptr)
		*MontageSettings = params.MontageSettings;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesRowName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshesRowName(struct FName Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesRowName");

	struct ABP_BaseCharacter_C_SetMeshesRowName_Params {
		struct FName Value;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetMeshesRowName_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHeadID(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeadID");

	struct ABP_BaseCharacter_C_SetHeadID_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHeadID_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHairID(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairID");

	struct ABP_BaseCharacter_C_SetHairID_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetHairID_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentBasePresetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCurrentBasePresetID(struct FName Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentBasePresetID");

	struct ABP_BaseCharacter_C_SetCurrentBasePresetID_Params {
		struct FName Value;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetCurrentBasePresetID_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentProfessionPresetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCurrentProfessionPresetID(struct FName Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCurrentProfessionPresetID");

	struct ABP_BaseCharacter_C_SetCurrentProfessionPresetID_Params {
		struct FName Value;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetCurrentProfessionPresetID_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset_Rep
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMeshesFromPreset_Rep(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset_Rep");

	struct ABP_BaseCharacter_C_SetMeshesFromPreset_Rep_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMeshesFromPreset_Rep_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckDrunkState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckDrunkState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckDrunkState");

	struct ABP_BaseCharacter_C_CheckDrunkState_Params {
	};
	ABP_BaseCharacter_C_CheckDrunkState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_HeldItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_HeldItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_HeldItem");

	struct ABP_BaseCharacter_C_OnRep_HeldItem_Params {
	};
	ABP_BaseCharacter_C_OnRep_HeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Off-HandItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_Off_HandItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Off-HandItem");

	struct ABP_BaseCharacter_C_OnRep_Off_HandItem_Params {
	};
	ABP_BaseCharacter_C_OnRep_Off_HandItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnHeldItemReplicated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnHeldItemReplicated() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnHeldItemReplicated");

	struct ABP_BaseCharacter_C_OnHeldItemReplicated_Params {
	};
	ABP_BaseCharacter_C_OnHeldItemReplicated_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnOffHandItemReplicated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnOffHandItemReplicated() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnOffHandItemReplicated");

	struct ABP_BaseCharacter_C_OnOffHandItemReplicated_Params {
	};
	ABP_BaseCharacter_C_OnOffHandItemReplicated_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHairColorByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DefaultColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetHairColorByID(int32_t ID, struct FLinearColor DefaultColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHairColorByID");

	struct ABP_BaseCharacter_C_GetHairColorByID_Params {
		int32_t ID;			//Offset: 0 | ElementSize: 4
		struct FLinearColor DefaultColor;			//Offset: 4 | ElementSize: 16
		struct FLinearColor Color;			//Offset: 20 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetHairColorByID_Params params;
	params.ID = ID;
	params.DefaultColor = DefaultColor;

	UObject::ProcessEvent(fn, &params);
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSkinColorByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DefaultColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetSkinColorByID(int32_t ColorID, struct FLinearColor DefaultColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetSkinColorByID");

	struct ABP_BaseCharacter_C_GetSkinColorByID_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
		struct FLinearColor DefaultColor;			//Offset: 4 | ElementSize: 16
		struct FLinearColor Color;			//Offset: 20 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetSkinColorByID_Params params;
	params.ColorID = ColorID;
	params.DefaultColor = DefaultColor;

	UObject::ProcessEvent(fn, &params);
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterialsForBeard
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaterialInstances	Type: TArray<class UMaterialInterface*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitializeMaterialsForBeard(TArray<class UMaterialInterface*>* MaterialInstances) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterialsForBeard");

	struct ABP_BaseCharacter_C_InitializeMaterialsForBeard_Params {
		TArray<class UMaterialInterface*> MaterialInstances;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_InitializeMaterialsForBeard_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_IsSwooned
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_IsSwooned() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_IsSwooned");

	struct ABP_BaseCharacter_C_OnRep_IsSwooned_Params {
	};
	ABP_BaseCharacter_C_OnRep_IsSwooned_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateReplicatedPresetIDs
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateReplicatedPresetIDs() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateReplicatedPresetIDs");

	struct ABP_BaseCharacter_C_UpdateReplicatedPresetIDs_Params {
	};
	ABP_BaseCharacter_C_UpdateReplicatedPresetIDs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHairColorParameter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaterialInstance	Type: class UMaterialInstanceDynamic*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateHairColorParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHairColorParameter");

	struct ABP_BaseCharacter_C_UpdateHairColorParameter_Params {
		class UMaterialInstanceDynamic* MaterialInstance;			//Offset: 0 | ElementSize: 8
		struct FLinearColor Color;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateHairColorParameter_Params params;
	params.MaterialInstance = MaterialInstance;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateSkinToneParameter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaterialInstance	Type: class UMaterialInstanceDynamic*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tone	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateSkinToneParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Tone) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateSkinToneParameter");

	struct ABP_BaseCharacter_C_UpdateSkinToneParameter_Params {
		class UMaterialInstanceDynamic* MaterialInstance;			//Offset: 0 | ElementSize: 8
		struct FLinearColor Tone;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateSkinToneParameter_Params params;
	params.MaterialInstance = MaterialInstance;
	params.Tone = Tone;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetInventoryOpen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetInventoryOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetInventoryOpen");

	struct ABP_BaseCharacter_C_SetInventoryOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetInventoryOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetGameMenuOpen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetGameMenuOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetGameMenuOpen");

	struct ABP_BaseCharacter_C_SetGameMenuOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetGameMenuOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TrySyncFurnitureAnim
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToSync	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Synced	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TrySyncFurnitureAnim(class AActor* ActorToSync, bool* Synced) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TrySyncFurnitureAnim");

	struct ABP_BaseCharacter_C_TrySyncFurnitureAnim_Params {
		class AActor* ActorToSync;			//Offset: 0 | ElementSize: 8
		bool Synced;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_TrySyncFurnitureAnim_Params params;
	params.ActorToSync = ActorToSync;

	UObject::ProcessEvent(fn, &params);
	if (Synced != nullptr)
		*Synced = params.Synced;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_InteractedActor
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_InteractedActor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_InteractedActor");

	struct ABP_BaseCharacter_C_OnRep_InteractedActor_Params {
	};
	ABP_BaseCharacter_C_OnRep_InteractedActor_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_DefaultCharacterModules
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_DefaultCharacterModules() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_DefaultCharacterModules");

	struct ABP_BaseCharacter_C_OnRep_DefaultCharacterModules_Params {
	};
	ABP_BaseCharacter_C_OnRep_DefaultCharacterModules_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Aiming
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_Aiming() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Aiming");

	struct ABP_BaseCharacter_C_OnRep_Aiming_Params {
	};
	ABP_BaseCharacter_C_OnRep_Aiming_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairColor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RandomColor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHairColor(bool RandomColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHairColor");

	struct ABP_BaseCharacter_C_SetHairColor_Params {
		bool RandomColor;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetHairColor_Params params;
	params.RandomColor = RandomColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetSkinColor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RandomColor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetSkinColor(bool RandomColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetSkinColor");

	struct ABP_BaseCharacter_C_SetSkinColor_Params {
		bool RandomColor;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetSkinColor_Params params;
	params.RandomColor = RandomColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEyebrowsColorParameter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaterialInstance	Type: class UMaterialInstanceDynamic*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateEyebrowsColorParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateEyebrowsColorParameter");

	struct ABP_BaseCharacter_C_UpdateEyebrowsColorParameter_Params {
		class UMaterialInstanceDynamic* MaterialInstance;			//Offset: 0 | ElementSize: 8
		struct FLinearColor Color;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_UpdateEyebrowsColorParameter_Params params;
	params.MaterialInstance = MaterialInstance;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sitting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_Sitting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sitting");

	struct ABP_BaseCharacter_C_OnRep_Sitting_Params {
	};
	ABP_BaseCharacter_C_OnRep_Sitting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sleeping
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_Sleeping() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sleeping");

	struct ABP_BaseCharacter_C_OnRep_Sleeping_Params {
	};
	ABP_BaseCharacter_C_OnRep_Sleeping_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.InitInspectorMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InitInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitInspectorMode");

	struct ABP_BaseCharacter_C_InitInspectorMode_Params {
	};
	ABP_BaseCharacter_C_InitInspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_IKEnabled
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_IKEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_IKEnabled");

	struct ABP_BaseCharacter_C_OnRep_IKEnabled_Params {
	};
	ABP_BaseCharacter_C_OnRep_IKEnabled_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IntimidateActors
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Radius	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorTypes	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IntimidateActors(float Radius, TArray<struct FName>* ActorTypes)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IntimidateActors");

	struct ABP_BaseCharacter_C_IntimidateActors_Params {
		float Radius;			//Offset: 0 | ElementSize: 4
		TArray<struct FName> ActorTypes;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_IntimidateActors_Params params;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
	if (ActorTypes != nullptr)
		*ActorTypes = params.ActorTypes;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCoopStatsProtection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCoopStatsProtection(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCoopStatsProtection");

	struct ABP_BaseCharacter_C_SetCoopStatsProtection_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetCoopStatsProtection_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RagdollCheck
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RagdollCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RagdollCheck");

	struct ABP_BaseCharacter_C_RagdollCheck_Params {
	};
	ABP_BaseCharacter_C_RagdollCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartRagdollCheck
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldEnableRagdoll	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::StartRagdollCheck(bool ShouldEnableRagdoll) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartRagdollCheck");

	struct ABP_BaseCharacter_C_StartRagdollCheck_Params {
		bool ShouldEnableRagdoll;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_StartRagdollCheck_Params params;
	params.ShouldEnableRagdoll = ShouldEnableRagdoll;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareReplicatedBoneData
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PrepareReplicatedBoneData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareReplicatedBoneData");

	struct ABP_BaseCharacter_C_PrepareReplicatedBoneData_Params {
	};
	ABP_BaseCharacter_C_PrepareReplicatedBoneData_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateReplicatedBoneVelocities
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UpdateReplicatedBoneVelocities() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateReplicatedBoneVelocities");

	struct ABP_BaseCharacter_C_UpdateReplicatedBoneVelocities_Params {
	};
	ABP_BaseCharacter_C_UpdateReplicatedBoneVelocities_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRagdollStartImpulse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpulseForce	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ImpulseBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetRagdollStartImpulse(struct FVector ImpulseForce, struct FName ImpulseBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRagdollStartImpulse");

	struct ABP_BaseCharacter_C_SetRagdollStartImpulse_Params {
		struct FVector ImpulseForce;			//Offset: 0 | ElementSize: 12
		struct FName ImpulseBoneName;			//Offset: 12 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetRagdollStartImpulse_Params params;
	params.ImpulseForce = ImpulseForce;
	params.ImpulseBoneName = ImpulseBoneName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckMountDriverOverlap
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckMountDriverOverlap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckMountDriverOverlap");

	struct ABP_BaseCharacter_C_CheckMountDriverOverlap_Params {
	};
	ABP_BaseCharacter_C_CheckMountDriverOverlap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementMode
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetMovementMode(TEnumAsByte<E_MovementMode> MovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMovementMode");

	struct ABP_BaseCharacter_C_SetMovementMode_Params {
		TEnumAsByte<E_MovementMode> MovementMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_SetMovementMode_Params params;
	params.MovementMode = MovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRagdollStartTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: RagdollStartTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetRagdollStartTime(float* RagdollStartTime)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRagdollStartTime");

	struct ABP_BaseCharacter_C_GetRagdollStartTime_Params {
		float RagdollStartTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetRagdollStartTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RagdollStartTime != nullptr)
		*RagdollStartTime = params.RagdollStartTime;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.FreezeRagdoll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::FreezeRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FreezeRagdoll");

	struct ABP_BaseCharacter_C_FreezeRagdoll_Params {
	};
	ABP_BaseCharacter_C_FreezeRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnfreezeRagdoll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnfreezeRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnfreezeRagdoll");

	struct ABP_BaseCharacter_C_UnfreezeRagdoll_Params {
	};
	ABP_BaseCharacter_C_UnfreezeRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsRagdollFrozen
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: IsRagdollFrozen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsRagdollFrozen(bool* IsRagdollFrozen)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsRagdollFrozen");

	struct ABP_BaseCharacter_C_GetIsRagdollFrozen_Params {
		bool IsRagdollFrozen;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsRagdollFrozen_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsRagdollFrozen != nullptr)
		*IsRagdollFrozen = params.IsRagdollFrozen;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateRagdoll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ReplicateRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReplicateRagdoll");

	struct ABP_BaseCharacter_C_ReplicateRagdoll_Params {
	};
	ABP_BaseCharacter_C_ReplicateRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRagdollReplicatedBoneNames
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: RagdollReplicatedBoneNames	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetRagdollReplicatedBoneNames(TArray<struct FName>* RagdollReplicatedBoneNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRagdollReplicatedBoneNames");

	struct ABP_BaseCharacter_C_GetRagdollReplicatedBoneNames_Params {
		TArray<struct FName> RagdollReplicatedBoneNames;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetRagdollReplicatedBoneNames_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RagdollReplicatedBoneNames != nullptr)
		*RagdollReplicatedBoneNames = params.RagdollReplicatedBoneNames;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIntimidation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Intimidation	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIntimidation(float* Intimidation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIntimidation");

	struct ABP_BaseCharacter_C_GetIntimidation_Params {
		float Intimidation;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetIntimidation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Intimidation != nullptr)
		*Intimidation = params.Intimidation;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsMounting
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: IsMounting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsMounting(bool* IsMounting)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsMounting");

	struct ABP_BaseCharacter_C_GetIsMounting_Params {
		bool IsMounting;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsMounting_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMounting != nullptr)
		*IsMounting = params.IsMounting;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsDismounting
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: IsDismounting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsDismounting(bool* IsDismounting)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsDismounting");

	struct ABP_BaseCharacter_C_GetIsDismounting_Params {
		bool IsDismounting;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsDismounting_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsDismounting != nullptr)
		*IsDismounting = params.IsDismounting;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EvaluateCanBePushed
// Flags: Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: canBePushed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EvaluateCanBePushed(bool* canBePushed)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EvaluateCanBePushed");

	struct ABP_BaseCharacter_C_EvaluateCanBePushed_Params {
		bool canBePushed;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EvaluateCanBePushed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (canBePushed != nullptr)
		*canBePushed = params.canBePushed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.AddStaticCollision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::AddStaticCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddStaticCollision");

	struct ABP_BaseCharacter_C_AddStaticCollision_Params {
	};
	ABP_BaseCharacter_C_AddStaticCollision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveStaticCollision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::RemoveStaticCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveStaticCollision");

	struct ABP_BaseCharacter_C_RemoveStaticCollision_Params {
	};
	ABP_BaseCharacter_C_RemoveStaticCollision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_HasStaticCollision
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_HasStaticCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_HasStaticCollision");

	struct ABP_BaseCharacter_C_OnRep_HasStaticCollision_Params {
	};
	ABP_BaseCharacter_C_OnRep_HasStaticCollision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ValidateRagdollLocation
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: WasRagdollLocationSnapped	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ValidateRagdollLocation(bool* WasRagdollLocationSnapped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ValidateRagdollLocation");

	struct ABP_BaseCharacter_C_ValidateRagdollLocation_Params {
		bool WasRagdollLocationSnapped;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_ValidateRagdollLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WasRagdollLocationSnapped != nullptr)
		*WasRagdollLocationSnapped = params.WasRagdollLocationSnapped;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EvaluateIsCollisionEnabled
// Flags: Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: isCollisionEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EvaluateIsCollisionEnabled(bool* isCollisionEnabled)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EvaluateIsCollisionEnabled");

	struct ABP_BaseCharacter_C_EvaluateIsCollisionEnabled_Params {
		bool isCollisionEnabled;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_EvaluateIsCollisionEnabled_Params params;

	UObject::ProcessEvent(fn, &params);
	if (isCollisionEnabled != nullptr)
		*isCollisionEnabled = params.isCollisionEnabled;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_MountReference
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_MountReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_MountReference");

	struct ABP_BaseCharacter_C_OnRep_MountReference_Params {
	};
	ABP_BaseCharacter_C_OnRep_MountReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_RagdollState
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnRep_RagdollState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_RagdollState");

	struct ABP_BaseCharacter_C_OnRep_RagdollState_Params {
	};
	ABP_BaseCharacter_C_OnRep_RagdollState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsCharacterPlayerControlled
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsCharacterPlayerControlled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsCharacterPlayerControlled");

	struct ABP_BaseCharacter_C_IsCharacterPlayerControlled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsCharacterPlayerControlled_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStaminaChange
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnStaminaChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStaminaChange");

	struct ABP_BaseCharacter_C_OnStaminaChange_Params {
	};
	ABP_BaseCharacter_C_OnStaminaChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItem	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetHeldItem(class ABP_MasterHoldableItem_C* HeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetHeldItem");

	struct ABP_BaseCharacter_C_SetHeldItem_Params {
		class ABP_MasterHoldableItem_C* HeldItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetHeldItem_Params params;
	params.HeldItem = HeldItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnItemPointDamageAppliedToOtherActor
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnItemPointDamageAppliedToOtherActor(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnItemPointDamageAppliedToOtherActor");

	struct ABP_BaseCharacter_C_OnItemPointDamageAppliedToOtherActor_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 184 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnItemPointDamageAppliedToOtherActor_Params params;
	params.DamagedActor = DamagedActor;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOffHandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: OffHandItem	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetOffHandItem(class ABP_MasterHoldableItem_C* OffHandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOffHandItem");

	struct ABP_BaseCharacter_C_SetOffHandItem_Params {
		class ABP_MasterHoldableItem_C* OffHandItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_SetOffHandItem_Params params;
	params.OffHandItem = OffHandItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetActorInFront
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ActorsToCheck	Type: TArray<class AActor*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: MaxAngle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorClassFilter	Type: TArray<class AActor*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ActorInFront	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetActorInFront(TArray<class AActor*>* ActorsToCheck, float MaxAngle, float MaxDistance, TArray<class AActor*>* ActorClassFilter, class AActor** ActorInFront)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetActorInFront");

	struct ABP_BaseCharacter_C_GetActorInFront_Params {
		TArray<class AActor*> ActorsToCheck;			//Offset: 0 | ElementSize: 16
		float MaxAngle;			//Offset: 16 | ElementSize: 4
		float MaxDistance;			//Offset: 20 | ElementSize: 4
		TArray<class AActor*> ActorClassFilter;			//Offset: 24 | ElementSize: 16
		class AActor* ActorInFront;			//Offset: 40 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetActorInFront_Params params;
	params.MaxAngle = MaxAngle;
	params.MaxDistance = MaxDistance;

	UObject::ProcessEvent(fn, &params);
	if (ActorsToCheck != nullptr)
		*ActorsToCheck = params.ActorsToCheck;
	if (ActorClassFilter != nullptr)
		*ActorClassFilter = params.ActorClassFilter;
	if (ActorInFront != nullptr)
		*ActorInFront = params.ActorInFront;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetBlockingTool
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: BlockingTool	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetBlockingTool(class ABP_MasterHoldableItem_C** BlockingTool, bool* IsValid)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetBlockingTool");

	struct ABP_BaseCharacter_C_GetBlockingTool_Params {
		class ABP_MasterHoldableItem_C* BlockingTool;			//Offset: 0 | ElementSize: 8
		bool IsValid;			//Offset: 8 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetBlockingTool_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BlockingTool != nullptr)
		*BlockingTool = params.BlockingTool;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateDamageToReceive
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: appliedDamage	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hits	Type: TArray<struct FHitResult>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateDamageToReceive");

	struct ABP_BaseCharacter_C_CalculateDamageToReceive_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		TArray<struct FHitResult> hits;			//Offset: 16 | ElementSize: 16
		class AController* damageInstigator;			//Offset: 32 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 40 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 48 | ElementSize: 8
		float ReturnValue;			//Offset: 56 | ElementSize: 4
	};
	ABP_BaseCharacter_C_CalculateDamageToReceive_Params params;
	params.appliedDamage = appliedDamage;
	params.hitFromDirection = hitFromDirection;
	params.hits = hits;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquippedItemNames
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: EquippedItemNames	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetEquippedItemNames(TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>* EquippedItemNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquippedItemNames");

	struct ABP_BaseCharacter_C_GetEquippedItemNames_Params {
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames;			//Offset: 0 | ElementSize: 80
	};
	ABP_BaseCharacter_C_GetEquippedItemNames_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EquippedItemNames != nullptr)
		*EquippedItemNames = params.EquippedItemNames;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquipmentCategoriesForBone
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquipmentCategories	Type: TArray<TEnumAsByte<E_EquipmentCategories>>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetEquipmentCategoriesForBone(struct FName BoneName, TArray<TEnumAsByte<E_EquipmentCategories>>* EquipmentCategories)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquipmentCategoriesForBone");

	struct ABP_BaseCharacter_C_GetEquipmentCategoriesForBone_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		TArray<TEnumAsByte<E_EquipmentCategories>> EquipmentCategories;			//Offset: 8 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetEquipmentCategoriesForBone_Params params;
	params.BoneName = BoneName;

	UObject::ProcessEvent(fn, &params);
	if (EquipmentCategories != nullptr)
		*EquipmentCategories = params.EquipmentCategories;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetArmorItemDamageResistance
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ArmorItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArmorItemDamageResistance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetArmorItemDamageResistance(struct FName ArmorItemName, class UDamageType* DamageTypeClass, float* ArmorItemDamageResistance)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetArmorItemDamageResistance");

	struct ABP_BaseCharacter_C_GetArmorItemDamageResistance_Params {
		struct FName ArmorItemName;			//Offset: 0 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 8 | ElementSize: 8
		float ArmorItemDamageResistance;			//Offset: 16 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetArmorItemDamageResistance_Params params;
	params.ArmorItemName = ArmorItemName;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
	if (ArmorItemDamageResistance != nullptr)
		*ArmorItemDamageResistance = params.ArmorItemDamageResistance;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateWholeArmorDamageMultiplier
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquippedItemNames	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: WholeArmorDamageMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateWholeArmorDamageMultiplier(class UDamageType* DamageTypeClass, TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames, float* WholeArmorDamageMultiplier)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateWholeArmorDamageMultiplier");

	struct ABP_BaseCharacter_C_CalculateWholeArmorDamageMultiplier_Params {
		class UDamageType* DamageTypeClass;			//Offset: 0 | ElementSize: 8
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames;			//Offset: 8 | ElementSize: 80
		float WholeArmorDamageMultiplier;			//Offset: 88 | ElementSize: 4
	};
	ABP_BaseCharacter_C_CalculateWholeArmorDamageMultiplier_Params params;
	params.DamageTypeClass = DamageTypeClass;
	params.EquippedItemNames = EquippedItemNames;

	UObject::ProcessEvent(fn, &params);
	if (WholeArmorDamageMultiplier != nullptr)
		*WholeArmorDamageMultiplier = params.WholeArmorDamageMultiplier;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateArmorDamageMultiplier
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EquippedItemNames	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ArmorDamageMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateArmorDamageMultiplier(struct FName HitBoneName, class UDamageType* DamageTypeClass, TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames, float* ArmorDamageMultiplier)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateArmorDamageMultiplier");

	struct ABP_BaseCharacter_C_CalculateArmorDamageMultiplier_Params {
		struct FName HitBoneName;			//Offset: 0 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 8 | ElementSize: 8
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames;			//Offset: 16 | ElementSize: 80
		float ArmorDamageMultiplier;			//Offset: 96 | ElementSize: 4
	};
	ABP_BaseCharacter_C_CalculateArmorDamageMultiplier_Params params;
	params.HitBoneName = HitBoneName;
	params.DamageTypeClass = DamageTypeClass;
	params.EquippedItemNames = EquippedItemNames;

	UObject::ProcessEvent(fn, &params);
	if (ArmorDamageMultiplier != nullptr)
		*ArmorDamageMultiplier = params.ArmorDamageMultiplier;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipHoldableItemInRightHand
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HoldableItemClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipHoldableItemInRightHand(class UObject* HoldableItemClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipHoldableItemInRightHand");

	struct ABP_BaseCharacter_C_EquipHoldableItemInRightHand_Params {
		class UObject* HoldableItemClass;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_EquipHoldableItemInRightHand_Params params;
	params.HoldableItemClass = HoldableItemClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipHoldableItemInLeftHand
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HoldableItemClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::EquipHoldableItemInLeftHand(class UObject* HoldableItemClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipHoldableItemInLeftHand");

	struct ABP_BaseCharacter_C_EquipHoldableItemInLeftHand_Params {
		class UObject* HoldableItemClass;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_EquipHoldableItemInLeftHand_Params params;
	params.HoldableItemClass = HoldableItemClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipHoldableItemFromRightHand
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnequipHoldableItemFromRightHand() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipHoldableItemFromRightHand");

	struct ABP_BaseCharacter_C_UnequipHoldableItemFromRightHand_Params {
	};
	ABP_BaseCharacter_C_UnequipHoldableItemFromRightHand_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipHoldableItemFromLeftHand
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::UnequipHoldableItemFromLeftHand() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnequipHoldableItemFromLeftHand");

	struct ABP_BaseCharacter_C_UnequipHoldableItemFromLeftHand_Params {
	};
	ABP_BaseCharacter_C_UnequipHoldableItemFromLeftHand_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateStaminaRequiredToBlockHit
// Flags: Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: HitDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StaminaRequiredToBlockHit	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CalculateStaminaRequiredToBlockHit(float HitDamage, float* StaminaRequiredToBlockHit)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateStaminaRequiredToBlockHit");

	struct ABP_BaseCharacter_C_CalculateStaminaRequiredToBlockHit_Params {
		float HitDamage;			//Offset: 0 | ElementSize: 4
		float StaminaRequiredToBlockHit;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_CalculateStaminaRequiredToBlockHit_Params params;
	params.HitDamage = HitDamage;

	UObject::ProcessEvent(fn, &params);
	if (StaminaRequiredToBlockHit != nullptr)
		*StaminaRequiredToBlockHit = params.StaminaRequiredToBlockHit;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIrisForNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetIrisForNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIrisForNPC");

	struct ABP_BaseCharacter_C_SetIrisForNPC_Params {
	};
	ABP_BaseCharacter_C_SetIrisForNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserStarted
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCauserStarted(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserStarted");

	struct ABP_BaseCharacter_C_OnCombatCauserStarted_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnCombatCauserStarted_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserEnded
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCauserEnded(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCauserEnded");

	struct ABP_BaseCharacter_C_OnCombatCauserEnded_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnCombatCauserEnded_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted");

	struct ABP_BaseCharacter_C_OnCombatStarted_Params {
	};
	ABP_BaseCharacter_C_OnCombatStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded");

	struct ABP_BaseCharacter_C_OnCombatEnded_Params {
	};
	ABP_BaseCharacter_C_OnCombatEnded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCheck
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnCombatCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatCheck");

	struct ABP_BaseCharacter_C_OnCombatCheck_Params {
	};
	ABP_BaseCharacter_C_OnCombatCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquippedPhysicalMaterialCoefficients
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: EquippedPhysicalMaterialCoefficients	Type: TMap<class UPhysicalMaterial*, float>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetEquippedPhysicalMaterialCoefficients(TMap<class UPhysicalMaterial*, float>* EquippedPhysicalMaterialCoefficients)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetEquippedPhysicalMaterialCoefficients");

	struct ABP_BaseCharacter_C_GetEquippedPhysicalMaterialCoefficients_Params {
		TMap<class UPhysicalMaterial*, float> EquippedPhysicalMaterialCoefficients;			//Offset: 0 | ElementSize: 80
	};
	ABP_BaseCharacter_C_GetEquippedPhysicalMaterialCoefficients_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EquippedPhysicalMaterialCoefficients != nullptr)
		*EquippedPhysicalMaterialCoefficients = params.EquippedPhysicalMaterialCoefficients;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseProtectionDurability
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::DecreaseProtectionDurability(float Damage, class UDamageType* DamageType, struct FName HitBoneName, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DecreaseProtectionDurability");

	struct ABP_BaseCharacter_C_DecreaseProtectionDurability_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		struct FName HitBoneName;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_DecreaseProtectionDurability_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitBoneName = HitBoneName;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageReceived
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnPointDamageReceived(float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnPointDamageReceived");

	struct ABP_BaseCharacter_C_OnPointDamageReceived_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 16 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 152 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 160 | ElementSize: 8
		class UDamageType* DamageType;			//Offset: 168 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnPointDamageReceived_Params params;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnAnyDamageReceived
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnAnyDamageReceived");

	struct ABP_BaseCharacter_C_OnAnyDamageReceived_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
		class AController* EventInstigator;			//Offset: 8 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 16 | ElementSize: 8
		class UDamageType* DamageType;			//Offset: 24 | ElementSize: 8
	};
	ABP_BaseCharacter_C_OnAnyDamageReceived_Params params;
	params.ReceivedDamage = ReceivedDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnBlockBroken
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnBlockBroken(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnBlockBroken");

	struct ABP_BaseCharacter_C_OnBlockBroken_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_OnBlockBroken_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnHitBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnHitBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnHitBlocked");

	struct ABP_BaseCharacter_C_OnHitBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_OnHitBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnHitNotBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnHitNotBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnHitNotBlocked");

	struct ABP_BaseCharacter_C_OnHitNotBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_OnHitNotBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsAlive
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsAlive()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsAlive");

	struct ABP_BaseCharacter_C_IsAlive_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsAlive_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.HasFullHealth
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::HasFullHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HasFullHealth");

	struct ABP_BaseCharacter_C_HasFullHealth_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_HasFullHealth_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMaxHealth
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::GetMaxHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMaxHealth");

	struct ABP_BaseCharacter_C_GetMaxHealth_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetMaxHealth_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHealthNormalized
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::GetHealthNormalized()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHealthNormalized");

	struct ABP_BaseCharacter_C_GetHealthNormalized_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetHealthNormalized_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHealth
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_BaseCharacter_C::GetHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHealth");

	struct ABP_BaseCharacter_C_GetHealth_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetHealth_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnHealthChanged
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnHealthChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnHealthChanged");

	struct ABP_BaseCharacter_C_OnHealthChanged_Params {
	};
	ABP_BaseCharacter_C_OnHealthChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.OnKilled
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::OnKilled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnKilled");

	struct ABP_BaseCharacter_C_OnKilled_Params {
	};
	ABP_BaseCharacter_C_OnKilled_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IntimidationDecay
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IntimidationDecay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IntimidationDecay");

	struct ABP_BaseCharacter_C_IntimidationDecay_Params {
	};
	ABP_BaseCharacter_C_IntimidationDecay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCourage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Courage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::SetCourage(float Courage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCourage");

	struct ABP_BaseCharacter_C_SetCourage_Params {
		float Courage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_SetCourage_Params params;
	params.Courage = Courage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCourage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Courage	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCourage(float* Courage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCourage");

	struct ABP_BaseCharacter_C_GetCourage_Params {
		float Courage;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCourage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Courage != nullptr)
		*Courage = params.Courage;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetToolType BPI");

	struct ABP_BaseCharacter_C_GetToolType_BPI_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetToolType_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Stamina != nullptr)
		*Stamina = params.Stamina;
	if (MaxStamina != nullptr)
		*MaxStamina = params.MaxStamina;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterHealth_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxHealth	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterHealth_BPI(float* health, float* MaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterHealth_BPI");

	struct ABP_BaseCharacter_C_GetCharacterHealth_BPI_Params {
		float health;			//Offset: 0 | ElementSize: 4
		float MaxHealth;			//Offset: 4 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCharacterHealth_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (health != nullptr)
		*health = params.health;
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

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfShouldPlayAnotherLoop_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Return_Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckIfShouldPlayAnotherLoop_BPI(bool* Return_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfShouldPlayAnotherLoop_BPI");

	struct ABP_BaseCharacter_C_CheckIfShouldPlayAnotherLoop_BPI_Params {
		bool Return_Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CheckIfShouldPlayAnotherLoop_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterSex_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterSex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterSex_BPI(TEnumAsByte<E_Sex>* CharacterSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterSex_BPI");

	struct ABP_BaseCharacter_C_GetCharacterSex_BPI_Params {
		TEnumAsByte<E_Sex> CharacterSex;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetCharacterSex_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CharacterSex != nullptr)
		*CharacterSex = params.CharacterSex;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSwooned_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::GetIsSwooned_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSwooned_BPI");

	struct ABP_BaseCharacter_C_GetIsSwooned_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsSwooned_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfCharacterIsInCustomAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CheckIfCharacterIsInCustomAnimation(bool* IsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfCharacterIsInCustomAnimation");

	struct ABP_BaseCharacter_C_CheckIfCharacterIsInCustomAnimation_Params {
		bool IsValid;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CheckIfCharacterIsInCustomAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSleeping_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::GetIsSleeping_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSleeping_BPI");

	struct ABP_BaseCharacter_C_GetIsSleeping_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsSleeping_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSitting_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::GetIsSitting_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsSitting_BPI");

	struct ABP_BaseCharacter_C_GetIsSitting_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsSitting_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayOnomatopoeicSound_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SoundSubCategory	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PickRandom	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SoundId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::PlayOnomatopoeicSound_BPI(struct FName SoundSubCategory, bool PickRandom, int32_t SoundId, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayOnomatopoeicSound_BPI");

	struct ABP_BaseCharacter_C_PlayOnomatopoeicSound_BPI_Params {
		struct FName SoundSubCategory;			//Offset: 0 | ElementSize: 8
		bool PickRandom;			//Offset: 8 | ElementSize: 1
		int32_t SoundId;			//Offset: 12 | ElementSize: 4
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_BaseCharacter_C_PlayOnomatopoeicSound_BPI_Params params;
	params.SoundSubCategory = SoundSubCategory;
	params.PickRandom = PickRandom;
	params.SoundId = SoundId;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInWater
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsInWater(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInWater");

	struct ABP_BaseCharacter_C_GetIsInWater_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsInWater_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsSleepingMontagePlaying_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlaying	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsSleepingMontagePlaying_BPI(bool* IsPlaying) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsSleepingMontagePlaying_BPI");

	struct ABP_BaseCharacter_C_IsSleepingMontagePlaying_BPI_Params {
		bool IsPlaying;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsSleepingMontagePlaying_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetComboState_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanFollowUp	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetComboState_BPI(bool* CanFollowUp) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetComboState_BPI");

	struct ABP_BaseCharacter_C_GetComboState_BPI_Params {
		bool CanFollowUp;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetComboState_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanFollowUp != nullptr)
		*CanFollowUp = params.CanFollowUp;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAttackStage_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsAttacking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetAttackStage_BPI(bool* IsAttacking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAttackStage_BPI");

	struct ABP_BaseCharacter_C_GetAttackStage_BPI_Params {
		bool IsAttacking;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetAttackStage_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsAttacking != nullptr)
		*IsAttacking = params.IsAttacking;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayAttackAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CanContinueSequence	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HasStartedNewAttackAnimationSequence	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AttackAnimationPredictedEndTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryPlayAttackAnimation(float PlayRate, bool CanContinueSequence, bool* HasStartedNewAttackAnimationSequence, float* AttackAnimationPredictedEndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayAttackAnimation");

	struct ABP_BaseCharacter_C_TryPlayAttackAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		bool CanContinueSequence;			//Offset: 4 | ElementSize: 1
		bool HasStartedNewAttackAnimationSequence;			//Offset: 5 | ElementSize: 1
		float AttackAnimationPredictedEndTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_TryPlayAttackAnimation_Params params;
	params.PlayRate = PlayRate;
	params.CanContinueSequence = CanContinueSequence;

	UObject::ProcessEvent(fn, &params);
	if (HasStartedNewAttackAnimationSequence != nullptr)
		*HasStartedNewAttackAnimationSequence = params.HasStartedNewAttackAnimationSequence;
	if (AttackAnimationPredictedEndTime != nullptr)
		*AttackAnimationPredictedEndTime = params.AttackAnimationPredictedEndTime;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayHitAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasStartedHitAnimation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HitAnimationPredictedEndTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryPlayHitAnimation(float PlayRate, bool* HasStartedHitAnimation, float* HitAnimationPredictedEndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayHitAnimation");

	struct ABP_BaseCharacter_C_TryPlayHitAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		bool HasStartedHitAnimation;			//Offset: 4 | ElementSize: 1
		float HitAnimationPredictedEndTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_TryPlayHitAnimation_Params params;
	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
	if (HasStartedHitAnimation != nullptr)
		*HasStartedHitAnimation = params.HasStartedHitAnimation;
	if (HitAnimationPredictedEndTime != nullptr)
		*HitAnimationPredictedEndTime = params.HitAnimationPredictedEndTime;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayBlockBreakAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasStartedBlockBreakAnimation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BlockBreakAnimationPredictedEndTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryPlayBlockBreakAnimation(float PlayRate, bool* HasStartedBlockBreakAnimation, float* BlockBreakAnimationPredictedEndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayBlockBreakAnimation");

	struct ABP_BaseCharacter_C_TryPlayBlockBreakAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		bool HasStartedBlockBreakAnimation;			//Offset: 4 | ElementSize: 1
		float BlockBreakAnimationPredictedEndTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_TryPlayBlockBreakAnimation_Params params;
	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
	if (HasStartedBlockBreakAnimation != nullptr)
		*HasStartedBlockBreakAnimation = params.HasStartedBlockBreakAnimation;
	if (BlockBreakAnimationPredictedEndTime != nullptr)
		*BlockBreakAnimationPredictedEndTime = params.BlockBreakAnimationPredictedEndTime;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsStaggered_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStaggered	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetIsStaggered_BPI(bool* IsStaggered) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsStaggered_BPI");

	struct ABP_BaseCharacter_C_GetIsStaggered_BPI_Params {
		bool IsStaggered;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetIsStaggered_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsStaggered != nullptr)
		*IsStaggered = params.IsStaggered;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetLeftHandItemName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: LeftHandItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetLeftHandItemName(struct FName* LeftHandItemName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetLeftHandItemName");

	struct ABP_BaseCharacter_C_GetLeftHandItemName_Params {
		struct FName LeftHandItemName;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetLeftHandItemName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (LeftHandItemName != nullptr)
		*LeftHandItemName = params.LeftHandItemName;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRightHandItemName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: RightHandItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetRightHandItemName(struct FName* RightHandItemName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRightHandItemName");

	struct ABP_BaseCharacter_C_GetRightHandItemName_Params {
		struct FName RightHandItemName;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetRightHandItemName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RightHandItemName != nullptr)
		*RightHandItemName = params.RightHandItemName;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsHoldableActionPlaying_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlaying	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsHoldableActionPlaying_BPI(bool* IsPlaying) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsHoldableActionPlaying_BPI");

	struct ABP_BaseCharacter_C_IsHoldableActionPlaying_BPI_Params {
		bool IsPlaying;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsHoldableActionPlaying_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDyeParamsForSlot_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDyeParamsForSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor* DyeColor, struct FName* DyeItemName, bool* IsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDyeParamsForSlot_BPI");

	struct ABP_BaseCharacter_C_GetDyeParamsForSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		struct FName DyeItemName;			//Offset: 4 | ElementSize: 8
		bool IsValid;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetDyeParamsForSlot_BPI_Params params;
	params.DyeEquipmentSlot = DyeEquipmentSlot;
	params.DyeSocket = DyeSocket;

	UObject::ProcessEvent(fn, &params);
	if (DyeColor != nullptr)
		*DyeColor = params.DyeColor;
	if (DyeItemName != nullptr)
		*DyeItemName = params.DyeItemName;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOffHandToolType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetOffHandToolType(TEnumAsByte<E_Tools>* ToolType)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOffHandToolType");

	struct ABP_BaseCharacter_C_GetOffHandToolType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetOffHandToolType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToolType != nullptr)
		*ToolType = params.ToolType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanBlockHit
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: HitByObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CanBlockHit	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanBlockHit(class UObject* HitByObject, float HitDamage, bool* CanBlockHit)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanBlockHit");

	struct ABP_BaseCharacter_C_CanBlockHit_Params {
		class UObject* HitByObject;			//Offset: 0 | ElementSize: 8
		float HitDamage;			//Offset: 8 | ElementSize: 4
		bool CanBlockHit;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanBlockHit_Params params;
	params.HitByObject = HitByObject;
	params.HitDamage = HitDamage;

	UObject::ProcessEvent(fn, &params);
	if (CanBlockHit != nullptr)
		*CanBlockHit = params.CanBlockHit;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterIsDead_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsDead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCharacterIsDead_BPI(bool* IsDead) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterIsDead_BPI");

	struct ABP_BaseCharacter_C_GetCharacterIsDead_BPI_Params {
		bool IsDead;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_GetCharacterIsDead_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayPushAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasStartedPushAnimation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PushAnimationPredictedEndTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::TryPlayPushAnimation(float PlayRate, bool* HasStartedPushAnimation, float* PushAnimationPredictedEndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.TryPlayPushAnimation");

	struct ABP_BaseCharacter_C_TryPlayPushAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		bool HasStartedPushAnimation;			//Offset: 4 | ElementSize: 1
		float PushAnimationPredictedEndTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_BaseCharacter_C_TryPlayPushAnimation_Params params;
	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
	if (HasStartedPushAnimation != nullptr)
		*HasStartedPushAnimation = params.HasStartedPushAnimation;
	if (PushAnimationPredictedEndTime != nullptr)
		*PushAnimationPredictedEndTime = params.PushAnimationPredictedEndTime;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInventoryComponent
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: InventoryComponent	Type: class UActorComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInventoryComponent(class UActorComponent** InventoryComponent)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInventoryComponent");

	struct ABP_BaseCharacter_C_GetInventoryComponent_Params {
		class UActorComponent* InventoryComponent;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetInventoryComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInventory
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Inventory	Type: TScriptInterface<class UBPI_Inventory_C>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInventory(TScriptInterface<class UBPI_Inventory_C>* Inventory)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInventory");

	struct ABP_BaseCharacter_C_GetInventory_Params {
		TScriptInterface<class UBPI_Inventory_C> Inventory;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetInventory_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetEyesLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: EyesLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetEyesLocation(struct FVector* EyesLocation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetEyesLocation");

	struct ABP_BaseCharacter_C_GetEyesLocation_Params {
		struct FVector EyesLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_BaseCharacter_C_GetEyesLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EyesLocation != nullptr)
		*EyesLocation = params.EyesLocation;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractAction(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction");

	struct ABP_BaseCharacter_C_GetInteractAction_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FText InteractActionText;			//Offset: 8 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 32 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetInteractAction_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (NPC_Interactable != nullptr)
		*NPC_Interactable = params.NPC_Interactable;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAnimationForViewmode_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractionAnimationMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetInteractAnimationForViewmode_BPI(TEnumAsByte<E_ViewMode> ViewMode, class UAnimMontage** InteractionAnimationMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAnimationForViewmode_BPI");

	struct ABP_BaseCharacter_C_GetInteractAnimationForViewmode_BPI_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* InteractionAnimationMontage;			//Offset: 8 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetInteractAnimationForViewmode_BPI_Params params;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
	if (InteractionAnimationMontage != nullptr)
		*InteractionAnimationMontage = params.InteractionAnimationMontage;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInRestrictedArea
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bLocked	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsInRestrictedArea(struct FVector Location, bool* bLocked) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInRestrictedArea");

	struct ABP_BaseCharacter_C_IsInRestrictedArea_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		bool bLocked;			//Offset: 12 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsInRestrictedArea_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
	if (bLocked != nullptr)
		*bLocked = params.bLocked;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsSeatedOnMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount");

	struct ABP_BaseCharacter_C_IsSeatedOnMount_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsSeatedOnMount_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::IsDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver");

	struct ABP_BaseCharacter_C_IsDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsDriver_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_BaseCharacter_C::GetSeatId()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId");

	struct ABP_BaseCharacter_C_GetSeatId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetSeatId_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMeshComponent* ABP_BaseCharacter_C::GetRiderMesh()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh");

	struct ABP_BaseCharacter_C_GetRiderMesh_Params {
		class UMeshComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetRiderMesh_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMountRiderComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMountRiderComponent* ABP_BaseCharacter_C::GetMountRiderComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent");

	struct ABP_BaseCharacter_C_GetMountRiderComponent_Params {
		class UMountRiderComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetMountRiderComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class USkeletalMeshComponent*>	Flags: Parm, OutParm, ReturnParm, ContainsInstancedReference
/////////////////////////////////////////////
TArray<class USkeletalMeshComponent*> ABP_BaseCharacter_C::GetAllRiderSkeletalMeshes()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes");

	struct ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params {
		TArray<class USkeletalMeshComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMountingToSeat
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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
bool ABP_BaseCharacter_C::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted");

	struct ABP_BaseCharacter_C_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsMounted_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class APawn* ABP_BaseCharacter_C::GetCharacterPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn");

	struct ABP_BaseCharacter_C_GetCharacterPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterPawn_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AActor* ABP_BaseCharacter_C::GetCharacterMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount");

	struct ABP_BaseCharacter_C_GetCharacterMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterMount_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AController* ABP_BaseCharacter_C::GetCharacterController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController");

	struct ABP_BaseCharacter_C_GetCharacterController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetCharacterController_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInCombat BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: InCombat	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::IsInCombat_BPI(bool* InCombat)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInCombat BPI");

	struct ABP_BaseCharacter_C_IsInCombat_BPI_Params {
		bool InCombat;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_IsInCombat_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InCombat != nullptr)
		*InCombat = params.InCombat;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCombatCausersBPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: CombatCausers	Type: TArray<class AActor*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCombatCausersBPI(TArray<class AActor*>* CombatCausers)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCombatCausersBPI");

	struct ABP_BaseCharacter_C_GetCombatCausersBPI_Params {
		TArray<class AActor*> CombatCausers;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetCombatCausersBPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CombatCausers != nullptr)
		*CombatCausers = params.CombatCausers;
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Stage != nullptr)
		*Stage = params.Stage;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetReaction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: OtherObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reaction	Type: TEnumAsByte<E_AIPerceptionReaction>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReactionPriority	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetReaction");

	struct ABP_BaseCharacter_C_GetReaction_Params {
		class UObject* OtherObject;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AIPerceptionReaction> Reaction;			//Offset: 8 | ElementSize: 1
		int32_t ReactionPriority;			//Offset: 12 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetReaction_Params params;
	params.OtherObject = OtherObject;

	UObject::ProcessEvent(fn, &params);
	if (Reaction != nullptr)
		*Reaction = params.Reaction;
	if (ReactionPriority != nullptr)
		*ReactionPriority = params.ReactionPriority;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetActorType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ActorType	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetActorType(struct FName* ActorType)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetActorType");

	struct ABP_BaseCharacter_C_GetActorType_Params {
		struct FName ActorType;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetActorType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorType != nullptr)
		*ActorType = params.ActorType;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanSenseOthers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: CanSenseOthers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanSenseOthers(bool* CanSenseOthers)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanSenseOthers");

	struct ABP_BaseCharacter_C_CanSenseOthers_Params {
		bool CanSenseOthers;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanSenseOthers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanSenseOthers != nullptr)
		*CanSenseOthers = params.CanSenseOthers;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanBeSensed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: CanBeSensed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanBeSensed(bool* CanBeSensed)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanBeSensed");

	struct ABP_BaseCharacter_C_CanBeSensed_Params {
		bool CanBeSensed;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanBeSensed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanBeSensed != nullptr)
		*CanBeSensed = params.CanBeSensed;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentAttackers
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ActorsType	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentAttackerActors	Type: TArray<class AActor*>	Flags: Parm, OutParm
// Name: MaxConcurrentAttackersCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetCurrentAttackers(struct FName ActorsType, TArray<class AActor*>* CurrentAttackerActors, int32_t* MaxConcurrentAttackersCount)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentAttackers");

	struct ABP_BaseCharacter_C_GetCurrentAttackers_Params {
		struct FName ActorsType;			//Offset: 0 | ElementSize: 8
		TArray<class AActor*> CurrentAttackerActors;			//Offset: 8 | ElementSize: 16
		int32_t MaxConcurrentAttackersCount;			//Offset: 24 | ElementSize: 4
	};
	ABP_BaseCharacter_C_GetCurrentAttackers_Params params;
	params.ActorsType = ActorsType;

	UObject::ProcessEvent(fn, &params);
	if (CurrentAttackerActors != nullptr)
		*CurrentAttackerActors = params.CurrentAttackerActors;
	if (MaxConcurrentAttackersCount != nullptr)
		*MaxConcurrentAttackersCount = params.MaxConcurrentAttackersCount;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.WasActorUpdated_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_BaseCharacter_C::WasActorUpdated_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WasActorUpdated_BPI");

	struct ABP_BaseCharacter_C_WasActorUpdated_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_BaseCharacter_C_WasActorUpdated_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMontagesForReplicaton_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: TArray<struct FMontageDataForRep>	Flags: Parm, OutParm, ReturnParm
/////////////////////////////////////////////
TArray<struct FMontageDataForRep> ABP_BaseCharacter_C::GetMontagesForReplicaton_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMontagesForReplicaton_BPI");

	struct ABP_BaseCharacter_C_GetMontagesForReplicaton_BPI_Params {
		TArray<struct FMontageDataForRep> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ABP_BaseCharacter_C_GetMontagesForReplicaton_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.ConvertHit
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: damageToApply	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::ConvertHit(float damageToApply, struct FVector hitFromDirection, struct FHitResult* Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ConvertHit");

	struct ABP_BaseCharacter_C_ConvertHit_Params {
		float damageToApply;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 16 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 152 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 160 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 168 | ElementSize: 8
	};
	ABP_BaseCharacter_C_ConvertHit_Params params;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
	if (Hit != nullptr)
		*Hit = params.Hit;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.CanDamage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CanDamage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_BaseCharacter_C::CanDamage(struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, bool* CanDamage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanDamage");

	struct ABP_BaseCharacter_C_CanDamage_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 136 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 144 | ElementSize: 8
		bool CanDamage;			//Offset: 152 | ElementSize: 1
	};
	ABP_BaseCharacter_C_CanDamage_Params params;
	params.Hit = Hit;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
	if (CanDamage != nullptr)
		*CanDamage = params.CanDamage;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Name	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetName(struct FName* Name)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetName");

	struct ABP_BaseCharacter_C_GetName_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
	};
	ABP_BaseCharacter_C_GetName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
}

/////////////////////////////////////////////
// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDisplayName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: DisplayName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_BaseCharacter_C::GetDisplayName(struct FText* DisplayName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDisplayName");

	struct ABP_BaseCharacter_C_GetDisplayName_Params {
		struct FText DisplayName;			//Offset: 0 | ElementSize: 24
	};
	ABP_BaseCharacter_C_GetDisplayName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}

/////////////////////////////////////////////
// InputAxisDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.InputAxisDelegateBinding_1
// Flags: BlueprintCosmetic, Net
// Params:
/////////////////////////////////////////////
void ABP_BaseCharacter_C::InputAxisDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputAxisDelegateBinding BP_BaseCharacter.BP_BaseCharacter_C.InputAxisDelegateBinding_1");

	struct ABP_BaseCharacter_C_InputAxisDelegateBinding_1_Params {
	};
	ABP_BaseCharacter_C_InputAxisDelegateBinding_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}