#include "../SDK.h"
#include "ChaosPhysicalMaterial.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Friction
// Declaration: float Friction
float UChaosPhysicalMaterial::M_GetFriction() const {
	return Read<float>((byte*)this + 40);
}
float* UChaosPhysicalMaterial::M_PtrGetFriction() {
	return reinterpret_cast<float*>((byte*)this + 40);
}
void UChaosPhysicalMaterial::M_SetFriction(const float& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of StaticFriction
// Declaration: float StaticFriction
float UChaosPhysicalMaterial::M_GetStaticFriction() const {
	return Read<float>((byte*)this + 44);
}
float* UChaosPhysicalMaterial::M_PtrGetStaticFriction() {
	return reinterpret_cast<float*>((byte*)this + 44);
}
void UChaosPhysicalMaterial::M_SetStaticFriction(const float& value) {
	Write((byte*)this + 44, value);
}
// Member Getter and Setter of Restitution
// Declaration: float Restitution
float UChaosPhysicalMaterial::M_GetRestitution() const {
	return Read<float>((byte*)this + 48);
}
float* UChaosPhysicalMaterial::M_PtrGetRestitution() {
	return reinterpret_cast<float*>((byte*)this + 48);
}
void UChaosPhysicalMaterial::M_SetRestitution(const float& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of LinearEtherDrag
// Declaration: float LinearEtherDrag
float UChaosPhysicalMaterial::M_GetLinearEtherDrag() const {
	return Read<float>((byte*)this + 52);
}
float* UChaosPhysicalMaterial::M_PtrGetLinearEtherDrag() {
	return reinterpret_cast<float*>((byte*)this + 52);
}
void UChaosPhysicalMaterial::M_SetLinearEtherDrag(const float& value) {
	Write((byte*)this + 52, value);
}
// Member Getter and Setter of AngularEtherDrag
// Declaration: float AngularEtherDrag
float UChaosPhysicalMaterial::M_GetAngularEtherDrag() const {
	return Read<float>((byte*)this + 56);
}
float* UChaosPhysicalMaterial::M_PtrGetAngularEtherDrag() {
	return reinterpret_cast<float*>((byte*)this + 56);
}
void UChaosPhysicalMaterial::M_SetAngularEtherDrag(const float& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of SleepingLinearVelocityThreshold
// Declaration: float SleepingLinearVelocityThreshold
float UChaosPhysicalMaterial::M_GetSleepingLinearVelocityThreshold() const {
	return Read<float>((byte*)this + 60);
}
float* UChaosPhysicalMaterial::M_PtrGetSleepingLinearVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 60);
}
void UChaosPhysicalMaterial::M_SetSleepingLinearVelocityThreshold(const float& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of SleepingAngularVelocityThreshold
// Declaration: float SleepingAngularVelocityThreshold
float UChaosPhysicalMaterial::M_GetSleepingAngularVelocityThreshold() const {
	return Read<float>((byte*)this + 64);
}
float* UChaosPhysicalMaterial::M_PtrGetSleepingAngularVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 64);
}
void UChaosPhysicalMaterial::M_SetSleepingAngularVelocityThreshold(const float& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}