#include "../SDK.h"
#include "PanelSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Parent
// Declaration: class UPanelWidget* Parent
class UPanelWidget* UPanelSlot::M_GetParent() const {
	return Read<class UPanelWidget*>((byte*)this + 40);
}
class UPanelWidget** UPanelSlot::M_PtrGetParent() {
	return reinterpret_cast<class UPanelWidget**>((byte*)this + 40);
}
void UPanelSlot::M_SetParent(const class UPanelWidget*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Content
// Declaration: class UWidget* Content
class UWidget* UPanelSlot::M_GetContent() const {
	return Read<class UWidget*>((byte*)this + 48);
}
class UWidget** UPanelSlot::M_PtrGetContent() {
	return reinterpret_cast<class UWidget**>((byte*)this + 48);
}
void UPanelSlot::M_SetContent(const class UWidget*& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}