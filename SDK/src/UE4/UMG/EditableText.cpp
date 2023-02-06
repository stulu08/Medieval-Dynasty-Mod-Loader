#include "../SDK.h"
#include "EditableText.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText UEditableText::M_GetText() const {
	return Read<struct FText>((byte*)this + 264);
}
struct FText* UEditableText::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 264);
}
void UEditableText::M_SetText(const struct FText& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of TextDelegate
// Declaration: struct FScriptDelegate TextDelegate
struct FScriptDelegate UEditableText::M_GetTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 288);
}
struct FScriptDelegate* UEditableText::M_PtrGetTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 288);
}
void UEditableText::M_SetTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of HintText
// Declaration: struct FText HintText
struct FText UEditableText::M_GetHintText() const {
	return Read<struct FText>((byte*)this + 304);
}
struct FText* UEditableText::M_PtrGetHintText() {
	return reinterpret_cast<struct FText*>((byte*)this + 304);
}
void UEditableText::M_SetHintText(const struct FText& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of HintTextDelegate
// Declaration: struct FScriptDelegate HintTextDelegate
struct FScriptDelegate UEditableText::M_GetHintTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 328);
}
struct FScriptDelegate* UEditableText::M_PtrGetHintTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 328);
}
void UEditableText::M_SetHintTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FEditableTextStyle WidgetStyle
struct FEditableTextStyle UEditableText::M_GetWidgetStyle() const {
	return Read<struct FEditableTextStyle>((byte*)this + 344);
}
struct FEditableTextStyle* UEditableText::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FEditableTextStyle*>((byte*)this + 344);
}
void UEditableText::M_SetWidgetStyle(const struct FEditableTextStyle& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UEditableText::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 888);
}
class USlateWidgetStyleAsset** UEditableText::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 888);
}
void UEditableText::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of BackgroundImageSelected
// Declaration: class USlateBrushAsset* BackgroundImageSelected
class USlateBrushAsset* UEditableText::M_GetBackgroundImageSelected() const {
	return Read<class USlateBrushAsset*>((byte*)this + 896);
}
class USlateBrushAsset** UEditableText::M_PtrGetBackgroundImageSelected() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 896);
}
void UEditableText::M_SetBackgroundImageSelected(const class USlateBrushAsset*& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of BackgroundImageComposing
// Declaration: class USlateBrushAsset* BackgroundImageComposing
class USlateBrushAsset* UEditableText::M_GetBackgroundImageComposing() const {
	return Read<class USlateBrushAsset*>((byte*)this + 904);
}
class USlateBrushAsset** UEditableText::M_PtrGetBackgroundImageComposing() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 904);
}
void UEditableText::M_SetBackgroundImageComposing(const class USlateBrushAsset*& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of CaretImage
// Declaration: class USlateBrushAsset* CaretImage
class USlateBrushAsset* UEditableText::M_GetCaretImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 912);
}
class USlateBrushAsset** UEditableText::M_PtrGetCaretImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 912);
}
void UEditableText::M_SetCaretImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UEditableText::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 920);
}
struct FSlateFontInfo* UEditableText::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 920);
}
void UEditableText::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FSlateColor ColorAndOpacity
struct FSlateColor UEditableText::M_GetColorAndOpacity() const {
	return Read<struct FSlateColor>((byte*)this + 1008);
}
struct FSlateColor* UEditableText::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 1008);
}
void UEditableText::M_SetColorAndOpacity(const struct FSlateColor& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of IsReadOnly
// Declaration: bool IsReadOnly
bool UEditableText::M_GetIsReadOnly() const {
	return Read<bool>((byte*)this + 1048);
}
bool* UEditableText::M_PtrGetIsReadOnly() {
	return reinterpret_cast<bool*>((byte*)this + 1048);
}
void UEditableText::M_SetIsReadOnly(const bool& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of IsPassword
// Declaration: bool IsPassword
bool UEditableText::M_GetIsPassword() const {
	return Read<bool>((byte*)this + 1049);
}
bool* UEditableText::M_PtrGetIsPassword() {
	return reinterpret_cast<bool*>((byte*)this + 1049);
}
void UEditableText::M_SetIsPassword(const bool& value) {
	Write((byte*)this + 1049, value);
}
// Member Getter and Setter of MinimumDesiredWidth
// Declaration: float MinimumDesiredWidth
float UEditableText::M_GetMinimumDesiredWidth() const {
	return Read<float>((byte*)this + 1052);
}
float* UEditableText::M_PtrGetMinimumDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 1052);
}
void UEditableText::M_SetMinimumDesiredWidth(const float& value) {
	Write((byte*)this + 1052, value);
}
// Member Getter and Setter of IsCaretMovedWhenGainFocus
// Declaration: bool IsCaretMovedWhenGainFocus
bool UEditableText::M_GetIsCaretMovedWhenGainFocus() const {
	return Read<bool>((byte*)this + 1056);
}
bool* UEditableText::M_PtrGetIsCaretMovedWhenGainFocus() {
	return reinterpret_cast<bool*>((byte*)this + 1056);
}
void UEditableText::M_SetIsCaretMovedWhenGainFocus(const bool& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of SelectAllTextWhenFocused
// Declaration: bool SelectAllTextWhenFocused
bool UEditableText::M_GetSelectAllTextWhenFocused() const {
	return Read<bool>((byte*)this + 1057);
}
bool* UEditableText::M_PtrGetSelectAllTextWhenFocused() {
	return reinterpret_cast<bool*>((byte*)this + 1057);
}
void UEditableText::M_SetSelectAllTextWhenFocused(const bool& value) {
	Write((byte*)this + 1057, value);
}
// Member Getter and Setter of RevertTextOnEscape
// Declaration: bool RevertTextOnEscape
bool UEditableText::M_GetRevertTextOnEscape() const {
	return Read<bool>((byte*)this + 1058);
}
bool* UEditableText::M_PtrGetRevertTextOnEscape() {
	return reinterpret_cast<bool*>((byte*)this + 1058);
}
void UEditableText::M_SetRevertTextOnEscape(const bool& value) {
	Write((byte*)this + 1058, value);
}
// Member Getter and Setter of ClearKeyboardFocusOnCommit
// Declaration: bool ClearKeyboardFocusOnCommit
bool UEditableText::M_GetClearKeyboardFocusOnCommit() const {
	return Read<bool>((byte*)this + 1059);
}
bool* UEditableText::M_PtrGetClearKeyboardFocusOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 1059);
}
void UEditableText::M_SetClearKeyboardFocusOnCommit(const bool& value) {
	Write((byte*)this + 1059, value);
}
// Member Getter and Setter of SelectAllTextOnCommit
// Declaration: bool SelectAllTextOnCommit
bool UEditableText::M_GetSelectAllTextOnCommit() const {
	return Read<bool>((byte*)this + 1060);
}
bool* UEditableText::M_PtrGetSelectAllTextOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 1060);
}
void UEditableText::M_SetSelectAllTextOnCommit(const bool& value) {
	Write((byte*)this + 1060, value);
}
// Member Getter and Setter of AllowContextMenu
// Declaration: bool AllowContextMenu
bool UEditableText::M_GetAllowContextMenu() const {
	return Read<bool>((byte*)this + 1061);
}
bool* UEditableText::M_PtrGetAllowContextMenu() {
	return reinterpret_cast<bool*>((byte*)this + 1061);
}
void UEditableText::M_SetAllowContextMenu(const bool& value) {
	Write((byte*)this + 1061, value);
}
// Member Getter and Setter of KeyboardType
// Declaration: TEnumAsByte<EVirtualKeyboardType> KeyboardType
TEnumAsByte<EVirtualKeyboardType> UEditableText::M_GetKeyboardType() const {
	return Read<TEnumAsByte<EVirtualKeyboardType>>((byte*)this + 1062);
}
TEnumAsByte<EVirtualKeyboardType>* UEditableText::M_PtrGetKeyboardType() {
	return reinterpret_cast<TEnumAsByte<EVirtualKeyboardType>*>((byte*)this + 1062);
}
void UEditableText::M_SetKeyboardType(const TEnumAsByte<EVirtualKeyboardType>& value) {
	Write((byte*)this + 1062, value);
}
// Member Getter and Setter of VirtualKeyboardOptions
// Declaration: struct FVirtualKeyboardOptions VirtualKeyboardOptions
struct FVirtualKeyboardOptions UEditableText::M_GetVirtualKeyboardOptions() const {
	return Read<struct FVirtualKeyboardOptions>((byte*)this + 1063);
}
struct FVirtualKeyboardOptions* UEditableText::M_PtrGetVirtualKeyboardOptions() {
	return reinterpret_cast<struct FVirtualKeyboardOptions*>((byte*)this + 1063);
}
void UEditableText::M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value) {
	Write((byte*)this + 1063, value);
}
// Member Getter and Setter of VirtualKeyboardTrigger
// Declaration: EVirtualKeyboardTrigger VirtualKeyboardTrigger
EVirtualKeyboardTrigger UEditableText::M_GetVirtualKeyboardTrigger() const {
	return Read<EVirtualKeyboardTrigger>((byte*)this + 1064);
}
EVirtualKeyboardTrigger* UEditableText::M_PtrGetVirtualKeyboardTrigger() {
	return reinterpret_cast<EVirtualKeyboardTrigger*>((byte*)this + 1064);
}
void UEditableText::M_SetVirtualKeyboardTrigger(const EVirtualKeyboardTrigger& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of VirtualKeyboardDismissAction
// Declaration: EVirtualKeyboardDismissAction VirtualKeyboardDismissAction
EVirtualKeyboardDismissAction UEditableText::M_GetVirtualKeyboardDismissAction() const {
	return Read<EVirtualKeyboardDismissAction>((byte*)this + 1065);
}
EVirtualKeyboardDismissAction* UEditableText::M_PtrGetVirtualKeyboardDismissAction() {
	return reinterpret_cast<EVirtualKeyboardDismissAction*>((byte*)this + 1065);
}
void UEditableText::M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value) {
	Write((byte*)this + 1065, value);
}
// Member Getter and Setter of Justification
// Declaration: TEnumAsByte<ETextJustify> Justification
TEnumAsByte<ETextJustify> UEditableText::M_GetJustification() const {
	return Read<TEnumAsByte<ETextJustify>>((byte*)this + 1066);
}
TEnumAsByte<ETextJustify>* UEditableText::M_PtrGetJustification() {
	return reinterpret_cast<TEnumAsByte<ETextJustify>*>((byte*)this + 1066);
}
void UEditableText::M_SetJustification(const TEnumAsByte<ETextJustify>& value) {
	Write((byte*)this + 1066, value);
}
// Member Getter and Setter of ShapedTextOptions
// Declaration: struct FShapedTextOptions ShapedTextOptions
struct FShapedTextOptions UEditableText::M_GetShapedTextOptions() const {
	return Read<struct FShapedTextOptions>((byte*)this + 1067);
}
struct FShapedTextOptions* UEditableText::M_PtrGetShapedTextOptions() {
	return reinterpret_cast<struct FShapedTextOptions*>((byte*)this + 1067);
}
void UEditableText::M_SetShapedTextOptions(const struct FShapedTextOptions& value) {
	Write((byte*)this + 1067, value);
}
// Member Getter and Setter of OnTextChanged
// Declaration: TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature> OnTextChanged
TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature> UEditableText::M_GetOnTextChanged() const {
	return Read<TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>>((byte*)this + 1072);
}
TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>* UEditableText::M_PtrGetOnTextChanged() {
	return reinterpret_cast<TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>*>((byte*)this + 1072);
}
void UEditableText::M_SetOnTextChanged(const TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of OnTextCommitted
// Declaration: TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature> OnTextCommitted
TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature> UEditableText::M_GetOnTextCommitted() const {
	return Read<TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>>((byte*)this + 1088);
}
TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>* UEditableText::M_PtrGetOnTextCommitted() {
	return reinterpret_cast<TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>*>((byte*)this + 1088);
}
void UEditableText::M_SetOnTextCommitted(const TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1088, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.EditableText.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UEditableText::GetText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	struct UEditableText_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UEditableText_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
	};
	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CommitMethod	Type: TEnumAsByte<ETextCommit>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<ETextCommit> CommitMethod;			//Offset: 24 | ElementSize: 1
	};
	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableText.SetHintText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHintText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	struct UEditableText_SetHintText_Params {
		struct FText InHintText;			//Offset: 0 | ElementSize: 24
	};
	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableText.SetIsPassword
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InbIsPassword	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::SetIsPassword(bool InbIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	struct UEditableText_SetIsPassword_Params {
		bool InbIsPassword;			//Offset: 0 | ElementSize: 1
	};
	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableText.SetIsReadOnly
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InbIsReadyOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	struct UEditableText_SetIsReadOnly_Params {
		bool InbIsReadyOnly;			//Offset: 0 | ElementSize: 1
	};
	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableText.SetJustification
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InJustification	Type: TEnumAsByte<ETextJustify>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::SetJustification(TEnumAsByte<ETextJustify> InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	struct UEditableText_SetJustification_Params {
		TEnumAsByte<ETextJustify> InJustification;			//Offset: 0 | ElementSize: 1
	};
	UEditableText_SetJustification_Params params;
	params.InJustification = InJustification;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.EditableText.SetText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	struct UEditableText_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UEditableText_SetText_Params params;
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