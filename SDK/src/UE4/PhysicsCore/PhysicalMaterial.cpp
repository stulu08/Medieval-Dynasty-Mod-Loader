#include "../SDK.h"
#include "PhysicalMaterial.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Friction
// Declaration: float Friction
float UPhysicalMaterial::M_GetFriction() const {
	return Read<float>((byte*)this + 40);
}
float* UPhysicalMaterial::M_PtrGetFriction() {
	return reinterpret_cast<float*>((byte*)this + 40);
}
void UPhysicalMaterial::M_SetFriction(const float& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of StaticFriction
// Declaration: float StaticFriction
float UPhysicalMaterial::M_GetStaticFriction() const {
	return Read<float>((byte*)this + 44);
}
float* UPhysicalMaterial::M_PtrGetStaticFriction() {
	return reinterpret_cast<float*>((byte*)this + 44);
}
void UPhysicalMaterial::M_SetStaticFriction(const float& value) {
	Write((byte*)this + 44, value);
}
// Member Getter and Setter of FrictionCombineMode
// Declaration: TEnumAsByte<EFrictionCombineMode> FrictionCombineMode
TEnumAsByte<EFrictionCombineMode> UPhysicalMaterial::M_GetFrictionCombineMode() const {
	return Read<TEnumAsByte<EFrictionCombineMode>>((byte*)this + 48);
}
TEnumAsByte<EFrictionCombineMode>* UPhysicalMaterial::M_PtrGetFrictionCombineMode() {
	return reinterpret_cast<TEnumAsByte<EFrictionCombineMode>*>((byte*)this + 48);
}
void UPhysicalMaterial::M_SetFrictionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of bOverrideFrictionCombineMode
// Declaration: bool bOverrideFrictionCombineMode
bool UPhysicalMaterial::M_GetbOverrideFrictionCombineMode() const {
	return Read<bool>((byte*)this + 49);
}
bool* UPhysicalMaterial::M_PtrGetbOverrideFrictionCombineMode() {
	return reinterpret_cast<bool*>((byte*)this + 49);
}
void UPhysicalMaterial::M_SetbOverrideFrictionCombineMode(const bool& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of Restitution
// Declaration: float Restitution
float UPhysicalMaterial::M_GetRestitution() const {
	return Read<float>((byte*)this + 52);
}
float* UPhysicalMaterial::M_PtrGetRestitution() {
	return reinterpret_cast<float*>((byte*)this + 52);
}
void UPhysicalMaterial::M_SetRestitution(const float& value) {
	Write((byte*)this + 52, value);
}
// Member Getter and Setter of RestitutionCombineMode
// Declaration: TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode
TEnumAsByte<EFrictionCombineMode> UPhysicalMaterial::M_GetRestitutionCombineMode() const {
	return Read<TEnumAsByte<EFrictionCombineMode>>((byte*)this + 56);
}
TEnumAsByte<EFrictionCombineMode>* UPhysicalMaterial::M_PtrGetRestitutionCombineMode() {
	return reinterpret_cast<TEnumAsByte<EFrictionCombineMode>*>((byte*)this + 56);
}
void UPhysicalMaterial::M_SetRestitutionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of bOverrideRestitutionCombineMode
// Declaration: bool bOverrideRestitutionCombineMode
bool UPhysicalMaterial::M_GetbOverrideRestitutionCombineMode() const {
	return Read<bool>((byte*)this + 57);
}
bool* UPhysicalMaterial::M_PtrGetbOverrideRestitutionCombineMode() {
	return reinterpret_cast<bool*>((byte*)this + 57);
}
void UPhysicalMaterial::M_SetbOverrideRestitutionCombineMode(const bool& value) {
	Write((byte*)this + 57, value);
}
// Member Getter and Setter of Density
// Declaration: float Density
float UPhysicalMaterial::M_GetDensity() const {
	return Read<float>((byte*)this + 60);
}
float* UPhysicalMaterial::M_PtrGetDensity() {
	return reinterpret_cast<float*>((byte*)this + 60);
}
void UPhysicalMaterial::M_SetDensity(const float& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of SleepLinearVelocityThreshold
// Declaration: float SleepLinearVelocityThreshold
float UPhysicalMaterial::M_GetSleepLinearVelocityThreshold() const {
	return Read<float>((byte*)this + 64);
}
float* UPhysicalMaterial::M_PtrGetSleepLinearVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 64);
}
void UPhysicalMaterial::M_SetSleepLinearVelocityThreshold(const float& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of SleepAngularVelocityThreshold
// Declaration: float SleepAngularVelocityThreshold
float UPhysicalMaterial::M_GetSleepAngularVelocityThreshold() const {
	return Read<float>((byte*)this + 68);
}
float* UPhysicalMaterial::M_PtrGetSleepAngularVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 68);
}
void UPhysicalMaterial::M_SetSleepAngularVelocityThreshold(const float& value) {
	Write((byte*)this + 68, value);
}
// Member Getter and Setter of SleepCounterThreshold
// Declaration: int32_t SleepCounterThreshold
int32_t UPhysicalMaterial::M_GetSleepCounterThreshold() const {
	return Read<int32_t>((byte*)this + 72);
}
int32_t* UPhysicalMaterial::M_PtrGetSleepCounterThreshold() {
	return reinterpret_cast<int32_t*>((byte*)this + 72);
}
void UPhysicalMaterial::M_SetSleepCounterThreshold(const int32_t& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of RaiseMassToPower
// Declaration: float RaiseMassToPower
float UPhysicalMaterial::M_GetRaiseMassToPower() const {
	return Read<float>((byte*)this + 76);
}
float* UPhysicalMaterial::M_PtrGetRaiseMassToPower() {
	return reinterpret_cast<float*>((byte*)this + 76);
}
void UPhysicalMaterial::M_SetRaiseMassToPower(const float& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of DestructibleDamageThresholdScale
// Declaration: float DestructibleDamageThresholdScale
float UPhysicalMaterial::M_GetDestructibleDamageThresholdScale() const {
	return Read<float>((byte*)this + 80);
}
float* UPhysicalMaterial::M_PtrGetDestructibleDamageThresholdScale() {
	return reinterpret_cast<float*>((byte*)this + 80);
}
void UPhysicalMaterial::M_SetDestructibleDamageThresholdScale(const float& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of PhysicalMaterialProperty
// Declaration: class UPhysicalMaterialPropertyBase* PhysicalMaterialProperty
class UPhysicalMaterialPropertyBase* UPhysicalMaterial::M_GetPhysicalMaterialProperty() const {
	return Read<class UPhysicalMaterialPropertyBase*>((byte*)this + 88);
}
class UPhysicalMaterialPropertyBase** UPhysicalMaterial::M_PtrGetPhysicalMaterialProperty() {
	return reinterpret_cast<class UPhysicalMaterialPropertyBase**>((byte*)this + 88);
}
void UPhysicalMaterial::M_SetPhysicalMaterialProperty(const class UPhysicalMaterialPropertyBase*& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of SurfaceType
// Declaration: TEnumAsByte<EPhysicalSurface> SurfaceType
TEnumAsByte<EPhysicalSurface> UPhysicalMaterial::M_GetSurfaceType() const {
	return Read<TEnumAsByte<EPhysicalSurface>>((byte*)this + 96);
}
TEnumAsByte<EPhysicalSurface>* UPhysicalMaterial::M_PtrGetSurfaceType() {
	return reinterpret_cast<TEnumAsByte<EPhysicalSurface>*>((byte*)this + 96);
}
void UPhysicalMaterial::M_SetSurfaceType(const TEnumAsByte<EPhysicalSurface>& value) {
	Write((byte*)this + 96, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}