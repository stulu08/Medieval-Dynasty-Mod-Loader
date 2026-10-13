#include "../SDK.h"
#include "ProgressBar.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetStyle
// Declaration: struct FProgressBarStyle WidgetStyle
struct FProgressBarStyle UProgressBar::M_GetWidgetStyle() const {
	return Read<struct FProgressBarStyle>((byte*)this + 264);
}
struct FProgressBarStyle* UProgressBar::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FProgressBarStyle*>((byte*)this + 264);
}
void UProgressBar::M_SetWidgetStyle(const struct FProgressBarStyle& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* UProgressBar::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 680);
}
class USlateWidgetStyleAsset** UProgressBar::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 680);
}
void UProgressBar::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of BackgroundImage
// Declaration: class USlateBrushAsset* BackgroundImage
class USlateBrushAsset* UProgressBar::M_GetBackgroundImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 688);
}
class USlateBrushAsset** UProgressBar::M_PtrGetBackgroundImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 688);
}
void UProgressBar::M_SetBackgroundImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of FillImage
// Declaration: class USlateBrushAsset* FillImage
class USlateBrushAsset* UProgressBar::M_GetFillImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 696);
}
class USlateBrushAsset** UProgressBar::M_PtrGetFillImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 696);
}
void UProgressBar::M_SetFillImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of MarqueeImage
// Declaration: class USlateBrushAsset* MarqueeImage
class USlateBrushAsset* UProgressBar::M_GetMarqueeImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 704);
}
class USlateBrushAsset** UProgressBar::M_PtrGetMarqueeImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 704);
}
void UProgressBar::M_SetMarqueeImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of Percent
// Declaration: float Percent
float UProgressBar::M_GetPercent() const {
	return Read<float>((byte*)this + 712);
}
float* UProgressBar::M_PtrGetPercent() {
	return reinterpret_cast<float*>((byte*)this + 712);
}
void UProgressBar::M_SetPercent(const float& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of BarFillType
// Declaration: TEnumAsByte<EProgressBarFillType> BarFillType
TEnumAsByte<EProgressBarFillType> UProgressBar::M_GetBarFillType() const {
	return Read<TEnumAsByte<EProgressBarFillType>>((byte*)this + 716);
}
TEnumAsByte<EProgressBarFillType>* UProgressBar::M_PtrGetBarFillType() {
	return reinterpret_cast<TEnumAsByte<EProgressBarFillType>*>((byte*)this + 716);
}
void UProgressBar::M_SetBarFillType(const TEnumAsByte<EProgressBarFillType>& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of bIsMarquee
// Declaration: bool bIsMarquee
bool UProgressBar::M_GetbIsMarquee() const {
	return Read<bool>((byte*)this + 717);
}
bool* UProgressBar::M_PtrGetbIsMarquee() {
	return reinterpret_cast<bool*>((byte*)this + 717);
}
void UProgressBar::M_SetbIsMarquee(const bool& value) {
	Write((byte*)this + 717, value);
}
// Member Getter and Setter of BorderPadding
// Declaration: struct FVector2D BorderPadding
struct FVector2D UProgressBar::M_GetBorderPadding() const {
	return Read<struct FVector2D>((byte*)this + 720);
}
struct FVector2D* UProgressBar::M_PtrGetBorderPadding() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 720);
}
void UProgressBar::M_SetBorderPadding(const struct FVector2D& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of PercentDelegate
// Declaration: struct FScriptDelegate PercentDelegate
struct FScriptDelegate UProgressBar::M_GetPercentDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 728);
}
struct FScriptDelegate* UProgressBar::M_PtrGetPercentDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 728);
}
void UProgressBar::M_SetPercentDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of FillColorAndOpacity
// Declaration: struct FLinearColor FillColorAndOpacity
struct FLinearColor UProgressBar::M_GetFillColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 744);
}
struct FLinearColor* UProgressBar::M_PtrGetFillColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 744);
}
void UProgressBar::M_SetFillColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of FillColorAndOpacityDelegate
// Declaration: struct FScriptDelegate FillColorAndOpacityDelegate
struct FScriptDelegate UProgressBar::M_GetFillColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 760);
}
struct FScriptDelegate* UProgressBar::M_PtrGetFillColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 760);
}
void UProgressBar::M_SetFillColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 760, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ProgressBar.SetFillColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProgressBar::SetFillColorAndOpacity(struct FLinearColor InColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	struct UProgressBar_SetFillColorAndOpacity_Params {
		struct FLinearColor InColor;			//Offset: 0 | ElementSize: 16
	};
	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ProgressBar.SetIsMarquee
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InbIsMarquee	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProgressBar::SetIsMarquee(bool InbIsMarquee) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	struct UProgressBar_SetIsMarquee_Params {
		bool InbIsMarquee;			//Offset: 0 | ElementSize: 1
	};
	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ProgressBar.SetPercent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPercent	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProgressBar::SetPercent(float InPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	struct UProgressBar_SetPercent_Params {
		float InPercent;			//Offset: 0 | ElementSize: 4
	};
	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}