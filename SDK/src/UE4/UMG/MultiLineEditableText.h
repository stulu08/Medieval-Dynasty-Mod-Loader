#pragma once
#include "Structs.h"
#include "UMG/TextLayoutWidget.h"
/////////////////////////////////////////////
// Class UMG.MultiLineEditableText
// Super: Class UMG.TextLayoutWidget
// Size: 1136
// Size inherited: 296
/////////////////////////////////////////////
namespace UE4 {
class UMultiLineEditableText : public UTextLayoutWidget {
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

	//struct FTextBlockStyle	WidgetStyle;		//Offset: 360	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle M_GetWidgetStyle() const;
	struct FTextBlockStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FTextBlockStyle& value);

	//bool	bIsReadOnly;		//Offset: 984	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsReadOnly() const;
	bool* M_PtrGetbIsReadOnly();
	void M_SetbIsReadOnly(const bool& value);

	//struct FSlateFontInfo	Font;		//Offset: 992	Size: 88	Flags: Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//bool	SelectAllTextWhenFocused;		//Offset: 1080	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextWhenFocused() const;
	bool* M_PtrGetSelectAllTextWhenFocused();
	void M_SetSelectAllTextWhenFocused(const bool& value);

	//bool	ClearTextSelectionOnFocusLoss;		//Offset: 1081	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetClearTextSelectionOnFocusLoss() const;
	bool* M_PtrGetClearTextSelectionOnFocusLoss();
	void M_SetClearTextSelectionOnFocusLoss(const bool& value);

	//bool	RevertTextOnEscape;		//Offset: 1082	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRevertTextOnEscape() const;
	bool* M_PtrGetRevertTextOnEscape();
	void M_SetRevertTextOnEscape(const bool& value);

	//bool	ClearKeyboardFocusOnCommit;		//Offset: 1083	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetClearKeyboardFocusOnCommit() const;
	bool* M_PtrGetClearKeyboardFocusOnCommit();
	void M_SetClearKeyboardFocusOnCommit(const bool& value);

	//bool	AllowContextMenu;		//Offset: 1084	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAllowContextMenu() const;
	bool* M_PtrGetAllowContextMenu();
	void M_SetAllowContextMenu(const bool& value);

	//struct FVirtualKeyboardOptions	VirtualKeyboardOptions;		//Offset: 1085	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FVirtualKeyboardOptions M_GetVirtualKeyboardOptions() const;
	struct FVirtualKeyboardOptions* M_PtrGetVirtualKeyboardOptions();
	void M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value);

	//EVirtualKeyboardDismissAction	VirtualKeyboardDismissAction;		//Offset: 1086	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardDismissAction M_GetVirtualKeyboardDismissAction() const;
	EVirtualKeyboardDismissAction* M_PtrGetVirtualKeyboardDismissAction();
	void M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value);

	//TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>	OnTextChanged;		//Offset: 1088	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature> M_GetOnTextChanged() const;
	TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>* M_PtrGetOnTextChanged();
	void M_SetOnTextChanged(const TAssetPtr<class FOnMultiLineEditableTextChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>	OnTextCommitted;		//Offset: 1104	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature> M_GetOnTextCommitted() const;
	TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>* M_PtrGetOnTextCommitted();
	void M_SetOnTextCommitted(const TAssetPtr<class FOnMultiLineEditableTextCommittedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}

#pragma region Functions
	struct FText GetHintText()/* const*/;

	struct FText GetText()/* const*/;

	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);

	void SetHintText(struct FText InHintText);

	void SetIsReadOnly(bool bReadOnly);

	void SetText(struct FText InText);

	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);

#pragma endregion
};
};