#include "../SDK.h"
#include "EditableTextWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EditableTextStyle
// Declaration: struct FEditableTextStyle EditableTextStyle
struct FEditableTextStyle UEditableTextWidgetStyle::M_GetEditableTextStyle() const {
	return Read<struct FEditableTextStyle>((byte*)this + 48);
}
struct FEditableTextStyle* UEditableTextWidgetStyle::M_PtrGetEditableTextStyle() {
	return reinterpret_cast<struct FEditableTextStyle*>((byte*)this + 48);
}
void UEditableTextWidgetStyle::M_SetEditableTextStyle(const struct FEditableTextStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}