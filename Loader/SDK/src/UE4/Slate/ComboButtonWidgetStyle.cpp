#include "../SDK.h"
#include "ComboButtonWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ComboButtonStyle
// Declaration: struct FComboButtonStyle ComboButtonStyle
struct FComboButtonStyle UComboButtonWidgetStyle::M_GetComboButtonStyle() const {
	return Read<struct FComboButtonStyle>((byte*)this + 48);
}
struct FComboButtonStyle* UComboButtonWidgetStyle::M_PtrGetComboButtonStyle() {
	return reinterpret_cast<struct FComboButtonStyle*>((byte*)this + 48);
}
void UComboButtonWidgetStyle::M_SetComboButtonStyle(const struct FComboButtonStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}