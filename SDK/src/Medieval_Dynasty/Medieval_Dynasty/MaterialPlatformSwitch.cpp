#include "../SDK.h"
#include "MaterialPlatformSwitch.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Default
// Declaration: struct FExpressionInput Default
struct FExpressionInput UMaterialPlatformSwitch::M_GetDefault() const {
	return Read<struct FExpressionInput>((byte*)this + 80);
}
struct FExpressionInput* UMaterialPlatformSwitch::M_PtrGetDefault() {
	return reinterpret_cast<struct FExpressionInput*>((byte*)this + 80);
}
void UMaterialPlatformSwitch::M_SetDefault(const struct FExpressionInput& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of Inputs
// Declaration: struct FExpressionInput Inputs[6]
struct FExpressionInput UMaterialPlatformSwitch::M_GetInputs() const {
	return Read<struct FExpressionInput>((byte*)this + 100);
}
struct FExpressionInput* UMaterialPlatformSwitch::M_PtrGetInputs() {
	return reinterpret_cast<struct FExpressionInput*>((byte*)this + 100);
}
void UMaterialPlatformSwitch::M_SetInputs(const struct FExpressionInput& value) {
	Write((byte*)this + 100, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}