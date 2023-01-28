#include "../SDK.h"
#include "EditableTextBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText UEditableTextBox::M_GetText() const {
	return Read<struct FText>((byte*)this + 264);
}
struct FText* UEditableTextBox::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 264);
}
void UEditableTextBox::M_SetText(const struct FText& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of TextDelegate
// Declaration: struct FScriptDelegate TextDelegate
struct FScriptDelegate UEditableTextBox::M_GetTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 288);
}
struct FScriptDelegate* UEditableTextBox::M_PtrGetTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 288);
}
void UEditableTextBox::M_SetTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FEditableTextBoxStyle WidgetStyle
struct FEditableTextBoxStyle UEditableTextBox::M_GetWidgetStyle() const {
	return Read<struct FEditableTextBoxStyle>((byte*)this + 304);
}
struct FEditableTextBoxStyle* UEditableTextBox::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FEditableTextBoxStyle*>((byte*)this + 304);
}
void UEditableTextBox::M_SetWidgetStyle(const struct FEditableTextBoxStyle& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UEditableTextBox::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 2344);
}
class USlateWidgetStyleAsset** UEditableTextBox::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 2344);
}
void UEditableTextBox::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 2344, value);
}
// Member Getter and Setter of HintText
// Declaration: struct FText HintText
struct FText UEditableTextBox::M_GetHintText() const {
	return Read<struct FText>((byte*)this + 2352);
}
struct FText* UEditableTextBox::M_PtrGetHintText() {
	return reinterpret_cast<struct FText*>((byte*)this + 2352);
}
void UEditableTextBox::M_SetHintText(const struct FText& value) {
	Write((byte*)this + 2352, value);
}
// Member Getter and Setter of HintTextDelegate
// Declaration: struct FScriptDelegate HintTextDelegate
struct FScriptDelegate UEditableTextBox::M_GetHintTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 2376);
}
struct FScriptDelegate* UEditableTextBox::M_PtrGetHintTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 2376);
}
void UEditableTextBox::M_SetHintTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 2376, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UEditableTextBox::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 2392);
}
struct FSlateFontInfo* UEditableTextBox::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 2392);
}
void UEditableTextBox::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 2392, value);
}
// Member Getter and Setter of ForegroundColor
// Declaration: struct FLinearColor ForegroundColor
struct FLinearColor UEditableTextBox::M_GetForegroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 2480);
}
struct FLinearColor* UEditableTextBox::M_PtrGetForegroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 2480);
}
void UEditableTextBox::M_SetForegroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 2480, value);
}
// Member Getter and Setter of BackgroundColor
// Declaration: struct FLinearColor BackgroundColor
struct FLinearColor UEditableTextBox::M_GetBackgroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 2496);
}
struct FLinearColor* UEditableTextBox::M_PtrGetBackgroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 2496);
}
void UEditableTextBox::M_SetBackgroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 2496, value);
}
// Member Getter and Setter of ReadOnlyForegroundColor
// Declaration: struct FLinearColor ReadOnlyForegroundColor
struct FLinearColor UEditableTextBox::M_GetReadOnlyForegroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 2512);
}
struct FLinearColor* UEditableTextBox::M_PtrGetReadOnlyForegroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 2512);
}
void UEditableTextBox::M_SetReadOnlyForegroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 2512, value);
}
// Member Getter and Setter of IsReadOnly
// Declaration: bool IsReadOnly
bool UEditableTextBox::M_GetIsReadOnly() const {
	return Read<bool>((byte*)this + 2528);
}
bool* UEditableTextBox::M_PtrGetIsReadOnly() {
	return reinterpret_cast<bool*>((byte*)this + 2528);
}
void UEditableTextBox::M_SetIsReadOnly(const bool& value) {
	Write((byte*)this + 2528, value);
}
// Member Getter and Setter of IsPassword
// Declaration: bool IsPassword
bool UEditableTextBox::M_GetIsPassword() const {
	return Read<bool>((byte*)this + 2529);
}
bool* UEditableTextBox::M_PtrGetIsPassword() {
	return reinterpret_cast<bool*>((byte*)this + 2529);
}
void UEditableTextBox::M_SetIsPassword(const bool& value) {
	Write((byte*)this + 2529, value);
}
// Member Getter and Setter of MinimumDesiredWidth
// Declaration: float MinimumDesiredWidth
float UEditableTextBox::M_GetMinimumDesiredWidth() const {
	return Read<float>((byte*)this + 2532);
}
float* UEditableTextBox::M_PtrGetMinimumDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 2532);
}
void UEditableTextBox::M_SetMinimumDesiredWidth(const float& value) {
	Write((byte*)this + 2532, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UEditableTextBox::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 2536);
}
struct FMargin* UEditableTextBox::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 2536);
}
void UEditableTextBox::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 2536, value);
}
// Member Getter and Setter of IsCaretMovedWhenGainFocus
// Declaration: bool IsCaretMovedWhenGainFocus
bool UEditableTextBox::M_GetIsCaretMovedWhenGainFocus() const {
	return Read<bool>((byte*)this + 2552);
}
bool* UEditableTextBox::M_PtrGetIsCaretMovedWhenGainFocus() {
	return reinterpret_cast<bool*>((byte*)this + 2552);
}
void UEditableTextBox::M_SetIsCaretMovedWhenGainFocus(const bool& value) {
	Write((byte*)this + 2552, value);
}
// Member Getter and Setter of SelectAllTextWhenFocused
// Declaration: bool SelectAllTextWhenFocused
bool UEditableTextBox::M_GetSelectAllTextWhenFocused() const {
	return Read<bool>((byte*)this + 2553);
}
bool* UEditableTextBox::M_PtrGetSelectAllTextWhenFocused() {
	return reinterpret_cast<bool*>((byte*)this + 2553);
}
void UEditableTextBox::M_SetSelectAllTextWhenFocused(const bool& value) {
	Write((byte*)this + 2553, value);
}
// Member Getter and Setter of RevertTextOnEscape
// Declaration: bool RevertTextOnEscape
bool UEditableTextBox::M_GetRevertTextOnEscape() const {
	return Read<bool>((byte*)this + 2554);
}
bool* UEditableTextBox::M_PtrGetRevertTextOnEscape() {
	return reinterpret_cast<bool*>((byte*)this + 2554);
}
void UEditableTextBox::M_SetRevertTextOnEscape(const bool& value) {
	Write((byte*)this + 2554, value);
}
// Member Getter and Setter of ClearKeyboardFocusOnCommit
// Declaration: bool ClearKeyboardFocusOnCommit
bool UEditableTextBox::M_GetClearKeyboardFocusOnCommit() const {
	return Read<bool>((byte*)this + 2555);
}
bool* UEditableTextBox::M_PtrGetClearKeyboardFocusOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 2555);
}
void UEditableTextBox::M_SetClearKeyboardFocusOnCommit(const bool& value) {
	Write((byte*)this + 2555, value);
}
// Member Getter and Setter of SelectAllTextOnCommit
// Declaration: bool SelectAllTextOnCommit
bool UEditableTextBox::M_GetSelectAllTextOnCommit() const {
	return Read<bool>((byte*)this + 2556);
}
bool* UEditableTextBox::M_PtrGetSelectAllTextOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 2556);
}
void UEditableTextBox::M_SetSelectAllTextOnCommit(const bool& value) {
	Write((byte*)this + 2556, value);
}
// Member Getter and Setter of AllowContextMenu
// Declaration: bool AllowContextMenu
bool UEditableTextBox::M_GetAllowContextMenu() const {
	return Read<bool>((byte*)this + 2557);
}
bool* UEditableTextBox::M_PtrGetAllowContextMenu() {
	return reinterpret_cast<bool*>((byte*)this + 2557);
}
void UEditableTextBox::M_SetAllowContextMenu(const bool& value) {
	Write((byte*)this + 2557, value);
}
// Member Getter and Setter of KeyboardType
// Declaration: TEnumAsByte<EVirtualKeyboardType> KeyboardType
TEnumAsByte<EVirtualKeyboardType> UEditableTextBox::M_GetKeyboardType() const {
	return Read<TEnumAsByte<EVirtualKeyboardType>>((byte*)this + 2558);
}
TEnumAsByte<EVirtualKeyboardType>* UEditableTextBox::M_PtrGetKeyboardType() {
	return reinterpret_cast<TEnumAsByte<EVirtualKeyboardType>*>((byte*)this + 2558);
}
void UEditableTextBox::M_SetKeyboardType(const TEnumAsByte<EVirtualKeyboardType>& value) {
	Write((byte*)this + 2558, value);
}
// Member Getter and Setter of VirtualKeyboardOptions
// Declaration: struct FVirtualKeyboardOptions VirtualKeyboardOptions
struct FVirtualKeyboardOptions UEditableTextBox::M_GetVirtualKeyboardOptions() const {
	return Read<struct FVirtualKeyboardOptions>((byte*)this + 2559);
}
struct FVirtualKeyboardOptions* UEditableTextBox::M_PtrGetVirtualKeyboardOptions() {
	return reinterpret_cast<struct FVirtualKeyboardOptions*>((byte*)this + 2559);
}
void UEditableTextBox::M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value) {
	Write((byte*)this + 2559, value);
}
// Member Getter and Setter of VirtualKeyboardTrigger
// Declaration: EVirtualKeyboardTrigger VirtualKeyboardTrigger
EVirtualKeyboardTrigger UEditableTextBox::M_GetVirtualKeyboardTrigger() const {
	return Read<EVirtualKeyboardTrigger>((byte*)this + 2560);
}
EVirtualKeyboardTrigger* UEditableTextBox::M_PtrGetVirtualKeyboardTrigger() {
	return reinterpret_cast<EVirtualKeyboardTrigger*>((byte*)this + 2560);
}
void UEditableTextBox::M_SetVirtualKeyboardTrigger(const EVirtualKeyboardTrigger& value) {
	Write((byte*)this + 2560, value);
}
// Member Getter and Setter of VirtualKeyboardDismissAction
// Declaration: EVirtualKeyboardDismissAction VirtualKeyboardDismissAction
EVirtualKeyboardDismissAction UEditableTextBox::M_GetVirtualKeyboardDismissAction() const {
	return Read<EVirtualKeyboardDismissAction>((byte*)this + 2561);
}
EVirtualKeyboardDismissAction* UEditableTextBox::M_PtrGetVirtualKeyboardDismissAction() {
	return reinterpret_cast<EVirtualKeyboardDismissAction*>((byte*)this + 2561);
}
void UEditableTextBox::M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value) {
	Write((byte*)this + 2561, value);
}
// Member Getter and Setter of Justification
// Declaration: TEnumAsByte<ETextJustify> Justification
TEnumAsByte<ETextJustify> UEditableTextBox::M_GetJustification() const {
	return Read<TEnumAsByte<ETextJustify>>((byte*)this + 2562);
}
TEnumAsByte<ETextJustify>* UEditableTextBox::M_PtrGetJustification() {
	return reinterpret_cast<TEnumAsByte<ETextJustify>*>((byte*)this + 2562);
}
void UEditableTextBox::M_SetJustification(const TEnumAsByte<ETextJustify>& value) {
	Write((byte*)this + 2562, value);
}
// Member Getter and Setter of ShapedTextOptions
// Declaration: struct FShapedTextOptions ShapedTextOptions
struct FShapedTextOptions UEditableTextBox::M_GetShapedTextOptions() const {
	return Read<struct FShapedTextOptions>((byte*)this + 2563);
}
struct FShapedTextOptions* UEditableTextBox::M_PtrGetShapedTextOptions() {
	return reinterpret_cast<struct FShapedTextOptions*>((byte*)this + 2563);
}
void UEditableTextBox::M_SetShapedTextOptions(const struct FShapedTextOptions& value) {
	Write((byte*)this + 2563, value);
}
// Member Getter and Setter of OnTextChanged
// Declaration: TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature> OnTextChanged
TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature> UEditableTextBox::M_GetOnTextChanged() const {
	return Read<TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>>((byte*)this + 2568);
}
TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>* UEditableTextBox::M_PtrGetOnTextChanged() {
	return reinterpret_cast<TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>*>((byte*)this + 2568);
}
void UEditableTextBox::M_SetOnTextChanged(const TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 2568, value);
}
// Member Getter and Setter of OnTextCommitted
// Declaration: TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature> OnTextCommitted
TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature> UEditableTextBox::M_GetOnTextCommitted() const {
	return Read<TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>>((byte*)this + 2584);
}
TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>* UEditableTextBox::M_PtrGetOnTextCommitted() {
	return reinterpret_cast<TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>*>((byte*)this + 2584);
}
void UEditableTextBox::M_SetOnTextCommitted(const TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>& value) {
	Write((byte*)this + 2584, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.EditableTextBox.ClearError
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UEditableTextBox::ClearError() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	struct UEditableTextBox_ClearError_Params {
	};
	UEditableTextBox_ClearError_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UEditableTextBox::GetText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	struct UEditableTextBox_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UEditableTextBox_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.HasError
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UEditableTextBox::HasError()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	struct UEditableTextBox_HasError_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UEditableTextBox_HasError_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
	};
	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CommitMethod	Type: TEnumAsByte<ETextCommit>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<ETextCommit> CommitMethod;			//Offset: 24 | ElementSize: 1
	};
	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetError
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InError	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	struct UEditableTextBox_SetError_Params {
		struct FText InError;			//Offset: 0 | ElementSize: 24
	};
	UEditableTextBox_SetError_Params params;
	params.InError = InError;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetHintText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetHintText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	struct UEditableTextBox_SetHintText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetIsPassword
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bIsPassword	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetIsPassword(bool bIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	struct UEditableTextBox_SetIsPassword_Params {
		bool bIsPassword;			//Offset: 0 | ElementSize: 1
	};
	UEditableTextBox_SetIsPassword_Params params;
	params.bIsPassword = bIsPassword;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetIsReadOnly
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bReadOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	struct UEditableTextBox_SetIsReadOnly_Params {
		bool bReadOnly;			//Offset: 0 | ElementSize: 1
	};
	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetJustification
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InJustification	Type: TEnumAsByte<ETextJustify>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetJustification(TEnumAsByte<ETextJustify> InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	struct UEditableTextBox_SetJustification_Params {
		TEnumAsByte<ETextJustify> InJustification;			//Offset: 0 | ElementSize: 1
	};
	UEditableTextBox_SetJustification_Params params;
	params.InJustification = InJustification;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableTextBox.SetText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	struct UEditableTextBox_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}