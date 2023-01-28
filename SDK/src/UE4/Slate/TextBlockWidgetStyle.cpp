#include "../SDK.h"
#include "TextBlockWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TextBlockStyle
// Declaration: struct FTextBlockStyle TextBlockStyle
struct FTextBlockStyle UTextBlockWidgetStyle::M_GetTextBlockStyle() const {
	return Read<struct FTextBlockStyle>((byte*)this + 48);
}
struct FTextBlockStyle* UTextBlockWidgetStyle::M_PtrGetTextBlockStyle() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 48);
}
void UTextBlockWidgetStyle::M_SetTextBlockStyle(const struct FTextBlockStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}