#include "../SDK.h"
#include "TextBlock.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText UTextBlock::M_GetText() const {
	return Read<struct FText>((byte*)this + 296);
}
struct FText* UTextBlock::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 296);
}
void UTextBlock::M_SetText(const struct FText& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of TextDelegate
// Declaration: struct FScriptDelegate TextDelegate
struct FScriptDelegate UTextBlock::M_GetTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 320);
}
struct FScriptDelegate* UTextBlock::M_PtrGetTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 320);
}
void UTextBlock::M_SetTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FSlateColor ColorAndOpacity
struct FSlateColor UTextBlock::M_GetColorAndOpacity() const {
	return Read<struct FSlateColor>((byte*)this + 336);
}
struct FSlateColor* UTextBlock::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 336);
}
void UTextBlock::M_SetColorAndOpacity(const struct FSlateColor& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of ColorAndOpacityDelegate
// Declaration: struct FScriptDelegate ColorAndOpacityDelegate
struct FScriptDelegate UTextBlock::M_GetColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 376);
}
struct FScriptDelegate* UTextBlock::M_PtrGetColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 376);
}
void UTextBlock::M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo UTextBlock::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 392);
}
struct FSlateFontInfo* UTextBlock::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 392);
}
void UTextBlock::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of StrikeBrush
// Declaration: struct FSlateBrush StrikeBrush
struct FSlateBrush UTextBlock::M_GetStrikeBrush() const {
	return Read<struct FSlateBrush>((byte*)this + 480);
}
struct FSlateBrush* UTextBlock::M_PtrGetStrikeBrush() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 480);
}
void UTextBlock::M_SetStrikeBrush(const struct FSlateBrush& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of ShadowOffset
// Declaration: struct FVector2D ShadowOffset
struct FVector2D UTextBlock::M_GetShadowOffset() const {
	return Read<struct FVector2D>((byte*)this + 616);
}
struct FVector2D* UTextBlock::M_PtrGetShadowOffset() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 616);
}
void UTextBlock::M_SetShadowOffset(const struct FVector2D& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of ShadowColorAndOpacity
// Declaration: struct FLinearColor ShadowColorAndOpacity
struct FLinearColor UTextBlock::M_GetShadowColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 624);
}
struct FLinearColor* UTextBlock::M_PtrGetShadowColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 624);
}
void UTextBlock::M_SetShadowColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of ShadowColorAndOpacityDelegate
// Declaration: struct FScriptDelegate ShadowColorAndOpacityDelegate
struct FScriptDelegate UTextBlock::M_GetShadowColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 640);
}
struct FScriptDelegate* UTextBlock::M_PtrGetShadowColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 640);
}
void UTextBlock::M_SetShadowColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of MinDesiredWidth
// Declaration: float MinDesiredWidth
float UTextBlock::M_GetMinDesiredWidth() const {
	return Read<float>((byte*)this + 656);
}
float* UTextBlock::M_PtrGetMinDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 656);
}
void UTextBlock::M_SetMinDesiredWidth(const float& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of bWrapWithInvalidationPanel
// Declaration: bool bWrapWithInvalidationPanel
bool UTextBlock::M_GetbWrapWithInvalidationPanel() const {
	return Read<bool>((byte*)this + 660);
}
bool* UTextBlock::M_PtrGetbWrapWithInvalidationPanel() {
	return reinterpret_cast<bool*>((byte*)this + 660);
}
void UTextBlock::M_SetbWrapWithInvalidationPanel(const bool& value) {
	Write((byte*)this + 660, value);
}
// Member Getter and Setter of bAutoWrapText
// Declaration: bool bAutoWrapText
bool UTextBlock::M_GetbAutoWrapText() const {
	return Read<bool>((byte*)this + 661);
}
bool* UTextBlock::M_PtrGetbAutoWrapText() {
	return reinterpret_cast<bool*>((byte*)this + 661);
}
void UTextBlock::M_SetbAutoWrapText(const bool& value) {
	Write((byte*)this + 661, value);
}
// Member Getter and Setter of TextTransformPolicy
// Declaration: ETextTransformPolicy TextTransformPolicy
ETextTransformPolicy UTextBlock::M_GetTextTransformPolicy() const {
	return Read<ETextTransformPolicy>((byte*)this + 662);
}
ETextTransformPolicy* UTextBlock::M_PtrGetTextTransformPolicy() {
	return reinterpret_cast<ETextTransformPolicy*>((byte*)this + 662);
}
void UTextBlock::M_SetTextTransformPolicy(const ETextTransformPolicy& value) {
	Write((byte*)this + 662, value);
}
// Member Getter and Setter of bSimpleTextMode
// Declaration: bool bSimpleTextMode
bool UTextBlock::M_GetbSimpleTextMode() const {
	return Read<bool>((byte*)this + 663);
}
bool* UTextBlock::M_PtrGetbSimpleTextMode() {
	return reinterpret_cast<bool*>((byte*)this + 663);
}
void UTextBlock::M_SetbSimpleTextMode(const bool& value) {
	Write((byte*)this + 663, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.TextBlock.GetDynamicFontMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	struct UTextBlock_GetDynamicFontMaterial_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UTextBlock_GetDynamicFontMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TextBlock.GetDynamicOutlineMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	struct UTextBlock_GetDynamicOutlineMaterial_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UTextBlock_GetDynamicOutlineMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TextBlock.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UTextBlock::GetText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	struct UTextBlock_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UTextBlock_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetAutoWrapText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAutoTextWrap	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	struct UTextBlock_SetAutoWrapText_Params {
		bool InAutoTextWrap;			//Offset: 0 | ElementSize: 1
	};
	UTextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetColorAndOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InColorAndOpacity	Type: struct FSlateColor	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	struct UTextBlock_SetColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;			//Offset: 0 | ElementSize: 40
	};
	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetFont
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InFontInfo	Type: struct FSlateFontInfo	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	struct UTextBlock_SetFont_Params {
		struct FSlateFontInfo InFontInfo;			//Offset: 0 | ElementSize: 88
	};
	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetMinDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	struct UTextBlock_SetMinDesiredWidth_Params {
		float InMinDesiredWidth;			//Offset: 0 | ElementSize: 4
	};
	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InOpacity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	struct UTextBlock_SetOpacity_Params {
		float InOpacity;			//Offset: 0 | ElementSize: 4
	};
	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetShadowColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InShadowColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	struct UTextBlock_SetShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetShadowOffset
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InShadowOffset	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	struct UTextBlock_SetShadowOffset_Params {
		struct FVector2D InShadowOffset;			//Offset: 0 | ElementSize: 8
	};
	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetStrikeBrush
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InStrikeBrush	Type: struct FSlateBrush	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetStrikeBrush(struct FSlateBrush InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	struct UTextBlock_SetStrikeBrush_Params {
		struct FSlateBrush InStrikeBrush;			//Offset: 0 | ElementSize: 136
	};
	UTextBlock_SetStrikeBrush_Params params;
	params.InStrikeBrush = InStrikeBrush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetText
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	struct UTextBlock_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	UTextBlock_SetText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TextBlock.SetTextTransformPolicy
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTransformPolicy	Type: ETextTransformPolicy	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetTextTransformPolicy");

	struct UTextBlock_SetTextTransformPolicy_Params {
		ETextTransformPolicy InTransformPolicy;			//Offset: 0 | ElementSize: 1
	};
	UTextBlock_SetTextTransformPolicy_Params params;
	params.InTransformPolicy = InTransformPolicy;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}