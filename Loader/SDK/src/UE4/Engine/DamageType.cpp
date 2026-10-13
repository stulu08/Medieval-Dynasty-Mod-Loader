#include "../SDK.h"
#include "DamageType.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bCausedByWorld
// Declaration: unsigned char bCausedByWorld : 1
unsigned char UDamageType::M_GetbCausedByWorld() const {
	return Read<unsigned char>((byte*)this + 40);
}
unsigned char* UDamageType::M_PtrGetbCausedByWorld() {
	return reinterpret_cast<unsigned char*>((byte*)this + 40);
}
void UDamageType::M_SetbCausedByWorld(const unsigned char& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bScaleMomentumByMass
// Declaration: unsigned char bScaleMomentumByMass : 1
unsigned char UDamageType::M_GetbScaleMomentumByMass() const {
	return Read<unsigned char>((byte*)this + 40);
}
unsigned char* UDamageType::M_PtrGetbScaleMomentumByMass() {
	return reinterpret_cast<unsigned char*>((byte*)this + 40);
}
void UDamageType::M_SetbScaleMomentumByMass(const unsigned char& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bRadialDamageVelChange
// Declaration: unsigned char bRadialDamageVelChange : 1
unsigned char UDamageType::M_GetbRadialDamageVelChange() const {
	return Read<unsigned char>((byte*)this + 40);
}
unsigned char* UDamageType::M_PtrGetbRadialDamageVelChange() {
	return reinterpret_cast<unsigned char*>((byte*)this + 40);
}
void UDamageType::M_SetbRadialDamageVelChange(const unsigned char& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of DamageImpulse
// Declaration: float DamageImpulse
float UDamageType::M_GetDamageImpulse() const {
	return Read<float>((byte*)this + 44);
}
float* UDamageType::M_PtrGetDamageImpulse() {
	return reinterpret_cast<float*>((byte*)this + 44);
}
void UDamageType::M_SetDamageImpulse(const float& value) {
	Write((byte*)this + 44, value);
}
// Member Getter and Setter of DestructibleImpulse
// Declaration: float DestructibleImpulse
float UDamageType::M_GetDestructibleImpulse() const {
	return Read<float>((byte*)this + 48);
}
float* UDamageType::M_PtrGetDestructibleImpulse() {
	return reinterpret_cast<float*>((byte*)this + 48);
}
void UDamageType::M_SetDestructibleImpulse(const float& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of DestructibleDamageSpreadScale
// Declaration: float DestructibleDamageSpreadScale
float UDamageType::M_GetDestructibleDamageSpreadScale() const {
	return Read<float>((byte*)this + 52);
}
float* UDamageType::M_PtrGetDestructibleDamageSpreadScale() {
	return reinterpret_cast<float*>((byte*)this + 52);
}
void UDamageType::M_SetDestructibleDamageSpreadScale(const float& value) {
	Write((byte*)this + 52, value);
}
// Member Getter and Setter of DamageFalloff
// Declaration: float DamageFalloff
float UDamageType::M_GetDamageFalloff() const {
	return Read<float>((byte*)this + 56);
}
float* UDamageType::M_PtrGetDamageFalloff() {
	return reinterpret_cast<float*>((byte*)this + 56);
}
void UDamageType::M_SetDamageFalloff(const float& value) {
	Write((byte*)this + 56, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}