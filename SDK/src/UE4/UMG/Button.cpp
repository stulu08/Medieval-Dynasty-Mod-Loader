#include "../SDK.h"
#include "Button.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UButton::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 288);
}
class USlateWidgetStyleAsset** UButton::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 288);
}
void UButton::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FButtonStyle WidgetStyle
struct FButtonStyle UButton::M_GetWidgetStyle() const {
	return Read<struct FButtonStyle>((byte*)this + 296);
}
struct FButtonStyle* UButton::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FButtonStyle*>((byte*)this + 296);
}
void UButton::M_SetWidgetStyle(const struct FButtonStyle& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FLinearColor ColorAndOpacity
struct FLinearColor UButton::M_GetColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 928);
}
struct FLinearColor* UButton::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 928);
}
void UButton::M_SetColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of BackgroundColor
// Declaration: struct FLinearColor BackgroundColor
struct FLinearColor UButton::M_GetBackgroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 944);
}
struct FLinearColor* UButton::M_PtrGetBackgroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 944);
}
void UButton::M_SetBackgroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of ClickMethod
// Declaration: TEnumAsByte<EButtonClickMethod> ClickMethod
TEnumAsByte<EButtonClickMethod> UButton::M_GetClickMethod() const {
	return Read<TEnumAsByte<EButtonClickMethod>>((byte*)this + 960);
}
TEnumAsByte<EButtonClickMethod>* UButton::M_PtrGetClickMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonClickMethod>*>((byte*)this + 960);
}
void UButton::M_SetClickMethod(const TEnumAsByte<EButtonClickMethod>& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of TouchMethod
// Declaration: TEnumAsByte<EButtonTouchMethod> TouchMethod
TEnumAsByte<EButtonTouchMethod> UButton::M_GetTouchMethod() const {
	return Read<TEnumAsByte<EButtonTouchMethod>>((byte*)this + 961);
}
TEnumAsByte<EButtonTouchMethod>* UButton::M_PtrGetTouchMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonTouchMethod>*>((byte*)this + 961);
}
void UButton::M_SetTouchMethod(const TEnumAsByte<EButtonTouchMethod>& value) {
	Write((byte*)this + 961, value);
}
// Member Getter and Setter of PressMethod
// Declaration: TEnumAsByte<EButtonPressMethod> PressMethod
TEnumAsByte<EButtonPressMethod> UButton::M_GetPressMethod() const {
	return Read<TEnumAsByte<EButtonPressMethod>>((byte*)this + 962);
}
TEnumAsByte<EButtonPressMethod>* UButton::M_PtrGetPressMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonPressMethod>*>((byte*)this + 962);
}
void UButton::M_SetPressMethod(const TEnumAsByte<EButtonPressMethod>& value) {
	Write((byte*)this + 962, value);
}
// Member Getter and Setter of IsFocusable
// Declaration: bool IsFocusable
bool UButton::M_GetIsFocusable() const {
	return Read<bool>((byte*)this + 963);
}
bool* UButton::M_PtrGetIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 963);
}
void UButton::M_SetIsFocusable(const bool& value) {
	Write((byte*)this + 963, value);
}
// Member Getter and Setter of OnClicked
// Declaration: TAssetPtr<class FOnButtonClickedEvent__DelegateSignature> OnClicked
TAssetPtr<class FOnButtonClickedEvent__DelegateSignature> UButton::M_GetOnClicked() const {
	return Read<TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>>((byte*)this + 968);
}
TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>* UButton::M_PtrGetOnClicked() {
	return reinterpret_cast<TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>*>((byte*)this + 968);
}
void UButton::M_SetOnClicked(const TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of OnPressed
// Declaration: TAssetPtr<class FOnButtonPressedEvent__DelegateSignature> OnPressed
TAssetPtr<class FOnButtonPressedEvent__DelegateSignature> UButton::M_GetOnPressed() const {
	return Read<TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>>((byte*)this + 984);
}
TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>* UButton::M_PtrGetOnPressed() {
	return reinterpret_cast<TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>*>((byte*)this + 984);
}
void UButton::M_SetOnPressed(const TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of OnReleased
// Declaration: TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature> OnReleased
TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature> UButton::M_GetOnReleased() const {
	return Read<TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>>((byte*)this + 1000);
}
TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>* UButton::M_PtrGetOnReleased() {
	return reinterpret_cast<TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>*>((byte*)this + 1000);
}
void UButton::M_SetOnReleased(const TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of OnHovered
// Declaration: TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> OnHovered
TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> UButton::M_GetOnHovered() const {
	return Read<TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>>((byte*)this + 1016);
}
TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>* UButton::M_PtrGetOnHovered() {
	return reinterpret_cast<TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>*>((byte*)this + 1016);
}
void UButton::M_SetOnHovered(const TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of OnUnhovered
// Declaration: TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> OnUnhovered
TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> UButton::M_GetOnUnhovered() const {
	return Read<TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>>((byte*)this + 1032);
}
TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>* UButton::M_PtrGetOnUnhovered() {
	return reinterpret_cast<TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>*>((byte*)this + 1032);
}
void UButton::M_SetOnUnhovered(const TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>& value) {
	Write((byte*)this + 1032, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Button.IsPressed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UButton::IsPressed() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	struct UButton_IsPressed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UButton_IsPressed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Button.SetBackgroundColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InBackgroundColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetBackgroundColor(struct FLinearColor InBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	struct UButton_SetBackgroundColor_Params {
		struct FLinearColor InBackgroundColor;			//Offset: 0 | ElementSize: 16
	};
	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Button.SetClickMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClickMethod	Type: TEnumAsByte<EButtonClickMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	struct UButton_SetClickMethod_Params {
		TEnumAsByte<EButtonClickMethod> InClickMethod;			//Offset: 0 | ElementSize: 1
	};
	UButton_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Button.SetColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	struct UButton_SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Button.SetPressMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPressMethod	Type: TEnumAsByte<EButtonPressMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	struct UButton_SetPressMethod_Params {
		TEnumAsByte<EButtonPressMethod> InPressMethod;			//Offset: 0 | ElementSize: 1
	};
	UButton_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Button.SetStyle
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InStyle	Type: struct FButtonStyle	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetStyle(const struct FButtonStyle& InStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	struct UButton_SetStyle_Params {
		struct FButtonStyle InStyle;			//Offset: 0 | ElementSize: 632
	};
	UButton_SetStyle_Params params;
	params.InStyle = InStyle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Button.SetTouchMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTouchMethod	Type: TEnumAsByte<EButtonTouchMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	struct UButton_SetTouchMethod_Params {
		TEnumAsByte<EButtonTouchMethod> InTouchMethod;			//Offset: 0 | ElementSize: 1
	};
	UButton_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}