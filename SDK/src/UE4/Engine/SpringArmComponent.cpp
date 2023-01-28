#include "../SDK.h"
#include "SpringArmComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TargetArmLength
// Declaration: float TargetArmLength
float USpringArmComponent::M_GetTargetArmLength() const {
	return Read<float>((byte*)this + 504);
}
float* USpringArmComponent::M_PtrGetTargetArmLength() {
	return reinterpret_cast<float*>((byte*)this + 504);
}
void USpringArmComponent::M_SetTargetArmLength(const float& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of SocketOffset
// Declaration: struct FVector SocketOffset
struct FVector USpringArmComponent::M_GetSocketOffset() const {
	return Read<struct FVector>((byte*)this + 508);
}
struct FVector* USpringArmComponent::M_PtrGetSocketOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 508);
}
void USpringArmComponent::M_SetSocketOffset(const struct FVector& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of TargetOffset
// Declaration: struct FVector TargetOffset
struct FVector USpringArmComponent::M_GetTargetOffset() const {
	return Read<struct FVector>((byte*)this + 520);
}
struct FVector* USpringArmComponent::M_PtrGetTargetOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 520);
}
void USpringArmComponent::M_SetTargetOffset(const struct FVector& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of ProbeSize
// Declaration: float ProbeSize
float USpringArmComponent::M_GetProbeSize() const {
	return Read<float>((byte*)this + 532);
}
float* USpringArmComponent::M_PtrGetProbeSize() {
	return reinterpret_cast<float*>((byte*)this + 532);
}
void USpringArmComponent::M_SetProbeSize(const float& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of ProbeChannel
// Declaration: TEnumAsByte<ECollisionChannel> ProbeChannel
TEnumAsByte<ECollisionChannel> USpringArmComponent::M_GetProbeChannel() const {
	return Read<TEnumAsByte<ECollisionChannel>>((byte*)this + 536);
}
TEnumAsByte<ECollisionChannel>* USpringArmComponent::M_PtrGetProbeChannel() {
	return reinterpret_cast<TEnumAsByte<ECollisionChannel>*>((byte*)this + 536);
}
void USpringArmComponent::M_SetProbeChannel(const TEnumAsByte<ECollisionChannel>& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of bDoCollisionTest
// Declaration: unsigned char bDoCollisionTest : 1
unsigned char USpringArmComponent::M_GetbDoCollisionTest() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbDoCollisionTest() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbDoCollisionTest(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bUsePawnControlRotation
// Declaration: unsigned char bUsePawnControlRotation : 1
unsigned char USpringArmComponent::M_GetbUsePawnControlRotation() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbUsePawnControlRotation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbUsePawnControlRotation(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bInheritPitch
// Declaration: unsigned char bInheritPitch : 1
unsigned char USpringArmComponent::M_GetbInheritPitch() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbInheritPitch() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbInheritPitch(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bInheritYaw
// Declaration: unsigned char bInheritYaw : 1
unsigned char USpringArmComponent::M_GetbInheritYaw() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbInheritYaw() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbInheritYaw(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bInheritRoll
// Declaration: unsigned char bInheritRoll : 1
unsigned char USpringArmComponent::M_GetbInheritRoll() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbInheritRoll() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbInheritRoll(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bEnableCameraLag
// Declaration: unsigned char bEnableCameraLag : 1
unsigned char USpringArmComponent::M_GetbEnableCameraLag() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbEnableCameraLag() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbEnableCameraLag(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bEnableCameraRotationLag
// Declaration: unsigned char bEnableCameraRotationLag : 1
unsigned char USpringArmComponent::M_GetbEnableCameraRotationLag() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbEnableCameraRotationLag() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbEnableCameraRotationLag(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bUseCameraLagSubstepping
// Declaration: unsigned char bUseCameraLagSubstepping : 1
unsigned char USpringArmComponent::M_GetbUseCameraLagSubstepping() const {
	return Read<unsigned char>((byte*)this + 540);
}
unsigned char* USpringArmComponent::M_PtrGetbUseCameraLagSubstepping() {
	return reinterpret_cast<unsigned char*>((byte*)this + 540);
}
void USpringArmComponent::M_SetbUseCameraLagSubstepping(const unsigned char& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of bDrawDebugLagMarkers
// Declaration: unsigned char bDrawDebugLagMarkers : 1
unsigned char USpringArmComponent::M_GetbDrawDebugLagMarkers() const {
	return Read<unsigned char>((byte*)this + 541);
}
unsigned char* USpringArmComponent::M_PtrGetbDrawDebugLagMarkers() {
	return reinterpret_cast<unsigned char*>((byte*)this + 541);
}
void USpringArmComponent::M_SetbDrawDebugLagMarkers(const unsigned char& value) {
	Write((byte*)this + 541, value);
}
// Member Getter and Setter of CameraLagSpeed
// Declaration: float CameraLagSpeed
float USpringArmComponent::M_GetCameraLagSpeed() const {
	return Read<float>((byte*)this + 544);
}
float* USpringArmComponent::M_PtrGetCameraLagSpeed() {
	return reinterpret_cast<float*>((byte*)this + 544);
}
void USpringArmComponent::M_SetCameraLagSpeed(const float& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of CameraRotationLagSpeed
// Declaration: float CameraRotationLagSpeed
float USpringArmComponent::M_GetCameraRotationLagSpeed() const {
	return Read<float>((byte*)this + 548);
}
float* USpringArmComponent::M_PtrGetCameraRotationLagSpeed() {
	return reinterpret_cast<float*>((byte*)this + 548);
}
void USpringArmComponent::M_SetCameraRotationLagSpeed(const float& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of CameraLagMaxTimeStep
// Declaration: float CameraLagMaxTimeStep
float USpringArmComponent::M_GetCameraLagMaxTimeStep() const {
	return Read<float>((byte*)this + 552);
}
float* USpringArmComponent::M_PtrGetCameraLagMaxTimeStep() {
	return reinterpret_cast<float*>((byte*)this + 552);
}
void USpringArmComponent::M_SetCameraLagMaxTimeStep(const float& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of CameraLagMaxDistance
// Declaration: float CameraLagMaxDistance
float USpringArmComponent::M_GetCameraLagMaxDistance() const {
	return Read<float>((byte*)this + 556);
}
float* USpringArmComponent::M_PtrGetCameraLagMaxDistance() {
	return reinterpret_cast<float*>((byte*)this + 556);
}
void USpringArmComponent::M_SetCameraLagMaxDistance(const float& value) {
	Write((byte*)this + 556, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SpringArmComponent.GetTargetRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator USpringArmComponent::GetTargetRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SpringArmComponent.GetTargetRotation");

	struct USpringArmComponent_GetTargetRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USpringArmComponent_GetTargetRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SpringArmComponent.GetUnfixedCameraPosition
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USpringArmComponent::GetUnfixedCameraPosition()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SpringArmComponent.GetUnfixedCameraPosition");

	struct USpringArmComponent_GetUnfixedCameraPosition_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USpringArmComponent_GetUnfixedCameraPosition_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SpringArmComponent.IsCollisionFixApplied
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USpringArmComponent::IsCollisionFixApplied()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SpringArmComponent.IsCollisionFixApplied");

	struct USpringArmComponent_IsCollisionFixApplied_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USpringArmComponent_IsCollisionFixApplied_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}