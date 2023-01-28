#include "../SDK.h"
#include "ExpandableArea.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Style
// Declaration: struct FExpandableAreaStyle Style
struct FExpandableAreaStyle UExpandableArea::M_GetStyle() const {
	return Read<struct FExpandableAreaStyle>((byte*)this + 272);
}
struct FExpandableAreaStyle* UExpandableArea::M_PtrGetStyle() {
	return reinterpret_cast<struct FExpandableAreaStyle*>((byte*)this + 272);
}
void UExpandableArea::M_SetStyle(const struct FExpandableAreaStyle& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of BorderBrush
// Declaration: struct FSlateBrush BorderBrush
struct FSlateBrush UExpandableArea::M_GetBorderBrush() const {
	return Read<struct FSlateBrush>((byte*)this + 560);
}
struct FSlateBrush* UExpandableArea::M_PtrGetBorderBrush() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 560);
}
void UExpandableArea::M_SetBorderBrush(const struct FSlateBrush& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of BorderColor
// Declaration: struct FSlateColor BorderColor
struct FSlateColor UExpandableArea::M_GetBorderColor() const {
	return Read<struct FSlateColor>((byte*)this + 696);
}
struct FSlateColor* UExpandableArea::M_PtrGetBorderColor() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 696);
}
void UExpandableArea::M_SetBorderColor(const struct FSlateColor& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of bIsExpanded
// Declaration: bool bIsExpanded
bool UExpandableArea::M_GetbIsExpanded() const {
	return Read<bool>((byte*)this + 736);
}
bool* UExpandableArea::M_PtrGetbIsExpanded() {
	return reinterpret_cast<bool*>((byte*)this + 736);
}
void UExpandableArea::M_SetbIsExpanded(const bool& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of MaxHeight
// Declaration: float MaxHeight
float UExpandableArea::M_GetMaxHeight() const {
	return Read<float>((byte*)this + 740);
}
float* UExpandableArea::M_PtrGetMaxHeight() {
	return reinterpret_cast<float*>((byte*)this + 740);
}
void UExpandableArea::M_SetMaxHeight(const float& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of HeaderPadding
// Declaration: struct FMargin HeaderPadding
struct FMargin UExpandableArea::M_GetHeaderPadding() const {
	return Read<struct FMargin>((byte*)this + 744);
}
struct FMargin* UExpandableArea::M_PtrGetHeaderPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 744);
}
void UExpandableArea::M_SetHeaderPadding(const struct FMargin& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of AreaPadding
// Declaration: struct FMargin AreaPadding
struct FMargin UExpandableArea::M_GetAreaPadding() const {
	return Read<struct FMargin>((byte*)this + 760);
}
struct FMargin* UExpandableArea::M_PtrGetAreaPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 760);
}
void UExpandableArea::M_SetAreaPadding(const struct FMargin& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of OnExpansionChanged
// Declaration: TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature> OnExpansionChanged
TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature> UExpandableArea::M_GetOnExpansionChanged() const {
	return Read<TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>>((byte*)this + 776);
}
TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>* UExpandableArea::M_PtrGetOnExpansionChanged() {
	return reinterpret_cast<TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>*>((byte*)this + 776);
}
void UExpandableArea::M_SetOnExpansionChanged(const TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of HeaderContent
// Declaration: class UWidget* HeaderContent
class UWidget* UExpandableArea::M_GetHeaderContent() const {
	return Read<class UWidget*>((byte*)this + 792);
}
class UWidget** UExpandableArea::M_PtrGetHeaderContent() {
	return reinterpret_cast<class UWidget**>((byte*)this + 792);
}
void UExpandableArea::M_SetHeaderContent(const class UWidget*& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of BodyContent
// Declaration: class UWidget* BodyContent
class UWidget* UExpandableArea::M_GetBodyContent() const {
	return Read<class UWidget*>((byte*)this + 800);
}
class UWidget** UExpandableArea::M_PtrGetBodyContent() {
	return reinterpret_cast<class UWidget**>((byte*)this + 800);
}
void UExpandableArea::M_SetBodyContent(const class UWidget*& value) {
	Write((byte*)this + 800, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ExpandableArea.GetIsExpanded
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UExpandableArea::GetIsExpanded()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	struct UExpandableArea_GetIsExpanded_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UExpandableArea_GetIsExpanded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ExpandableArea.SetIsExpanded
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IsExpanded	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UExpandableArea::SetIsExpanded(bool IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	struct UExpandableArea_SetIsExpanded_Params {
		bool IsExpanded;			//Offset: 0 | ElementSize: 1
	};
	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ExpandableArea.SetIsExpanded_Animated
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IsExpanded	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	struct UExpandableArea_SetIsExpanded_Animated_Params {
		bool IsExpanded;			//Offset: 0 | ElementSize: 1
	};
	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}