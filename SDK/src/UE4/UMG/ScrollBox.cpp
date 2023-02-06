#include "../SDK.h"
#include "ScrollBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetStyle
// Declaration: struct FScrollBoxStyle WidgetStyle
struct FScrollBoxStyle UScrollBox::M_GetWidgetStyle() const {
	return Read<struct FScrollBoxStyle>((byte*)this + 288);
}
struct FScrollBoxStyle* UScrollBox::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FScrollBoxStyle*>((byte*)this + 288);
}
void UScrollBox::M_SetWidgetStyle(const struct FScrollBoxStyle& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of WidgetBarStyle
// Declaration: struct FScrollBarStyle WidgetBarStyle
struct FScrollBarStyle UScrollBox::M_GetWidgetBarStyle() const {
	return Read<struct FScrollBarStyle>((byte*)this + 840);
}
struct FScrollBarStyle* UScrollBox::M_PtrGetWidgetBarStyle() {
	return reinterpret_cast<struct FScrollBarStyle*>((byte*)this + 840);
}
void UScrollBox::M_SetWidgetBarStyle(const struct FScrollBarStyle& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UScrollBox::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 2072);
}
class USlateWidgetStyleAsset** UScrollBox::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 2072);
}
void UScrollBox::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 2072, value);
}
// Member Getter and Setter of BarStyle
// Declaration: class USlateWidgetStyleAsset* BarStyle
class USlateWidgetStyleAsset* UScrollBox::M_GetBarStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 2080);
}
class USlateWidgetStyleAsset** UScrollBox::M_PtrGetBarStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 2080);
}
void UScrollBox::M_SetBarStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 2080, value);
}
// Member Getter and Setter of Orientation
// Declaration: TEnumAsByte<EOrientation> Orientation
TEnumAsByte<EOrientation> UScrollBox::M_GetOrientation() const {
	return Read<TEnumAsByte<EOrientation>>((byte*)this + 2088);
}
TEnumAsByte<EOrientation>* UScrollBox::M_PtrGetOrientation() {
	return reinterpret_cast<TEnumAsByte<EOrientation>*>((byte*)this + 2088);
}
void UScrollBox::M_SetOrientation(const TEnumAsByte<EOrientation>& value) {
	Write((byte*)this + 2088, value);
}
// Member Getter and Setter of ScrollBarVisibility
// Declaration: ESlateVisibility ScrollBarVisibility
ESlateVisibility UScrollBox::M_GetScrollBarVisibility() const {
	return Read<ESlateVisibility>((byte*)this + 2089);
}
ESlateVisibility* UScrollBox::M_PtrGetScrollBarVisibility() {
	return reinterpret_cast<ESlateVisibility*>((byte*)this + 2089);
}
void UScrollBox::M_SetScrollBarVisibility(const ESlateVisibility& value) {
	Write((byte*)this + 2089, value);
}
// Member Getter and Setter of ConsumeMouseWheel
// Declaration: EConsumeMouseWheel ConsumeMouseWheel
EConsumeMouseWheel UScrollBox::M_GetConsumeMouseWheel() const {
	return Read<EConsumeMouseWheel>((byte*)this + 2090);
}
EConsumeMouseWheel* UScrollBox::M_PtrGetConsumeMouseWheel() {
	return reinterpret_cast<EConsumeMouseWheel*>((byte*)this + 2090);
}
void UScrollBox::M_SetConsumeMouseWheel(const EConsumeMouseWheel& value) {
	Write((byte*)this + 2090, value);
}
// Member Getter and Setter of ScrollbarThickness
// Declaration: struct FVector2D ScrollbarThickness
struct FVector2D UScrollBox::M_GetScrollbarThickness() const {
	return Read<struct FVector2D>((byte*)this + 2092);
}
struct FVector2D* UScrollBox::M_PtrGetScrollbarThickness() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 2092);
}
void UScrollBox::M_SetScrollbarThickness(const struct FVector2D& value) {
	Write((byte*)this + 2092, value);
}
// Member Getter and Setter of ScrollbarPadding
// Declaration: struct FMargin ScrollbarPadding
struct FMargin UScrollBox::M_GetScrollbarPadding() const {
	return Read<struct FMargin>((byte*)this + 2100);
}
struct FMargin* UScrollBox::M_PtrGetScrollbarPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 2100);
}
void UScrollBox::M_SetScrollbarPadding(const struct FMargin& value) {
	Write((byte*)this + 2100, value);
}
// Member Getter and Setter of AlwaysShowScrollbar
// Declaration: bool AlwaysShowScrollbar
bool UScrollBox::M_GetAlwaysShowScrollbar() const {
	return Read<bool>((byte*)this + 2116);
}
bool* UScrollBox::M_PtrGetAlwaysShowScrollbar() {
	return reinterpret_cast<bool*>((byte*)this + 2116);
}
void UScrollBox::M_SetAlwaysShowScrollbar(const bool& value) {
	Write((byte*)this + 2116, value);
}
// Member Getter and Setter of AlwaysShowScrollbarTrack
// Declaration: bool AlwaysShowScrollbarTrack
bool UScrollBox::M_GetAlwaysShowScrollbarTrack() const {
	return Read<bool>((byte*)this + 2117);
}
bool* UScrollBox::M_PtrGetAlwaysShowScrollbarTrack() {
	return reinterpret_cast<bool*>((byte*)this + 2117);
}
void UScrollBox::M_SetAlwaysShowScrollbarTrack(const bool& value) {
	Write((byte*)this + 2117, value);
}
// Member Getter and Setter of AllowOverscroll
// Declaration: bool AllowOverscroll
bool UScrollBox::M_GetAllowOverscroll() const {
	return Read<bool>((byte*)this + 2118);
}
bool* UScrollBox::M_PtrGetAllowOverscroll() {
	return reinterpret_cast<bool*>((byte*)this + 2118);
}
void UScrollBox::M_SetAllowOverscroll(const bool& value) {
	Write((byte*)this + 2118, value);
}
// Member Getter and Setter of bAnimateWheelScrolling
// Declaration: bool bAnimateWheelScrolling
bool UScrollBox::M_GetbAnimateWheelScrolling() const {
	return Read<bool>((byte*)this + 2119);
}
bool* UScrollBox::M_PtrGetbAnimateWheelScrolling() {
	return reinterpret_cast<bool*>((byte*)this + 2119);
}
void UScrollBox::M_SetbAnimateWheelScrolling(const bool& value) {
	Write((byte*)this + 2119, value);
}
// Member Getter and Setter of NavigationDestination
// Declaration: EDescendantScrollDestination NavigationDestination
EDescendantScrollDestination UScrollBox::M_GetNavigationDestination() const {
	return Read<EDescendantScrollDestination>((byte*)this + 2120);
}
EDescendantScrollDestination* UScrollBox::M_PtrGetNavigationDestination() {
	return reinterpret_cast<EDescendantScrollDestination*>((byte*)this + 2120);
}
void UScrollBox::M_SetNavigationDestination(const EDescendantScrollDestination& value) {
	Write((byte*)this + 2120, value);
}
// Member Getter and Setter of NavigationScrollPadding
// Declaration: float NavigationScrollPadding
float UScrollBox::M_GetNavigationScrollPadding() const {
	return Read<float>((byte*)this + 2124);
}
float* UScrollBox::M_PtrGetNavigationScrollPadding() {
	return reinterpret_cast<float*>((byte*)this + 2124);
}
void UScrollBox::M_SetNavigationScrollPadding(const float& value) {
	Write((byte*)this + 2124, value);
}
// Member Getter and Setter of ScrollWhenFocusChanges
// Declaration: EScrollWhenFocusChanges ScrollWhenFocusChanges
EScrollWhenFocusChanges UScrollBox::M_GetScrollWhenFocusChanges() const {
	return Read<EScrollWhenFocusChanges>((byte*)this + 2128);
}
EScrollWhenFocusChanges* UScrollBox::M_PtrGetScrollWhenFocusChanges() {
	return reinterpret_cast<EScrollWhenFocusChanges*>((byte*)this + 2128);
}
void UScrollBox::M_SetScrollWhenFocusChanges(const EScrollWhenFocusChanges& value) {
	Write((byte*)this + 2128, value);
}
// Member Getter and Setter of bAllowRightClickDragScrolling
// Declaration: bool bAllowRightClickDragScrolling
bool UScrollBox::M_GetbAllowRightClickDragScrolling() const {
	return Read<bool>((byte*)this + 2129);
}
bool* UScrollBox::M_PtrGetbAllowRightClickDragScrolling() {
	return reinterpret_cast<bool*>((byte*)this + 2129);
}
void UScrollBox::M_SetbAllowRightClickDragScrolling(const bool& value) {
	Write((byte*)this + 2129, value);
}
// Member Getter and Setter of WheelScrollMultiplier
// Declaration: float WheelScrollMultiplier
float UScrollBox::M_GetWheelScrollMultiplier() const {
	return Read<float>((byte*)this + 2132);
}
float* UScrollBox::M_PtrGetWheelScrollMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2132);
}
void UScrollBox::M_SetWheelScrollMultiplier(const float& value) {
	Write((byte*)this + 2132, value);
}
// Member Getter and Setter of OnUserScrolled
// Declaration: TAssetPtr<class FOnUserScrolledEvent__DelegateSignature> OnUserScrolled
TAssetPtr<class FOnUserScrolledEvent__DelegateSignature> UScrollBox::M_GetOnUserScrolled() const {
	return Read<TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>>((byte*)this + 2136);
}
TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>* UScrollBox::M_PtrGetOnUserScrolled() {
	return reinterpret_cast<TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>*>((byte*)this + 2136);
}
void UScrollBox::M_SetOnUserScrolled(const TAssetPtr<class FOnUserScrolledEvent__DelegateSignature>& value) {
	Write((byte*)this + 2136, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ScrollBox.EndInertialScrolling
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UScrollBox::EndInertialScrolling() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	struct UScrollBox_EndInertialScrolling_Params {
	};
	UScrollBox_EndInertialScrolling_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.GetScrollOffset
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UScrollBox::GetScrollOffset()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	struct UScrollBox_GetScrollOffset_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UScrollBox_GetScrollOffset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UScrollBox::GetScrollOffsetOfEnd()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	struct UScrollBox_GetScrollOffsetOfEnd_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UScrollBox_GetScrollOffsetOfEnd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ScrollBox.GetViewOffsetFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UScrollBox::GetViewOffsetFraction()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	struct UScrollBox_GetViewOffsetFraction_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UScrollBox_GetViewOffsetFraction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ScrollBox.ScrollToEnd
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UScrollBox::ScrollToEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	struct UScrollBox_ScrollToEnd_Params {
	};
	UScrollBox_ScrollToEnd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.ScrollToStart
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UScrollBox::ScrollToStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	struct UScrollBox_ScrollToStart_Params {
	};
	UScrollBox_ScrollToStart_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.ScrollWidgetIntoView
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: WidgetToFind	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AnimateScroll	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScrollDestination	Type: EDescendantScrollDestination	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Padding	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	struct UScrollBox_ScrollWidgetIntoView_Params {
		class UWidget* WidgetToFind;			//Offset: 0 | ElementSize: 8
		bool AnimateScroll;			//Offset: 8 | ElementSize: 1
		EDescendantScrollDestination ScrollDestination;			//Offset: 9 | ElementSize: 1
		float Padding;			//Offset: 12 | ElementSize: 4
	};
	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;
	params.Padding = Padding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetAllowOverscroll
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewAllowOverscroll	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	struct UScrollBox_SetAllowOverscroll_Params {
		bool NewAllowOverscroll;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetAllowOverscroll_Params params;
	params.NewAllowOverscroll = NewAllowOverscroll;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewAlwaysShowScrollbar	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	struct UScrollBox_SetAlwaysShowScrollbar_Params {
		bool NewAlwaysShowScrollbar;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetAlwaysShowScrollbar_Params params;
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetAnimateWheelScrolling
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bShouldAnimateWheelScrolling	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	struct UScrollBox_SetAnimateWheelScrolling_Params {
		bool bShouldAnimateWheelScrolling;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetAnimateWheelScrolling_Params params;
	params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetConsumeMouseWheel
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewConsumeMouseWheel	Type: EConsumeMouseWheel	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	struct UScrollBox_SetConsumeMouseWheel_Params {
		EConsumeMouseWheel NewConsumeMouseWheel;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetConsumeMouseWheel_Params params;
	params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetOrientation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewOrientation	Type: TEnumAsByte<EOrientation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	struct UScrollBox_SetOrientation_Params {
		TEnumAsByte<EOrientation> NewOrientation;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetOrientation_Params params;
	params.NewOrientation = NewOrientation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetScrollbarPadding
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: NewScrollbarPadding	Type: struct FMargin	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	struct UScrollBox_SetScrollbarPadding_Params {
		struct FMargin NewScrollbarPadding;			//Offset: 0 | ElementSize: 16
	};
	UScrollBox_SetScrollbarPadding_Params params;
	params.NewScrollbarPadding = NewScrollbarPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetScrollbarThickness
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewScrollbarThickness	Type: struct FVector2D	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	struct UScrollBox_SetScrollbarThickness_Params {
		struct FVector2D NewScrollbarThickness;			//Offset: 0 | ElementSize: 8
	};
	UScrollBox_SetScrollbarThickness_Params params;
	params.NewScrollbarThickness = NewScrollbarThickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetScrollbarVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewScrollBarVisibility	Type: ESlateVisibility	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	struct UScrollBox_SetScrollbarVisibility_Params {
		ESlateVisibility NewScrollBarVisibility;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetScrollbarVisibility_Params params;
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetScrollOffset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewScrollOffset	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetScrollOffset(float NewScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	struct UScrollBox_SetScrollOffset_Params {
		float NewScrollOffset;			//Offset: 0 | ElementSize: 4
	};
	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewScrollWhenFocusChanges	Type: EScrollWhenFocusChanges	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollWhenFocusChanges");

	struct UScrollBox_SetScrollWhenFocusChanges_Params {
		EScrollWhenFocusChanges NewScrollWhenFocusChanges;			//Offset: 0 | ElementSize: 1
	};
	UScrollBox_SetScrollWhenFocusChanges_Params params;
	params.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScrollBox.SetWheelScrollMultiplier
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewWheelScrollMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	struct UScrollBox_SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;			//Offset: 0 | ElementSize: 4
	};
	UScrollBox_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}