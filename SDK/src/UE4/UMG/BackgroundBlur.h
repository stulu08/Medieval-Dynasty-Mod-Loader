#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.BackgroundBlur
// Super: Class UMG.ContentWidget
// Size: 472
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UBackgroundBlur : public UContentWidget {
public:
#pragma region Members
	//struct FMargin	Padding;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 304	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VerticalAlignment;		//Offset: 305	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVerticalAlignment();
	void M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

	//bool	bApplyAlphaToBlur;		//Offset: 306	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbApplyAlphaToBlur() const;
	bool* M_PtrGetbApplyAlphaToBlur();
	void M_SetbApplyAlphaToBlur(const bool& value);

	//float	BlurStrength;		//Offset: 308	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetBlurStrength() const;
	float* M_PtrGetBlurStrength();
	void M_SetBlurStrength(const float& value);

	//bool	bOverrideAutoRadiusCalculation;		//Offset: 312	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbOverrideAutoRadiusCalculation() const;
	bool* M_PtrGetbOverrideAutoRadiusCalculation();
	void M_SetbOverrideAutoRadiusCalculation(const bool& value);

	//int32_t	BlurRadius;		//Offset: 316	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetBlurRadius() const;
	int32_t* M_PtrGetBlurRadius();
	void M_SetBlurRadius(const int32_t& value);

	//struct FSlateBrush	LowQualityFallbackBrush;		//Offset: 320	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetLowQualityFallbackBrush() const;
	struct FSlateBrush* M_PtrGetLowQualityFallbackBrush();
	void M_SetLowQualityFallbackBrush(const struct FSlateBrush& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}

#pragma region Functions
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);

	void SetBlurRadius(int32_t InBlurRadius);

	void SetBlurStrength(float InStrength);

	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);

	void SetPadding(struct FMargin InPadding);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};