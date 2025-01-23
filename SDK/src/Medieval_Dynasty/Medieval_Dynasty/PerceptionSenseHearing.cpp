#include "../SDK.h"
#include "PerceptionSenseHearing.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Range
// Declaration: float Range
float UPerceptionSenseHearing::M_GetRange() const {
	return Read<float>((byte*)this + 168);
}
float* UPerceptionSenseHearing::M_PtrGetRange() {
	return reinterpret_cast<float*>((byte*)this + 168);
}
void UPerceptionSenseHearing::M_SetRange(const float& value) {
	Write((byte*)this + 168, value);
}
// Member Getter and Setter of debugShowSenseArea
// Declaration: bool debugShowSenseArea
bool UPerceptionSenseHearing::M_GetdebugShowSenseArea() const {
	return Read<bool>((byte*)this + 172);
}
bool* UPerceptionSenseHearing::M_PtrGetdebugShowSenseArea() {
	return reinterpret_cast<bool*>((byte*)this + 172);
}
void UPerceptionSenseHearing::M_SetdebugShowSenseArea(const bool& value) {
	Write((byte*)this + 172, value);
}
// Member Getter and Setter of debugShowSensedCheckLocations
// Declaration: bool debugShowSensedCheckLocations
bool UPerceptionSenseHearing::M_GetdebugShowSensedCheckLocations() const {
	return Read<bool>((byte*)this + 173);
}
bool* UPerceptionSenseHearing::M_PtrGetdebugShowSensedCheckLocations() {
	return reinterpret_cast<bool*>((byte*)this + 173);
}
void UPerceptionSenseHearing::M_SetdebugShowSensedCheckLocations(const bool& value) {
	Write((byte*)this + 173, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}