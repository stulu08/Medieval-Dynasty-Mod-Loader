#include "../SDK.h"
#include "ComboBoxWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ComboBoxStyle
// Declaration: struct FComboBoxStyle ComboBoxStyle
struct FComboBoxStyle UComboBoxWidgetStyle::M_GetComboBoxStyle() const {
	return Read<struct FComboBoxStyle>((byte*)this + 48);
}
struct FComboBoxStyle* UComboBoxWidgetStyle::M_PtrGetComboBoxStyle() {
	return reinterpret_cast<struct FComboBoxStyle*>((byte*)this + 48);
}
void UComboBoxWidgetStyle::M_SetComboBoxStyle(const struct FComboBoxStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}