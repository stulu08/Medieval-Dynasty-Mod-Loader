#include "../SDK.h"
#include "EditableTextBoxWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EditableTextBoxStyle
// Declaration: struct FEditableTextBoxStyle EditableTextBoxStyle
struct FEditableTextBoxStyle UEditableTextBoxWidgetStyle::M_GetEditableTextBoxStyle() const {
	return Read<struct FEditableTextBoxStyle>((byte*)this + 48);
}
struct FEditableTextBoxStyle* UEditableTextBoxWidgetStyle::M_PtrGetEditableTextBoxStyle() {
	return reinterpret_cast<struct FEditableTextBoxStyle*>((byte*)this + 48);
}
void UEditableTextBoxWidgetStyle::M_SetEditableTextBoxStyle(const struct FEditableTextBoxStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}