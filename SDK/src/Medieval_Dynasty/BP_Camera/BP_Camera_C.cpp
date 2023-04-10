#include "../SDK.h"
#include "BP_Camera_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FP_ActionCamera
// Declaration: class UCameraComponent* FP_ActionCamera
class UCameraComponent* ABP_Camera_C::M_GetFP_ActionCamera() const {
	return Read<class UCameraComponent*>((byte*)this + 544);
}
class UCameraComponent** ABP_Camera_C::M_PtrGetFP_ActionCamera() {
	return reinterpret_cast<class UCameraComponent**>((byte*)this + 544);
}
void ABP_Camera_C::M_SetFP_ActionCamera(const class UCameraComponent*& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of PostProcess
// Declaration: struct FPostProcessSettings PostProcess
struct FPostProcessSettings ABP_Camera_C::M_GetPostProcess() const {
	return Read<struct FPostProcessSettings>((byte*)this + 560);
}
struct FPostProcessSettings* ABP_Camera_C::M_PtrGetPostProcess() {
	return reinterpret_cast<struct FPostProcessSettings*>((byte*)this + 560);
}
void ABP_Camera_C::M_SetPostProcess(const struct FPostProcessSettings& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of FieldOfView
// Declaration: float FieldOfView
float ABP_Camera_C::M_GetFieldOfView() const {
	return Read<float>((byte*)this + 1936);
}
float* ABP_Camera_C::M_PtrGetFieldOfView() {
	return reinterpret_cast<float*>((byte*)this + 1936);
}
void ABP_Camera_C::M_SetFieldOfView(const float& value) {
	Write((byte*)this + 1936, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_Camera.BP_Camera_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_Camera_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.UserConstructionScript");

	struct ABP_Camera_C_UserConstructionScript_Params {
	};
	ABP_Camera_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}