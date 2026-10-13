#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.Button
// Super: Class UMG.ContentWidget
// Size: 1064
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UButton : public UContentWidget {
public:
#pragma region Members
	//class USlateWidgetStyleAsset*	Style;		//Offset: 288	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//struct FButtonStyle	WidgetStyle;		//Offset: 296	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle M_GetWidgetStyle() const;
	struct FButtonStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FButtonStyle& value);

	//struct FLinearColor	ColorAndOpacity;		//Offset: 928	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetColorAndOpacity() const;
	struct FLinearColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FLinearColor& value);

	//struct FLinearColor	BackgroundColor;		//Offset: 944	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetBackgroundColor() const;
	struct FLinearColor* M_PtrGetBackgroundColor();
	void M_SetBackgroundColor(const struct FLinearColor& value);

	//TEnumAsByte<EButtonClickMethod>	ClickMethod;		//Offset: 960	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonClickMethod> M_GetClickMethod() const;
	TEnumAsByte<EButtonClickMethod>* M_PtrGetClickMethod();
	void M_SetClickMethod(const TEnumAsByte<EButtonClickMethod>& value);

	//TEnumAsByte<EButtonTouchMethod>	TouchMethod;		//Offset: 961	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonTouchMethod> M_GetTouchMethod() const;
	TEnumAsByte<EButtonTouchMethod>* M_PtrGetTouchMethod();
	void M_SetTouchMethod(const TEnumAsByte<EButtonTouchMethod>& value);

	//TEnumAsByte<EButtonPressMethod>	PressMethod;		//Offset: 962	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EButtonPressMethod> M_GetPressMethod() const;
	TEnumAsByte<EButtonPressMethod>* M_PtrGetPressMethod();
	void M_SetPressMethod(const TEnumAsByte<EButtonPressMethod>& value);

	//bool	IsFocusable;		//Offset: 963	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsFocusable() const;
	bool* M_PtrGetIsFocusable();
	void M_SetIsFocusable(const bool& value);

	//TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>	OnClicked;		//Offset: 968	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnButtonClickedEvent__DelegateSignature> M_GetOnClicked() const;
	TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>* M_PtrGetOnClicked();
	void M_SetOnClicked(const TAssetPtr<class FOnButtonClickedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>	OnPressed;		//Offset: 984	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnButtonPressedEvent__DelegateSignature> M_GetOnPressed() const;
	TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>* M_PtrGetOnPressed();
	void M_SetOnPressed(const TAssetPtr<class FOnButtonPressedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>	OnReleased;		//Offset: 1000	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature> M_GetOnReleased() const;
	TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>* M_PtrGetOnReleased();
	void M_SetOnReleased(const TAssetPtr<class FOnButtonReleasedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>	OnHovered;		//Offset: 1016	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> M_GetOnHovered() const;
	TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>* M_PtrGetOnHovered();
	void M_SetOnHovered(const TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>	OnUnhovered;		//Offset: 1032	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnButtonHoverEvent__DelegateSignature> M_GetOnUnhovered() const;
	TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>* M_PtrGetOnUnhovered();
	void M_SetOnUnhovered(const TAssetPtr<class FOnButtonHoverEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}

#pragma region Functions
	bool IsPressed()/* const*/;

	void SetBackgroundColor(struct FLinearColor InBackgroundColor);

	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);

	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);

	void SetStyle(const struct FButtonStyle& InStyle);

	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);

#pragma endregion
};
};