#include "../SDK.h"
#include "ProgressWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ProgressBarStyle
// Declaration: struct FProgressBarStyle ProgressBarStyle
struct FProgressBarStyle UProgressWidgetStyle::M_GetProgressBarStyle() const {
	return Read<struct FProgressBarStyle>((byte*)this + 48);
}
struct FProgressBarStyle* UProgressWidgetStyle::M_PtrGetProgressBarStyle() {
	return reinterpret_cast<struct FProgressBarStyle*>((byte*)this + 48);
}
void UProgressWidgetStyle::M_SetProgressBarStyle(const struct FProgressBarStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}