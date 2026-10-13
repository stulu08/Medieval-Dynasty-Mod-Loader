#include "../SDK.h"
#include "WidgetAnimationDelegateBinding.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetAnimationDelegateBindings
// Declaration: TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings
TArray<struct FBlueprintWidgetAnimationDelegateBinding> UWidgetAnimationDelegateBinding::M_GetWidgetAnimationDelegateBindings() const {
	return Read<TArray<struct FBlueprintWidgetAnimationDelegateBinding>>((byte*)this + 40);
}
TArray<struct FBlueprintWidgetAnimationDelegateBinding>* UWidgetAnimationDelegateBinding::M_PtrGetWidgetAnimationDelegateBindings() {
	return reinterpret_cast<TArray<struct FBlueprintWidgetAnimationDelegateBinding>*>((byte*)this + 40);
}
void UWidgetAnimationDelegateBinding::M_SetWidgetAnimationDelegateBindings(const TArray<struct FBlueprintWidgetAnimationDelegateBinding>& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}