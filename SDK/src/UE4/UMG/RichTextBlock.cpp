#include "../SDK.h"
#include "RichTextBlock.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Text
// Declaration: struct FText Text
struct FText URichTextBlock::M_GetText() const {
	return Read<struct FText>((byte*)this + 296);
}
struct FText* URichTextBlock::M_PtrGetText() {
	return reinterpret_cast<struct FText*>((byte*)this + 296);
}
void URichTextBlock::M_SetText(const struct FText& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of TextStyleSet
// Declaration: class UDataTable* TextStyleSet
class UDataTable* URichTextBlock::M_GetTextStyleSet() const {
	return Read<class UDataTable*>((byte*)this + 320);
}
class UDataTable** URichTextBlock::M_PtrGetTextStyleSet() {
	return reinterpret_cast<class UDataTable**>((byte*)this + 320);
}
void URichTextBlock::M_SetTextStyleSet(const class UDataTable*& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of DecoratorClasses
// Declaration: TArray<class URichTextBlockDecorator*> DecoratorClasses
TArray<class URichTextBlockDecorator*> URichTextBlock::M_GetDecoratorClasses() const {
	return Read<TArray<class URichTextBlockDecorator*>>((byte*)this + 328);
}
TArray<class URichTextBlockDecorator*>* URichTextBlock::M_PtrGetDecoratorClasses() {
	return reinterpret_cast<TArray<class URichTextBlockDecorator*>*>((byte*)this + 328);
}
void URichTextBlock::M_SetDecoratorClasses(const TArray<class URichTextBlockDecorator*>& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bOverrideDefaultStyle
// Declaration: bool bOverrideDefaultStyle
bool URichTextBlock::M_GetbOverrideDefaultStyle() const {
	return Read<bool>((byte*)this + 344);
}
bool* URichTextBlock::M_PtrGetbOverrideDefaultStyle() {
	return reinterpret_cast<bool*>((byte*)this + 344);
}
void URichTextBlock::M_SetbOverrideDefaultStyle(const bool& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of DefaultTextStyleOverride
// Declaration: struct FTextBlockStyle DefaultTextStyleOverride
struct FTextBlockStyle URichTextBlock::M_GetDefaultTextStyleOverride() const {
	return Read<struct FTextBlockStyle>((byte*)this + 352);
}
struct FTextBlockStyle* URichTextBlock::M_PtrGetDefaultTextStyleOverride() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 352);
}
void URichTextBlock::M_SetDefaultTextStyleOverride(const struct FTextBlockStyle& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of MinDesiredWidth
// Declaration: float MinDesiredWidth
float URichTextBlock::M_GetMinDesiredWidth() const {
	return Read<float>((byte*)this + 976);
}
float* URichTextBlock::M_PtrGetMinDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 976);
}
void URichTextBlock::M_SetMinDesiredWidth(const float& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of TextTransformPolicy
// Declaration: ETextTransformPolicy TextTransformPolicy
ETextTransformPolicy URichTextBlock::M_GetTextTransformPolicy() const {
	return Read<ETextTransformPolicy>((byte*)this + 980);
}
ETextTransformPolicy* URichTextBlock::M_PtrGetTextTransformPolicy() {
	return reinterpret_cast<ETextTransformPolicy*>((byte*)this + 980);
}
void URichTextBlock::M_SetTextTransformPolicy(const ETextTransformPolicy& value) {
	Write((byte*)this + 980, value);
}
// Member Getter and Setter of DefaultTextStyle
// Declaration: struct FTextBlockStyle DefaultTextStyle
struct FTextBlockStyle URichTextBlock::M_GetDefaultTextStyle() const {
	return Read<struct FTextBlockStyle>((byte*)this + 984);
}
struct FTextBlockStyle* URichTextBlock::M_PtrGetDefaultTextStyle() {
	return reinterpret_cast<struct FTextBlockStyle*>((byte*)this + 984);
}
void URichTextBlock::M_SetDefaultTextStyle(const struct FTextBlockStyle& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of InstanceDecorators
// Declaration: TArray<class URichTextBlockDecorator*> InstanceDecorators
TArray<class URichTextBlockDecorator*> URichTextBlock::M_GetInstanceDecorators() const {
	return Read<TArray<class URichTextBlockDecorator*>>((byte*)this + 1608);
}
TArray<class URichTextBlockDecorator*>* URichTextBlock::M_PtrGetInstanceDecorators() {
	return reinterpret_cast<TArray<class URichTextBlockDecorator*>*>((byte*)this + 1608);
}
void URichTextBlock::M_SetInstanceDecorators(const TArray<class URichTextBlockDecorator*>& value) {
	Write((byte*)this + 1608, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// Flags: Final, Native, Public
// Params:
/////////////////////////////////////////////
void URichTextBlock::ClearAllDefaultStyleOverrides() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	struct URichTextBlock_ClearAllDefaultStyleOverrides_Params {
	};
	URichTextBlock_ClearAllDefaultStyleOverrides_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.GetDecoratorByClass
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: DecoratorClass	Type: class URichTextBlockDecorator*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class URichTextBlockDecorator*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	struct URichTextBlock_GetDecoratorByClass_Params {
		class URichTextBlockDecorator* DecoratorClass;			//Offset: 0 | ElementSize: 8
		class URichTextBlockDecorator* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	URichTextBlock_GetDecoratorByClass_Params params;
	params.DecoratorClass = DecoratorClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.GetText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText URichTextBlock::GetText() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	struct URichTextBlock_GetText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	URichTextBlock_GetText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetAutoWrapText
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAutoTextWrap	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	struct URichTextBlock_SetAutoWrapText_Params {
		bool InAutoTextWrap;			//Offset: 0 | ElementSize: 1
	};
	URichTextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InColorAndOpacity	Type: struct FSlateColor	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	struct URichTextBlock_SetDefaultColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;			//Offset: 0 | ElementSize: 40
	};
	URichTextBlock_SetDefaultColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultFont
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InFontInfo	Type: struct FSlateFontInfo	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	struct URichTextBlock_SetDefaultFont_Params {
		struct FSlateFontInfo InFontInfo;			//Offset: 0 | ElementSize: 88
	};
	URichTextBlock_SetDefaultFont_Params params;
	params.InFontInfo = InFontInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InShadowColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	struct URichTextBlock_SetDefaultShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	URichTextBlock_SetDefaultShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultShadowOffset
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InShadowOffset	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	struct URichTextBlock_SetDefaultShadowOffset_Params {
		struct FVector2D InShadowOffset;			//Offset: 0 | ElementSize: 8
	};
	URichTextBlock_SetDefaultShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InStrikeBrush	Type: struct FSlateBrush	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	struct URichTextBlock_SetDefaultStrikeBrush_Params {
		struct FSlateBrush InStrikeBrush;			//Offset: 0 | ElementSize: 136
	};
	URichTextBlock_SetDefaultStrikeBrush_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InStrikeBrush != nullptr)
		*InStrikeBrush = params.InStrikeBrush;
}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetDefaultTextStyle
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InDefaultTextStyle	Type: struct FTextBlockStyle	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	struct URichTextBlock_SetDefaultTextStyle_Params {
		struct FTextBlockStyle InDefaultTextStyle;			//Offset: 0 | ElementSize: 624
	};
	URichTextBlock_SetDefaultTextStyle_Params params;
	params.InDefaultTextStyle = InDefaultTextStyle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetMinDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	struct URichTextBlock_SetMinDesiredWidth_Params {
		float InMinDesiredWidth;			//Offset: 0 | ElementSize: 4
	};
	URichTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetText
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetText(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	struct URichTextBlock_SetText_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
	};
	URichTextBlock_SetText_Params params;
	params.InText = InText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetTextStyleSet
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTextStyleSet	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	struct URichTextBlock_SetTextStyleSet_Params {
		class UDataTable* NewTextStyleSet;			//Offset: 0 | ElementSize: 8
	};
	URichTextBlock_SetTextStyleSet_Params params;
	params.NewTextStyleSet = NewTextStyleSet;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RichTextBlock.SetTextTransformPolicy
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTransformPolicy	Type: ETextTransformPolicy	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextTransformPolicy");

	struct URichTextBlock_SetTextTransformPolicy_Params {
		ETextTransformPolicy InTransformPolicy;			//Offset: 0 | ElementSize: 1
	};
	URichTextBlock_SetTextTransformPolicy_Params params;
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