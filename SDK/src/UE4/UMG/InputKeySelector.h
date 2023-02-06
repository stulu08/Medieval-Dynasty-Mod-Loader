#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.InputKeySelector
// Super: Class UMG.Widget
// Size: 1792
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UInputKeySelector : public UWidget {
public:
#pragma region Members
	//struct FButtonStyle	WidgetStyle;		//Offset: 264	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle M_GetWidgetStyle() const;
	struct FButtonStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FButtonStyle& value);

	//struct FTextBlockStyle	TextStyle;		//Offset: 896	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle M_GetTextStyle() const;
	struct FTextBlockStyle* M_PtrGetTextStyle();
	void M_SetTextStyle(const struct FTextBlockStyle& value);

	//struct FInputChord	SelectedKey;		//Offset: 1520	Size: 32	Flags: BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputChord M_GetSelectedKey() const;
	struct FInputChord* M_PtrGetSelectedKey();
	void M_SetSelectedKey(const struct FInputChord& value);

	//struct FSlateFontInfo	Font;		//Offset: 1552	Size: 88	Flags: Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FMargin	Margin;		//Offset: 1640	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetMargin() const;
	struct FMargin* M_PtrGetMargin();
	void M_SetMargin(const struct FMargin& value);

	//struct FLinearColor	ColorAndOpacity;		//Offset: 1656	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetColorAndOpacity() const;
	struct FLinearColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FLinearColor& value);

	//struct FText	KeySelectionText;		//Offset: 1672	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FText M_GetKeySelectionText() const;
	struct FText* M_PtrGetKeySelectionText();
	void M_SetKeySelectionText(const struct FText& value);

	//struct FText	NoKeySpecifiedText;		//Offset: 1696	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FText M_GetNoKeySpecifiedText() const;
	struct FText* M_PtrGetNoKeySpecifiedText();
	void M_SetNoKeySpecifiedText(const struct FText& value);

	//bool	bAllowModifierKeys;		//Offset: 1720	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAllowModifierKeys() const;
	bool* M_PtrGetbAllowModifierKeys();
	void M_SetbAllowModifierKeys(const bool& value);

	//bool	bAllowGamepadKeys;		//Offset: 1721	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAllowGamepadKeys() const;
	bool* M_PtrGetbAllowGamepadKeys();
	void M_SetbAllowGamepadKeys(const bool& value);

	//TArray<struct FKey>	EscapeKeys;		//Offset: 1728	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FKey> M_GetEscapeKeys() const;
	TArray<struct FKey>* M_PtrGetEscapeKeys();
	void M_SetEscapeKeys(const TArray<struct FKey>& value);

	//TAssetPtr<class FOnKeySelected__DelegateSignature>	OnKeySelected;		//Offset: 1744	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnKeySelected__DelegateSignature> M_GetOnKeySelected() const;
	TAssetPtr<class FOnKeySelected__DelegateSignature>* M_PtrGetOnKeySelected();
	void M_SetOnKeySelected(const TAssetPtr<class FOnKeySelected__DelegateSignature>& value);

	//TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>	OnIsSelectingKeyChanged;		//Offset: 1760	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature> M_GetOnIsSelectingKeyChanged() const;
	TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>* M_PtrGetOnIsSelectingKeyChanged();
	void M_SetOnIsSelectingKeyChanged(const TAssetPtr<class FOnIsSelectingKeyChanged__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}

#pragma region Functions
	bool GetIsSelectingKey()/* const*/;

	void OnIsSelectingKeyChanged__DelegateSignature();

	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey);

	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);

	void SetAllowModifierKeys(bool bInAllowModifierKeys);

	void SetEscapeKeys(const TArray<struct FKey>& InKeys);

	void SetKeySelectionText(struct FText InKeySelectionText);

	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText);

	void SetSelectedKey(const struct FInputChord& InSelectedKey);

	void SetTextBlockVisibility(ESlateVisibility InVisibility);

#pragma endregion
};
};