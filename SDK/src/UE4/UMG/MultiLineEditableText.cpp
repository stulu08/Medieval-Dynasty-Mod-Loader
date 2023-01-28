#include "../SDK.h"
#include "MultiLineEditableText.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText UMultiLineEditableText::M_GetText() const {
	return Read<struct FText>((byte*)this + 296);
}
struct FText* UMultiLineEditableText::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 296);
}
void UMultiLineEditableText::M_SetText(const struct FText& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of HintText
// Declaration: struct FText HintText
struct FText UMultiLineEditableText::M_GetHintText() const {
	return Read<struct FText>((byte*)this + 320);
}
struct FText* UMultiLineEditableText::M_PtrGetHintText() {
	return reinterpret_cast<struct FText*>((byte*)this + 320);
}
void UMultiLineEditableText::M_SetHintText(const struct FText& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of HintTextDelegate
// Declaration: struct FScriptDelegate HintTextDelegate
struct FScriptDelegate UMultiLineEditableText::M_GetHintTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 344);
}
struct FScriptDelegate* UMultiLineEditableText::M_PtrGetHintTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 344);
}
void UMultiLineEditableText::M_SetHintTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FTextBlockStyle WidgetStyle
struct FTextBlockStyle UMultiLineEditableText::M_GetWidgetStyle() const {
	return Read<struct FTextBlockStyle>((byte*)this + 360);
}
struct FTextBlockStyle* UMultiLineEditableText::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 360);
}
void UMultiLineEditableText::M_SetWidgetStyle(const struct FTextBlockStyle& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of bIsReadOnly
// Declaration: bool bIsReadOnly
bool UMultiLineEditableText::M_GetbIsReadOnly() const {
	return Read<bool>((byte*)this + 984);
}
bool* UMultiLineEditableText::M_PtrGetbIsReadOnly() {
	return reinterpret_cast<bool*>((byte*)this + 984);
}
void UMultiLineEditableText::M_SetbIsReadOnly(const bool& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UMultiLineEditableText::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 992);
}
struct FSlateFontInfo* UMultiLineEditableText::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 992);
}
void UMultiLineEditableText::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of SelectAllTextWhenFocused
// Declaration: bool SelectAllTextWhenFocused
bool UMultiLineEditableText::M_GetSelectAllTextWhenFocused() const {
	return Read<bool>((byte*)this + 1080);
}
bool* UMultiLineEditableText::M_PtrGetSelectAllTextWhenFocused() {
	return reinterpret_cast<bool*>((byte*)this + 1080);
}
void UMultiLineEditableText::M_SetSelectAllTextWhenFocused(const bool& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of ClearTextSelectionOnFocusLoss
// Declaration: bool ClearTextSelectionOnFocusLoss
bool UMultiLineEditableText::M_GetClearTextSelectionOnFocusLoss() const {
	return Read<bool>((byte*)this + 1081);
}
bool* UMultiLineEditableText::M_PtrGetClearTextSelectionOnFocusLoss() {
	return reinterpret_cast<bool*>((byte*)this + 1081);
}
void UMultiLineEditableText::M_SetClearTextSelectionOnFocusLoss(const bool& value) {
	Write((byte*)this + 1081, value);
}
// Member Getter and Setter of RevertTextOnEscape
// Declaration: bool RevertTextOnEscape
bool UMultiLineEditableText::M_GetRevertTextOnEscape() const {
	return Read<bool>((byte*)this + 1082);
}
bool* UMultiLineEditableText::M_PtrGetRevertTextOnEscape() {
	return reinterpret_cast<bool*>((byte*)this + 1082);
}
void UMultiLineEditableText::M_SetRevertTextOnEscape(const bool& value) {
	Write((byte*)this + 1082, value);
}
// Member Getter and Setter of ClearKeyboardFocusOnCommit
// Declaration: bool ClearKeyboardFocusOnCommit
bool UMultiLineEditableText::M_GetClearKeyboardFocusOnCommit() const {
	return Read<bool>((byte*)this + 1083);
}
bool* UMultiLineEditableText::M_PtrGetClearKeyboardFocusOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 1083);
}
void UMultiLineEditableText::M_SetClearKeyboardFocusOnCommit(const bool& value) {
	Write((byte*)this + 1083, value);
}
// Member Getter and Setter of AllowContextMenu
// Declaration: bool AllowContextMenu
bool UMultiLineEditableText::M_GetAllowContextMenu() const {
	return Read<bool>((byte*)this + 1084);
}
bool* UMultiLineEditableText::M_PtrGetAllowContextMenu() {
	return reinterpret_cast<bool*>((byte*)this + 1084);
}
void UMultiLineEditableText::M_SetAllowContextMenu(const bool& value) {
	Write((byte*)this + 1084, value);
}
// Member Getter and Setter of VirtualKeyboardOptions
// Declaration: struct FVirtualKeyboardOptions VirtualKeyboardOptions
struct FVirtualKeyboardOptions UMultiLineEditableText::M_GetVirtualKeyboardOptions() const {
	return Read<struct FVirtualKeyboardOptions>((byte*)this + 1085);
}
struct FVirtualKeyboardOptions* UMultiLineEditableText::M_PtrGetVirtualKeyboardOptions() {
	return reinterpret_cast<struct FVirtualKeyboardOptions*>((byte*)this + 1085);
}
void UMultiLineEditableText::M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value) {
	Write((byte*)this + 1085, value);
}
// Member Getter and Setter of VirtualKeyboardDismissAction
// Declaration: EVirtualKeyboardDismissAction VirtualKeyboardDismissAction
EVirtualKeyboardDismissAction UMultiLineEditableText::M_GetVirtualKeyboardDismissAction() const {
	return Read<EVirtualKeyboardDismissAction>((byte*)this + 1086);
}
EVirtualKeyboardDismissAction* UMultiLineEditableText::M_PtrGetVirtualKeyboardDismissAction() {
	return reinterpret_cast<EVirtualKeyboardDismissAction*>((byte*)this + 1086);
}
void UMultiLineEditableText::M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value) {
	Write((byte*)this + 1086, value);
}
// Member Getter and Setter of OnTextChanged
// Declaration: TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature> OnTextChanged
TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature> UMultiLineEditableText::M_GetOnTextChanged() const {
	return Read<TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>>((byte*)this + 1088);
}
TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>* UMultiLineEditableText::M_PtrGetOnTextChanged() {
	return reinterpret_cast<TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>*>((byte*)this + 1088);
}
void UMultiLineEditableText::M_SetOnTextChanged(const TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of OnTextCommitted
// Declaration: TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature> OnTextCommitted
TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature> UMultiLineEditableText::M_GetOnTextCommitted() const {
	return Read<TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>>((byte*)this + 1104);
}
TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>* UMultiLineEditableText::M_PtrGetOnTextCommitted() {
	return reinterpret_cast<TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>*>((byte*)this + 1104);
}
void UMultiLineEditableText::M_SetOnTextCommitted(const TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1104, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.GetHintText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UMultiLineEditableText::GetHintText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	struct UMultiLineEditableText_GetHintText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableText_GetHintText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UMultiLineEditableText::GetText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	struct UMultiLineEditableText_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableText_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CommitMethod	Type: TEnumAsByte<ETextCommit>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<ETextCommit> CommitMethod;			//Offset: 24 | ElementSize: 1
	};
	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.SetHintText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHintText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	struct UMultiLineEditableText_SetHintText_Params {
		struct FText InHintText;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.SetIsReadOnly
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bReadOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	struct UMultiLineEditableText_SetIsReadOnly_Params {
		bool bReadOnly;			//Offset: 0 | ElementSize: 1
	};
	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.SetText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	struct UMultiLineEditableText_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableText.SetWidgetStyle
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InWidgetStyle	Type: struct FTextBlockStyle	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	struct UMultiLineEditableText_SetWidgetStyle_Params {
		struct FTextBlockStyle InWidgetStyle;			//Offset: 0 | ElementSize: 624
	};
	UMultiLineEditableText_SetWidgetStyle_Params params;
	params.InWidgetStyle = InWidgetStyle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}