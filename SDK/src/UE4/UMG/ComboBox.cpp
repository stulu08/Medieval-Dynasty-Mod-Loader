#include "../SDK.h"
#include "ComboBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Items
// Declaration: TArray<class UObject*> Items
TArray<class UObject*> UComboBox::M_GetItems() const {
	return Read<TArray<class UObject*>>((byte*)this + 264);
}
TArray<class UObject*>* UComboBox::M_PtrGetItems() {
	return reinterpret_cast<TArray<class UObject*>*>((byte*)this + 264);
}
void UComboBox::M_SetItems(const TArray<class UObject*>& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of OnGenerateWidgetEvent
// Declaration: struct FScriptDelegate OnGenerateWidgetEvent
struct FScriptDelegate UComboBox::M_GetOnGenerateWidgetEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 280);
}
struct FScriptDelegate* UComboBox::M_PtrGetOnGenerateWidgetEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 280);
}
void UComboBox::M_SetOnGenerateWidgetEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of bIsFocusable
// Declaration: bool bIsFocusable
bool UComboBox::M_GetbIsFocusable() const {
	return Read<bool>((byte*)this + 296);
}
bool* UComboBox::M_PtrGetbIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 296);
}
void UComboBox::M_SetbIsFocusable(const bool& value) {
	Write((byte*)this + 296, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}