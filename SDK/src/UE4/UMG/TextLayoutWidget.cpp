#include "../SDK.h"
#include "TextLayoutWidget.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ShapedTextOptions
// Declaration: struct FShapedTextOptions ShapedTextOptions
struct FShapedTextOptions UTextLayoutWidget::M_GetShapedTextOptions() const {
	return Read<struct FShapedTextOptions>((byte*)this + 264);
}
struct FShapedTextOptions* UTextLayoutWidget::M_PtrGetShapedTextOptions() {
	return reinterpret_cast<struct FShapedTextOptions*>((byte*)this + 264);
}
void UTextLayoutWidget::M_SetShapedTextOptions(const struct FShapedTextOptions& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of Justification
// Declaration: TEnumAsByte<ETextJustify> Justification
TEnumAsByte<ETextJustify> UTextLayoutWidget::M_GetJustification() const {
	return Read<TEnumAsByte<ETextJustify>>((byte*)this + 267);
}
TEnumAsByte<ETextJustify>* UTextLayoutWidget::M_PtrGetJustification() {
	return reinterpret_cast<TEnumAsByte<ETextJustify>*>((byte*)this + 267);
}
void UTextLayoutWidget::M_SetJustification(const TEnumAsByte<ETextJustify>& value) {
	Write((byte*)this + 267, value);
}
// Member Getter and Setter of WrappingPolicy
// Declaration: ETextWrappingPolicy WrappingPolicy
ETextWrappingPolicy UTextLayoutWidget::M_GetWrappingPolicy() const {
	return Read<ETextWrappingPolicy>((byte*)this + 268);
}
ETextWrappingPolicy* UTextLayoutWidget::M_PtrGetWrappingPolicy() {
	return reinterpret_cast<ETextWrappingPolicy*>((byte*)this + 268);
}
void UTextLayoutWidget::M_SetWrappingPolicy(const ETextWrappingPolicy& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of AutoWrapText
// Declaration: unsigned char AutoWrapText : 1
unsigned char UTextLayoutWidget::M_GetAutoWrapText() const {
	return Read<unsigned char>((byte*)this + 269);
}
unsigned char* UTextLayoutWidget::M_PtrGetAutoWrapText() {
	return reinterpret_cast<unsigned char*>((byte*)this + 269);
}
void UTextLayoutWidget::M_SetAutoWrapText(const unsigned char& value) {
	Write((byte*)this + 269, value);
}
// Member Getter and Setter of WrapTextAt
// Declaration: float WrapTextAt
float UTextLayoutWidget::M_GetWrapTextAt() const {
	return Read<float>((byte*)this + 272);
}
float* UTextLayoutWidget::M_PtrGetWrapTextAt() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UTextLayoutWidget::M_SetWrapTextAt(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of Margin
// Declaration: struct FMargin Margin
struct FMargin UTextLayoutWidget::M_GetMargin() const {
	return Read<struct FMargin>((byte*)this + 276);
}
struct FMargin* UTextLayoutWidget::M_PtrGetMargin() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 276);
}
void UTextLayoutWidget::M_SetMargin(const struct FMargin& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of LineHeightPercentage
// Declaration: float LineHeightPercentage
float UTextLayoutWidget::M_GetLineHeightPercentage() const {
	return Read<float>((byte*)this + 292);
}
float* UTextLayoutWidget::M_PtrGetLineHeightPercentage() {
	return reinterpret_cast<float*>((byte*)this + 292);
}
void UTextLayoutWidget::M_SetLineHeightPercentage(const float& value) {
	Write((byte*)this + 292, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.TextLayoutWidget.SetJustification
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InJustification	Type: TEnumAsByte<ETextJustify>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextLayoutWidget::SetJustification(TEnumAsByte<ETextJustify> InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	struct UTextLayoutWidget_SetJustification_Params {
		TEnumAsByte<ETextJustify> InJustification;			//Offset: 0 | ElementSize: 1
	};
	UTextLayoutWidget_SetJustification_Params params;
	params.InJustification = InJustification;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}