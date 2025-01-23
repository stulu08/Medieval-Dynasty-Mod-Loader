#include "../SDK.h"
#include "InteractiveFoliageActor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CapsuleComponent
// Declaration: class UCapsuleComponent* CapsuleComponent
class UCapsuleComponent* AInteractiveFoliageActor::M_GetCapsuleComponent() const {
	return Read<class UCapsuleComponent*>((byte*)this + 560);
}
class UCapsuleComponent** AInteractiveFoliageActor::M_PtrGetCapsuleComponent() {
	return reinterpret_cast<class UCapsuleComponent**>((byte*)this + 560);
}
void AInteractiveFoliageActor::M_SetCapsuleComponent(const class UCapsuleComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of TouchingActorEntryPosition
// Declaration: struct FVector TouchingActorEntryPosition
struct FVector AInteractiveFoliageActor::M_GetTouchingActorEntryPosition() const {
	return Read<struct FVector>((byte*)this + 568);
}
struct FVector* AInteractiveFoliageActor::M_PtrGetTouchingActorEntryPosition() {
	return reinterpret_cast<struct FVector*>((byte*)this + 568);
}
void AInteractiveFoliageActor::M_SetTouchingActorEntryPosition(const struct FVector& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of FoliageVelocity
// Declaration: struct FVector FoliageVelocity
struct FVector AInteractiveFoliageActor::M_GetFoliageVelocity() const {
	return Read<struct FVector>((byte*)this + 580);
}
struct FVector* AInteractiveFoliageActor::M_PtrGetFoliageVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 580);
}
void AInteractiveFoliageActor::M_SetFoliageVelocity(const struct FVector& value) {
	Write((byte*)this + 580, value);
}
// Member Getter and Setter of FoliageForce
// Declaration: struct FVector FoliageForce
struct FVector AInteractiveFoliageActor::M_GetFoliageForce() const {
	return Read<struct FVector>((byte*)this + 592);
}
struct FVector* AInteractiveFoliageActor::M_PtrGetFoliageForce() {
	return reinterpret_cast<struct FVector*>((byte*)this + 592);
}
void AInteractiveFoliageActor::M_SetFoliageForce(const struct FVector& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of FoliagePosition
// Declaration: struct FVector FoliagePosition
struct FVector AInteractiveFoliageActor::M_GetFoliagePosition() const {
	return Read<struct FVector>((byte*)this + 604);
}
struct FVector* AInteractiveFoliageActor::M_PtrGetFoliagePosition() {
	return reinterpret_cast<struct FVector*>((byte*)this + 604);
}
void AInteractiveFoliageActor::M_SetFoliagePosition(const struct FVector& value) {
	Write((byte*)this + 604, value);
}
// Member Getter and Setter of FoliageDamageImpulseScale
// Declaration: float FoliageDamageImpulseScale
float AInteractiveFoliageActor::M_GetFoliageDamageImpulseScale() const {
	return Read<float>((byte*)this + 616);
}
float* AInteractiveFoliageActor::M_PtrGetFoliageDamageImpulseScale() {
	return reinterpret_cast<float*>((byte*)this + 616);
}
void AInteractiveFoliageActor::M_SetFoliageDamageImpulseScale(const float& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of FoliageTouchImpulseScale
// Declaration: float FoliageTouchImpulseScale
float AInteractiveFoliageActor::M_GetFoliageTouchImpulseScale() const {
	return Read<float>((byte*)this + 620);
}
float* AInteractiveFoliageActor::M_PtrGetFoliageTouchImpulseScale() {
	return reinterpret_cast<float*>((byte*)this + 620);
}
void AInteractiveFoliageActor::M_SetFoliageTouchImpulseScale(const float& value) {
	Write((byte*)this + 620, value);
}
// Member Getter and Setter of FoliageStiffness
// Declaration: float FoliageStiffness
float AInteractiveFoliageActor::M_GetFoliageStiffness() const {
	return Read<float>((byte*)this + 624);
}
float* AInteractiveFoliageActor::M_PtrGetFoliageStiffness() {
	return reinterpret_cast<float*>((byte*)this + 624);
}
void AInteractiveFoliageActor::M_SetFoliageStiffness(const float& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of FoliageStiffnessQuadratic
// Declaration: float FoliageStiffnessQuadratic
float AInteractiveFoliageActor::M_GetFoliageStiffnessQuadratic() const {
	return Read<float>((byte*)this + 628);
}
float* AInteractiveFoliageActor::M_PtrGetFoliageStiffnessQuadratic() {
	return reinterpret_cast<float*>((byte*)this + 628);
}
void AInteractiveFoliageActor::M_SetFoliageStiffnessQuadratic(const float& value) {
	Write((byte*)this + 628, value);
}
// Member Getter and Setter of FoliageDamping
// Declaration: float FoliageDamping
float AInteractiveFoliageActor::M_GetFoliageDamping() const {
	return Read<float>((byte*)this + 632);
}
float* AInteractiveFoliageActor::M_PtrGetFoliageDamping() {
	return reinterpret_cast<float*>((byte*)this + 632);
}
void AInteractiveFoliageActor::M_SetFoliageDamping(const float& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of MaxDamageImpulse
// Declaration: float MaxDamageImpulse
float AInteractiveFoliageActor::M_GetMaxDamageImpulse() const {
	return Read<float>((byte*)this + 636);
}
float* AInteractiveFoliageActor::M_PtrGetMaxDamageImpulse() {
	return reinterpret_cast<float*>((byte*)this + 636);
}
void AInteractiveFoliageActor::M_SetMaxDamageImpulse(const float& value) {
	Write((byte*)this + 636, value);
}
// Member Getter and Setter of MaxTouchImpulse
// Declaration: float MaxTouchImpulse
float AInteractiveFoliageActor::M_GetMaxTouchImpulse() const {
	return Read<float>((byte*)this + 640);
}
float* AInteractiveFoliageActor::M_PtrGetMaxTouchImpulse() {
	return reinterpret_cast<float*>((byte*)this + 640);
}
void AInteractiveFoliageActor::M_SetMaxTouchImpulse(const float& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of MaxForce
// Declaration: float MaxForce
float AInteractiveFoliageActor::M_GetMaxForce() const {
	return Read<float>((byte*)this + 644);
}
float* AInteractiveFoliageActor::M_PtrGetMaxForce() {
	return reinterpret_cast<float*>((byte*)this + 644);
}
void AInteractiveFoliageActor::M_SetMaxForce(const float& value) {
	Write((byte*)this + 644, value);
}
// Member Getter and Setter of Mass
// Declaration: float Mass
float AInteractiveFoliageActor::M_GetMass() const {
	return Read<float>((byte*)this + 648);
}
float* AInteractiveFoliageActor::M_PtrGetMass() {
	return reinterpret_cast<float*>((byte*)this + 648);
}
void AInteractiveFoliageActor::M_SetMass(const float& value) {
	Write((byte*)this + 648, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// Flags: Final, Native, Protected, HasOutParms
// Params:
// Name: OverlappedComp	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Other	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OtherBodyIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bFromSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OverlapInfo	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	struct AInteractiveFoliageActor_CapsuleTouched_Params {
		class UPrimitiveComponent* OverlappedComp;			//Offset: 0 | ElementSize: 8
		class AActor* Other;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		int32_t OtherBodyIndex;			//Offset: 24 | ElementSize: 4
		bool bFromSweep;			//Offset: 28 | ElementSize: 1
		struct FHitResult OverlapInfo;			//Offset: 32 | ElementSize: 136
	};
	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}