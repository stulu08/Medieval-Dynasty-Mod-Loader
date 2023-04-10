#include "../SDK.h"
#include "AnimInstanceAnimal.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimalBase
// Declaration: class AAnimalBase* AnimalBase
class AAnimalBase* UAnimInstanceAnimal::M_GetAnimalBase() const {
	return Read<class AAnimalBase*>((byte*)this + 696);
}
class AAnimalBase** UAnimInstanceAnimal::M_PtrGetAnimalBase() {
	return reinterpret_cast<class AAnimalBase**>((byte*)this + 696);
}
void UAnimInstanceAnimal::M_SetAnimalBase(const class AAnimalBase*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector UAnimInstanceAnimal::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 704);
}
struct FVector* UAnimInstanceAnimal::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 704);
}
void UAnimInstanceAnimal::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of rawSpeed
// Declaration: float rawSpeed
float UAnimInstanceAnimal::M_GetrawSpeed() const {
	return Read<float>((byte*)this + 716);
}
float* UAnimInstanceAnimal::M_PtrGetrawSpeed() {
	return reinterpret_cast<float*>((byte*)this + 716);
}
void UAnimInstanceAnimal::M_SetrawSpeed(const float& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of speedCurve
// Declaration: class UCurveFloat* speedCurve
class UCurveFloat* UAnimInstanceAnimal::M_GetspeedCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 720);
}
class UCurveFloat** UAnimInstanceAnimal::M_PtrGetspeedCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 720);
}
void UAnimInstanceAnimal::M_SetspeedCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of Speed
// Declaration: float Speed
float UAnimInstanceAnimal::M_GetSpeed() const {
	return Read<float>((byte*)this + 728);
}
float* UAnimInstanceAnimal::M_PtrGetSpeed() {
	return reinterpret_cast<float*>((byte*)this + 728);
}
void UAnimInstanceAnimal::M_SetSpeed(const float& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool UAnimInstanceAnimal::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 732);
}
bool* UAnimInstanceAnimal::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 732);
}
void UAnimInstanceAnimal::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of sidewaysSpeed
// Declaration: float sidewaysSpeed
float UAnimInstanceAnimal::M_GetsidewaysSpeed() const {
	return Read<float>((byte*)this + 736);
}
float* UAnimInstanceAnimal::M_PtrGetsidewaysSpeed() {
	return reinterpret_cast<float*>((byte*)this + 736);
}
void UAnimInstanceAnimal::M_SetsidewaysSpeed(const float& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of sidewaysSpeedClamped
// Declaration: float sidewaysSpeedClamped
float UAnimInstanceAnimal::M_GetsidewaysSpeedClamped() const {
	return Read<float>((byte*)this + 740);
}
float* UAnimInstanceAnimal::M_PtrGetsidewaysSpeedClamped() {
	return reinterpret_cast<float*>((byte*)this + 740);
}
void UAnimInstanceAnimal::M_SetsidewaysSpeedClamped(const float& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of sidewaysSpeedClampValue
// Declaration: float sidewaysSpeedClampValue
float UAnimInstanceAnimal::M_GetsidewaysSpeedClampValue() const {
	return Read<float>((byte*)this + 744);
}
float* UAnimInstanceAnimal::M_PtrGetsidewaysSpeedClampValue() {
	return reinterpret_cast<float*>((byte*)this + 744);
}
void UAnimInstanceAnimal::M_SetsidewaysSpeedClampValue(const float& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of rightDirection
// Declaration: struct FVector rightDirection
struct FVector UAnimInstanceAnimal::M_GetrightDirection() const {
	return Read<struct FVector>((byte*)this + 748);
}
struct FVector* UAnimInstanceAnimal::M_PtrGetrightDirection() {
	return reinterpret_cast<struct FVector*>((byte*)this + 748);
}
void UAnimInstanceAnimal::M_SetrightDirection(const struct FVector& value) {
	Write((byte*)this + 748, value);
}
// Member Getter and Setter of isInverseKinematicsEnabled
// Declaration: bool isInverseKinematicsEnabled
bool UAnimInstanceAnimal::M_GetisInverseKinematicsEnabled() const {
	return Read<bool>((byte*)this + 760);
}
bool* UAnimInstanceAnimal::M_PtrGetisInverseKinematicsEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 760);
}
void UAnimInstanceAnimal::M_SetisInverseKinematicsEnabled(const bool& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of feetAlpha
// Declaration: float feetAlpha
float UAnimInstanceAnimal::M_GetfeetAlpha() const {
	return Read<float>((byte*)this + 764);
}
float* UAnimInstanceAnimal::M_PtrGetfeetAlpha() {
	return reinterpret_cast<float*>((byte*)this + 764);
}
void UAnimInstanceAnimal::M_SetfeetAlpha(const float& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of feetAlphaStationary
// Declaration: float feetAlphaStationary
float UAnimInstanceAnimal::M_GetfeetAlphaStationary() const {
	return Read<float>((byte*)this + 768);
}
float* UAnimInstanceAnimal::M_PtrGetfeetAlphaStationary() {
	return reinterpret_cast<float*>((byte*)this + 768);
}
void UAnimInstanceAnimal::M_SetfeetAlphaStationary(const float& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of feetAlphaMoving
// Declaration: float feetAlphaMoving
float UAnimInstanceAnimal::M_GetfeetAlphaMoving() const {
	return Read<float>((byte*)this + 772);
}
float* UAnimInstanceAnimal::M_PtrGetfeetAlphaMoving() {
	return reinterpret_cast<float*>((byte*)this + 772);
}
void UAnimInstanceAnimal::M_SetfeetAlphaMoving(const float& value) {
	Write((byte*)this + 772, value);
}
// Member Getter and Setter of pelvisOffsetZ
// Declaration: float pelvisOffsetZ
float UAnimInstanceAnimal::M_GetpelvisOffsetZ() const {
	return Read<float>((byte*)this + 776);
}
float* UAnimInstanceAnimal::M_PtrGetpelvisOffsetZ() {
	return reinterpret_cast<float*>((byte*)this + 776);
}
void UAnimInstanceAnimal::M_SetpelvisOffsetZ(const float& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of pelvisOffsetZStationary
// Declaration: float pelvisOffsetZStationary
float UAnimInstanceAnimal::M_GetpelvisOffsetZStationary() const {
	return Read<float>((byte*)this + 780);
}
float* UAnimInstanceAnimal::M_PtrGetpelvisOffsetZStationary() {
	return reinterpret_cast<float*>((byte*)this + 780);
}
void UAnimInstanceAnimal::M_SetpelvisOffsetZStationary(const float& value) {
	Write((byte*)this + 780, value);
}
// Member Getter and Setter of pelvisOffsetZMoving
// Declaration: float pelvisOffsetZMoving
float UAnimInstanceAnimal::M_GetpelvisOffsetZMoving() const {
	return Read<float>((byte*)this + 784);
}
float* UAnimInstanceAnimal::M_PtrGetpelvisOffsetZMoving() {
	return reinterpret_cast<float*>((byte*)this + 784);
}
void UAnimInstanceAnimal::M_SetpelvisOffsetZMoving(const float& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of chestDipUpSlopes
// Declaration: float chestDipUpSlopes
float UAnimInstanceAnimal::M_GetchestDipUpSlopes() const {
	return Read<float>((byte*)this + 788);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipUpSlopes() {
	return reinterpret_cast<float*>((byte*)this + 788);
}
void UAnimInstanceAnimal::M_SetchestDipUpSlopes(const float& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of chestDipUpSlopesStationary
// Declaration: float chestDipUpSlopesStationary
float UAnimInstanceAnimal::M_GetchestDipUpSlopesStationary() const {
	return Read<float>((byte*)this + 792);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipUpSlopesStationary() {
	return reinterpret_cast<float*>((byte*)this + 792);
}
void UAnimInstanceAnimal::M_SetchestDipUpSlopesStationary(const float& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of chestDipUpSlopesMoving
// Declaration: float chestDipUpSlopesMoving
float UAnimInstanceAnimal::M_GetchestDipUpSlopesMoving() const {
	return Read<float>((byte*)this + 796);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipUpSlopesMoving() {
	return reinterpret_cast<float*>((byte*)this + 796);
}
void UAnimInstanceAnimal::M_SetchestDipUpSlopesMoving(const float& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of chestDipDownSlopes
// Declaration: float chestDipDownSlopes
float UAnimInstanceAnimal::M_GetchestDipDownSlopes() const {
	return Read<float>((byte*)this + 800);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipDownSlopes() {
	return reinterpret_cast<float*>((byte*)this + 800);
}
void UAnimInstanceAnimal::M_SetchestDipDownSlopes(const float& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of chestDipDownSlopesStationary
// Declaration: float chestDipDownSlopesStationary
float UAnimInstanceAnimal::M_GetchestDipDownSlopesStationary() const {
	return Read<float>((byte*)this + 804);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipDownSlopesStationary() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void UAnimInstanceAnimal::M_SetchestDipDownSlopesStationary(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of chestDipDownSlopesMoving
// Declaration: float chestDipDownSlopesMoving
float UAnimInstanceAnimal::M_GetchestDipDownSlopesMoving() const {
	return Read<float>((byte*)this + 808);
}
float* UAnimInstanceAnimal::M_PtrGetchestDipDownSlopesMoving() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void UAnimInstanceAnimal::M_SetchestDipDownSlopesMoving(const float& value) {
	Write((byte*)this + 808, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}