#include "../SDK.h"
#include "AnimInstanceFlyingAnimal.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimalBase
// Declaration: class AAnimalBase* AnimalBase
class AAnimalBase* UAnimInstanceFlyingAnimal::M_GetAnimalBase() const {
	return Read<class AAnimalBase*>((byte*)this + 696);
}
class AAnimalBase** UAnimInstanceFlyingAnimal::M_PtrGetAnimalBase() {
	return reinterpret_cast<class AAnimalBase**>((byte*)this + 696);
}
void UAnimInstanceFlyingAnimal::M_SetAnimalBase(const class AAnimalBase*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector UAnimInstanceFlyingAnimal::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 704);
}
struct FVector* UAnimInstanceFlyingAnimal::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 704);
}
void UAnimInstanceFlyingAnimal::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of forwardDirection
// Declaration: struct FVector forwardDirection
struct FVector UAnimInstanceFlyingAnimal::M_GetforwardDirection() const {
	return Read<struct FVector>((byte*)this + 716);
}
struct FVector* UAnimInstanceFlyingAnimal::M_PtrGetforwardDirection() {
	return reinterpret_cast<struct FVector*>((byte*)this + 716);
}
void UAnimInstanceFlyingAnimal::M_SetforwardDirection(const struct FVector& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of Speed
// Declaration: float Speed
float UAnimInstanceFlyingAnimal::M_GetSpeed() const {
	return Read<float>((byte*)this + 728);
}
float* UAnimInstanceFlyingAnimal::M_PtrGetSpeed() {
	return reinterpret_cast<float*>((byte*)this + 728);
}
void UAnimInstanceFlyingAnimal::M_SetSpeed(const float& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of flyingInclinationX
// Declaration: float flyingInclinationX
float UAnimInstanceFlyingAnimal::M_GetflyingInclinationX() const {
	return Read<float>((byte*)this + 732);
}
float* UAnimInstanceFlyingAnimal::M_PtrGetflyingInclinationX() {
	return reinterpret_cast<float*>((byte*)this + 732);
}
void UAnimInstanceFlyingAnimal::M_SetflyingInclinationX(const float& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of flyingInclinationY
// Declaration: float flyingInclinationY
float UAnimInstanceFlyingAnimal::M_GetflyingInclinationY() const {
	return Read<float>((byte*)this + 736);
}
float* UAnimInstanceFlyingAnimal::M_PtrGetflyingInclinationY() {
	return reinterpret_cast<float*>((byte*)this + 736);
}
void UAnimInstanceFlyingAnimal::M_SetflyingInclinationY(const float& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of directionMultiplier
// Declaration: float directionMultiplier
float UAnimInstanceFlyingAnimal::M_GetdirectionMultiplier() const {
	return Read<float>((byte*)this + 740);
}
float* UAnimInstanceFlyingAnimal::M_PtrGetdirectionMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 740);
}
void UAnimInstanceFlyingAnimal::M_SetdirectionMultiplier(const float& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool UAnimInstanceFlyingAnimal::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 744);
}
bool* UAnimInstanceFlyingAnimal::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 744);
}
void UAnimInstanceFlyingAnimal::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of isGliding
// Declaration: bool isGliding
bool UAnimInstanceFlyingAnimal::M_GetisGliding() const {
	return Read<bool>((byte*)this + 745);
}
bool* UAnimInstanceFlyingAnimal::M_PtrGetisGliding() {
	return reinterpret_cast<bool*>((byte*)this + 745);
}
void UAnimInstanceFlyingAnimal::M_SetisGliding(const bool& value) {
	Write((byte*)this + 745, value);
}
// Member Getter and Setter of isLanding
// Declaration: bool isLanding
bool UAnimInstanceFlyingAnimal::M_GetisLanding() const {
	return Read<bool>((byte*)this + 746);
}
bool* UAnimInstanceFlyingAnimal::M_PtrGetisLanding() {
	return reinterpret_cast<bool*>((byte*)this + 746);
}
void UAnimInstanceFlyingAnimal::M_SetisLanding(const bool& value) {
	Write((byte*)this + 746, value);
}
// Member Getter and Setter of rotateBone
// Declaration: bool rotateBone
bool UAnimInstanceFlyingAnimal::M_GetrotateBone() const {
	return Read<bool>((byte*)this + 747);
}
bool* UAnimInstanceFlyingAnimal::M_PtrGetrotateBone() {
	return reinterpret_cast<bool*>((byte*)this + 747);
}
void UAnimInstanceFlyingAnimal::M_SetrotateBone(const bool& value) {
	Write((byte*)this + 747, value);
}
// Member Getter and Setter of flyingRotator
// Declaration: struct FRotator flyingRotator
struct FRotator UAnimInstanceFlyingAnimal::M_GetflyingRotator() const {
	return Read<struct FRotator>((byte*)this + 748);
}
struct FRotator* UAnimInstanceFlyingAnimal::M_PtrGetflyingRotator() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 748);
}
void UAnimInstanceFlyingAnimal::M_SetflyingRotator(const struct FRotator& value) {
	Write((byte*)this + 748, value);
}
// Member Getter and Setter of MovementMode
// Declaration: EBirdMovementMode MovementMode
EBirdMovementMode UAnimInstanceFlyingAnimal::M_GetMovementMode() const {
	return Read<EBirdMovementMode>((byte*)this + 760);
}
EBirdMovementMode* UAnimInstanceFlyingAnimal::M_PtrGetMovementMode() {
	return reinterpret_cast<EBirdMovementMode*>((byte*)this + 760);
}
void UAnimInstanceFlyingAnimal::M_SetMovementMode(const EBirdMovementMode& value) {
	Write((byte*)this + 760, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}