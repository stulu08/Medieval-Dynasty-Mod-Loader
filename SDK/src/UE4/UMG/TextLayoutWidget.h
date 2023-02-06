#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.TextLayoutWidget
// Super: Class UMG.Widget
// Size: 296
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UTextLayoutWidget : public UWidget {
public:
#pragma region Members
	//struct FShapedTextOptions	ShapedTextOptions;		//Offset: 264	Size: 3	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	struct FShapedTextOptions M_GetShapedTextOptions() const;
	struct FShapedTextOptions* M_PtrGetShapedTextOptions();
	void M_SetShapedTextOptions(const struct FShapedTextOptions& value);

	//TEnumAsByte<ETextJustify>	Justification;		//Offset: 267	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ETextJustify> M_GetJustification() const;
	TEnumAsByte<ETextJustify>* M_PtrGetJustification();
	void M_SetJustification(const TEnumAsByte<ETextJustify>& value);

	//ETextWrappingPolicy	WrappingPolicy;		//Offset: 268	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ETextWrappingPolicy M_GetWrappingPolicy() const;
	ETextWrappingPolicy* M_PtrGetWrappingPolicy();
	void M_SetWrappingPolicy(const ETextWrappingPolicy& value);

	//unsigned char	AutoWrapText : 1;		//Offset: 269	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetAutoWrapText() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetAutoWrapText();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetAutoWrapText(const unsigned char& value);

	//float	WrapTextAt;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetWrapTextAt() const;
	float* M_PtrGetWrapTextAt();
	void M_SetWrapTextAt(const float& value);

	//struct FMargin	Margin;		//Offset: 276	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	struct FMargin M_GetMargin() const;
	struct FMargin* M_PtrGetMargin();
	void M_SetMargin(const struct FMargin& value);

	//float	LineHeightPercentage;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetLineHeightPercentage() const;
	float* M_PtrGetLineHeightPercentage();
	void M_SetLineHeightPercentage(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

#pragma region Functions
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);

#pragma endregion
};
};