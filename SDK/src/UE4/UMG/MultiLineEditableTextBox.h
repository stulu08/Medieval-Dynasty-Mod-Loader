#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/TextLayoutWidget.h"
/////////////////////////////////////////////
// Class UMG.MultiLineEditableTextBox
// Super: Class UMG.TextLayoutWidget
// Size: 3224
// Size inherited: 296
/////////////////////////////////////////////
namespace UE4 {
class UMultiLineEditableTextBox : public UTextLayoutWidget {
public:
#pragma region Members
	//struct FText	Text;		//Offset: 296	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	struct FText M_GetText() const;
	struct FText* M_PtrGetText();
	void M_SetText(const struct FText& value);

	//struct FText	HintText;		//Offset: 320	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	struct FText M_GetHintText() const;
	struct FText* M_PtrGetHintText();
	void M_SetHintText(const struct FText& value);

	//struct FScriptDelegate	HintTextDelegate;		//Offset: 344	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetHintTextDelegate() const;
	struct FScriptDelegate* M_PtrGetHintTextDelegate();
	void M_SetHintTextDelegate(const struct FScriptDelegate& value);

	//struct FEditableTextBoxStyle	WidgetStyle;		//Offset: 360	Size: 2040	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FEditableTextBoxStyle M_GetWidgetStyle() const;
	struct FEditableTextBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FEditableTextBoxStyle& value);

	//struct FTextBlockStyle	TextStyle;		//Offset: 2400	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle M_GetTextStyle() const;
	struct FTextBlockStyle* M_PtrGetTextStyle();
	void M_SetTextStyle(const struct FTextBlockStyle& value);

	//bool	bIsReadOnly;		//Offset: 3024	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsReadOnly() const;
	bool* M_PtrGetbIsReadOnly();
	void M_SetbIsReadOnly(const bool& value);

	//bool	AllowContextMenu;		//Offset: 3025	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAllowContextMenu() const;
	bool* M_PtrGetAllowContextMenu();
	void M_SetAllowContextMenu(const bool& value);

	//struct FVirtualKeyboardOptions	VirtualKeyboardOptions;		//Offset: 3026	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FVirtualKeyboardOptions M_GetVirtualKeyboardOptions() const;
	struct FVirtualKeyboardOptions* M_PtrGetVirtualKeyboardOptions();
	void M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value);

	//EVirtualKeyboardDismissAction	VirtualKeyboardDismissAction;		//Offset: 3027	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardDismissAction M_GetVirtualKeyboardDismissAction() const;
	EVirtualKeyboardDismissAction* M_PtrGetVirtualKeyboardDismissAction();
	void M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 3032	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//struct FSlateFontInfo	Font;		//Offset: 3040	Size: 88	Flags: Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FLinearColor	ForegroundColor;		//Offset: 3128	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetForegroundColor() const;
	struct FLinearColor* M_PtrGetForegroundColor();
	void M_SetForegroundColor(const struct FLinearColor& value);

	//struct FLinearColor	BackgroundColor;		//Offset: 3144	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetBackgroundColor() const;
	struct FLinearColor* M_PtrGetBackgroundColor();
	void M_SetBackgroundColor(const struct FLinearColor& value);

	//struct FLinearColor	ReadOnlyForegroundColor;		//Offset: 3160	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetReadOnlyForegroundColor() const;
	struct FLinearColor* M_PtrGetReadOnlyForegroundColor();
	void M_SetReadOnlyForegroundColor(const struct FLinearColor& value);

	//TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>	OnTextChanged;		//Offset: 3176	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature> M_GetOnTextChanged() const;
	TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>* M_PtrGetOnTextChanged();
	void M_SetOnTextChanged(const TAssetPtr<class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>	OnTextCommitted;		//Offset: 3192	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature> M_GetOnTextCommitted() const;
	TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>* M_PtrGetOnTextCommitted();
	void M_SetOnTextCommitted(const TAssetPtr<class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}

#pragma region Functions
	struct FText GetHintText() const;

	struct FText GetText() const;

	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);

	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);

	void SetError(struct FText InError);

	void SetHintText(struct FText InHintText);

	void SetIsReadOnly(bool bReadOnly);

	void SetText(struct FText InText);

	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);

#pragma endregion
};
};