#include "../SDK.h"
#include "ComboBoxString.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DefaultOptions
// Declaration: TArray<struct FString> DefaultOptions
TArray<struct FString> UComboBoxString::M_GetDefaultOptions() const {
	return Read<TArray<struct FString>>((byte*)this + 264);
}
TArray<struct FString>* UComboBoxString::M_PtrGetDefaultOptions() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 264);
}
void UComboBoxString::M_SetDefaultOptions(const TArray<struct FString>& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of SelectedOption
// Declaration: struct FString SelectedOption
struct FString UComboBoxString::M_GetSelectedOption() const {
	return Read<struct FString>((byte*)this + 280);
}
struct FString* UComboBoxString::M_PtrGetSelectedOption() {
	return reinterpret_cast<struct FString*>((byte*)this + 280);
}
void UComboBoxString::M_SetSelectedOption(const struct FString& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FComboBoxStyle WidgetStyle
struct FComboBoxStyle UComboBoxString::M_GetWidgetStyle() const {
	return Read<struct FComboBoxStyle>((byte*)this + 296);
}
struct FComboBoxStyle* UComboBoxString::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FComboBoxStyle*>((byte*)this + 296);
}
void UComboBoxString::M_SetWidgetStyle(const struct FComboBoxStyle& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of ItemStyle
// Declaration: struct FTableRowStyle ItemStyle
struct FTableRowStyle UComboBoxString::M_GetItemStyle() const {
	return Read<struct FTableRowStyle>((byte*)this + 1304);
}
struct FTableRowStyle* UComboBoxString::M_PtrGetItemStyle() {
	return reinterpret_cast<struct FTableRowStyle*>((byte*)this + 1304);
}
void UComboBoxString::M_SetItemStyle(const struct FTableRowStyle& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of ContentPadding
// Declaration: struct FMargin ContentPadding
struct FMargin UComboBoxString::M_GetContentPadding() const {
	return Read<struct FMargin>((byte*)this + 3296);
}
struct FMargin* UComboBoxString::M_PtrGetContentPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 3296);
}
void UComboBoxString::M_SetContentPadding(const struct FMargin& value) {
	Write((byte*)this + 3296, value);
}
// Member Getter and Setter of MaxListHeight
// Declaration: float MaxListHeight
float UComboBoxString::M_GetMaxListHeight() const {
	return Read<float>((byte*)this + 3312);
}
float* UComboBoxString::M_PtrGetMaxListHeight() {
	return reinterpret_cast<float*>((byte*)this + 3312);
}
void UComboBoxString::M_SetMaxListHeight(const float& value) {
	Write((byte*)this + 3312, value);
}
// Member Getter and Setter of HasDownArrow
// Declaration: bool HasDownArrow
bool UComboBoxString::M_GetHasDownArrow() const {
	return Read<bool>((byte*)this + 3316);
}
bool* UComboBoxString::M_PtrGetHasDownArrow() {
	return reinterpret_cast<bool*>((byte*)this + 3316);
}
void UComboBoxString::M_SetHasDownArrow(const bool& value) {
	Write((byte*)this + 3316, value);
}
// Member Getter and Setter of EnableGamepadNavigationMode
// Declaration: bool EnableGamepadNavigationMode
bool UComboBoxString::M_GetEnableGamepadNavigationMode() const {
	return Read<bool>((byte*)this + 3317);
}
bool* UComboBoxString::M_PtrGetEnableGamepadNavigationMode() {
	return reinterpret_cast<bool*>((byte*)this + 3317);
}
void UComboBoxString::M_SetEnableGamepadNavigationMode(const bool& value) {
	Write((byte*)this + 3317, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UComboBoxString::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 3320);
}
struct FSlateFontInfo* UComboBoxString::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 3320);
}
void UComboBoxString::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 3320, value);
}
// Member Getter and Setter of ForegroundColor
// Declaration: struct FSlateColor ForegroundColor
struct FSlateColor UComboBoxString::M_GetForegroundColor() const {
	return Read<struct FSlateColor>((byte*)this + 3408);
}
struct FSlateColor* UComboBoxString::M_PtrGetForegroundColor() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 3408);
}
void UComboBoxString::M_SetForegroundColor(const struct FSlateColor& value) {
	Write((byte*)this + 3408, value);
}
// Member Getter and Setter of bIsFocusable
// Declaration: bool bIsFocusable
bool UComboBoxString::M_GetbIsFocusable() const {
	return Read<bool>((byte*)this + 3448);
}
bool* UComboBoxString::M_PtrGetbIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 3448);
}
void UComboBoxString::M_SetbIsFocusable(const bool& value) {
	Write((byte*)this + 3448, value);
}
// Member Getter and Setter of OnGenerateWidgetEvent
// Declaration: struct FScriptDelegate OnGenerateWidgetEvent
struct FScriptDelegate UComboBoxString::M_GetOnGenerateWidgetEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 3452);
}
struct FScriptDelegate* UComboBoxString::M_PtrGetOnGenerateWidgetEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 3452);
}
void UComboBoxString::M_SetOnGenerateWidgetEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 3452, value);
}
// Member Getter and Setter of OnSelectionChanged
// Declaration: TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature> OnSelectionChanged
TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature> UComboBoxString::M_GetOnSelectionChanged() const {
	return Read<TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>>((byte*)this + 3472);
}
TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>* UComboBoxString::M_PtrGetOnSelectionChanged() {
	return reinterpret_cast<TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>*>((byte*)this + 3472);
}
void UComboBoxString::M_SetOnSelectionChanged(const TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 3472, value);
}
// Member Getter and Setter of OnOpening
// Declaration: TAssetPtr<class FOnOpeningEvent__DelegateSignature> OnOpening
TAssetPtr<class FOnOpeningEvent__DelegateSignature> UComboBoxString::M_GetOnOpening() const {
	return Read<TAssetPtr<class FOnOpeningEvent__DelegateSignature>>((byte*)this + 3488);
}
TAssetPtr<class FOnOpeningEvent__DelegateSignature>* UComboBoxString::M_PtrGetOnOpening() {
	return reinterpret_cast<TAssetPtr<class FOnOpeningEvent__DelegateSignature>*>((byte*)this + 3488);
}
void UComboBoxString::M_SetOnOpening(const TAssetPtr<class FOnOpeningEvent__DelegateSignature>& value) {
	Write((byte*)this + 3488, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ComboBoxString.AddOption
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Option	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UComboBoxString::AddOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	struct UComboBoxString_AddOption_Params {
		struct FString Option;			//Offset: 0 | ElementSize: 16
	};
	UComboBoxString_AddOption_Params params;
	params.Option = Option;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.ClearOptions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UComboBoxString::ClearOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	struct UComboBoxString_ClearOptions_Params {
	};
	UComboBoxString_ClearOptions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.ClearSelection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UComboBoxString::ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	struct UComboBoxString_ClearSelection_Params {
	};
	UComboBoxString_ClearSelection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.FindOptionIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Option	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UComboBoxString::FindOptionIndex(struct FString Option)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	struct UComboBoxString_FindOptionIndex_Params {
		struct FString Option;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.GetOptionAtIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UComboBoxString::GetOptionAtIndex(int32_t Index)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	struct UComboBoxString_GetOptionAtIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.GetOptionCount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UComboBoxString::GetOptionCount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	struct UComboBoxString_GetOptionCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UComboBoxString_GetOptionCount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.GetSelectedIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UComboBoxString::GetSelectedIndex()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	struct UComboBoxString_GetSelectedIndex_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UComboBoxString_GetSelectedIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.GetSelectedOption
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UComboBoxString::GetSelectedOption()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	struct UComboBoxString_GetSelectedOption_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UComboBoxString_GetSelectedOption_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.IsOpen
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UComboBoxString::IsOpen()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	struct UComboBoxString_IsOpen_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UComboBoxString_IsOpen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
/////////////////////////////////////////////
void UComboBoxString::OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params {
	};
	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
// Name: SelectedItem	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SelectionType	Type: TEnumAsByte<ESelectInfo>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<ESelectInfo> SelectionType;			//Offset: 16 | ElementSize: 1
	};
	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.RefreshOptions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UComboBoxString::RefreshOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	struct UComboBoxString_RefreshOptions_Params {
	};
	UComboBoxString_RefreshOptions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.RemoveOption
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Option	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UComboBoxString::RemoveOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	struct UComboBoxString_RemoveOption_Params {
		struct FString Option;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.SetSelectedIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UComboBoxString::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	struct UComboBoxString_SetSelectedIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UComboBoxString_SetSelectedIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ComboBoxString.SetSelectedOption
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Option	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UComboBoxString::SetSelectedOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	struct UComboBoxString_SetSelectedOption_Params {
		struct FString Option;			//Offset: 0 | ElementSize: 16
	};
	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}