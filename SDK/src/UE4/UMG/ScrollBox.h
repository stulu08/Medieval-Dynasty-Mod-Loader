#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.ScrollBox
// Super: Class UMG.PanelWidget
// Size: 2176
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UScrollBox : public UPanelWidget {
public:
#pragma region Members
	//struct FScrollBoxStyle	WidgetStyle;		//Offset: 288	Size: 552	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FScrollBoxStyle M_GetWidgetStyle() const;
	struct FScrollBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FScrollBoxStyle& value);

	//struct FScrollBarStyle	WidgetBarStyle;		//Offset: 840	Size: 1232	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FScrollBarStyle M_GetWidgetBarStyle() const;
	struct FScrollBarStyle* M_PtrGetWidgetBarStyle();
	void M_SetWidgetBarStyle(const struct FScrollBarStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 2072	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//class USlateWidgetStyleAsset*	BarStyle;		//Offset: 2080	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetBarStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetBarStyle();
	void M_SetBarStyle(const class USlateWidgetStyleAsset*& value);

	//TEnumAsByte<EOrientation>	Orientation;		//Offset: 2088	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EOrientation> M_GetOrientation() const;
	TEnumAsByte<EOrientation>* M_PtrGetOrientation();
	void M_SetOrientation(const TEnumAsByte<EOrientation>& value);

	//ESlateVisibility	ScrollBarVisibility;		//Offset: 2089	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESlateVisibility M_GetScrollBarVisibility() const;
	ESlateVisibility* M_PtrGetScrollBarVisibility();
	void M_SetScrollBarVisibility(const ESlateVisibility& value);

	//EConsumeMouseWheel	ConsumeMouseWheel;		//Offset: 2090	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EConsumeMouseWheel M_GetConsumeMouseWheel() const;
	EConsumeMouseWheel* M_PtrGetConsumeMouseWheel();
	void M_SetConsumeMouseWheel(const EConsumeMouseWheel& value);

	//struct FVector2D	ScrollbarThickness;		//Offset: 2092	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetScrollbarThickness() const;
	struct FVector2D* M_PtrGetScrollbarThickness();
	void M_SetScrollbarThickness(const struct FVector2D& value);

	//struct FMargin	ScrollbarPadding;		//Offset: 2100	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetScrollbarPadding() const;
	struct FMargin* M_PtrGetScrollbarPadding();
	void M_SetScrollbarPadding(const struct FMargin& value);

	//bool	AlwaysShowScrollbar;		//Offset: 2116	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAlwaysShowScrollbar() const;
	bool* M_PtrGetAlwaysShowScrollbar();
	void M_SetAlwaysShowScrollbar(const bool& value);

	//bool	AlwaysShowScrollbarTrack;		//Offset: 2117	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAlwaysShowScrollbarTrack() const;
	bool* M_PtrGetAlwaysShowScrollbarTrack();
	void M_SetAlwaysShowScrollbarTrack(const bool& value);

	//bool	AllowOverscroll;		//Offset: 2118	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetAllowOverscroll() const;
	bool* M_PtrGetAllowOverscroll();
	void M_SetAllowOverscroll(const bool& value);

	//bool	bAnimateWheelScrolling;		//Offset: 2119	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAnimateWheelScrolling() const;
	bool* M_PtrGetbAnimateWheelScrolling();
	void M_SetbAnimateWheelScrolling(const bool& value);

	//EDescendantScrollDestination	NavigationDestination;		//Offset: 2120	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDescendantScrollDestination M_GetNavigationDestination() const;
	EDescendantScrollDestination* M_PtrGetNavigationDestination();
	void M_SetNavigationDestination(const EDescendantScrollDestination& value);

	//float	NavigationScrollPadding;		//Offset: 2124	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetNavigationScrollPadding() const;
	float* M_PtrGetNavigationScrollPadding();
	void M_SetNavigationScrollPadding(const float& value);

	//EScrollWhenFocusChanges	ScrollWhenFocusChanges;		//Offset: 2128	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EScrollWhenFocusChanges M_GetScrollWhenFocusChanges() const;
	EScrollWhenFocusChanges* M_PtrGetScrollWhenFocusChanges();
	void M_SetScrollWhenFocusChanges(const EScrollWhenFocusChanges& value);

	//bool	bAllowRightClickDragScrolling;		//Offset: 2129	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAllowRightClickDragScrolling() const;
	bool* M_PtrGetbAllowRightClickDragScrolling();
	void M_SetbAllowRightClickDragScrolling(const bool& value);

	//float	WheelScrollMultiplier;		//Offset: 2132	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetWheelScrollMultiplier() const;
	float* M_PtrGetWheelScrollMultiplier();
	void M_SetWheelScrollMultiplier(const float& value);

	//TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>	OnUserScrolled;		//Offset: 2136	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnUserScrolledEvent__DelegateSignature> M_GetOnUserScrolled() const;
	TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>* M_PtrGetOnUserScrolled();
	void M_SetOnUserScrolled(const TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}

#pragma region Functions
	void EndInertialScrolling();

	float GetScrollOffset()/* const*/;

	float GetScrollOffsetOfEnd()/* const*/;

	float GetViewOffsetFraction()/* const*/;

	void ScrollToEnd();

	void ScrollToStart();

	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);

	void SetAllowOverscroll(bool NewAllowOverscroll);

	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);

	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);

	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);

	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);

	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);

	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);

	void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);

	void SetScrollOffset(float NewScrollOffset);

	void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

#pragma endregion
};
};