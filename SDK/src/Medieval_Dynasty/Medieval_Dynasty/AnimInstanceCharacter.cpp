#include "../SDK.h"
#include "AnimInstanceCharacter.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CharacterBase
// Declaration: class ACharacterBase* CharacterBase
class ACharacterBase* UAnimInstanceCharacter::M_GetCharacterBase() const {
	return Read<class ACharacterBase*>((byte*)this + 696);
}
class ACharacterBase** UAnimInstanceCharacter::M_PtrGetCharacterBase() {
	return reinterpret_cast<class ACharacterBase**>((byte*)this + 696);
}
void UAnimInstanceCharacter::M_SetCharacterBase(const class ACharacterBase*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector UAnimInstanceCharacter::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 704);
}
struct FVector* UAnimInstanceCharacter::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 704);
}
void UAnimInstanceCharacter::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool UAnimInstanceCharacter::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 716);
}
bool* UAnimInstanceCharacter::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 716);
}
void UAnimInstanceCharacter::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of lastVelocityRotation
// Declaration: struct FRotator lastVelocityRotation
struct FRotator UAnimInstanceCharacter::M_GetlastVelocityRotation() const {
	return Read<struct FRotator>((byte*)this + 720);
}
struct FRotator* UAnimInstanceCharacter::M_PtrGetlastVelocityRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 720);
}
void UAnimInstanceCharacter::M_SetlastVelocityRotation(const struct FRotator& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of Rotation
// Declaration: struct FRotator Rotation
struct FRotator UAnimInstanceCharacter::M_GetRotation() const {
	return Read<struct FRotator>((byte*)this + 732);
}
struct FRotator* UAnimInstanceCharacter::M_PtrGetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 732);
}
void UAnimInstanceCharacter::M_SetRotation(const struct FRotator& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of lookingRotation
// Declaration: struct FRotator lookingRotation
struct FRotator UAnimInstanceCharacter::M_GetlookingRotation() const {
	return Read<struct FRotator>((byte*)this + 744);
}
struct FRotator* UAnimInstanceCharacter::M_PtrGetlookingRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 744);
}
void UAnimInstanceCharacter::M_SetlookingRotation(const struct FRotator& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of aimYawRate
// Declaration: float aimYawRate
float UAnimInstanceCharacter::M_GetaimYawRate() const {
	return Read<float>((byte*)this + 756);
}
float* UAnimInstanceCharacter::M_PtrGetaimYawRate() {
	return reinterpret_cast<float*>((byte*)this + 756);
}
void UAnimInstanceCharacter::M_SetaimYawRate(const float& value) {
	Write((byte*)this + 756, value);
}
// Member Getter and Setter of aimYawDelta
// Declaration: float aimYawDelta
float UAnimInstanceCharacter::M_GetaimYawDelta() const {
	return Read<float>((byte*)this + 760);
}
float* UAnimInstanceCharacter::M_PtrGetaimYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void UAnimInstanceCharacter::M_SetaimYawDelta(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of rotationYawDelta
// Declaration: float rotationYawDelta
float UAnimInstanceCharacter::M_GetrotationYawDelta() const {
	return Read<float>((byte*)this + 764);
}
float* UAnimInstanceCharacter::M_PtrGetrotationYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 764);
}
void UAnimInstanceCharacter::M_SetrotationYawDelta(const float& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of hasMovementInput
// Declaration: bool hasMovementInput
bool UAnimInstanceCharacter::M_GethasMovementInput() const {
	return Read<bool>((byte*)this + 768);
}
bool* UAnimInstanceCharacter::M_PtrGethasMovementInput() {
	return reinterpret_cast<bool*>((byte*)this + 768);
}
void UAnimInstanceCharacter::M_SethasMovementInput(const bool& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of lastMovementInputRotation
// Declaration: struct FRotator lastMovementInputRotation
struct FRotator UAnimInstanceCharacter::M_GetlastMovementInputRotation() const {
	return Read<struct FRotator>((byte*)this + 772);
}
struct FRotator* UAnimInstanceCharacter::M_PtrGetlastMovementInputRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 772);
}
void UAnimInstanceCharacter::M_SetlastMovementInputRotation(const struct FRotator& value) {
	Write((byte*)this + 772, value);
}
// Member Getter and Setter of movementInputVelocityDifference
// Declaration: float movementInputVelocityDifference
float UAnimInstanceCharacter::M_GetmovementInputVelocityDifference() const {
	return Read<float>((byte*)this + 784);
}
float* UAnimInstanceCharacter::M_PtrGetmovementInputVelocityDifference() {
	return reinterpret_cast<float*>((byte*)this + 784);
}
void UAnimInstanceCharacter::M_SetmovementInputVelocityDifference(const float& value) {
	Write((byte*)this + 784, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}