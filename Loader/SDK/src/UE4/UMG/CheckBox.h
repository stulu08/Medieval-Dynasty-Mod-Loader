#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.CheckBox
// Super: Class UMG.ContentWidget
// Size: 1904
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UCheckBox : public UContentWidget {
public:
#pragma region Members
	//ECheckBoxState	CheckedState;		//Offset: 288	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ECheckBoxState M_GetCheckedState() const;
	ECheckBoxState* M_PtrGetCheckedState();
	void M_SetCheckedState(const ECheckBoxState& value);

	//struct FScriptDelegate	CheckedStateDelegate;		//Offset: 292	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetCheckedStateDelegate() const;
	struct FScriptDelegate* M_PtrGetCheckedStateDelegate();
	void M_SetCheckedStateDelegate(const struct FScriptDelegate& value);

	//struct FCheckBoxStyle	WidgetStyle;		//Offset: 312	Size: 1408	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FCheckBoxStyle M_GetWidgetStyle() const;
	struct FCheckBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FCheckBoxStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 1720	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//class USlateBrushAsset*	UncheckedImage;		//Offset: 1728	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUncheckedImage() const;
	class USlateBrushAsset** M_PtrGetUncheckedImage();
	void M_SetUncheckedImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	UncheckedHoveredImage;		//Offset: 1736	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUncheckedHoveredImage() const;
	class USlateBrushAsset** M_PtrGetUncheckedHoveredImage();
	void M_SetUncheckedHoveredImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	UncheckedPressedImage;		//Offset: 1744	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUncheckedPressedImage() const;
	class USlateBrushAsset** M_PtrGetUncheckedPressedImage();
	void M_SetUncheckedPressedImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	CheckedImage;		//Offset: 1752	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetCheckedImage() const;
	class USlateBrushAsset** M_PtrGetCheckedImage();
	void M_SetCheckedImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	CheckedHoveredImage;		//Offset: 1760	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetCheckedHoveredImage() const;
	class USlateBrushAsset** M_PtrGetCheckedHoveredImage();
	void M_SetCheckedHoveredImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	CheckedPressedImage;		//Offset: 1768	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetCheckedPressedImage() const;
	class USlateBrushAsset** M_PtrGetCheckedPressedImage();
	void M_SetCheckedPressedImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	UndeterminedImage;		//Offset: 1776	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUndeterminedImage() const;
	class USlateBrushAsset** M_PtrGetUndeterminedImage();
	void M_SetUndeterminedImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	UndeterminedHoveredImage;		//Offset: 1784	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUndeterminedHoveredImage() const;
	class USlateBrushAsset** M_PtrGetUndeterminedHoveredImage();
	void M_SetUndeterminedHoveredImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	UndeterminedPressedImage;		//Offset: 1792	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetUndeterminedPressedImage() const;
	class USlateBrushAsset** M_PtrGetUndeterminedPressedImage();
	void M_SetUndeterminedPressedImage(const class USlateBrushAsset*& value);

	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 1800	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//struct FMargin	Padding;		//Offset: 1804	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//struct FSlateColor	BorderBackgroundColor;		//Offset: 1824	Size: 40	Flags: Deprecated, NativeAccessSpecifierPublic
	struct FSlateColor M_GetBorderBackgroundColor() const;
	struct FSlateColor* M_PtrGetBorderBackgroundColor();
	void M_SetBorderBackgroundColor(const struct FSlateColor& value);

	//TEnumAsByte<EButtonClickMethod>	ClickMethod;		//Offset: 1864	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonClickMethod> M_GetClickMethod() const;
	TEnumAsByte<EButtonClickMethod>* M_PtrGetClickMethod();
	void M_SetClickMethod(const TEnumAsByte<EButtonClickMethod>& value);

	//TEnumAsByte<EButtonTouchMethod>	TouchMethod;		//Offset: 1865	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonTouchMethod> M_GetTouchMethod() const;
	TEnumAsByte<EButtonTouchMethod>* M_PtrGetTouchMethod();
	void M_SetTouchMethod(const TEnumAsByte<EButtonTouchMethod>& value);

	//TEnumAsByte<EButtonPressMethod>	PressMethod;		//Offset: 1866	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonPressMethod> M_GetPressMethod() const;
	TEnumAsByte<EButtonPressMethod>* M_PtrGetPressMethod();
	void M_SetPressMethod(const TEnumAsByte<EButtonPressMethod>& value);

	//bool	IsFocusable;		//Offset: 1867	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsFocusable() const;
	bool* M_PtrGetIsFocusable();
	void M_SetIsFocusable(const bool& value);

	//TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>	OnCheckStateChanged;		//Offset: 1872	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature> M_GetOnCheckStateChanged() const;
	TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>* M_PtrGetOnCheckStateChanged();
	void M_SetOnCheckStateChanged(const TAssetPtr<class FOnCheckBoxComponentStateChanged__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}

#pragma region Functions
	ECheckBoxState GetCheckedState()/* const*/;

	bool IsChecked()/* const*/;

	bool IsPressed()/* const*/;

	void SetCheckedState(ECheckBoxState InCheckedState);

	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);

	void SetIsChecked(bool InIsChecked);

	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);

	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);

#pragma endregion
};
};