#include "../SDK.h"
#include "BackgroundBlur.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UBackgroundBlur::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 288);
}
struct FMargin* UBackgroundBlur::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 288);
}
void UBackgroundBlur::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UBackgroundBlur::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 304);
}
TEnumAsByte<EHorizontalAlignment>* UBackgroundBlur::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 304);
}
void UBackgroundBlur::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UBackgroundBlur::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 305);
}
TEnumAsByte<EVerticalAlignment>* UBackgroundBlur::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 305);
}
void UBackgroundBlur::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 305, value);
}
// Member Getter and Setter of bApplyAlphaToBlur
// Declaration: bool bApplyAlphaToBlur
bool UBackgroundBlur::M_GetbApplyAlphaToBlur() const {
	return Read<bool>((byte*)this + 306);
}
bool* UBackgroundBlur::M_PtrGetbApplyAlphaToBlur() {
	return reinterpret_cast<bool*>((byte*)this + 306);
}
void UBackgroundBlur::M_SetbApplyAlphaToBlur(const bool& value) {
	Write((byte*)this + 306, value);
}
// Member Getter and Setter of BlurStrength
// Declaration: float BlurStrength
float UBackgroundBlur::M_GetBlurStrength() const {
	return Read<float>((byte*)this + 308);
}
float* UBackgroundBlur::M_PtrGetBlurStrength() {
	return reinterpret_cast<float*>((byte*)this + 308);
}
void UBackgroundBlur::M_SetBlurStrength(const float& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of bOverrideAutoRadiusCalculation
// Declaration: bool bOverrideAutoRadiusCalculation
bool UBackgroundBlur::M_GetbOverrideAutoRadiusCalculation() const {
	return Read<bool>((byte*)this + 312);
}
bool* UBackgroundBlur::M_PtrGetbOverrideAutoRadiusCalculation() {
	return reinterpret_cast<bool*>((byte*)this + 312);
}
void UBackgroundBlur::M_SetbOverrideAutoRadiusCalculation(const bool& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of BlurRadius
// Declaration: int32_t BlurRadius
int32_t UBackgroundBlur::M_GetBlurRadius() const {
	return Read<int32_t>((byte*)this + 316);
}
int32_t* UBackgroundBlur::M_PtrGetBlurRadius() {
	return reinterpret_cast<int32_t*>((byte*)this + 316);
}
void UBackgroundBlur::M_SetBlurRadius(const int32_t& value) {
	Write((byte*)this + 316, value);
}
// Member Getter and Setter of LowQualityFallbackBrush
// Declaration: struct FSlateBrush LowQualityFallbackBrush
struct FSlateBrush UBackgroundBlur::M_GetLowQualityFallbackBrush() const {
	return Read<struct FSlateBrush>((byte*)this + 320);
}
struct FSlateBrush* UBackgroundBlur::M_PtrGetLowQualityFallbackBrush() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 320);
}
void UBackgroundBlur::M_SetLowQualityFallbackBrush(const struct FSlateBrush& value) {
	Write((byte*)this + 320, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInApplyAlphaToBlur	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	struct UBackgroundBlur_SetApplyAlphaToBlur_Params {
		bool bInApplyAlphaToBlur;			//Offset: 0 | ElementSize: 1
	};
	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetBlurRadius
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InBlurRadius	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	struct UBackgroundBlur_SetBlurRadius_Params {
		int32_t InBlurRadius;			//Offset: 0 | ElementSize: 4
	};
	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetBlurStrength
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InStrength	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetBlurStrength(float InStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	struct UBackgroundBlur_SetBlurStrength_Params {
		float InStrength;			//Offset: 0 | ElementSize: 4
	};
	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	struct UBackgroundBlur_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBrush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	struct UBackgroundBlur_SetLowQualityFallbackBrush_Params {
		struct FSlateBrush InBrush;			//Offset: 0 | ElementSize: 136
	};
	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	struct UBackgroundBlur_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UBackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.BackgroundBlur.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	struct UBackgroundBlur_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UBackgroundBlur_SetVerticalAlignment_Params params;
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