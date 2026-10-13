#include "../SDK.h"
#include "ScrollBarWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ScrollBarStyle
// Declaration: struct FScrollBarStyle ScrollBarStyle
struct FScrollBarStyle UScrollBarWidgetStyle::M_GetScrollBarStyle() const {
	return Read<struct FScrollBarStyle>((byte*)this + 48);
}
struct FScrollBarStyle* UScrollBarWidgetStyle::M_PtrGetScrollBarStyle() {
	return reinterpret_cast<struct FScrollBarStyle*>((byte*)this + 48);
}
void UScrollBarWidgetStyle::M_SetScrollBarStyle(const struct FScrollBarStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}