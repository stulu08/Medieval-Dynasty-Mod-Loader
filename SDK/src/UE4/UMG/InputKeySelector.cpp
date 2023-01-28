#include "../SDK.h"
#include "InputKeySelector.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetStyle
// Declaration: struct FButtonStyle WidgetStyle
struct FButtonStyle UInputKeySelector::M_GetWidgetStyle() const {
	return Read<struct FButtonStyle>((byte*)this + 264);
}
struct FButtonStyle* UInputKeySelector::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FButtonStyle*>((byte*)this + 264);
}
void UInputKeySelector::M_SetWidgetStyle(const struct FButtonStyle& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of TextStyle
// Declaration: struct FTextBlockStyle TextStyle
struct FTextBlockStyle UInputKeySelector::M_GetTextStyle() const {
	return Read<struct FTextBlockStyle>((byte*)this + 896);
}
struct FTextBlockStyle* UInputKeySelector::M_PtrGetTextStyle() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 896);
}
void UInputKeySelector::M_SetTextStyle(const struct FTextBlockStyle& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of SelectedKey
// Declaration: struct FInputChord SelectedKey
struct FInputChord UInputKeySelector::M_GetSelectedKey() const {
	return Read<struct FInputChord>((byte*)this + 1520);
}
struct FInputChord* UInputKeySelector::M_PtrGetSelectedKey() {
	return reinterpret_cast<struct FInputChord*>((byte*)this + 1520);
}
void UInputKeySelector::M_SetSelectedKey(const struct FInputChord& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UInputKeySelector::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 1552);
}
struct FSlateFontInfo* UInputKeySelector::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 1552);
}
void UInputKeySelector::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of Margin
// Declaration: struct FMargin Margin
struct FMargin UInputKeySelector::M_GetMargin() const {
	return Read<struct FMargin>((byte*)this + 1640);
}
struct FMargin* UInputKeySelector::M_PtrGetMargin() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 1640);
}
void UInputKeySelector::M_SetMargin(const struct FMargin& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FLinearColor ColorAndOpacity
struct FLinearColor UInputKeySelector::M_GetColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 1656);
}
struct FLinearColor* UInputKeySelector::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1656);
}
void UInputKeySelector::M_SetColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of KeySelectionText
// Declaration: struct FText KeySelectionText
struct FText UInputKeySelector::M_GetKeySelectionText() const {
	return Read<struct FText>((byte*)this + 1672);
}
struct FText* UInputKeySelector::M_PtrGetKeySelectionText() {
	return reinterpret_cast<struct FText*>((byte*)this + 1672);
}
void UInputKeySelector::M_SetKeySelectionText(const struct FText& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of NoKeySpecifiedText
// Declaration: struct FText NoKeySpecifiedText
struct FText UInputKeySelector::M_GetNoKeySpecifiedText() const {
	return Read<struct FText>((byte*)this + 1696);
}
struct FText* UInputKeySelector::M_PtrGetNoKeySpecifiedText() {
	return reinterpret_cast<struct FText*>((byte*)this + 1696);
}
void UInputKeySelector::M_SetNoKeySpecifiedText(const struct FText& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of bAllowModifierKeys
// Declaration: bool bAllowModifierKeys
bool UInputKeySelector::M_GetbAllowModifierKeys() const {
	return Read<bool>((byte*)this + 1720);
}
bool* UInputKeySelector::M_PtrGetbAllowModifierKeys() {
	return reinterpret_cast<bool*>((byte*)this + 1720);
}
void UInputKeySelector::M_SetbAllowModifierKeys(const bool& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of bAllowGamepadKeys
// Declaration: bool bAllowGamepadKeys
bool UInputKeySelector::M_GetbAllowGamepadKeys() const {
	return Read<bool>((byte*)this + 1721);
}
bool* UInputKeySelector::M_PtrGetbAllowGamepadKeys() {
	return reinterpret_cast<bool*>((byte*)this + 1721);
}
void UInputKeySelector::M_SetbAllowGamepadKeys(const bool& value) {
	Write((byte*)this + 1721, value);
}
// Member Getter and Setter of EscapeKeys
// Declaration: TArray<struct FKey> EscapeKeys
TArray<struct FKey> UInputKeySelector::M_GetEscapeKeys() const {
	return Read<TArray<struct FKey>>((byte*)this + 1728);
}
TArray<struct FKey>* UInputKeySelector::M_PtrGetEscapeKeys() {
	return reinterpret_cast<TArray<struct FKey>*>((byte*)this + 1728);
}
void UInputKeySelector::M_SetEscapeKeys(const TArray<struct FKey>& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of OnKeySelected
// Declaration: TAssetPtr<class FOnKeySelected__DelegateSignature> OnKeySelected
TAssetPtr<class FOnKeySelected__DelegateSignature> UInputKeySelector::M_GetOnKeySelected() const {
	return Read<TAssetPtr<class FOnKeySelected__DelegateSignature>>((byte*)this + 1744);
}
TAssetPtr<class FOnKeySelected__DelegateSignature>* UInputKeySelector::M_PtrGetOnKeySelected() {
	return reinterpret_cast<TAssetPtr<class FOnKeySelected__DelegateSignature>*>((byte*)this + 1744);
}
void UInputKeySelector::M_SetOnKeySelected(const TAssetPtr<class FOnKeySelected__DelegateSignature>& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of OnIsSelectingKeyChanged
// Declaration: TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature> OnIsSelectingKeyChanged
TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature> UInputKeySelector::M_GetOnIsSelectingKeyChanged() const {
	return Read<TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>>((byte*)this + 1760);
}
TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>* UInputKeySelector::M_PtrGetOnIsSelectingKeyChanged() {
	return reinterpret_cast<TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>*>((byte*)this + 1760);
}
void UInputKeySelector::M_SetOnIsSelectingKeyChanged(const TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>& value) {
	Write((byte*)this + 1760, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.InputKeySelector.GetIsSelectingKey
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInputKeySelector::GetIsSelectingKey()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	struct UInputKeySelector_GetIsSelectingKey_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UInputKeySelector_GetIsSelectingKey_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
/////////////////////////////////////////////
void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params {
	};
	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
// Name: SelectedKey	Type: struct FInputChord	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	struct UInputKeySelector_OnKeySelected__DelegateSignature_Params {
		struct FInputChord SelectedKey;			//Offset: 0 | ElementSize: 32
	};
	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetAllowGamepadKeys
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAllowGamepadKeys	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	struct UInputKeySelector_SetAllowGamepadKeys_Params {
		bool bInAllowGamepadKeys;			//Offset: 0 | ElementSize: 1
	};
	UInputKeySelector_SetAllowGamepadKeys_Params params;
	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetAllowModifierKeys
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAllowModifierKeys	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	struct UInputKeySelector_SetAllowModifierKeys_Params {
		bool bInAllowModifierKeys;			//Offset: 0 | ElementSize: 1
	};
	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetEscapeKeys
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InKeys	Type: TArray<struct FKey>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetEscapeKeys(const TArray<struct FKey>& InKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	struct UInputKeySelector_SetEscapeKeys_Params {
		TArray<struct FKey> InKeys;			//Offset: 0 | ElementSize: 16
	};
	UInputKeySelector_SetEscapeKeys_Params params;
	params.InKeys = InKeys;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetKeySelectionText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InKeySelectionText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetKeySelectionText(struct FText InKeySelectionText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	struct UInputKeySelector_SetKeySelectionText_Params {
		struct FText InKeySelectionText;			//Offset: 0 | ElementSize: 24
	};
	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InNoKeySpecifiedText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	struct UInputKeySelector_SetNoKeySpecifiedText_Params {
		struct FText InNoKeySpecifiedText;			//Offset: 0 | ElementSize: 24
	};
	UInputKeySelector_SetNoKeySpecifiedText_Params params;
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetSelectedKey
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InSelectedKey	Type: struct FInputChord	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	struct UInputKeySelector_SetSelectedKey_Params {
		struct FInputChord InSelectedKey;			//Offset: 0 | ElementSize: 32
	};
	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InputKeySelector.SetTextBlockVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVisibility	Type: ESlateVisibility	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	struct UInputKeySelector_SetTextBlockVisibility_Params {
		ESlateVisibility InVisibility;			//Offset: 0 | ElementSize: 1
	};
	UInputKeySelector_SetTextBlockVisibility_Params params;
	params.InVisibility = InVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}