#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.EditableTextBox
// Super: Class UMG.Widget
// Size: 2616
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UEditableTextBox : public UWidget {
public:
#pragma region Members
	//struct FText	Text;		//Offset: 264	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	struct FText M_GetText() const;
	struct FText* M_PtrGetText();
	void M_SetText(const struct FText& value);

	//struct FScriptDelegate	TextDelegate;		//Offset: 288	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetTextDelegate() const;
	struct FScriptDelegate* M_PtrGetTextDelegate();
	void M_SetTextDelegate(const struct FScriptDelegate& value);

	//struct FEditableTextBoxStyle	WidgetStyle;		//Offset: 304	Size: 2040	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FEditableTextBoxStyle M_GetWidgetStyle() const;
	struct FEditableTextBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FEditableTextBoxStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 2344	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//struct FText	HintText;		//Offset: 2352	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FText M_GetHintText() const;
	struct FText* M_PtrGetHintText();
	void M_SetHintText(const struct FText& value);

	//struct FScriptDelegate	HintTextDelegate;		//Offset: 2376	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetHintTextDelegate() const;
	struct FScriptDelegate* M_PtrGetHintTextDelegate();
	void M_SetHintTextDelegate(const struct FScriptDelegate& value);

	//struct FSlateFontInfo	Font;		//Offset: 2392	Size: 88	Flags: Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FLinearColor	ForegroundColor;		//Offset: 2480	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetForegroundColor() const;
	struct FLinearColor* M_PtrGetForegroundColor();
	void M_SetForegroundColor(const struct FLinearColor& value);

	//struct FLinearColor	BackgroundColor;		//Offset: 2496	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetBackgroundColor() const;
	struct FLinearColor* M_PtrGetBackgroundColor();
	void M_SetBackgroundColor(const struct FLinearColor& value);

	//struct FLinearColor	ReadOnlyForegroundColor;		//Offset: 2512	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetReadOnlyForegroundColor() const;
	struct FLinearColor* M_PtrGetReadOnlyForegroundColor();
	void M_SetReadOnlyForegroundColor(const struct FLinearColor& value);

	//bool	IsReadOnly;		//Offset: 2528	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsReadOnly() const;
	bool* M_PtrGetIsReadOnly();
	void M_SetIsReadOnly(const bool& value);

	//bool	IsPassword;		//Offset: 2529	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsPassword() const;
	bool* M_PtrGetIsPassword();
	void M_SetIsPassword(const bool& value);

	//float	MinimumDesiredWidth;		//Offset: 2532	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinimumDesiredWidth() const;
	float* M_PtrGetMinimumDesiredWidth();
	void M_SetMinimumDesiredWidth(const float& value);

	//struct FMargin	Padding;		//Offset: 2536	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//bool	IsCaretMovedWhenGainFocus;		//Offset: 2552	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsCaretMovedWhenGainFocus() const;
	bool* M_PtrGetIsCaretMovedWhenGainFocus();
	void M_SetIsCaretMovedWhenGainFocus(const bool& value);

	//bool	SelectAllTextWhenFocused;		//Offset: 2553	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextWhenFocused() const;
	bool* M_PtrGetSelectAllTextWhenFocused();
	void M_SetSelectAllTextWhenFocused(const bool& value);

	//bool	RevertTextOnEscape;		//Offset: 2554	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRevertTextOnEscape() const;
	bool* M_PtrGetRevertTextOnEscape();
	void M_SetRevertTextOnEscape(const bool& value);

	//bool	ClearKeyboardFocusOnCommit;		//Offset: 2555	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetClearKeyboardFocusOnCommit() const;
	bool* M_PtrGetClearKeyboardFocusOnCommit();
	void M_SetClearKeyboardFocusOnCommit(const bool& value);

	//bool	SelectAllTextOnCommit;		//Offset: 2556	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextOnCommit() const;
	bool* M_PtrGetSelectAllTextOnCommit();
	void M_SetSelectAllTextOnCommit(const bool& value);

	//bool	AllowContextMenu;		//Offset: 2557	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAllowContextMenu() const;
	bool* M_PtrGetAllowContextMenu();
	void M_SetAllowContextMenu(const bool& value);

	//TEnumAsByte<EVirtualKeyboardType>	KeyboardType;		//Offset: 2558	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVirtualKeyboardType> M_GetKeyboardType() const;
	TEnumAsByte<EVirtualKeyboardType>* M_PtrGetKeyboardType();
	void M_SetKeyboardType(const TEnumAsByte<EVirtualKeyboardType>& value);

	//struct FVirtualKeyboardOptions	VirtualKeyboardOptions;		//Offset: 2559	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FVirtualKeyboardOptions M_GetVirtualKeyboardOptions() const;
	struct FVirtualKeyboardOptions* M_PtrGetVirtualKeyboardOptions();
	void M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value);

	//EVirtualKeyboardTrigger	VirtualKeyboardTrigger;		//Offset: 2560	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardTrigger M_GetVirtualKeyboardTrigger() const;
	EVirtualKeyboardTrigger* M_PtrGetVirtualKeyboardTrigger();
	void M_SetVirtualKeyboardTrigger(const EVirtualKeyboardTrigger& value);

	//EVirtualKeyboardDismissAction	VirtualKeyboardDismissAction;		//Offset: 2561	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardDismissAction M_GetVirtualKeyboardDismissAction() const;
	EVirtualKeyboardDismissAction* M_PtrGetVirtualKeyboardDismissAction();
	void M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value);

	//TEnumAsByte<ETextJustify>	Justification;		//Offset: 2562	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ETextJustify> M_GetJustification() const;
	TEnumAsByte<ETextJustify>* M_PtrGetJustification();
	void M_SetJustification(const TEnumAsByte<ETextJustify>& value);

	//struct FShapedTextOptions	ShapedTextOptions;		//Offset: 2563	Size: 3	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FShapedTextOptions M_GetShapedTextOptions() const;
	struct FShapedTextOptions* M_PtrGetShapedTextOptions();
	void M_SetShapedTextOptions(const struct FShapedTextOptions& value);

	//TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>	OnTextChanged;		//Offset: 2568	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature> M_GetOnTextChanged() const;
	TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>* M_PtrGetOnTextChanged();
	void M_SetOnTextChanged(const TAssetPtr<class FOnEditableTextBoxChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>	OnTextCommitted;		//Offset: 2584	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature> M_GetOnTextCommitted() const;
	TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>* M_PtrGetOnTextCommitted();
	void M_SetOnTextCommitted(const TAssetPtr<class FOnEditableTextBoxCommittedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}

#pragma region Functions
	void ClearError();

	struct FText GetText()/* const*/;

	bool HasError()/* const*/;

	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);

	void SetError(struct FText InError);

	void SetHintText(struct FText InText);

	void SetIsPassword(bool bIsPassword);

	void SetIsReadOnly(bool bReadOnly);

	void SetJustification(TEnumAsByte<ETextJustify> InJustification);

	void SetText(struct FText InText);

#pragma endregion
};
};