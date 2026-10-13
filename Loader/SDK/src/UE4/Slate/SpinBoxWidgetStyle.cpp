#include "../SDK.h"
#include "SpinBoxWidgetStyle.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SpinBoxStyle
// Declaration: struct FSpinBoxStyle SpinBoxStyle
struct FSpinBoxStyle USpinBoxWidgetStyle::M_GetSpinBoxStyle() const {
	return Read<struct FSpinBoxStyle>((byte*)this + 48);
}
struct FSpinBoxStyle* USpinBoxWidgetStyle::M_PtrGetSpinBoxStyle() {
	return reinterpret_cast<struct FSpinBoxStyle*>((byte*)this + 48);
}
void USpinBoxWidgetStyle::M_SetSpinBoxStyle(const struct FSpinBoxStyle& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}