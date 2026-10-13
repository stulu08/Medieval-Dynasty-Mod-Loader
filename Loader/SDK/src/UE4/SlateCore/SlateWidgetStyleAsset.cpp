#include "../SDK.h"
#include "SlateWidgetStyleAsset.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CustomStyle
// Declaration: class USlateWidgetStyleContainerBase* CustomStyle
class USlateWidgetStyleContainerBase* USlateWidgetStyleAsset::M_GetCustomStyle() const {
	return Read<class USlateWidgetStyleContainerBase*>((byte*)this + 40);
}
class USlateWidgetStyleContainerBase** USlateWidgetStyleAsset::M_PtrGetCustomStyle() {
	return reinterpret_cast<class USlateWidgetStyleContainerBase**>((byte*)this + 40);
}
void USlateWidgetStyleAsset::M_SetCustomStyle(const class USlateWidgetStyleContainerBase*& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}