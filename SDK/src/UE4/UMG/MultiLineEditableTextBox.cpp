#include "../SDK.h"
#include "MultiLineEditableTextBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText UMultiLineEditableTextBox::M_GetText() const {
	return Read<struct FText>((byte*)this + 296);
}
struct FText* UMultiLineEditableTextBox::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 296);
}
void UMultiLineEditableTextBox::M_SetText(const struct FText& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of HintText
// Declaration: struct FText HintText
struct FText UMultiLineEditableTextBox::M_GetHintText() const {
	return Read<struct FText>((byte*)this + 320);
}
struct FText* UMultiLineEditableTextBox::M_PtrGetHintText() {
	return reinterpret_cast<struct FText*>((byte*)this + 320);
}
void UMultiLineEditableTextBox::M_SetHintText(const struct FText& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of HintTextDelegate
// Declaration: struct FScriptDelegate HintTextDelegate
struct FScriptDelegate UMultiLineEditableTextBox::M_GetHintTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 344);
}
struct FScriptDelegate* UMultiLineEditableTextBox::M_PtrGetHintTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 344);
}
void UMultiLineEditableTextBox::M_SetHintTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FEditableTextBoxStyle WidgetStyle
struct FEditableTextBoxStyle UMultiLineEditableTextBox::M_GetWidgetStyle() const {
	return Read<struct FEditableTextBoxStyle>((byte*)this + 360);
}
struct FEditableTextBoxStyle* UMultiLineEditableTextBox::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FEditableTextBoxStyle*>((byte*)this + 360);
}
void UMultiLineEditableTextBox::M_SetWidgetStyle(const struct FEditableTextBoxStyle& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of TextStyle
// Declaration: struct FTextBlockStyle TextStyle
struct FTextBlockStyle UMultiLineEditableTextBox::M_GetTextStyle() const {
	return Read<struct FTextBlockStyle>((byte*)this + 2400);
}
struct FTextBlockStyle* UMultiLineEditableTextBox::M_PtrGetTextStyle() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 2400);
}
void UMultiLineEditableTextBox::M_SetTextStyle(const struct FTextBlockStyle& value) {
	Write((byte*)this + 2400, value);
}
// Member Getter and Setter of bIsReadOnly
// Declaration: bool bIsReadOnly
bool UMultiLineEditableTextBox::M_GetbIsReadOnly() const {
	return Read<bool>((byte*)this + 3024);
}
bool* UMultiLineEditableTextBox::M_PtrGetbIsReadOnly() {
	return reinterpret_cast<bool*>((byte*)this + 3024);
}
void UMultiLineEditableTextBox::M_SetbIsReadOnly(const bool& value) {
	Write((byte*)this + 3024, value);
}
// Member Getter and Setter of AllowContextMenu
// Declaration: bool AllowContextMenu
bool UMultiLineEditableTextBox::M_GetAllowContextMenu() const {
	return Read<bool>((byte*)this + 3025);
}
bool* UMultiLineEditableTextBox::M_PtrGetAllowContextMenu() {
	return reinterpret_cast<bool*>((byte*)this + 3025);
}
void UMultiLineEditableTextBox::M_SetAllowContextMenu(const bool& value) {
	Write((byte*)this + 3025, value);
}
// Member Getter and Setter of VirtualKeyboardOptions
// Declaration: struct FVirtualKeyboardOptions VirtualKeyboardOptions
struct FVirtualKeyboardOptions UMultiLineEditableTextBox::M_GetVirtualKeyboardOptions() const {
	return Read<struct FVirtualKeyboardOptions>((byte*)this + 3026);
}
struct FVirtualKeyboardOptions* UMultiLineEditableTextBox::M_PtrGetVirtualKeyboardOptions() {
	return reinterpret_cast<struct FVirtualKeyboardOptions*>((byte*)this + 3026);
}
void UMultiLineEditableTextBox::M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value) {
	Write((byte*)this + 3026, value);
}
// Member Getter and Setter of VirtualKeyboardDismissAction
// Declaration: EVirtualKeyboardDismissAction VirtualKeyboardDismissAction
EVirtualKeyboardDismissAction UMultiLineEditableTextBox::M_GetVirtualKeyboardDismissAction() const {
	return Read<EVirtualKeyboardDismissAction>((byte*)this + 3027);
}
EVirtualKeyboardDismissAction* UMultiLineEditableTextBox::M_PtrGetVirtualKeyboardDismissAction() {
	return reinterpret_cast<EVirtualKeyboardDismissAction*>((byte*)this + 3027);
}
void UMultiLineEditableTextBox::M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value) {
	Write((byte*)this + 3027, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UMultiLineEditableTextBox::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 3032);
}
class USlateWidgetStyleAsset** UMultiLineEditableTextBox::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 3032);
}
void UMultiLineEditableTextBox::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 3032, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UMultiLineEditableTextBox::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 3040);
}
struct FSlateFontInfo* UMultiLineEditableTextBox::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 3040);
}
void UMultiLineEditableTextBox::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 3040, value);
}
// Member Getter and Setter of ForegroundColor
// Declaration: struct FLinearColor ForegroundColor
struct FLinearColor UMultiLineEditableTextBox::M_GetForegroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 3128);
}
struct FLinearColor* UMultiLineEditableTextBox::M_PtrGetForegroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 3128);
}
void UMultiLineEditableTextBox::M_SetForegroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 3128, value);
}
// Member Getter and Setter of BackgroundColor
// Declaration: struct FLinearColor BackgroundColor
struct FLinearColor UMultiLineEditableTextBox::M_GetBackgroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 3144);
}
struct FLinearColor* UMultiLineEditableTextBox::M_PtrGetBackgroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 3144);
}
void UMultiLineEditableTextBox::M_SetBackgroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 3144, value);
}
// Member Getter and Setter of ReadOnlyForegroundColor
// Declaration: struct FLinearColor ReadOnlyForegroundColor
struct FLinearColor UMultiLineEditableTextBox::M_GetReadOnlyForegroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 3160);
}
struct FLinearColor* UMultiLineEditableTextBox::M_PtrGetReadOnlyForegroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 3160);
}
void UMultiLineEditableTextBox::M_SetReadOnlyForegroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 3160, value);
}
// Member Getter and Setter of OnTextChanged
// Declaration: TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature> OnTextChanged
TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature> UMultiLineEditableTextBox::M_GetOnTextChanged() const {
	return Read<TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>>((byte*)this + 3176);
}
TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>* UMultiLineEditableTextBox::M_PtrGetOnTextChanged() {
	return reinterpret_cast<TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>*>((byte*)this + 3176);
}
void UMultiLineEditableTextBox::M_SetOnTextChanged(const TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 3176, value);
}
// Member Getter and Setter of OnTextCommitted
// Declaration: TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature> OnTextCommitted
TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature> UMultiLineEditableTextBox::M_GetOnTextCommitted() const {
	return Read<TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>>((byte*)this + 3192);
}
TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>* UMultiLineEditableTextBox::M_PtrGetOnTextCommitted() {
	return reinterpret_cast<TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>*>((byte*)this + 3192);
}
void UMultiLineEditableTextBox::M_SetOnTextCommitted(const TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>& value) {
	Write((byte*)this + 3192, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.GetHintText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UMultiLineEditableTextBox::GetHintText() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	struct UMultiLineEditableTextBox_GetHintText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_GetHintText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UMultiLineEditableTextBox::GetText() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	struct UMultiLineEditableTextBox_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate, HasOutParms
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CommitMethod	Type: TEnumAsByte<ETextCommit>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<ETextCommit> CommitMethod;			//Offset: 24 | ElementSize: 1
	};
	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.SetError
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InError	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	struct UMultiLineEditableTextBox_SetError_Params {
		struct FText InError;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.SetHintText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHintText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	struct UMultiLineEditableTextBox_SetHintText_Params {
		struct FText InHintText;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_SetHintText_Params params;
	params.InHintText = InHintText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bReadOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	struct UMultiLineEditableTextBox_SetIsReadOnly_Params {
		bool bReadOnly;			//Offset: 0 | ElementSize: 1
	};
	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.SetText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	struct UMultiLineEditableTextBox_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MultiLineEditableTextBox.SetTextStyle
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InTextStyle	Type: struct FTextBlockStyle	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	struct UMultiLineEditableTextBox_SetTextStyle_Params {
		struct FTextBlockStyle InTextStyle;			//Offset: 0 | ElementSize: 624
	};
	UMultiLineEditableTextBox_SetTextStyle_Params params;
	params.InTextStyle = InTextStyle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}