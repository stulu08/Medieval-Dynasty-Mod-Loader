#include "../SDK.h"
#include "ScrollBoxWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ScrollBoxStyle
// Declaration: struct FScrollBoxStyle ScrollBoxStyle
struct FScrollBoxStyle UScrollBoxWidgetStyle::M_GetScrollBoxStyle() const {
	return Read<struct FScrollBoxStyle>((byte*)this + 48);
}
struct FScrollBoxStyle* UScrollBoxWidgetStyle::M_PtrGetScrollBoxStyle() {
	return reinterpret_cast<struct FScrollBoxStyle*>((byte*)this + 48);
}
void UScrollBoxWidgetStyle::M_SetScrollBoxStyle(const struct FScrollBoxStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}