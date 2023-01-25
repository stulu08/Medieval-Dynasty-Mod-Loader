#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.EditableText
// Super: Class UMG.Widget
// Size: 1120
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UEditableText : public UWidget {
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

	//struct FText	HintText;		//Offset: 304	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FText M_GetHintText() const;
	struct FText* M_PtrGetHintText();
	void M_SetHintText(const struct FText& value);

	//struct FScriptDelegate	HintTextDelegate;		//Offset: 328	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetHintTextDelegate() const;
	struct FScriptDelegate* M_PtrGetHintTextDelegate();
	void M_SetHintTextDelegate(const struct FScriptDelegate& value);

	//struct FEditableTextStyle	WidgetStyle;		//Offset: 344	Size: 544	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FEditableTextStyle M_GetWidgetStyle() const;
	struct FEditableTextStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FEditableTextStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 888	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//class USlateBrushAsset*	BackgroundImageSelected;		//Offset: 896	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetBackgroundImageSelected() const;
	class USlateBrushAsset** M_PtrGetBackgroundImageSelected();
	void M_SetBackgroundImageSelected(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	BackgroundImageComposing;		//Offset: 904	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetBackgroundImageComposing() const;
	class USlateBrushAsset** M_PtrGetBackgroundImageComposing();
	void M_SetBackgroundImageComposing(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	CaretImage;		//Offset: 912	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetCaretImage() const;
	class USlateBrushAsset** M_PtrGetCaretImage();
	void M_SetCaretImage(const class USlateBrushAsset*& value);

	//struct FSlateFontInfo	Font;		//Offset: 920	Size: 88	Flags: Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FSlateColor	ColorAndOpacity;		//Offset: 1008	Size: 40	Flags: Deprecated, NativeAccessSpecifierPublic
	struct FSlateColor M_GetColorAndOpacity() const;
	struct FSlateColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FSlateColor& value);

	//bool	IsReadOnly;		//Offset: 1048	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsReadOnly() const;
	bool* M_PtrGetIsReadOnly();
	void M_SetIsReadOnly(const bool& value);

	//bool	IsPassword;		//Offset: 1049	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsPassword() const;
	bool* M_PtrGetIsPassword();
	void M_SetIsPassword(const bool& value);

	//float	MinimumDesiredWidth;		//Offset: 1052	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinimumDesiredWidth() const;
	float* M_PtrGetMinimumDesiredWidth();
	void M_SetMinimumDesiredWidth(const float& value);

	//bool	IsCaretMovedWhenGainFocus;		//Offset: 1056	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsCaretMovedWhenGainFocus() const;
	bool* M_PtrGetIsCaretMovedWhenGainFocus();
	void M_SetIsCaretMovedWhenGainFocus(const bool& value);

	//bool	SelectAllTextWhenFocused;		//Offset: 1057	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextWhenFocused() const;
	bool* M_PtrGetSelectAllTextWhenFocused();
	void M_SetSelectAllTextWhenFocused(const bool& value);

	//bool	RevertTextOnEscape;		//Offset: 1058	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRevertTextOnEscape() const;
	bool* M_PtrGetRevertTextOnEscape();
	void M_SetRevertTextOnEscape(const bool& value);

	//bool	ClearKeyboardFocusOnCommit;		//Offset: 1059	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetClearKeyboardFocusOnCommit() const;
	bool* M_PtrGetClearKeyboardFocusOnCommit();
	void M_SetClearKeyboardFocusOnCommit(const bool& value);

	//bool	SelectAllTextOnCommit;		//Offset: 1060	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextOnCommit() const;
	bool* M_PtrGetSelectAllTextOnCommit();
	void M_SetSelectAllTextOnCommit(const bool& value);

	//bool	AllowContextMenu;		//Offset: 1061	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAllowContextMenu() const;
	bool* M_PtrGetAllowContextMenu();
	void M_SetAllowContextMenu(const bool& value);

	//TEnumAsByte<EVirtualKeyboardType>	KeyboardType;		//Offset: 1062	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVirtualKeyboardType> M_GetKeyboardType() const;
	TEnumAsByte<EVirtualKeyboardType>* M_PtrGetKeyboardType();
	void M_SetKeyboardType(const TEnumAsByte<EVirtualKeyboardType>& value);

	//struct FVirtualKeyboardOptions	VirtualKeyboardOptions;		//Offset: 1063	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FVirtualKeyboardOptions M_GetVirtualKeyboardOptions() const;
	struct FVirtualKeyboardOptions* M_PtrGetVirtualKeyboardOptions();
	void M_SetVirtualKeyboardOptions(const struct FVirtualKeyboardOptions& value);

	//EVirtualKeyboardTrigger	VirtualKeyboardTrigger;		//Offset: 1064	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardTrigger M_GetVirtualKeyboardTrigger() const;
	EVirtualKeyboardTrigger* M_PtrGetVirtualKeyboardTrigger();
	void M_SetVirtualKeyboardTrigger(const EVirtualKeyboardTrigger& value);

	//EVirtualKeyboardDismissAction	VirtualKeyboardDismissAction;		//Offset: 1065	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVirtualKeyboardDismissAction M_GetVirtualKeyboardDismissAction() const;
	EVirtualKeyboardDismissAction* M_PtrGetVirtualKeyboardDismissAction();
	void M_SetVirtualKeyboardDismissAction(const EVirtualKeyboardDismissAction& value);

	//TEnumAsByte<ETextJustify>	Justification;		//Offset: 1066	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ETextJustify> M_GetJustification() const;
	TEnumAsByte<ETextJustify>* M_PtrGetJustification();
	void M_SetJustification(const TEnumAsByte<ETextJustify>& value);

	//struct FShapedTextOptions	ShapedTextOptions;		//Offset: 1067	Size: 3	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FShapedTextOptions M_GetShapedTextOptions() const;
	struct FShapedTextOptions* M_PtrGetShapedTextOptions();
	void M_SetShapedTextOptions(const struct FShapedTextOptions& value);

	//TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>	OnTextChanged;		//Offset: 1072	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature> M_GetOnTextChanged() const;
	TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>* M_PtrGetOnTextChanged();
	void M_SetOnTextChanged(const TAssetPtr<class FOnEditableTextChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>	OnTextCommitted;		//Offset: 1088	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature> M_GetOnTextCommitted() const;
	TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>* M_PtrGetOnTextCommitted();
	void M_SetOnTextCommitted(const TAssetPtr<class FOnEditableTextCommittedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}

#pragma region Functions
	struct FText GetText() const;

	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);

	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);

	void SetHintText(struct FText InHintText);

	void SetIsPassword(bool InbIsPassword);

	void SetIsReadOnly(bool InbIsReadyOnly);

	void SetJustification(TEnumAsByte<ETextJustify> InJustification);

	void SetText(struct FText InText);

#pragma endregion
};
};