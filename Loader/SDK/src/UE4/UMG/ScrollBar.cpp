#include "../SDK.h"
#include "ScrollBar.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetStyle
// Declaration: struct FScrollBarStyle WidgetStyle
struct FScrollBarStyle UScrollBar::M_GetWidgetStyle() const {
	return Read<struct FScrollBarStyle>((byte*)this + 264);
}
struct FScrollBarStyle* UScrollBar::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FScrollBarStyle*>((byte*)this + 264);
}
void UScrollBar::M_SetWidgetStyle(const struct FScrollBarStyle& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UScrollBar::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 1496);
}
class USlateWidgetStyleAsset** UScrollBar::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 1496);
}
void UScrollBar::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of bAlwaysShowScrollbar
// Declaration: bool bAlwaysShowScrollbar
bool UScrollBar::M_GetbAlwaysShowScrollbar() const {
	return Read<bool>((byte*)this + 1504);
}
bool* UScrollBar::M_PtrGetbAlwaysShowScrollbar() {
	return reinterpret_cast<bool*>((byte*)this + 1504);
}
void UScrollBar::M_SetbAlwaysShowScrollbar(const bool& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of bAlwaysShowScrollbarTrack
// Declaration: bool bAlwaysShowScrollbarTrack
bool UScrollBar::M_GetbAlwaysShowScrollbarTrack() const {
	return Read<bool>((byte*)this + 1505);
}
bool* UScrollBar::M_PtrGetbAlwaysShowScrollbarTrack() {
	return reinterpret_cast<bool*>((byte*)this + 1505);
}
void UScrollBar::M_SetbAlwaysShowScrollbarTrack(const bool& value) {
	Write((byte*)this + 1505, value);
}
// Member Getter and Setter of Orientation
// Declaration: TEnumAsByte<EOrientation> Orientation
TEnumAsByte<EOrientation> UScrollBar::M_GetOrientation() const {
	return Read<TEnumAsByte<EOrientation>>((byte*)this + 1506);
}
TEnumAsByte<EOrientation>* UScrollBar::M_PtrGetOrientation() {
	return reinterpret_cast<TEnumAsByte<EOrientation>*>((byte*)this + 1506);
}
void UScrollBar::M_SetOrientation(const TEnumAsByte<EOrientation>& value) {
	Write((byte*)this + 1506, value);
}
// Member Getter and Setter of Thickness
// Declaration: struct FVector2D Thickness
struct FVector2D UScrollBar::M_GetThickness() const {
	return Read<struct FVector2D>((byte*)this + 1508);
}
struct FVector2D* UScrollBar::M_PtrGetThickness() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 1508);
}
void UScrollBar::M_SetThickness(const struct FVector2D& value) {
	Write((byte*)this + 1508, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UScrollBar::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 1516);
}
struct FMargin* UScrollBar::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 1516);
}
void UScrollBar::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 1516, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ScrollBar.SetState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InOffsetFraction	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InThumbSizeFraction	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	struct UScrollBar_SetState_Params {
		float InOffsetFraction;			//Offset: 0 | ElementSize: 4
		float InThumbSizeFraction;			//Offset: 4 | ElementSize: 4
	};
	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}