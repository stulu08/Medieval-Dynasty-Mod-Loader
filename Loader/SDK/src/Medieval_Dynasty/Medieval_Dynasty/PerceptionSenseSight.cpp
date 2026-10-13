#include "../SDK.h"
#include "PerceptionSenseSight.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Range
// Declaration: float Range
float UPerceptionSenseSight::M_GetRange() const {
	return Read<float>((byte*)this + 384);
}
float* UPerceptionSenseSight::M_PtrGetRange() {
	return reinterpret_cast<float*>((byte*)this + 384);
}
void UPerceptionSenseSight::M_SetRange(const float& value) {
	Write((byte*)this + 384, value);
}
// Member Getter and Setter of Angle
// Declaration: float Angle
float UPerceptionSenseSight::M_GetAngle() const {
	return Read<float>((byte*)this + 388);
}
float* UPerceptionSenseSight::M_PtrGetAngle() {
	return reinterpret_cast<float*>((byte*)this + 388);
}
void UPerceptionSenseSight::M_SetAngle(const float& value) {
	Write((byte*)this + 388, value);
}
// Member Getter and Setter of isObstructionEnabled
// Declaration: bool isObstructionEnabled
bool UPerceptionSenseSight::M_GetisObstructionEnabled() const {
	return Read<bool>((byte*)this + 392);
}
bool* UPerceptionSenseSight::M_PtrGetisObstructionEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 392);
}
void UPerceptionSenseSight::M_SetisObstructionEnabled(const bool& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of obstructionCollisionChannel
// Declaration: TEnumAsByte<ECollisionChannel> obstructionCollisionChannel
TEnumAsByte<ECollisionChannel> UPerceptionSenseSight::M_GetobstructionCollisionChannel() const {
	return Read<TEnumAsByte<ECollisionChannel>>((byte*)this + 393);
}
TEnumAsByte<ECollisionChannel>* UPerceptionSenseSight::M_PtrGetobstructionCollisionChannel() {
	return reinterpret_cast<TEnumAsByte<ECollisionChannel>*>((byte*)this + 393);
}
void UPerceptionSenseSight::M_SetobstructionCollisionChannel(const TEnumAsByte<ECollisionChannel>& value) {
	Write((byte*)this + 393, value);
}
// Member Getter and Setter of obstructionCheckMaxInterval
// Declaration: float obstructionCheckMaxInterval
float UPerceptionSenseSight::M_GetobstructionCheckMaxInterval() const {
	return Read<float>((byte*)this + 396);
}
float* UPerceptionSenseSight::M_PtrGetobstructionCheckMaxInterval() {
	return reinterpret_cast<float*>((byte*)this + 396);
}
void UPerceptionSenseSight::M_SetobstructionCheckMaxInterval(const float& value) {
	Write((byte*)this + 396, value);
}
// Member Getter and Setter of debugShowSenseArea
// Declaration: bool debugShowSenseArea
bool UPerceptionSenseSight::M_GetdebugShowSenseArea() const {
	return Read<bool>((byte*)this + 400);
}
bool* UPerceptionSenseSight::M_PtrGetdebugShowSenseArea() {
	return reinterpret_cast<bool*>((byte*)this + 400);
}
void UPerceptionSenseSight::M_SetdebugShowSenseArea(const bool& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of debugShowSensedCheckLocations
// Declaration: bool debugShowSensedCheckLocations
bool UPerceptionSenseSight::M_GetdebugShowSensedCheckLocations() const {
	return Read<bool>((byte*)this + 401);
}
bool* UPerceptionSenseSight::M_PtrGetdebugShowSensedCheckLocations() {
	return reinterpret_cast<bool*>((byte*)this + 401);
}
void UPerceptionSenseSight::M_SetdebugShowSensedCheckLocations(const bool& value) {
	Write((byte*)this + 401, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}