#include "../SDK.h"
#include "Border.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UBorder::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 288);
}
TEnumAsByte<EHorizontalAlignment>* UBorder::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 288);
}
void UBorder::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UBorder::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 289);
}
TEnumAsByte<EVerticalAlignment>* UBorder::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 289);
}
void UBorder::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 289, value);
}
// Member Getter and Setter of bShowEffectWhenDisabled
// Declaration: unsigned char bShowEffectWhenDisabled : 1
unsigned char UBorder::M_GetbShowEffectWhenDisabled() const {
	return Read<unsigned char>((byte*)this + 290);
}
unsigned char* UBorder::M_PtrGetbShowEffectWhenDisabled() {
	return reinterpret_cast<unsigned char*>((byte*)this + 290);
}
void UBorder::M_SetbShowEffectWhenDisabled(const unsigned char& value) {
	Write((byte*)this + 290, value);
}
// Member Getter and Setter of ContentColorAndOpacity
// Declaration: struct FLinearColor ContentColorAndOpacity
struct FLinearColor UBorder::M_GetContentColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 292);
}
struct FLinearColor* UBorder::M_PtrGetContentColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 292);
}
void UBorder::M_SetContentColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 292, value);
}
// Member Getter and Setter of ContentColorAndOpacityDelegate
// Declaration: struct FScriptDelegate ContentColorAndOpacityDelegate
struct FScriptDelegate UBorder::M_GetContentColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 308);
}
struct FScriptDelegate* UBorder::M_PtrGetContentColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 308);
}
void UBorder::M_SetContentColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UBorder::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 324);
}
struct FMargin* UBorder::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 324);
}
void UBorder::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 324, value);
}
// Member Getter and Setter of Background
// Declaration: struct FSlateBrush Background
struct FSlateBrush UBorder::M_GetBackground() const {
	return Read<struct FSlateBrush>((byte*)this + 344);
}
struct FSlateBrush* UBorder::M_PtrGetBackground() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 344);
}
void UBorder::M_SetBackground(const struct FSlateBrush& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of BackgroundDelegate
// Declaration: struct FScriptDelegate BackgroundDelegate
struct FScriptDelegate UBorder::M_GetBackgroundDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 480);
}
struct FScriptDelegate* UBorder::M_PtrGetBackgroundDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 480);
}
void UBorder::M_SetBackgroundDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of BrushColor
// Declaration: struct FLinearColor BrushColor
struct FLinearColor UBorder::M_GetBrushColor() const {
	return Read<struct FLinearColor>((byte*)this + 496);
}
struct FLinearColor* UBorder::M_PtrGetBrushColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 496);
}
void UBorder::M_SetBrushColor(const struct FLinearColor& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of BrushColorDelegate
// Declaration: struct FScriptDelegate BrushColorDelegate
struct FScriptDelegate UBorder::M_GetBrushColorDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 512);
}
struct FScriptDelegate* UBorder::M_PtrGetBrushColorDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 512);
}
void UBorder::M_SetBrushColorDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of DesiredSizeScale
// Declaration: struct FVector2D DesiredSizeScale
struct FVector2D UBorder::M_GetDesiredSizeScale() const {
	return Read<struct FVector2D>((byte*)this + 528);
}
struct FVector2D* UBorder::M_PtrGetDesiredSizeScale() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 528);
}
void UBorder::M_SetDesiredSizeScale(const struct FVector2D& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of bFlipForRightToLeftFlowDirection
// Declaration: bool bFlipForRightToLeftFlowDirection
bool UBorder::M_GetbFlipForRightToLeftFlowDirection() const {
	return Read<bool>((byte*)this + 536);
}
bool* UBorder::M_PtrGetbFlipForRightToLeftFlowDirection() {
	return reinterpret_cast<bool*>((byte*)this + 536);
}
void UBorder::M_SetbFlipForRightToLeftFlowDirection(const bool& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of OnMouseButtonDownEvent
// Declaration: struct FScriptDelegate OnMouseButtonDownEvent
struct FScriptDelegate UBorder::M_GetOnMouseButtonDownEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 540);
}
struct FScriptDelegate* UBorder::M_PtrGetOnMouseButtonDownEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 540);
}
void UBorder::M_SetOnMouseButtonDownEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of OnMouseButtonUpEvent
// Declaration: struct FScriptDelegate OnMouseButtonUpEvent
struct FScriptDelegate UBorder::M_GetOnMouseButtonUpEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 556);
}
struct FScriptDelegate* UBorder::M_PtrGetOnMouseButtonUpEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 556);
}
void UBorder::M_SetOnMouseButtonUpEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 556, value);
}
// Member Getter and Setter of OnMouseMoveEvent
// Declaration: struct FScriptDelegate OnMouseMoveEvent
struct FScriptDelegate UBorder::M_GetOnMouseMoveEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 572);
}
struct FScriptDelegate* UBorder::M_PtrGetOnMouseMoveEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 572);
}
void UBorder::M_SetOnMouseMoveEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 572, value);
}
// Member Getter and Setter of OnMouseDoubleClickEvent
// Declaration: struct FScriptDelegate OnMouseDoubleClickEvent
struct FScriptDelegate UBorder::M_GetOnMouseDoubleClickEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 588);
}
struct FScriptDelegate* UBorder::M_PtrGetOnMouseDoubleClickEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 588);
}
void UBorder::M_SetOnMouseDoubleClickEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 588, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Border.GetDynamicMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	struct UBorder_GetDynamicMaterial_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UBorder_GetDynamicMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Border.SetBrush
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBrush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetBrush(const struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	struct UBorder_SetBrush_Params {
		struct FSlateBrush InBrush;			//Offset: 0 | ElementSize: 136
	};
	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetBrushColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InBrushColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetBrushColor(struct FLinearColor InBrushColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	struct UBorder_SetBrushColor_Params {
		struct FLinearColor InBrushColor;			//Offset: 0 | ElementSize: 16
	};
	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetBrushFromAsset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Asset	Type: class USlateBrushAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	struct UBorder_SetBrushFromAsset_Params {
		class USlateBrushAsset* Asset;			//Offset: 0 | ElementSize: 8
	};
	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetBrushFromMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	struct UBorder_SetBrushFromMaterial_Params {
		class UMaterialInterface* Material;			//Offset: 0 | ElementSize: 8
	};
	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetBrushFromTexture
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetBrushFromTexture(class UTexture2D* Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	struct UBorder_SetBrushFromTexture_Params {
		class UTexture2D* Texture;			//Offset: 0 | ElementSize: 8
	};
	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetContentColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InContentColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	struct UBorder_SetContentColorAndOpacity_Params {
		struct FLinearColor InContentColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetDesiredSizeScale
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InScale	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetDesiredSizeScale(struct FVector2D InScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	struct UBorder_SetDesiredSizeScale_Params {
		struct FVector2D InScale;			//Offset: 0 | ElementSize: 8
	};
	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	struct UBorder_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	struct UBorder_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Border.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	struct UBorder_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}