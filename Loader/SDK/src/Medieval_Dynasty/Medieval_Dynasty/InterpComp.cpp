#include "../SDK.h"
#include "InterpComp.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bUseInterpolation
// Declaration: bool bUseInterpolation
bool UInterpComp::M_GetbUseInterpolation() const {
	return Read<bool>((byte*)this + 184);
}
bool* UInterpComp::M_PtrGetbUseInterpolation() {
	return reinterpret_cast<bool*>((byte*)this + 184);
}
void UInterpComp::M_SetbUseInterpolation(const bool& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of bTryToInterpolateDuringPhysics
// Declaration: bool bTryToInterpolateDuringPhysics
bool UInterpComp::M_GetbTryToInterpolateDuringPhysics() const {
	return Read<bool>((byte*)this + 185);
}
bool* UInterpComp::M_PtrGetbTryToInterpolateDuringPhysics() {
	return reinterpret_cast<bool*>((byte*)this + 185);
}
void UInterpComp::M_SetbTryToInterpolateDuringPhysics(const bool& value) {
	Write((byte*)this + 185, value);
}
// Member Getter and Setter of LocationError
// Declaration: float LocationError
float UInterpComp::M_GetLocationError() const {
	return Read<float>((byte*)this + 188);
}
float* UInterpComp::M_PtrGetLocationError() {
	return reinterpret_cast<float*>((byte*)this + 188);
}
void UInterpComp::M_SetLocationError(const float& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of RotationError
// Declaration: float RotationError
float UInterpComp::M_GetRotationError() const {
	return Read<float>((byte*)this + 192);
}
float* UInterpComp::M_PtrGetRotationError() {
	return reinterpret_cast<float*>((byte*)this + 192);
}
void UInterpComp::M_SetRotationError(const float& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of MinInterpolationDeltaTime
// Declaration: float MinInterpolationDeltaTime
float UInterpComp::M_GetMinInterpolationDeltaTime() const {
	return Read<float>((byte*)this + 196);
}
float* UInterpComp::M_PtrGetMinInterpolationDeltaTime() {
	return reinterpret_cast<float*>((byte*)this + 196);
}
void UInterpComp::M_SetMinInterpolationDeltaTime(const float& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of LocationInterpolationSpeed
// Declaration: float LocationInterpolationSpeed
float UInterpComp::M_GetLocationInterpolationSpeed() const {
	return Read<float>((byte*)this + 200);
}
float* UInterpComp::M_PtrGetLocationInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 200);
}
void UInterpComp::M_SetLocationInterpolationSpeed(const float& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of RotationInterpolationSpeed
// Declaration: float RotationInterpolationSpeed
float UInterpComp::M_GetRotationInterpolationSpeed() const {
	return Read<float>((byte*)this + 204);
}
float* UInterpComp::M_PtrGetRotationInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 204);
}
void UInterpComp::M_SetRotationInterpolationSpeed(const float& value) {
	Write((byte*)this + 204, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.InterpComp.SyncStateOnClientPhysBodyWake
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UInterpComp::SyncStateOnClientPhysBodyWake() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.InterpComp.SyncStateOnClientPhysBodyWake");

	struct UInterpComp_SyncStateOnClientPhysBodyWake_Params {
	};
	UInterpComp_SyncStateOnClientPhysBodyWake_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.InterpComp.UpdateInterpolationState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UInterpComp::UpdateInterpolationState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.InterpComp.UpdateInterpolationState");

	struct UInterpComp_UpdateInterpolationState_Params {
	};
	UInterpComp_UpdateInterpolationState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}