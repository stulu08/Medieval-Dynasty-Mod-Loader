#include "../SDK.h"
#include "ButtonWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ButtonStyle
// Declaration: struct FButtonStyle ButtonStyle
struct FButtonStyle UButtonWidgetStyle::M_GetButtonStyle() const {
	return Read<struct FButtonStyle>((byte*)this + 48);
}
struct FButtonStyle* UButtonWidgetStyle::M_PtrGetButtonStyle() {
	return reinterpret_cast<struct FButtonStyle*>((byte*)this + 48);
}
void UButtonWidgetStyle::M_SetButtonStyle(const struct FButtonStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}