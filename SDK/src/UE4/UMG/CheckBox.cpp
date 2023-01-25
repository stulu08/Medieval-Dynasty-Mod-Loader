#include "../SDK.h"
#include "CheckBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CheckedState
// Declaration: ECheckBoxState CheckedState
ECheckBoxState UCheckBox::M_GetCheckedState() const {
	return Read<ECheckBoxState>((byte*)this + 288);
}
ECheckBoxState* UCheckBox::M_PtrGetCheckedState() {
	return reinterpret_cast<ECheckBoxState*>((byte*)this + 288);
}
void UCheckBox::M_SetCheckedState(const ECheckBoxState& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of CheckedStateDelegate
// Declaration: struct FScriptDelegate CheckedStateDelegate
struct FScriptDelegate UCheckBox::M_GetCheckedStateDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 292);
}
struct FScriptDelegate* UCheckBox::M_PtrGetCheckedStateDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 292);
}
void UCheckBox::M_SetCheckedStateDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 292, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FCheckBoxStyle WidgetStyle
struct FCheckBoxStyle UCheckBox::M_GetWidgetStyle() const {
	return Read<struct FCheckBoxStyle>((byte*)this + 312);
}
struct FCheckBoxStyle* UCheckBox::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FCheckBoxStyle*>((byte*)this + 312);
}
void UCheckBox::M_SetWidgetStyle(const struct FCheckBoxStyle& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UCheckBox::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 1720);
}
class USlateWidgetStyleAsset** UCheckBox::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 1720);
}
void UCheckBox::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of UncheckedImage
// Declaration: class USlateBrushAsset* UncheckedImage
class USlateBrushAsset* UCheckBox::M_GetUncheckedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1728);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUncheckedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1728);
}
void UCheckBox::M_SetUncheckedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of UncheckedHoveredImage
// Declaration: class USlateBrushAsset* UncheckedHoveredImage
class USlateBrushAsset* UCheckBox::M_GetUncheckedHoveredImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1736);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUncheckedHoveredImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1736);
}
void UCheckBox::M_SetUncheckedHoveredImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1736, value);
}
// Member Getter and Setter of UncheckedPressedImage
// Declaration: class USlateBrushAsset* UncheckedPressedImage
class USlateBrushAsset* UCheckBox::M_GetUncheckedPressedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1744);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUncheckedPressedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1744);
}
void UCheckBox::M_SetUncheckedPressedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of CheckedImage
// Declaration: class USlateBrushAsset* CheckedImage
class USlateBrushAsset* UCheckBox::M_GetCheckedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1752);
}
class USlateBrushAsset** UCheckBox::M_PtrGetCheckedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1752);
}
void UCheckBox::M_SetCheckedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1752, value);
}
// Member Getter and Setter of CheckedHoveredImage
// Declaration: class USlateBrushAsset* CheckedHoveredImage
class USlateBrushAsset* UCheckBox::M_GetCheckedHoveredImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1760);
}
class USlateBrushAsset** UCheckBox::M_PtrGetCheckedHoveredImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1760);
}
void UCheckBox::M_SetCheckedHoveredImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of CheckedPressedImage
// Declaration: class USlateBrushAsset* CheckedPressedImage
class USlateBrushAsset* UCheckBox::M_GetCheckedPressedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1768);
}
class USlateBrushAsset** UCheckBox::M_PtrGetCheckedPressedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1768);
}
void UCheckBox::M_SetCheckedPressedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of UndeterminedImage
// Declaration: class USlateBrushAsset* UndeterminedImage
class USlateBrushAsset* UCheckBox::M_GetUndeterminedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1776);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUndeterminedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1776);
}
void UCheckBox::M_SetUndeterminedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of UndeterminedHoveredImage
// Declaration: class USlateBrushAsset* UndeterminedHoveredImage
class USlateBrushAsset* UCheckBox::M_GetUndeterminedHoveredImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1784);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUndeterminedHoveredImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1784);
}
void UCheckBox::M_SetUndeterminedHoveredImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of UndeterminedPressedImage
// Declaration: class USlateBrushAsset* UndeterminedPressedImage
class USlateBrushAsset* UCheckBox::M_GetUndeterminedPressedImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 1792);
}
class USlateBrushAsset** UCheckBox::M_PtrGetUndeterminedPressedImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 1792);
}
void UCheckBox::M_SetUndeterminedPressedImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UCheckBox::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 1800);
}
TEnumAsByte<EHorizontalAlignment>* UCheckBox::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 1800);
}
void UCheckBox::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UCheckBox::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 1804);
}
struct FMargin* UCheckBox::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 1804);
}
void UCheckBox::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 1804, value);
}
// Member Getter and Setter of BorderBackgroundColor
// Declaration: struct FSlateColor BorderBackgroundColor
struct FSlateColor UCheckBox::M_GetBorderBackgroundColor() const {
	return Read<struct FSlateColor>((byte*)this + 1824);
}
struct FSlateColor* UCheckBox::M_PtrGetBorderBackgroundColor() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 1824);
}
void UCheckBox::M_SetBorderBackgroundColor(const struct FSlateColor& value) {
	Write((byte*)this + 1824, value);
}
// Member Getter and Setter of ClickMethod
// Declaration: TEnumAsByte<EButtonClickMethod> ClickMethod
TEnumAsByte<EButtonClickMethod> UCheckBox::M_GetClickMethod() const {
	return Read<TEnumAsByte<EButtonClickMethod>>((byte*)this + 1864);
}
TEnumAsByte<EButtonClickMethod>* UCheckBox::M_PtrGetClickMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonClickMethod>*>((byte*)this + 1864);
}
void UCheckBox::M_SetClickMethod(const TEnumAsByte<EButtonClickMethod>& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of TouchMethod
// Declaration: TEnumAsByte<EButtonTouchMethod> TouchMethod
TEnumAsByte<EButtonTouchMethod> UCheckBox::M_GetTouchMethod() const {
	return Read<TEnumAsByte<EButtonTouchMethod>>((byte*)this + 1865);
}
TEnumAsByte<EButtonTouchMethod>* UCheckBox::M_PtrGetTouchMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonTouchMethod>*>((byte*)this + 1865);
}
void UCheckBox::M_SetTouchMethod(const TEnumAsByte<EButtonTouchMethod>& value) {
	Write((byte*)this + 1865, value);
}
// Member Getter and Setter of PressMethod
// Declaration: TEnumAsByte<EButtonPressMethod> PressMethod
TEnumAsByte<EButtonPressMethod> UCheckBox::M_GetPressMethod() const {
	return Read<TEnumAsByte<EButtonPressMethod>>((byte*)this + 1866);
}
TEnumAsByte<EButtonPressMethod>* UCheckBox::M_PtrGetPressMethod() {
	return reinterpret_cast<TEnumAsByte<EButtonPressMethod>*>((byte*)this + 1866);
}
void UCheckBox::M_SetPressMethod(const TEnumAsByte<EButtonPressMethod>& value) {
	Write((byte*)this + 1866, value);
}
// Member Getter and Setter of IsFocusable
// Declaration: bool IsFocusable
bool UCheckBox::M_GetIsFocusable() const {
	return Read<bool>((byte*)this + 1867);
}
bool* UCheckBox::M_PtrGetIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 1867);
}
void UCheckBox::M_SetIsFocusable(const bool& value) {
	Write((byte*)this + 1867, value);
}
// Member Getter and Setter of OnCheckStateChanged
// Declaration: TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature> OnCheckStateChanged
TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature> UCheckBox::M_GetOnCheckStateChanged() const {
	return Read<TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>>((byte*)this + 1872);
}
TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>* UCheckBox::M_PtrGetOnCheckStateChanged() {
	return reinterpret_cast<TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>*>((byte*)this + 1872);
}
void UCheckBox::M_SetOnCheckStateChanged(const TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>& value) {
	Write((byte*)this + 1872, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.CheckBox.GetCheckedState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: ECheckBoxState	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ECheckBoxState UCheckBox::GetCheckedState() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	struct UCheckBox_GetCheckedState_Params {
		ECheckBoxState ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_GetCheckedState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CheckBox.IsChecked
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCheckBox::IsChecked() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	struct UCheckBox_IsChecked_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_IsChecked_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CheckBox.IsPressed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCheckBox::IsPressed() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	struct UCheckBox_IsPressed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_IsPressed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CheckBox.SetCheckedState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InCheckedState	Type: ECheckBoxState	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	struct UCheckBox_SetCheckedState_Params {
		ECheckBoxState InCheckedState;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CheckBox.SetClickMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClickMethod	Type: TEnumAsByte<EButtonClickMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheckBox::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetClickMethod");

	struct UCheckBox_SetClickMethod_Params {
		TEnumAsByte<EButtonClickMethod> InClickMethod;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CheckBox.SetIsChecked
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InIsChecked	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheckBox::SetIsChecked(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	struct UCheckBox_SetIsChecked_Params {
		bool InIsChecked;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CheckBox.SetPressMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPressMethod	Type: TEnumAsByte<EButtonPressMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheckBox::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetPressMethod");

	struct UCheckBox_SetPressMethod_Params {
		TEnumAsByte<EButtonPressMethod> InPressMethod;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CheckBox.SetTouchMethod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTouchMethod	Type: TEnumAsByte<EButtonTouchMethod>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheckBox::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetTouchMethod");

	struct UCheckBox_SetTouchMethod_Params {
		TEnumAsByte<EButtonTouchMethod> InTouchMethod;			//Offset: 0 | ElementSize: 1
	};
	UCheckBox_SetTouchMethod_Params params;
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