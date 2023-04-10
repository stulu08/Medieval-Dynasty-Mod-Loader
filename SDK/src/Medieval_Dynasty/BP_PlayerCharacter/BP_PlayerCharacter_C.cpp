#include "../SDK.h"
#include "BP_PlayerCharacter_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_PlayerCharacter_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 5888);
}
struct FPointerToUberGraphFrame* ABP_PlayerCharacter_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 5888);
}
void ABP_PlayerCharacter_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 5888, value);
}
// Member Getter and Setter of NPC_Light
// Declaration: class UPointLightComponent* NPC_Light
class UPointLightComponent* ABP_PlayerCharacter_C::M_GetNPC_Light() const {
	return Read<class UPointLightComponent*>((byte*)this + 5896);
}
class UPointLightComponent** ABP_PlayerCharacter_C::M_PtrGetNPC_Light() {
	return reinterpret_cast<class UPointLightComponent**>((byte*)this + 5896);
}
void ABP_PlayerCharacter_C::M_SetNPC_Light(const class UPointLightComponent*& value) {
	Write((byte*)this + 5896, value);
}
// Member Getter and Setter of TP_Camera
// Declaration: class UCameraComponent* TP_Camera
class UCameraComponent* ABP_PlayerCharacter_C::M_GetTP_Camera() const {
	return Read<class UCameraComponent*>((byte*)this + 5904);
}
class UCameraComponent** ABP_PlayerCharacter_C::M_PtrGetTP_Camera() {
	return reinterpret_cast<class UCameraComponent**>((byte*)this + 5904);
}
void ABP_PlayerCharacter_C::M_SetTP_Camera(const class UCameraComponent*& value) {
	Write((byte*)this + 5904, value);
}
// Member Getter and Setter of TP_SpringArm
// Declaration: class UMD_SpringArmComponent* TP_SpringArm
class UMD_SpringArmComponent* ABP_PlayerCharacter_C::M_GetTP_SpringArm() const {
	return Read<class UMD_SpringArmComponent*>((byte*)this + 5912);
}
class UMD_SpringArmComponent** ABP_PlayerCharacter_C::M_PtrGetTP_SpringArm() {
	return reinterpret_cast<class UMD_SpringArmComponent**>((byte*)this + 5912);
}
void ABP_PlayerCharacter_C::M_SetTP_SpringArm(const class UMD_SpringArmComponent*& value) {
	Write((byte*)this + 5912, value);
}
// Member Getter and Setter of PhysicsHandle
// Declaration: class UPhysicsHandleComponent* PhysicsHandle
class UPhysicsHandleComponent* ABP_PlayerCharacter_C::M_GetPhysicsHandle() const {
	return Read<class UPhysicsHandleComponent*>((byte*)this + 5920);
}
class UPhysicsHandleComponent** ABP_PlayerCharacter_C::M_PtrGetPhysicsHandle() {
	return reinterpret_cast<class UPhysicsHandleComponent**>((byte*)this + 5920);
}
void ABP_PlayerCharacter_C::M_SetPhysicsHandle(const class UPhysicsHandleComponent*& value) {
	Write((byte*)this + 5920, value);
}
// Member Getter and Setter of FP_Camera
// Declaration: class UCameraComponent* FP_Camera
class UCameraComponent* ABP_PlayerCharacter_C::M_GetFP_Camera() const {
	return Read<class UCameraComponent*>((byte*)this + 5928);
}
class UCameraComponent** ABP_PlayerCharacter_C::M_PtrGetFP_Camera() {
	return reinterpret_cast<class UCameraComponent**>((byte*)this + 5928);
}
void ABP_PlayerCharacter_C::M_SetFP_Camera(const class UCameraComponent*& value) {
	Write((byte*)this + 5928, value);
}
// Member Getter and Setter of FP_SpringArm
// Declaration: class USpringArmComponent* FP_SpringArm
class USpringArmComponent* ABP_PlayerCharacter_C::M_GetFP_SpringArm() const {
	return Read<class USpringArmComponent*>((byte*)this + 5936);
}
class USpringArmComponent** ABP_PlayerCharacter_C::M_PtrGetFP_SpringArm() {
	return reinterpret_cast<class USpringArmComponent**>((byte*)this + 5936);
}
void ABP_PlayerCharacter_C::M_SetFP_SpringArm(const class USpringArmComponent*& value) {
	Write((byte*)this + 5936, value);
}
// Member Getter and Setter of LifeStats_Voice
// Declaration: class UAudioComponent* LifeStats_Voice
class UAudioComponent* ABP_PlayerCharacter_C::M_GetLifeStats_Voice() const {
	return Read<class UAudioComponent*>((byte*)this + 5944);
}
class UAudioComponent** ABP_PlayerCharacter_C::M_PtrGetLifeStats_Voice() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 5944);
}
void ABP_PlayerCharacter_C::M_SetLifeStats_Voice(const class UAudioComponent*& value) {
	Write((byte*)this + 5944, value);
}
// Member Getter and Setter of BP_AimOffsetComponent
// Declaration: class UBP_AimOffsetComponent_C* BP_AimOffsetComponent
class UBP_AimOffsetComponent_C* ABP_PlayerCharacter_C::M_GetBP_AimOffsetComponent() const {
	return Read<class UBP_AimOffsetComponent_C*>((byte*)this + 5952);
}
class UBP_AimOffsetComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_AimOffsetComponent() {
	return reinterpret_cast<class UBP_AimOffsetComponent_C**>((byte*)this + 5952);
}
void ABP_PlayerCharacter_C::M_SetBP_AimOffsetComponent(const class UBP_AimOffsetComponent_C*& value) {
	Write((byte*)this + 5952, value);
}
// Member Getter and Setter of ActionCameraSocket
// Declaration: class USceneComponent* ActionCameraSocket
class USceneComponent* ABP_PlayerCharacter_C::M_GetActionCameraSocket() const {
	return Read<class USceneComponent*>((byte*)this + 5960);
}
class USceneComponent** ABP_PlayerCharacter_C::M_PtrGetActionCameraSocket() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 5960);
}
void ABP_PlayerCharacter_C::M_SetActionCameraSocket(const class USceneComponent*& value) {
	Write((byte*)this + 5960, value);
}
// Member Getter and Setter of BP_WeatherComponent
// Declaration: class UBP_WeatherComponent_C* BP_WeatherComponent
class UBP_WeatherComponent_C* ABP_PlayerCharacter_C::M_GetBP_WeatherComponent() const {
	return Read<class UBP_WeatherComponent_C*>((byte*)this + 5968);
}
class UBP_WeatherComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_WeatherComponent() {
	return reinterpret_cast<class UBP_WeatherComponent_C**>((byte*)this + 5968);
}
void ABP_PlayerCharacter_C::M_SetBP_WeatherComponent(const class UBP_WeatherComponent_C*& value) {
	Write((byte*)this + 5968, value);
}
// Member Getter and Setter of BuildingTargetArrow
// Declaration: class UArrowComponent* BuildingTargetArrow
class UArrowComponent* ABP_PlayerCharacter_C::M_GetBuildingTargetArrow() const {
	return Read<class UArrowComponent*>((byte*)this + 5976);
}
class UArrowComponent** ABP_PlayerCharacter_C::M_PtrGetBuildingTargetArrow() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 5976);
}
void ABP_PlayerCharacter_C::M_SetBuildingTargetArrow(const class UArrowComponent*& value) {
	Write((byte*)this + 5976, value);
}
// Member Getter and Setter of BP_PlayerBuildingComponent
// Declaration: class UBP_PlayerBuildingComponent_C* BP_PlayerBuildingComponent
class UBP_PlayerBuildingComponent_C* ABP_PlayerCharacter_C::M_GetBP_PlayerBuildingComponent() const {
	return Read<class UBP_PlayerBuildingComponent_C*>((byte*)this + 5984);
}
class UBP_PlayerBuildingComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_PlayerBuildingComponent() {
	return reinterpret_cast<class UBP_PlayerBuildingComponent_C**>((byte*)this + 5984);
}
void ABP_PlayerCharacter_C::M_SetBP_PlayerBuildingComponent(const class UBP_PlayerBuildingComponent_C*& value) {
	Write((byte*)this + 5984, value);
}
// Member Getter and Setter of CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557
// Declaration: float CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557
float ABP_PlayerCharacter_C::M_GetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() const {
	return Read<float>((byte*)this + 5992);
}
float* ABP_PlayerCharacter_C::M_PtrGetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() {
	return reinterpret_cast<float*>((byte*)this + 5992);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557(const float& value) {
	Write((byte*)this + 5992, value);
}
// Member Getter and Setter of CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557
// Declaration: TEnumAsByte<ETimelineDirection> CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5996);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5996);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5996, value);
}
// Member Getter and Setter of CameraLerp
// Declaration: class UTimelineComponent* CameraLerp
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetCameraLerp() const {
	return Read<class UTimelineComponent*>((byte*)this + 6000);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetCameraLerp() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 6000);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp(const class UTimelineComponent*& value) {
	Write((byte*)this + 6000, value);
}
// Member Getter and Setter of FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A
// Declaration: float FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A
float ABP_PlayerCharacter_C::M_GetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const {
	return Read<float>((byte*)this + 6008);
}
float* ABP_PlayerCharacter_C::M_PtrGetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() {
	return reinterpret_cast<float*>((byte*)this + 6008);
}
void ABP_PlayerCharacter_C::M_SetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const float& value) {
	Write((byte*)this + 6008, value);
}
// Member Getter and Setter of FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A
// Declaration: TEnumAsByte<ETimelineDirection> FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 6012);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 6012);
}
void ABP_PlayerCharacter_C::M_SetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 6012, value);
}
// Member Getter and Setter of FOV
// Declaration: class UTimelineComponent* FOV
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetFOV() const {
	return Read<class UTimelineComponent*>((byte*)this + 6016);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetFOV() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 6016);
}
void ABP_PlayerCharacter_C::M_SetFOV(const class UTimelineComponent*& value) {
	Write((byte*)this + 6016, value);
}
// Member Getter and Setter of PlayerControllerReference
// Declaration: class APC_Player_C* PlayerControllerReference
class APC_Player_C* ABP_PlayerCharacter_C::M_GetPlayerControllerReference() const {
	return Read<class APC_Player_C*>((byte*)this + 6024);
}
class APC_Player_C** ABP_PlayerCharacter_C::M_PtrGetPlayerControllerReference() {
	return reinterpret_cast<class APC_Player_C**>((byte*)this + 6024);
}
void ABP_PlayerCharacter_C::M_SetPlayerControllerReference(const class APC_Player_C*& value) {
	Write((byte*)this + 6024, value);
}
// Member Getter and Setter of QuickSlotCount
// Declaration: int32_t QuickSlotCount
int32_t ABP_PlayerCharacter_C::M_GetQuickSlotCount() const {
	return Read<int32_t>((byte*)this + 6032);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetQuickSlotCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 6032);
}
void ABP_PlayerCharacter_C::M_SetQuickSlotCount(const int32_t& value) {
	Write((byte*)this + 6032, value);
}
// Member Getter and Setter of LastHitActor
// Declaration: class AActor* LastHitActor
class AActor* ABP_PlayerCharacter_C::M_GetLastHitActor() const {
	return Read<class AActor*>((byte*)this + 6040);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetLastHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 6040);
}
void ABP_PlayerCharacter_C::M_SetLastHitActor(const class AActor*& value) {
	Write((byte*)this + 6040, value);
}
// Member Getter and Setter of HoldingItem
// Declaration: bool HoldingItem
bool ABP_PlayerCharacter_C::M_GetHoldingItem() const {
	return Read<bool>((byte*)this + 6048);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHoldingItem() {
	return reinterpret_cast<bool*>((byte*)this + 6048);
}
void ABP_PlayerCharacter_C::M_SetHoldingItem(const bool& value) {
	Write((byte*)this + 6048, value);
}
// Member Getter and Setter of UsedItem
// Declaration: struct FST_ItemInventorys UsedItem
struct FST_ItemInventorys ABP_PlayerCharacter_C::M_GetUsedItem() const {
	return Read<struct FST_ItemInventorys>((byte*)this + 6052);
}
struct FST_ItemInventorys* ABP_PlayerCharacter_C::M_PtrGetUsedItem() {
	return reinterpret_cast<struct FST_ItemInventorys*>((byte*)this + 6052);
}
void ABP_PlayerCharacter_C::M_SetUsedItem(const struct FST_ItemInventorys& value) {
	Write((byte*)this + 6052, value);
}
// Member Getter and Setter of HitActor
// Declaration: class AActor* HitActor
class AActor* ABP_PlayerCharacter_C::M_GetHitActor() const {
	return Read<class AActor*>((byte*)this + 6104);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 6104);
}
void ABP_PlayerCharacter_C::M_SetHitActor(const class AActor*& value) {
	Write((byte*)this + 6104, value);
}
// Member Getter and Setter of InteractTimerHandle
// Declaration: struct FTimerHandle InteractTimerHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6112);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6112);
}
void ABP_PlayerCharacter_C::M_SetInteractTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6112, value);
}
// Member Getter and Setter of InteractKeyDown
// Declaration: bool InteractKeyDown
bool ABP_PlayerCharacter_C::M_GetInteractKeyDown() const {
	return Read<bool>((byte*)this + 6120);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInteractKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 6120);
}
void ABP_PlayerCharacter_C::M_SetInteractKeyDown(const bool& value) {
	Write((byte*)this + 6120, value);
}
// Member Getter and Setter of PickingTImer
// Declaration: struct FTimerHandle PickingTImer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetPickingTImer() const {
	return Read<struct FTimerHandle>((byte*)this + 6128);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetPickingTImer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6128);
}
void ABP_PlayerCharacter_C::M_SetPickingTImer(const struct FTimerHandle& value) {
	Write((byte*)this + 6128, value);
}
// Member Getter and Setter of InteractionTime
// Declaration: float InteractionTime
float ABP_PlayerCharacter_C::M_GetInteractionTime() const {
	return Read<float>((byte*)this + 6136);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionTime() {
	return reinterpret_cast<float*>((byte*)this + 6136);
}
void ABP_PlayerCharacter_C::M_SetInteractionTime(const float& value) {
	Write((byte*)this + 6136, value);
}
// Member Getter and Setter of InteractionRange
// Declaration: float InteractionRange
float ABP_PlayerCharacter_C::M_GetInteractionRange() const {
	return Read<float>((byte*)this + 6140);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionRange() {
	return reinterpret_cast<float*>((byte*)this + 6140);
}
void ABP_PlayerCharacter_C::M_SetInteractionRange(const float& value) {
	Write((byte*)this + 6140, value);
}
// Member Getter and Setter of InteractionNoCollisionRange
// Declaration: float InteractionNoCollisionRange
float ABP_PlayerCharacter_C::M_GetInteractionNoCollisionRange() const {
	return Read<float>((byte*)this + 6144);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionNoCollisionRange() {
	return reinterpret_cast<float*>((byte*)this + 6144);
}
void ABP_PlayerCharacter_C::M_SetInteractionNoCollisionRange(const float& value) {
	Write((byte*)this + 6144, value);
}
// Member Getter and Setter of HitRayCastFrequency
// Declaration: float HitRayCastFrequency
float ABP_PlayerCharacter_C::M_GetHitRayCastFrequency() const {
	return Read<float>((byte*)this + 6148);
}
float* ABP_PlayerCharacter_C::M_PtrGetHitRayCastFrequency() {
	return reinterpret_cast<float*>((byte*)this + 6148);
}
void ABP_PlayerCharacter_C::M_SetHitRayCastFrequency(const float& value) {
	Write((byte*)this + 6148, value);
}
// Member Getter and Setter of HitRayCastBuildingFrequency
// Declaration: float HitRayCastBuildingFrequency
float ABP_PlayerCharacter_C::M_GetHitRayCastBuildingFrequency() const {
	return Read<float>((byte*)this + 6152);
}
float* ABP_PlayerCharacter_C::M_PtrGetHitRayCastBuildingFrequency() {
	return reinterpret_cast<float*>((byte*)this + 6152);
}
void ABP_PlayerCharacter_C::M_SetHitRayCastBuildingFrequency(const float& value) {
	Write((byte*)this + 6152, value);
}
// Member Getter and Setter of HitActorID
// Declaration: int32_t HitActorID
int32_t ABP_PlayerCharacter_C::M_GetHitActorID() const {
	return Read<int32_t>((byte*)this + 6156);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetHitActorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6156);
}
void ABP_PlayerCharacter_C::M_SetHitActorID(const int32_t& value) {
	Write((byte*)this + 6156, value);
}
// Member Getter and Setter of LastHitActorID
// Declaration: int32_t LastHitActorID
int32_t ABP_PlayerCharacter_C::M_GetLastHitActorID() const {
	return Read<int32_t>((byte*)this + 6160);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetLastHitActorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6160);
}
void ABP_PlayerCharacter_C::M_SetLastHitActorID(const int32_t& value) {
	Write((byte*)this + 6160, value);
}
// Member Getter and Setter of TmpItemName
// Declaration: struct FName TmpItemName
struct FName ABP_PlayerCharacter_C::M_GetTmpItemName() const {
	return Read<struct FName>((byte*)this + 6164);
}
struct FName* ABP_PlayerCharacter_C::M_PtrGetTmpItemName() {
	return reinterpret_cast<struct FName*>((byte*)this + 6164);
}
void ABP_PlayerCharacter_C::M_SetTmpItemName(const struct FName& value) {
	Write((byte*)this + 6164, value);
}
// Member Getter and Setter of LastSelectedQuickSlotID
// Declaration: int32_t LastSelectedQuickSlotID
int32_t ABP_PlayerCharacter_C::M_GetLastSelectedQuickSlotID() const {
	return Read<int32_t>((byte*)this + 6172);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetLastSelectedQuickSlotID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6172);
}
void ABP_PlayerCharacter_C::M_SetLastSelectedQuickSlotID(const int32_t& value) {
	Write((byte*)this + 6172, value);
}
// Member Getter and Setter of UI_GameMenu
// Declaration: class UUserWidget* UI_GameMenu
class UUserWidget* ABP_PlayerCharacter_C::M_GetUI_GameMenu() const {
	return Read<class UUserWidget*>((byte*)this + 6176);
}
class UUserWidget** ABP_PlayerCharacter_C::M_PtrGetUI_GameMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 6176);
}
void ABP_PlayerCharacter_C::M_SetUI_GameMenu(const class UUserWidget*& value) {
	Write((byte*)this + 6176, value);
}
// Member Getter and Setter of InBuildingMode
// Declaration: bool InBuildingMode
bool ABP_PlayerCharacter_C::M_GetInBuildingMode() const {
	return Read<bool>((byte*)this + 6184);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInBuildingMode() {
	return reinterpret_cast<bool*>((byte*)this + 6184);
}
void ABP_PlayerCharacter_C::M_SetInBuildingMode(const bool& value) {
	Write((byte*)this + 6184, value);
}
// Member Getter and Setter of BuildingRotation
// Declaration: float BuildingRotation
float ABP_PlayerCharacter_C::M_GetBuildingRotation() const {
	return Read<float>((byte*)this + 6188);
}
float* ABP_PlayerCharacter_C::M_PtrGetBuildingRotation() {
	return reinterpret_cast<float*>((byte*)this + 6188);
}
void ABP_PlayerCharacter_C::M_SetBuildingRotation(const float& value) {
	Write((byte*)this + 6188, value);
}
// Member Getter and Setter of RotatingRight
// Declaration: bool RotatingRight
bool ABP_PlayerCharacter_C::M_GetRotatingRight() const {
	return Read<bool>((byte*)this + 6192);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRotatingRight() {
	return reinterpret_cast<bool*>((byte*)this + 6192);
}
void ABP_PlayerCharacter_C::M_SetRotatingRight(const bool& value) {
	Write((byte*)this + 6192, value);
}
// Member Getter and Setter of RotatingLeft
// Declaration: bool RotatingLeft
bool ABP_PlayerCharacter_C::M_GetRotatingLeft() const {
	return Read<bool>((byte*)this + 6193);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRotatingLeft() {
	return reinterpret_cast<bool*>((byte*)this + 6193);
}
void ABP_PlayerCharacter_C::M_SetRotatingLeft(const bool& value) {
	Write((byte*)this + 6193, value);
}
// Member Getter and Setter of TempSoundsVolume
// Declaration: float TempSoundsVolume
float ABP_PlayerCharacter_C::M_GetTempSoundsVolume() const {
	return Read<float>((byte*)this + 6196);
}
float* ABP_PlayerCharacter_C::M_PtrGetTempSoundsVolume() {
	return reinterpret_cast<float*>((byte*)this + 6196);
}
void ABP_PlayerCharacter_C::M_SetTempSoundsVolume(const float& value) {
	Write((byte*)this + 6196, value);
}
// Member Getter and Setter of TorchLighten
// Declaration: bool TorchLighten
bool ABP_PlayerCharacter_C::M_GetTorchLighten() const {
	return Read<bool>((byte*)this + 6200);
}
bool* ABP_PlayerCharacter_C::M_PtrGetTorchLighten() {
	return reinterpret_cast<bool*>((byte*)this + 6200);
}
void ABP_PlayerCharacter_C::M_SetTorchLighten(const bool& value) {
	Write((byte*)this + 6200, value);
}
// Member Getter and Setter of FoliageDestination
// Declaration: struct FVector FoliageDestination
struct FVector ABP_PlayerCharacter_C::M_GetFoliageDestination() const {
	return Read<struct FVector>((byte*)this + 6204);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetFoliageDestination() {
	return reinterpret_cast<struct FVector*>((byte*)this + 6204);
}
void ABP_PlayerCharacter_C::M_SetFoliageDestination(const struct FVector& value) {
	Write((byte*)this + 6204, value);
}
// Member Getter and Setter of BuildingModeTargetingOffset
// Declaration: bool BuildingModeTargetingOffset
bool ABP_PlayerCharacter_C::M_GetBuildingModeTargetingOffset() const {
	return Read<bool>((byte*)this + 6216);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBuildingModeTargetingOffset() {
	return reinterpret_cast<bool*>((byte*)this + 6216);
}
void ABP_PlayerCharacter_C::M_SetBuildingModeTargetingOffset(const bool& value) {
	Write((byte*)this + 6216, value);
}
// Member Getter and Setter of FieldBuildingRange
// Declaration: float FieldBuildingRange
float ABP_PlayerCharacter_C::M_GetFieldBuildingRange() const {
	return Read<float>((byte*)this + 6220);
}
float* ABP_PlayerCharacter_C::M_PtrGetFieldBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6220);
}
void ABP_PlayerCharacter_C::M_SetFieldBuildingRange(const float& value) {
	Write((byte*)this + 6220, value);
}
// Member Getter and Setter of TmpFreshness
// Declaration: float TmpFreshness
float ABP_PlayerCharacter_C::M_GetTmpFreshness() const {
	return Read<float>((byte*)this + 6224);
}
float* ABP_PlayerCharacter_C::M_PtrGetTmpFreshness() {
	return reinterpret_cast<float*>((byte*)this + 6224);
}
void ABP_PlayerCharacter_C::M_SetTmpFreshness(const float& value) {
	Write((byte*)this + 6224, value);
}
// Member Getter and Setter of QuickslotMenuOpen
// Declaration: bool QuickslotMenuOpen
bool ABP_PlayerCharacter_C::M_GetQuickslotMenuOpen() const {
	return Read<bool>((byte*)this + 6228);
}
bool* ABP_PlayerCharacter_C::M_PtrGetQuickslotMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 6228);
}
void ABP_PlayerCharacter_C::M_SetQuickslotMenuOpen(const bool& value) {
	Write((byte*)this + 6228, value);
}
// Member Getter and Setter of TraderReference
// Declaration: class ABP_NPC_C* TraderReference
class ABP_NPC_C* ABP_PlayerCharacter_C::M_GetTraderReference() const {
	return Read<class ABP_NPC_C*>((byte*)this + 6232);
}
class ABP_NPC_C** ABP_PlayerCharacter_C::M_PtrGetTraderReference() {
	return reinterpret_cast<class ABP_NPC_C**>((byte*)this + 6232);
}
void ABP_PlayerCharacter_C::M_SetTraderReference(const class ABP_NPC_C*& value) {
	Write((byte*)this + 6232, value);
}
// Member Getter and Setter of StartingWeapons
// Declaration: TArray<struct FName> StartingWeapons
TArray<struct FName> ABP_PlayerCharacter_C::M_GetStartingWeapons() const {
	return Read<TArray<struct FName>>((byte*)this + 6240);
}
TArray<struct FName>* ABP_PlayerCharacter_C::M_PtrGetStartingWeapons() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 6240);
}
void ABP_PlayerCharacter_C::M_SetStartingWeapons(const TArray<struct FName>& value) {
	Write((byte*)this + 6240, value);
}
// Member Getter and Setter of HadOffHandItem
// Declaration: bool HadOffHandItem
bool ABP_PlayerCharacter_C::M_GetHadOffHandItem() const {
	return Read<bool>((byte*)this + 6256);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadOffHandItem() {
	return reinterpret_cast<bool*>((byte*)this + 6256);
}
void ABP_PlayerCharacter_C::M_SetHadOffHandItem(const bool& value) {
	Write((byte*)this + 6256, value);
}
// Member Getter and Setter of HadMainHandItem
// Declaration: bool HadMainHandItem
bool ABP_PlayerCharacter_C::M_GetHadMainHandItem() const {
	return Read<bool>((byte*)this + 6257);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadMainHandItem() {
	return reinterpret_cast<bool*>((byte*)this + 6257);
}
void ABP_PlayerCharacter_C::M_SetHadMainHandItem(const bool& value) {
	Write((byte*)this + 6257, value);
}
// Member Getter and Setter of HadRightTool
// Declaration: bool HadRightTool
bool ABP_PlayerCharacter_C::M_GetHadRightTool() const {
	return Read<bool>((byte*)this + 6258);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadRightTool() {
	return reinterpret_cast<bool*>((byte*)this + 6258);
}
void ABP_PlayerCharacter_C::M_SetHadRightTool(const bool& value) {
	Write((byte*)this + 6258, value);
}
// Member Getter and Setter of PlayerCamera
// Declaration: bool PlayerCamera
bool ABP_PlayerCharacter_C::M_GetPlayerCamera() const {
	return Read<bool>((byte*)this + 6259);
}
bool* ABP_PlayerCharacter_C::M_PtrGetPlayerCamera() {
	return reinterpret_cast<bool*>((byte*)this + 6259);
}
void ABP_PlayerCharacter_C::M_SetPlayerCamera(const bool& value) {
	Write((byte*)this + 6259, value);
}
// Member Getter and Setter of ActionCamera
// Declaration: class ABP_Camera_C* ActionCamera
class ABP_Camera_C* ABP_PlayerCharacter_C::M_GetActionCamera() const {
	return Read<class ABP_Camera_C*>((byte*)this + 6264);
}
class ABP_Camera_C** ABP_PlayerCharacter_C::M_PtrGetActionCamera() {
	return reinterpret_cast<class ABP_Camera_C**>((byte*)this + 6264);
}
void ABP_PlayerCharacter_C::M_SetActionCamera(const class ABP_Camera_C*& value) {
	Write((byte*)this + 6264, value);
}
// Member Getter and Setter of DefaultViewYawMin
// Declaration: float DefaultViewYawMin
float ABP_PlayerCharacter_C::M_GetDefaultViewYawMin() const {
	return Read<float>((byte*)this + 6272);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewYawMin() {
	return reinterpret_cast<float*>((byte*)this + 6272);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewYawMin(const float& value) {
	Write((byte*)this + 6272, value);
}
// Member Getter and Setter of DefaultViewYawMax
// Declaration: float DefaultViewYawMax
float ABP_PlayerCharacter_C::M_GetDefaultViewYawMax() const {
	return Read<float>((byte*)this + 6276);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewYawMax() {
	return reinterpret_cast<float*>((byte*)this + 6276);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewYawMax(const float& value) {
	Write((byte*)this + 6276, value);
}
// Member Getter and Setter of DefaultViewPitchMin
// Declaration: float DefaultViewPitchMin
float ABP_PlayerCharacter_C::M_GetDefaultViewPitchMin() const {
	return Read<float>((byte*)this + 6280);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewPitchMin() {
	return reinterpret_cast<float*>((byte*)this + 6280);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewPitchMin(const float& value) {
	Write((byte*)this + 6280, value);
}
// Member Getter and Setter of DefaultViewPitchMax
// Declaration: float DefaultViewPitchMax
float ABP_PlayerCharacter_C::M_GetDefaultViewPitchMax() const {
	return Read<float>((byte*)this + 6284);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewPitchMax() {
	return reinterpret_cast<float*>((byte*)this + 6284);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewPitchMax(const float& value) {
	Write((byte*)this + 6284, value);
}
// Member Getter and Setter of LimitPlayerCamera
// Declaration: bool LimitPlayerCamera
bool ABP_PlayerCharacter_C::M_GetLimitPlayerCamera() const {
	return Read<bool>((byte*)this + 6288);
}
bool* ABP_PlayerCharacter_C::M_PtrGetLimitPlayerCamera() {
	return reinterpret_cast<bool*>((byte*)this + 6288);
}
void ABP_PlayerCharacter_C::M_SetLimitPlayerCamera(const bool& value) {
	Write((byte*)this + 6288, value);
}
// Member Getter and Setter of SplineBuildingRange
// Declaration: float SplineBuildingRange
float ABP_PlayerCharacter_C::M_GetSplineBuildingRange() const {
	return Read<float>((byte*)this + 6292);
}
float* ABP_PlayerCharacter_C::M_PtrGetSplineBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6292);
}
void ABP_PlayerCharacter_C::M_SetSplineBuildingRange(const float& value) {
	Write((byte*)this + 6292, value);
}
// Member Getter and Setter of FurnitureBuildingRange
// Declaration: float FurnitureBuildingRange
float ABP_PlayerCharacter_C::M_GetFurnitureBuildingRange() const {
	return Read<float>((byte*)this + 6296);
}
float* ABP_PlayerCharacter_C::M_PtrGetFurnitureBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6296);
}
void ABP_PlayerCharacter_C::M_SetFurnitureBuildingRange(const float& value) {
	Write((byte*)this + 6296, value);
}
// Member Getter and Setter of IsInteractTimer_
// Declaration: bool IsInteractTimer_
bool ABP_PlayerCharacter_C::M_GetIsInteractTimer_() const {
	return Read<bool>((byte*)this + 6300);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsInteractTimer_() {
	return reinterpret_cast<bool*>((byte*)this + 6300);
}
void ABP_PlayerCharacter_C::M_SetIsInteractTimer_(const bool& value) {
	Write((byte*)this + 6300, value);
}
// Member Getter and Setter of SwapItemOnInteraction
// Declaration: bool SwapItemOnInteraction
bool ABP_PlayerCharacter_C::M_GetSwapItemOnInteraction() const {
	return Read<bool>((byte*)this + 6301);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSwapItemOnInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 6301);
}
void ABP_PlayerCharacter_C::M_SetSwapItemOnInteraction(const bool& value) {
	Write((byte*)this + 6301, value);
}
// Member Getter and Setter of TimeRequired
// Declaration: float TimeRequired
float ABP_PlayerCharacter_C::M_GetTimeRequired() const {
	return Read<float>((byte*)this + 6304);
}
float* ABP_PlayerCharacter_C::M_PtrGetTimeRequired() {
	return reinterpret_cast<float*>((byte*)this + 6304);
}
void ABP_PlayerCharacter_C::M_SetTimeRequired(const float& value) {
	Write((byte*)this + 6304, value);
}
// Member Getter and Setter of tmp_Capacity
// Declaration: int32_t tmp_Capacity
int32_t ABP_PlayerCharacter_C::M_Gettmp_Capacity() const {
	return Read<int32_t>((byte*)this + 6308);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGettmp_Capacity() {
	return reinterpret_cast<int32_t*>((byte*)this + 6308);
}
void ABP_PlayerCharacter_C::M_Settmp_Capacity(const int32_t& value) {
	Write((byte*)this + 6308, value);
}
// Member Getter and Setter of InputDisabled
// Declaration: bool InputDisabled
bool ABP_PlayerCharacter_C::M_GetInputDisabled() const {
	return Read<bool>((byte*)this + 6312);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInputDisabled() {
	return reinterpret_cast<bool*>((byte*)this + 6312);
}
void ABP_PlayerCharacter_C::M_SetInputDisabled(const bool& value) {
	Write((byte*)this + 6312, value);
}
// Member Getter and Setter of ClickBlock
// Declaration: bool ClickBlock
bool ABP_PlayerCharacter_C::M_GetClickBlock() const {
	return Read<bool>((byte*)this + 6313);
}
bool* ABP_PlayerCharacter_C::M_PtrGetClickBlock() {
	return reinterpret_cast<bool*>((byte*)this + 6313);
}
void ABP_PlayerCharacter_C::M_SetClickBlock(const bool& value) {
	Write((byte*)this + 6313, value);
}
// Member Getter and Setter of UpBool
// Declaration: bool UpBool
bool ABP_PlayerCharacter_C::M_GetUpBool() const {
	return Read<bool>((byte*)this + 6314);
}
bool* ABP_PlayerCharacter_C::M_PtrGetUpBool() {
	return reinterpret_cast<bool*>((byte*)this + 6314);
}
void ABP_PlayerCharacter_C::M_SetUpBool(const bool& value) {
	Write((byte*)this + 6314, value);
}
// Member Getter and Setter of DownBool
// Declaration: bool DownBool
bool ABP_PlayerCharacter_C::M_GetDownBool() const {
	return Read<bool>((byte*)this + 6315);
}
bool* ABP_PlayerCharacter_C::M_PtrGetDownBool() {
	return reinterpret_cast<bool*>((byte*)this + 6315);
}
void ABP_PlayerCharacter_C::M_SetDownBool(const bool& value) {
	Write((byte*)this + 6315, value);
}
// Member Getter and Setter of RightBool
// Declaration: bool RightBool
bool ABP_PlayerCharacter_C::M_GetRightBool() const {
	return Read<bool>((byte*)this + 6316);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRightBool() {
	return reinterpret_cast<bool*>((byte*)this + 6316);
}
void ABP_PlayerCharacter_C::M_SetRightBool(const bool& value) {
	Write((byte*)this + 6316, value);
}
// Member Getter and Setter of LeftBool
// Declaration: bool LeftBool
bool ABP_PlayerCharacter_C::M_GetLeftBool() const {
	return Read<bool>((byte*)this + 6317);
}
bool* ABP_PlayerCharacter_C::M_PtrGetLeftBool() {
	return reinterpret_cast<bool*>((byte*)this + 6317);
}
void ABP_PlayerCharacter_C::M_SetLeftBool(const bool& value) {
	Write((byte*)this + 6317, value);
}
// Member Getter and Setter of NextBool
// Declaration: bool NextBool
bool ABP_PlayerCharacter_C::M_GetNextBool() const {
	return Read<bool>((byte*)this + 6318);
}
bool* ABP_PlayerCharacter_C::M_PtrGetNextBool() {
	return reinterpret_cast<bool*>((byte*)this + 6318);
}
void ABP_PlayerCharacter_C::M_SetNextBool(const bool& value) {
	Write((byte*)this + 6318, value);
}
// Member Getter and Setter of PreviousBool
// Declaration: bool PreviousBool
bool ABP_PlayerCharacter_C::M_GetPreviousBool() const {
	return Read<bool>((byte*)this + 6319);
}
bool* ABP_PlayerCharacter_C::M_PtrGetPreviousBool() {
	return reinterpret_cast<bool*>((byte*)this + 6319);
}
void ABP_PlayerCharacter_C::M_SetPreviousBool(const bool& value) {
	Write((byte*)this + 6319, value);
}
// Member Getter and Setter of tmp_BuildingTutorialBlockade
// Declaration: bool tmp_BuildingTutorialBlockade
bool ABP_PlayerCharacter_C::M_Gettmp_BuildingTutorialBlockade() const {
	return Read<bool>((byte*)this + 6320);
}
bool* ABP_PlayerCharacter_C::M_PtrGettmp_BuildingTutorialBlockade() {
	return reinterpret_cast<bool*>((byte*)this + 6320);
}
void ABP_PlayerCharacter_C::M_Settmp_BuildingTutorialBlockade(const bool& value) {
	Write((byte*)this + 6320, value);
}
// Member Getter and Setter of HitComponent
// Declaration: class UPrimitiveComponent* HitComponent
class UPrimitiveComponent* ABP_PlayerCharacter_C::M_GetHitComponent() const {
	return Read<class UPrimitiveComponent*>((byte*)this + 6328);
}
class UPrimitiveComponent** ABP_PlayerCharacter_C::M_PtrGetHitComponent() {
	return reinterpret_cast<class UPrimitiveComponent**>((byte*)this + 6328);
}
void ABP_PlayerCharacter_C::M_SetHitComponent(const class UPrimitiveComponent*& value) {
	Write((byte*)this + 6328, value);
}
// Member Getter and Setter of LastHitComponent
// Declaration: class UPrimitiveComponent* LastHitComponent
class UPrimitiveComponent* ABP_PlayerCharacter_C::M_GetLastHitComponent() const {
	return Read<class UPrimitiveComponent*>((byte*)this + 6336);
}
class UPrimitiveComponent** ABP_PlayerCharacter_C::M_PtrGetLastHitComponent() {
	return reinterpret_cast<class UPrimitiveComponent**>((byte*)this + 6336);
}
void ABP_PlayerCharacter_C::M_SetLastHitComponent(const class UPrimitiveComponent*& value) {
	Write((byte*)this + 6336, value);
}
// Member Getter and Setter of Tmp_HP
// Declaration: float Tmp_HP
float ABP_PlayerCharacter_C::M_GetTmp_HP() const {
	return Read<float>((byte*)this + 6344);
}
float* ABP_PlayerCharacter_C::M_PtrGetTmp_HP() {
	return reinterpret_cast<float*>((byte*)this + 6344);
}
void ABP_PlayerCharacter_C::M_SetTmp_HP(const float& value) {
	Write((byte*)this + 6344, value);
}
// Member Getter and Setter of BlockModificationMenuMovement
// Declaration: bool BlockModificationMenuMovement
bool ABP_PlayerCharacter_C::M_GetBlockModificationMenuMovement() const {
	return Read<bool>((byte*)this + 6348);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBlockModificationMenuMovement() {
	return reinterpret_cast<bool*>((byte*)this + 6348);
}
void ABP_PlayerCharacter_C::M_SetBlockModificationMenuMovement(const bool& value) {
	Write((byte*)this + 6348, value);
}
// Member Getter and Setter of Tmp_Max_HP
// Declaration: float Tmp_Max_HP
float ABP_PlayerCharacter_C::M_GetTmp_Max_HP() const {
	return Read<float>((byte*)this + 6352);
}
float* ABP_PlayerCharacter_C::M_PtrGetTmp_Max_HP() {
	return reinterpret_cast<float*>((byte*)this + 6352);
}
void ABP_PlayerCharacter_C::M_SetTmp_Max_HP(const float& value) {
	Write((byte*)this + 6352, value);
}
// Member Getter and Setter of OnStartHitReference
// Declaration: struct FHitResult OnStartHitReference
struct FHitResult ABP_PlayerCharacter_C::M_GetOnStartHitReference() const {
	return Read<struct FHitResult>((byte*)this + 6356);
}
struct FHitResult* ABP_PlayerCharacter_C::M_PtrGetOnStartHitReference() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 6356);
}
void ABP_PlayerCharacter_C::M_SetOnStartHitReference(const struct FHitResult& value) {
	Write((byte*)this + 6356, value);
}
// Member Getter and Setter of TimerPickup
// Declaration: bool TimerPickup
bool ABP_PlayerCharacter_C::M_GetTimerPickup() const {
	return Read<bool>((byte*)this + 6492);
}
bool* ABP_PlayerCharacter_C::M_PtrGetTimerPickup() {
	return reinterpret_cast<bool*>((byte*)this + 6492);
}
void ABP_PlayerCharacter_C::M_SetTimerPickup(const bool& value) {
	Write((byte*)this + 6492, value);
}
// Member Getter and Setter of SpawnedHeldItem
// Declaration: TAssetPtr<class FSpawnedHeldItem__DelegateSignature> SpawnedHeldItem
TAssetPtr<class FSpawnedHeldItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetSpawnedHeldItem() const {
	return Read<TAssetPtr<class FSpawnedHeldItem__DelegateSignature>>((byte*)this + 6496);
}
TAssetPtr<class FSpawnedHeldItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetSpawnedHeldItem() {
	return reinterpret_cast<TAssetPtr<class FSpawnedHeldItem__DelegateSignature>*>((byte*)this + 6496);
}
void ABP_PlayerCharacter_C::M_SetSpawnedHeldItem(const TAssetPtr<class FSpawnedHeldItem__DelegateSignature>& value) {
	Write((byte*)this + 6496, value);
}
// Member Getter and Setter of DespawnedHeldItem
// Declaration: TAssetPtr<class FDespawnedHeldItem__DelegateSignature> DespawnedHeldItem
TAssetPtr<class FDespawnedHeldItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetDespawnedHeldItem() const {
	return Read<TAssetPtr<class FDespawnedHeldItem__DelegateSignature>>((byte*)this + 6512);
}
TAssetPtr<class FDespawnedHeldItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetDespawnedHeldItem() {
	return reinterpret_cast<TAssetPtr<class FDespawnedHeldItem__DelegateSignature>*>((byte*)this + 6512);
}
void ABP_PlayerCharacter_C::M_SetDespawnedHeldItem(const TAssetPtr<class FDespawnedHeldItem__DelegateSignature>& value) {
	Write((byte*)this + 6512, value);
}
// Member Getter and Setter of SpawnedOffHandItem
// Declaration: TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> SpawnedOffHandItem
TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetSpawnedOffHandItem() const {
	return Read<TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>>((byte*)this + 6528);
}
TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetSpawnedOffHandItem() {
	return reinterpret_cast<TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>*>((byte*)this + 6528);
}
void ABP_PlayerCharacter_C::M_SetSpawnedOffHandItem(const TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>& value) {
	Write((byte*)this + 6528, value);
}
// Member Getter and Setter of DespawnedOffHandItem
// Declaration: TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> DespawnedOffHandItem
TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetDespawnedOffHandItem() const {
	return Read<TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>>((byte*)this + 6544);
}
TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetDespawnedOffHandItem() {
	return reinterpret_cast<TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>*>((byte*)this + 6544);
}
void ABP_PlayerCharacter_C::M_SetDespawnedOffHandItem(const TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>& value) {
	Write((byte*)this + 6544, value);
}
// Member Getter and Setter of SleepMenuOpen
// Declaration: bool SleepMenuOpen
bool ABP_PlayerCharacter_C::M_GetSleepMenuOpen() const {
	return Read<bool>((byte*)this + 6560);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSleepMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 6560);
}
void ABP_PlayerCharacter_C::M_SetSleepMenuOpen(const bool& value) {
	Write((byte*)this + 6560, value);
}
// Member Getter and Setter of Tmp_Ownership
// Declaration: TEnumAsByte<E_Ownership> Tmp_Ownership
TEnumAsByte<E_Ownership> ABP_PlayerCharacter_C::M_GetTmp_Ownership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 6561);
}
TEnumAsByte<E_Ownership>* ABP_PlayerCharacter_C::M_PtrGetTmp_Ownership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 6561);
}
void ABP_PlayerCharacter_C::M_SetTmp_Ownership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 6561, value);
}
// Member Getter and Setter of InteractionHitTimer
// Declaration: struct FTimerHandle InteractionHitTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractionHitTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 6568);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractionHitTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6568);
}
void ABP_PlayerCharacter_C::M_SetInteractionHitTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 6568, value);
}
// Member Getter and Setter of CurrentlyCrafting
// Declaration: TArray<struct FST_ItemResource> CurrentlyCrafting
TArray<struct FST_ItemResource> ABP_PlayerCharacter_C::M_GetCurrentlyCrafting() const {
	return Read<TArray<struct FST_ItemResource>>((byte*)this + 6576);
}
TArray<struct FST_ItemResource>* ABP_PlayerCharacter_C::M_PtrGetCurrentlyCrafting() {
	return reinterpret_cast<TArray<struct FST_ItemResource>*>((byte*)this + 6576);
}
void ABP_PlayerCharacter_C::M_SetCurrentlyCrafting(const TArray<struct FST_ItemResource>& value) {
	Write((byte*)this + 6576, value);
}
// Member Getter and Setter of InteractionKeyDown
// Declaration: bool InteractionKeyDown
bool ABP_PlayerCharacter_C::M_GetInteractionKeyDown() const {
	return Read<bool>((byte*)this + 6592);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInteractionKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 6592);
}
void ABP_PlayerCharacter_C::M_SetInteractionKeyDown(const bool& value) {
	Write((byte*)this + 6592, value);
}
// Member Getter and Setter of LastHitLocation
// Declaration: struct FVector LastHitLocation
struct FVector ABP_PlayerCharacter_C::M_GetLastHitLocation() const {
	return Read<struct FVector>((byte*)this + 6596);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetLastHitLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 6596);
}
void ABP_PlayerCharacter_C::M_SetLastHitLocation(const struct FVector& value) {
	Write((byte*)this + 6596, value);
}
// Member Getter and Setter of TakingOutToolType
// Declaration: TEnumAsByte<E_Tools> TakingOutToolType
TEnumAsByte<E_Tools> ABP_PlayerCharacter_C::M_GetTakingOutToolType() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 6608);
}
TEnumAsByte<E_Tools>* ABP_PlayerCharacter_C::M_PtrGetTakingOutToolType() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 6608);
}
void ABP_PlayerCharacter_C::M_SetTakingOutToolType(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 6608, value);
}
// Member Getter and Setter of EquipTorchHandle
// Declaration: struct FTimerHandle EquipTorchHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetEquipTorchHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6616);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetEquipTorchHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6616);
}
void ABP_PlayerCharacter_C::M_SetEquipTorchHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6616, value);
}
// Member Getter and Setter of EquipToolHandle
// Declaration: struct FTimerHandle EquipToolHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetEquipToolHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6624);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetEquipToolHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6624);
}
void ABP_PlayerCharacter_C::M_SetEquipToolHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6624, value);
}
// Member Getter and Setter of UnequipToolHandle
// Declaration: struct FTimerHandle UnequipToolHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetUnequipToolHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6632);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetUnequipToolHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6632);
}
void ABP_PlayerCharacter_C::M_SetUnequipToolHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6632, value);
}
// Member Getter and Setter of LastHitActorInteractionDistance
// Declaration: float LastHitActorInteractionDistance
float ABP_PlayerCharacter_C::M_GetLastHitActorInteractionDistance() const {
	return Read<float>((byte*)this + 6640);
}
float* ABP_PlayerCharacter_C::M_PtrGetLastHitActorInteractionDistance() {
	return reinterpret_cast<float*>((byte*)this + 6640);
}
void ABP_PlayerCharacter_C::M_SetLastHitActorInteractionDistance(const float& value) {
	Write((byte*)this + 6640, value);
}
// Member Getter and Setter of HolsteredToolType
// Declaration: TEnumAsByte<E_Tools> HolsteredToolType
TEnumAsByte<E_Tools> ABP_PlayerCharacter_C::M_GetHolsteredToolType() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 6644);
}
TEnumAsByte<E_Tools>* ABP_PlayerCharacter_C::M_PtrGetHolsteredToolType() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 6644);
}
void ABP_PlayerCharacter_C::M_SetHolsteredToolType(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 6644, value);
}
// Member Getter and Setter of SelectedQuickSlotID
// Declaration: int32_t SelectedQuickSlotID
int32_t ABP_PlayerCharacter_C::M_GetSelectedQuickSlotID() const {
	return Read<int32_t>((byte*)this + 6648);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6648);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotID(const int32_t& value) {
	Write((byte*)this + 6648, value);
}
// Member Getter and Setter of SelectedQuickSlotItem
// Declaration: struct FST_ItemDetails SelectedQuickSlotItem
struct FST_ItemDetails ABP_PlayerCharacter_C::M_GetSelectedQuickSlotItem() const {
	return Read<struct FST_ItemDetails>((byte*)this + 6656);
}
struct FST_ItemDetails* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotItem() {
	return reinterpret_cast<struct FST_ItemDetails*>((byte*)this + 6656);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotItem(const struct FST_ItemDetails& value) {
	Write((byte*)this + 6656, value);
}
// Member Getter and Setter of SelectedQuickSlotDrawWeapon
// Declaration: bool SelectedQuickSlotDrawWeapon
bool ABP_PlayerCharacter_C::M_GetSelectedQuickSlotDrawWeapon() const {
	return Read<bool>((byte*)this + 7504);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotDrawWeapon() {
	return reinterpret_cast<bool*>((byte*)this + 7504);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotDrawWeapon(const bool& value) {
	Write((byte*)this + 7504, value);
}
// Member Getter and Setter of EquippedToolsForInteraction
// Declaration: bool EquippedToolsForInteraction
bool ABP_PlayerCharacter_C::M_GetEquippedToolsForInteraction() const {
	return Read<bool>((byte*)this + 7505);
}
bool* ABP_PlayerCharacter_C::M_PtrGetEquippedToolsForInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 7505);
}
void ABP_PlayerCharacter_C::M_SetEquippedToolsForInteraction(const bool& value) {
	Write((byte*)this + 7505, value);
}
// Member Getter and Setter of StabilizedRotation
// Declaration: struct FRotator StabilizedRotation
struct FRotator ABP_PlayerCharacter_C::M_GetStabilizedRotation() const {
	return Read<struct FRotator>((byte*)this + 7508);
}
struct FRotator* ABP_PlayerCharacter_C::M_PtrGetStabilizedRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 7508);
}
void ABP_PlayerCharacter_C::M_SetStabilizedRotation(const struct FRotator& value) {
	Write((byte*)this + 7508, value);
}
// Member Getter and Setter of PreviousControllerRotation
// Declaration: struct FRotator PreviousControllerRotation
struct FRotator ABP_PlayerCharacter_C::M_GetPreviousControllerRotation() const {
	return Read<struct FRotator>((byte*)this + 7520);
}
struct FRotator* ABP_PlayerCharacter_C::M_PtrGetPreviousControllerRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 7520);
}
void ABP_PlayerCharacter_C::M_SetPreviousControllerRotation(const struct FRotator& value) {
	Write((byte*)this + 7520, value);
}
// Member Getter and Setter of PreviousTargetRotation
// Declaration: struct FRotator PreviousTargetRotation
struct FRotator ABP_PlayerCharacter_C::M_GetPreviousTargetRotation() const {
	return Read<struct FRotator>((byte*)this + 7532);
}
struct FRotator* ABP_PlayerCharacter_C::M_PtrGetPreviousTargetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 7532);
}
void ABP_PlayerCharacter_C::M_SetPreviousTargetRotation(const struct FRotator& value) {
	Write((byte*)this + 7532, value);
}
// Member Getter and Setter of Heir_Temp
// Declaration: class ABP_BaseCharacter_C* Heir_Temp
class ABP_BaseCharacter_C* ABP_PlayerCharacter_C::M_GetHeir_Temp() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 7544);
}
class ABP_BaseCharacter_C** ABP_PlayerCharacter_C::M_PtrGetHeir_Temp() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 7544);
}
void ABP_PlayerCharacter_C::M_SetHeir_Temp(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 7544, value);
}
// Member Getter and Setter of Headbobbing
// Declaration: bool Headbobbing
bool ABP_PlayerCharacter_C::M_GetHeadbobbing() const {
	return Read<bool>((byte*)this + 7552);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 7552);
}
void ABP_PlayerCharacter_C::M_SetHeadbobbing(const bool& value) {
	Write((byte*)this + 7552, value);
}
// Member Getter and Setter of TimedInteractionHandle
// Declaration: struct FTimerHandle TimedInteractionHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetTimedInteractionHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 7560);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetTimedInteractionHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7560);
}
void ABP_PlayerCharacter_C::M_SetTimedInteractionHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 7560, value);
}
// Member Getter and Setter of PressedKey
// Declaration: struct FKey PressedKey
struct FKey ABP_PlayerCharacter_C::M_GetPressedKey() const {
	return Read<struct FKey>((byte*)this + 7568);
}
struct FKey* ABP_PlayerCharacter_C::M_PtrGetPressedKey() {
	return reinterpret_cast<struct FKey*>((byte*)this + 7568);
}
void ABP_PlayerCharacter_C::M_SetPressedKey(const struct FKey& value) {
	Write((byte*)this + 7568, value);
}
// Member Getter and Setter of CameraTargets
// Declaration: struct FST_Camera_Targets CameraTargets
struct FST_Camera_Targets ABP_PlayerCharacter_C::M_GetCameraTargets() const {
	return Read<struct FST_Camera_Targets>((byte*)this + 7592);
}
struct FST_Camera_Targets* ABP_PlayerCharacter_C::M_PtrGetCameraTargets() {
	return reinterpret_cast<struct FST_Camera_Targets*>((byte*)this + 7592);
}
void ABP_PlayerCharacter_C::M_SetCameraTargets(const struct FST_Camera_Targets& value) {
	Write((byte*)this + 7592, value);
}
// Member Getter and Setter of FirstPersonCameraSocket
// Declaration: struct FName FirstPersonCameraSocket
struct FName ABP_PlayerCharacter_C::M_GetFirstPersonCameraSocket() const {
	return Read<struct FName>((byte*)this + 7812);
}
struct FName* ABP_PlayerCharacter_C::M_PtrGetFirstPersonCameraSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 7812);
}
void ABP_PlayerCharacter_C::M_SetFirstPersonCameraSocket(const struct FName& value) {
	Write((byte*)this + 7812, value);
}
// Member Getter and Setter of CurrentCameraSettings
// Declaration: struct FST_CameraSettings CurrentCameraSettings
struct FST_CameraSettings ABP_PlayerCharacter_C::M_GetCurrentCameraSettings() const {
	return Read<struct FST_CameraSettings>((byte*)this + 7820);
}
struct FST_CameraSettings* ABP_PlayerCharacter_C::M_PtrGetCurrentCameraSettings() {
	return reinterpret_cast<struct FST_CameraSettings*>((byte*)this + 7820);
}
void ABP_PlayerCharacter_C::M_SetCurrentCameraSettings(const struct FST_CameraSettings& value) {
	Write((byte*)this + 7820, value);
}
// Member Getter and Setter of CameraLerpCurve
// Declaration: class UCurveFloat* CameraLerpCurve
class UCurveFloat* ABP_PlayerCharacter_C::M_GetCameraLerpCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 7840);
}
class UCurveFloat** ABP_PlayerCharacter_C::M_PtrGetCameraLerpCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 7840);
}
void ABP_PlayerCharacter_C::M_SetCameraLerpCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 7840, value);
}
// Member Getter and Setter of RightShoulder
// Declaration: bool RightShoulder
bool ABP_PlayerCharacter_C::M_GetRightShoulder() const {
	return Read<bool>((byte*)this + 7848);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRightShoulder() {
	return reinterpret_cast<bool*>((byte*)this + 7848);
}
void ABP_PlayerCharacter_C::M_SetRightShoulder(const bool& value) {
	Write((byte*)this + 7848, value);
}
// Member Getter and Setter of TimerHitActor
// Declaration: class AActor* TimerHitActor
class AActor* ABP_PlayerCharacter_C::M_GetTimerHitActor() const {
	return Read<class AActor*>((byte*)this + 7856);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetTimerHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 7856);
}
void ABP_PlayerCharacter_C::M_SetTimerHitActor(const class AActor*& value) {
	Write((byte*)this + 7856, value);
}
// Member Getter and Setter of ForwardAxisInput
// Declaration: float ForwardAxisInput
float ABP_PlayerCharacter_C::M_GetForwardAxisInput() const {
	return Read<float>((byte*)this + 7864);
}
float* ABP_PlayerCharacter_C::M_PtrGetForwardAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7864);
}
void ABP_PlayerCharacter_C::M_SetForwardAxisInput(const float& value) {
	Write((byte*)this + 7864, value);
}
// Member Getter and Setter of RightAxisInput
// Declaration: float RightAxisInput
float ABP_PlayerCharacter_C::M_GetRightAxisInput() const {
	return Read<float>((byte*)this + 7868);
}
float* ABP_PlayerCharacter_C::M_PtrGetRightAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7868);
}
void ABP_PlayerCharacter_C::M_SetRightAxisInput(const float& value) {
	Write((byte*)this + 7868, value);
}
// Member Getter and Setter of Interacted_Furniture
// Declaration: class ABP_MasterFurniture_C* Interacted_Furniture
class ABP_MasterFurniture_C* ABP_PlayerCharacter_C::M_GetInteracted_Furniture() const {
	return Read<class ABP_MasterFurniture_C*>((byte*)this + 7872);
}
class ABP_MasterFurniture_C** ABP_PlayerCharacter_C::M_PtrGetInteracted_Furniture() {
	return reinterpret_cast<class ABP_MasterFurniture_C**>((byte*)this + 7872);
}
void ABP_PlayerCharacter_C::M_SetInteracted_Furniture(const class ABP_MasterFurniture_C*& value) {
	Write((byte*)this + 7872, value);
}
// Member Getter and Setter of MountCameraRotation
// Declaration: struct FRotator MountCameraRotation
struct FRotator ABP_PlayerCharacter_C::M_GetMountCameraRotation() const {
	return Read<struct FRotator>((byte*)this + 7880);
}
struct FRotator* ABP_PlayerCharacter_C::M_PtrGetMountCameraRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 7880);
}
void ABP_PlayerCharacter_C::M_SetMountCameraRotation(const struct FRotator& value) {
	Write((byte*)this + 7880, value);
}
// Member Getter and Setter of CameraShakes
// Declaration: bool CameraShakes
bool ABP_PlayerCharacter_C::M_GetCameraShakes() const {
	return Read<bool>((byte*)this + 7892);
}
bool* ABP_PlayerCharacter_C::M_PtrGetCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 7892);
}
void ABP_PlayerCharacter_C::M_SetCameraShakes(const bool& value) {
	Write((byte*)this + 7892, value);
}
// Member Getter and Setter of Breathing
// Declaration: bool Breathing
bool ABP_PlayerCharacter_C::M_GetBreathing() const {
	return Read<bool>((byte*)this + 7893);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 7893);
}
void ABP_PlayerCharacter_C::M_SetBreathing(const bool& value) {
	Write((byte*)this + 7893, value);
}
// Member Getter and Setter of isMounting
// Declaration: bool isMounting
bool ABP_PlayerCharacter_C::M_GetisMounting() const {
	return Read<bool>((byte*)this + 7894);
}
bool* ABP_PlayerCharacter_C::M_PtrGetisMounting() {
	return reinterpret_cast<bool*>((byte*)this + 7894);
}
void ABP_PlayerCharacter_C::M_SetisMounting(const bool& value) {
	Write((byte*)this + 7894, value);
}
// Member Getter and Setter of ThirdPersonMinDistance
// Declaration: float ThirdPersonMinDistance
float ABP_PlayerCharacter_C::M_GetThirdPersonMinDistance() const {
	return Read<float>((byte*)this + 7896);
}
float* ABP_PlayerCharacter_C::M_PtrGetThirdPersonMinDistance() {
	return reinterpret_cast<float*>((byte*)this + 7896);
}
void ABP_PlayerCharacter_C::M_SetThirdPersonMinDistance(const float& value) {
	Write((byte*)this + 7896, value);
}
// Member Getter and Setter of ThirdPersonMaxDistance
// Declaration: float ThirdPersonMaxDistance
float ABP_PlayerCharacter_C::M_GetThirdPersonMaxDistance() const {
	return Read<float>((byte*)this + 7900);
}
float* ABP_PlayerCharacter_C::M_PtrGetThirdPersonMaxDistance() {
	return reinterpret_cast<float*>((byte*)this + 7900);
}
void ABP_PlayerCharacter_C::M_SetThirdPersonMaxDistance(const float& value) {
	Write((byte*)this + 7900, value);
}
// Member Getter and Setter of TP_CameraDistance_Temp
// Declaration: float TP_CameraDistance_Temp
float ABP_PlayerCharacter_C::M_GetTP_CameraDistance_Temp() const {
	return Read<float>((byte*)this + 7904);
}
float* ABP_PlayerCharacter_C::M_PtrGetTP_CameraDistance_Temp() {
	return reinterpret_cast<float*>((byte*)this + 7904);
}
void ABP_PlayerCharacter_C::M_SetTP_CameraDistance_Temp(const float& value) {
	Write((byte*)this + 7904, value);
}
// Member Getter and Setter of PreviousViewmode
// Declaration: TEnumAsByte<E_ViewMode> PreviousViewmode
TEnumAsByte<E_ViewMode> ABP_PlayerCharacter_C::M_GetPreviousViewmode() const {
	return Read<TEnumAsByte<E_ViewMode>>((byte*)this + 7908);
}
TEnumAsByte<E_ViewMode>* ABP_PlayerCharacter_C::M_PtrGetPreviousViewmode() {
	return reinterpret_cast<TEnumAsByte<E_ViewMode>*>((byte*)this + 7908);
}
void ABP_PlayerCharacter_C::M_SetPreviousViewmode(const TEnumAsByte<E_ViewMode>& value) {
	Write((byte*)this + 7908, value);
}
// Member Getter and Setter of ZoomCounter
// Declaration: int32_t ZoomCounter
int32_t ABP_PlayerCharacter_C::M_GetZoomCounter() const {
	return Read<int32_t>((byte*)this + 7912);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetZoomCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 7912);
}
void ABP_PlayerCharacter_C::M_SetZoomCounter(const int32_t& value) {
	Write((byte*)this + 7912, value);
}
// Member Getter and Setter of InteractedSlotIndex
// Declaration: int32_t InteractedSlotIndex
int32_t ABP_PlayerCharacter_C::M_GetInteractedSlotIndex() const {
	return Read<int32_t>((byte*)this + 7916);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetInteractedSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 7916);
}
void ABP_PlayerCharacter_C::M_SetInteractedSlotIndex(const int32_t& value) {
	Write((byte*)this + 7916, value);
}
// Member Getter and Setter of RotatingObjectMode
// Declaration: bool RotatingObjectMode
bool ABP_PlayerCharacter_C::M_GetRotatingObjectMode() const {
	return Read<bool>((byte*)this + 7920);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRotatingObjectMode() {
	return reinterpret_cast<bool*>((byte*)this + 7920);
}
void ABP_PlayerCharacter_C::M_SetRotatingObjectMode(const bool& value) {
	Write((byte*)this + 7920, value);
}
// Member Getter and Setter of FlowerpotMenuOpen
// Declaration: bool FlowerpotMenuOpen
bool ABP_PlayerCharacter_C::M_GetFlowerpotMenuOpen() const {
	return Read<bool>((byte*)this + 7921);
}
bool* ABP_PlayerCharacter_C::M_PtrGetFlowerpotMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7921);
}
void ABP_PlayerCharacter_C::M_SetFlowerpotMenuOpen(const bool& value) {
	Write((byte*)this + 7921, value);
}
// Member Getter and Setter of DecorMenuOpen
// Declaration: bool DecorMenuOpen
bool ABP_PlayerCharacter_C::M_GetDecorMenuOpen() const {
	return Read<bool>((byte*)this + 7922);
}
bool* ABP_PlayerCharacter_C::M_PtrGetDecorMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7922);
}
void ABP_PlayerCharacter_C::M_SetDecorMenuOpen(const bool& value) {
	Write((byte*)this + 7922, value);
}
// Member Getter and Setter of WindowMenuOpen
// Declaration: bool WindowMenuOpen
bool ABP_PlayerCharacter_C::M_GetWindowMenuOpen() const {
	return Read<bool>((byte*)this + 7923);
}
bool* ABP_PlayerCharacter_C::M_PtrGetWindowMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7923);
}
void ABP_PlayerCharacter_C::M_SetWindowMenuOpen(const bool& value) {
	Write((byte*)this + 7923, value);
}
// Member Getter and Setter of InteractWithObject
// Declaration: TAssetPtr<class FInteractWithObject__DelegateSignature> InteractWithObject
TAssetPtr<class FInteractWithObject__DelegateSignature> ABP_PlayerCharacter_C::M_GetInteractWithObject() const {
	return Read<TAssetPtr<class FInteractWithObject__DelegateSignature>>((byte*)this + 7928);
}
TAssetPtr<class FInteractWithObject__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetInteractWithObject() {
	return reinterpret_cast<TAssetPtr<class FInteractWithObject__DelegateSignature>*>((byte*)this + 7928);
}
void ABP_PlayerCharacter_C::M_SetInteractWithObject(const TAssetPtr<class FInteractWithObject__DelegateSignature>& value) {
	Write((byte*)this + 7928, value);
}
// Member Getter and Setter of InteractionDetect_Task
// Declaration: class UTask_InteractionDetect_C* InteractionDetect_Task
class UTask_InteractionDetect_C* ABP_PlayerCharacter_C::M_GetInteractionDetect_Task() const {
	return Read<class UTask_InteractionDetect_C*>((byte*)this + 7944);
}
class UTask_InteractionDetect_C** ABP_PlayerCharacter_C::M_PtrGetInteractionDetect_Task() {
	return reinterpret_cast<class UTask_InteractionDetect_C**>((byte*)this + 7944);
}
void ABP_PlayerCharacter_C::M_SetInteractionDetect_Task(const class UTask_InteractionDetect_C*& value) {
	Write((byte*)this + 7944, value);
}
// Member Getter and Setter of ShouldCancelInteractTimer
// Declaration: bool ShouldCancelInteractTimer
bool ABP_PlayerCharacter_C::M_GetShouldCancelInteractTimer() const {
	return Read<bool>((byte*)this + 7952);
}
bool* ABP_PlayerCharacter_C::M_PtrGetShouldCancelInteractTimer() {
	return reinterpret_cast<bool*>((byte*)this + 7952);
}
void ABP_PlayerCharacter_C::M_SetShouldCancelInteractTimer(const bool& value) {
	Write((byte*)this + 7952, value);
}
// Member Getter and Setter of InteractionDetect_Mutex
// Declaration: class UMultiTaskMutex* InteractionDetect_Mutex
class UMultiTaskMutex* ABP_PlayerCharacter_C::M_GetInteractionDetect_Mutex() const {
	return Read<class UMultiTaskMutex*>((byte*)this + 7960);
}
class UMultiTaskMutex** ABP_PlayerCharacter_C::M_PtrGetInteractionDetect_Mutex() {
	return reinterpret_cast<class UMultiTaskMutex**>((byte*)this + 7960);
}
void ABP_PlayerCharacter_C::M_SetInteractionDetect_Mutex(const class UMultiTaskMutex*& value) {
	Write((byte*)this + 7960, value);
}
// Member Getter and Setter of PlayerThreadPool
// Declaration: class UMultiTaskThreadPool* PlayerThreadPool
class UMultiTaskThreadPool* ABP_PlayerCharacter_C::M_GetPlayerThreadPool() const {
	return Read<class UMultiTaskThreadPool*>((byte*)this + 7968);
}
class UMultiTaskThreadPool** ABP_PlayerCharacter_C::M_PtrGetPlayerThreadPool() {
	return reinterpret_cast<class UMultiTaskThreadPool**>((byte*)this + 7968);
}
void ABP_PlayerCharacter_C::M_SetPlayerThreadPool(const class UMultiTaskThreadPool*& value) {
	Write((byte*)this + 7968, value);
}
// Member Getter and Setter of IsBeingFollowed
// Declaration: bool IsBeingFollowed
bool ABP_PlayerCharacter_C::M_GetIsBeingFollowed() const {
	return Read<bool>((byte*)this + 7976);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsBeingFollowed() {
	return reinterpret_cast<bool*>((byte*)this + 7976);
}
void ABP_PlayerCharacter_C::M_SetIsBeingFollowed(const bool& value) {
	Write((byte*)this + 7976, value);
}
// Member Getter and Setter of FoliageInteractionTimer
// Declaration: struct FTimerHandle FoliageInteractionTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetFoliageInteractionTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 7984);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetFoliageInteractionTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7984);
}
void ABP_PlayerCharacter_C::M_SetFoliageInteractionTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 7984, value);
}
// Member Getter and Setter of Damage_Voice
// Declaration: class UAudioComponent* Damage_Voice
class UAudioComponent* ABP_PlayerCharacter_C::M_GetDamage_Voice() const {
	return Read<class UAudioComponent*>((byte*)this + 7992);
}
class UAudioComponent** ABP_PlayerCharacter_C::M_PtrGetDamage_Voice() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 7992);
}
void ABP_PlayerCharacter_C::M_SetDamage_Voice(const class UAudioComponent*& value) {
	Write((byte*)this + 7992, value);
}
// Member Getter and Setter of InitialCrouchingSpeed
// Declaration: float InitialCrouchingSpeed
float ABP_PlayerCharacter_C::M_GetInitialCrouchingSpeed() const {
	return Read<float>((byte*)this + 8000);
}
float* ABP_PlayerCharacter_C::M_PtrGetInitialCrouchingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 8000);
}
void ABP_PlayerCharacter_C::M_SetInitialCrouchingSpeed(const float& value) {
	Write((byte*)this + 8000, value);
}
// Member Getter and Setter of InteractionRepeatTimer
// Declaration: struct FTimerHandle InteractionRepeatTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractionRepeatTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 8008);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractionRepeatTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 8008);
}
void ABP_PlayerCharacter_C::M_SetInteractionRepeatTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 8008, value);
}
// Member Getter and Setter of SkipTimer
// Declaration: bool SkipTimer
bool ABP_PlayerCharacter_C::M_GetSkipTimer() const {
	return Read<bool>((byte*)this + 8016);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSkipTimer() {
	return reinterpret_cast<bool*>((byte*)this + 8016);
}
void ABP_PlayerCharacter_C::M_SetSkipTimer(const bool& value) {
	Write((byte*)this + 8016, value);
}
// Member Getter and Setter of RagdollCounter
// Declaration: int32_t RagdollCounter
int32_t ABP_PlayerCharacter_C::M_GetRagdollCounter() const {
	return Read<int32_t>((byte*)this + 8020);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetRagdollCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 8020);
}
void ABP_PlayerCharacter_C::M_SetRagdollCounter(const int32_t& value) {
	Write((byte*)this + 8020, value);
}
// Member Getter and Setter of RagdollStoppedCounter
// Declaration: int32_t RagdollStoppedCounter
int32_t ABP_PlayerCharacter_C::M_GetRagdollStoppedCounter() const {
	return Read<int32_t>((byte*)this + 8024);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetRagdollStoppedCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 8024);
}
void ABP_PlayerCharacter_C::M_SetRagdollStoppedCounter(const int32_t& value) {
	Write((byte*)this + 8024, value);
}
// Member Getter and Setter of WasMountedBeforeRagdoll
// Declaration: bool WasMountedBeforeRagdoll
bool ABP_PlayerCharacter_C::M_GetWasMountedBeforeRagdoll() const {
	return Read<bool>((byte*)this + 8028);
}
bool* ABP_PlayerCharacter_C::M_PtrGetWasMountedBeforeRagdoll() {
	return reinterpret_cast<bool*>((byte*)this + 8028);
}
void ABP_PlayerCharacter_C::M_SetWasMountedBeforeRagdoll(const bool& value) {
	Write((byte*)this + 8028, value);
}
// Member Getter and Setter of MountVelocityBeforeRagdoll
// Declaration: struct FVector MountVelocityBeforeRagdoll
struct FVector ABP_PlayerCharacter_C::M_GetMountVelocityBeforeRagdoll() const {
	return Read<struct FVector>((byte*)this + 8032);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetMountVelocityBeforeRagdoll() {
	return reinterpret_cast<struct FVector*>((byte*)this + 8032);
}
void ABP_PlayerCharacter_C::M_SetMountVelocityBeforeRagdoll(const struct FVector& value) {
	Write((byte*)this + 8032, value);
}
// Member Getter and Setter of MountedLocationBeforeRagdoll
// Declaration: struct FVector MountedLocationBeforeRagdoll
struct FVector ABP_PlayerCharacter_C::M_GetMountedLocationBeforeRagdoll() const {
	return Read<struct FVector>((byte*)this + 8044);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetMountedLocationBeforeRagdoll() {
	return reinterpret_cast<struct FVector*>((byte*)this + 8044);
}
void ABP_PlayerCharacter_C::M_SetMountedLocationBeforeRagdoll(const struct FVector& value) {
	Write((byte*)this + 8044, value);
}
// Member Getter and Setter of AimAssist_Sensitivity_X
// Declaration: float AimAssist_Sensitivity_X
float ABP_PlayerCharacter_C::M_GetAimAssist_Sensitivity_X() const {
	return Read<float>((byte*)this + 8056);
}
float* ABP_PlayerCharacter_C::M_PtrGetAimAssist_Sensitivity_X() {
	return reinterpret_cast<float*>((byte*)this + 8056);
}
void ABP_PlayerCharacter_C::M_SetAimAssist_Sensitivity_X(const float& value) {
	Write((byte*)this + 8056, value);
}
// Member Getter and Setter of AimAssist_Sensitivity_Y
// Declaration: float AimAssist_Sensitivity_Y
float ABP_PlayerCharacter_C::M_GetAimAssist_Sensitivity_Y() const {
	return Read<float>((byte*)this + 8060);
}
float* ABP_PlayerCharacter_C::M_PtrGetAimAssist_Sensitivity_Y() {
	return reinterpret_cast<float*>((byte*)this + 8060);
}
void ABP_PlayerCharacter_C::M_SetAimAssist_Sensitivity_Y(const float& value) {
	Write((byte*)this + 8060, value);
}
// Member Getter and Setter of AimAssistTimerHandle
// Declaration: struct FTimerHandle AimAssistTimerHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetAimAssistTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 8064);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetAimAssistTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 8064);
}
void ABP_PlayerCharacter_C::M_SetAimAssistTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 8064, value);
}
// Member Getter and Setter of UpDownLookAxisInput
// Declaration: float UpDownLookAxisInput
float ABP_PlayerCharacter_C::M_GetUpDownLookAxisInput() const {
	return Read<float>((byte*)this + 8072);
}
float* ABP_PlayerCharacter_C::M_PtrGetUpDownLookAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 8072);
}
void ABP_PlayerCharacter_C::M_SetUpDownLookAxisInput(const float& value) {
	Write((byte*)this + 8072, value);
}
// Member Getter and Setter of LeftRightLookAxisInput
// Declaration: float LeftRightLookAxisInput
float ABP_PlayerCharacter_C::M_GetLeftRightLookAxisInput() const {
	return Read<float>((byte*)this + 8076);
}
float* ABP_PlayerCharacter_C::M_PtrGetLeftRightLookAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 8076);
}
void ABP_PlayerCharacter_C::M_SetLeftRightLookAxisInput(const float& value) {
	Write((byte*)this + 8076, value);
}
// Member Getter and Setter of AimAssistLocationRelative
// Declaration: struct FVector AimAssistLocationRelative
struct FVector ABP_PlayerCharacter_C::M_GetAimAssistLocationRelative() const {
	return Read<struct FVector>((byte*)this + 8080);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetAimAssistLocationRelative() {
	return reinterpret_cast<struct FVector*>((byte*)this + 8080);
}
void ABP_PlayerCharacter_C::M_SetAimAssistLocationRelative(const struct FVector& value) {
	Write((byte*)this + 8080, value);
}
// Member Getter and Setter of PreviouslyActiveItems
// Declaration: TArray<class AActor*> PreviouslyActiveItems
TArray<class AActor*> ABP_PlayerCharacter_C::M_GetPreviouslyActiveItems() const {
	return Read<TArray<class AActor*>>((byte*)this + 8096);
}
TArray<class AActor*>* ABP_PlayerCharacter_C::M_PtrGetPreviouslyActiveItems() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 8096);
}
void ABP_PlayerCharacter_C::M_SetPreviouslyActiveItems(const TArray<class AActor*>& value) {
	Write((byte*)this + 8096, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedHeldItem__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SpawnedHeldItem__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedHeldItem__DelegateSignature");

	struct ABP_PlayerCharacter_C_SpawnedHeldItem__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_SpawnedHeldItem__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedHeldItem__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DespawnedHeldItem__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedHeldItem__DelegateSignature");

	struct ABP_PlayerCharacter_C_DespawnedHeldItem__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_DespawnedHeldItem__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedOffHandItem__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SpawnedOffHandItem__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedOffHandItem__DelegateSignature");

	struct ABP_PlayerCharacter_C_SpawnedOffHandItem__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_SpawnedOffHandItem__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedOffHandItem__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DespawnedOffHandItem__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedOffHandItem__DelegateSignature");

	struct ABP_PlayerCharacter_C_DespawnedOffHandItem__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_DespawnedOffHandItem__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractWithObject__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: ObjectTypeReference	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractWithObject__DelegateSignature(class UObject* ObjectTypeReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractWithObject__DelegateSignature");

	struct ABP_PlayerCharacter_C_InteractWithObject__DelegateSignature_Params {
		class UObject* ObjectTypeReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_InteractWithObject__DelegateSignature_Params params;
	params.ObjectTypeReference = ObjectTypeReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

	struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCameraDistance
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateCameraDistance(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCameraDistance");

	struct ABP_PlayerCharacter_C_UpdateCameraDistance_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateCameraDistance_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseCounter
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IncreaseCounter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseCounter");

	struct ABP_PlayerCharacter_C_IncreaseCounter_Params {
	};
	ABP_PlayerCharacter_C_IncreaseCounter_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCounter
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ResetCounter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCounter");

	struct ABP_PlayerCharacter_C_ResetCounter_Params {
	};
	ABP_PlayerCharacter_C_ResetCounter_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShake_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Scale	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraShake_BPI(class UCameraShakeBase* ShakeClass, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShake_BPI");

	struct ABP_PlayerCharacter_C_CameraShake_BPI_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_CameraShake_BPI_Params params;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartingInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory");

	struct ABP_PlayerCharacter_C_StartingInventory_Params {
	};
	ABP_PlayerCharacter_C_StartingInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlotWithHolster
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SelectedQuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DrawWeapon_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SelectQuickSlotWithHolster(int32_t SelectedQuickSlotID, bool DrawWeapon_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlotWithHolster");

	struct ABP_PlayerCharacter_C_SelectQuickSlotWithHolster_Params {
		int32_t SelectedQuickSlotID;			//Offset: 0 | ElementSize: 4
		bool DrawWeapon_;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SelectQuickSlotWithHolster_Params params;
	params.SelectedQuickSlotID = SelectedQuickSlotID;
	params.DrawWeapon_ = DrawWeapon_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::EquipToolTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolTimer");

	struct ABP_PlayerCharacter_C_EquipToolTimer_Params {
	};
	ABP_PlayerCharacter_C_EquipToolTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToolTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnequipToolTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToolTimer");

	struct ABP_PlayerCharacter_C_UnequipToolTimer_Params {
	};
	ABP_PlayerCharacter_C_UnequipToolTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToEmptySlot
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnequipToEmptySlot() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToEmptySlot");

	struct ABP_PlayerCharacter_C_UnequipToEmptySlot_Params {
	};
	ABP_PlayerCharacter_C_UnequipToEmptySlot_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipWithEquipTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnequipWithEquipTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipWithEquipTimer");

	struct ABP_PlayerCharacter_C_UnequipWithEquipTimer_Params {
	};
	ABP_PlayerCharacter_C_UnequipWithEquipTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFadePawn BPI
// Flags: BlueprintEvent
// Params:
// Name: FromAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldFadeAudio	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HoldWhenFinished	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReverseOnFinish	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartCameraFadePawn_BPI(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool ShouldFadeAudio, bool HoldWhenFinished, bool ReverseOnFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFadePawn BPI");

	struct ABP_PlayerCharacter_C_StartCameraFadePawn_BPI_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool ShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool HoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool ReverseOnFinish;			//Offset: 30 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartCameraFadePawn_BPI_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.ShouldFadeAudio = ShouldFadeAudio;
	params.HoldWhenFinished = HoldWhenFinished;
	params.ReverseOnFinish = ReverseOnFinish;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RagdollTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RagdollTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RagdollTimer");

	struct ABP_PlayerCharacter_C_RagdollTimer_Params {
	};
	ABP_PlayerCharacter_C_RagdollTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckCollisionAfterRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckCollisionAfterRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckCollisionAfterRagdoll");

	struct ABP_PlayerCharacter_C_CheckCollisionAfterRagdoll_Params {
	};
	ABP_PlayerCharacter_C_CheckCollisionAfterRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed");

	struct ABP_PlayerCharacter_C_ReceiveDestroyed_Params {
	};
	ABP_PlayerCharacter_C_ReceiveDestroyed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ManageGroundedRotation
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ManageGroundedRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ManageGroundedRotation");

	struct ABP_PlayerCharacter_C_ManageGroundedRotation_Params {
	};
	ABP_PlayerCharacter_C_ManageGroundedRotation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateOnTimeChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IteratorNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateOnTimeChanged(int32_t IteratorNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateOnTimeChanged");

	struct ABP_PlayerCharacter_C_UpdateOnTimeChanged_Params {
		int32_t IteratorNumber;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateOnTimeChanged_Params params;
	params.IteratorNumber = IteratorNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCapsuleComponentHit
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NormalImpulse	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCapsuleComponentHit");

	struct ABP_PlayerCharacter_C_OnCapsuleComponentHit_Params {
		class UPrimitiveComponent* HitComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		struct FVector NormalImpulse;			//Offset: 24 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 36 | ElementSize: 136
	};
	ABP_PlayerCharacter_C_OnCapsuleComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick");

	struct ABP_PlayerCharacter_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFoliageInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateFoliageInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFoliageInteraction");

	struct ABP_PlayerCharacter_C_UpdateFoliageInteraction_Params {
	};
	ABP_PlayerCharacter_C_UpdateFoliageInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitInteraction");

	struct ABP_PlayerCharacter_C_InitInteraction_Params {
	};
	ABP_PlayerCharacter_C_InitInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionDetectionTask
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartInteractionDetectionTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionDetectionTask");

	struct ABP_PlayerCharacter_C_StartInteractionDetectionTask_Params {
	};
	ABP_PlayerCharacter_C_StartInteractionDetectionTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForMounting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PrepareForMounting(struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForMounting");

	struct ABP_PlayerCharacter_C_PrepareForMounting_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_PrepareForMounting_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathType	Type: TEnumAsByte<E_DeathType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen");

	struct ABP_PlayerCharacter_C_CreateDeathScreen_Params {
		TEnumAsByte<E_DeathType> DeathType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged_End_Event_1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSeasonChanged_End_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged_End_Event_1");

	struct ABP_PlayerCharacter_C_OnSeasonChanged_End_Event_1_Params {
	};
	ABP_PlayerCharacter_C_OnSeasonChanged_End_Event_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLookAtLoopReached
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnLookAtLoopReached() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLookAtLoopReached");

	struct ABP_PlayerCharacter_C_OnLookAtLoopReached_Params {
	};
	ABP_PlayerCharacter_C_OnLookAtLoopReached_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCheck
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCombatCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCheck");

	struct ABP_PlayerCharacter_C_OnCombatCheck_Params {
	};
	ABP_PlayerCharacter_C_OnCombatCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatEnded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCombatEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatEnded");

	struct ABP_PlayerCharacter_C_OnCombatEnded_Params {
	};
	ABP_PlayerCharacter_C_OnCombatEnded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCombatStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatStarted");

	struct ABP_PlayerCharacter_C_OnCombatStarted_Params {
	};
	ABP_PlayerCharacter_C_OnCombatStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractionTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetInteractionTimer(float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractionTimer");

	struct ABP_PlayerCharacter_C_SetInteractionTimer_Params {
		float Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetInteractionTimer_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature");

	struct ABP_PlayerCharacter_C_BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Camera Fade Finished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::On_Camera_Fade_Finished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Camera Fade Finished");

	struct ABP_PlayerCharacter_C_On_Camera_Fade_Finished_Params {
	};
	ABP_PlayerCharacter_C_On_Camera_Fade_Finished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionTrace
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartInteractionTrace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionTrace");

	struct ABP_PlayerCharacter_C_StartInteractionTrace_Params {
	};
	ABP_PlayerCharacter_C_StartInteractionTrace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GameMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_GameMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GameMenu");

	struct ABP_PlayerCharacter_C_PressedInput_GameMenu_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_GameMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Cancel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_Cancel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Cancel");

	struct ABP_PlayerCharacter_C_PressedInput_UI_Cancel_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_Cancel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Down
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_Down() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Down");

	struct ABP_PlayerCharacter_C_PressedInput_UI_Down_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_Down_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Down
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_Down() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Down");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_Down_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_Down_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Up
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_Up() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Up");

	struct ABP_PlayerCharacter_C_PressedInput_UI_Up_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_Up_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Up
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_Up() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Up");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_Up_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_Up_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Right
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_Right() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Right");

	struct ABP_PlayerCharacter_C_PressedInput_UI_Right_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_Right_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Right
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_Right() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Right");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_Right_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_Right_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Left
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_Left() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Left");

	struct ABP_PlayerCharacter_C_PressedInput_UI_Left_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_Left_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Left
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_Left() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Left");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_Left_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_Left_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_PreviousSection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_PreviousSection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_PreviousSection");

	struct ABP_PlayerCharacter_C_PressedInput_UI_PreviousSection_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_PreviousSection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_PreviousSelection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_PreviousSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_PreviousSelection");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_PreviousSelection_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_PreviousSelection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_NextSection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_UI_NextSection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_NextSection");

	struct ABP_PlayerCharacter_C_PressedInput_UI_NextSection_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_UI_NextSection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_NextSection
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_NextSection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_NextSection");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_NextSection_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_NextSection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Cancel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_UI_Cancel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Cancel");

	struct ABP_PlayerCharacter_C_ReleasedInput_UI_Cancel_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_UI_Cancel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConfirmForGamepadRadialMenuNew_Delayed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ConfirmForGamepadRadialMenuNew_Delayed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConfirmForGamepadRadialMenuNew_Delayed");

	struct ABP_PlayerCharacter_C_ConfirmForGamepadRadialMenuNew_Delayed_Params {
	};
	ABP_PlayerCharacter_C_ConfirmForGamepadRadialMenuNew_Delayed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Right_Axis
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Right_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Right_Axis");

	struct ABP_PlayerCharacter_C_Right_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_LeftAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_LeftAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_LeftAction");

	struct ABP_PlayerCharacter_C_PressedInput_LeftAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_LeftAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_LeftAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_LeftAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_LeftAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_LeftAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_LeftAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RightAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_RightAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RightAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_RightAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_RightAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RightAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_RightAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RightAction");

	struct ABP_PlayerCharacter_C_PressedInput_RightAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_RightAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MouseWheelAxisChange
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MouseWheelAxisChange(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MouseWheelAxisChange");

	struct ABP_PlayerCharacter_C_MouseWheelAxisChange_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_MouseWheelAxisChange_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Down_Axis
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Down_Axis(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Down_Axis");

	struct ABP_PlayerCharacter_C_Down_Axis_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Down_Axis_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerDone
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractTimerDone() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerDone");

	struct ABP_PlayerCharacter_C_InteractTimerDone_Params {
	};
	ABP_PlayerCharacter_C_InteractTimerDone_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PickingItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PickingItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PickingItem");

	struct ABP_PlayerCharacter_C_PickingItem_Params {
	};
	ABP_PlayerCharacter_C_PickingItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetRepeatTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ResetRepeatTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetRepeatTimer");

	struct ABP_PlayerCharacter_C_ResetRepeatTimer_Params {
	};
	ABP_PlayerCharacter_C_ResetRepeatTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRepeat
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractRepeat() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRepeat");

	struct ABP_PlayerCharacter_C_InteractRepeat_Params {
	};
	ABP_PlayerCharacter_C_InteractRepeat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetUp");

	struct ABP_PlayerCharacter_C_GetUp_Params {
	};
	ABP_PlayerCharacter_C_GetUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureInteraction_Released
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FinishFurnitureInteraction_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureInteraction_Released");

	struct ABP_PlayerCharacter_C_FinishFurnitureInteraction_Released_Params {
	};
	ABP_PlayerCharacter_C_FinishFurnitureInteraction_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureInteraction_Pressed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FinishFurnitureInteraction_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureInteraction_Pressed");

	struct ABP_PlayerCharacter_C_FinishFurnitureInteraction_Pressed_Params {
	};
	ABP_PlayerCharacter_C_FinishFurnitureInteraction_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TimedInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TimedInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TimedInteraction");

	struct ABP_PlayerCharacter_C_TimedInteraction_Params {
	};
	ABP_PlayerCharacter_C_TimedInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostLeft
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_RotateGhostLeft() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostLeft");

	struct ABP_PlayerCharacter_C_PressedInput_RotateGhostLeft_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_RotateGhostLeft_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostLeft
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_RotateGhostLeft() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostLeft");

	struct ABP_PlayerCharacter_C_ReleasedInput_RotateGhostLeft_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_RotateGhostLeft_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipTorchTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::EquipTorchTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipTorchTimer");

	struct ABP_PlayerCharacter_C_EquipTorchTimer_Params {
	};
	ABP_PlayerCharacter_C_EquipTorchTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InspectorMode");

	struct ABP_PlayerCharacter_C_ReleasedInput_InspectorMode_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_InspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_JumpAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_JumpAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_JumpAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_JumpAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_JumpAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_JumpAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_JumpAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_JumpAction");

	struct ABP_PlayerCharacter_C_PressedInput_JumpAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_JumpAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_CameraAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_CameraAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_CameraAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_CameraAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_CameraAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_CameraAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_CameraAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_CameraAction");

	struct ABP_PlayerCharacter_C_PressedInput_CameraAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_CameraAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_StanceAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_StanceAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_StanceAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_StanceAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_StanceAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_StanceAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_StanceAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_StanceAction");

	struct ABP_PlayerCharacter_C_PressedInput_StanceAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_StanceAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Left_Axis
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Left_Axis(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Left_Axis");

	struct ABP_PlayerCharacter_C_Left_Axis_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Left_Axis_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Backwards_Axis
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Backwards_Axis(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Backwards_Axis");

	struct ABP_PlayerCharacter_C_Backwards_Axis_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Backwards_Axis_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_WalkAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_WalkAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_WalkAction");

	struct ABP_PlayerCharacter_C_PressedInput_WalkAction_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_WalkAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_SelectRotationMode_3() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_3");

	struct ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_3_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_3_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_SelectRotationMode_2() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_2");

	struct ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_2_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_2_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.JumpEvent
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::JumpEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.JumpEvent");

	struct ABP_PlayerCharacter_C_JumpEvent_Params {
	};
	ABP_PlayerCharacter_C_JumpEvent_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnequipItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipItem");

	struct ABP_PlayerCharacter_C_UnequipItem_Params {
	};
	ABP_PlayerCharacter_C_UnequipItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostRight
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_RotateGhostRight() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostRight");

	struct ABP_PlayerCharacter_C_ReleasedInput_RotateGhostRight_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_RotateGhostRight_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostRight
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_RotateGhostRight() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostRight");

	struct ABP_PlayerCharacter_C_PressedInput_RotateGhostRight_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_RotateGhostRight_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_ChoiceMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_ChoiceMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_ChoiceMenu");

	struct ABP_PlayerCharacter_C_ReleasedInput_ChoiceMenu_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_ChoiceMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ChoiceMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_ChoiceMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ChoiceMenu");

	struct ABP_PlayerCharacter_C_PressedInput_ChoiceMenu_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_ChoiceMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_HolsterHoldableItem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_HolsterHoldableItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_HolsterHoldableItem");

	struct ABP_PlayerCharacter_C_PressedInput_HolsterHoldableItem_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_HolsterHoldableItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InspectorMode");

	struct ABP_PlayerCharacter_C_PressedInput_InspectorMode_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_InspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Sprint
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_Sprint() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Sprint");

	struct ABP_PlayerCharacter_C_ReleasedInput_Sprint_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_Sprint_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Sprint
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_Sprint() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Sprint");

	struct ABP_PlayerCharacter_C_PressedInput_Sprint_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_Sprint_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InteractAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_InteractAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InteractAction");

	struct ABP_PlayerCharacter_C_ReleasedInput_InteractAction_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_InteractAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InteractAction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_InteractAction(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InteractAction");

	struct ABP_PlayerCharacter_C_PressedInput_InteractAction_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_PressedInput_InteractAction_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot8
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot8() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot8");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot8_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot8_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot7
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot7() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot7");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot7_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot7_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot6
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot6() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot6");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot6_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot6_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot5
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot5() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot5");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot5_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot5_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot4
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot4() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot4");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot4_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot4_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot3() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot3");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot3_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot3_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot2() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot2");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot2_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot2_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_QuickSlot1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot1");

	struct ABP_PlayerCharacter_C_PressedInput_QuickSlot1_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_QuickSlot1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Torch
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_Torch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Torch");

	struct ABP_PlayerCharacter_C_PressedInput_Torch_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_Torch_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLineTrace
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractLineTrace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLineTrace");

	struct ABP_PlayerCharacter_C_InteractLineTrace_Params {
	};
	ABP_PlayerCharacter_C_InteractLineTrace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractCloseGate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractCloseGate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractCloseGate");

	struct ABP_PlayerCharacter_C_InteractCloseGate_Params {
	};
	ABP_PlayerCharacter_C_InteractCloseGate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractOpenGate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractOpenGate(bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractOpenGate");

	struct ABP_PlayerCharacter_C_InteractOpenGate_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_InteractOpenGate_Params params;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientPlayForceFeedback_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tag	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Looping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnoreTimeDilation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayWhilePaused	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ClientPlayForceFeedback_BPI(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool Looping, bool IgnoreTimeDilation, bool PlayWhilePaused) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientPlayForceFeedback_BPI");

	struct ABP_PlayerCharacter_C_ClientPlayForceFeedback_BPI_Params {
		class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
		struct FName Tag;			//Offset: 8 | ElementSize: 8
		bool Looping;			//Offset: 16 | ElementSize: 1
		bool IgnoreTimeDilation;			//Offset: 17 | ElementSize: 1
		bool PlayWhilePaused;			//Offset: 18 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ClientPlayForceFeedback_BPI_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;
	params.Looping = Looping;
	params.IgnoreTimeDilation = IgnoreTimeDilation;
	params.PlayWhilePaused = PlayWhilePaused;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenHusbandryAnimalAssignment_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalReference	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OpenHusbandryAnimalAssignment_BPI(class AActor* AnimalReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenHusbandryAnimalAssignment_BPI");

	struct ABP_PlayerCharacter_C_OpenHusbandryAnimalAssignment_BPI_Params {
		class AActor* AnimalReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_OpenHusbandryAnimalAssignment_BPI_Params params;
	params.AnimalReference = AnimalReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartTrance_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TranceMaxTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartTrance_BPI(float TranceMaxTime, TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartTrance_BPI");

	struct ABP_PlayerCharacter_C_StartTrance_BPI_Params {
		float TranceMaxTime;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartTrance_BPI_Params params;
	params.TranceMaxTime = TranceMaxTime;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartEffect_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Effect	Type: TEnumAsByte<E_Effects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FullEffectTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartEffect_BPI(TEnumAsByte<E_Effects> Effect, float FullEffectTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartEffect_BPI");

	struct ABP_PlayerCharacter_C_StartEffect_BPI_Params {
		TEnumAsByte<E_Effects> Effect;			//Offset: 0 | ElementSize: 1
		float FullEffectTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_StartEffect_BPI_Params params;
	params.Effect = Effect;
	params.FullEffectTime = FullEffectTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateEffect_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Effect	Type: TEnumAsByte<E_Effects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EffectTimeLeft	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasEffectEnded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateEffect_BPI(TEnumAsByte<E_Effects> Effect, float EffectTimeLeft, bool HasEffectEnded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateEffect_BPI");

	struct ABP_PlayerCharacter_C_UpdateEffect_BPI_Params {
		TEnumAsByte<E_Effects> Effect;			//Offset: 0 | ElementSize: 1
		float EffectTimeLeft;			//Offset: 4 | ElementSize: 4
		bool HasEffectEnded;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateEffect_BPI_Params params;
	params.Effect = Effect;
	params.EffectTimeLeft = EffectTimeLeft;
	params.HasEffectEnded = HasEffectEnded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBlink_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlinkParameter	Type: TEnumAsByte<E_BlinkParameters>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BlinkingActualTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BlinkingProcessTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartBlink_BPI(TEnumAsByte<E_BlinkParameters> BlinkParameter, float BlinkingActualTime, float BlinkingProcessTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBlink_BPI");

	struct ABP_PlayerCharacter_C_StartBlink_BPI_Params {
		TEnumAsByte<E_BlinkParameters> BlinkParameter;			//Offset: 0 | ElementSize: 1
		float BlinkingActualTime;			//Offset: 4 | ElementSize: 4
		float BlinkingProcessTime;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_StartBlink_BPI_Params params;
	params.BlinkParameter = BlinkParameter;
	params.BlinkingActualTime = BlinkingActualTime;
	params.BlinkingProcessTime = BlinkingProcessTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveTranceStatus_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveTranceStatus_BPI(TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveTranceStatus_BPI");

	struct ABP_PlayerCharacter_C_RemoveTranceStatus_BPI_Params {
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_RemoveTranceStatus_BPI_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTranceStatus_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfStacks	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateTranceStatus_BPI(float Time, int32_t NumberOfStacks, TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTranceStatus_BPI");

	struct ABP_PlayerCharacter_C_UpdateTranceStatus_BPI_Params {
		float Time;			//Offset: 0 | ElementSize: 4
		int32_t NumberOfStacks;			//Offset: 4 | ElementSize: 4
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateTranceStatus_BPI_Params params;
	params.Time = Time;
	params.NumberOfStacks = NumberOfStacks;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHoldableItemInputs_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateHoldableItemInputs_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHoldableItemInputs_BPI");

	struct ABP_PlayerCharacter_C_UpdateHoldableItemInputs_BPI_Params {
	};
	ABP_PlayerCharacter_C_UpdateHoldableItemInputs_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleTradingMenu_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WithNPC_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OtherInventoryComponentReference	Type: class UActorComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WithHorse_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: GiftGiving	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ToggleTradingMenu_BPI(bool WithNPC_, class UActorComponent* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleTradingMenu_BPI");

	struct ABP_PlayerCharacter_C_ToggleTradingMenu_BPI_Params {
		bool WithNPC_;			//Offset: 0 | ElementSize: 1
		class UActorComponent* OtherInventoryComponentReference;			//Offset: 8 | ElementSize: 8
		bool WithHorse_;			//Offset: 16 | ElementSize: 1
		bool GiftGiving;			//Offset: 17 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ToggleTradingMenu_BPI_Params params;
	params.WithNPC_ = WithNPC_;
	params.OtherInventoryComponentReference = OtherInventoryComponentReference;
	params.WithHorse_ = WithHorse_;
	params.GiftGiving = GiftGiving;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateCraftingMenu_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchCategories	Type: TArray<struct FDataTableRowHandle>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NoWorkbench_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateCraftingMenu_BPI(const TArray<struct FDataTableRowHandle>& WorkbenchCategories, TEnumAsByte<E_Workbenches> WorkbenchType, bool NoWorkbench_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateCraftingMenu_BPI");

	struct ABP_PlayerCharacter_C_CreateCraftingMenu_BPI_Params {
		TArray<struct FDataTableRowHandle> WorkbenchCategories;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 16 | ElementSize: 1
		bool NoWorkbench_;			//Offset: 17 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateCraftingMenu_BPI_Params params;
	params.WorkbenchCategories = WorkbenchCategories;
	params.WorkbenchType = WorkbenchType;
	params.NoWorkbench_ = NoWorkbench_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeOut	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeOut, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateNotification_BPI");

	struct ABP_PlayerCharacter_C_CreateNotification_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 48
		bool NotificationImage;			//Offset: 48 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 49 | ElementSize: 1
		struct FText WarningText;			//Offset: 56 | ElementSize: 24
		float NotificationTimeOut;			//Offset: 80 | ElementSize: 4
		float NotificationDelay;			//Offset: 84 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_CreateNotification_BPI_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeOut = NotificationTimeOut;
	params.NotificationDelay = NotificationDelay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	struct ABP_PlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraLerp__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__UpdateFunc");

	struct ABP_PlayerCharacter_C_CameraLerp__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_CameraLerp__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraLerp__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__FinishedFunc");

	struct ABP_PlayerCharacter_C_CameraLerp__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_CameraLerp__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FOV__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__UpdateFunc");

	struct ABP_PlayerCharacter_C_FOV__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_FOV__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FOV__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__FinishedFunc");

	struct ABP_PlayerCharacter_C_FOV__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_FOV__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRange
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: InteractionRange	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractRange(float InteractionRange, struct FVector* StartVector, struct FVector* EndVector) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRange");

	struct ABP_PlayerCharacter_C_InteractRange_Params {
		float InteractionRange;			//Offset: 0 | ElementSize: 4
		struct FVector StartVector;			//Offset: 4 | ElementSize: 12
		struct FVector EndVector;			//Offset: 16 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_InteractRange_Params params;
	params.InteractionRange = InteractionRange;

	UObject::ProcessEvent(fn, &params);
	if (StartVector != nullptr)
		*StartVector = params.StartVector;
	if (EndVector != nullptr)
		*EndVector = params.EndVector;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlot
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SelectedQuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DrawWeapon_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SelectQuickSlot(int32_t SelectedQuickSlotID, bool DrawWeapon_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlot");

	struct ABP_PlayerCharacter_C_SelectQuickSlot_Params {
		int32_t SelectedQuickSlotID;			//Offset: 0 | ElementSize: 4
		bool DrawWeapon_;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SelectQuickSlot_Params params;
	params.SelectedQuickSlotID = SelectedQuickSlotID;
	params.DrawWeapon_ = DrawWeapon_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleGameMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ToggleGameMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleGameMenu");

	struct ABP_PlayerCharacter_C_ToggleGameMenu_Params {
	};
	ABP_PlayerCharacter_C_ToggleGameMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SwapHeldItem(struct FName ItemName, int32_t ArrayID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItem");

	struct ABP_PlayerCharacter_C_SwapHeldItem_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t ArrayID;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SwapHeldItem_Params params;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RevertHeldItem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RevertHeldItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RevertHeldItem");

	struct ABP_PlayerCharacter_C_RevertHeldItem_Params {
	};
	ABP_PlayerCharacter_C_RevertHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItemToHands
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: _2Hand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SwapHeldItemToHands(bool _2Hand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItemToHands");

	struct ABP_PlayerCharacter_C_SwapHeldItemToHands_Params {
		bool _2Hand;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SwapHeldItemToHands_Params params;
	params._2Hand = _2Hand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBarterWithNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GiftGiving	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartBarterWithNPC(class ABP_NPC_C** NPCReference, bool GiftGiving) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBarterWithNPC");

	struct ABP_PlayerCharacter_C_StartBarterWithNPC_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool GiftGiving;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartBarterWithNPC_Params params;
	params.GiftGiving = GiftGiving;

	UObject::ProcessEvent(fn, &params);
	if (NPCReference != nullptr)
		*NPCReference = params.NPCReference;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopBarterWithNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopBarterWithNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopBarterWithNPC");

	struct ABP_PlayerCharacter_C_StopBarterWithNPC_Params {
	};
	ABP_PlayerCharacter_C_StopBarterWithNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Held Items
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Hide_Held_Items(class AActor* InteractedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Held Items");

	struct ABP_PlayerCharacter_C_Hide_Held_Items_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Hide_Held_Items_Params params;
	params.InteractedActor = InteractedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReEquipHeldItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItems");

	struct ABP_PlayerCharacter_C_ReEquipHeldItems_Params {
	};
	ABP_PlayerCharacter_C_ReEquipHeldItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractionDetect
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractionDetect() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractionDetect");

	struct ABP_PlayerCharacter_C_InteractionDetect_Params {
	};
	ABP_PlayerCharacter_C_InteractionDetect_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhosts
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGhosts() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhosts");

	struct ABP_PlayerCharacter_C_UpdateGhosts_Params {
	};
	ABP_PlayerCharacter_C_UpdateGhosts_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInBuildingMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Active	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetInBuildingMode(bool Active) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInBuildingMode");

	struct ABP_PlayerCharacter_C_SetInBuildingMode_Params {
		bool Active;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetInBuildingMode_Params params;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitActorInteractionDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetLastHitActorInteractionDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitActorInteractionDistance");

	struct ABP_PlayerCharacter_C_GetLastHitActorInteractionDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetLastHitActorInteractionDistance_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectedSlotWithToolUpdate
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SelectedSlotWithToolUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectedSlotWithToolUpdate");

	struct ABP_PlayerCharacter_C_SelectedSlotWithToolUpdate_Params {
	};
	ABP_PlayerCharacter_C_SelectedSlotWithToolUpdate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideHeldItemsForInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HideHeldItemsForInteraction(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideHeldItemsForInteraction");

	struct ABP_PlayerCharacter_C_HideHeldItemsForInteraction_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_HideHeldItemsForInteraction_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItemsForInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReEquipHeldItemsForInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItemsForInteraction");

	struct ABP_PlayerCharacter_C_ReEquipHeldItemsForInteraction_Params {
	};
	ABP_PlayerCharacter_C_ReEquipHeldItemsForInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Unstuck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck");

	struct ABP_PlayerCharacter_C_Unstuck_Params {
	};
	ABP_PlayerCharacter_C_Unstuck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerPush
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerPush() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerPush");

	struct ABP_PlayerCharacter_C_PlayerPush_Params {
	};
	ABP_PlayerCharacter_C_PlayerPush_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FinishedInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractTimer(bool* FinishedInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimer");

	struct ABP_PlayerCharacter_C_InteractTimer_Params {
		bool FinishedInteraction;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_InteractTimer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFoliage
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterFoliage	Type: class UBP_MasterFoliage_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitReference	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: FinishedInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractTimerFoliage(class UBP_MasterFoliage_C* MasterFoliage, struct FHitResult HitReference, bool* FinishedInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFoliage");

	struct ABP_PlayerCharacter_C_InteractTimerFoliage_Params {
		class UBP_MasterFoliage_C* MasterFoliage;			//Offset: 0 | ElementSize: 8
		struct FHitResult HitReference;			//Offset: 8 | ElementSize: 136
		bool FinishedInteraction;			//Offset: 144 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_InteractTimerFoliage_Params params;
	params.MasterFoliage = MasterFoliage;
	params.HitReference = HitReference;

	UObject::ProcessEvent(fn, &params);
	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerActor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitReference	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: FinishedInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractTimerActor(struct FHitResult HitReference, bool* FinishedInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerActor");

	struct ABP_PlayerCharacter_C_InteractTimerActor_Params {
		struct FHitResult HitReference;			//Offset: 0 | ElementSize: 136
		bool FinishedInteraction;			//Offset: 136 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_InteractTimerActor_Params params;
	params.HitReference = HitReference;

	UObject::ProcessEvent(fn, &params);
	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFinish
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractTimerFinish(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFinish");

	struct ABP_PlayerCharacter_C_InteractTimerFinish_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_InteractTimerFinish_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnstuckPlayer
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
// Name: TargetLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::TryToUnstuckPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnstuckPlayer");

	struct ABP_PlayerCharacter_C_TryToUnstuckPlayer_Params {
		struct FVector TargetLocation;			//Offset: 4 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 16 | ElementSize: 12
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TryToUnstuckPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindRandomPointForUnstuck
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RandomLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FindRandomPointForUnstuck(struct FVector* RandomLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindRandomPointForUnstuck");

	struct ABP_PlayerCharacter_C_FindRandomPointForUnstuck_Params {
		struct FVector RandomLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_FindRandomPointForUnstuck_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRandomPointOnTerrain
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mesh	Type: class UMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::GetRandomPointOnTerrain(class AActor* Actor, class UMeshComponent* Mesh, struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRandomPointOnTerrain");

	struct ABP_PlayerCharacter_C_GetRandomPointOnTerrain_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		class UMeshComponent* Mesh;			//Offset: 8 | ElementSize: 8
		struct FVector Location;			//Offset: 20 | ElementSize: 12
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetRandomPointOnTerrain_Params params;
	params.Actor = Actor;
	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFovChanging
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::IsFovChanging() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFovChanging");

	struct ABP_PlayerCharacter_C_IsFovChanging_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsFovChanging_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasePlayerInputs
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasePlayerInputs() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasePlayerInputs");

	struct ABP_PlayerCharacter_C_ReleasePlayerInputs_Params {
	};
	ABP_PlayerCharacter_C_ReleasePlayerInputs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToTP
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::CanSwitchToTP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToTP");

	struct ABP_PlayerCharacter_C_CanSwitchToTP_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CanSwitchToTP_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeTPCameraDistance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeTPCameraDistance(float ChangeValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeTPCameraDistance");

	struct ABP_PlayerCharacter_C_ChangeTPCameraDistance_Params {
		float ChangeValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ChangeTPCameraDistance_Params params;
	params.ChangeValue = ChangeValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTPCameraDistance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetTPCameraDistance(float Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTPCameraDistance");

	struct ABP_PlayerCharacter_C_SetTPCameraDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetTPCameraDistance_Params params;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerHairColor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HairColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetPlayerHairColor(struct FLinearColor HairColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerHairColor");

	struct ABP_PlayerCharacter_C_SetPlayerHairColor_Params {
		struct FLinearColor HairColor;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetPlayerHairColor_Params params;
	params.HairColor = HairColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerSkinTone
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkinTone	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetPlayerSkinTone(struct FLinearColor SkinTone) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerSkinTone");

	struct ABP_PlayerCharacter_C_SetPlayerSkinTone_Params {
		struct FLinearColor SkinTone;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetPlayerSkinTone_Params params;
	params.SkinTone = SkinTone;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerLook
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerLook() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerLook");

	struct ABP_PlayerCharacter_C_UpdatePlayerLook_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlayerLook_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitCameraMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CameraDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitCameraMode(TEnumAsByte<E_ViewMode> ViewMode, float CameraDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitCameraMode");

	struct ABP_PlayerCharacter_C_InitCameraMode_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
		float CameraDistance;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_InitCameraMode_Params params;
	params.ViewMode = ViewMode;
	params.CameraDistance = CameraDistance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TPInteractionTrace
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TPInteractionTrace(TArray<struct FHitResult>* Hits) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TPInteractionTrace");

	struct ABP_PlayerCharacter_C_TPInteractionTrace_Params {
		TArray<struct FHitResult> Hits;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_TPInteractionTrace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Hits != nullptr)
		*Hits = params.Hits;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InterruptInteractAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InterruptInteractAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InterruptInteractAction");

	struct ABP_PlayerCharacter_C_InterruptInteractAction_Params {
	};
	ABP_PlayerCharacter_C_InterruptInteractAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckInventoryForTorchToEquip
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TorchFound	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TorchType	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckInventoryForTorchToEquip(bool* TorchFound, struct FName* TorchType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckInventoryForTorchToEquip");

	struct ABP_PlayerCharacter_C_CheckInventoryForTorchToEquip_Params {
		bool TorchFound;			//Offset: 0 | ElementSize: 1
		struct FName TorchType;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CheckInventoryForTorchToEquip_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TorchFound != nullptr)
		*TorchFound = params.TorchFound;
	if (TorchType != nullptr)
		*TorchType = params.TorchType;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToEquipTorch
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TorchName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToEquipTorch(const struct FName& TorchName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToEquipTorch");

	struct ABP_PlayerCharacter_C_TryToEquipTorch_Params {
		struct FName TorchName;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_TryToEquipTorch_Params params;
	params.TorchName = TorchName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsAnyRadialMenuOpen
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IsAnyRadialMenuOpen(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsAnyRadialMenuOpen");

	struct ABP_PlayerCharacter_C_IsAnyRadialMenuOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsAnyRadialMenuOpen_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInteractionThread
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopInteractionThread() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInteractionThread");

	struct ABP_PlayerCharacter_C_StopInteractionThread_Params {
	};
	ABP_PlayerCharacter_C_StopInteractionThread_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreviousViewmodeChangeCamera
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SwitchBack	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PreviousViewmodeChangeCamera(bool SwitchBack) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreviousViewmodeChangeCamera");

	struct ABP_PlayerCharacter_C_PreviousViewmodeChangeCamera_Params {
		bool SwitchBack;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PreviousViewmodeChangeCamera_Params params;
	params.SwitchBack = SwitchBack;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AimAssist
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::AimAssist() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AimAssist");

	struct ABP_PlayerCharacter_C_AimAssist_Params {
	};
	ABP_PlayerCharacter_C_AimAssist_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateLookingRotation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
struct FRotator ABP_PlayerCharacter_C::CalculateLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateLookingRotation");

	struct ABP_PlayerCharacter_C_CalculateLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_CalculateLookingRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerHiddenState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hide	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangePlayerHiddenState(bool Hide) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerHiddenState");

	struct ABP_PlayerCharacter_C_ChangePlayerHiddenState_Params {
		bool Hide;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ChangePlayerHiddenState_Params params;
	params.Hide = Hide;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponents_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CameraSpringArm	Type: class USpringArmComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CameraComponent	Type: class UCameraComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetCameraComponents_BPI(TEnumAsByte<E_ViewMode> ViewMode, class USpringArmComponent** CameraSpringArm, class UCameraComponent** CameraComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponents_BPI");

	struct ABP_PlayerCharacter_C_GetCameraComponents_BPI_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
		class USpringArmComponent* CameraSpringArm;			//Offset: 8 | ElementSize: 8
		class UCameraComponent* CameraComponent;			//Offset: 16 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetCameraComponents_BPI_Params params;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
	if (CameraSpringArm != nullptr)
		*CameraSpringArm = params.CameraSpringArm;
	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraViewDirection_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Forward	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetCameraViewDirection_BPI(struct FVector* Forward) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraViewDirection_BPI");

	struct ABP_PlayerCharacter_C_GetCameraViewDirection_BPI_Params {
		struct FVector Forward;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_GetCameraViewDirection_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Forward != nullptr)
		*Forward = params.Forward;
}

/////////////////////////////////////////////
// InheritableComponentHandler BP_PlayerCharacter.BP_PlayerCharacter_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InheritableComponentHandler() {
	static auto fn = UObject::FindObject<UFunction>("InheritableComponentHandler BP_PlayerCharacter.BP_PlayerCharacter_C.InheritableComponentHandler");

	struct ABP_PlayerCharacter_C_InheritableComponentHandler_Params {
	};
	ABP_PlayerCharacter_C_InheritableComponentHandler_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// InputKeyDelegateBinding BP_PlayerCharacter.BP_PlayerCharacter_C.InputKeyDelegateBinding_1
// Flags: BlueprintCosmetic, Net
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InputKeyDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputKeyDelegateBinding BP_PlayerCharacter.BP_PlayerCharacter_C.InputKeyDelegateBinding_1");

	struct ABP_PlayerCharacter_C_InputKeyDelegateBinding_1_Params {
	};
	ABP_PlayerCharacter_C_InputKeyDelegateBinding_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Camera Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LerpCurve	Type: class UCurveFloat*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Update_Camera_Event(class UCurveFloat* LerpCurve) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Camera Event");

	struct ABP_PlayerCharacter_C_Update_Camera_Event_Params {
		class UCurveFloat* LerpCurve;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Update_Camera_Event_Params params;
	params.LerpCurve = LerpCurve;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOVLerpUpdateSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FloatCurve	Type: class UCurveFloat*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetFOV	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOVLerpUpdateSettings");

	struct ABP_PlayerCharacter_C_FOVLerpUpdateSettings_Params {
		class UCurveFloat* FloatCurve;			//Offset: 0 | ElementSize: 8
		float NewRate;			//Offset: 8 | ElementSize: 4
		float TargetFOV;			//Offset: 12 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FOVLerpUpdateSettings_Params params;
	params.FloatCurve = FloatCurve;
	params.NewRate = NewRate;
	params.TargetFOV = TargetFOV;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCameraFOVLerp");

	struct ABP_PlayerCharacter_C_StopCameraFOVLerp_Params {
	};
	ABP_PlayerCharacter_C_StopCameraFOVLerp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayFromStartCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayFromStartCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayFromStartCameraFOVLerp");

	struct ABP_PlayerCharacter_C_PlayFromStartCameraFOVLerp_Params {
	};
	ABP_PlayerCharacter_C_PlayFromStartCameraFOVLerp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCameraFOVLerp");

	struct ABP_PlayerCharacter_C_PlayCameraFOVLerp_Params {
	};
	ABP_PlayerCharacter_C_PlayCameraFOVLerp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReverseCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseCameraFOVLerp");

	struct ABP_PlayerCharacter_C_ReverseCameraFOVLerp_Params {
	};
	ABP_PlayerCharacter_C_ReverseCameraFOVLerp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseFromEndCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReverseFromEndCameraFOVLerp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseFromEndCameraFOVLerp");

	struct ABP_PlayerCharacter_C_ReverseFromEndCameraFOVLerp_Params {
	};
	ABP_PlayerCharacter_C_ReverseFromEndCameraFOVLerp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetNewTimeCameraFOVLerp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetNewTimeCameraFOVLerp(float NewTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetNewTimeCameraFOVLerp");

	struct ABP_PlayerCharacter_C_SetNewTimeCameraFOVLerp_Params {
		float NewTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetNewTimeCameraFOVLerp_Params params;
	params.NewTime = NewTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGoToSleep
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnGoToSleep() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGoToSleep");

	struct ABP_PlayerCharacter_C_OnGoToSleep_Params {
	};
	ABP_PlayerCharacter_C_OnGoToSleep_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSit");

	struct ABP_PlayerCharacter_C_OnSit_Params {
	};
	ABP_PlayerCharacter_C_OnSit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGetUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnGetUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGetUp");

	struct ABP_PlayerCharacter_C_OnGetUp_Params {
	};
	ABP_PlayerCharacter_C_OnGetUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSitIdle
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSitIdle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSitIdle");

	struct ABP_PlayerCharacter_C_OnSitIdle_Params {
	};
	ABP_PlayerCharacter_C_OnSitIdle_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBlocking_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBlocking_Event(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBlocking_Event");

	struct ABP_PlayerCharacter_C_SetBlocking_Event_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetBlocking_Event_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set ForceStanding Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Set_ForceStanding_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set ForceStanding Event");

	struct ABP_PlayerCharacter_C_Set_ForceStanding_Event_Params {
	};
	ABP_PlayerCharacter_C_Set_ForceStanding_Event_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Sitting Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Sitting Event");

	struct ABP_PlayerCharacter_C_Set_Sitting_Event_Params {
		bool IsSitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Set_Sitting_Event_Params params;
	params.IsSitting = IsSitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCameraPitch
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ResetCameraPitch() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCameraPitch");

	struct ABP_PlayerCharacter_C_ResetCameraPitch_Params {
	};
	ABP_PlayerCharacter_C_ResetCameraPitch_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCharacterRotation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddAmount	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::AddCharacterRotation_BPI(struct FRotator AddAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCharacterRotation_BPI");

	struct ABP_PlayerCharacter_C_AddCharacterRotation_BPI_Params {
		struct FRotator AddAmount;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::AddImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddImpaledItem");

	struct ABP_PlayerCharacter_C_AddImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Ragdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InitialRagdollVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Ragdoll(struct FVector InitialRagdollVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Ragdoll");

	struct ABP_PlayerCharacter_C_Ragdoll_Params {
		struct FVector InitialRagdollVelocity;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_Ragdoll_Params params;
	params.InitialRagdollVelocity = InitialRagdollVelocity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Un_Ragdoll Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SkipAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Un_Ragdoll_Event(bool SkipAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Un_Ragdoll Event");

	struct ABP_PlayerCharacter_C_Un_Ragdoll_Event_Params {
		bool SkipAnim;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Un_Ragdoll_Event_Params params;
	params.SkipAnim = SkipAnim;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndPlay");

	struct ABP_PlayerCharacter_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMesh
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewHeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHairMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewBodyMeshes	Type: TArray<class USkeletalMesh*>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMesh");

	struct ABP_PlayerCharacter_C_SetMesh_Params {
		class USkeletalMesh* NewHeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* NewHairMesh;			//Offset: 8 | ElementSize: 8
		TArray<class USkeletalMesh*> NewBodyMeshes;			//Offset: 16 | ElementSize: 16
		class UObject* NewClass;			//Offset: 32 | ElementSize: 8
		bool UpdateOnly;			//Offset: 40 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetMesh_Params params;
	params.NewHeadMesh = NewHeadMesh;
	params.NewHairMesh = NewHairMesh;
	params.NewBodyMeshes = NewBodyMeshes;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Stage Interaction Camera Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bUseHeadForFullBodyAnimations	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bUsePlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bLimitPlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Stage Interaction Camera Rotation");

	struct ABP_PlayerCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params {
		bool bUseHeadForFullBodyAnimations;			//Offset: 0 | ElementSize: 1
		bool bUsePlayerCamera;			//Offset: 1 | ElementSize: 1
		bool bLimitPlayerCamera;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params params;
	params.bUseHeadForFullBodyAnimations = bUseHeadForFullBodyAnimations;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.bLimitPlayerCamera = bLimitPlayerCamera;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Camera Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraRotationLimits	Type: struct FST_CameraRotationLimits	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Camera Rotation");

	struct ABP_PlayerCharacter_C_Limit_Camera_Rotation_Params {
		struct FST_CameraRotationLimits CameraRotationLimits;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_Limit_Camera_Rotation_Params params;
	params.CameraRotationLimits = CameraRotationLimits;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerInput
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: DisablePlayerInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangePlayerInput(bool DisablePlayerInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerInput");

	struct ABP_PlayerCharacter_C_ChangePlayerInput_Params {
		bool DisablePlayerInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ChangePlayerInput_Params params;
	params.DisablePlayerInput = DisablePlayerInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Public, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage");

	struct ABP_PlayerCharacter_C_ReceiveAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction
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
void ABP_PlayerCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction");

	struct ABP_PlayerCharacter_C_SetupStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay;			//Offset: 8 | ElementSize: 80
		class UAnimMontage* MontageToPlay;			//Offset: 88 | ElementSize: 8
		float PlayRate;			//Offset: 96 | ElementSize: 4
		float StartingPosition;			//Offset: 100 | ElementSize: 4
		bool AutomaticPlay;			//Offset: 104 | ElementSize: 1
		int32_t NumberOfAutomaticLoops;			//Offset: 108 | ElementSize: 4
		bool SwapItemsOnInteraction;			//Offset: 112 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetupStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.SectionsToPlay = SectionsToPlay;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.AutomaticPlay = AutomaticPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bUsePlayerCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BlendTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Change_Camera(bool bUsePlayerCamera, float BlendTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera");

	struct ABP_PlayerCharacter_C_Change_Camera_Params {
		bool bUsePlayerCamera;			//Offset: 0 | ElementSize: 1
		float BlendTime;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Change_Camera_Params params;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.BlendTime = BlendTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Rotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: StopRotationInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Stop_Character_Rotation(bool StopRotationInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Rotation");

	struct ABP_PlayerCharacter_C_Stop_Character_Rotation_Params {
		bool StopRotationInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Stop_Character_Rotation_Params params;
	params.StopRotationInput = StopRotationInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Movement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: bStopMovementInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Stop_Character_Movement(bool bStopMovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Movement");

	struct ABP_PlayerCharacter_C_Stop_Character_Movement_Params {
		bool bStopMovementInput;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Stop_Character_Movement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishStageInteraction
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FinishStageInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishStageInteraction");

	struct ABP_PlayerCharacter_C_FinishStageInteraction_Params {
	};
	ABP_PlayerCharacter_C_FinishStageInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Swoon
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Swoon() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Swoon");

	struct ABP_PlayerCharacter_C_Swoon_Params {
	};
	ABP_PlayerCharacter_C_Swoon_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFade Pawn
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
void ABP_PlayerCharacter_C::StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFade Pawn");

	struct ABP_PlayerCharacter_C_StartCameraFade_Pawn_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool bReverseOnFinish;			//Offset: 30 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartCameraFade_Pawn_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params {
	};
	ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerMoveForInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtTarget	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RotateDuringMovement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UsePlayerLookAt	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ResetLookAtPitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerMoveForInteraction");

	struct ABP_PlayerCharacter_C_PlayerMoveForInteraction_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
		struct FVector Target;			//Offset: 8 | ElementSize: 12
		struct FVector LookAtTarget;			//Offset: 20 | ElementSize: 12
		bool RotateDuringMovement;			//Offset: 32 | ElementSize: 1
		bool UsePlayerLookAt;			//Offset: 33 | ElementSize: 1
		bool ResetLookAtPitch;			//Offset: 34 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlayerMoveForInteraction_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLookAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerLookAt(class AActor* Target, struct FVector TargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLookAt");

	struct ABP_PlayerCharacter_C_PlayerLookAt_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector TargetLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript");

	struct ABP_PlayerCharacter_C_UserConstructionScript_Params {
	};
	ABP_PlayerCharacter_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_ViewMode Changed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::On_ALS_ViewMode_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_ViewMode Changed");

	struct ABP_PlayerCharacter_C_On_ALS_ViewMode_Changed_Params {
	};
	ABP_PlayerCharacter_C_On_ALS_ViewMode_Changed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_Aiming Changed
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::On_ALS_Aiming_Changed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_Aiming Changed");

	struct ABP_PlayerCharacter_C_On_ALS_Aiming_Changed_Params {
	};
	ABP_PlayerCharacter_C_On_ALS_Aiming_Changed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LerpCameraSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LerpAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetSpringArm	Type: class USpringArmComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LerpCameraSettings");

	struct ABP_PlayerCharacter_C_LerpCameraSettings_Params {
		float LerpAlpha;			//Offset: 0 | ElementSize: 4
		class USpringArmComponent* TargetSpringArm;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_LerpCameraSettings_Params params;
	params.LerpAlpha = LerpAlpha;
	params.TargetSpringArm = TargetSpringArm;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCameraSettings
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TargetCameraSettings	Type: struct FST_CameraSettings	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCameraSettings");

	struct ABP_PlayerCharacter_C_ChooseCameraSettings_Params {
		struct FST_CameraSettings TargetCameraSettings;			//Offset: 0 | ElementSize: 20
	};
	ABP_PlayerCharacter_C_ChooseCameraSettings_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TargetCameraSettings != nullptr)
		*TargetCameraSettings = params.TargetCameraSettings;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Attach Components
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Attach_Components() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Attach Components");

	struct ABP_PlayerCharacter_C_Attach_Components_Params {
	};
	ABP_PlayerCharacter_C_Attach_Components_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentCameraFOV
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InFieldOfView	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCurrentCameraFOV(float InFieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentCameraFOV");

	struct ABP_PlayerCharacter_C_SetCurrentCameraFOV_Params {
		float InFieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetCurrentCameraFOV_Params params;
	params.InFieldOfView = InFieldOfView;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Holster Weapon
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSwitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bIsSwitch	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsValidHeldItem	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Holster Weapon");

	struct ABP_PlayerCharacter_C_Holster_Weapon_Params {
		bool IsSwitch;			//Offset: 0 | ElementSize: 1
		bool bIsSwitch;			//Offset: 1 | ElementSize: 1
		bool IsValidHeldItem;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Holster_Weapon_Params params;
	params.IsSwitch = IsSwitch;

	UObject::ProcessEvent(fn, &params);
	if (bIsSwitch != nullptr)
		*bIsSwitch = params.bIsSwitch;
	if (IsValidHeldItem != nullptr)
		*IsValidHeldItem = params.IsValidHeldItem;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnHeldItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
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
void ABP_PlayerCharacter_C::SpawnHeldItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnHeldItem");

	struct ABP_PlayerCharacter_C_SpawnHeldItem_Params {
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
	ABP_PlayerCharacter_C_SpawnHeldItem_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyHeldItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyHeldItem");

	struct ABP_PlayerCharacter_C_DestroyHeldItem_Params {
	};
	ABP_PlayerCharacter_C_DestroyHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyOffHandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyOffHandItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyOffHandItem");

	struct ABP_PlayerCharacter_C_DestroyOffHandItem_Params {
	};
	ABP_PlayerCharacter_C_DestroyOffHandItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnOffHandItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
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
void ABP_PlayerCharacter_C::SpawnOffHandItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnOffHandItem");

	struct ABP_PlayerCharacter_C_SpawnOffHandItem_Params {
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
	ABP_PlayerCharacter_C_SpawnOffHandItem_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Start Workbench Interaction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangeCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UseLocation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookAtBehavior	Type: TEnumAsByte<E_LookAtOptions>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Start Workbench Interaction");

	struct ABP_PlayerCharacter_C_On_Start_Workbench_Interaction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
		bool ChangeCamera;			//Offset: 28 | ElementSize: 1
		bool UseLocation;			//Offset: 29 | ElementSize: 1
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 30 | ElementSize: 1
		struct FRotator LookAtRotation;			//Offset: 32 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_On_Start_Workbench_Interaction_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction");

	struct ABP_PlayerCharacter_C_OnEndWorkbenchInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnEndWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDialogueStarted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnDialogueStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDialogueStarted");

	struct ABP_PlayerCharacter_C_OnDialogueStarted_Params {
	};
	ABP_PlayerCharacter_C_OnDialogueStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDialogueEnded
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnDialogueEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDialogueEnded");

	struct ABP_PlayerCharacter_C_OnDialogueEnded_Params {
	};
	ABP_PlayerCharacter_C_OnDialogueEnded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEarMorph
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetEarMorph(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEarMorph");

	struct ABP_PlayerCharacter_C_SetEarMorph_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetEarMorph_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolForInteraction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Holdable	Type: class ABP_MasterHoldableItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WantedTool	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedTool, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolForInteraction");

	struct ABP_PlayerCharacter_C_EquipToolForInteraction_Params {
		class ABP_MasterHoldableItem_C* Holdable;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> WantedTool;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_EquipToolForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedTool = WantedTool;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDefaultFov
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InFieldOfView	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateDefaultFov(float InFieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDefaultFov");

	struct ABP_PlayerCharacter_C_UpdateDefaultFov_Params {
		float InFieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateDefaultFov_Params params;
	params.InFieldOfView = InFieldOfView;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentCameraFOV
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: FieldOfView	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetCurrentCameraFOV(float* FieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentCameraFOV");

	struct ABP_PlayerCharacter_C_GetCurrentCameraFOV_Params {
		float FieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetCurrentCameraFOV_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FieldOfView != nullptr)
		*FieldOfView = params.FieldOfView;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction");

	struct ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHeadAndHairRow
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ST_NPCMeshesGen	Type: struct FST_NPCMeshesGen	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHeadAndHairRow");

	struct ABP_PlayerCharacter_C_GetHeadAndHairRow_Params {
		struct FST_NPCMeshesGen ST_NPCMeshesGen;			//Offset: 0 | ElementSize: 128
	};
	ABP_PlayerCharacter_C_GetHeadAndHairRow_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ST_NPCMeshesGen != nullptr)
		*ST_NPCMeshesGen = params.ST_NPCMeshesGen;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class ABP_MasterFurniture_Workbench_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction");

	struct ABP_PlayerCharacter_C_OnWaitForCraftingInteraction_Params {
		class ABP_MasterFurniture_Workbench_C* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
		bool ResetCamera;			//Offset: 20 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_OnWaitForCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;
	params.ResetCamera = ResetCamera;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HolsterToolsForDialogue
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hide	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HolsterToolsForDialogue(bool Hide) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HolsterToolsForDialogue");

	struct ABP_PlayerCharacter_C_HolsterToolsForDialogue_Params {
		bool Hide;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_HolsterToolsForDialogue_Params params;
	params.Hide = Hide;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartFurnitureInteraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnStartFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartFurnitureInteraction");

	struct ABP_PlayerCharacter_C_OnStartFurnitureInteraction_Params {
		class ABP_MasterFurniture_C* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnStartFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndFurnitureInteraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnEndFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndFurnitureInteraction");

	struct ABP_PlayerCharacter_C_OnEndFurnitureInteraction_Params {
		class ABP_MasterFurniture_C* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnEndFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPhysicsHandle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PhysicsHandle	Type: class UPhysicsHandleComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPhysicsHandle");

	struct ABP_PlayerCharacter_C_GetPhysicsHandle_Params {
		class UPhysicsHandleComponent* PhysicsHandle;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetPhysicsHandle_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInteractionEndpoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInteractionEndpoint");

	struct ABP_PlayerCharacter_C_GetInteractionEndpoint_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
		struct FVector EndPoint;			//Offset: 4 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MoveToMountingLocation
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MoveToMountingLocation");

	struct ABP_PlayerCharacter_C_MoveToMountingLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 12 | ElementSize: 12
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMountingPawnFinished
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::OnMountingPawnFinished(class AActor* newMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMountingPawnFinished");

	struct ABP_PlayerCharacter_C_OnMountingPawnFinished_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: oldPawnMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::OnDismountingPawnFinished(class AActor* oldPawnMount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished");

	struct ABP_PlayerCharacter_C_OnDismountingPawnFinished_Params {
		class AActor* oldPawnMount;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRiderCollisionEnabled
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: shouldEnable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::SetRiderCollisionEnabled(bool shouldEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRiderCollisionEnabled");

	struct ABP_PlayerCharacter_C_SetRiderCollisionEnabled_Params {
		bool shouldEnable;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetRiderCollisionEnabled_Params params;
	params.shouldEnable = shouldEnable;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount");

	struct ABP_PlayerCharacter_C_PrepareToMount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToDismount
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToDismount");

	struct ABP_PlayerCharacter_C_PrepareToDismount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

#pragma endregion
}