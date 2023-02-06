#include "../SDK.h"
#include "CheckBoxWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CheckBoxStyle
// Declaration: struct FCheckBoxStyle CheckBoxStyle
struct FCheckBoxStyle UCheckBoxWidgetStyle::M_GetCheckBoxStyle() const {
	return Read<struct FCheckBoxStyle>((byte*)this + 48);
}
struct FCheckBoxStyle* UCheckBoxWidgetStyle::M_PtrGetCheckBoxStyle() {
	return reinterpret_cast<struct FCheckBoxStyle*>((byte*)this + 48);
}
void UCheckBoxWidgetStyle::M_SetCheckBoxStyle(const struct FCheckBoxStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}