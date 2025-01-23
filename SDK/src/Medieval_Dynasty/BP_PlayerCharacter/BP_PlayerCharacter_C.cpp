#include "../SDK.h"
#include "BP_PlayerCharacter_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_PlayerCharacter_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 5584);
}
struct FPointerToUberGraphFrame* ABP_PlayerCharacter_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 5584);
}
void ABP_PlayerCharacter_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 5584, value);
}
// Member Getter and Setter of NPC_Light
// Declaration: class UPointLightComponent* NPC_Light
class UPointLightComponent* ABP_PlayerCharacter_C::M_GetNPC_Light() const {
	return Read<class UPointLightComponent*>((byte*)this + 5592);
}
class UPointLightComponent** ABP_PlayerCharacter_C::M_PtrGetNPC_Light() {
	return reinterpret_cast<class UPointLightComponent**>((byte*)this + 5592);
}
void ABP_PlayerCharacter_C::M_SetNPC_Light(const class UPointLightComponent*& value) {
	Write((byte*)this + 5592, value);
}
// Member Getter and Setter of TP_Camera
// Declaration: class UCameraComponent* TP_Camera
class UCameraComponent* ABP_PlayerCharacter_C::M_GetTP_Camera() const {
	return Read<class UCameraComponent*>((byte*)this + 5600);
}
class UCameraComponent** ABP_PlayerCharacter_C::M_PtrGetTP_Camera() {
	return reinterpret_cast<class UCameraComponent**>((byte*)this + 5600);
}
void ABP_PlayerCharacter_C::M_SetTP_Camera(const class UCameraComponent*& value) {
	Write((byte*)this + 5600, value);
}
// Member Getter and Setter of TP_SpringArm
// Declaration: class UMD_SpringArmComponent* TP_SpringArm
class UMD_SpringArmComponent* ABP_PlayerCharacter_C::M_GetTP_SpringArm() const {
	return Read<class UMD_SpringArmComponent*>((byte*)this + 5608);
}
class UMD_SpringArmComponent** ABP_PlayerCharacter_C::M_PtrGetTP_SpringArm() {
	return reinterpret_cast<class UMD_SpringArmComponent**>((byte*)this + 5608);
}
void ABP_PlayerCharacter_C::M_SetTP_SpringArm(const class UMD_SpringArmComponent*& value) {
	Write((byte*)this + 5608, value);
}
// Member Getter and Setter of PhysicsHandle
// Declaration: class UPhysicsHandleComponent* PhysicsHandle
class UPhysicsHandleComponent* ABP_PlayerCharacter_C::M_GetPhysicsHandle() const {
	return Read<class UPhysicsHandleComponent*>((byte*)this + 5616);
}
class UPhysicsHandleComponent** ABP_PlayerCharacter_C::M_PtrGetPhysicsHandle() {
	return reinterpret_cast<class UPhysicsHandleComponent**>((byte*)this + 5616);
}
void ABP_PlayerCharacter_C::M_SetPhysicsHandle(const class UPhysicsHandleComponent*& value) {
	Write((byte*)this + 5616, value);
}
// Member Getter and Setter of FP_Camera
// Declaration: class UCameraComponent* FP_Camera
class UCameraComponent* ABP_PlayerCharacter_C::M_GetFP_Camera() const {
	return Read<class UCameraComponent*>((byte*)this + 5624);
}
class UCameraComponent** ABP_PlayerCharacter_C::M_PtrGetFP_Camera() {
	return reinterpret_cast<class UCameraComponent**>((byte*)this + 5624);
}
void ABP_PlayerCharacter_C::M_SetFP_Camera(const class UCameraComponent*& value) {
	Write((byte*)this + 5624, value);
}
// Member Getter and Setter of FP_SpringArm
// Declaration: class USpringArmComponent* FP_SpringArm
class USpringArmComponent* ABP_PlayerCharacter_C::M_GetFP_SpringArm() const {
	return Read<class USpringArmComponent*>((byte*)this + 5632);
}
class USpringArmComponent** ABP_PlayerCharacter_C::M_PtrGetFP_SpringArm() {
	return reinterpret_cast<class USpringArmComponent**>((byte*)this + 5632);
}
void ABP_PlayerCharacter_C::M_SetFP_SpringArm(const class USpringArmComponent*& value) {
	Write((byte*)this + 5632, value);
}
// Member Getter and Setter of LifeStats_Voice
// Declaration: class UAudioComponent* LifeStats_Voice
class UAudioComponent* ABP_PlayerCharacter_C::M_GetLifeStats_Voice() const {
	return Read<class UAudioComponent*>((byte*)this + 5640);
}
class UAudioComponent** ABP_PlayerCharacter_C::M_PtrGetLifeStats_Voice() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 5640);
}
void ABP_PlayerCharacter_C::M_SetLifeStats_Voice(const class UAudioComponent*& value) {
	Write((byte*)this + 5640, value);
}
// Member Getter and Setter of BP_AimOffsetComponent
// Declaration: class UBP_AimOffsetComponent_C* BP_AimOffsetComponent
class UBP_AimOffsetComponent_C* ABP_PlayerCharacter_C::M_GetBP_AimOffsetComponent() const {
	return Read<class UBP_AimOffsetComponent_C*>((byte*)this + 5648);
}
class UBP_AimOffsetComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_AimOffsetComponent() {
	return reinterpret_cast<class UBP_AimOffsetComponent_C**>((byte*)this + 5648);
}
void ABP_PlayerCharacter_C::M_SetBP_AimOffsetComponent(const class UBP_AimOffsetComponent_C*& value) {
	Write((byte*)this + 5648, value);
}
// Member Getter and Setter of ActionCameraSocket
// Declaration: class USceneComponent* ActionCameraSocket
class USceneComponent* ABP_PlayerCharacter_C::M_GetActionCameraSocket() const {
	return Read<class USceneComponent*>((byte*)this + 5656);
}
class USceneComponent** ABP_PlayerCharacter_C::M_PtrGetActionCameraSocket() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 5656);
}
void ABP_PlayerCharacter_C::M_SetActionCameraSocket(const class USceneComponent*& value) {
	Write((byte*)this + 5656, value);
}
// Member Getter and Setter of BP_WeatherComponent
// Declaration: class UBP_WeatherComponent_C* BP_WeatherComponent
class UBP_WeatherComponent_C* ABP_PlayerCharacter_C::M_GetBP_WeatherComponent() const {
	return Read<class UBP_WeatherComponent_C*>((byte*)this + 5664);
}
class UBP_WeatherComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_WeatherComponent() {
	return reinterpret_cast<class UBP_WeatherComponent_C**>((byte*)this + 5664);
}
void ABP_PlayerCharacter_C::M_SetBP_WeatherComponent(const class UBP_WeatherComponent_C*& value) {
	Write((byte*)this + 5664, value);
}
// Member Getter and Setter of BuildingTargetArrow
// Declaration: class UArrowComponent* BuildingTargetArrow
class UArrowComponent* ABP_PlayerCharacter_C::M_GetBuildingTargetArrow() const {
	return Read<class UArrowComponent*>((byte*)this + 5672);
}
class UArrowComponent** ABP_PlayerCharacter_C::M_PtrGetBuildingTargetArrow() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 5672);
}
void ABP_PlayerCharacter_C::M_SetBuildingTargetArrow(const class UArrowComponent*& value) {
	Write((byte*)this + 5672, value);
}
// Member Getter and Setter of BP_PlayerBuildingComponent
// Declaration: class UBP_PlayerBuildingComponent_C* BP_PlayerBuildingComponent
class UBP_PlayerBuildingComponent_C* ABP_PlayerCharacter_C::M_GetBP_PlayerBuildingComponent() const {
	return Read<class UBP_PlayerBuildingComponent_C*>((byte*)this + 5680);
}
class UBP_PlayerBuildingComponent_C** ABP_PlayerCharacter_C::M_PtrGetBP_PlayerBuildingComponent() {
	return reinterpret_cast<class UBP_PlayerBuildingComponent_C**>((byte*)this + 5680);
}
void ABP_PlayerCharacter_C::M_SetBP_PlayerBuildingComponent(const class UBP_PlayerBuildingComponent_C*& value) {
	Write((byte*)this + 5680, value);
}
// Member Getter and Setter of StaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37
// Declaration: float StaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37
float ABP_PlayerCharacter_C::M_GetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() const {
	return Read<float>((byte*)this + 5688);
}
float* ABP_PlayerCharacter_C::M_PtrGetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() {
	return reinterpret_cast<float*>((byte*)this + 5688);
}
void ABP_PlayerCharacter_C::M_SetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37(const float& value) {
	Write((byte*)this + 5688, value);
}
// Member Getter and Setter of StaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37
// Declaration: TEnumAsByte<ETimelineDirection> StaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5692);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5692);
}
void ABP_PlayerCharacter_C::M_SetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5692, value);
}
// Member Getter and Setter of StaggerPitchTimeline
// Declaration: class UTimelineComponent* StaggerPitchTimeline
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetStaggerPitchTimeline() const {
	return Read<class UTimelineComponent*>((byte*)this + 5696);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetStaggerPitchTimeline() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5696);
}
void ABP_PlayerCharacter_C::M_SetStaggerPitchTimeline(const class UTimelineComponent*& value) {
	Write((byte*)this + 5696, value);
}
// Member Getter and Setter of Timeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445
// Declaration: float Timeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445
float ABP_PlayerCharacter_C::M_GetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445() const {
	return Read<float>((byte*)this + 5704);
}
float* ABP_PlayerCharacter_C::M_PtrGetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445() {
	return reinterpret_cast<float*>((byte*)this + 5704);
}
void ABP_PlayerCharacter_C::M_SetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445(const float& value) {
	Write((byte*)this + 5704, value);
}
// Member Getter and Setter of Timeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445
// Declaration: TEnumAsByte<ETimelineDirection> Timeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5708);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5708);
}
void ABP_PlayerCharacter_C::M_SetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5708, value);
}
// Member Getter and Setter of Timeline_IKAlpha
// Declaration: class UTimelineComponent* Timeline_IKAlpha
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetTimeline_IKAlpha() const {
	return Read<class UTimelineComponent*>((byte*)this + 5712);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetTimeline_IKAlpha() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5712);
}
void ABP_PlayerCharacter_C::M_SetTimeline_IKAlpha(const class UTimelineComponent*& value) {
	Write((byte*)this + 5712, value);
}
// Member Getter and Setter of InspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D
// Declaration: float InspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D
float ABP_PlayerCharacter_C::M_GetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D() const {
	return Read<float>((byte*)this + 5720);
}
float* ABP_PlayerCharacter_C::M_PtrGetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D() {
	return reinterpret_cast<float*>((byte*)this + 5720);
}
void ABP_PlayerCharacter_C::M_SetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D(const float& value) {
	Write((byte*)this + 5720, value);
}
// Member Getter and Setter of InspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D
// Declaration: TEnumAsByte<ETimelineDirection> InspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5724);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5724);
}
void ABP_PlayerCharacter_C::M_SetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5724, value);
}
// Member Getter and Setter of InspectorIntensity
// Declaration: class UTimelineComponent* InspectorIntensity
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetInspectorIntensity() const {
	return Read<class UTimelineComponent*>((byte*)this + 5728);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetInspectorIntensity() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5728);
}
void ABP_PlayerCharacter_C::M_SetInspectorIntensity(const class UTimelineComponent*& value) {
	Write((byte*)this + 5728, value);
}
// Member Getter and Setter of NightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012
// Declaration: float NightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012
float ABP_PlayerCharacter_C::M_GetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012() const {
	return Read<float>((byte*)this + 5736);
}
float* ABP_PlayerCharacter_C::M_PtrGetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012() {
	return reinterpret_cast<float*>((byte*)this + 5736);
}
void ABP_PlayerCharacter_C::M_SetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012(const float& value) {
	Write((byte*)this + 5736, value);
}
// Member Getter and Setter of NightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012
// Declaration: TEnumAsByte<ETimelineDirection> NightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5740);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5740);
}
void ABP_PlayerCharacter_C::M_SetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5740, value);
}
// Member Getter and Setter of NightVisionIntensity
// Declaration: class UTimelineComponent* NightVisionIntensity
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetNightVisionIntensity() const {
	return Read<class UTimelineComponent*>((byte*)this + 5744);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetNightVisionIntensity() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5744);
}
void ABP_PlayerCharacter_C::M_SetNightVisionIntensity(const class UTimelineComponent*& value) {
	Write((byte*)this + 5744, value);
}
// Member Getter and Setter of CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557
// Declaration: float CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557
float ABP_PlayerCharacter_C::M_GetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() const {
	return Read<float>((byte*)this + 5752);
}
float* ABP_PlayerCharacter_C::M_PtrGetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() {
	return reinterpret_cast<float*>((byte*)this + 5752);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557(const float& value) {
	Write((byte*)this + 5752, value);
}
// Member Getter and Setter of CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557
// Declaration: TEnumAsByte<ETimelineDirection> CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5756);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5756);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5756, value);
}
// Member Getter and Setter of CameraLerp
// Declaration: class UTimelineComponent* CameraLerp
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetCameraLerp() const {
	return Read<class UTimelineComponent*>((byte*)this + 5760);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetCameraLerp() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5760);
}
void ABP_PlayerCharacter_C::M_SetCameraLerp(const class UTimelineComponent*& value) {
	Write((byte*)this + 5760, value);
}
// Member Getter and Setter of FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A
// Declaration: float FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A
float ABP_PlayerCharacter_C::M_GetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const {
	return Read<float>((byte*)this + 5768);
}
float* ABP_PlayerCharacter_C::M_PtrGetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() {
	return reinterpret_cast<float*>((byte*)this + 5768);
}
void ABP_PlayerCharacter_C::M_SetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const float& value) {
	Write((byte*)this + 5768, value);
}
// Member Getter and Setter of FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A
// Declaration: TEnumAsByte<ETimelineDirection> FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A
TEnumAsByte<ETimelineDirection> ABP_PlayerCharacter_C::M_GetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 5772);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerCharacter_C::M_PtrGetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 5772);
}
void ABP_PlayerCharacter_C::M_SetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 5772, value);
}
// Member Getter and Setter of FOV
// Declaration: class UTimelineComponent* FOV
class UTimelineComponent* ABP_PlayerCharacter_C::M_GetFOV() const {
	return Read<class UTimelineComponent*>((byte*)this + 5776);
}
class UTimelineComponent** ABP_PlayerCharacter_C::M_PtrGetFOV() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 5776);
}
void ABP_PlayerCharacter_C::M_SetFOV(const class UTimelineComponent*& value) {
	Write((byte*)this + 5776, value);
}
// Member Getter and Setter of PlayerControllerReference
// Declaration: class APC_Player_C* PlayerControllerReference
class APC_Player_C* ABP_PlayerCharacter_C::M_GetPlayerControllerReference() const {
	return Read<class APC_Player_C*>((byte*)this + 5784);
}
class APC_Player_C** ABP_PlayerCharacter_C::M_PtrGetPlayerControllerReference() {
	return reinterpret_cast<class APC_Player_C**>((byte*)this + 5784);
}
void ABP_PlayerCharacter_C::M_SetPlayerControllerReference(const class APC_Player_C*& value) {
	Write((byte*)this + 5784, value);
}
// Member Getter and Setter of LastHitActor
// Declaration: class AActor* LastHitActor
class AActor* ABP_PlayerCharacter_C::M_GetLastHitActor() const {
	return Read<class AActor*>((byte*)this + 5792);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetLastHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 5792);
}
void ABP_PlayerCharacter_C::M_SetLastHitActor(const class AActor*& value) {
	Write((byte*)this + 5792, value);
}
// Member Getter and Setter of HitActor
// Declaration: class AActor* HitActor
class AActor* ABP_PlayerCharacter_C::M_GetHitActor() const {
	return Read<class AActor*>((byte*)this + 5800);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 5800);
}
void ABP_PlayerCharacter_C::M_SetHitActor(const class AActor*& value) {
	Write((byte*)this + 5800, value);
}
// Member Getter and Setter of TimerHitActor
// Declaration: class AActor* TimerHitActor
class AActor* ABP_PlayerCharacter_C::M_GetTimerHitActor() const {
	return Read<class AActor*>((byte*)this + 5808);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetTimerHitActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 5808);
}
void ABP_PlayerCharacter_C::M_SetTimerHitActor(const class AActor*& value) {
	Write((byte*)this + 5808, value);
}
// Member Getter and Setter of Interacted_Furniture
// Declaration: class AActor* Interacted_Furniture
class AActor* ABP_PlayerCharacter_C::M_GetInteracted_Furniture() const {
	return Read<class AActor*>((byte*)this + 5816);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetInteracted_Furniture() {
	return reinterpret_cast<class AActor**>((byte*)this + 5816);
}
void ABP_PlayerCharacter_C::M_SetInteracted_Furniture(const class AActor*& value) {
	Write((byte*)this + 5816, value);
}
// Member Getter and Setter of GrabbedActor
// Declaration: class AActor* GrabbedActor
class AActor* ABP_PlayerCharacter_C::M_GetGrabbedActor() const {
	return Read<class AActor*>((byte*)this + 5824);
}
class AActor** ABP_PlayerCharacter_C::M_PtrGetGrabbedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 5824);
}
void ABP_PlayerCharacter_C::M_SetGrabbedActor(const class AActor*& value) {
	Write((byte*)this + 5824, value);
}
// Member Getter and Setter of InteractTimerHandle
// Declaration: struct FTimerHandle InteractTimerHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 5832);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5832);
}
void ABP_PlayerCharacter_C::M_SetInteractTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 5832, value);
}
// Member Getter and Setter of PickingTImer
// Declaration: struct FTimerHandle PickingTImer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetPickingTImer() const {
	return Read<struct FTimerHandle>((byte*)this + 5840);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetPickingTImer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5840);
}
void ABP_PlayerCharacter_C::M_SetPickingTImer(const struct FTimerHandle& value) {
	Write((byte*)this + 5840, value);
}
// Member Getter and Setter of InteractionHitTimer
// Declaration: struct FTimerHandle InteractionHitTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractionHitTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 5848);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractionHitTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5848);
}
void ABP_PlayerCharacter_C::M_SetInteractionHitTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 5848, value);
}
// Member Getter and Setter of TimedInteractionHandle
// Declaration: struct FTimerHandle TimedInteractionHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetTimedInteractionHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 5856);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetTimedInteractionHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5856);
}
void ABP_PlayerCharacter_C::M_SetTimedInteractionHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 5856, value);
}
// Member Getter and Setter of InteractionRepeatTimer
// Declaration: struct FTimerHandle InteractionRepeatTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetInteractionRepeatTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 5864);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetInteractionRepeatTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 5864);
}
void ABP_PlayerCharacter_C::M_SetInteractionRepeatTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 5864, value);
}
// Member Getter and Setter of OnStartHitReference
// Declaration: struct FHitResult OnStartHitReference
struct FHitResult ABP_PlayerCharacter_C::M_GetOnStartHitReference() const {
	return Read<struct FHitResult>((byte*)this + 5872);
}
struct FHitResult* ABP_PlayerCharacter_C::M_PtrGetOnStartHitReference() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 5872);
}
void ABP_PlayerCharacter_C::M_SetOnStartHitReference(const struct FHitResult& value) {
	Write((byte*)this + 5872, value);
}
// Member Getter and Setter of PressedKey
// Declaration: struct FKey PressedKey
struct FKey ABP_PlayerCharacter_C::M_GetPressedKey() const {
	return Read<struct FKey>((byte*)this + 6008);
}
struct FKey* ABP_PlayerCharacter_C::M_PtrGetPressedKey() {
	return reinterpret_cast<struct FKey*>((byte*)this + 6008);
}
void ABP_PlayerCharacter_C::M_SetPressedKey(const struct FKey& value) {
	Write((byte*)this + 6008, value);
}
// Member Getter and Setter of LastHitLocation
// Declaration: struct FVector LastHitLocation
struct FVector ABP_PlayerCharacter_C::M_GetLastHitLocation() const {
	return Read<struct FVector>((byte*)this + 6032);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetLastHitLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 6032);
}
void ABP_PlayerCharacter_C::M_SetLastHitLocation(const struct FVector& value) {
	Write((byte*)this + 6032, value);
}
// Member Getter and Setter of InteractionTime
// Declaration: float InteractionTime
float ABP_PlayerCharacter_C::M_GetInteractionTime() const {
	return Read<float>((byte*)this + 6044);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionTime() {
	return reinterpret_cast<float*>((byte*)this + 6044);
}
void ABP_PlayerCharacter_C::M_SetInteractionTime(const float& value) {
	Write((byte*)this + 6044, value);
}
// Member Getter and Setter of InteractionRange
// Declaration: float InteractionRange
float ABP_PlayerCharacter_C::M_GetInteractionRange() const {
	return Read<float>((byte*)this + 6048);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionRange() {
	return reinterpret_cast<float*>((byte*)this + 6048);
}
void ABP_PlayerCharacter_C::M_SetInteractionRange(const float& value) {
	Write((byte*)this + 6048, value);
}
// Member Getter and Setter of InteractionNoCollisionRange
// Declaration: float InteractionNoCollisionRange
float ABP_PlayerCharacter_C::M_GetInteractionNoCollisionRange() const {
	return Read<float>((byte*)this + 6052);
}
float* ABP_PlayerCharacter_C::M_PtrGetInteractionNoCollisionRange() {
	return reinterpret_cast<float*>((byte*)this + 6052);
}
void ABP_PlayerCharacter_C::M_SetInteractionNoCollisionRange(const float& value) {
	Write((byte*)this + 6052, value);
}
// Member Getter and Setter of HitRayCastFrequency
// Declaration: float HitRayCastFrequency
float ABP_PlayerCharacter_C::M_GetHitRayCastFrequency() const {
	return Read<float>((byte*)this + 6056);
}
float* ABP_PlayerCharacter_C::M_PtrGetHitRayCastFrequency() {
	return reinterpret_cast<float*>((byte*)this + 6056);
}
void ABP_PlayerCharacter_C::M_SetHitRayCastFrequency(const float& value) {
	Write((byte*)this + 6056, value);
}
// Member Getter and Setter of HitRayCastBuildingFrequency
// Declaration: float HitRayCastBuildingFrequency
float ABP_PlayerCharacter_C::M_GetHitRayCastBuildingFrequency() const {
	return Read<float>((byte*)this + 6060);
}
float* ABP_PlayerCharacter_C::M_PtrGetHitRayCastBuildingFrequency() {
	return reinterpret_cast<float*>((byte*)this + 6060);
}
void ABP_PlayerCharacter_C::M_SetHitRayCastBuildingFrequency(const float& value) {
	Write((byte*)this + 6060, value);
}
// Member Getter and Setter of FieldBuildingRange
// Declaration: float FieldBuildingRange
float ABP_PlayerCharacter_C::M_GetFieldBuildingRange() const {
	return Read<float>((byte*)this + 6064);
}
float* ABP_PlayerCharacter_C::M_PtrGetFieldBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6064);
}
void ABP_PlayerCharacter_C::M_SetFieldBuildingRange(const float& value) {
	Write((byte*)this + 6064, value);
}
// Member Getter and Setter of SplineBuildingRange
// Declaration: float SplineBuildingRange
float ABP_PlayerCharacter_C::M_GetSplineBuildingRange() const {
	return Read<float>((byte*)this + 6068);
}
float* ABP_PlayerCharacter_C::M_PtrGetSplineBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6068);
}
void ABP_PlayerCharacter_C::M_SetSplineBuildingRange(const float& value) {
	Write((byte*)this + 6068, value);
}
// Member Getter and Setter of FurnitureBuildingRange
// Declaration: float FurnitureBuildingRange
float ABP_PlayerCharacter_C::M_GetFurnitureBuildingRange() const {
	return Read<float>((byte*)this + 6072);
}
float* ABP_PlayerCharacter_C::M_PtrGetFurnitureBuildingRange() {
	return reinterpret_cast<float*>((byte*)this + 6072);
}
void ABP_PlayerCharacter_C::M_SetFurnitureBuildingRange(const float& value) {
	Write((byte*)this + 6072, value);
}
// Member Getter and Setter of LastHitActorInteractionDistance
// Declaration: float LastHitActorInteractionDistance
float ABP_PlayerCharacter_C::M_GetLastHitActorInteractionDistance() const {
	return Read<float>((byte*)this + 6076);
}
float* ABP_PlayerCharacter_C::M_PtrGetLastHitActorInteractionDistance() {
	return reinterpret_cast<float*>((byte*)this + 6076);
}
void ABP_PlayerCharacter_C::M_SetLastHitActorInteractionDistance(const float& value) {
	Write((byte*)this + 6076, value);
}
// Member Getter and Setter of TimeRequired
// Declaration: float TimeRequired
float ABP_PlayerCharacter_C::M_GetTimeRequired() const {
	return Read<float>((byte*)this + 6080);
}
float* ABP_PlayerCharacter_C::M_PtrGetTimeRequired() {
	return reinterpret_cast<float*>((byte*)this + 6080);
}
void ABP_PlayerCharacter_C::M_SetTimeRequired(const float& value) {
	Write((byte*)this + 6080, value);
}
// Member Getter and Setter of HitActorID
// Declaration: int32_t HitActorID
int32_t ABP_PlayerCharacter_C::M_GetHitActorID() const {
	return Read<int32_t>((byte*)this + 6084);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetHitActorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6084);
}
void ABP_PlayerCharacter_C::M_SetHitActorID(const int32_t& value) {
	Write((byte*)this + 6084, value);
}
// Member Getter and Setter of LastHitActorID
// Declaration: int32_t LastHitActorID
int32_t ABP_PlayerCharacter_C::M_GetLastHitActorID() const {
	return Read<int32_t>((byte*)this + 6088);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetLastHitActorID() {
	return reinterpret_cast<int32_t*>((byte*)this + 6088);
}
void ABP_PlayerCharacter_C::M_SetLastHitActorID(const int32_t& value) {
	Write((byte*)this + 6088, value);
}
// Member Getter and Setter of TraderReference
// Declaration: class ABP_NPC_C* TraderReference
class ABP_NPC_C* ABP_PlayerCharacter_C::M_GetTraderReference() const {
	return Read<class ABP_NPC_C*>((byte*)this + 6096);
}
class ABP_NPC_C** ABP_PlayerCharacter_C::M_PtrGetTraderReference() {
	return reinterpret_cast<class ABP_NPC_C**>((byte*)this + 6096);
}
void ABP_PlayerCharacter_C::M_SetTraderReference(const class ABP_NPC_C*& value) {
	Write((byte*)this + 6096, value);
}
// Member Getter and Setter of UI_GameMenu
// Declaration: class UUserWidget* UI_GameMenu
class UUserWidget* ABP_PlayerCharacter_C::M_GetUI_GameMenu() const {
	return Read<class UUserWidget*>((byte*)this + 6104);
}
class UUserWidget** ABP_PlayerCharacter_C::M_PtrGetUI_GameMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 6104);
}
void ABP_PlayerCharacter_C::M_SetUI_GameMenu(const class UUserWidget*& value) {
	Write((byte*)this + 6104, value);
}
// Member Getter and Setter of InspectorPlayer
// Declaration: class UUI_Inspector_Player_C* InspectorPlayer
class UUI_Inspector_Player_C* ABP_PlayerCharacter_C::M_GetInspectorPlayer() const {
	return Read<class UUI_Inspector_Player_C*>((byte*)this + 6112);
}
class UUI_Inspector_Player_C** ABP_PlayerCharacter_C::M_PtrGetInspectorPlayer() {
	return reinterpret_cast<class UUI_Inspector_Player_C**>((byte*)this + 6112);
}
void ABP_PlayerCharacter_C::M_SetInspectorPlayer(const class UUI_Inspector_Player_C*& value) {
	Write((byte*)this + 6112, value);
}
// Member Getter and Setter of FoliageInteractionTimer
// Declaration: struct FTimerHandle FoliageInteractionTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetFoliageInteractionTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 6120);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetFoliageInteractionTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6120);
}
void ABP_PlayerCharacter_C::M_SetFoliageInteractionTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 6120, value);
}
// Member Getter and Setter of FoliageParticleSystemsUpdateTimer
// Declaration: struct FTimerHandle FoliageParticleSystemsUpdateTimer
struct FTimerHandle ABP_PlayerCharacter_C::M_GetFoliageParticleSystemsUpdateTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 6128);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetFoliageParticleSystemsUpdateTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6128);
}
void ABP_PlayerCharacter_C::M_SetFoliageParticleSystemsUpdateTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 6128, value);
}
// Member Getter and Setter of SpawnedFoliageParticleSystemTagsCache
// Declaration: TArray<struct FName> SpawnedFoliageParticleSystemTagsCache
TArray<struct FName> ABP_PlayerCharacter_C::M_GetSpawnedFoliageParticleSystemTagsCache() const {
	return Read<TArray<struct FName>>((byte*)this + 6136);
}
TArray<struct FName>* ABP_PlayerCharacter_C::M_PtrGetSpawnedFoliageParticleSystemTagsCache() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 6136);
}
void ABP_PlayerCharacter_C::M_SetSpawnedFoliageParticleSystemTagsCache(const TArray<struct FName>& value) {
	Write((byte*)this + 6136, value);
}
// Member Getter and Setter of CustomCharacterParams
// Declaration: struct FST_PlayerModulesIDs CustomCharacterParams
struct FST_PlayerModulesIDs ABP_PlayerCharacter_C::M_GetCustomCharacterParams() const {
	return Read<struct FST_PlayerModulesIDs>((byte*)this + 6152);
}
struct FST_PlayerModulesIDs* ABP_PlayerCharacter_C::M_PtrGetCustomCharacterParams() {
	return reinterpret_cast<struct FST_PlayerModulesIDs*>((byte*)this + 6152);
}
void ABP_PlayerCharacter_C::M_SetCustomCharacterParams(const struct FST_PlayerModulesIDs& value) {
	Write((byte*)this + 6152, value);
}
// Member Getter and Setter of Dyes
// Declaration: TArray<struct FST_Dye> Dyes
TArray<struct FST_Dye> ABP_PlayerCharacter_C::M_GetDyes() const {
	return Read<TArray<struct FST_Dye>>((byte*)this + 6272);
}
TArray<struct FST_Dye>* ABP_PlayerCharacter_C::M_PtrGetDyes() {
	return reinterpret_cast<TArray<struct FST_Dye>*>((byte*)this + 6272);
}
void ABP_PlayerCharacter_C::M_SetDyes(const TArray<struct FST_Dye>& value) {
	Write((byte*)this + 6272, value);
}
// Member Getter and Setter of HiddenArmors
// Declaration: TArray<TEnumAsByte<E_EquipmentCategories>> HiddenArmors
TArray<TEnumAsByte<E_EquipmentCategories>> ABP_PlayerCharacter_C::M_GetHiddenArmors() const {
	return Read<TArray<TEnumAsByte<E_EquipmentCategories>>>((byte*)this + 6288);
}
TArray<TEnumAsByte<E_EquipmentCategories>>* ABP_PlayerCharacter_C::M_PtrGetHiddenArmors() {
	return reinterpret_cast<TArray<TEnumAsByte<E_EquipmentCategories>>*>((byte*)this + 6288);
}
void ABP_PlayerCharacter_C::M_SetHiddenArmors(const TArray<TEnumAsByte<E_EquipmentCategories>>& value) {
	Write((byte*)this + 6288, value);
}
// Member Getter and Setter of OwningPlayerNetID
// Declaration: struct FString OwningPlayerNetID
struct FString ABP_PlayerCharacter_C::M_GetOwningPlayerNetID() const {
	return Read<struct FString>((byte*)this + 6304);
}
struct FString* ABP_PlayerCharacter_C::M_PtrGetOwningPlayerNetID() {
	return reinterpret_cast<struct FString*>((byte*)this + 6304);
}
void ABP_PlayerCharacter_C::M_SetOwningPlayerNetID(const struct FString& value) {
	Write((byte*)this + 6304, value);
}
// Member Getter and Setter of IsHost
// Declaration: bool IsHost
bool ABP_PlayerCharacter_C::M_GetIsHost() const {
	return Read<bool>((byte*)this + 6320);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsHost() {
	return reinterpret_cast<bool*>((byte*)this + 6320);
}
void ABP_PlayerCharacter_C::M_SetIsHost(const bool& value) {
	Write((byte*)this + 6320, value);
}
// Member Getter and Setter of IsStartingLoadFinished
// Declaration: bool IsStartingLoadFinished
bool ABP_PlayerCharacter_C::M_GetIsStartingLoadFinished() const {
	return Read<bool>((byte*)this + 6321);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsStartingLoadFinished() {
	return reinterpret_cast<bool*>((byte*)this + 6321);
}
void ABP_PlayerCharacter_C::M_SetIsStartingLoadFinished(const bool& value) {
	Write((byte*)this + 6321, value);
}
// Member Getter and Setter of InBuildingMode
// Declaration: bool InBuildingMode
bool ABP_PlayerCharacter_C::M_GetInBuildingMode() const {
	return Read<bool>((byte*)this + 6322);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInBuildingMode() {
	return reinterpret_cast<bool*>((byte*)this + 6322);
}
void ABP_PlayerCharacter_C::M_SetInBuildingMode(const bool& value) {
	Write((byte*)this + 6322, value);
}
// Member Getter and Setter of BuildingModeTargetingOffset
// Declaration: bool BuildingModeTargetingOffset
bool ABP_PlayerCharacter_C::M_GetBuildingModeTargetingOffset() const {
	return Read<bool>((byte*)this + 6323);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBuildingModeTargetingOffset() {
	return reinterpret_cast<bool*>((byte*)this + 6323);
}
void ABP_PlayerCharacter_C::M_SetBuildingModeTargetingOffset(const bool& value) {
	Write((byte*)this + 6323, value);
}
// Member Getter and Setter of RotatingObjectMode
// Declaration: bool RotatingObjectMode
bool ABP_PlayerCharacter_C::M_GetRotatingObjectMode() const {
	return Read<bool>((byte*)this + 6324);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRotatingObjectMode() {
	return reinterpret_cast<bool*>((byte*)this + 6324);
}
void ABP_PlayerCharacter_C::M_SetRotatingObjectMode(const bool& value) {
	Write((byte*)this + 6324, value);
}
// Member Getter and Setter of FoliageDestination
// Declaration: struct FVector FoliageDestination
struct FVector ABP_PlayerCharacter_C::M_GetFoliageDestination() const {
	return Read<struct FVector>((byte*)this + 6328);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetFoliageDestination() {
	return reinterpret_cast<struct FVector*>((byte*)this + 6328);
}
void ABP_PlayerCharacter_C::M_SetFoliageDestination(const struct FVector& value) {
	Write((byte*)this + 6328, value);
}
// Member Getter and Setter of HadRightTool
// Declaration: bool HadRightTool
bool ABP_PlayerCharacter_C::M_GetHadRightTool() const {
	return Read<bool>((byte*)this + 6340);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadRightTool() {
	return reinterpret_cast<bool*>((byte*)this + 6340);
}
void ABP_PlayerCharacter_C::M_SetHadRightTool(const bool& value) {
	Write((byte*)this + 6340, value);
}
// Member Getter and Setter of ActionCamera
// Declaration: class ABP_Camera_C* ActionCamera
class ABP_Camera_C* ABP_PlayerCharacter_C::M_GetActionCamera() const {
	return Read<class ABP_Camera_C*>((byte*)this + 6344);
}
class ABP_Camera_C** ABP_PlayerCharacter_C::M_PtrGetActionCamera() {
	return reinterpret_cast<class ABP_Camera_C**>((byte*)this + 6344);
}
void ABP_PlayerCharacter_C::M_SetActionCamera(const class ABP_Camera_C*& value) {
	Write((byte*)this + 6344, value);
}
// Member Getter and Setter of CameraLerpCurve
// Declaration: class UCurveFloat* CameraLerpCurve
class UCurveFloat* ABP_PlayerCharacter_C::M_GetCameraLerpCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 6352);
}
class UCurveFloat** ABP_PlayerCharacter_C::M_PtrGetCameraLerpCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 6352);
}
void ABP_PlayerCharacter_C::M_SetCameraLerpCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 6352, value);
}
// Member Getter and Setter of CameraTargets
// Declaration: struct FST_Camera_Targets CameraTargets
struct FST_Camera_Targets ABP_PlayerCharacter_C::M_GetCameraTargets() const {
	return Read<struct FST_Camera_Targets>((byte*)this + 6360);
}
struct FST_Camera_Targets* ABP_PlayerCharacter_C::M_PtrGetCameraTargets() {
	return reinterpret_cast<struct FST_Camera_Targets*>((byte*)this + 6360);
}
void ABP_PlayerCharacter_C::M_SetCameraTargets(const struct FST_Camera_Targets& value) {
	Write((byte*)this + 6360, value);
}
// Member Getter and Setter of CurrentCameraSettings
// Declaration: struct FST_CameraSettings CurrentCameraSettings
struct FST_CameraSettings ABP_PlayerCharacter_C::M_GetCurrentCameraSettings() const {
	return Read<struct FST_CameraSettings>((byte*)this + 6580);
}
struct FST_CameraSettings* ABP_PlayerCharacter_C::M_PtrGetCurrentCameraSettings() {
	return reinterpret_cast<struct FST_CameraSettings*>((byte*)this + 6580);
}
void ABP_PlayerCharacter_C::M_SetCurrentCameraSettings(const struct FST_CameraSettings& value) {
	Write((byte*)this + 6580, value);
}
// Member Getter and Setter of PreviousViewmode
// Declaration: TEnumAsByte<E_ViewMode> PreviousViewmode
TEnumAsByte<E_ViewMode> ABP_PlayerCharacter_C::M_GetPreviousViewmode() const {
	return Read<TEnumAsByte<E_ViewMode>>((byte*)this + 6600);
}
TEnumAsByte<E_ViewMode>* ABP_PlayerCharacter_C::M_PtrGetPreviousViewmode() {
	return reinterpret_cast<TEnumAsByte<E_ViewMode>*>((byte*)this + 6600);
}
void ABP_PlayerCharacter_C::M_SetPreviousViewmode(const TEnumAsByte<E_ViewMode>& value) {
	Write((byte*)this + 6600, value);
}
// Member Getter and Setter of ViewModeRep
// Declaration: TEnumAsByte<E_ViewMode> ViewModeRep
TEnumAsByte<E_ViewMode> ABP_PlayerCharacter_C::M_GetViewModeRep() const {
	return Read<TEnumAsByte<E_ViewMode>>((byte*)this + 6601);
}
TEnumAsByte<E_ViewMode>* ABP_PlayerCharacter_C::M_PtrGetViewModeRep() {
	return reinterpret_cast<TEnumAsByte<E_ViewMode>*>((byte*)this + 6601);
}
void ABP_PlayerCharacter_C::M_SetViewModeRep(const TEnumAsByte<E_ViewMode>& value) {
	Write((byte*)this + 6601, value);
}
// Member Getter and Setter of MountCameraRotation
// Declaration: struct FRotator MountCameraRotation
struct FRotator ABP_PlayerCharacter_C::M_GetMountCameraRotation() const {
	return Read<struct FRotator>((byte*)this + 6604);
}
struct FRotator* ABP_PlayerCharacter_C::M_PtrGetMountCameraRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 6604);
}
void ABP_PlayerCharacter_C::M_SetMountCameraRotation(const struct FRotator& value) {
	Write((byte*)this + 6604, value);
}
// Member Getter and Setter of FirstPersonCameraSocket
// Declaration: struct FName FirstPersonCameraSocket
struct FName ABP_PlayerCharacter_C::M_GetFirstPersonCameraSocket() const {
	return Read<struct FName>((byte*)this + 6616);
}
struct FName* ABP_PlayerCharacter_C::M_PtrGetFirstPersonCameraSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 6616);
}
void ABP_PlayerCharacter_C::M_SetFirstPersonCameraSocket(const struct FName& value) {
	Write((byte*)this + 6616, value);
}
// Member Getter and Setter of DefaultViewYawMin
// Declaration: float DefaultViewYawMin
float ABP_PlayerCharacter_C::M_GetDefaultViewYawMin() const {
	return Read<float>((byte*)this + 6624);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewYawMin() {
	return reinterpret_cast<float*>((byte*)this + 6624);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewYawMin(const float& value) {
	Write((byte*)this + 6624, value);
}
// Member Getter and Setter of DefaultViewYawMax
// Declaration: float DefaultViewYawMax
float ABP_PlayerCharacter_C::M_GetDefaultViewYawMax() const {
	return Read<float>((byte*)this + 6628);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewYawMax() {
	return reinterpret_cast<float*>((byte*)this + 6628);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewYawMax(const float& value) {
	Write((byte*)this + 6628, value);
}
// Member Getter and Setter of DefaultViewPitchMin
// Declaration: float DefaultViewPitchMin
float ABP_PlayerCharacter_C::M_GetDefaultViewPitchMin() const {
	return Read<float>((byte*)this + 6632);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewPitchMin() {
	return reinterpret_cast<float*>((byte*)this + 6632);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewPitchMin(const float& value) {
	Write((byte*)this + 6632, value);
}
// Member Getter and Setter of DefaultViewPitchMax
// Declaration: float DefaultViewPitchMax
float ABP_PlayerCharacter_C::M_GetDefaultViewPitchMax() const {
	return Read<float>((byte*)this + 6636);
}
float* ABP_PlayerCharacter_C::M_PtrGetDefaultViewPitchMax() {
	return reinterpret_cast<float*>((byte*)this + 6636);
}
void ABP_PlayerCharacter_C::M_SetDefaultViewPitchMax(const float& value) {
	Write((byte*)this + 6636, value);
}
// Member Getter and Setter of ThirdPersonMinDistance
// Declaration: float ThirdPersonMinDistance
float ABP_PlayerCharacter_C::M_GetThirdPersonMinDistance() const {
	return Read<float>((byte*)this + 6640);
}
float* ABP_PlayerCharacter_C::M_PtrGetThirdPersonMinDistance() {
	return reinterpret_cast<float*>((byte*)this + 6640);
}
void ABP_PlayerCharacter_C::M_SetThirdPersonMinDistance(const float& value) {
	Write((byte*)this + 6640, value);
}
// Member Getter and Setter of ThirdPersonMaxDistance
// Declaration: float ThirdPersonMaxDistance
float ABP_PlayerCharacter_C::M_GetThirdPersonMaxDistance() const {
	return Read<float>((byte*)this + 6644);
}
float* ABP_PlayerCharacter_C::M_PtrGetThirdPersonMaxDistance() {
	return reinterpret_cast<float*>((byte*)this + 6644);
}
void ABP_PlayerCharacter_C::M_SetThirdPersonMaxDistance(const float& value) {
	Write((byte*)this + 6644, value);
}
// Member Getter and Setter of TP_CameraDistance_Temp
// Declaration: float TP_CameraDistance_Temp
float ABP_PlayerCharacter_C::M_GetTP_CameraDistance_Temp() const {
	return Read<float>((byte*)this + 6648);
}
float* ABP_PlayerCharacter_C::M_PtrGetTP_CameraDistance_Temp() {
	return reinterpret_cast<float*>((byte*)this + 6648);
}
void ABP_PlayerCharacter_C::M_SetTP_CameraDistance_Temp(const float& value) {
	Write((byte*)this + 6648, value);
}
// Member Getter and Setter of ZoomCounter
// Declaration: int32_t ZoomCounter
int32_t ABP_PlayerCharacter_C::M_GetZoomCounter() const {
	return Read<int32_t>((byte*)this + 6652);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetZoomCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 6652);
}
void ABP_PlayerCharacter_C::M_SetZoomCounter(const int32_t& value) {
	Write((byte*)this + 6652, value);
}
// Member Getter and Setter of PlayerCamera
// Declaration: bool PlayerCamera
bool ABP_PlayerCharacter_C::M_GetPlayerCamera() const {
	return Read<bool>((byte*)this + 6656);
}
bool* ABP_PlayerCharacter_C::M_PtrGetPlayerCamera() {
	return reinterpret_cast<bool*>((byte*)this + 6656);
}
void ABP_PlayerCharacter_C::M_SetPlayerCamera(const bool& value) {
	Write((byte*)this + 6656, value);
}
// Member Getter and Setter of LimitPlayerCamera
// Declaration: bool LimitPlayerCamera
bool ABP_PlayerCharacter_C::M_GetLimitPlayerCamera() const {
	return Read<bool>((byte*)this + 6657);
}
bool* ABP_PlayerCharacter_C::M_PtrGetLimitPlayerCamera() {
	return reinterpret_cast<bool*>((byte*)this + 6657);
}
void ABP_PlayerCharacter_C::M_SetLimitPlayerCamera(const bool& value) {
	Write((byte*)this + 6657, value);
}
// Member Getter and Setter of InteractedSlotIndex
// Declaration: int32_t InteractedSlotIndex
int32_t ABP_PlayerCharacter_C::M_GetInteractedSlotIndex() const {
	return Read<int32_t>((byte*)this + 6660);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetInteractedSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 6660);
}
void ABP_PlayerCharacter_C::M_SetInteractedSlotIndex(const int32_t& value) {
	Write((byte*)this + 6660, value);
}
// Member Getter and Setter of IsInteractTimer_
// Declaration: bool IsInteractTimer_
bool ABP_PlayerCharacter_C::M_GetIsInteractTimer_() const {
	return Read<bool>((byte*)this + 6664);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsInteractTimer_() {
	return reinterpret_cast<bool*>((byte*)this + 6664);
}
void ABP_PlayerCharacter_C::M_SetIsInteractTimer_(const bool& value) {
	Write((byte*)this + 6664, value);
}
// Member Getter and Setter of SwapItemOnInteraction
// Declaration: bool SwapItemOnInteraction
bool ABP_PlayerCharacter_C::M_GetSwapItemOnInteraction() const {
	return Read<bool>((byte*)this + 6665);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSwapItemOnInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 6665);
}
void ABP_PlayerCharacter_C::M_SetSwapItemOnInteraction(const bool& value) {
	Write((byte*)this + 6665, value);
}
// Member Getter and Setter of InputDisabled
// Declaration: bool InputDisabled
bool ABP_PlayerCharacter_C::M_GetInputDisabled() const {
	return Read<bool>((byte*)this + 6666);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInputDisabled() {
	return reinterpret_cast<bool*>((byte*)this + 6666);
}
void ABP_PlayerCharacter_C::M_SetInputDisabled(const bool& value) {
	Write((byte*)this + 6666, value);
}
// Member Getter and Setter of ClickBlock
// Declaration: bool ClickBlock
bool ABP_PlayerCharacter_C::M_GetClickBlock() const {
	return Read<bool>((byte*)this + 6667);
}
bool* ABP_PlayerCharacter_C::M_PtrGetClickBlock() {
	return reinterpret_cast<bool*>((byte*)this + 6667);
}
void ABP_PlayerCharacter_C::M_SetClickBlock(const bool& value) {
	Write((byte*)this + 6667, value);
}
// Member Getter and Setter of UpBool
// Declaration: bool UpBool
bool ABP_PlayerCharacter_C::M_GetUpBool() const {
	return Read<bool>((byte*)this + 6668);
}
bool* ABP_PlayerCharacter_C::M_PtrGetUpBool() {
	return reinterpret_cast<bool*>((byte*)this + 6668);
}
void ABP_PlayerCharacter_C::M_SetUpBool(const bool& value) {
	Write((byte*)this + 6668, value);
}
// Member Getter and Setter of DownBool
// Declaration: bool DownBool
bool ABP_PlayerCharacter_C::M_GetDownBool() const {
	return Read<bool>((byte*)this + 6669);
}
bool* ABP_PlayerCharacter_C::M_PtrGetDownBool() {
	return reinterpret_cast<bool*>((byte*)this + 6669);
}
void ABP_PlayerCharacter_C::M_SetDownBool(const bool& value) {
	Write((byte*)this + 6669, value);
}
// Member Getter and Setter of RightBool
// Declaration: bool RightBool
bool ABP_PlayerCharacter_C::M_GetRightBool() const {
	return Read<bool>((byte*)this + 6670);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRightBool() {
	return reinterpret_cast<bool*>((byte*)this + 6670);
}
void ABP_PlayerCharacter_C::M_SetRightBool(const bool& value) {
	Write((byte*)this + 6670, value);
}
// Member Getter and Setter of LeftBool
// Declaration: bool LeftBool
bool ABP_PlayerCharacter_C::M_GetLeftBool() const {
	return Read<bool>((byte*)this + 6671);
}
bool* ABP_PlayerCharacter_C::M_PtrGetLeftBool() {
	return reinterpret_cast<bool*>((byte*)this + 6671);
}
void ABP_PlayerCharacter_C::M_SetLeftBool(const bool& value) {
	Write((byte*)this + 6671, value);
}
// Member Getter and Setter of NextBool
// Declaration: bool NextBool
bool ABP_PlayerCharacter_C::M_GetNextBool() const {
	return Read<bool>((byte*)this + 6672);
}
bool* ABP_PlayerCharacter_C::M_PtrGetNextBool() {
	return reinterpret_cast<bool*>((byte*)this + 6672);
}
void ABP_PlayerCharacter_C::M_SetNextBool(const bool& value) {
	Write((byte*)this + 6672, value);
}
// Member Getter and Setter of PreviousBool
// Declaration: bool PreviousBool
bool ABP_PlayerCharacter_C::M_GetPreviousBool() const {
	return Read<bool>((byte*)this + 6673);
}
bool* ABP_PlayerCharacter_C::M_PtrGetPreviousBool() {
	return reinterpret_cast<bool*>((byte*)this + 6673);
}
void ABP_PlayerCharacter_C::M_SetPreviousBool(const bool& value) {
	Write((byte*)this + 6673, value);
}
// Member Getter and Setter of HitComponent
// Declaration: class UPrimitiveComponent* HitComponent
class UPrimitiveComponent* ABP_PlayerCharacter_C::M_GetHitComponent() const {
	return Read<class UPrimitiveComponent*>((byte*)this + 6680);
}
class UPrimitiveComponent** ABP_PlayerCharacter_C::M_PtrGetHitComponent() {
	return reinterpret_cast<class UPrimitiveComponent**>((byte*)this + 6680);
}
void ABP_PlayerCharacter_C::M_SetHitComponent(const class UPrimitiveComponent*& value) {
	Write((byte*)this + 6680, value);
}
// Member Getter and Setter of LastHitComponent
// Declaration: class UPrimitiveComponent* LastHitComponent
class UPrimitiveComponent* ABP_PlayerCharacter_C::M_GetLastHitComponent() const {
	return Read<class UPrimitiveComponent*>((byte*)this + 6688);
}
class UPrimitiveComponent** ABP_PlayerCharacter_C::M_PtrGetLastHitComponent() {
	return reinterpret_cast<class UPrimitiveComponent**>((byte*)this + 6688);
}
void ABP_PlayerCharacter_C::M_SetLastHitComponent(const class UPrimitiveComponent*& value) {
	Write((byte*)this + 6688, value);
}
// Member Getter and Setter of BlockModificationMenuMovement
// Declaration: bool BlockModificationMenuMovement
bool ABP_PlayerCharacter_C::M_GetBlockModificationMenuMovement() const {
	return Read<bool>((byte*)this + 6696);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBlockModificationMenuMovement() {
	return reinterpret_cast<bool*>((byte*)this + 6696);
}
void ABP_PlayerCharacter_C::M_SetBlockModificationMenuMovement(const bool& value) {
	Write((byte*)this + 6696, value);
}
// Member Getter and Setter of TimerPickup
// Declaration: bool TimerPickup
bool ABP_PlayerCharacter_C::M_GetTimerPickup() const {
	return Read<bool>((byte*)this + 6697);
}
bool* ABP_PlayerCharacter_C::M_PtrGetTimerPickup() {
	return reinterpret_cast<bool*>((byte*)this + 6697);
}
void ABP_PlayerCharacter_C::M_SetTimerPickup(const bool& value) {
	Write((byte*)this + 6697, value);
}
// Member Getter and Setter of SpawnedHeldItem
// Declaration: TAssetPtr<class FSpawnedHeldItem__DelegateSignature> SpawnedHeldItem
TAssetPtr<class FSpawnedHeldItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetSpawnedHeldItem() const {
	return Read<TAssetPtr<class FSpawnedHeldItem__DelegateSignature>>((byte*)this + 6704);
}
TAssetPtr<class FSpawnedHeldItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetSpawnedHeldItem() {
	return reinterpret_cast<TAssetPtr<class FSpawnedHeldItem__DelegateSignature>*>((byte*)this + 6704);
}
void ABP_PlayerCharacter_C::M_SetSpawnedHeldItem(const TAssetPtr<class FSpawnedHeldItem__DelegateSignature>& value) {
	Write((byte*)this + 6704, value);
}
// Member Getter and Setter of DespawnedHeldItem
// Declaration: TAssetPtr<class FDespawnedHeldItem__DelegateSignature> DespawnedHeldItem
TAssetPtr<class FDespawnedHeldItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetDespawnedHeldItem() const {
	return Read<TAssetPtr<class FDespawnedHeldItem__DelegateSignature>>((byte*)this + 6720);
}
TAssetPtr<class FDespawnedHeldItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetDespawnedHeldItem() {
	return reinterpret_cast<TAssetPtr<class FDespawnedHeldItem__DelegateSignature>*>((byte*)this + 6720);
}
void ABP_PlayerCharacter_C::M_SetDespawnedHeldItem(const TAssetPtr<class FDespawnedHeldItem__DelegateSignature>& value) {
	Write((byte*)this + 6720, value);
}
// Member Getter and Setter of SpawnedOffHandItem
// Declaration: TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> SpawnedOffHandItem
TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetSpawnedOffHandItem() const {
	return Read<TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>>((byte*)this + 6736);
}
TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetSpawnedOffHandItem() {
	return reinterpret_cast<TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>*>((byte*)this + 6736);
}
void ABP_PlayerCharacter_C::M_SetSpawnedOffHandItem(const TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>& value) {
	Write((byte*)this + 6736, value);
}
// Member Getter and Setter of DespawnedOffHandItem
// Declaration: TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> DespawnedOffHandItem
TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> ABP_PlayerCharacter_C::M_GetDespawnedOffHandItem() const {
	return Read<TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>>((byte*)this + 6752);
}
TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetDespawnedOffHandItem() {
	return reinterpret_cast<TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>*>((byte*)this + 6752);
}
void ABP_PlayerCharacter_C::M_SetDespawnedOffHandItem(const TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>& value) {
	Write((byte*)this + 6752, value);
}
// Member Getter and Setter of CurrentlyCrafting
// Declaration: struct FName CurrentlyCrafting
struct FName ABP_PlayerCharacter_C::M_GetCurrentlyCrafting() const {
	return Read<struct FName>((byte*)this + 6768);
}
struct FName* ABP_PlayerCharacter_C::M_PtrGetCurrentlyCrafting() {
	return reinterpret_cast<struct FName*>((byte*)this + 6768);
}
void ABP_PlayerCharacter_C::M_SetCurrentlyCrafting(const struct FName& value) {
	Write((byte*)this + 6768, value);
}
// Member Getter and Setter of InteractionKeyDown
// Declaration: bool InteractionKeyDown
bool ABP_PlayerCharacter_C::M_GetInteractionKeyDown() const {
	return Read<bool>((byte*)this + 6776);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInteractionKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 6776);
}
void ABP_PlayerCharacter_C::M_SetInteractionKeyDown(const bool& value) {
	Write((byte*)this + 6776, value);
}
// Member Getter and Setter of TakingOutToolType
// Declaration: TEnumAsByte<E_Tools> TakingOutToolType
TEnumAsByte<E_Tools> ABP_PlayerCharacter_C::M_GetTakingOutToolType() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 6777);
}
TEnumAsByte<E_Tools>* ABP_PlayerCharacter_C::M_PtrGetTakingOutToolType() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 6777);
}
void ABP_PlayerCharacter_C::M_SetTakingOutToolType(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 6777, value);
}
// Member Getter and Setter of EquipOffhandHandle
// Declaration: struct FTimerHandle EquipOffhandHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetEquipOffhandHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6784);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetEquipOffhandHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6784);
}
void ABP_PlayerCharacter_C::M_SetEquipOffhandHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6784, value);
}
// Member Getter and Setter of UnequipOffhandHandle
// Declaration: struct FTimerHandle UnequipOffhandHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetUnequipOffhandHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6792);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetUnequipOffhandHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6792);
}
void ABP_PlayerCharacter_C::M_SetUnequipOffhandHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6792, value);
}
// Member Getter and Setter of EquipToolHandle
// Declaration: struct FTimerHandle EquipToolHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetEquipToolHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6800);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetEquipToolHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6800);
}
void ABP_PlayerCharacter_C::M_SetEquipToolHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6800, value);
}
// Member Getter and Setter of UnequipToolHandle
// Declaration: struct FTimerHandle UnequipToolHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetUnequipToolHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6808);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetUnequipToolHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6808);
}
void ABP_PlayerCharacter_C::M_SetUnequipToolHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6808, value);
}
// Member Getter and Setter of HoldOffhandHandle
// Declaration: struct FTimerHandle HoldOffhandHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetHoldOffhandHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 6816);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetHoldOffhandHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6816);
}
void ABP_PlayerCharacter_C::M_SetHoldOffhandHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 6816, value);
}
// Member Getter and Setter of SelectedQuickSlotItem
// Declaration: struct FST_ItemDetails SelectedQuickSlotItem
struct FST_ItemDetails ABP_PlayerCharacter_C::M_GetSelectedQuickSlotItem() const {
	return Read<struct FST_ItemDetails>((byte*)this + 6824);
}
struct FST_ItemDetails* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotItem() {
	return reinterpret_cast<struct FST_ItemDetails*>((byte*)this + 6824);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotItem(const struct FST_ItemDetails& value) {
	Write((byte*)this + 6824, value);
}
// Member Getter and Setter of SelectedQuickSlotID
// Declaration: int32_t SelectedQuickSlotID
int32_t ABP_PlayerCharacter_C::M_GetSelectedQuickSlotID() const {
	return Read<int32_t>((byte*)this + 7792);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotID() {
	return reinterpret_cast<int32_t*>((byte*)this + 7792);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotID(const int32_t& value) {
	Write((byte*)this + 7792, value);
}
// Member Getter and Setter of LastSelectedQuickSlotID
// Declaration: int32_t LastSelectedQuickSlotID
int32_t ABP_PlayerCharacter_C::M_GetLastSelectedQuickSlotID() const {
	return Read<int32_t>((byte*)this + 7796);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetLastSelectedQuickSlotID() {
	return reinterpret_cast<int32_t*>((byte*)this + 7796);
}
void ABP_PlayerCharacter_C::M_SetLastSelectedQuickSlotID(const int32_t& value) {
	Write((byte*)this + 7796, value);
}
// Member Getter and Setter of SelectedQuickSlotDrawWeapon
// Declaration: bool SelectedQuickSlotDrawWeapon
bool ABP_PlayerCharacter_C::M_GetSelectedQuickSlotDrawWeapon() const {
	return Read<bool>((byte*)this + 7800);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSelectedQuickSlotDrawWeapon() {
	return reinterpret_cast<bool*>((byte*)this + 7800);
}
void ABP_PlayerCharacter_C::M_SetSelectedQuickSlotDrawWeapon(const bool& value) {
	Write((byte*)this + 7800, value);
}
// Member Getter and Setter of EquippedToolsForInteraction
// Declaration: bool EquippedToolsForInteraction
bool ABP_PlayerCharacter_C::M_GetEquippedToolsForInteraction() const {
	return Read<bool>((byte*)this + 7801);
}
bool* ABP_PlayerCharacter_C::M_PtrGetEquippedToolsForInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 7801);
}
void ABP_PlayerCharacter_C::M_SetEquippedToolsForInteraction(const bool& value) {
	Write((byte*)this + 7801, value);
}
// Member Getter and Setter of WantsToSkip
// Declaration: TEnumAsByte<E_WantsToSkip> WantsToSkip
TEnumAsByte<E_WantsToSkip> ABP_PlayerCharacter_C::M_GetWantsToSkip() const {
	return Read<TEnumAsByte<E_WantsToSkip>>((byte*)this + 7802);
}
TEnumAsByte<E_WantsToSkip>* ABP_PlayerCharacter_C::M_PtrGetWantsToSkip() {
	return reinterpret_cast<TEnumAsByte<E_WantsToSkip>*>((byte*)this + 7802);
}
void ABP_PlayerCharacter_C::M_SetWantsToSkip(const TEnumAsByte<E_WantsToSkip>& value) {
	Write((byte*)this + 7802, value);
}
// Member Getter and Setter of Headbobbing
// Declaration: bool Headbobbing
bool ABP_PlayerCharacter_C::M_GetHeadbobbing() const {
	return Read<bool>((byte*)this + 7803);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 7803);
}
void ABP_PlayerCharacter_C::M_SetHeadbobbing(const bool& value) {
	Write((byte*)this + 7803, value);
}
// Member Getter and Setter of RightShoulder
// Declaration: bool RightShoulder
bool ABP_PlayerCharacter_C::M_GetRightShoulder() const {
	return Read<bool>((byte*)this + 7804);
}
bool* ABP_PlayerCharacter_C::M_PtrGetRightShoulder() {
	return reinterpret_cast<bool*>((byte*)this + 7804);
}
void ABP_PlayerCharacter_C::M_SetRightShoulder(const bool& value) {
	Write((byte*)this + 7804, value);
}
// Member Getter and Setter of ForwardAxisInput
// Declaration: float ForwardAxisInput
float ABP_PlayerCharacter_C::M_GetForwardAxisInput() const {
	return Read<float>((byte*)this + 7808);
}
float* ABP_PlayerCharacter_C::M_PtrGetForwardAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7808);
}
void ABP_PlayerCharacter_C::M_SetForwardAxisInput(const float& value) {
	Write((byte*)this + 7808, value);
}
// Member Getter and Setter of RightAxisInput
// Declaration: float RightAxisInput
float ABP_PlayerCharacter_C::M_GetRightAxisInput() const {
	return Read<float>((byte*)this + 7812);
}
float* ABP_PlayerCharacter_C::M_PtrGetRightAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7812);
}
void ABP_PlayerCharacter_C::M_SetRightAxisInput(const float& value) {
	Write((byte*)this + 7812, value);
}
// Member Getter and Setter of CameraShakes
// Declaration: bool CameraShakes
bool ABP_PlayerCharacter_C::M_GetCameraShakes() const {
	return Read<bool>((byte*)this + 7816);
}
bool* ABP_PlayerCharacter_C::M_PtrGetCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 7816);
}
void ABP_PlayerCharacter_C::M_SetCameraShakes(const bool& value) {
	Write((byte*)this + 7816, value);
}
// Member Getter and Setter of Breathing
// Declaration: bool Breathing
bool ABP_PlayerCharacter_C::M_GetBreathing() const {
	return Read<bool>((byte*)this + 7817);
}
bool* ABP_PlayerCharacter_C::M_PtrGetBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 7817);
}
void ABP_PlayerCharacter_C::M_SetBreathing(const bool& value) {
	Write((byte*)this + 7817, value);
}
// Member Getter and Setter of QuickslotMenuOpen
// Declaration: bool QuickslotMenuOpen
bool ABP_PlayerCharacter_C::M_GetQuickslotMenuOpen() const {
	return Read<bool>((byte*)this + 7818);
}
bool* ABP_PlayerCharacter_C::M_PtrGetQuickslotMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7818);
}
void ABP_PlayerCharacter_C::M_SetQuickslotMenuOpen(const bool& value) {
	Write((byte*)this + 7818, value);
}
// Member Getter and Setter of SleepMenuOpen
// Declaration: bool SleepMenuOpen
bool ABP_PlayerCharacter_C::M_GetSleepMenuOpen() const {
	return Read<bool>((byte*)this + 7819);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSleepMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7819);
}
void ABP_PlayerCharacter_C::M_SetSleepMenuOpen(const bool& value) {
	Write((byte*)this + 7819, value);
}
// Member Getter and Setter of WindowMenuOpen
// Declaration: bool WindowMenuOpen
bool ABP_PlayerCharacter_C::M_GetWindowMenuOpen() const {
	return Read<bool>((byte*)this + 7820);
}
bool* ABP_PlayerCharacter_C::M_PtrGetWindowMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7820);
}
void ABP_PlayerCharacter_C::M_SetWindowMenuOpen(const bool& value) {
	Write((byte*)this + 7820, value);
}
// Member Getter and Setter of FurnitureDecorationMenuOpen
// Declaration: bool FurnitureDecorationMenuOpen
bool ABP_PlayerCharacter_C::M_GetFurnitureDecorationMenuOpen() const {
	return Read<bool>((byte*)this + 7821);
}
bool* ABP_PlayerCharacter_C::M_PtrGetFurnitureDecorationMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7821);
}
void ABP_PlayerCharacter_C::M_SetFurnitureDecorationMenuOpen(const bool& value) {
	Write((byte*)this + 7821, value);
}
// Member Getter and Setter of EmoteMenuOpen
// Declaration: bool EmoteMenuOpen
bool ABP_PlayerCharacter_C::M_GetEmoteMenuOpen() const {
	return Read<bool>((byte*)this + 7822);
}
bool* ABP_PlayerCharacter_C::M_PtrGetEmoteMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7822);
}
void ABP_PlayerCharacter_C::M_SetEmoteMenuOpen(const bool& value) {
	Write((byte*)this + 7822, value);
}
// Member Getter and Setter of DecorMenuOpen
// Declaration: bool DecorMenuOpen
bool ABP_PlayerCharacter_C::M_GetDecorMenuOpen() const {
	return Read<bool>((byte*)this + 7823);
}
bool* ABP_PlayerCharacter_C::M_PtrGetDecorMenuOpen() {
	return reinterpret_cast<bool*>((byte*)this + 7823);
}
void ABP_PlayerCharacter_C::M_SetDecorMenuOpen(const bool& value) {
	Write((byte*)this + 7823, value);
}
// Member Getter and Setter of TorchLighten
// Declaration: bool TorchLighten
bool ABP_PlayerCharacter_C::M_GetTorchLighten() const {
	return Read<bool>((byte*)this + 7824);
}
bool* ABP_PlayerCharacter_C::M_PtrGetTorchLighten() {
	return reinterpret_cast<bool*>((byte*)this + 7824);
}
void ABP_PlayerCharacter_C::M_SetTorchLighten(const bool& value) {
	Write((byte*)this + 7824, value);
}
// Member Getter and Setter of UsingEmote
// Declaration: bool UsingEmote
bool ABP_PlayerCharacter_C::M_GetUsingEmote() const {
	return Read<bool>((byte*)this + 7825);
}
bool* ABP_PlayerCharacter_C::M_PtrGetUsingEmote() {
	return reinterpret_cast<bool*>((byte*)this + 7825);
}
void ABP_PlayerCharacter_C::M_SetUsingEmote(const bool& value) {
	Write((byte*)this + 7825, value);
}
// Member Getter and Setter of InteractWithObject
// Declaration: TAssetPtr<class FInteractWithObject__DelegateSignature> InteractWithObject
TAssetPtr<class FInteractWithObject__DelegateSignature> ABP_PlayerCharacter_C::M_GetInteractWithObject() const {
	return Read<TAssetPtr<class FInteractWithObject__DelegateSignature>>((byte*)this + 7832);
}
TAssetPtr<class FInteractWithObject__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetInteractWithObject() {
	return reinterpret_cast<TAssetPtr<class FInteractWithObject__DelegateSignature>*>((byte*)this + 7832);
}
void ABP_PlayerCharacter_C::M_SetInteractWithObject(const TAssetPtr<class FInteractWithObject__DelegateSignature>& value) {
	Write((byte*)this + 7832, value);
}
// Member Getter and Setter of InteractionDetect_Task
// Declaration: class UTask_InteractionDetect_C* InteractionDetect_Task
class UTask_InteractionDetect_C* ABP_PlayerCharacter_C::M_GetInteractionDetect_Task() const {
	return Read<class UTask_InteractionDetect_C*>((byte*)this + 7848);
}
class UTask_InteractionDetect_C** ABP_PlayerCharacter_C::M_PtrGetInteractionDetect_Task() {
	return reinterpret_cast<class UTask_InteractionDetect_C**>((byte*)this + 7848);
}
void ABP_PlayerCharacter_C::M_SetInteractionDetect_Task(const class UTask_InteractionDetect_C*& value) {
	Write((byte*)this + 7848, value);
}
// Member Getter and Setter of ShouldCancelInteractTimer
// Declaration: bool ShouldCancelInteractTimer
bool ABP_PlayerCharacter_C::M_GetShouldCancelInteractTimer() const {
	return Read<bool>((byte*)this + 7856);
}
bool* ABP_PlayerCharacter_C::M_PtrGetShouldCancelInteractTimer() {
	return reinterpret_cast<bool*>((byte*)this + 7856);
}
void ABP_PlayerCharacter_C::M_SetShouldCancelInteractTimer(const bool& value) {
	Write((byte*)this + 7856, value);
}
// Member Getter and Setter of InteractionDetect_Mutex
// Declaration: class UMultiTaskMutex* InteractionDetect_Mutex
class UMultiTaskMutex* ABP_PlayerCharacter_C::M_GetInteractionDetect_Mutex() const {
	return Read<class UMultiTaskMutex*>((byte*)this + 7864);
}
class UMultiTaskMutex** ABP_PlayerCharacter_C::M_PtrGetInteractionDetect_Mutex() {
	return reinterpret_cast<class UMultiTaskMutex**>((byte*)this + 7864);
}
void ABP_PlayerCharacter_C::M_SetInteractionDetect_Mutex(const class UMultiTaskMutex*& value) {
	Write((byte*)this + 7864, value);
}
// Member Getter and Setter of PlayerThreadPool
// Declaration: class UMultiTaskThreadPool* PlayerThreadPool
class UMultiTaskThreadPool* ABP_PlayerCharacter_C::M_GetPlayerThreadPool() const {
	return Read<class UMultiTaskThreadPool*>((byte*)this + 7872);
}
class UMultiTaskThreadPool** ABP_PlayerCharacter_C::M_PtrGetPlayerThreadPool() {
	return reinterpret_cast<class UMultiTaskThreadPool**>((byte*)this + 7872);
}
void ABP_PlayerCharacter_C::M_SetPlayerThreadPool(const class UMultiTaskThreadPool*& value) {
	Write((byte*)this + 7872, value);
}
// Member Getter and Setter of HideHair
// Declaration: bool HideHair
bool ABP_PlayerCharacter_C::M_GetHideHair() const {
	return Read<bool>((byte*)this + 7880);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHideHair() {
	return reinterpret_cast<bool*>((byte*)this + 7880);
}
void ABP_PlayerCharacter_C::M_SetHideHair(const bool& value) {
	Write((byte*)this + 7880, value);
}
// Member Getter and Setter of IsBeingFollowed
// Declaration: bool IsBeingFollowed
bool ABP_PlayerCharacter_C::M_GetIsBeingFollowed() const {
	return Read<bool>((byte*)this + 7881);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsBeingFollowed() {
	return reinterpret_cast<bool*>((byte*)this + 7881);
}
void ABP_PlayerCharacter_C::M_SetIsBeingFollowed(const bool& value) {
	Write((byte*)this + 7881, value);
}
// Member Getter and Setter of Damage_Voice
// Declaration: class UAudioComponent* Damage_Voice
class UAudioComponent* ABP_PlayerCharacter_C::M_GetDamage_Voice() const {
	return Read<class UAudioComponent*>((byte*)this + 7888);
}
class UAudioComponent** ABP_PlayerCharacter_C::M_PtrGetDamage_Voice() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 7888);
}
void ABP_PlayerCharacter_C::M_SetDamage_Voice(const class UAudioComponent*& value) {
	Write((byte*)this + 7888, value);
}
// Member Getter and Setter of FightingWithBandits
// Declaration: bool FightingWithBandits
bool ABP_PlayerCharacter_C::M_GetFightingWithBandits() const {
	return Read<bool>((byte*)this + 7896);
}
bool* ABP_PlayerCharacter_C::M_PtrGetFightingWithBandits() {
	return reinterpret_cast<bool*>((byte*)this + 7896);
}
void ABP_PlayerCharacter_C::M_SetFightingWithBandits(const bool& value) {
	Write((byte*)this + 7896, value);
}
// Member Getter and Setter of IsStaggered
// Declaration: bool IsStaggered
bool ABP_PlayerCharacter_C::M_GetIsStaggered() const {
	return Read<bool>((byte*)this + 7897);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsStaggered() {
	return reinterpret_cast<bool*>((byte*)this + 7897);
}
void ABP_PlayerCharacter_C::M_SetIsStaggered(const bool& value) {
	Write((byte*)this + 7897, value);
}
// Member Getter and Setter of bIsInitialized
// Declaration: bool bIsInitialized
bool ABP_PlayerCharacter_C::M_GetbIsInitialized() const {
	return Read<bool>((byte*)this + 7898);
}
bool* ABP_PlayerCharacter_C::M_PtrGetbIsInitialized() {
	return reinterpret_cast<bool*>((byte*)this + 7898);
}
void ABP_PlayerCharacter_C::M_SetbIsInitialized(const bool& value) {
	Write((byte*)this + 7898, value);
}
// Member Getter and Setter of SkipTimer
// Declaration: bool SkipTimer
bool ABP_PlayerCharacter_C::M_GetSkipTimer() const {
	return Read<bool>((byte*)this + 7899);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSkipTimer() {
	return reinterpret_cast<bool*>((byte*)this + 7899);
}
void ABP_PlayerCharacter_C::M_SetSkipTimer(const bool& value) {
	Write((byte*)this + 7899, value);
}
// Member Getter and Setter of Shock
// Declaration: float Shock
float ABP_PlayerCharacter_C::M_GetShock() const {
	return Read<float>((byte*)this + 7900);
}
float* ABP_PlayerCharacter_C::M_PtrGetShock() {
	return reinterpret_cast<float*>((byte*)this + 7900);
}
void ABP_PlayerCharacter_C::M_SetShock(const float& value) {
	Write((byte*)this + 7900, value);
}
// Member Getter and Setter of RagdollCounter
// Declaration: int32_t RagdollCounter
int32_t ABP_PlayerCharacter_C::M_GetRagdollCounter() const {
	return Read<int32_t>((byte*)this + 7904);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetRagdollCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 7904);
}
void ABP_PlayerCharacter_C::M_SetRagdollCounter(const int32_t& value) {
	Write((byte*)this + 7904, value);
}
// Member Getter and Setter of RagdollStoppedCounter
// Declaration: int32_t RagdollStoppedCounter
int32_t ABP_PlayerCharacter_C::M_GetRagdollStoppedCounter() const {
	return Read<int32_t>((byte*)this + 7908);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetRagdollStoppedCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 7908);
}
void ABP_PlayerCharacter_C::M_SetRagdollStoppedCounter(const int32_t& value) {
	Write((byte*)this + 7908, value);
}
// Member Getter and Setter of CanBeUnRagdolled
// Declaration: bool CanBeUnRagdolled
bool ABP_PlayerCharacter_C::M_GetCanBeUnRagdolled() const {
	return Read<bool>((byte*)this + 7912);
}
bool* ABP_PlayerCharacter_C::M_PtrGetCanBeUnRagdolled() {
	return reinterpret_cast<bool*>((byte*)this + 7912);
}
void ABP_PlayerCharacter_C::M_SetCanBeUnRagdolled(const bool& value) {
	Write((byte*)this + 7912, value);
}
// Member Getter and Setter of AimAssistTimerHandle
// Declaration: struct FTimerHandle AimAssistTimerHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetAimAssistTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 7920);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetAimAssistTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7920);
}
void ABP_PlayerCharacter_C::M_SetAimAssistTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 7920, value);
}
// Member Getter and Setter of AimAssistLocationRelative
// Declaration: struct FVector AimAssistLocationRelative
struct FVector ABP_PlayerCharacter_C::M_GetAimAssistLocationRelative() const {
	return Read<struct FVector>((byte*)this + 7928);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetAimAssistLocationRelative() {
	return reinterpret_cast<struct FVector*>((byte*)this + 7928);
}
void ABP_PlayerCharacter_C::M_SetAimAssistLocationRelative(const struct FVector& value) {
	Write((byte*)this + 7928, value);
}
// Member Getter and Setter of AimAssist_Sensitivity_X
// Declaration: float AimAssist_Sensitivity_X
float ABP_PlayerCharacter_C::M_GetAimAssist_Sensitivity_X() const {
	return Read<float>((byte*)this + 7940);
}
float* ABP_PlayerCharacter_C::M_PtrGetAimAssist_Sensitivity_X() {
	return reinterpret_cast<float*>((byte*)this + 7940);
}
void ABP_PlayerCharacter_C::M_SetAimAssist_Sensitivity_X(const float& value) {
	Write((byte*)this + 7940, value);
}
// Member Getter and Setter of AimAssist_Sensitivity_Y
// Declaration: float AimAssist_Sensitivity_Y
float ABP_PlayerCharacter_C::M_GetAimAssist_Sensitivity_Y() const {
	return Read<float>((byte*)this + 7944);
}
float* ABP_PlayerCharacter_C::M_PtrGetAimAssist_Sensitivity_Y() {
	return reinterpret_cast<float*>((byte*)this + 7944);
}
void ABP_PlayerCharacter_C::M_SetAimAssist_Sensitivity_Y(const float& value) {
	Write((byte*)this + 7944, value);
}
// Member Getter and Setter of UpDownLookAxisInput
// Declaration: float UpDownLookAxisInput
float ABP_PlayerCharacter_C::M_GetUpDownLookAxisInput() const {
	return Read<float>((byte*)this + 7948);
}
float* ABP_PlayerCharacter_C::M_PtrGetUpDownLookAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7948);
}
void ABP_PlayerCharacter_C::M_SetUpDownLookAxisInput(const float& value) {
	Write((byte*)this + 7948, value);
}
// Member Getter and Setter of LeftRightLookAxisInput
// Declaration: float LeftRightLookAxisInput
float ABP_PlayerCharacter_C::M_GetLeftRightLookAxisInput() const {
	return Read<float>((byte*)this + 7952);
}
float* ABP_PlayerCharacter_C::M_PtrGetLeftRightLookAxisInput() {
	return reinterpret_cast<float*>((byte*)this + 7952);
}
void ABP_PlayerCharacter_C::M_SetLeftRightLookAxisInput(const float& value) {
	Write((byte*)this + 7952, value);
}
// Member Getter and Setter of InspectorModeVisibility
// Declaration: ESlateVisibility InspectorModeVisibility
ESlateVisibility ABP_PlayerCharacter_C::M_GetInspectorModeVisibility() const {
	return Read<ESlateVisibility>((byte*)this + 7956);
}
ESlateVisibility* ABP_PlayerCharacter_C::M_PtrGetInspectorModeVisibility() {
	return reinterpret_cast<ESlateVisibility*>((byte*)this + 7956);
}
void ABP_PlayerCharacter_C::M_SetInspectorModeVisibility(const ESlateVisibility& value) {
	Write((byte*)this + 7956, value);
}
// Member Getter and Setter of InspectorModeDistance
// Declaration: float InspectorModeDistance
float ABP_PlayerCharacter_C::M_GetInspectorModeDistance() const {
	return Read<float>((byte*)this + 7960);
}
float* ABP_PlayerCharacter_C::M_PtrGetInspectorModeDistance() {
	return reinterpret_cast<float*>((byte*)this + 7960);
}
void ABP_PlayerCharacter_C::M_SetInspectorModeDistance(const float& value) {
	Write((byte*)this + 7960, value);
}
// Member Getter and Setter of InspectorMode
// Declaration: bool InspectorMode
bool ABP_PlayerCharacter_C::M_GetInspectorMode() const {
	return Read<bool>((byte*)this + 7964);
}
bool* ABP_PlayerCharacter_C::M_PtrGetInspectorMode() {
	return reinterpret_cast<bool*>((byte*)this + 7964);
}
void ABP_PlayerCharacter_C::M_SetInspectorMode(const bool& value) {
	Write((byte*)this + 7964, value);
}
// Member Getter and Setter of ShownTutorials
// Declaration: TMap<TEnumAsByte<E_Tutorials>, bool> ShownTutorials
TMap<TEnumAsByte<E_Tutorials>, bool> ABP_PlayerCharacter_C::M_GetShownTutorials() const {
	return Read<TMap<TEnumAsByte<E_Tutorials>, bool>>((byte*)this + 7968);
}
TMap<TEnumAsByte<E_Tutorials>, bool>* ABP_PlayerCharacter_C::M_PtrGetShownTutorials() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tutorials>, bool>*>((byte*)this + 7968);
}
void ABP_PlayerCharacter_C::M_SetShownTutorials(const TMap<TEnumAsByte<E_Tutorials>, bool>& value) {
	Write((byte*)this + 7968, value);
}
// Member Getter and Setter of NumberOfGeneration
// Declaration: int32_t NumberOfGeneration
int32_t ABP_PlayerCharacter_C::M_GetNumberOfGeneration() const {
	return Read<int32_t>((byte*)this + 8048);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetNumberOfGeneration() {
	return reinterpret_cast<int32_t*>((byte*)this + 8048);
}
void ABP_PlayerCharacter_C::M_SetNumberOfGeneration(const int32_t& value) {
	Write((byte*)this + 8048, value);
}
// Member Getter and Setter of AffectionBonus
// Declaration: int32_t AffectionBonus
int32_t ABP_PlayerCharacter_C::M_GetAffectionBonus() const {
	return Read<int32_t>((byte*)this + 8052);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetAffectionBonus() {
	return reinterpret_cast<int32_t*>((byte*)this + 8052);
}
void ABP_PlayerCharacter_C::M_SetAffectionBonus(const int32_t& value) {
	Write((byte*)this + 8052, value);
}
// Member Getter and Setter of GrabbedItem
// Declaration: bool GrabbedItem
bool ABP_PlayerCharacter_C::M_GetGrabbedItem() const {
	return Read<bool>((byte*)this + 8056);
}
bool* ABP_PlayerCharacter_C::M_PtrGetGrabbedItem() {
	return reinterpret_cast<bool*>((byte*)this + 8056);
}
void ABP_PlayerCharacter_C::M_SetGrabbedItem(const bool& value) {
	Write((byte*)this + 8056, value);
}
// Member Getter and Setter of PlayableAreaRadius
// Declaration: float PlayableAreaRadius
float ABP_PlayerCharacter_C::M_GetPlayableAreaRadius() const {
	return Read<float>((byte*)this + 8060);
}
float* ABP_PlayerCharacter_C::M_PtrGetPlayableAreaRadius() {
	return reinterpret_cast<float*>((byte*)this + 8060);
}
void ABP_PlayerCharacter_C::M_SetPlayableAreaRadius(const float& value) {
	Write((byte*)this + 8060, value);
}
// Member Getter and Setter of NextFoliageParticleSystemToUpdateTagIndex
// Declaration: int32_t NextFoliageParticleSystemToUpdateTagIndex
int32_t ABP_PlayerCharacter_C::M_GetNextFoliageParticleSystemToUpdateTagIndex() const {
	return Read<int32_t>((byte*)this + 8064);
}
int32_t* ABP_PlayerCharacter_C::M_PtrGetNextFoliageParticleSystemToUpdateTagIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 8064);
}
void ABP_PlayerCharacter_C::M_SetNextFoliageParticleSystemToUpdateTagIndex(const int32_t& value) {
	Write((byte*)this + 8064, value);
}
// Member Getter and Setter of VoiceComponentVar
// Declaration: class UAudioComponent* VoiceComponentVar
class UAudioComponent* ABP_PlayerCharacter_C::M_GetVoiceComponentVar() const {
	return Read<class UAudioComponent*>((byte*)this + 8072);
}
class UAudioComponent** ABP_PlayerCharacter_C::M_PtrGetVoiceComponentVar() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 8072);
}
void ABP_PlayerCharacter_C::M_SetVoiceComponentVar(const class UAudioComponent*& value) {
	Write((byte*)this + 8072, value);
}
// Member Getter and Setter of VoiceDT
// Declaration: class UDataTable* VoiceDT
class UDataTable* ABP_PlayerCharacter_C::M_GetVoiceDT() const {
	return Read<class UDataTable*>((byte*)this + 8080);
}
class UDataTable** ABP_PlayerCharacter_C::M_PtrGetVoiceDT() {
	return reinterpret_cast<class UDataTable**>((byte*)this + 8080);
}
void ABP_PlayerCharacter_C::M_SetVoiceDT(const class UDataTable*& value) {
	Write((byte*)this + 8080, value);
}
// Member Getter and Setter of IsInBedOnSkip
// Declaration: bool IsInBedOnSkip
bool ABP_PlayerCharacter_C::M_GetIsInBedOnSkip() const {
	return Read<bool>((byte*)this + 8088);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIsInBedOnSkip() {
	return reinterpret_cast<bool*>((byte*)this + 8088);
}
void ABP_PlayerCharacter_C::M_SetIsInBedOnSkip(const bool& value) {
	Write((byte*)this + 8088, value);
}
// Member Getter and Setter of OffhandClickBlock
// Declaration: bool OffhandClickBlock
bool ABP_PlayerCharacter_C::M_GetOffhandClickBlock() const {
	return Read<bool>((byte*)this + 8089);
}
bool* ABP_PlayerCharacter_C::M_PtrGetOffhandClickBlock() {
	return reinterpret_cast<bool*>((byte*)this + 8089);
}
void ABP_PlayerCharacter_C::M_SetOffhandClickBlock(const bool& value) {
	Write((byte*)this + 8089, value);
}
// Member Getter and Setter of WasShieldEquipped
// Declaration: bool WasShieldEquipped
bool ABP_PlayerCharacter_C::M_GetWasShieldEquipped() const {
	return Read<bool>((byte*)this + 8090);
}
bool* ABP_PlayerCharacter_C::M_PtrGetWasShieldEquipped() {
	return reinterpret_cast<bool*>((byte*)this + 8090);
}
void ABP_PlayerCharacter_C::M_SetWasShieldEquipped(const bool& value) {
	Write((byte*)this + 8090, value);
}
// Member Getter and Setter of OffhandSlotChanged
// Declaration: TAssetPtr<class FOffhandSlotChanged__DelegateSignature> OffhandSlotChanged
TAssetPtr<class FOffhandSlotChanged__DelegateSignature> ABP_PlayerCharacter_C::M_GetOffhandSlotChanged() const {
	return Read<TAssetPtr<class FOffhandSlotChanged__DelegateSignature>>((byte*)this + 8096);
}
TAssetPtr<class FOffhandSlotChanged__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetOffhandSlotChanged() {
	return reinterpret_cast<TAssetPtr<class FOffhandSlotChanged__DelegateSignature>*>((byte*)this + 8096);
}
void ABP_PlayerCharacter_C::M_SetOffhandSlotChanged(const TAssetPtr<class FOffhandSlotChanged__DelegateSignature>& value) {
	Write((byte*)this + 8096, value);
}
// Member Getter and Setter of SwapTorchTypeOffhandTool
// Declaration: bool SwapTorchTypeOffhandTool
bool ABP_PlayerCharacter_C::M_GetSwapTorchTypeOffhandTool() const {
	return Read<bool>((byte*)this + 8112);
}
bool* ABP_PlayerCharacter_C::M_PtrGetSwapTorchTypeOffhandTool() {
	return reinterpret_cast<bool*>((byte*)this + 8112);
}
void ABP_PlayerCharacter_C::M_SetSwapTorchTypeOffhandTool(const bool& value) {
	Write((byte*)this + 8112, value);
}
// Member Getter and Setter of IgnoreNextOffhandInput
// Declaration: bool IgnoreNextOffhandInput
bool ABP_PlayerCharacter_C::M_GetIgnoreNextOffhandInput() const {
	return Read<bool>((byte*)this + 8113);
}
bool* ABP_PlayerCharacter_C::M_PtrGetIgnoreNextOffhandInput() {
	return reinterpret_cast<bool*>((byte*)this + 8113);
}
void ABP_PlayerCharacter_C::M_SetIgnoreNextOffhandInput(const bool& value) {
	Write((byte*)this + 8113, value);
}
// Member Getter and Setter of HadMainHandItem
// Declaration: bool HadMainHandItem
bool ABP_PlayerCharacter_C::M_GetHadMainHandItem() const {
	return Read<bool>((byte*)this + 8114);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadMainHandItem() {
	return reinterpret_cast<bool*>((byte*)this + 8114);
}
void ABP_PlayerCharacter_C::M_SetHadMainHandItem(const bool& value) {
	Write((byte*)this + 8114, value);
}
// Member Getter and Setter of HadOffHandItem
// Declaration: bool HadOffHandItem
bool ABP_PlayerCharacter_C::M_GetHadOffHandItem() const {
	return Read<bool>((byte*)this + 8115);
}
bool* ABP_PlayerCharacter_C::M_PtrGetHadOffHandItem() {
	return reinterpret_cast<bool*>((byte*)this + 8115);
}
void ABP_PlayerCharacter_C::M_SetHadOffHandItem(const bool& value) {
	Write((byte*)this + 8115, value);
}
// Member Getter and Setter of OnBlockingChanged
// Declaration: TAssetPtr<class FOnBlockingChanged__DelegateSignature> OnBlockingChanged
TAssetPtr<class FOnBlockingChanged__DelegateSignature> ABP_PlayerCharacter_C::M_GetOnBlockingChanged() const {
	return Read<TAssetPtr<class FOnBlockingChanged__DelegateSignature>>((byte*)this + 8120);
}
TAssetPtr<class FOnBlockingChanged__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetOnBlockingChanged() {
	return reinterpret_cast<TAssetPtr<class FOnBlockingChanged__DelegateSignature>*>((byte*)this + 8120);
}
void ABP_PlayerCharacter_C::M_SetOnBlockingChanged(const TAssetPtr<class FOnBlockingChanged__DelegateSignature>& value) {
	Write((byte*)this + 8120, value);
}
// Member Getter and Setter of PlayersChildNameSelection
// Declaration: TArray<struct FST_ChildNameSelection> PlayersChildNameSelection
TArray<struct FST_ChildNameSelection> ABP_PlayerCharacter_C::M_GetPlayersChildNameSelection() const {
	return Read<TArray<struct FST_ChildNameSelection>>((byte*)this + 8136);
}
TArray<struct FST_ChildNameSelection>* ABP_PlayerCharacter_C::M_PtrGetPlayersChildNameSelection() {
	return reinterpret_cast<TArray<struct FST_ChildNameSelection>*>((byte*)this + 8136);
}
void ABP_PlayerCharacter_C::M_SetPlayersChildNameSelection(const TArray<struct FST_ChildNameSelection>& value) {
	Write((byte*)this + 8136, value);
}
// Member Getter and Setter of Hit_from_Direction
// Declaration: struct FVector Hit_from_Direction
struct FVector ABP_PlayerCharacter_C::M_GetHit_from_Direction() const {
	return Read<struct FVector>((byte*)this + 8152);
}
struct FVector* ABP_PlayerCharacter_C::M_PtrGetHit_from_Direction() {
	return reinterpret_cast<struct FVector*>((byte*)this + 8152);
}
void ABP_PlayerCharacter_C::M_SetHit_from_Direction(const struct FVector& value) {
	Write((byte*)this + 8152, value);
}
// Member Getter and Setter of CanSwitchToHeir
// Declaration: TAssetPtr<class FCanSwitchToHeir__DelegateSignature> CanSwitchToHeir
TAssetPtr<class FCanSwitchToHeir__DelegateSignature> ABP_PlayerCharacter_C::M_GetCanSwitchToHeir() const {
	return Read<TAssetPtr<class FCanSwitchToHeir__DelegateSignature>>((byte*)this + 8168);
}
TAssetPtr<class FCanSwitchToHeir__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetCanSwitchToHeir() {
	return reinterpret_cast<TAssetPtr<class FCanSwitchToHeir__DelegateSignature>*>((byte*)this + 8168);
}
void ABP_PlayerCharacter_C::M_SetCanSwitchToHeir(const TAssetPtr<class FCanSwitchToHeir__DelegateSignature>& value) {
	Write((byte*)this + 8168, value);
}
// Member Getter and Setter of PlayerOutsidePlayableAreaHandle
// Declaration: struct FTimerHandle PlayerOutsidePlayableAreaHandle
struct FTimerHandle ABP_PlayerCharacter_C::M_GetPlayerOutsidePlayableAreaHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 8184);
}
struct FTimerHandle* ABP_PlayerCharacter_C::M_PtrGetPlayerOutsidePlayableAreaHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 8184);
}
void ABP_PlayerCharacter_C::M_SetPlayerOutsidePlayableAreaHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 8184, value);
}
// Member Getter and Setter of SwitchToHeirFinish
// Declaration: TAssetPtr<class FSwitchToHeirFinish__DelegateSignature> SwitchToHeirFinish
TAssetPtr<class FSwitchToHeirFinish__DelegateSignature> ABP_PlayerCharacter_C::M_GetSwitchToHeirFinish() const {
	return Read<TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>>((byte*)this + 8192);
}
TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>* ABP_PlayerCharacter_C::M_PtrGetSwitchToHeirFinish() {
	return reinterpret_cast<TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>*>((byte*)this + 8192);
}
void ABP_PlayerCharacter_C::M_SetSwitchToHeirFinish(const TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>& value) {
	Write((byte*)this + 8192, value);
}
// Member Getter and Setter of bFinishedSpawning
// Declaration: bool bFinishedSpawning
bool ABP_PlayerCharacter_C::M_GetbFinishedSpawning() const {
	return Read<bool>((byte*)this + 8208);
}
bool* ABP_PlayerCharacter_C::M_PtrGetbFinishedSpawning() {
	return reinterpret_cast<bool*>((byte*)this + 8208);
}
void ABP_PlayerCharacter_C::M_SetbFinishedSpawning(const bool& value) {
	Write((byte*)this + 8208, value);
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffhandSlotChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OffhandSlotChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffhandSlotChanged__DelegateSignature");

	struct ABP_PlayerCharacter_C_OffhandSlotChanged__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_OffhandSlotChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBlockingChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnBlockingChanged__DelegateSignature(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBlockingChanged__DelegateSignature");

	struct ABP_PlayerCharacter_C_OnBlockingChanged__DelegateSignature_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_OnBlockingChanged__DelegateSignature_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeirName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanSwitchToHeir__DelegateSignature(struct FText HeirName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir__DelegateSignature");

	struct ABP_PlayerCharacter_C_CanSwitchToHeir__DelegateSignature_Params {
		struct FText HeirName;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_CanSwitchToHeir__DelegateSignature_Params params;
	params.HeirName = HeirName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwitchToHeirFinish__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Result	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SwitchToHeirFinish__DelegateSignature(bool Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwitchToHeirFinish__DelegateSignature");

	struct ABP_PlayerCharacter_C_SwitchToHeirFinish__DelegateSignature_Params {
		bool Result;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SwitchToHeirFinish__DelegateSignature_Params params;
	params.Result = Result;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorMode");

	struct ABP_PlayerCharacter_C_StartInspectorMode_Params {
	};
	ABP_PlayerCharacter_C_StartInspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartInspectorTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorTimer");

	struct ABP_PlayerCharacter_C_StartInspectorTimer_Params {
	};
	ABP_PlayerCharacter_C_StartInspectorTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopInspectorTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorTimer");

	struct ABP_PlayerCharacter_C_StopInspectorTimer_Params {
	};
	ABP_PlayerCharacter_C_StopInspectorTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInspector
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateInspector() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInspector");

	struct ABP_PlayerCharacter_C_UpdateInspector_Params {
	};
	ABP_PlayerCharacter_C_UpdateInspector_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayAnimation_InspectorMode
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayAnimation_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayAnimation_InspectorMode");

	struct ABP_PlayerCharacter_C_PlayAnimation_InspectorMode_Params {
	};
	ABP_PlayerCharacter_C_PlayAnimation_InspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopAnimation_InspectorMode
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopAnimation_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopAnimation_InspectorMode");

	struct ABP_PlayerCharacter_C_StopAnimation_InspectorMode_Params {
	};
	ABP_PlayerCharacter_C_StopAnimation_InspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableNightVision
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::EnableNightVision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableNightVision");

	struct ABP_PlayerCharacter_C_EnableNightVision_Params {
	};
	ABP_PlayerCharacter_C_EnableNightVision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableNightVision
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DisableNightVision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableNightVision");

	struct ABP_PlayerCharacter_C_DisableNightVision_Params {
	};
	ABP_PlayerCharacter_C_DisableNightVision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorMode");

	struct ABP_PlayerCharacter_C_StopInspectorMode_Params {
	};
	ABP_PlayerCharacter_C_StopInspectorMode_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShakeFromSource_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraShakeFromSource_BPI(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShakeFromSource_BPI");

	struct ABP_PlayerCharacter_C_CameraShakeFromSource_BPI_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CameraShakeFromSource_BPI_Params params;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartingInventory_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory_Server");

	struct ABP_PlayerCharacter_C_StartingInventory_Server_Params {
	};
	ABP_PlayerCharacter_C_StartingInventory_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventoryEquip_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartingInventoryEquip_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventoryEquip_Client");

	struct ABP_PlayerCharacter_C_StartingInventoryEquip_Client_Params {
	};
	ABP_PlayerCharacter_C_StartingInventoryEquip_Client_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCanBeUnragdolled
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCanBeUnragdolled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCanBeUnragdolled");

	struct ABP_PlayerCharacter_C_SetCanBeUnragdolled_Params {
	};
	ABP_PlayerCharacter_C_SetCanBeUnragdolled_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlaySpecialEffectsSound_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpecialEffectType	Type: TEnumAsByte<E_AudioSpecialEffects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlaySpecialEffectsSound_BPI(TEnumAsByte<E_AudioSpecialEffects> SpecialEffectType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlaySpecialEffectsSound_BPI");

	struct ABP_PlayerCharacter_C_PlaySpecialEffectsSound_BPI_Params {
		TEnumAsByte<E_AudioSpecialEffects> SpecialEffectType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlaySpecialEffectsSound_BPI_Params params;
	params.SpecialEffectType = SpecialEffectType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreenHeir_Finish
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: HeirName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateDeathScreenHeir_Finish(struct FText HeirName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreenHeir_Finish");

	struct ABP_PlayerCharacter_C_CreateDeathScreenHeir_Finish_Params {
		struct FText HeirName;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_CreateDeathScreenHeir_Finish_Params params;
	params.HeirName = HeirName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetArmorVisibilityState_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentCategory	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Visibility	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetArmorVisibilityState_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentCategory, bool Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetArmorVisibilityState_BPI");

	struct ABP_PlayerCharacter_C_SetArmorVisibilityState_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentCategory;			//Offset: 0 | ElementSize: 1
		bool Visibility;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetArmorVisibilityState_BPI_Params params;
	params.EquipmentCategory = EquipmentCategory;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBeginPlayClient
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnBeginPlayClient() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBeginPlayClient");

	struct ABP_PlayerCharacter_C_OnBeginPlayClient_Params {
	};
	ABP_PlayerCharacter_C_OnBeginPlayClient_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerAudioComponent_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AudioComponent	Type: class UAudioComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetPlayerAudioComponent_BPI(class UAudioComponent* AudioComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerAudioComponent_BPI");

	struct ABP_PlayerCharacter_C_SetPlayerAudioComponent_BPI_Params {
		class UAudioComponent* AudioComponent;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetPlayerAudioComponent_BPI_Params params;
	params.AudioComponent = AudioComponent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InterpIKAlpha
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Reversed_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InterpIKAlpha(bool Reversed_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InterpIKAlpha");

	struct ABP_PlayerCharacter_C_InterpIKAlpha_Params {
		bool Reversed_;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_InterpIKAlpha_Params params;
	params.Reversed_ = Reversed_;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFoliageParticleSystems
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateFoliageParticleSystems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFoliageParticleSystems");

	struct ABP_PlayerCharacter_C_UpdateFoliageParticleSystems_Params {
	};
	ABP_PlayerCharacter_C_UpdateFoliageParticleSystems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature");

	struct ABP_PlayerCharacter_C_BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature_Params {
	};
	ABP_PlayerCharacter_C_BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LifeStatsSwitchSex_Audio
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LifeStatsSwitchSex_Audio() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LifeStatsSwitchSex_Audio");

	struct ABP_PlayerCharacter_C_LifeStatsSwitchSex_Audio_Params {
	};
	ABP_PlayerCharacter_C_LifeStatsSwitchSex_Audio_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateOnTimeChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateOnTimeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateOnTimeChanged");

	struct ABP_PlayerCharacter_C_UpdateOnTimeChanged_Params {
	};
	ABP_PlayerCharacter_C_UpdateOnTimeChanged_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnUnequipSwapFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnUnequipSwapFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnUnequipSwapFinished");

	struct ABP_PlayerCharacter_C_OnUnequipSwapFinished_Params {
	};
	ABP_PlayerCharacter_C_OnUnequipSwapFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipOffhandOnSwap
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnequipOffhandOnSwap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipOffhandOnSwap");

	struct ABP_PlayerCharacter_C_UnequipOffhandOnSwap_Params {
	};
	ABP_PlayerCharacter_C_UnequipOffhandOnSwap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffhandTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OffhandTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffhandTimer");

	struct ABP_PlayerCharacter_C_OffhandTimer_Params {
	};
	ABP_PlayerCharacter_C_OffhandTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Offhand
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipShield	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_Offhand(bool EquipShield) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Offhand");

	struct ABP_PlayerCharacter_C_ReleasedInput_Offhand_Params {
		bool EquipShield;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ReleasedInput_Offhand_Params params;
	params.EquipShield = EquipShield;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GhostControlMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_GhostControlMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GhostControlMode");

	struct ABP_PlayerCharacter_C_PressedInput_GhostControlMode_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_GhostControlMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ToggleChat
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_ToggleChat() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ToggleChat");

	struct ABP_PlayerCharacter_C_PressedInput_ToggleChat_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_ToggleChat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_EmoteMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasedInput_EmoteMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_EmoteMenu");

	struct ABP_PlayerCharacter_C_ReleasedInput_EmoteMenu_Params {
	};
	ABP_PlayerCharacter_C_ReleasedInput_EmoteMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_EmoteMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_EmoteMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_EmoteMenu");

	struct ABP_PlayerCharacter_C_PressedInput_EmoteMenu_Params {
	};
	ABP_PlayerCharacter_C_PressedInput_EmoteMenu_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Offhand
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PressedInput_Offhand(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Offhand");

	struct ABP_PlayerCharacter_C_PressedInput_Offhand_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_PressedInput_Offhand_Params params;
	params.Key = Key;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnDismountingPawnFinished_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished_BPI");

	struct ABP_PlayerCharacter_C_OnDismountingPawnFinished_BPI_Params {
	};
	ABP_PlayerCharacter_C_OnDismountingPawnFinished_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnlockPikeCrest_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Arrow	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToUnlockPikeCrest_BPI(class AActor* Arrow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnlockPikeCrest_BPI");

	struct ABP_PlayerCharacter_C_TryToUnlockPikeCrest_BPI_Params {
		class AActor* Arrow;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_TryToUnlockPikeCrest_BPI_Params params;
	params.Arrow = Arrow;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerTimeToBirth_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerTimeToBirth_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerTimeToBirth_BPI");

	struct ABP_PlayerCharacter_C_UpdatePlayerTimeToBirth_BPI_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlayerTimeToBirth_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockAchievementCharacter_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnlockAchievementCharacter_BPI(struct FName AchID, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockAchievementCharacter_BPI");

	struct ABP_PlayerCharacter_C_UnlockAchievementCharacter_BPI_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UnlockAchievementCharacter_BPI_Params params;
	params.AchID = AchID;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddStatProgressCharacter_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::AddStatProgressCharacter_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddStatProgressCharacter_BPI");

	struct ABP_PlayerCharacter_C_AddStatProgressCharacter_BPI_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool AllPlayers;			//Offset: 12 | ElementSize: 1
		bool TreatAsSet;			//Offset: 13 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_AddStatProgressCharacter_BPI_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.AllPlayers = AllPlayers;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActorLocationClient_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dest	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetActorLocationClient_BPI(struct FVector Dest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActorLocationClient_BPI");

	struct ABP_PlayerCharacter_C_SetActorLocationClient_BPI_Params {
		struct FVector Dest;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_SetActorLocationClient_BPI_Params params;
	params.Dest = Dest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAnimHairPhysicsLimits_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsHoodOn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeAnimHairPhysicsLimits_BPI(bool IsHoodOn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAnimHairPhysicsLimits_BPI");

	struct ABP_PlayerCharacter_C_ChangeAnimHairPhysicsLimits_BPI_Params {
		bool IsHoodOn;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ChangeAnimHairPhysicsLimits_BPI_Params params;
	params.IsHoodOn = IsHoodOn;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToCreateHUDTutorialAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToCreateHUDTutorialAllPlayers_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToCreateHUDTutorialAllPlayers_BPI");

	struct ABP_PlayerCharacter_C_TryToCreateHUDTutorialAllPlayers_BPI_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TryToCreateHUDTutorialAllPlayers_BPI_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToCreateHUDTutorial_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToCreateHUDTutorial_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToCreateHUDTutorial_BPI");

	struct ABP_PlayerCharacter_C_TryToCreateHUDTutorial_BPI_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TryToCreateHUDTutorial_BPI_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateQuestNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateQuestNotificationAllPlayers_BPI");

	struct ABP_PlayerCharacter_C_CreateQuestNotificationAllPlayers_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateQuestNotificationAllPlayers_BPI_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateMiddleNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateMiddleNotificationAllPlayers_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateMiddleNotificationAllPlayers_BPI");

	struct ABP_PlayerCharacter_C_CreateMiddleNotificationAllPlayers_BPI_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateMiddleNotificationAllPlayers_BPI_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateNotificationAllPlayers_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateNotificationAllPlayers_BPI");

	struct ABP_PlayerCharacter_C_CreateNotificationAllPlayers_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateNotificationAllPlayers_BPI_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateQuestNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateQuestNotification_BPI");

	struct ABP_PlayerCharacter_C_CreateQuestNotification_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateQuestNotification_BPI_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndEmote_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnEndEmote_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndEmote_BPI");

	struct ABP_PlayerCharacter_C_OnEndEmote_BPI_Params {
	};
	ABP_PlayerCharacter_C_OnEndEmote_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayEmote_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage	Type: TAssetPtr<class UAnimMontage>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SoundId	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayEmote_BPI(TAssetPtr<class UAnimMontage> Montage, struct FName SoundId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayEmote_BPI");

	struct ABP_PlayerCharacter_C_PlayEmote_BPI_Params {
		TAssetPtr<class UAnimMontage> Montage;			//Offset: 0 | ElementSize: 40
		struct FName SoundId;			//Offset: 40 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_PlayEmote_BPI_Params params;
	params.Montage = Montage;
	params.SoundId = SoundId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerWaitingForSkipUI_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_BPI");

	struct ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_BPI_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWantsToSkip_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WantsToSkip	Type: TEnumAsByte<E_WantsToSkip>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsInBedOnSkip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetWantsToSkip_BPI(TEnumAsByte<E_WantsToSkip> WantsToSkip, bool IsInBedOnSkip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWantsToSkip_BPI");

	struct ABP_PlayerCharacter_C_SetWantsToSkip_BPI_Params {
		TEnumAsByte<E_WantsToSkip> WantsToSkip;			//Offset: 0 | ElementSize: 1
		bool IsInBedOnSkip;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetWantsToSkip_BPI_Params params;
	params.WantsToSkip = WantsToSkip;
	params.IsInBedOnSkip = IsInBedOnSkip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyCharacterCreatorParams_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterParams	Type: struct FST_PlayerModulesIDs	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ApplyCharacterCreatorParams_Server(struct FST_PlayerModulesIDs CharacterParams, TEnumAsByte<E_Sex> sex, float Age) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyCharacterCreatorParams_Server");

	struct ABP_PlayerCharacter_C_ApplyCharacterCreatorParams_Server_Params {
		struct FST_PlayerModulesIDs CharacterParams;			//Offset: 0 | ElementSize: 120
		TEnumAsByte<E_Sex> sex;			//Offset: 120 | ElementSize: 1
		float Age;			//Offset: 124 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ApplyCharacterCreatorParams_Server_Params params;
	params.CharacterParams = CharacterParams;
	params.sex = sex;
	params.Age = Age;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyCharacterCreatorParams_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterParams	Type: struct FST_PlayerModulesIDs	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ApplyCharacterCreatorParams_BPI(struct FST_PlayerModulesIDs CharacterParams, TEnumAsByte<E_Sex> sex, float Age) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyCharacterCreatorParams_BPI");

	struct ABP_PlayerCharacter_C_ApplyCharacterCreatorParams_BPI_Params {
		struct FST_PlayerModulesIDs CharacterParams;			//Offset: 0 | ElementSize: 120
		TEnumAsByte<E_Sex> sex;			//Offset: 120 | ElementSize: 1
		float Age;			//Offset: 124 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ApplyCharacterCreatorParams_BPI_Params params;
	params.CharacterParams = CharacterParams;
	params.sex = sex;
	params.Age = Age;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateMiddleNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateMiddleNotification_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateMiddleNotification_BPI");

	struct ABP_PlayerCharacter_C_CreateMiddleNotification_BPI_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateMiddleNotification_BPI_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAffectionBonus_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetAffectionBonus_BPI(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAffectionBonus_BPI");

	struct ABP_PlayerCharacter_C_SetAffectionBonus_BPI_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetAffectionBonus_BPI_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerFinish_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerData	Type: struct FST_SAVE_Player	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Version	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Achievements	Type: struct FST_SAVE_Achievements	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LoadPlayerFinish_BPI(struct FST_SAVE_Player PlayerData, struct FString Version, struct FST_SAVE_Achievements Achievements) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerFinish_BPI");

	struct ABP_PlayerCharacter_C_LoadPlayerFinish_BPI_Params {
		struct FST_SAVE_Player PlayerData;			//Offset: 0 | ElementSize: 888
		struct FString Version;			//Offset: 888 | ElementSize: 16
		struct FST_SAVE_Achievements Achievements;			//Offset: 904 | ElementSize: 192
	};
	ABP_PlayerCharacter_C_LoadPlayerFinish_BPI_Params params;
	params.PlayerData = PlayerData;
	params.Version = Version;
	params.Achievements = Achievements;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayer_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerData	Type: struct FST_SAVE_Player	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Version	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LoadPlayer_BPI(struct FST_SAVE_Player PlayerData, struct FString Version) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayer_BPI");

	struct ABP_PlayerCharacter_C_LoadPlayer_BPI_Params {
		struct FST_SAVE_Player PlayerData;			//Offset: 0 | ElementSize: 888
		struct FString Version;			//Offset: 888 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_LoadPlayer_BPI_Params params;
	params.PlayerData = PlayerData;
	params.Version = Version;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitPlayerFinish_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitPlayerFinish_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitPlayerFinish_Client");

	struct ABP_PlayerCharacter_C_InitPlayerFinish_Client_Params {
	};
	ABP_PlayerCharacter_C_InitPlayerFinish_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitPlayerFinish_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitPlayerFinish_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitPlayerFinish_BPI");

	struct ABP_PlayerCharacter_C_InitPlayerFinish_BPI_Params {
	};
	ABP_PlayerCharacter_C_InitPlayerFinish_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorMode_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopInspectorMode_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopInspectorMode_BPI");

	struct ABP_PlayerCharacter_C_StopInspectorMode_BPI_Params {
	};
	ABP_PlayerCharacter_C_StopInspectorMode_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorMode_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartInspectorMode_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInspectorMode_BPI");

	struct ABP_PlayerCharacter_C_StartInspectorMode_BPI_Params {
	};
	ABP_PlayerCharacter_C_StartInspectorMode_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableNightVision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DisableNightVision_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableNightVision_BPI");

	struct ABP_PlayerCharacter_C_DisableNightVision_BPI_Params {
	};
	ABP_PlayerCharacter_C_DisableNightVision_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableNightVision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::EnableNightVision_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableNightVision_BPI");

	struct ABP_PlayerCharacter_C_EnableNightVision_BPI_Params {
	};
	ABP_PlayerCharacter_C_EnableNightVision_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayer_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TeleportPlayer_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayer_BPI");

	struct ABP_PlayerCharacter_C_TeleportPlayer_BPI_Params {
	};
	ABP_PlayerCharacter_C_TeleportPlayer_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayForceFeedback_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayForceFeedback_BPI(class UForceFeedbackEffect* ForceFeedbackEffect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayForceFeedback_BPI");

	struct ABP_PlayerCharacter_C_PlayForceFeedback_BPI_Params {
		class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_PlayForceFeedback_BPI_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;

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
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CraftingSetings	Type: struct FST_FurnitureCraftingSettings	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NoWorkbench_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateCraftingMenu_BPI(struct FST_FurnitureCraftingSettings CraftingSetings, TEnumAsByte<E_Workbenches> WorkbenchType, bool NoWorkbench_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateCraftingMenu_BPI");

	struct ABP_PlayerCharacter_C_CreateCraftingMenu_BPI_Params {
		struct FST_FurnitureCraftingSettings CraftingSetings;			//Offset: 0 | ElementSize: 96
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 96 | ElementSize: 1
		bool NoWorkbench_;			//Offset: 97 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateCraftingMenu_BPI_Params params;
	params.CraftingSetings = CraftingSetings;
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
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateNotification_BPI");

	struct ABP_PlayerCharacter_C_CreateNotification_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateNotification_BPI_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SummonMount
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SummonMount() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SummonMount");

	struct ABP_PlayerCharacter_C_SummonMount_Params {
	};
	ABP_PlayerCharacter_C_SummonMount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFinishedSpawning_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetFinishedSpawning_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFinishedSpawning_Server");

	struct ABP_PlayerCharacter_C_SetFinishedSpawning_Server_Params {
	};
	ABP_PlayerCharacter_C_SetFinishedSpawning_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwitchToHeirFinish_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Result	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SwitchToHeirFinish_Client(bool Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwitchToHeirFinish_Client");

	struct ABP_PlayerCharacter_C_SwitchToHeirFinish_Client_Params {
		bool Result;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SwitchToHeirFinish_Client_Params params;
	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHiddenArmors_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: HiddenArmors	Type: TArray<TEnumAsByte<E_EquipmentCategories>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateHiddenArmors_Client(TArray<TEnumAsByte<E_EquipmentCategories>>* HiddenArmors) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHiddenArmors_Client");

	struct ABP_PlayerCharacter_C_UpdateHiddenArmors_Client_Params {
		TArray<TEnumAsByte<E_EquipmentCategories>> HiddenArmors;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_UpdateHiddenArmors_Client_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HiddenArmors != nullptr)
		*HiddenArmors = params.HiddenArmors;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: WasShieldEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetWasShieldEquipped_Client(bool WasShieldEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped_Client");

	struct ABP_PlayerCharacter_C_SetWasShieldEquipped_Client_Params {
		bool WasShieldEquipped;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetWasShieldEquipped_Client_Params params;
	params.WasShieldEquipped = WasShieldEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: WasShieldEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetWasShieldEquipped_Server(bool WasShieldEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped_Server");

	struct ABP_PlayerCharacter_C_SetWasShieldEquipped_Server_Params {
		bool WasShieldEquipped;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetWasShieldEquipped_Server_Params params;
	params.WasShieldEquipped = WasShieldEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShouldBeSwooned_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ShouldBeSwooned_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShouldBeSwooned_Server");

	struct ABP_PlayerCharacter_C_ShouldBeSwooned_Server_Params {
	};
	ABP_PlayerCharacter_C_ShouldBeSwooned_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_UpdateBuildingQuests
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Goal_BuildTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Constructed_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_UpdateBuildingQuests");

	struct ABP_PlayerCharacter_C_Client_UpdateBuildingQuests_Params {
		TEnumAsByte<E_Goal_BuildTypes> Type;			//Offset: 0 | ElementSize: 1
		bool Constructed_;			//Offset: 1 | ElementSize: 1
		struct FName Name;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Client_UpdateBuildingQuests_Params params;
	params.Type = Type;
	params.Constructed_ = Constructed_;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_UpdateBuildingQuests
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Goal_BuildTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Constructed_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_UpdateBuildingQuests");

	struct ABP_PlayerCharacter_C_Server_UpdateBuildingQuests_Params {
		TEnumAsByte<E_Goal_BuildTypes> Type;			//Offset: 0 | ElementSize: 1
		bool Constructed_;			//Offset: 1 | ElementSize: 1
		struct FName Name;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Server_UpdateBuildingQuests_Params params;
	params.Type = Type;
	params.Constructed_ = Constructed_;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ChildSexGenerated
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ChildSexGenerated(TEnumAsByte<E_Sex> sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ChildSexGenerated");

	struct ABP_PlayerCharacter_C_Client_ChildSexGenerated_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_ChildSexGenerated_Params params;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerLockedSex
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildSex	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_PlayerLockedSex(TEnumAsByte<E_ChildSex> ChildSex, TEnumAsByte<E_SpouseType> SpouseType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerLockedSex");

	struct ABP_PlayerCharacter_C_Client_PlayerLockedSex_Params {
		TEnumAsByte<E_ChildSex> ChildSex;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_PlayerLockedSex_Params params;
	params.ChildSex = ChildSex;
	params.SpouseType = SpouseType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerLockedSex
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildSex	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Child	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_PlayerLockedSex(TEnumAsByte<E_ChildSex> ChildSex, class APlayerState* PlayerState, class AActor* Child) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerLockedSex");

	struct ABP_PlayerCharacter_C_Server_PlayerLockedSex_Params {
		TEnumAsByte<E_ChildSex> ChildSex;			//Offset: 0 | ElementSize: 1
		class APlayerState* PlayerState;			//Offset: 8 | ElementSize: 8
		class AActor* Child;			//Offset: 16 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Server_PlayerLockedSex_Params params;
	params.ChildSex = ChildSex;
	params.PlayerState = PlayerState;
	params.Child = Child;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerSelectedSex
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildSex	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sender	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_PlayerSelectedSex(TEnumAsByte<E_ChildSex> ChildSex, class ABP_MD_PlayerState_C* Sender, TEnumAsByte<E_SpouseType> SpouseType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerSelectedSex");

	struct ABP_PlayerCharacter_C_Client_PlayerSelectedSex_Params {
		TEnumAsByte<E_ChildSex> ChildSex;			//Offset: 0 | ElementSize: 1
		class ABP_MD_PlayerState_C* Sender;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_PlayerSelectedSex_Params params;
	params.ChildSex = ChildSex;
	params.Sender = Sender;
	params.SpouseType = SpouseType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerSelectedSex
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChildGender	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_PlayerSelectedSex(class APlayerState* PlayerState, TEnumAsByte<E_ChildSex> ChildGender) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerSelectedSex");

	struct ABP_PlayerCharacter_C_Server_PlayerSelectedSex_Params {
		class APlayerState* PlayerState;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_ChildSex> ChildGender;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_PlayerSelectedSex_Params params;
	params.PlayerState = PlayerState;
	params.ChildGender = ChildGender;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeNPCSex_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeNPCSex_Server(class ABP_BaseCharacter_C* NPC, TEnumAsByte<E_Sex> TargetSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeNPCSex_Server");

	struct ABP_PlayerCharacter_C_ChangeNPCSex_Server_Params {
		class ABP_BaseCharacter_C* NPC;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Sex> TargetSex;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ChangeNPCSex_Server_Params params;
	params.NPC = NPC;
	params.TargetSex = TargetSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_OnFoliageRemoved_Quest
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoliageSpecies	Type: TEnumAsByte<E_FoliageSpecies>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_OnFoliageRemoved_Quest(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_OnFoliageRemoved_Quest");

	struct ABP_PlayerCharacter_C_Client_OnFoliageRemoved_Quest_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FoliageSpecies> FoliageSpecies;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_OnFoliageRemoved_Quest_Params params;
	params.ResourceType = ResourceType;
	params.FoliageSpecies = FoliageSpecies;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_OnFoliageRemoved_Quest
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoliageSpecies	Type: TEnumAsByte<E_FoliageSpecies>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_OnFoliageRemoved_Quest(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_OnFoliageRemoved_Quest");

	struct ABP_PlayerCharacter_C_Server_OnFoliageRemoved_Quest_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FoliageSpecies> FoliageSpecies;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_OnFoliageRemoved_Quest_Params params;
	params.ResourceType = ResourceType;
	params.FoliageSpecies = FoliageSpecies;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeirNameID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HeirSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanSwitchToHeir_Client(int32_t HeirNameID, TEnumAsByte<E_Sex> HeirSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir_Client");

	struct ABP_PlayerCharacter_C_CanSwitchToHeir_Client_Params {
		int32_t HeirNameID;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Sex> HeirSex;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CanSwitchToHeir_Client_Params params;
	params.HeirNameID = HeirNameID;
	params.HeirSex = HeirSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanSwitchToHeir_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeir_Server");

	struct ABP_PlayerCharacter_C_CanSwitchToHeir_Server_Params {
	};
	ABP_PlayerCharacter_C_CanSwitchToHeir_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ChildNameSelectedFinish
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NameID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ChildNameSelectedFinish(int32_t NameID, TEnumAsByte<E_Sex> sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ChildNameSelectedFinish");

	struct ABP_PlayerCharacter_C_Client_ChildNameSelectedFinish_Params {
		int32_t NameID;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Sex> sex;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_ChildNameSelectedFinish_Params params;
	params.NameID = NameID;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerLockedName
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_PlayerLockedName(int32_t ButtonID, TEnumAsByte<E_SpouseType> SpouseType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerLockedName");

	struct ABP_PlayerCharacter_C_Client_PlayerLockedName_Params {
		int32_t ButtonID;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_PlayerLockedName_Params params;
	params.ButtonID = ButtonID;
	params.SpouseType = SpouseType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerLockedName
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NameID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Child	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_PlayerLockedName(int32_t ButtonID, class APlayerState* PlayerState, int32_t NameID, class AActor* Child) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerLockedName");

	struct ABP_PlayerCharacter_C_Server_PlayerLockedName_Params {
		int32_t ButtonID;			//Offset: 0 | ElementSize: 4
		class APlayerState* PlayerState;			//Offset: 8 | ElementSize: 8
		int32_t NameID;			//Offset: 16 | ElementSize: 4
		class AActor* Child;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Server_PlayerLockedName_Params params;
	params.ButtonID = ButtonID;
	params.PlayerState = PlayerState;
	params.NameID = NameID;
	params.Child = Child;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnragdollFinished_NewCharacter
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnragdollFinished_NewCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnragdollFinished_NewCharacter");

	struct ABP_PlayerCharacter_C_UnragdollFinished_NewCharacter_Params {
	};
	ABP_PlayerCharacter_C_UnragdollFinished_NewCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerRestart_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerRestart_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerRestart_Client");

	struct ABP_PlayerCharacter_C_PlayerRestart_Client_Params {
	};
	ABP_PlayerCharacter_C_PlayerRestart_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerRestart_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerRestart_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerRestart_Server");

	struct ABP_PlayerCharacter_C_PlayerRestart_Server_Params {
	};
	ABP_PlayerCharacter_C_PlayerRestart_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerSelectedName
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sender	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_PlayerSelectedName(int32_t ButtonID, class ABP_MD_PlayerState_C* Sender, TEnumAsByte<E_SpouseType> SpouseType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PlayerSelectedName");

	struct ABP_PlayerCharacter_C_Client_PlayerSelectedName_Params {
		int32_t ButtonID;			//Offset: 0 | ElementSize: 4
		class ABP_MD_PlayerState_C* Sender;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_PlayerSelectedName_Params params;
	params.ButtonID = ButtonID;
	params.Sender = Sender;
	params.SpouseType = SpouseType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerSelectedName
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ButtonID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_PlayerSelectedName(class APlayerState* PlayerState, int32_t ButtonID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_PlayerSelectedName");

	struct ABP_PlayerCharacter_C_Server_PlayerSelectedName_Params {
		class APlayerState* PlayerState;			//Offset: 0 | ElementSize: 8
		int32_t ButtonID;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Server_PlayerSelectedName_Params params;
	params.PlayerState = PlayerState;
	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHiddenArmors_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HiddenArmor	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Remove	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateHiddenArmors_Server(TEnumAsByte<E_EquipmentCategories> HiddenArmor, bool Remove) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHiddenArmors_Server");

	struct ABP_PlayerCharacter_C_UpdateHiddenArmors_Server_Params {
		TEnumAsByte<E_EquipmentCategories> HiddenArmor;			//Offset: 0 | ElementSize: 1
		bool Remove;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateHiddenArmors_Server_Params params;
	params.HiddenArmor = HiddenArmor;
	params.Remove = Remove;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_UnlockMillCrest
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemCrafted	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberCrafted	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_UnlockMillCrest(struct FName ItemCrafted, int32_t NumberCrafted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_UnlockMillCrest");

	struct ABP_PlayerCharacter_C_Server_UnlockMillCrest_Params {
		struct FName ItemCrafted;			//Offset: 0 | ElementSize: 8
		int32_t NumberCrafted;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Server_UnlockMillCrest_Params params;
	params.ItemCrafted = ItemCrafted;
	params.NumberCrafted = NumberCrafted;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetCrest
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerCharacter	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CrestData	Type: struct FST_CrestSettings	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetCrest(class ABP_PlayerCharacter_C* PlayerCharacter, struct FST_CrestSettings CrestData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetCrest");

	struct ABP_PlayerCharacter_C_Server_SetCrest_Params {
		class ABP_PlayerCharacter_C* PlayerCharacter;			//Offset: 0 | ElementSize: 8
		struct FST_CrestSettings CrestData;			//Offset: 8 | ElementSize: 52
	};
	ABP_PlayerCharacter_C_Server_SetCrest_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.CrestData = CrestData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeDyeInSlot_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeItemNameRow	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeDyeInSlot_Server(EDyeColor DyeColor, struct FName DyeItemNameRow, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeDyeInSlot_Server");

	struct ABP_PlayerCharacter_C_ChangeDyeInSlot_Server_Params {
		EDyeColor DyeColor;			//Offset: 0 | ElementSize: 1
		struct FName DyeItemNameRow;			//Offset: 4 | ElementSize: 8
		int32_t Index;			//Offset: 12 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ChangeDyeInSlot_Server_Params params;
	params.DyeColor = DyeColor;
	params.DyeItemNameRow = DyeItemNameRow;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryCancel_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuerierPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarriageChoiceQueryCancel_Server(struct FString QuerierPlayerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryCancel_Server");

	struct ABP_PlayerCharacter_C_MarriageChoiceQueryCancel_Server_Params {
		struct FString QuerierPlayerID;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MarriageChoiceQueryCancel_Server_Params params;
	params.QuerierPlayerID = QuerierPlayerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryFinish_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProposalState	Type: EProposalState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MakeLoveState	Type: EMakeLoveState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QueryResponse	Type: EQueryResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarriageChoiceQueryFinish_Client(EMarriageChoice MarriageChoice, EProposalState ProposalState, EMakeLoveState MakeLoveState, EQueryResponse QueryResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryFinish_Client");

	struct ABP_PlayerCharacter_C_MarriageChoiceQueryFinish_Client_Params {
		EMarriageChoice MarriageChoice;			//Offset: 0 | ElementSize: 1
		EProposalState ProposalState;			//Offset: 1 | ElementSize: 1
		EMakeLoveState MakeLoveState;			//Offset: 2 | ElementSize: 1
		EQueryResponse QueryResponse;			//Offset: 3 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_MarriageChoiceQueryFinish_Client_Params params;
	params.MarriageChoice = MarriageChoice;
	params.ProposalState = ProposalState;
	params.MakeLoveState = MakeLoveState;
	params.QueryResponse = QueryResponse;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQuery_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuerierPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarriageChoiceQuery_Client(EMarriageChoice MarriageChoice, struct FString QuerierPlayerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQuery_Client");

	struct ABP_PlayerCharacter_C_MarriageChoiceQuery_Client_Params {
		EMarriageChoice MarriageChoice;			//Offset: 0 | ElementSize: 1
		struct FString QuerierPlayerID;			//Offset: 8 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MarriageChoiceQuery_Client_Params params;
	params.MarriageChoice = MarriageChoice;
	params.QuerierPlayerID = QuerierPlayerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryResponse_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QueryResponse	Type: EQueryResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResponderPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarriageChoiceQueryResponse_Server(EQueryResponse QueryResponse, struct FString ResponderPlayerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQueryResponse_Server");

	struct ABP_PlayerCharacter_C_MarriageChoiceQueryResponse_Server_Params {
		EQueryResponse QueryResponse;			//Offset: 0 | ElementSize: 1
		struct FString ResponderPlayerID;			//Offset: 8 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MarriageChoiceQueryResponse_Server_Params params;
	params.QueryResponse = QueryResponse;
	params.ResponderPlayerID = ResponderPlayerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQuery_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarriageChoiceQuery_Server(EMarriageChoice MarriageChoice, struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarriageChoiceQuery_Server");

	struct ABP_PlayerCharacter_C_MarriageChoiceQuery_Server_Params {
		EMarriageChoice MarriageChoice;			//Offset: 0 | ElementSize: 1
		struct FString PlayerId;			//Offset: 8 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 24 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MarriageChoiceQuery_Server_Params params;
	params.MarriageChoice = MarriageChoice;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MakeLove_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Player2ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MakeLove_Server(struct FString PlayerId, struct FString Player2ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MakeLove_Server");

	struct ABP_PlayerCharacter_C_MakeLove_Server_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString Player2ID;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MakeLove_Server_Params params;
	params.PlayerId = PlayerId;
	params.Player2ID = Player2ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DivorcePlayers_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DivorcePlayers_Server(struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DivorcePlayers_Server");

	struct ABP_PlayerCharacter_C_DivorcePlayers_Server_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_DivorcePlayers_Server_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarryPlayers_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MarryPlayers_Server(struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MarryPlayers_Server");

	struct ABP_PlayerCharacter_C_MarryPlayers_Server_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_MarryPlayers_Server_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayBlockBreakAnimation_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayBlockBreakAnimation_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayBlockBreakAnimation_Client");

	struct ABP_PlayerCharacter_C_PlayBlockBreakAnimation_Client_Params {
	};
	ABP_PlayerCharacter_C_PlayBlockBreakAnimation_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetVillageName
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerCharacter	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VillageNameData	Type: struct FST_VillageNameSettings	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetVillageName(class ABP_PlayerCharacter_C* PlayerCharacter, struct FST_VillageNameSettings VillageNameData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetVillageName");

	struct ABP_PlayerCharacter_C_Server_SetVillageName_Params {
		class ABP_PlayerCharacter_C* PlayerCharacter;			//Offset: 0 | ElementSize: 8
		struct FST_VillageNameSettings VillageNameData;			//Offset: 8 | ElementSize: 32
	};
	ABP_PlayerCharacter_C_Server_SetVillageName_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.VillageNameData = VillageNameData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopStageInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopStageInteraction_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopStageInteraction_Client");

	struct ABP_PlayerCharacter_C_StopStageInteraction_Client_Params {
	};
	ABP_PlayerCharacter_C_StopStageInteraction_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SwitchToHeir
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SwitchToHeir(class ABP_BaseCharacter_C* Heir) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SwitchToHeir");

	struct ABP_PlayerCharacter_C_Server_SwitchToHeir_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Server_SwitchToHeir_Params params;
	params.Heir = Heir;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlaySpecificAnimationDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_PlaySpecificDialogueAnimation_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsPersistent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Animation	Type: TAssetPtr<class UAnimMontage>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPC	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlaySpecificAnimationDialogue_Server(class UDE_PlaySpecificDialogueAnimation_C* DERef, bool IsPersistent, TAssetPtr<class UAnimMontage> Animation, class AActor* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlaySpecificAnimationDialogue_Server");

	struct ABP_PlayerCharacter_C_PlaySpecificAnimationDialogue_Server_Params {
		class UDE_PlaySpecificDialogueAnimation_C* DERef;			//Offset: 0 | ElementSize: 8
		bool IsPersistent;			//Offset: 8 | ElementSize: 1
		TAssetPtr<class UAnimMontage> Animation;			//Offset: 16 | ElementSize: 40
		class AActor* NPC;			//Offset: 56 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_PlaySpecificAnimationDialogue_Server_Params params;
	params.DERef = DERef;
	params.IsPersistent = IsPersistent;
	params.Animation = Animation;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItemToNPCDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_TransferItemToNPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Invert	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TransferItemToNPCDialogue_Server(class UDE_TransferItemToNPC_C* DERef, bool Invert, int32_t ItemIndex, int32_t Count, class AActor* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItemToNPCDialogue_Server");

	struct ABP_PlayerCharacter_C_TransferItemToNPCDialogue_Server_Params {
		class UDE_TransferItemToNPC_C* DERef;			//Offset: 0 | ElementSize: 8
		bool Invert;			//Offset: 8 | ElementSize: 1
		int32_t ItemIndex;			//Offset: 12 | ElementSize: 4
		int32_t Count;			//Offset: 16 | ElementSize: 4
		class AActor* NPC;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_TransferItemToNPCDialogue_Server_Params params;
	params.DERef = DERef;
	params.Invert = Invert;
	params.ItemIndex = ItemIndex;
	params.Count = Count;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockWildAnimalOnMapDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_UnlockWildAnimalOnMap_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnlockWildAnimalOnMapDialogue_Server(class UDE_UnlockWildAnimalOnMap_C* DERef, TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockWildAnimalOnMapDialogue_Server");

	struct ABP_PlayerCharacter_C_UnlockWildAnimalOnMapDialogue_Server_Params {
		class UDE_UnlockWildAnimalOnMap_C* DERef;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UnlockWildAnimalOnMapDialogue_Server_Params params;
	params.DERef = DERef;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockWildFishOnMapDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_UnlockWildAnimalFishOnMap_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FishType	Type: TEnumAsByte<E_FishPoolType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnlockWildFishOnMapDialogue_Server(class UDE_UnlockWildAnimalFishOnMap_C* DERef, TEnumAsByte<E_FishPoolType> FishType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockWildFishOnMapDialogue_Server");

	struct ABP_PlayerCharacter_C_UnlockWildFishOnMapDialogue_Server_Params {
		class UDE_UnlockWildAnimalFishOnMap_C* DERef;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_FishPoolType> FishType;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UnlockWildFishOnMapDialogue_Server_Params params;
	params.DERef = DERef;
	params.FishType = FishType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAffectionDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_ChangeAffection_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PCPlayer	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeAffectionDialogue_Server(class UDE_ChangeAffection_C* DERef, int32_t Value, class AActor* NPC, class AActor* PCPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAffectionDialogue_Server");

	struct ABP_PlayerCharacter_C_ChangeAffectionDialogue_Server_Params {
		class UDE_ChangeAffection_C* DERef;			//Offset: 0 | ElementSize: 8
		int32_t Value;			//Offset: 8 | ElementSize: 4
		class AActor* NPC;			//Offset: 16 | ElementSize: 8
		class AActor* PCPlayer;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ChangeAffectionDialogue_Server_Params params;
	params.DERef = DERef;
	params.Value = Value;
	params.NPC = NPC;
	params.PCPlayer = PCPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddItemToPlayerInventoryDialogue_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DERef	Type: class UDE_AddItemToPlayersInventory_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemsConditionInPercent	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::AddItemToPlayerInventoryDialogue_Server(class UDE_AddItemToPlayersInventory_C* DERef, int32_t Count, const int32_t& ItemIndex, float NotificationDelay, float ItemsConditionInPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddItemToPlayerInventoryDialogue_Server");

	struct ABP_PlayerCharacter_C_AddItemToPlayerInventoryDialogue_Server_Params {
		class UDE_AddItemToPlayersInventory_C* DERef;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		int32_t ItemIndex;			//Offset: 12 | ElementSize: 4
		float NotificationDelay;			//Offset: 16 | ElementSize: 4
		float ItemsConditionInPercent;			//Offset: 20 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_AddItemToPlayerInventoryDialogue_Server_Params params;
	params.DERef = DERef;
	params.Count = Count;
	params.ItemIndex = ItemIndex;
	params.NotificationDelay = NotificationDelay;
	params.ItemsConditionInPercent = ItemsConditionInPercent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveResourceWithLowestConditionDialogue_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DERef	Type: class UDE_ConsumeItemFromPlayerInventory_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveResourceWithLowestConditionDialogue_Server(int32_t ItemIndex, int32_t Count, class UDE_ConsumeItemFromPlayerInventory_C* DERef) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveResourceWithLowestConditionDialogue_Server");

	struct ABP_PlayerCharacter_C_RemoveResourceWithLowestConditionDialogue_Server_Params {
		int32_t ItemIndex;			//Offset: 0 | ElementSize: 4
		int32_t Count;			//Offset: 4 | ElementSize: 4
		class UDE_ConsumeItemFromPlayerInventory_C* DERef;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_RemoveResourceWithLowestConditionDialogue_Server_Params params;
	params.ItemIndex = ItemIndex;
	params.Count = Count;
	params.DERef = DERef;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostControl_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGhostControl_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostControl_Server");

	struct ABP_PlayerCharacter_C_UpdateGhostControl_Server_Params {
	};
	ABP_PlayerCharacter_C_UpdateGhostControl_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRepIsInDialogue
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRepIsInDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRepIsInDialogue");

	struct ABP_PlayerCharacter_C_OnRepIsInDialogue_Params {
	};
	ABP_PlayerCharacter_C_OnRepIsInDialogue_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShakeFromSource_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraShakeFromSource_Client(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShakeFromSource_Client");

	struct ABP_PlayerCharacter_C_CameraShakeFromSource_Client_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CameraShakeFromSource_Client_Params params;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShake_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
// Name: Scale	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraShake_Client(class UCameraShakeBase* ShakeClass, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraShake_Client");

	struct ABP_PlayerCharacter_C_CameraShake_Client_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_CameraShake_Client_Params params;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformPlaceabilityMaterialColorServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Placeable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlatformPlaceabilityMaterialColorServer(class ABP_MasterPlatform_C* Platform, bool Placeable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformPlaceabilityMaterialColorServer");

	struct ABP_PlayerCharacter_C_UpdatePlatformPlaceabilityMaterialColorServer_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
		bool Placeable;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlatformPlaceabilityMaterialColorServer_Params params;
	params.Platform = Platform;
	params.Placeable = Placeable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformPlaceabilityMaterialColorMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Placeable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlatformPlaceabilityMaterialColorMulticast(class ABP_MasterPlatform_C* Platform, bool Placeable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformPlaceabilityMaterialColorMulticast");

	struct ABP_PlayerCharacter_C_UpdatePlatformPlaceabilityMaterialColorMulticast_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
		bool Placeable;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlatformPlaceabilityMaterialColorMulticast_Params params;
	params.Platform = Platform;
	params.Placeable = Placeable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreatePlatformGhostMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreatePlatformGhostMulticast(class ABP_MasterPlatform_C* Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreatePlatformGhostMulticast");

	struct ABP_PlayerCharacter_C_CreatePlatformGhostMulticast_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreatePlatformGhostMulticast_Params params;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreatePlatformGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreatePlatformGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreatePlatformGhostServer");

	struct ABP_PlayerCharacter_C_CreatePlatformGhostServer_Params {
	};
	ABP_PlayerCharacter_C_CreatePlatformGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformGhostServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlatformGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatformGhostServer");

	struct ABP_PlayerCharacter_C_UpdatePlatformGhostServer_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlatformGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyPlatformGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyPlatformGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyPlatformGhostServer");

	struct ABP_PlayerCharacter_C_DestroyPlatformGhostServer_Params {
	};
	ABP_PlayerCharacter_C_DestroyPlatformGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetCoopStatsProtection
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetCoopStatsProtection(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetCoopStatsProtection");

	struct ABP_PlayerCharacter_C_Server_SetCoopStatsProtection_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_SetCoopStatsProtection_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateGenericQuestsOnClientJoin
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestData	Type: TArray<struct FST_QuestInfoForReplicationGenericQuest>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ReplicateGenericQuestsOnClientJoin(TArray<struct FST_QuestInfoForReplicationGenericQuest>* QuestData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateGenericQuestsOnClientJoin");

	struct ABP_PlayerCharacter_C_Client_ReplicateGenericQuestsOnClientJoin_Params {
		TArray<struct FST_QuestInfoForReplicationGenericQuest> QuestData;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_Client_ReplicateGenericQuestsOnClientJoin_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestData != nullptr)
		*QuestData = params.QuestData;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanBeDamaged_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanBeDamaged_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanBeDamaged_Server");

	struct ABP_PlayerCharacter_C_CanBeDamaged_Server_Params {
	};
	ABP_PlayerCharacter_C_CanBeDamaged_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateStoryQuestsOnClientJoin
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestsData	Type: TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ReplicateStoryQuestsOnClientJoin(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateStoryQuestsOnClientJoin");

	struct ABP_PlayerCharacter_C_Client_ReplicateStoryQuestsOnClientJoin_Params {
		TArray<struct FST_QuestInfoForReplicationOnPlayerJoin> QuestsData;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_Client_ReplicateStoryQuestsOnClientJoin_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestsData != nullptr)
		*QuestsData = params.QuestsData;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockEmotes_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnlockedEmotes	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnlockEmotes_Client(const TArray<struct FName>& UnlockedEmotes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnlockEmotes_Client");

	struct ABP_PlayerCharacter_C_UnlockEmotes_Client_Params {
		TArray<struct FName> UnlockedEmotes;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_UnlockEmotes_Client_Params params;
	params.UnlockedEmotes = UnlockedEmotes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsOnClientJoin_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Quest	Type: TArray<struct FST_QuestInfo_Save>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsOnClientJoin_Client(const TArray<int32_t>& QuestIndex, const TArray<struct FST_QuestInfo_Save>& Quest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsOnClientJoin_Client");

	struct ABP_PlayerCharacter_C_ReplicateQuestsOnClientJoin_Client_Params {
		TArray<int32_t> QuestIndex;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_QuestInfo_Save> Quest;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateQuestsOnClientJoin_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.Quest = Quest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferAllItemsServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FromComponent	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TransferDestination	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TransferAllItemsServer(class UInventoryComponent_C* FromComponent, class UInventoryComponent_C* TransferDestination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferAllItemsServer");

	struct ABP_PlayerCharacter_C_TransferAllItemsServer_Params {
		class UInventoryComponent_C* FromComponent;			//Offset: 0 | ElementSize: 8
		class UInventoryComponent_C* TransferDestination;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_TransferAllItemsServer_Params params;
	params.FromComponent = FromComponent;
	params.TransferDestination = TransferDestination;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_SetTrackedQuestNumber
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_SetTrackedQuestNumber(int32_t QuestIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_SetTrackedQuestNumber");

	struct ABP_PlayerCharacter_C_Client_SetTrackedQuestNumber_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Client_SetTrackedQuestNumber_Params params;
	params.QuestIndex = QuestIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_RemoveWaypointActor
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Owner	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_RemoveWaypointActor(class ABP_MD_PlayerState_C* Owner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_RemoveWaypointActor");

	struct ABP_PlayerCharacter_C_Server_RemoveWaypointActor_Params {
		class ABP_MD_PlayerState_C* Owner;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Server_RemoveWaypointActor_Params params;
	params.Owner = Owner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetPlayerCharacterName
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerCharacter	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetPlayerCharacterName(class ABP_PlayerCharacter_C* PlayerCharacter, struct FText CharacterName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetPlayerCharacterName");

	struct ABP_PlayerCharacter_C_Server_SetPlayerCharacterName_Params {
		class ABP_PlayerCharacter_C* PlayerCharacter;			//Offset: 0 | ElementSize: 8
		struct FText CharacterName;			//Offset: 8 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_Server_SetPlayerCharacterName_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.CharacterName = CharacterName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SpawnWaypointActor_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Owner	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SpawnWaypointActor_Server(class ABP_MD_PlayerState_C* Owner, struct FTransform Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SpawnWaypointActor_Server");

	struct ABP_PlayerCharacter_C_Server_SpawnWaypointActor_Server_Params {
		class ABP_MD_PlayerState_C* Owner;			//Offset: 0 | ElementSize: 8
		struct FTransform Transform;			//Offset: 16 | ElementSize: 48
	};
	ABP_PlayerCharacter_C_Server_SpawnWaypointActor_Server_Params params;
	params.Owner = Owner;
	params.Transform = Transform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ChangeNPCName
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRowName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ChangeSex	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_ChangeNPCName(class ABP_BaseCharacter_C* CharacterReference, struct FName NewRowName, struct FText NewName, bool ChangeSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ChangeNPCName");

	struct ABP_PlayerCharacter_C_Server_ChangeNPCName_Params {
		class ABP_BaseCharacter_C* CharacterReference;			//Offset: 0 | ElementSize: 8
		struct FName NewRowName;			//Offset: 8 | ElementSize: 8
		struct FText NewName;			//Offset: 16 | ElementSize: 24
		bool ChangeSex;			//Offset: 40 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_ChangeNPCName_Params params;
	params.CharacterReference = CharacterReference;
	params.NewRowName = NewRowName;
	params.NewName = NewName;
	params.ChangeSex = ChangeSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateShownTutorialsToClient
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: TutorialTypes	Type: TArray<TEnumAsByte<E_Tutorials>>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TutorialValues	Type: TArray<bool>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ReplicateShownTutorialsToClient(const TArray<TEnumAsByte<E_Tutorials>>& TutorialTypes, const TArray<bool>& TutorialValues) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateShownTutorialsToClient");

	struct ABP_PlayerCharacter_C_Client_ReplicateShownTutorialsToClient_Params {
		TArray<TEnumAsByte<E_Tutorials>> TutorialTypes;			//Offset: 0 | ElementSize: 16
		TArray<bool> TutorialValues;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_Client_ReplicateShownTutorialsToClient_Params params;
	params.TutorialTypes = TutorialTypes;
	params.TutorialValues = TutorialValues;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateShownTutorialsToClient
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_ReplicateShownTutorialsToClient() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateShownTutorialsToClient");

	struct ABP_PlayerCharacter_C_Server_ReplicateShownTutorialsToClient_Params {
	};
	ABP_PlayerCharacter_C_Server_ReplicateShownTutorialsToClient_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetTutorialToAlreadyShown
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShownTutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetTutorialToAlreadyShown(TEnumAsByte<E_Tutorials> ShownTutorial) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetTutorialToAlreadyShown");

	struct ABP_PlayerCharacter_C_Server_SetTutorialToAlreadyShown_Params {
		TEnumAsByte<E_Tutorials> ShownTutorial;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_SetTutorialToAlreadyShown_Params params;
	params.ShownTutorial = ShownTutorial;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_CompleteGoal
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_CompleteGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_CompleteGoal");

	struct ABP_PlayerCharacter_C_Server_CompleteGoal_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		int32_t GoalID;			//Offset: 16 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Server_CompleteGoal_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateCompletedGoal
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ReplicateCompletedGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateCompletedGoal");

	struct ABP_PlayerCharacter_C_Client_ReplicateCompletedGoal_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		int32_t GoalID;			//Offset: 16 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Client_ReplicateCompletedGoal_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateCompletedGoal
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_ReplicateCompletedGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateCompletedGoal");

	struct ABP_PlayerCharacter_C_Server_ReplicateCompletedGoal_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		int32_t GoalID;			//Offset: 16 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Server_ReplicateCompletedGoal_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetStartingLoadFinished
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStartingLoadFinished	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetStartingLoadFinished(bool IsStartingLoadFinished) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetStartingLoadFinished");

	struct ABP_PlayerCharacter_C_Server_SetStartingLoadFinished_Params {
		bool IsStartingLoadFinished;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_SetStartingLoadFinished_Params params;
	params.IsStartingLoadFinished = IsStartingLoadFinished;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_DrawLandscapeOnRoadPartRemove
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: V0	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: v1	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_DrawLandscapeOnRoadPartRemove(struct FVector V0, struct FVector v1) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_DrawLandscapeOnRoadPartRemove");

	struct ABP_PlayerCharacter_C_Client_DrawLandscapeOnRoadPartRemove_Params {
		struct FVector V0;			//Offset: 0 | ElementSize: 12
		struct FVector v1;			//Offset: 12 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_Client_DrawLandscapeOnRoadPartRemove_Params params;
	params.V0 = V0;
	params.v1 = v1;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_DrawLandscapeOnRoadPartRemove
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: V0	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: v1	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_DrawLandscapeOnRoadPartRemove(struct FVector V0, struct FVector v1) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_DrawLandscapeOnRoadPartRemove");

	struct ABP_PlayerCharacter_C_Server_DrawLandscapeOnRoadPartRemove_Params {
		struct FVector V0;			//Offset: 0 | ElementSize: 12
		struct FVector v1;			//Offset: 12 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_Server_DrawLandscapeOnRoadPartRemove_Params params;
	params.V0 = V0;
	params.v1 = v1;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_SetLastSelectedQuickSlotID
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: LastSelectedQuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsLoadedSlotEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_SetLastSelectedQuickSlotID(int32_t LastSelectedQuickSlotID, bool IsLoadedSlotEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_SetLastSelectedQuickSlotID");

	struct ABP_PlayerCharacter_C_Client_SetLastSelectedQuickSlotID_Params {
		int32_t LastSelectedQuickSlotID;			//Offset: 0 | ElementSize: 4
		bool IsLoadedSlotEquipped;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_SetLastSelectedQuickSlotID_Params params;
	params.LastSelectedQuickSlotID = LastSelectedQuickSlotID;
	params.IsLoadedSlotEquipped = IsLoadedSlotEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestToGive_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangeToEmpty	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestToGive_Server(class ABP_NPC_C* NPCReference, bool ChangeToEmpty, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestToGive_Server");

	struct ABP_PlayerCharacter_C_ReplicateQuestToGive_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool ChangeToEmpty;			//Offset: 8 | ElementSize: 1
		bool AllPlayers;			//Offset: 9 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ReplicateQuestToGive_Server_Params params;
	params.NPCReference = NPCReference;
	params.ChangeToEmpty = ChangeToEmpty;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateQuestDescriptionStrings
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Array	Type: TArray<struct FST_StringTable_IDKey_Pair>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_ReplicateQuestDescriptionStrings(struct FName QuestID, int32_t QuestIndex, TArray<struct FST_StringTable_IDKey_Pair>* Array) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_ReplicateQuestDescriptionStrings");

	struct ABP_PlayerCharacter_C_Client_ReplicateQuestDescriptionStrings_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t QuestIndex;			//Offset: 8 | ElementSize: 4
		TArray<struct FST_StringTable_IDKey_Pair> Array;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_Client_ReplicateQuestDescriptionStrings_Params params;
	params.QuestID = QuestID;
	params.QuestIndex = QuestIndex;

	UObject::ProcessEvent(fn, &params);
	if (Array != nullptr)
		*Array = params.Array;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateQuestDescriptionStrings
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_ReplicateQuestDescriptionStrings(struct FName QuestID, int32_t QuestIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_ReplicateQuestDescriptionStrings");

	struct ABP_PlayerCharacter_C_Server_ReplicateQuestDescriptionStrings_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t QuestIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Server_ReplicateQuestDescriptionStrings_Params params;
	params.QuestID = QuestID;
	params.QuestIndex = QuestIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_SetOwningPlayerNetID
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Multicast_SetOwningPlayerNetID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_SetOwningPlayerNetID");

	struct ABP_PlayerCharacter_C_Multicast_SetOwningPlayerNetID_Params {
	};
	ABP_PlayerCharacter_C_Multicast_SetOwningPlayerNetID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetOwningPlayerNetID
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetOwningPlayerNetID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetOwningPlayerNetID");

	struct ABP_PlayerCharacter_C_Server_SetOwningPlayerNetID_Params {
	};
	ABP_PlayerCharacter_C_Server_SetOwningPlayerNetID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_MountInventoryArmorAction
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_MountInventoryArmorAction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_MountInventoryArmorAction");

	struct ABP_PlayerCharacter_C_Client_MountInventoryArmorAction_Params {
	};
	ABP_PlayerCharacter_C_Client_MountInventoryArmorAction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_MountInventoryArmorAction
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemToFind	Type: TEnumAsByte<E_EquipmentCategories>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_MountInventoryArmorAction(const struct FName& ItemName, int32_t ItemArrayID, TEnumAsByte<E_EquipmentCategories> ItemToFind) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_MountInventoryArmorAction");

	struct ABP_PlayerCharacter_C_Server_MountInventoryArmorAction_Params {
		struct FName ItemName;			//Offset: 0 | ElementSize: 8
		int32_t ItemArrayID;			//Offset: 8 | ElementSize: 4
		TEnumAsByte<E_EquipmentCategories> ItemToFind;			//Offset: 12 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_MountInventoryArmorAction_Params params;
	params.ItemName = ItemName;
	params.ItemArrayID = ItemArrayID;
	params.ItemToFind = ItemToFind;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitCameraMode_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CameraDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitCameraMode_Client(TEnumAsByte<E_ViewMode> ViewMode, float CameraDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitCameraMode_Client");

	struct ABP_PlayerCharacter_C_InitCameraMode_Client_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
		float CameraDistance;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_InitCameraMode_Client_Params params;
	params.ViewMode = ViewMode;
	params.CameraDistance = CameraDistance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_UpdateFurniture
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingWarningType	Type: TEnumAsByte<E_BuildingWarningType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_UpdateFurniture(TEnumAsByte<E_BuildingWarningType> BuildingWarningType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_UpdateFurniture");

	struct ABP_PlayerCharacter_C_Client_UpdateFurniture_Params {
		TEnumAsByte<E_BuildingWarningType> BuildingWarningType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Client_UpdateFurniture_Params params;
	params.BuildingWarningType = BuildingWarningType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetVolume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FadeOutSoundComponent_Server(float Duration, float TargetVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_Server");

	struct ABP_PlayerCharacter_C_FadeOutSoundComponent_Server_Params {
		float Duration;			//Offset: 0 | ElementSize: 4
		float TargetVolume;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FadeOutSoundComponent_Server_Params params;
	params.Duration = Duration;
	params.TargetVolume = TargetVolume;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetVolume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FadeOutSoundComponent_BPI(float Duration, float TargetVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_BPI");

	struct ABP_PlayerCharacter_C_FadeOutSoundComponent_BPI_Params {
		float Duration;			//Offset: 0 | ElementSize: 4
		float TargetVolume;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FadeOutSoundComponent_BPI_Params params;
	params.Duration = Duration;
	params.TargetVolume = TargetVolume;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetVolume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FadeOutSoundComponent_Multicast(float Duration, float TargetVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeOutSoundComponent_Multicast");

	struct ABP_PlayerCharacter_C_FadeOutSoundComponent_Multicast_Params {
		float Duration;			//Offset: 0 | ElementSize: 4
		float TargetVolume;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FadeOutSoundComponent_Multicast_Params params;
	params.Duration = Duration;
	params.TargetVolume = TargetVolume;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Unstuck_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck_Server");

	struct ABP_PlayerCharacter_C_Unstuck_Server_Params {
	};
	ABP_PlayerCharacter_C_Unstuck_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SummonMount
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SummonMount() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SummonMount");

	struct ABP_PlayerCharacter_C_Server_SummonMount_Params {
	};
	ABP_PlayerCharacter_C_Server_SummonMount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetGameMenuOpen
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetGameMenuOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetGameMenuOpen");

	struct ABP_PlayerCharacter_C_Server_SetGameMenuOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_SetGameMenuOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetInventoryOpen
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetInventoryOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetInventoryOpen");

	struct ABP_PlayerCharacter_C_Server_SetInventoryOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Server_SetInventoryOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteractionStart_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FieldInteractionStart_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteractionStart_Server");

	struct ABP_PlayerCharacter_C_FieldInteractionStart_Server_Params {
	};
	ABP_PlayerCharacter_C_FieldInteractionStart_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyRoadGhost_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyRoadGhost_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyRoadGhost_Server");

	struct ABP_PlayerCharacter_C_DestroyRoadGhost_Server_Params {
	};
	ABP_PlayerCharacter_C_DestroyRoadGhost_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostRoad_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: RoadGhost	Type: class ABP_MasterRoadSpline_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGhostRoad_Multicast(class ABP_MasterRoadSpline_C* RoadGhost) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostRoad_Multicast");

	struct ABP_PlayerCharacter_C_UpdateGhostRoad_Multicast_Params {
		class ABP_MasterRoadSpline_C* RoadGhost;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_UpdateGhostRoad_Multicast_Params params;
	params.RoadGhost = RoadGhost;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostRoad_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGhostRoad_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostRoad_Server");

	struct ABP_PlayerCharacter_C_UpdateGhostRoad_Server_Params {
	};
	ABP_PlayerCharacter_C_UpdateGhostRoad_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_ExecuteInitialRoadVisuals
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class ABP_MasterRoadSpline_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Multicast_ExecuteInitialRoadVisuals(class ABP_MasterRoadSpline_C* Target, bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_ExecuteInitialRoadVisuals");

	struct ABP_PlayerCharacter_C_Multicast_ExecuteInitialRoadVisuals_Params {
		class ABP_MasterRoadSpline_C* Target;			//Offset: 0 | ElementSize: 8
		bool load;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Multicast_ExecuteInitialRoadVisuals_Params params;
	params.Target = Target;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_ExecuteInitialRoadLogic
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class ABP_MasterRoadSpline_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ListOfRoads	Type: TArray<class ABP_MasterRoadSpline_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Multicast_ExecuteInitialRoadLogic(class ABP_MasterRoadSpline_C* Target, bool load, TArray<class ABP_MasterRoadSpline_C*>* ListOfRoads) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Multicast_ExecuteInitialRoadLogic");

	struct ABP_PlayerCharacter_C_Multicast_ExecuteInitialRoadLogic_Params {
		class ABP_MasterRoadSpline_C* Target;			//Offset: 0 | ElementSize: 8
		bool load;			//Offset: 8 | ElementSize: 1
		TArray<class ABP_MasterRoadSpline_C*> ListOfRoads;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_Multicast_ExecuteInitialRoadLogic_Params params;
	params.Target = Target;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
	if (ListOfRoads != nullptr)
		*ListOfRoads = params.ListOfRoads;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateRoadGhost_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: RoadGhost	Type: class ABP_MasterRoadSpline_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateRoadGhost_Server(class ABP_MasterRoadSpline_C* RoadGhost) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateRoadGhost_Server");

	struct ABP_PlayerCharacter_C_CreateRoadGhost_Server_Params {
		class ABP_MasterRoadSpline_C* RoadGhost;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateRoadGhost_Server_Params params;
	params.RoadGhost = RoadGhost;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetRoadFirstPoint
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Server_SetRoadFirstPoint() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Server_SetRoadFirstPoint");

	struct ABP_PlayerCharacter_C_Server_SetRoadFirstPoint_Params {
	};
	ABP_PlayerCharacter_C_Server_SetRoadFirstPoint_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnRagdollFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UnRagdollFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnRagdollFinished");

	struct ABP_PlayerCharacter_C_UnRagdollFinished_Params {
	};
	ABP_PlayerCharacter_C_UnRagdollFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishPlayerSpawn_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: EMD_SpecificPlatform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FinishPlayerSpawn_Server(EMD_SpecificPlatform Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishPlayerSpawn_Server");

	struct ABP_PlayerCharacter_C_FinishPlayerSpawn_Server_Params {
		EMD_SpecificPlatform Platform;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_FinishPlayerSpawn_Server_Params params;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveLoadingScreen_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveLoadingScreen_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveLoadingScreen_Client");

	struct ABP_PlayerCharacter_C_RemoveLoadingScreen_Client_Params {
	};
	ABP_PlayerCharacter_C_RemoveLoadingScreen_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ViewModeRep_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewModeRep	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ViewModeRep_Server(TEnumAsByte<E_ViewMode> ViewModeRep) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ViewModeRep_Server");

	struct ABP_PlayerCharacter_C_ViewModeRep_Server_Params {
		TEnumAsByte<E_ViewMode> ViewModeRep;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ViewModeRep_Server_Params params;
	params.ViewModeRep = ViewModeRep;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PrepareToDismount_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Client_PrepareToDismount_Client(class AActor* mountOrRider) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_PrepareToDismount_Client");

	struct ABP_PlayerCharacter_C_Client_PrepareToDismount_Client_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_Client_PrepareToDismount_Client_Params params;
	params.mountOrRider = mountOrRider;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLoadingFinished_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerLoadingFinished_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLoadingFinished_Server");

	struct ABP_PlayerCharacter_C_PlayerLoadingFinished_Server_Params {
	};
	ABP_PlayerCharacter_C_PlayerLoadingFinished_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerWaitForLoading_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerWaitForLoading_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerWaitForLoading_Client");

	struct ABP_PlayerCharacter_C_PlayerWaitForLoading_Client_Params {
	};
	ABP_PlayerCharacter_C_PlayerWaitForLoading_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateClient
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Owner	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateClient(class ABP_BaseCharacter_C* Owner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateClient");

	struct ABP_PlayerCharacter_C_UpdateClient_Params {
		class ABP_BaseCharacter_C* Owner;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_UpdateClient_Params params;
	params.Owner = Owner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitNewPlayer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitNewPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitNewPlayer");

	struct ABP_PlayerCharacter_C_InitNewPlayer_Params {
	};
	ABP_PlayerCharacter_C_InitNewPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInteractionFurnitureInteractionSlots_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureReference	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Occupied	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: WantToOccupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateInteractionFurnitureInteractionSlots_Client(class ABP_MasterFurniture_C* FurnitureReference, int32_t SlotIndex, bool Occupied, bool WantToOccupy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInteractionFurnitureInteractionSlots_Client");

	struct ABP_PlayerCharacter_C_UpdateInteractionFurnitureInteractionSlots_Client_Params {
		class ABP_MasterFurniture_C* FurnitureReference;			//Offset: 0 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 8 | ElementSize: 4
		bool Occupied;			//Offset: 12 | ElementSize: 1
		bool WantToOccupy;			//Offset: 13 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateInteractionFurnitureInteractionSlots_Client_Params params;
	params.FurnitureReference = FurnitureReference;
	params.SlotIndex = SlotIndex;
	params.Occupied = Occupied;
	params.WantToOccupy = WantToOccupy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInteractionFurnitureInteractionSlots_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureReference	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateInteractionFurnitureInteractionSlots_Server(class ABP_MasterFurniture_C* FurnitureReference, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateInteractionFurnitureInteractionSlots_Server");

	struct ABP_PlayerCharacter_C_UpdateInteractionFurnitureInteractionSlots_Server_Params {
		class ABP_MasterFurniture_C* FurnitureReference;			//Offset: 0 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateInteractionFurnitureInteractionSlots_Server_Params params;
	params.FurnitureReference = FurnitureReference;
	params.SlotIndex = SlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCharacterName_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Name	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateCharacterName_Client(class ABP_BaseCharacter_C* CharacterReference, struct FText Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCharacterName_Client");

	struct ABP_PlayerCharacter_C_UpdateCharacterName_Client_Params {
		class ABP_BaseCharacter_C* CharacterReference;			//Offset: 0 | ElementSize: 8
		struct FText Name;			//Offset: 8 | ElementSize: 24
	};
	ABP_PlayerCharacter_C_UpdateCharacterName_Client_Params params;
	params.CharacterReference = CharacterReference;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCharacterName_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateAllClients_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateCharacterName_Server(class ABP_BaseCharacter_C* CharacterReference, bool UpdateAllClients_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCharacterName_Server");

	struct ABP_PlayerCharacter_C_UpdateCharacterName_Server_Params {
		class ABP_BaseCharacter_C* CharacterReference;			//Offset: 0 | ElementSize: 8
		bool UpdateAllClients_;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateCharacterName_Server_Params params;
	params.CharacterReference = CharacterReference;
	params.UpdateAllClients_ = UpdateAllClients_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerSpawnSoundComponent_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Volume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerSpawnSoundComponent_Multicast(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerSpawnSoundComponent_Multicast");

	struct ABP_PlayerCharacter_C_PlayerSpawnSoundComponent_Multicast_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		float StartTime;			//Offset: 8 | ElementSize: 4
		float Volume;			//Offset: 12 | ElementSize: 4
		bool AutoDestroy;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlayerSpawnSoundComponent_Multicast_Params params;
	params.Sound = Sound;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.AutoDestroy = AutoDestroy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerSpawnSoundComponent_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Volume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayerSpawnSoundComponent_Server(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerSpawnSoundComponent_Server");

	struct ABP_PlayerCharacter_C_PlayerSpawnSoundComponent_Server_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		float StartTime;			//Offset: 8 | ElementSize: 4
		float Volume;			//Offset: 12 | ElementSize: 4
		bool AutoDestroy;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlayerSpawnSoundComponent_Server_Params params;
	params.Sound = Sound;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.AutoDestroy = AutoDestroy;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestToGive_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestCategry	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestToGive_Client(class ABP_NPC_C* NPCReference, struct FName QuestID, TEnumAsByte<E_QuestCategories> QuestCategry) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestToGive_Client");

	struct ABP_PlayerCharacter_C_ReplicateQuestToGive_Client_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FName QuestID;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<E_QuestCategories> QuestCategry;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ReplicateQuestToGive_Client_Params params;
	params.NPCReference = NPCReference;
	params.QuestID = QuestID;
	params.QuestCategry = QuestCategry;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateGoalActors_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoalActors	Type: TArray<class ABP_GoalActor_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateGoalActors_Client(TArray<class ABP_GoalActor_C*>* GoalActors) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateGoalActors_Client");

	struct ABP_PlayerCharacter_C_ReplicateGoalActors_Client_Params {
		TArray<class ABP_GoalActor_C*> GoalActors;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateGoalActors_Client_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GoalActors != nullptr)
		*GoalActors = params.GoalActors;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateGoalActors_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateGoalActors_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateGoalActors_Server");

	struct ABP_PlayerCharacter_C_ReplicateGoalActors_Server_Params {
	};
	ABP_PlayerCharacter_C_ReplicateGoalActors_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestOnClientJoin_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Quest	Type: struct FST_QuestInfo_Save	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: ShouldTrack	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestOnClientJoin_Client(int32_t QuestIndex, struct FST_QuestInfo_Save Quest, bool ShouldTrack) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestOnClientJoin_Client");

	struct ABP_PlayerCharacter_C_ReplicateQuestOnClientJoin_Client_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FST_QuestInfo_Save Quest;			//Offset: 8 | ElementSize: 352
		bool ShouldTrack;			//Offset: 360 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ReplicateQuestOnClientJoin_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.Quest = Quest;
	params.ShouldTrack = ShouldTrack;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsOnClientJoin_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsOnClientJoin_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsOnClientJoin_Server");

	struct ABP_PlayerCharacter_C_ReplicateQuestsOnClientJoin_Server_Params {
	};
	ABP_PlayerCharacter_C_ReplicateQuestsOnClientJoin_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveQuestFromArray_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveQuestFromArray_Client(int32_t ArrayIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveQuestFromArray_Client");

	struct ABP_PlayerCharacter_C_RemoveQuestFromArray_Client_Params {
		int32_t ArrayIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_RemoveQuestFromArray_Client_Params params;
	params.ArrayIndex = ArrayIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveQuestFromArray_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveQuestFromArray_Server(int32_t ArrayIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveQuestFromArray_Server");

	struct ABP_PlayerCharacter_C_RemoveQuestFromArray_Server_Params {
		int32_t ArrayIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_RemoveQuestFromArray_Server_Params params;
	params.ArrayIndex = ArrayIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailQuestOnClients_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FailQuestOnClients_Client(int32_t QuestIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailQuestOnClients_Client");

	struct ABP_PlayerCharacter_C_FailQuestOnClients_Client_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_FailQuestOnClients_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailQuestOnClients_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FailQuestOnClients_Server(int32_t QuestIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailQuestOnClients_Server");

	struct ABP_PlayerCharacter_C_FailQuestOnClients_Server_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_FailQuestOnClients_Server_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInventoryChange_Event_1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnInventoryChange_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInventoryChange_Event_1");

	struct ABP_PlayerCharacter_C_OnInventoryChange_Event_1_Params {
	};
	ABP_PlayerCharacter_C_OnInventoryChange_Event_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckForNeededItems_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckForNeededItems_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckForNeededItems_Client");

	struct ABP_PlayerCharacter_C_CheckForNeededItems_Client_Params {
	};
	ABP_PlayerCharacter_C_CheckForNeededItems_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckForNeededItems_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckForNeededItems_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckForNeededItems_Server");

	struct ABP_PlayerCharacter_C_CheckForNeededItems_Server_Params {
	};
	ABP_PlayerCharacter_C_CheckForNeededItems_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseHuntedAnimals_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IncreaseHuntedAnimals_Client(TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseHuntedAnimals_Client");

	struct ABP_PlayerCharacter_C_IncreaseHuntedAnimals_Client_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IncreaseHuntedAnimals_Client_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseHuntedAnimals_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IncreaseHuntedAnimals_Server(TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IncreaseHuntedAnimals_Server");

	struct ABP_PlayerCharacter_C_IncreaseHuntedAnimals_Server_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IncreaseHuntedAnimals_Server_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsReward_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestReward	Type: struct FST_QuestReward	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsReward_Client(int32_t QuestIndex, struct FName QuestID, struct FST_QuestReward QuestReward) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsReward_Client");

	struct ABP_PlayerCharacter_C_ReplicateQuestsReward_Client_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		struct FST_QuestReward QuestReward;			//Offset: 16 | ElementSize: 232
	};
	ABP_PlayerCharacter_C_ReplicateQuestsReward_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.QuestReward = QuestReward;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsReward_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestReward	Type: struct FST_QuestReward	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsReward_Server(int32_t QuestIndex, struct FName QuestID, struct FST_QuestReward QuestReward) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsReward_Server");

	struct ABP_PlayerCharacter_C_ReplicateQuestsReward_Server_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		struct FST_QuestReward QuestReward;			//Offset: 16 | ElementSize: 232
	};
	ABP_PlayerCharacter_C_ReplicateQuestsReward_Server_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.QuestReward = QuestReward;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CompleteQuestOnClients_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CompleteQuestOnClients_Client(int32_t QuestIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CompleteQuestOnClients_Client");

	struct ABP_PlayerCharacter_C_CompleteQuestOnClients_Client_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CompleteQuestOnClients_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CompleteQuestOnClients_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CompleteQuestOnClients_Server(int32_t QuestIndex, struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CompleteQuestOnClients_Server");

	struct ABP_PlayerCharacter_C_CompleteQuestOnClients_Server_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CompleteQuestOnClients_Server_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsGoalsInformation_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Goals	Type: TArray<struct FST_MasterGoals>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsGoalsInformation_Client(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, const TArray<struct FST_MasterGoals>& Goals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsGoalsInformation_Client");

	struct ABP_PlayerCharacter_C_ReplicateQuestsGoalsInformation_Client_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		TArray<struct FST_MasterGoals> Goals;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateQuestsGoalsInformation_Client_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.Goals = Goals;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsGoalsInformation_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Goals	Type: TArray<struct FST_MasterGoals>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateQuestsGoalsInformation_Server(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, const TArray<struct FST_MasterGoals>& Goals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateQuestsGoalsInformation_Server");

	struct ABP_PlayerCharacter_C_ReplicateQuestsGoalsInformation_Server_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FName QuestID;			//Offset: 4 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		TArray<struct FST_MasterGoals> Goals;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateQuestsGoalsInformation_Server_Params params;
	params.QuestIndex = QuestIndex;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.Goals = Goals;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateAddedQuest_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestHandler	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateAddedQuest_Client(struct FDataTableRowHandle QuestHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateAddedQuest_Client");

	struct ABP_PlayerCharacter_C_ReplicateAddedQuest_Client_Params {
		struct FDataTableRowHandle QuestHandler;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateAddedQuest_Client_Params params;
	params.QuestHandler = QuestHandler;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateAddedQuest_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestHandler	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateAddedQuest_Server(struct FDataTableRowHandle QuestHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateAddedQuest_Server");

	struct ABP_PlayerCharacter_C_ReplicateAddedQuest_Server_Params {
		struct FDataTableRowHandle QuestHandler;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateAddedQuest_Server_Params params;
	params.QuestHandler = QuestHandler;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartPotionEffect_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Effect	Type: TEnumAsByte<E_Effects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartPotionEffect_Client(TEnumAsByte<E_Effects> Effect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartPotionEffect_Client");

	struct ABP_PlayerCharacter_C_StartPotionEffect_Client_Params {
		TEnumAsByte<E_Effects> Effect;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartPotionEffect_Client_Params params;
	params.Effect = Effect;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleOtherPlayersSleepAcceptation_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: WantsToSkip	Type: TEnumAsByte<E_WantsToSkip>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ToggleOtherPlayersSleepAcceptation_Client(TEnumAsByte<E_WantsToSkip> WantsToSkip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleOtherPlayersSleepAcceptation_Client");

	struct ABP_PlayerCharacter_C_ToggleOtherPlayersSleepAcceptation_Client_Params {
		TEnumAsByte<E_WantsToSkip> WantsToSkip;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ToggleOtherPlayersSleepAcceptation_Client_Params params;
	params.WantsToSkip = WantsToSkip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerWaitingForSkipUI_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_Client");

	struct ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_Client_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerWaitingForSkipUI_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerWaitingForSkipUI_Server");

	struct ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_Server_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlayerWaitingForSkipUI_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RequestLayDown_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsBed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: InteractPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentPlayerViewmode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WantsToSkip	Type: TEnumAsByte<E_WantsToSkip>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RequestLayDown_Server(bool IsBed, struct FVector InteractPoint, TEnumAsByte<E_ViewMode> CurrentPlayerViewmode, TEnumAsByte<E_WantsToSkip> WantsToSkip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RequestLayDown_Server");

	struct ABP_PlayerCharacter_C_RequestLayDown_Server_Params {
		bool IsBed;			//Offset: 0 | ElementSize: 1
		struct FVector InteractPoint;			//Offset: 4 | ElementSize: 12
		TEnumAsByte<E_ViewMode> CurrentPlayerViewmode;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_WantsToSkip> WantsToSkip;			//Offset: 17 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_RequestLayDown_Server_Params params;
	params.IsBed = IsBed;
	params.InteractPoint = InteractPoint;
	params.CurrentPlayerViewmode = CurrentPlayerViewmode;
	params.WantsToSkip = WantsToSkip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWantsToSkip_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: WantsToSkip	Type: TEnumAsByte<E_WantsToSkip>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetWantsToSkip_Server(TEnumAsByte<E_WantsToSkip> WantsToSkip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWantsToSkip_Server");

	struct ABP_PlayerCharacter_C_SetWantsToSkip_Server_Params {
		TEnumAsByte<E_WantsToSkip> WantsToSkip;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetWantsToSkip_Server_Params params;
	params.WantsToSkip = WantsToSkip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeHighlightedPlayerResponse_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeHighlightedPlayerResponse_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeHighlightedPlayerResponse_Client");

	struct ABP_PlayerCharacter_C_ChangeHighlightedPlayerResponse_Client_Params {
	};
	ABP_PlayerCharacter_C_ChangeHighlightedPlayerResponse_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateListenDialoguePlayerOptions_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateListenDialoguePlayerOptions_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateListenDialoguePlayerOptions_Client");

	struct ABP_PlayerCharacter_C_UpdateListenDialoguePlayerOptions_Client_Params {
	};
	ABP_PlayerCharacter_C_UpdateListenDialoguePlayerOptions_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateField'sGhost_Clients
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldReference	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TempLocationB	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GhostAndAllowedLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InpectorLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllowedToBuild_InBoxExtent	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ghost_NewScale3D	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YSize	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: XSize	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateField_sGhost_Clients(class ABP_MasterField_C* FieldReference, struct FVector TempLocationB, struct FVector GhostAndAllowedLocation, struct FVector InpectorLocation, struct FVector AllowedToBuild_InBoxExtent, struct FVector Ghost_NewScale3D, int32_t YSize, int32_t XSize) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateField'sGhost_Clients");

	struct ABP_PlayerCharacter_C_UpdateField_sGhost_Clients_Params {
		class ABP_MasterField_C* FieldReference;			//Offset: 0 | ElementSize: 8
		struct FVector TempLocationB;			//Offset: 8 | ElementSize: 12
		struct FVector GhostAndAllowedLocation;			//Offset: 20 | ElementSize: 12
		struct FVector InpectorLocation;			//Offset: 32 | ElementSize: 12
		struct FVector AllowedToBuild_InBoxExtent;			//Offset: 44 | ElementSize: 12
		struct FVector Ghost_NewScale3D;			//Offset: 56 | ElementSize: 12
		int32_t YSize;			//Offset: 68 | ElementSize: 4
		int32_t XSize;			//Offset: 72 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateField_sGhost_Clients_Params params;
	params.FieldReference = FieldReference;
	params.TempLocationB = TempLocationB;
	params.GhostAndAllowedLocation = GhostAndAllowedLocation;
	params.InpectorLocation = InpectorLocation;
	params.AllowedToBuild_InBoxExtent = AllowedToBuild_InBoxExtent;
	params.Ghost_NewScale3D = Ghost_NewScale3D;
	params.YSize = YSize;
	params.XSize = XSize;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateField'sGhost_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateField_sGhost_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateField'sGhost_Server");

	struct ABP_PlayerCharacter_C_UpdateField_sGhost_Server_Params {
	};
	ABP_PlayerCharacter_C_UpdateField_sGhost_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyFieldGhost_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyFieldGhost_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyFieldGhost_Server");

	struct ABP_PlayerCharacter_C_DestroyFieldGhost_Server_Params {
	};
	ABP_PlayerCharacter_C_DestroyFieldGhost_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBagMode_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BagMode	Type: TEnumAsByte<E_BagMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBagMode_Server(TEnumAsByte<E_BagMode> BagMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBagMode_Server");

	struct ABP_PlayerCharacter_C_SetBagMode_Server_Params {
		TEnumAsByte<E_BagMode> BagMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetBagMode_Server_Params params;
	params.BagMode = BagMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayAnimationColoredVignette_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayAnimationColoredVignette_Client(float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayAnimationColoredVignette_Client");

	struct ABP_PlayerCharacter_C_PlayAnimationColoredVignette_Client_Params {
		float Intensity;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_PlayAnimationColoredVignette_Client_Params params;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayHitAnimation_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayHitAnimation_Client(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayHitAnimation_Client");

	struct ABP_PlayerCharacter_C_PlayHitAnimation_Client_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_PlayHitAnimation_Client_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnDamageVoice_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SpawnDamageVoice_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnDamageVoice_Multicast");

	struct ABP_PlayerCharacter_C_SpawnDamageVoice_Multicast_Params {
	};
	ABP_PlayerCharacter_C_SpawnDamageVoice_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlantSlotInteraction_Clients
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlantType	Type: TEnumAsByte<E_FieldPlantType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotIDs	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlantSlotInteraction_Clients(class ABP_MasterField_C* Target, TEnumAsByte<E_FieldPlantType> PlantType, const TArray<int32_t>& SlotIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlantSlotInteraction_Clients");

	struct ABP_PlayerCharacter_C_PlantSlotInteraction_Clients_Params {
		class ABP_MasterField_C* Target;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_FieldPlantType> PlantType;			//Offset: 8 | ElementSize: 1
		TArray<int32_t> SlotIDs;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_PlantSlotInteraction_Clients_Params params;
	params.Target = Target;
	params.PlantType = PlantType;
	params.SlotIDs = SlotIDs;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlantSlotInteraction_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlantType	Type: TEnumAsByte<E_FieldPlantType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotIDs	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlantSlotInteraction_Server(class ABP_MasterField_C* Target, TEnumAsByte<E_FieldPlantType> PlantType, TArray<int32_t>* SlotIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlantSlotInteraction_Server");

	struct ABP_PlayerCharacter_C_PlantSlotInteraction_Server_Params {
		class ABP_MasterField_C* Target;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_FieldPlantType> PlantType;			//Offset: 8 | ElementSize: 1
		TArray<int32_t> SlotIDs;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_PlantSlotInteraction_Server_Params params;
	params.Target = Target;
	params.PlantType = PlantType;

	UObject::ProcessEvent(fn, &params);
	if (SlotIDs != nullptr)
		*SlotIDs = params.SlotIDs;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteractionFinish_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FieldInteractionFinish_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteractionFinish_Server");

	struct ABP_PlayerCharacter_C_FieldInteractionFinish_Server_Params {
	};
	ABP_PlayerCharacter_C_FieldInteractionFinish_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteraction_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkilledFarmerBoost	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FieldInteraction_Server(class ABP_MasterField_C* Target, struct FVector Location, float SkilledFarmerBoost) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FieldInteraction_Server");

	struct ABP_PlayerCharacter_C_FieldInteraction_Server_Params {
		class ABP_MasterField_C* Target;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float SkilledFarmerBoost;			//Offset: 20 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FieldInteraction_Server_Params params;
	params.Target = Target;
	params.Location = Location;
	params.SkilledFarmerBoost = SkilledFarmerBoost;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTimeDataForNewPlayer_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WeatherVariation	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateTimeDataForNewPlayer_Client(struct FST_Time CurrentTime, int32_t WeatherVariation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTimeDataForNewPlayer_Client");

	struct ABP_PlayerCharacter_C_UpdateTimeDataForNewPlayer_Client_Params {
		struct FST_Time CurrentTime;			//Offset: 0 | ElementSize: 24
		int32_t WeatherVariation;			//Offset: 24 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateTimeDataForNewPlayer_Client_Params params;
	params.CurrentTime = CurrentTime;
	params.WeatherVariation = WeatherVariation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDataForNewPlayer_Server
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateDataForNewPlayer_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDataForNewPlayer_Server");

	struct ABP_PlayerCharacter_C_UpdateDataForNewPlayer_Server_Params {
	};
	ABP_PlayerCharacter_C_UpdateDataForNewPlayer_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitFieldServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldReference	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitFieldServer(class ABP_MasterField_C* FieldReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitFieldServer");

	struct ABP_PlayerCharacter_C_InitFieldServer_Params {
		class ABP_MasterField_C* FieldReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_InitFieldServer_Params params;
	params.FieldReference = FieldReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateFieldServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldReference	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateFieldServer(class ABP_MasterField_C* FieldReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateFieldServer");

	struct ABP_PlayerCharacter_C_CreateFieldServer_Params {
		class ABP_MasterField_C* FieldReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateFieldServer_Params params;
	params.FieldReference = FieldReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveListenDialoguesOnDialogueClose_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveListenDialoguesOnDialogueClose_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveListenDialoguesOnDialogueClose_Client");

	struct ABP_PlayerCharacter_C_RemoveListenDialoguesOnDialogueClose_Client_Params {
	};
	ABP_PlayerCharacter_C_RemoveListenDialoguesOnDialogueClose_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveListenDialoguesOnDialogueClose_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveListenDialoguesOnDialogueClose_Server(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveListenDialoguesOnDialogueClose_Server");

	struct ABP_PlayerCharacter_C_RemoveListenDialoguesOnDialogueClose_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_RemoveListenDialoguesOnDialogueClose_Server_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveDialoguePlayerOnListenClose_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RemoveDialoguePlayerOnListenClose_Server(class ABP_NPC_C* NPCReference, class ABP_PlayerCharacter_C* PlayerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveDialoguePlayerOnListenClose_Server");

	struct ABP_PlayerCharacter_C_RemoveDialoguePlayerOnListenClose_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		class ABP_PlayerCharacter_C* PlayerReference;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_RemoveDialoguePlayerOnListenClose_Server_Params params;
	params.NPCReference = NPCReference;
	params.PlayerReference = PlayerReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateListeDialogue_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateListeDialogue_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateListeDialogue_Client");

	struct ABP_PlayerCharacter_C_UpdateListeDialogue_Client_Params {
	};
	ABP_PlayerCharacter_C_UpdateListeDialogue_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnDismountingPawnFinished_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished_Client");

	struct ABP_PlayerCharacter_C_OnDismountingPawnFinished_Client_Params {
	};
	ABP_PlayerCharacter_C_OnDismountingPawnFinished_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PrepareToMount_Client(class AActor* mountOrRider) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount_Client");

	struct ABP_PlayerCharacter_C_PrepareToMount_Client_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_PrepareToMount_Client_Params params;
	params.mountOrRider = mountOrRider;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentlyCrafting_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentlyCrafting	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCurrentlyCrafting_Server(struct FName CurrentlyCrafting) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentlyCrafting_Server");

	struct ABP_PlayerCharacter_C_SetCurrentlyCrafting_Server_Params {
		struct FName CurrentlyCrafting;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetCurrentlyCrafting_Server_Params params;
	params.CurrentlyCrafting = CurrentlyCrafting;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractedActor_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetInteractedActor_Server(class AActor* InteractedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractedActor_Server");

	struct ABP_PlayerCharacter_C_SetInteractedActor_Server_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetInteractedActor_Server_Params params;
	params.InteractedActor = InteractedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCraftingAnimation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopCraftingAnimation_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCraftingAnimation_Server");

	struct ABP_PlayerCharacter_C_StopCraftingAnimation_Server_Params {
	};
	ABP_PlayerCharacter_C_StopCraftingAnimation_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLastSelectedQuickSlotID_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: LastSelectedQuickSlotID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReplicateToClientOnLoad	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsLoadedSlotEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetLastSelectedQuickSlotID_Server(int32_t LastSelectedQuickSlotID, bool ReplicateToClientOnLoad, bool IsLoadedSlotEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLastSelectedQuickSlotID_Server");

	struct ABP_PlayerCharacter_C_SetLastSelectedQuickSlotID_Server_Params {
		int32_t LastSelectedQuickSlotID;			//Offset: 0 | ElementSize: 4
		bool ReplicateToClientOnLoad;			//Offset: 4 | ElementSize: 1
		bool IsLoadedSlotEquipped;			//Offset: 5 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetLastSelectedQuickSlotID_Server_Params params;
	params.LastSelectedQuickSlotID = LastSelectedQuickSlotID;
	params.ReplicateToClientOnLoad = ReplicateToClientOnLoad;
	params.IsLoadedSlotEquipped = IsLoadedSlotEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseHoldableHPForStageInteraction_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DecreaseHoldableHPForStageInteraction_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseHoldableHPForStageInteraction_Server");

	struct ABP_PlayerCharacter_C_DecreaseHoldableHPForStageInteraction_Server_Params {
	};
	ABP_PlayerCharacter_C_DecreaseHoldableHPForStageInteraction_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseToolHPForStageInteraction_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DecreaseToolHPForStageInteraction_Server(struct FName ToolName, int32_t ToolIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseToolHPForStageInteraction_Server");

	struct ABP_PlayerCharacter_C_DecreaseToolHPForStageInteraction_Server_Params {
		struct FName ToolName;			//Offset: 0 | ElementSize: 8
		int32_t ToolIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_DecreaseToolHPForStageInteraction_Server_Params params;
	params.ToolName = ToolName;
	params.ToolIndex = ToolIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseToolConditionAfterStageInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DecreaseToolConditionAfterStageInteraction_Client(TEnumAsByte<E_Tools> InteractToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DecreaseToolConditionAfterStageInteraction_Client");

	struct ABP_PlayerCharacter_C_DecreaseToolConditionAfterStageInteraction_Client_Params {
		TEnumAsByte<E_Tools> InteractToolType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_DecreaseToolConditionAfterStageInteraction_Client_Params params;
	params.InteractToolType = InteractToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestFromNoticeBoard_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NoticeBoardReference	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NoteIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartQuestFromNoticeBoard_Server(class AActor* NoticeBoardReference, int32_t NoteIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestFromNoticeBoard_Server");

	struct ABP_PlayerCharacter_C_StartQuestFromNoticeBoard_Server_Params {
		class AActor* NoticeBoardReference;			//Offset: 0 | ElementSize: 8
		int32_t NoteIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_StartQuestFromNoticeBoard_Server_Params params;
	params.NoticeBoardReference = NoticeBoardReference;
	params.NoteIndex = NoteIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathType	Type: TEnumAsByte<E_DeathType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateDeathScreen_Client(TEnumAsByte<E_DeathType> DeathType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen_Client");

	struct ABP_PlayerCharacter_C_CreateDeathScreen_Client_Params {
		TEnumAsByte<E_DeathType> DeathType;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateDeathScreen_Client_Params params;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RespawnPlayer_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RespawnPlayer_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RespawnPlayer_Client");

	struct ABP_PlayerCharacter_C_RespawnPlayer_Client_Params {
	};
	ABP_PlayerCharacter_C_RespawnPlayer_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RespawnPlayer_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RespawnPlayer_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RespawnPlayer_Server");

	struct ABP_PlayerCharacter_C_RespawnPlayer_Server_Params {
	};
	ABP_PlayerCharacter_C_RespawnPlayer_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItem_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TransferItem_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItem_Client");

	struct ABP_PlayerCharacter_C_TransferItem_Client_Params {
	};
	ABP_PlayerCharacter_C_TransferItem_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItemServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FromComponent	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToComponent	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CoinTransaction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TransferItemServer(class UInventoryComponent_C* FromComponent, int32_t Count, class UInventoryComponent_C* ToComponent, struct FName ItemName, int32_t ArrayID, bool CoinTransaction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TransferItemServer");

	struct ABP_PlayerCharacter_C_TransferItemServer_Params {
		class UInventoryComponent_C* FromComponent;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		class UInventoryComponent_C* ToComponent;			//Offset: 16 | ElementSize: 8
		struct FName ItemName;			//Offset: 24 | ElementSize: 8
		int32_t ArrayID;			//Offset: 32 | ElementSize: 4
		bool CoinTransaction;			//Offset: 36 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TransferItemServer_Params params;
	params.FromComponent = FromComponent;
	params.Count = Count;
	params.ToComponent = ToComponent;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;
	params.CoinTransaction = CoinTransaction;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateNoticeBoardInfo_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NoticeBoard	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateNoticeBoardInfo_Server(class AActor* NoticeBoard) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateNoticeBoardInfo_Server");

	struct ABP_PlayerCharacter_C_ReplicateNoticeBoardInfo_Server_Params {
		class AActor* NoticeBoard;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ReplicateNoticeBoardInfo_Server_Params params;
	params.NoticeBoard = NoticeBoard;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateNoticeBoardInfo_Clients
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NoticeBoard	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestsToGive	Type: TArray<struct FST_QuestInfos>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
// Name: NotesRotations	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NotesTypes	Type: TArray<unsigned char>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReplicateNoticeBoardInfo_Clients(class AActor* NoticeBoard, TArray<struct FST_QuestInfos>* QuestsToGive, TArray<float>* NotesRotations, TArray<unsigned char>* NotesTypes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReplicateNoticeBoardInfo_Clients");

	struct ABP_PlayerCharacter_C_ReplicateNoticeBoardInfo_Clients_Params {
		class AActor* NoticeBoard;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_QuestInfos> QuestsToGive;			//Offset: 8 | ElementSize: 16
		TArray<float> NotesRotations;			//Offset: 24 | ElementSize: 16
		TArray<unsigned char> NotesTypes;			//Offset: 40 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_ReplicateNoticeBoardInfo_Clients_Params params;
	params.NoticeBoard = NoticeBoard;

	UObject::ProcessEvent(fn, &params);
	if (QuestsToGive != nullptr)
		*QuestsToGive = params.QuestsToGive;
	if (NotesRotations != nullptr)
		*NotesRotations = params.NotesRotations;
	if (NotesTypes != nullptr)
		*NotesTypes = params.NotesTypes;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: NewController	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReceivePossessed(class AController* NewController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed");

	struct ABP_PlayerCharacter_C_ReceivePossessed_Params {
		class AController* NewController;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: UpdateBodyMeshes	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsMultiplayer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerData(bool UpdateBodyMeshes, bool IsMultiplayer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData");

	struct ABP_PlayerCharacter_C_UpdatePlayerData_Params {
		bool UpdateBodyMeshes;			//Offset: 0 | ElementSize: 1
		bool IsMultiplayer;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlayerData_Params params;
	params.UpdateBodyMeshes = UpdateBodyMeshes;
	params.IsMultiplayer = IsMultiplayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingDistance_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateBuildingDistance_Server(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingDistance_Server");

	struct ABP_PlayerCharacter_C_UpdateBuildingDistance_Server_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateBuildingDistance_Server_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostControlRotation_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsReleasedKey	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGhostControlRotation_Server(bool IsReleasedKey, bool IsLeft) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhostControlRotation_Server");

	struct ABP_PlayerCharacter_C_UpdateGhostControlRotation_Server_Params {
		bool IsReleasedKey;			//Offset: 0 | ElementSize: 1
		bool IsLeft;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateGhostControlRotation_Server_Params params;
	params.IsReleasedKey = IsReleasedKey;
	params.IsLeft = IsLeft;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFurnitureInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FurnitureYawRotation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnFurnitureInteraction_Client(bool IsStart, float FurnitureYawRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFurnitureInteraction_Client");

	struct ABP_PlayerCharacter_C_OnFurnitureInteraction_Client_Params {
		bool IsStart;			//Offset: 0 | ElementSize: 1
		float FurnitureYawRotation;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_OnFurnitureInteraction_Client_Params params;
	params.IsStart = IsStart;
	params.FurnitureYawRotation = FurnitureYawRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasePlayerInputs_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleasePlayerInputs_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasePlayerInputs_Client");

	struct ABP_PlayerCharacter_C_ReleasePlayerInputs_Client_Params {
	};
	ABP_PlayerCharacter_C_ReleasePlayerInputs_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFurnitureDecorationVariationServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Flowerpot	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OverwriteVariant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NewVariant	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateFurnitureDecorationVariationServer(class ABP_MasterFurniture_C* Flowerpot, bool OverwriteVariant, int32_t NewVariant) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFurnitureDecorationVariationServer");

	struct ABP_PlayerCharacter_C_UpdateFurnitureDecorationVariationServer_Params {
		class ABP_MasterFurniture_C* Flowerpot;			//Offset: 0 | ElementSize: 8
		bool OverwriteVariant;			//Offset: 8 | ElementSize: 1
		int32_t NewVariant;			//Offset: 12 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateFurnitureDecorationVariationServer_Params params;
	params.Flowerpot = Flowerpot;
	params.OverwriteVariant = OverwriteVariant;
	params.NewVariant = NewVariant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetUpServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetUpServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetUpServer");

	struct ABP_PlayerCharacter_C_GetUpServer_Params {
	};
	ABP_PlayerCharacter_C_GetUpServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCraftingAnimation_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InPlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SectionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bStopAllMontages	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayCraftingAnimation_Server(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, float InPlayRate, struct FName SectionName, bool bStopAllMontages) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCraftingAnimation_Server");

	struct ABP_PlayerCharacter_C_PlayCraftingAnimation_Server_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
		float InPlayRate;			//Offset: 8 | ElementSize: 4
		struct FName SectionName;			//Offset: 12 | ElementSize: 8
		bool bStopAllMontages;			//Offset: 20 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlayCraftingAnimation_Server_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;
	params.InPlayRate = InPlayRate;
	params.SectionName = SectionName;
	params.bStopAllMontages = bStopAllMontages;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartWorkbenchInteraction_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractForwardVector	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookAtBehavior	Type: TEnumAsByte<E_LookAtOptions>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnStartWorkbenchInteraction_Client(struct FVector WorkbenchLocation, struct FVector InteractLocation, struct FVector InteractForwardVector, struct FRotator LookAtRotation, TEnumAsByte<E_LookAtOptions> LookAtBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartWorkbenchInteraction_Client");

	struct ABP_PlayerCharacter_C_OnStartWorkbenchInteraction_Client_Params {
		struct FVector WorkbenchLocation;			//Offset: 0 | ElementSize: 12
		struct FVector InteractLocation;			//Offset: 12 | ElementSize: 12
		struct FVector InteractForwardVector;			//Offset: 24 | ElementSize: 12
		struct FRotator LookAtRotation;			//Offset: 36 | ElementSize: 12
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 48 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_OnStartWorkbenchInteraction_Client_Params params;
	params.WorkbenchLocation = WorkbenchLocation;
	params.InteractLocation = InteractLocation;
	params.InteractForwardVector = InteractForwardVector;
	params.LookAtRotation = LookAtRotation;
	params.LookAtBehavior = LookAtBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraCutThisFrame_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CameraCutThisFrame_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraCutThisFrame_Client");

	struct ABP_PlayerCharacter_C_CameraCutThisFrame_Client_Params {
	};
	ABP_PlayerCharacter_C_CameraCutThisFrame_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartWorkbenchCameraChange_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartWorkbenchCameraChange_Client(bool ChangeCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartWorkbenchCameraChange_Client");

	struct ABP_PlayerCharacter_C_StartWorkbenchCameraChange_Client_Params {
		bool ChangeCamera;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_StartWorkbenchCameraChange_Client_Params params;
	params.ChangeCamera = ChangeCamera;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingPlaceabilityMaterialColorServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Placeable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateBuildingPlaceabilityMaterialColorServer(class ABP_MasterBuilding_C* Building, bool Placeable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingPlaceabilityMaterialColorServer");

	struct ABP_PlayerCharacter_C_UpdateBuildingPlaceabilityMaterialColorServer_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		bool Placeable;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateBuildingPlaceabilityMaterialColorServer_Params params;
	params.Building = Building;
	params.Placeable = Placeable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeBuildingLevelServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetBuilding	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GhostBuilding	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeBuildingLevelServer(class ABP_MasterBuilding_C* TargetBuilding, class ABP_MasterBuilding_C* GhostBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeBuildingLevelServer");

	struct ABP_PlayerCharacter_C_ChangeBuildingLevelServer_Params {
		class ABP_MasterBuilding_C* TargetBuilding;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* GhostBuilding;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ChangeBuildingLevelServer_Params params;
	params.TargetBuilding = TargetBuilding;
	params.GhostBuilding = GhostBuilding;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleaseGrabbedItem_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem_BPI");

	struct ABP_PlayerCharacter_C_ReleaseGrabbedItem_BPI_Params {
	};
	ABP_PlayerCharacter_C_ReleaseGrabbedItem_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItemRotateMode_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: RotateLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RotateRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGrabbedItemRotateMode_Server(bool RotateLeft, bool RotateRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItemRotateMode_Server");

	struct ABP_PlayerCharacter_C_SetGrabbedItemRotateMode_Server_Params {
		bool RotateLeft;			//Offset: 0 | ElementSize: 1
		bool RotateRight;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetGrabbedItemRotateMode_Server_Params params;
	params.RotateLeft = RotateLeft;
	params.RotateRight = RotateRight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedActor_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: GrabbedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGrabbedActor_Client(class AActor* GrabbedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedActor_Client");

	struct ABP_PlayerCharacter_C_SetGrabbedActor_Client_Params {
		class AActor* GrabbedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetGrabbedActor_Client_Params params;
	params.GrabbedActor = GrabbedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedActor_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: GrabbedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGrabbedActor_Server(class AActor* GrabbedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedActor_Server");

	struct ABP_PlayerCharacter_C_SetGrabbedActor_Server_Params {
		class AActor* GrabbedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetGrabbedActor_Server_Params params;
	params.GrabbedActor = GrabbedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateGrabbedItemPitch_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RotateGrabbedItemPitch_Server(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateGrabbedItemPitch_Server");

	struct ABP_PlayerCharacter_C_RotateGrabbedItemPitch_Server_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_RotateGrabbedItemPitch_Server_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateGrabbedItemYaw_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RotateGrabbedItemYaw_Server(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateGrabbedItemYaw_Server");

	struct ABP_PlayerCharacter_C_RotateGrabbedItemYaw_Server_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_RotateGrabbedItemYaw_Server_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToGrab	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GrabItem_BPI(class AActor* ActorToGrab) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem_BPI");

	struct ABP_PlayerCharacter_C_GrabItem_BPI_Params {
		class AActor* ActorToGrab;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GrabItem_BPI_Params params;
	params.ActorToGrab = ActorToGrab;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleaseGrabbedItem_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem_Server");

	struct ABP_PlayerCharacter_C_ReleaseGrabbedItem_Server_Params {
	};
	ABP_PlayerCharacter_C_ReleaseGrabbedItem_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemToGrab	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GrabItem_Server(class AActor* ItemToGrab) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem_Server");

	struct ABP_PlayerCharacter_C_GrabItem_Server_Params {
		class AActor* ItemToGrab;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GrabItem_Server_Params params;
	params.ItemToGrab = ItemToGrab;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItem_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: GrabbedItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGrabbedItem_Client(bool GrabbedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItem_Client");

	struct ABP_PlayerCharacter_C_SetGrabbedItem_Client_Params {
		bool GrabbedItem;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetGrabbedItem_Client_Params params;
	params.GrabbedItem = GrabbedItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItem_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: GrabbedItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGrabbedItem_Server(bool GrabbedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGrabbedItem_Server");

	struct ABP_PlayerCharacter_C_SetGrabbedItem_Server_Params {
		bool GrabbedItem;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetGrabbedItem_Server_Params params;
	params.GrabbedItem = GrabbedItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteractComponent_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ObjectInteractComponent_Client(class UObject* Target, class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteractComponent_Client");

	struct ABP_PlayerCharacter_C_ObjectInteractComponent_Client_Params {
		class UObject* Target;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		int32_t HitItem;			//Offset: 28 | ElementSize: 4
		bool Timer;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ObjectInteractComponent_Client_Params params;
	params.Target = Target;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteractActor_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ObjectInteractActor_Client(class UObject* Target, class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteractActor_Client");

	struct ABP_PlayerCharacter_C_ObjectInteractActor_Client_Params {
		class UObject* Target;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		int32_t HitItem;			//Offset: 28 | ElementSize: 4
		bool Timer;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ObjectInteractActor_Client_Params params;
	params.Target = Target;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDialogue_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActualDialogue	Type: TAssetPtr<class UDialogue>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash
// Name: NPC	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Listen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateDialogue_Client(TAssetPtr<class UDialogue> ActualDialogue, class AActor* NPC, bool Listen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDialogue_Client");

	struct ABP_PlayerCharacter_C_CreateDialogue_Client_Params {
		TAssetPtr<class UDialogue> ActualDialogue;			//Offset: 0 | ElementSize: 40
		class AActor* NPC;			//Offset: 40 | ElementSize: 8
		bool Listen;			//Offset: 48 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateDialogue_Client_Params params;
	params.ActualDialogue = ActualDialogue;
	params.NPC = NPC;
	params.Listen = Listen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateGateGhostMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gate	Type: class ABP_MasterGate_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateGateGhostMulticast(class ABP_MasterGate_C* Gate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateGateGhostMulticast");

	struct ABP_PlayerCharacter_C_CreateGateGhostMulticast_Params {
		class ABP_MasterGate_C* Gate;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateGateGhostMulticast_Params params;
	params.Gate = Gate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateGateGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateGateGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateGateGhostServer");

	struct ABP_PlayerCharacter_C_CreateGateGhostServer_Params {
	};
	ABP_PlayerCharacter_C_CreateGateGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGateGhostServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateGateGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGateGhostServer");

	struct ABP_PlayerCharacter_C_UpdateGateGhostServer_Params {
	};
	ABP_PlayerCharacter_C_UpdateGateGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyGateGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyGateGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyGateGhostServer");

	struct ABP_PlayerCharacter_C_DestroyGateGhostServer_Params {
	};
	ABP_PlayerCharacter_C_DestroyGateGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyFurnitureGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyFurnitureGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyFurnitureGhostServer");

	struct ABP_PlayerCharacter_C_DestroyFurnitureGhostServer_Params {
	};
	ABP_PlayerCharacter_C_DestroyFurnitureGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FinishFurnitureServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishFurnitureServer");

	struct ABP_PlayerCharacter_C_FinishFurnitureServer_Params {
	};
	ABP_PlayerCharacter_C_FinishFurnitureServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFurnitureServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateFurnitureServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateFurnitureServer");

	struct ABP_PlayerCharacter_C_UpdateFurnitureServer_Params {
	};
	ABP_PlayerCharacter_C_UpdateFurnitureServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteract_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CurrentPlayerViewmode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ObjectInteract_Server(class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FVector HitLocation, int32_t HitItem, bool Timer, TEnumAsByte<E_ViewMode> CurrentPlayerViewmode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ObjectInteract_Server");

	struct ABP_PlayerCharacter_C_ObjectInteract_Server_Params {
		class AActor* HitActor;			//Offset: 0 | ElementSize: 8
		class UPrimitiveComponent* HitComponent;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		int32_t HitItem;			//Offset: 28 | ElementSize: 4
		bool Timer;			//Offset: 32 | ElementSize: 1
		TEnumAsByte<E_ViewMode> CurrentPlayerViewmode;			//Offset: 33 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ObjectInteract_Server_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;
	params.CurrentPlayerViewmode = CurrentPlayerViewmode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBuildingMode_Server(TEnumAsByte<E_BuildingModifications> BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode_Server");

	struct ABP_PlayerCharacter_C_SetBuildingMode_Server_Params {
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetBuildingMode_Server_Params params;
	params.BuildingMode = BuildingMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyBuildingGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyBuildingGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyBuildingGhostServer");

	struct ABP_PlayerCharacter_C_DestroyBuildingGhostServer_Params {
	};
	ABP_PlayerCharacter_C_DestroyBuildingGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingPlaceabilityMaterialColorMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Placeable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateBuildingPlaceabilityMaterialColorMulticast(class ABP_MasterBuilding_C* Building, bool Placeable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingPlaceabilityMaterialColorMulticast");

	struct ABP_PlayerCharacter_C_UpdateBuildingPlaceabilityMaterialColorMulticast_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		bool Placeable;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateBuildingPlaceabilityMaterialColorMulticast_Params params;
	params.Building = Building;
	params.Placeable = Placeable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetModuleDetectionGhostMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Module	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetModuleDetectionGhostMulticast(class ABP_MasterBuildModule_C* Module, class ABP_MasterBuilding_C* Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetModuleDetectionGhostMulticast");

	struct ABP_PlayerCharacter_C_SetModuleDetectionGhostMulticast_Params {
		class ABP_MasterBuildModule_C* Module;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* Building;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetModuleDetectionGhostMulticast_Params params;
	params.Module = Module;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitializeBuilding'sModuleReplicationServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Module	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitializeBuilding_sModuleReplicationServer(class ABP_MasterBuildModule_C* Module) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitializeBuilding'sModuleReplicationServer");

	struct ABP_PlayerCharacter_C_InitializeBuilding_sModuleReplicationServer_Params {
		class ABP_MasterBuildModule_C* Module;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_InitializeBuilding_sModuleReplicationServer_Params params;
	params.Module = Module;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingGhostServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateBuildingGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuildingGhostServer");

	struct ABP_PlayerCharacter_C_UpdateBuildingGhostServer_Params {
	};
	ABP_PlayerCharacter_C_UpdateBuildingGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateSplineGhostClient
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spline	Type: class ABP_MasterSplineStructure_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateSplineGhostClient(class ABP_MasterSplineStructure_C* Spline) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateSplineGhostClient");

	struct ABP_PlayerCharacter_C_UpdateSplineGhostClient_Params {
		class ABP_MasterSplineStructure_C* Spline;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_UpdateSplineGhostClient_Params params;
	params.Spline = Spline;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateSplineGhostServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateSplineGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateSplineGhostServer");

	struct ABP_PlayerCharacter_C_UpdateSplineGhostServer_Params {
	};
	ABP_PlayerCharacter_C_UpdateSplineGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideBuildingUIClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HideBuildingUIClient() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideBuildingUIClient");

	struct ABP_PlayerCharacter_C_HideBuildingUIClient_Params {
	};
	ABP_PlayerCharacter_C_HideBuildingUIClient_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSplineFirstPointServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetSplineFirstPointServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSplineFirstPointServer");

	struct ABP_PlayerCharacter_C_SetSplineFirstPointServer_Params {
	};
	ABP_PlayerCharacter_C_SetSplineFirstPointServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroySplineGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroySplineGhostServer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroySplineGhostServer");

	struct ABP_PlayerCharacter_C_DestroySplineGhostServer_Params {
	};
	ABP_PlayerCharacter_C_DestroySplineGhostServer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialSplineGhostLogicMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: GhostSpline	Type: class ABP_MasterSplineStructure_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteInitialSplineGhostLogicMulticast(class ABP_MasterSplineStructure_C* GhostSpline, bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialSplineGhostLogicMulticast");

	struct ABP_PlayerCharacter_C_ExecuteInitialSplineGhostLogicMulticast_Params {
		class ABP_MasterSplineStructure_C* GhostSpline;			//Offset: 0 | ElementSize: 8
		bool load;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ExecuteInitialSplineGhostLogicMulticast_Params params;
	params.GhostSpline = GhostSpline;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialSplineGhostVisualsMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: GhostSpline	Type: class ABP_MasterSplineStructure_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteInitialSplineGhostVisualsMulticast(class ABP_MasterSplineStructure_C* GhostSpline, bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialSplineGhostVisualsMulticast");

	struct ABP_PlayerCharacter_C_ExecuteInitialSplineGhostVisualsMulticast_Params {
		class ABP_MasterSplineStructure_C* GhostSpline;			//Offset: 0 | ElementSize: 8
		bool load;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ExecuteInitialSplineGhostVisualsMulticast_Params params;
	params.GhostSpline = GhostSpline;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateSplineGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: GhostSpline	Type: class ABP_MasterSplineStructure_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateSplineGhostServer(class ABP_MasterSplineStructure_C* GhostSpline) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateSplineGhostServer");

	struct ABP_PlayerCharacter_C_CreateSplineGhostServer_Params {
		class ABP_MasterSplineStructure_C* GhostSpline;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateSplineGhostServer_Params params;
	params.GhostSpline = GhostSpline;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialGhostLogicMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: GhostBuilding	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteInitialGhostLogicMulticast(bool load, class ABP_MasterBuilding_C* GhostBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialGhostLogicMulticast");

	struct ABP_PlayerCharacter_C_ExecuteInitialGhostLogicMulticast_Params {
		bool load;			//Offset: 0 | ElementSize: 1
		class ABP_MasterBuilding_C* GhostBuilding;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ExecuteInitialGhostLogicMulticast_Params params;
	params.load = load;
	params.GhostBuilding = GhostBuilding;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialGhostVisualsMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: GhostBuilding	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteInitialGhostVisualsMulticast(class ABP_MasterBuilding_C* GhostBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteInitialGhostVisualsMulticast");

	struct ABP_PlayerCharacter_C_ExecuteInitialGhostVisualsMulticast_Params {
		class ABP_MasterBuilding_C* GhostBuilding;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ExecuteInitialGhostVisualsMulticast_Params params;
	params.GhostBuilding = GhostBuilding;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateBuildingGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: GhostBuilding	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateBuildingGhostServer(class ABP_MasterBuilding_C* GhostBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateBuildingGhostServer");

	struct ABP_PlayerCharacter_C_CreateBuildingGhostServer_Params {
		class ABP_MasterBuilding_C* GhostBuilding;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_CreateBuildingGhostServer_Params params;
	params.GhostBuilding = GhostBuilding;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBuildingMode_Client(TEnumAsByte<E_BuildingModifications> BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode_Client");

	struct ABP_PlayerCharacter_C_SetBuildingMode_Client_Params {
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetBuildingMode_Client_Params params;
	params.BuildingMode = BuildingMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayerServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: DestLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnInAir_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TeleportPlayerServer(struct FVector DestLocation, class ABP_PlayerCharacter_C* PlayerReference, bool SpawnInAir_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayerServer");

	struct ABP_PlayerCharacter_C_TeleportPlayerServer_Params {
		struct FVector DestLocation;			//Offset: 0 | ElementSize: 12
		class ABP_PlayerCharacter_C* PlayerReference;			//Offset: 16 | ElementSize: 8
		bool SpawnInAir_;			//Offset: 24 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TeleportPlayerServer_Params params;
	params.DestLocation = DestLocation;
	params.PlayerReference = PlayerReference;
	params.SpawnInAir_ = SpawnInAir_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: UpdateBodyMeshes	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerData_Server(bool UpdateBodyMeshes, struct FString PlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Server");

	struct ABP_PlayerCharacter_C_UpdatePlayerData_Server_Params {
		bool UpdateBodyMeshes;			//Offset: 0 | ElementSize: 1
		struct FString PlayerName;			//Offset: 8 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_UpdatePlayerData_Server_Params params;
	params.UpdateBodyMeshes = UpdateBodyMeshes;
	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBeginPlay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBeginPlay");

	struct ABP_PlayerCharacter_C_OnBeginPlay_Params {
	};
	ABP_PlayerCharacter_C_OnBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: UpdateBodyMeshes	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerData_Client(bool UpdateBodyMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Client");

	struct ABP_PlayerCharacter_C_UpdatePlayerData_Client_Params {
		bool UpdateBodyMeshes;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlayerData_Client_Params params;
	params.UpdateBodyMeshes = UpdateBodyMeshes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: UpdateBodyMeshes	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerData_Multicast(bool UpdateBodyMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerData_Multicast");

	struct ABP_PlayerCharacter_C_UpdatePlayerData_Multicast_Params {
		bool UpdateBodyMeshes;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlayerData_Multicast_Params params;
	params.UpdateBodyMeshes = UpdateBodyMeshes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailedEOSLogging_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FailedEOSLogging_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailedEOSLogging_BPI");

	struct ABP_PlayerCharacter_C_FailedEOSLogging_BPI_Params {
	};
	ABP_PlayerCharacter_C_FailedEOSLogging_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowEOSLoggingWindow_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ShowEOSLoggingWindow_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowEOSLoggingWindow_BPI");

	struct ABP_PlayerCharacter_C_ShowEOSLoggingWindow_BPI_Params {
	};
	ABP_PlayerCharacter_C_ShowEOSLoggingWindow_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyEOSLoggingWindow_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyEOSLoggingWindow_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyEOSLoggingWindow_BPI");

	struct ABP_PlayerCharacter_C_DestroyEOSLoggingWindow_BPI_Params {
	};
	ABP_PlayerCharacter_C_DestroyEOSLoggingWindow_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestNotificationAllPlayers_BPI");

	struct ABP_PlayerCharacter_C_StartQuestNotificationAllPlayers_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_StartQuestNotificationAllPlayers_BPI_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StartQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartQuestNotification_BPI");

	struct ABP_PlayerCharacter_C_StartQuestNotification_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_StartQuestNotification_BPI_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorIntensity__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InspectorIntensity__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorIntensity__UpdateFunc");

	struct ABP_PlayerCharacter_C_InspectorIntensity__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_InspectorIntensity__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorIntensity__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InspectorIntensity__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorIntensity__FinishedFunc");

	struct ABP_PlayerCharacter_C_InspectorIntensity__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_InspectorIntensity__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.NightVisionIntensity__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::NightVisionIntensity__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.NightVisionIntensity__UpdateFunc");

	struct ABP_PlayerCharacter_C_NightVisionIntensity__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_NightVisionIntensity__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.NightVisionIntensity__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::NightVisionIntensity__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.NightVisionIntensity__FinishedFunc");

	struct ABP_PlayerCharacter_C_NightVisionIntensity__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_NightVisionIntensity__FinishedFunc_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StaggerPitchTimeline__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StaggerPitchTimeline__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StaggerPitchTimeline__UpdateFunc");

	struct ABP_PlayerCharacter_C_StaggerPitchTimeline__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_StaggerPitchTimeline__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StaggerPitchTimeline__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StaggerPitchTimeline__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StaggerPitchTimeline__FinishedFunc");

	struct ABP_PlayerCharacter_C_StaggerPitchTimeline__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_StaggerPitchTimeline__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_IKAlpha__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Timeline_IKAlpha__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_IKAlpha__UpdateFunc");

	struct ABP_PlayerCharacter_C_Timeline_IKAlpha__UpdateFunc_Params {
	};
	ABP_PlayerCharacter_C_Timeline_IKAlpha__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_IKAlpha__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Timeline_IKAlpha__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_IKAlpha__FinishedFunc");

	struct ABP_PlayerCharacter_C_Timeline_IKAlpha__FinishedFunc_Params {
	};
	ABP_PlayerCharacter_C_Timeline_IKAlpha__FinishedFunc_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRangeServerCheck
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Range	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InteractRangeServerCheck(float Range, TEnumAsByte<E_ViewMode> ViewMode, struct FVector* StartVector, struct FVector* EndVector) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRangeServerCheck");

	struct ABP_PlayerCharacter_C_InteractRangeServerCheck_Params {
		float Range;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 4 | ElementSize: 1
		struct FVector StartVector;			//Offset: 8 | ElementSize: 12
		struct FVector EndVector;			//Offset: 20 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_InteractRangeServerCheck_Params params;
	params.Range = Range;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
	if (StartVector != nullptr)
		*StartVector = params.StartVector;
	if (EndVector != nullptr)
		*EndVector = params.EndVector;
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
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerLook
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InitCustomizedCharacter	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlayerLook(bool InitCustomizedCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerLook");

	struct ABP_PlayerCharacter_C_UpdatePlayerLook_Params {
		bool InitCustomizedCharacter;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdatePlayerLook_Params params;
	params.InitCustomizedCharacter = InitCustomizedCharacter;

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
// Name: hits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TPInteractionTrace(TArray<struct FHitResult>* hits) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TPInteractionTrace");

	struct ABP_PlayerCharacter_C_TPInteractionTrace_Params {
		TArray<struct FHitResult> hits;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_TPInteractionTrace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (hits != nullptr)
		*hits = params.hits;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToEquipTorch
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TorchName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TorchEquipped	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToEquipTorch(const struct FName& TorchName, bool* TorchEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToEquipTorch");

	struct ABP_PlayerCharacter_C_TryToEquipTorch_Params {
		struct FName TorchName;			//Offset: 0 | ElementSize: 8
		bool TorchEquipped;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TryToEquipTorch_Params params;
	params.TorchName = TorchName;

	UObject::ProcessEvent(fn, &params);
	if (TorchEquipped != nullptr)
		*TorchEquipped = params.TorchEquipped;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsOffhandEquipBlocked
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::IsOffhandEquipBlocked() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsOffhandEquipBlocked");

	struct ABP_PlayerCharacter_C_IsOffhandEquipBlocked_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsOffhandEquipBlocked_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanMoveMountToPlayer
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
// Name: TargetLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanMoveMountToPlayer");

	struct ABP_PlayerCharacter_C_CanMoveMountToPlayer_Params {
		struct FVector TargetLocation;			//Offset: 4 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 16 | ElementSize: 12
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CanMoveMountToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBuildingMode(TEnumAsByte<E_BuildingModifications> BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBuildingMode");

	struct ABP_PlayerCharacter_C_SetBuildingMode_Params {
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetBuildingMode_Params params;
	params.BuildingMode = BuildingMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorDetection
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InspectorDetection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InspectorDetection");

	struct ABP_PlayerCharacter_C_InspectorDetection_Params {
	};
	ABP_PlayerCharacter_C_InspectorDetection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerData
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerData	Type: struct FST_SAVE_Player	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Version	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LoadPlayerData(struct FST_SAVE_Player PlayerData, struct FString Version) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerData");

	struct ABP_PlayerCharacter_C_LoadPlayerData_Params {
		struct FST_SAVE_Player PlayerData;			//Offset: 0 | ElementSize: 888
		struct FString Version;			//Offset: 888 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_LoadPlayerData_Params params;
	params.PlayerData = PlayerData;
	params.Version = Version;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerDataFinishing
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerData	Type: struct FST_SAVE_Player	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Version	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Achievements	Type: struct FST_SAVE_Achievements	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::LoadPlayerDataFinishing(struct FST_SAVE_Player PlayerData, struct FString Version, struct FST_SAVE_Achievements Achievements) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadPlayerDataFinishing");

	struct ABP_PlayerCharacter_C_LoadPlayerDataFinishing_Params {
		struct FST_SAVE_Player PlayerData;			//Offset: 0 | ElementSize: 888
		struct FString Version;			//Offset: 888 | ElementSize: 16
		struct FST_SAVE_Achievements Achievements;			//Offset: 904 | ElementSize: 192
	};
	ABP_PlayerCharacter_C_LoadPlayerDataFinishing_Params params;
	params.PlayerData = PlayerData;
	params.Version = Version;
	params.Achievements = Achievements;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuilding'sGhost
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateBuilding_sGhost() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBuilding'sGhost");

	struct ABP_PlayerCharacter_C_UpdateBuilding_sGhost_Params {
	};
	ABP_PlayerCharacter_C_UpdateBuilding_sGhost_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDialogueWithNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActualDialogue	Type: TAssetPtr<class UDialogue>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash
// Name: NPC	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Listen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CreateDialogueWithNPC(TAssetPtr<class UDialogue> ActualDialogue, class AActor* NPC, bool Listen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDialogueWithNPC");

	struct ABP_PlayerCharacter_C_CreateDialogueWithNPC_Params {
		TAssetPtr<class UDialogue> ActualDialogue;			//Offset: 0 | ElementSize: 40
		class AActor* NPC;			//Offset: 40 | ElementSize: 8
		bool Listen;			//Offset: 48 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CreateDialogueWithNPC_Params params;
	params.ActualDialogue = ActualDialogue;
	params.NPC = NPC;
	params.Listen = Listen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemToGrab	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GrabItem(class AActor* ItemToGrab) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GrabItem");

	struct ABP_PlayerCharacter_C_GrabItem_Params {
		class AActor* ItemToGrab;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GrabItem_Params params;
	params.ItemToGrab = ItemToGrab;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ReleaseGrabbedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleaseGrabbedItem");

	struct ABP_PlayerCharacter_C_ReleaseGrabbedItem_Params {
	};
	ABP_PlayerCharacter_C_ReleaseGrabbedItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateRotationOnWorkbenchInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractForwardVector	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookAtBehavior	Type: TEnumAsByte<E_LookAtOptions>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateRotationOnWorkbenchInteraction(struct FVector WorkbenchLocation, struct FVector InteractLocation, struct FVector InteractForwardVector, struct FRotator LookAtRotation, TEnumAsByte<E_LookAtOptions> LookAtBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateRotationOnWorkbenchInteraction");

	struct ABP_PlayerCharacter_C_UpdateRotationOnWorkbenchInteraction_Params {
		struct FVector WorkbenchLocation;			//Offset: 0 | ElementSize: 12
		struct FVector InteractLocation;			//Offset: 12 | ElementSize: 12
		struct FVector InteractForwardVector;			//Offset: 24 | ElementSize: 12
		struct FRotator LookAtRotation;			//Offset: 36 | ElementSize: 12
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 48 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateRotationOnWorkbenchInteraction_Params params;
	params.WorkbenchLocation = WorkbenchLocation;
	params.InteractLocation = InteractLocation;
	params.InteractForwardVector = InteractForwardVector;
	params.LookAtRotation = LookAtRotation;
	params.LookAtBehavior = LookAtBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateRotationOnFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FurnitureYawRotation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateRotationOnFurnitureInteraction(bool IsStart, float FurnitureYawRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateRotationOnFurnitureInteraction");

	struct ABP_PlayerCharacter_C_UpdateRotationOnFurnitureInteraction_Params {
		bool IsStart;			//Offset: 0 | ElementSize: 1
		float FurnitureYawRotation;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_UpdateRotationOnFurnitureInteraction_Params params;
	params.IsStart = IsStart;
	params.FurnitureYawRotation = FurnitureYawRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeSex
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeSex(TEnumAsByte<E_Sex> NewSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeSex");

	struct ABP_PlayerCharacter_C_ChangeSex_Params {
		TEnumAsByte<E_Sex> NewSex;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ChangeSex_Params params;
	params.NewSex = NewSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFirstPersonCameraOffset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RelativeLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetFirstPersonCameraOffset(struct FVector RelativeLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFirstPersonCameraOffset");

	struct ABP_PlayerCharacter_C_SetFirstPersonCameraOffset_Params {
		struct FVector RelativeLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_SetFirstPersonCameraOffset_Params params;
	params.RelativeLocation = RelativeLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLastSelectedQuickSlotID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetLastSelectedQuickSlotID(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLastSelectedQuickSlotID");

	struct ABP_PlayerCharacter_C_SetLastSelectedQuickSlotID_Params {
		int32_t NewValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetLastSelectedQuickSlotID_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentlyCrafting
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
struct FName ABP_PlayerCharacter_C::GetCurrentlyCrafting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentlyCrafting");

	struct ABP_PlayerCharacter_C_GetCurrentlyCrafting_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetCurrentlyCrafting_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentlyCrafting
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCurrentlyCrafting(struct FName NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCurrentlyCrafting");

	struct ABP_PlayerCharacter_C_SetCurrentlyCrafting_Params {
		struct FName NewValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetCurrentlyCrafting_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTextureColorForHeadMaterial
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TextureParameterName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetTextureColorForHeadMaterial(struct FName TextureParameterName, struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTextureColorForHeadMaterial");

	struct ABP_PlayerCharacter_C_SetTextureColorForHeadMaterial_Params {
		struct FName TextureParameterName;			//Offset: 0 | ElementSize: 8
		struct FLinearColor Color;			//Offset: 8 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetTextureColorForHeadMaterial_Params params;
	params.TextureParameterName = TextureParameterName;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTextureForHeadMaterial
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TextureParameterName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TextureSoftRef	Type: TAssetPtr<class UTexture>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetTextureForHeadMaterial(struct FName TextureParameterName, TAssetPtr<class UTexture>* TextureSoftRef) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTextureForHeadMaterial");

	struct ABP_PlayerCharacter_C_SetTextureForHeadMaterial_Params {
		struct FName TextureParameterName;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UTexture> TextureSoftRef;			//Offset: 8 | ElementSize: 40
	};
	ABP_PlayerCharacter_C_SetTextureForHeadMaterial_Params params;
	params.TextureParameterName = TextureParameterName;

	UObject::ProcessEvent(fn, &params);
	if (TextureSoftRef != nullptr)
		*TextureSoftRef = params.TextureSoftRef;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVectorParameterForMaterials
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ParameterName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Meshes	Type: TArray<class UMeshComponent*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetVectorParameterForMaterials(struct FName ParameterName, struct FLinearColor Value, TArray<class UMeshComponent*>* Meshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVectorParameterForMaterials");

	struct ABP_PlayerCharacter_C_SetVectorParameterForMaterials_Params {
		struct FName ParameterName;			//Offset: 0 | ElementSize: 8
		struct FLinearColor Value;			//Offset: 8 | ElementSize: 16
		TArray<class UMeshComponent*> Meshes;			//Offset: 24 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetVectorParameterForMaterials_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetScalarParameterForMaterials
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ParameterName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Meshes	Type: TArray<class UMeshComponent*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetScalarParameterForMaterials(struct FName ParameterName, float Value, TArray<class UMeshComponent*>* Meshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetScalarParameterForMaterials");

	struct ABP_PlayerCharacter_C_SetScalarParameterForMaterials_Params {
		struct FName ParameterName;			//Offset: 0 | ElementSize: 8
		float Value;			//Offset: 8 | ElementSize: 4
		TArray<class UMeshComponent*> Meshes;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetScalarParameterForMaterials_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHeadMesh
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetHeadMesh(int32_t HeadID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHeadMesh");

	struct ABP_PlayerCharacter_C_SetHeadMesh_Params {
		int32_t HeadID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetHeadMesh_Params params;
	params.HeadID = HeadID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHairMesh
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HairID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsHatEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetHairMesh(int32_t HairID, bool IsHatEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHairMesh");

	struct ABP_PlayerCharacter_C_SetHairMesh_Params {
		int32_t HairID;			//Offset: 0 | ElementSize: 4
		bool IsHatEquipped;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetHairMesh_Params params;
	params.HairID = HairID;
	params.IsHatEquipped = IsHatEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHairColorPlayer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetHairColorPlayer(int32_t ColorID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHairColorPlayer");

	struct ABP_PlayerCharacter_C_SetHairColorPlayer_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetHairColorPlayer_Params params;
	params.ColorID = ColorID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSkinType
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkinID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetSkinType(int32_t SkinID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSkinType");

	struct ABP_PlayerCharacter_C_SetSkinType_Params {
		int32_t SkinID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetSkinType_Params params;
	params.SkinID = SkinID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSkinColorPlayer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetSkinColorPlayer(int32_t ColorID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSkinColorPlayer");

	struct ABP_PlayerCharacter_C_SetSkinColorPlayer_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetSkinColorPlayer_Params params;
	params.ColorID = ColorID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RefreshAge
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RefreshAge() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RefreshAge");

	struct ABP_PlayerCharacter_C_RefreshAge_Params {
	};
	ABP_PlayerCharacter_C_RefreshAge_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCurveName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurveCategory	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurveName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChooseCurveName(struct FName CurveCategory, int32_t Index, struct FName* CurveName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCurveName");

	struct ABP_PlayerCharacter_C_ChooseCurveName_Params {
		struct FName CurveCategory;			//Offset: 0 | ElementSize: 8
		int32_t Index;			//Offset: 8 | ElementSize: 4
		struct FName CurveName;			//Offset: 12 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ChooseCurveName_Params params;
	params.CurveCategory = CurveCategory;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (CurveName != nullptr)
		*CurveName = params.CurveName;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVoice
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: VoiceName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetVoice(struct FName VoiceName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVoice");

	struct ABP_PlayerCharacter_C_SetVoice_Params {
		struct FName VoiceName;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetVoice_Params params;
	params.VoiceName = VoiceName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVoiceStructRep
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VoiceName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetVoiceStructRep(struct FName VoiceName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetVoiceStructRep");

	struct ABP_PlayerCharacter_C_SetVoiceStructRep_Params {
		struct FName VoiceName;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SetVoiceStructRep_Params params;
	params.VoiceName = VoiceName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIris
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IrisID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondaryIrisID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetIris(int32_t IrisID, int32_t SecondaryIrisID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIris");

	struct ABP_PlayerCharacter_C_SetIris_Params {
		int32_t IrisID;			//Offset: 0 | ElementSize: 4
		int32_t SecondaryIrisID;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetIris_Params params;
	params.IrisID = IrisID;
	params.SecondaryIrisID = SecondaryIrisID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyebrows
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EyebrowsID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetEyebrows(int32_t EyebrowsID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyebrows");

	struct ABP_PlayerCharacter_C_SetEyebrows_Params {
		int32_t EyebrowsID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetEyebrows_Params params;
	params.EyebrowsID = EyebrowsID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyebrowsColor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetEyebrowsColor(int32_t ColorID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyebrowsColor");

	struct ABP_PlayerCharacter_C_SetEyebrowsColor_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetEyebrowsColor_Params params;
	params.ColorID = ColorID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBeard
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BeardID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBeard(int32_t BeardID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBeard");

	struct ABP_PlayerCharacter_C_SetBeard_Params {
		int32_t BeardID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetBeard_Params params;
	params.BeardID = BeardID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBeardColor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetBeardColor(int32_t ColorID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBeardColor");

	struct ABP_PlayerCharacter_C_SetBeardColor_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetBeardColor_Params params;
	params.ColorID = ColorID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetScars
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ScarsID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ScarsIntensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFlipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetScars(int32_t ScarsID, float ScarsIntensity, bool IsFlipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetScars");

	struct ABP_PlayerCharacter_C_SetScars_Params {
		int32_t ScarsID;			//Offset: 0 | ElementSize: 4
		float ScarsIntensity;			//Offset: 4 | ElementSize: 4
		bool IsFlipped;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetScars_Params params;
	params.ScarsID = ScarsID;
	params.ScarsIntensity = ScarsIntensity;
	params.IsFlipped = IsFlipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFaceShapes
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Indices	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Categories	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetFaceShapes(TArray<int32_t>* Indices, TArray<struct FName>* Categories) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFaceShapes");

	struct ABP_PlayerCharacter_C_SetFaceShapes_Params {
		TArray<int32_t> Indices;			//Offset: 0 | ElementSize: 16
		TArray<struct FName> Categories;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_SetFaceShapes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Indices != nullptr)
		*Indices = params.Indices;
	if (Categories != nullptr)
		*Categories = params.Categories;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDataTableForPlayerVoice
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetDataTableForPlayerVoice() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDataTableForPlayerVoice");

	struct ABP_PlayerCharacter_C_SetDataTableForPlayerVoice_Params {
	};
	ABP_PlayerCharacter_C_SetDataTableForPlayerVoice_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCustomizedCharacterModules_Single
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_PlayerModulesIDs	Type: struct FST_PlayerModulesIDs	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCustomizedCharacterModules_Single(const struct FST_PlayerModulesIDs& ST_PlayerModulesIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCustomizedCharacterModules_Single");

	struct ABP_PlayerCharacter_C_SetCustomizedCharacterModules_Single_Params {
		struct FST_PlayerModulesIDs ST_PlayerModulesIDs;			//Offset: 0 | ElementSize: 120
	};
	ABP_PlayerCharacter_C_SetCustomizedCharacterModules_Single_Params params;
	params.ST_PlayerModulesIDs = ST_PlayerModulesIDs;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CustomCharacterParams
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRep_CustomCharacterParams() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CustomCharacterParams");

	struct ABP_PlayerCharacter_C_OnRep_CustomCharacterParams_Params {
	};
	ABP_PlayerCharacter_C_OnRep_CustomCharacterParams_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCustomizedCharacterModules_Multi
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_PlayerModulesIDs	Type: struct FST_PlayerModulesIDs	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCustomizedCharacterModules_Multi(const struct FST_PlayerModulesIDs& ST_PlayerModulesIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCustomizedCharacterModules_Multi");

	struct ABP_PlayerCharacter_C_SetCustomizedCharacterModules_Multi_Params {
		struct FST_PlayerModulesIDs ST_PlayerModulesIDs;			//Offset: 0 | ElementSize: 120
	};
	ABP_PlayerCharacter_C_SetCustomizedCharacterModules_Multi_Params params;
	params.ST_PlayerModulesIDs = ST_PlayerModulesIDs;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInteractionValid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ValidActorInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ValidComponentInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IsInteractionValid(class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FVector HitLocation, int32_t HitItem, TEnumAsByte<E_ViewMode> ViewMode, bool* ValidActorInteraction, bool* ValidComponentInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInteractionValid");

	struct ABP_PlayerCharacter_C_IsInteractionValid_Params {
		class AActor* HitActor;			//Offset: 0 | ElementSize: 8
		class UPrimitiveComponent* HitComponent;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		int32_t HitItem;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 32 | ElementSize: 1
		bool ValidActorInteraction;			//Offset: 33 | ElementSize: 1
		bool ValidComponentInteraction;			//Offset: 34 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsInteractionValid_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
	if (ValidActorInteraction != nullptr)
		*ValidActorInteraction = params.ValidActorInteraction;
	if (ValidComponentInteraction != nullptr)
		*ValidComponentInteraction = params.ValidComponentInteraction;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFurnitureInteractionValid
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ValidActorInteraction	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IsFurnitureInteractionValid(class AActor* HitActor, struct FVector HitLocation, TEnumAsByte<E_ViewMode> ViewMode, bool* ValidActorInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFurnitureInteractionValid");

	struct ABP_PlayerCharacter_C_IsFurnitureInteractionValid_Params {
		class AActor* HitActor;			//Offset: 0 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 8 | ElementSize: 12
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 20 | ElementSize: 1
		bool ValidActorInteraction;			//Offset: 21 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsFurnitureInteractionValid_Params params;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
	if (ValidActorInteraction != nullptr)
		*ValidActorInteraction = params.ValidActorInteraction;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIfCanUseQuickslot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::CheckIfCanUseQuickslot() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIfCanUseQuickslot");

	struct ABP_PlayerCharacter_C_CheckIfCanUseQuickslot_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CheckIfCanUseQuickslot_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAudioComponentVolume
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewVolume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Smooth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SmoothDuration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeAudioComponentVolume(float NewVolume, bool Smooth, float SmoothDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeAudioComponentVolume");

	struct ABP_PlayerCharacter_C_ChangeAudioComponentVolume_Params {
		float NewVolume;			//Offset: 0 | ElementSize: 4
		bool Smooth;			//Offset: 4 | ElementSize: 1
		float SmoothDuration;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_ChangeAudioComponentVolume_Params params;
	params.NewVolume = NewVolume;
	params.Smooth = Smooth;
	params.SmoothDuration = SmoothDuration;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnSoundComponentAndPlay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Volume	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AutoDestroy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AudioComponent	Type: class UAudioComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SpawnSoundComponentAndPlay(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy, class UAudioComponent** AudioComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnSoundComponentAndPlay");

	struct ABP_PlayerCharacter_C_SpawnSoundComponentAndPlay_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		float StartTime;			//Offset: 8 | ElementSize: 4
		float Volume;			//Offset: 12 | ElementSize: 4
		bool AutoDestroy;			//Offset: 16 | ElementSize: 1
		class UAudioComponent* AudioComponent;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_SpawnSoundComponentAndPlay_Params params;
	params.Sound = Sound;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.AutoDestroy = AutoDestroy;

	UObject::ProcessEvent(fn, &params);
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMoles
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MolesTypeID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MolesIntensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetMoles(int32_t MolesTypeID, float MolesIntensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMoles");

	struct ABP_PlayerCharacter_C_SetMoles_Params {
		int32_t MolesTypeID;			//Offset: 0 | ElementSize: 4
		float MolesIntensity;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetMoles_Params params;
	params.MolesTypeID = MolesTypeID;
	params.MolesIntensity = MolesIntensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFreckles
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FrecklesTypeID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FrecklesIntensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetFreckles(int32_t FrecklesTypeID, float FrecklesIntensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFreckles");

	struct ABP_PlayerCharacter_C_SetFreckles_Params {
		int32_t FrecklesTypeID;			//Offset: 0 | ElementSize: 4
		float FrecklesIntensity;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetFreckles_Params params;
	params.FrecklesTypeID = FrecklesTypeID;
	params.FrecklesIntensity = FrecklesIntensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyesMakeup
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TypeID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetEyesMakeup(int32_t TypeID, int32_t ColorID, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEyesMakeup");

	struct ABP_PlayerCharacter_C_SetEyesMakeup_Params {
		int32_t TypeID;			//Offset: 0 | ElementSize: 4
		int32_t ColorID;			//Offset: 4 | ElementSize: 4
		float Intensity;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetEyesMakeup_Params params;
	params.TypeID = TypeID;
	params.ColorID = ColorID;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLipsMakeup
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TypeID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetLipsMakeup(int32_t TypeID, int32_t ColorID, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLipsMakeup");

	struct ABP_PlayerCharacter_C_SetLipsMakeup_Params {
		int32_t TypeID;			//Offset: 0 | ElementSize: 4
		int32_t ColorID;			//Offset: 4 | ElementSize: 4
		float Intensity;			//Offset: 8 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetLipsMakeup_Params params;
	params.TypeID = TypeID;
	params.ColorID = ColorID;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HostCraftingMontageFix
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HostCraftingMontageFix() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HostCraftingMontageFix");

	struct ABP_PlayerCharacter_C_HostCraftingMontageFix_Params {
	};
	ABP_PlayerCharacter_C_HostCraftingMontageFix_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIfInCombatWithBandits
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckIfInCombatWithBandits() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIfInCombatWithBandits");

	struct ABP_PlayerCharacter_C_CheckIfInCombatWithBandits_Params {
	};
	ABP_PlayerCharacter_C_CheckIfInCombatWithBandits_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyUIsAndGhostsOnPlayerSwoonOrLogout
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::DestroyUIsAndGhostsOnPlayerSwoonOrLogout() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyUIsAndGhostsOnPlayerSwoonOrLogout");

	struct ABP_PlayerCharacter_C_DestroyUIsAndGhostsOnPlayerSwoonOrLogout_Params {
	};
	ABP_PlayerCharacter_C_DestroyUIsAndGhostsOnPlayerSwoonOrLogout_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TeleportPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportPlayer");

	struct ABP_PlayerCharacter_C_TeleportPlayer_Params {
	};
	ABP_PlayerCharacter_C_TeleportPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToInitPlayer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryToInitPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToInitPlayer");

	struct ABP_PlayerCharacter_C_TryToInitPlayer_Params {
	};
	ABP_PlayerCharacter_C_TryToInitPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatform'sGhost
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdatePlatform_sGhost() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlatform'sGhost");

	struct ABP_PlayerCharacter_C_UpdatePlatform_sGhost_Params {
	};
	ABP_PlayerCharacter_C_UpdatePlatform_sGhost_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNickForInspector
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Nick	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetNickForInspector(struct FString* Nick) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNickForInspector");

	struct ABP_PlayerCharacter_C_GetNickForInspector_Params {
		struct FString Nick;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_GetNickForInspector_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Nick != nullptr)
		*Nick = params.Nick;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_IsStartingLoadFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRep_IsStartingLoadFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_IsStartingLoadFinished");

	struct ABP_PlayerCharacter_C_OnRep_IsStartingLoadFinished_Params {
	};
	ABP_PlayerCharacter_C_OnRep_IsStartingLoadFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnActionCamera
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SpawnActionCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnActionCamera");

	struct ABP_PlayerCharacter_C_SpawnActionCamera_Params {
	};
	ABP_PlayerCharacter_C_SpawnActionCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleHitAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HandleHitAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleHitAnimation");

	struct ABP_PlayerCharacter_C_HandleHitAnimation_Params {
	};
	ABP_PlayerCharacter_C_HandleHitAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindDyeIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Socket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::FindDyeIndex(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, TEnumAsByte<E_DyeSlotType> Socket, int32_t* Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindDyeIndex");

	struct ABP_PlayerCharacter_C_FindDyeIndex_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> Socket;			//Offset: 1 | ElementSize: 1
		int32_t Index;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_FindDyeIndex_Params params;
	params.EquipmentSlot = EquipmentSlot;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);
	if (Index != nullptr)
		*Index = params.Index;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateMeshForGivenDyeSlot
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateMeshForGivenDyeSlot(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateMeshForGivenDyeSlot");

	struct ABP_PlayerCharacter_C_UpdateMeshForGivenDyeSlot_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateMeshForGivenDyeSlot_Params params;
	params.EquipmentSlot = EquipmentSlot;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHatDye
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::UpdateHatDye(TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHatDye");

	struct ABP_PlayerCharacter_C_UpdateHatDye_Params {
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 0 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_UpdateHatDye_Params params;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Dyes
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRep_Dyes() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Dyes");

	struct ABP_PlayerCharacter_C_OnRep_Dyes_Params {
	};
	ABP_PlayerCharacter_C_OnRep_Dyes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyDyesOnCharacter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ApplyDyesOnCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyDyesOnCharacter");

	struct ABP_PlayerCharacter_C_ApplyDyesOnCharacter_Params {
	};
	ABP_PlayerCharacter_C_ApplyDyesOnCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Quick Slot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuickslotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Change_Quick_Slot(int32_t QuickslotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Quick Slot");

	struct ABP_PlayerCharacter_C_Change_Quick_Slot_Params {
		int32_t QuickslotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_Change_Quick_Slot_Params params;
	params.QuickslotIndex = QuickslotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHonkerOrPlayerSound
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SoundId	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: TAssetPtr<class UObject>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetHonkerOrPlayerSound(struct FName SoundId, TAssetPtr<class UObject>* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHonkerOrPlayerSound");

	struct ABP_PlayerCharacter_C_GetHonkerOrPlayerSound_Params {
		struct FName SoundId;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UObject> Sound;			//Offset: 8 | ElementSize: 40
	};
	ABP_PlayerCharacter_C_GetHonkerOrPlayerSound_Params params;
	params.SoundId = SoundId;

	UObject::ProcessEvent(fn, &params);
	if (Sound != nullptr)
		*Sound = params.Sound;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RefreshCharacterParams
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::RefreshCharacterParams() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RefreshCharacterParams");

	struct ABP_PlayerCharacter_C_RefreshCharacterParams_Params {
	};
	ABP_PlayerCharacter_C_RefreshCharacterParams_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleHatAndHairVisibility
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::HandleHatAndHairVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleHatAndHairVisibility");

	struct ABP_PlayerCharacter_C_HandleHatAndHairVisibility_Params {
	};
	ABP_PlayerCharacter_C_HandleHatAndHairVisibility_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckBlockState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckBlockState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckBlockState");

	struct ABP_PlayerCharacter_C_CheckBlockState_Params {
	};
	ABP_PlayerCharacter_C_CheckBlockState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_HiddenArmors
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRep_HiddenArmors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_HiddenArmors");

	struct ABP_PlayerCharacter_C_OnRep_HiddenArmors_Params {
	};
	ABP_PlayerCharacter_C_OnRep_HiddenArmors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeirServerInternal
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanSwitchToHeirServerInternal() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeirServerInternal");

	struct ABP_PlayerCharacter_C_CanSwitchToHeirServerInternal_Params {
	};
	ABP_PlayerCharacter_C_CanSwitchToHeirServerInternal_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeirClientInternal
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeirNameID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HeirSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CanSwitchToHeirClientInternal(int32_t HeirNameID, TEnumAsByte<E_Sex> HeirSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanSwitchToHeirClientInternal");

	struct ABP_PlayerCharacter_C_CanSwitchToHeirClientInternal_Params {
		int32_t HeirNameID;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Sex> HeirSex;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CanSwitchToHeirClientInternal_Params params;
	params.HeirNameID = HeirNameID;
	params.HeirSex = HeirSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAvailableHeir
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetAvailableHeir(bool* Success, class ABP_BaseCharacter_C** Heir) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAvailableHeir");

	struct ABP_PlayerCharacter_C_GetAvailableHeir_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class ABP_BaseCharacter_C* Heir;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetAvailableHeir_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Heir != nullptr)
		*Heir = params.Heir;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsHeirAvailable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::IsHeirAvailable(class ABP_BaseCharacter_C* Heir, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsHeirAvailable");

	struct ABP_PlayerCharacter_C_IsHeirAvailable_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_IsHeirAvailable_Params params;
	params.Heir = Heir;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToSpawnDynastyContinues
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PrepareToSpawnDynastyContinues() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToSpawnDynastyContinues");

	struct ABP_PlayerCharacter_C_PrepareToSpawnDynastyContinues_Params {
	};
	ABP_PlayerCharacter_C_PrepareToSpawnDynastyContinues_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerPointDamageAppliedToOtherActor
// Flags: Private, BlueprintCallable, BlueprintEvent
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
void ABP_PlayerCharacter_C::OnPlayerPointDamageAppliedToOtherActor(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerPointDamageAppliedToOtherActor");

	struct ABP_PlayerCharacter_C_OnPlayerPointDamageAppliedToOtherActor_Params {
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
	ABP_PlayerCharacter_C_OnPlayerPointDamageAppliedToOtherActor_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WasShieldEquipped	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetWasShieldEquipped(bool WasShieldEquipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWasShieldEquipped");

	struct ABP_PlayerCharacter_C_SetWasShieldEquipped_Params {
		bool WasShieldEquipped;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetWasShieldEquipped_Params params;
	params.WasShieldEquipped = WasShieldEquipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanUseEmote
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::CanUseEmote()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanUseEmote");

	struct ABP_PlayerCharacter_C_CanUseEmote_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_CanUseEmote_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIsPlayerOutsidePlayableArea
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::CheckIsPlayerOutsidePlayableArea() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckIsPlayerOutsidePlayableArea");

	struct ABP_PlayerCharacter_C_CheckIsPlayerOutsidePlayableArea_Params {
	};
	ABP_PlayerCharacter_C_CheckIsPlayerOutsidePlayableArea_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MovePlayerBackToPlayableArea
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::MovePlayerBackToPlayableArea() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MovePlayerBackToPlayableArea");

	struct ABP_PlayerCharacter_C_MovePlayerBackToPlayableArea_Params {
	};
	ABP_PlayerCharacter_C_MovePlayerBackToPlayableArea_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInspectorMode_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerCharacter_C::GetInspectorMode_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInspectorMode_BPI");

	struct ABP_PlayerCharacter_C_GetInspectorMode_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetInspectorMode_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SavePlayer_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerData	Type: struct FST_SAVE_Player	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: Achievements	Type: struct FST_SAVE_Achievements	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SavePlayer_BPI(struct FST_SAVE_Player* PlayerData, struct FST_SAVE_Achievements* Achievements) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SavePlayer_BPI");

	struct ABP_PlayerCharacter_C_SavePlayer_BPI_Params {
		struct FST_SAVE_Player PlayerData;			//Offset: 0 | ElementSize: 888
		struct FST_SAVE_Achievements Achievements;			//Offset: 888 | ElementSize: 192
	};
	ABP_PlayerCharacter_C_SavePlayer_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PlayerData != nullptr)
		*PlayerData = params.PlayerData;
	if (Achievements != nullptr)
		*Achievements = params.Achievements;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNumberOfGeneration_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_PlayerCharacter_C::GetNumberOfGeneration_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNumberOfGeneration_BPI");

	struct ABP_PlayerCharacter_C_GetNumberOfGeneration_BPI_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetNumberOfGeneration_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAffectionBonus_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_PlayerCharacter_C::GetAffectionBonus_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAffectionBonus_BPI");

	struct ABP_PlayerCharacter_C_GetAffectionBonus_BPI_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetAffectionBonus_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWantsToSkip_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: TEnumAsByte<E_WantsToSkip>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsInBedOnSkip	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
TEnumAsByte<E_WantsToSkip> ABP_PlayerCharacter_C::GetWantsToSkip_BPI(bool* IsInBedOnSkip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWantsToSkip_BPI");

	struct ABP_PlayerCharacter_C_GetWantsToSkip_BPI_Params {
		bool IsInBedOnSkip;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_WantsToSkip> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetWantsToSkip_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsInBedOnSkip != nullptr)
		*IsInBedOnSkip = params.IsInBedOnSkip;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCharacterParams_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Params	Type: struct FST_PlayerModulesIDs	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetCharacterParams_BPI(struct FST_PlayerModulesIDs* Params) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCharacterParams_BPI");

	struct ABP_PlayerCharacter_C_GetCharacterParams_BPI_Params {
		struct FST_PlayerModulesIDs Params;			//Offset: 0 | ElementSize: 120
	};
	ABP_PlayerCharacter_C_GetCharacterParams_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Params != nullptr)
		*Params = params.Params;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAge_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetAge_BPI(float* Age) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAge_BPI");

	struct ABP_PlayerCharacter_C_GetAge_BPI_Params {
		float Age;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetAge_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Age != nullptr)
		*Age = params.Age;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerAudioComponent_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AudioComponent	Type: class UAudioComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetPlayerAudioComponent_BPI(class UAudioComponent** AudioComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerAudioComponent_BPI");

	struct ABP_PlayerCharacter_C_GetPlayerAudioComponent_BPI_Params {
		class UAudioComponent* AudioComponent;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetPlayerAudioComponent_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRagdollChange_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRagdollChange	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetRagdollChange_BPI(bool* IsRagdollChange) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRagdollChange_BPI");

	struct ABP_PlayerCharacter_C_GetRagdollChange_BPI_Params {
		bool IsRagdollChange;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetRagdollChange_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsRagdollChange != nullptr)
		*IsRagdollChange = params.IsRagdollChange;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerState_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerState	Type: class APlayerState*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetPlayerState_BPI(class APlayerState** PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerState_BPI");

	struct ABP_PlayerCharacter_C_GetPlayerState_BPI_Params {
		class APlayerState* PlayerState;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetPlayerState_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsMounting_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMounting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetIsMounting_BPI(bool* IsMounting) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsMounting_BPI");

	struct ABP_PlayerCharacter_C_GetIsMounting_BPI_Params {
		bool IsMounting;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetIsMounting_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMounting != nullptr)
		*IsMounting = params.IsMounting;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDyes_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dyes	Type: TArray<struct FST_Dye>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetDyes_BPI(TArray<struct FST_Dye>* Dyes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDyes_BPI");

	struct ABP_PlayerCharacter_C_GetDyes_BPI_Params {
		TArray<struct FST_Dye> Dyes;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_GetDyes_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Dyes != nullptr)
		*Dyes = params.Dyes;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetArmorVisibilityState_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Visibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetArmorVisibilityState_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, bool* Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetArmorVisibilityState_BPI");

	struct ABP_PlayerCharacter_C_GetArmorVisibilityState_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentSlot;			//Offset: 0 | ElementSize: 1
		bool Visibility;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetArmorVisibilityState_BPI_Params params;
	params.EquipmentSlot = EquipmentSlot;

	UObject::ProcessEvent(fn, &params);
	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleArmorVisibility_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EquipmentCategory	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Visibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ToggleArmorVisibility_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentCategory, bool* Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleArmorVisibility_BPI");

	struct ABP_PlayerCharacter_C_ToggleArmorVisibility_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> EquipmentCategory;			//Offset: 0 | ElementSize: 1
		bool Visibility;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_ToggleArmorVisibility_BPI_Params params;
	params.EquipmentCategory = EquipmentCategory;

	UObject::ProcessEvent(fn, &params);
	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerCharacterID_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterID	Type: struct FGuid	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetPlayerCharacterID_BPI(struct FGuid* CharacterID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerCharacterID_BPI");

	struct ABP_PlayerCharacter_C_GetPlayerCharacterID_BPI_Params {
		struct FGuid CharacterID;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_GetPlayerCharacterID_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CharacterID != nullptr)
		*CharacterID = params.CharacterID;
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
// Flags: NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InputKeyDelegateBinding_1()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("InputKeyDelegateBinding BP_PlayerCharacter.BP_PlayerCharacter_C.InputKeyDelegateBinding_1");

	struct ABP_PlayerCharacter_C_InputKeyDelegateBinding_1_Params {
	};
	ABP_PlayerCharacter_C_InputKeyDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSleepIdle
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSleepIdle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSleepIdle");

	struct ABP_PlayerCharacter_C_OnSleepIdle_Params {
	};
	ABP_PlayerCharacter_C_OnSleepIdle_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWakeUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWakeUp");

	struct ABP_PlayerCharacter_C_OnWakeUp_Params {
	};
	ABP_PlayerCharacter_C_OnWakeUp_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Sleeping Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Sleeping Event");

	struct ABP_PlayerCharacter_C_Set_Sleeping_Event_Params {
		bool IsSleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_Set_Sleeping_Event_Params params;
	params.IsSleeping = IsSleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryStartRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryStartRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryStartRagdoll");

	struct ABP_PlayerCharacter_C_TryStartRagdoll_Params {
	};
	ABP_PlayerCharacter_C_TryStartRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryStopRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TryStopRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryStopRagdoll");

	struct ABP_PlayerCharacter_C_TryStopRagdoll_Params {
	};
	ABP_PlayerCharacter_C_TryStopRagdoll_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonUpdateInventory
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSeasonUpdateInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonUpdateInventory");

	struct ABP_PlayerCharacter_C_OnSeasonUpdateInventory_Params {
	};
	ABP_PlayerCharacter_C_OnSeasonUpdateInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHat_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MeshSoft	Type: TAssetPtr<class USkeletalMesh>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: HideHair	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetHat_BPI(TAssetPtr<class USkeletalMesh> MeshSoft, bool HideHair) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHat_BPI");

	struct ABP_PlayerCharacter_C_SetHat_BPI_Params {
		TAssetPtr<class USkeletalMesh> MeshSoft;			//Offset: 0 | ElementSize: 40
		bool HideHair;			//Offset: 40 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetHat_BPI_Params params;
	params.MeshSoft = MeshSoft;
	params.HideHair = HideHair;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
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
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ShowInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowInspectorUI");

	struct ABP_PlayerCharacter_C_ShowInspectorUI_Params {
	};
	ABP_PlayerCharacter_C_ShowInspectorUI_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction
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
void ABP_PlayerCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction");

	struct ABP_PlayerCharacter_C_SetupStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_StageInteractionsTypes> StageInteractionType;			//Offset: 8 | ElementSize: 1
		class UAnimMontage* MontageToPlay;			//Offset: 16 | ElementSize: 8
		float PlayRate;			//Offset: 24 | ElementSize: 4
		float StartingPosition;			//Offset: 28 | ElementSize: 4
		bool AutomaticPlay;			//Offset: 32 | ElementSize: 1
		int32_t NumberOfAutomaticLoops;			//Offset: 36 | ElementSize: 4
		bool SwapItemsOnInteraction;			//Offset: 40 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetupStageInteraction_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRepNotify_DefaultCharacterModules
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnRepNotify_DefaultCharacterModules() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRepNotify_DefaultCharacterModules");

	struct ABP_PlayerCharacter_C_OnRepNotify_DefaultCharacterModules_Params {
	};
	ABP_PlayerCharacter_C_OnRepNotify_DefaultCharacterModules_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreviewDyeInSlot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoBackToSavedColor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PreviewDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, bool GoBackToSavedColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreviewDyeInSlot_BPI");

	struct ABP_PlayerCharacter_C_PreviewDyeInSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		bool GoBackToSavedColor;			//Offset: 3 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PreviewDyeInSlot_BPI_Params params;
	params.DyeEquipmentSlot = DyeEquipmentSlot;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;
	params.GoBackToSavedColor = GoBackToSavedColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeDyeInSlot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeItemNameRow	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ChangeDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, struct FName DyeItemNameRow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeDyeInSlot_BPI");

	struct ABP_PlayerCharacter_C_ChangeDyeInSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		struct FName DyeItemNameRow;			//Offset: 4 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ChangeDyeInSlot_BPI_Params params;
	params.DyeEquipmentSlot = DyeEquipmentSlot;
	params.DyeSocket = DyeSocket;
	params.DyeColor = DyeColor;
	params.DyeItemNameRow = DyeItemNameRow;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIsStaggered_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStaggered	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReduceStamina	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AmountToReduce	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetIsStaggered_BPI(bool IsStaggered, bool ReduceStamina, float AmountToReduce) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIsStaggered_BPI");

	struct ABP_PlayerCharacter_C_SetIsStaggered_BPI_Params {
		bool IsStaggered;			//Offset: 0 | ElementSize: 1
		bool ReduceStamina;			//Offset: 1 | ElementSize: 1
		float AmountToReduce;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_SetIsStaggered_BPI_Params params;
	params.IsStaggered = IsStaggered;
	params.ReduceStamina = ReduceStamina;
	params.AmountToReduce = AmountToReduce;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteActorUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Requester	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::ExecuteActorUpdate(class APlayerController* Requester) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteActorUpdate");

	struct ABP_PlayerCharacter_C_ExecuteActorUpdate_Params {
		class APlayerController* Requester;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_ExecuteActorUpdate_Params params;
	params.Requester = Requester;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::StopStageInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopStageInteraction");

	struct ABP_PlayerCharacter_C_StopStageInteraction_Params {
	};
	ABP_PlayerCharacter_C_StopStageInteraction_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMovementModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnMovementModeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMovementModeChanged");

	struct ABP_PlayerCharacter_C_OnMovementModeChanged_Params {
	};
	ABP_PlayerCharacter_C_OnMovementModeChanged_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookingRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
struct FRotator ABP_PlayerCharacter_C::GetLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookingRotation");

	struct ABP_PlayerCharacter_C_GetLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_GetLookingRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged");

	struct ABP_PlayerCharacter_C_OnSeasonChanged_Params {
	};
	ABP_PlayerCharacter_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnEndWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction");

	struct ABP_PlayerCharacter_C_OnEndWorkbenchInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartWorkbenchInteraction
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
void ABP_PlayerCharacter_C::OnStartWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartWorkbenchInteraction");

	struct ABP_PlayerCharacter_C_OnStartWorkbenchInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		class USceneComponent* InteractComponent;			//Offset: 8 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 16 | ElementSize: 12
		bool ChangeCamera;			//Offset: 28 | ElementSize: 1
		bool UseLocation;			//Offset: 29 | ElementSize: 1
		TEnumAsByte<E_LookAtOptions> LookAtBehavior;			//Offset: 30 | ElementSize: 1
		struct FRotator LookAtRotation;			//Offset: 32 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnStartWorkbenchInteraction_Params params;
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDayChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnDayChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDayChanged");

	struct ABP_PlayerCharacter_C_OnDayChanged_Params {
	};
	ABP_PlayerCharacter_C_OnDayChanged_Params params;

	UObject::ProcessEvent(fn, &params);
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCloseCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction");

	struct ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedWorkbench	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetCamera	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnWaitForCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction");

	struct ABP_PlayerCharacter_C_OnWaitForCraftingInteraction_Params {
		class AActor* InteractedWorkbench;			//Offset: 0 | ElementSize: 8
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
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnStartFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation, struct FRotator InteractRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStartFurnitureInteraction");

	struct ABP_PlayerCharacter_C_OnStartFurnitureInteraction_Params {
		class AActor* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator InteractRotation;			//Offset: 20 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnStartFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;
	params.InteractRotation = InteractRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndFurnitureInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedFurniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnEndFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndFurnitureInteraction");

	struct ABP_PlayerCharacter_C_OnEndFurnitureInteraction_Params {
		class AActor* InteractedFurniture;			//Offset: 0 | ElementSize: 8
		struct FVector InteractLocation;			//Offset: 8 | ElementSize: 12
	};
	ABP_PlayerCharacter_C_OnEndFurnitureInteraction_Params params;
	params.InteractedFurniture = InteractedFurniture;
	params.InteractLocation = InteractLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GroundedRotation
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GroundedRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GroundedRotation");

	struct ABP_PlayerCharacter_C_GroundedRotation_Params {
	};
	ABP_PlayerCharacter_C_GroundedRotation_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHeldItemReplicated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnHeldItemReplicated() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHeldItemReplicated");

	struct ABP_PlayerCharacter_C_OnHeldItemReplicated_Params {
	};
	ABP_PlayerCharacter_C_OnHeldItemReplicated_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOffHandItemReplicated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnOffHandItemReplicated() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOffHandItemReplicated");

	struct ABP_PlayerCharacter_C_OnOffHandItemReplicated_Params {
	};
	ABP_PlayerCharacter_C_OnOffHandItemReplicated_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInventoryOpen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetInventoryOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInventoryOpen");

	struct ABP_PlayerCharacter_C_SetInventoryOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetInventoryOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGameMenuOpen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetGameMenuOpen(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGameMenuOpen");

	struct ABP_PlayerCharacter_C_SetGameMenuOpen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetGameMenuOpen_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TrySyncFurnitureAnim
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToSync	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Synced	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::TrySyncFurnitureAnim(class AActor* ActorToSync, bool* Synced) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TrySyncFurnitureAnim");

	struct ABP_PlayerCharacter_C_TrySyncFurnitureAnim_Params {
		class AActor* ActorToSync;			//Offset: 0 | ElementSize: 8
		bool Synced;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_TrySyncFurnitureAnim_Params params;
	params.ActorToSync = ActorToSync;

	UObject::ProcessEvent(fn, &params);
	if (Synced != nullptr)
		*Synced = params.Synced;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSkinColorByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColorID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DefaultColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetSkinColorByID(int32_t ColorID, struct FLinearColor DefaultColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSkinColorByID");

	struct ABP_PlayerCharacter_C_GetSkinColorByID_Params {
		int32_t ColorID;			//Offset: 0 | ElementSize: 4
		struct FLinearColor DefaultColor;			//Offset: 4 | ElementSize: 16
		struct FLinearColor Color;			//Offset: 20 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_GetSkinColorByID_Params params;
	params.ColorID = ColorID;
	params.DefaultColor = DefaultColor;

	UObject::ProcessEvent(fn, &params);
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairColorByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DefaultColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetHairColorByID(int32_t ID, struct FLinearColor DefaultColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairColorByID");

	struct ABP_PlayerCharacter_C_GetHairColorByID_Params {
		int32_t ID;			//Offset: 0 | ElementSize: 4
		struct FLinearColor DefaultColor;			//Offset: 4 | ElementSize: 16
		struct FLinearColor Color;			//Offset: 20 | ElementSize: 16
	};
	ABP_PlayerCharacter_C_GetHairColorByID_Params params;
	params.ID = ID;
	params.DefaultColor = DefaultColor;

	UObject::ProcessEvent(fn, &params);
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitInspectorMode
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::InitInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitInspectorMode");

	struct ABP_PlayerCharacter_C_InitInspectorMode_Params {
	};
	ABP_PlayerCharacter_C_InitInspectorMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCoopStatsProtection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::SetCoopStatsProtection(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCoopStatsProtection");

	struct ABP_PlayerCharacter_C_SetCoopStatsProtection_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_SetCoopStatsProtection_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatStarted
// Flags: Protected, BlueprintCallable, BlueprintEvent
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatEnded
// Flags: Protected, BlueprintCallable, BlueprintEvent
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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCauserStarted
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCombatCauserStarted(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCauserStarted");

	struct ABP_PlayerCharacter_C_OnCombatCauserStarted_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_OnCombatCauserStarted_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCauserEnded
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnCombatCauserEnded(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCauserEnded");

	struct ABP_PlayerCharacter_C_OnCombatCauserEnded_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_OnCombatCauserEnded_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAnyDamageReceived
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAnyDamageReceived");

	struct ABP_PlayerCharacter_C_OnAnyDamageReceived_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
		class AController* EventInstigator;			//Offset: 8 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 16 | ElementSize: 8
		class UDamageType* DamageType;			//Offset: 24 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_OnAnyDamageReceived_Params params;
	params.ReceivedDamage = ReceivedDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBlockBroken
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnBlockBroken(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBlockBroken");

	struct ABP_PlayerCharacter_C_OnBlockBroken_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_OnBlockBroken_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitNotBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnHitNotBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitNotBlocked");

	struct ABP_PlayerCharacter_C_OnHitNotBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_OnHitNotBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnHitBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitBlocked");

	struct ABP_PlayerCharacter_C_OnHitBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_OnHitBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnKilled
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::OnKilled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnKilled");

	struct ABP_PlayerCharacter_C_OnKilled_Params {
	};
	ABP_PlayerCharacter_C_OnKilled_Params params;

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
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayOnomatopoeicSound_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SoundSubCategory	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PickRandom	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SoundId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::PlayOnomatopoeicSound_BPI(struct FName SoundSubCategory, bool PickRandom, int32_t SoundId, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayOnomatopoeicSound_BPI");

	struct ABP_PlayerCharacter_C_PlayOnomatopoeicSound_BPI_Params {
		struct FName SoundSubCategory;			//Offset: 0 | ElementSize: 8
		bool PickRandom;			//Offset: 8 | ElementSize: 1
		int32_t SoundId;			//Offset: 12 | ElementSize: 4
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_PlayOnomatopoeicSound_BPI_Params params;
	params.SoundSubCategory = SoundSubCategory;
	params.PickRandom = PickRandom;
	params.SoundId = SoundId;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsStaggered_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsStaggered	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetIsStaggered_BPI(bool* IsStaggered) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsStaggered_BPI");

	struct ABP_PlayerCharacter_C_GetIsStaggered_BPI_Params {
		bool IsStaggered;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetIsStaggered_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsStaggered != nullptr)
		*IsStaggered = params.IsStaggered;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDyeParamsForSlot_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DyeEquipmentSlot	Type: TEnumAsByte<E_EquipmentCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeSocket	Type: TEnumAsByte<E_DyeSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeColor	Type: EDyeColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DyeItemName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetDyeParamsForSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor* DyeColor, struct FName* DyeItemName, bool* IsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDyeParamsForSlot_BPI");

	struct ABP_PlayerCharacter_C_GetDyeParamsForSlot_BPI_Params {
		TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DyeSlotType> DyeSocket;			//Offset: 1 | ElementSize: 1
		EDyeColor DyeColor;			//Offset: 2 | ElementSize: 1
		struct FName DyeItemName;			//Offset: 4 | ElementSize: 8
		bool IsValid;			//Offset: 12 | ElementSize: 1
	};
	ABP_PlayerCharacter_C_GetDyeParamsForSlot_BPI_Params params;
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

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetReaction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: OtherObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reaction	Type: TEnumAsByte<E_AIPerceptionReaction>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReactionPriority	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetReaction");

	struct ABP_PlayerCharacter_C_GetReaction_Params {
		class UObject* OtherObject;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AIPerceptionReaction> Reaction;			//Offset: 8 | ElementSize: 1
		int32_t ReactionPriority;			//Offset: 12 | ElementSize: 4
	};
	ABP_PlayerCharacter_C_GetReaction_Params params;
	params.OtherObject = OtherObject;

	UObject::ProcessEvent(fn, &params);
	if (Reaction != nullptr)
		*Reaction = params.Reaction;
	if (ReactionPriority != nullptr)
		*ReactionPriority = params.ReactionPriority;
}

/////////////////////////////////////////////
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetActorType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ActorType	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerCharacter_C::GetActorType(struct FName* ActorType)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetActorType");

	struct ABP_PlayerCharacter_C_GetActorType_Params {
		struct FName ActorType;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerCharacter_C_GetActorType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorType != nullptr)
		*ActorType = params.ActorType;
}

#pragma endregion
}