#include "../SDK.h"
#include "WidgetTree.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of RootWidget
// Declaration: class UWidget* RootWidget
class UWidget* UWidgetTree::M_GetRootWidget() const {
	return Read<class UWidget*>((byte*)this + 40);
}
class UWidget** UWidgetTree::M_PtrGetRootWidget() {
	return reinterpret_cast<class UWidget**>((byte*)this + 40);
}
void UWidgetTree::M_SetRootWidget(const class UWidget*& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}