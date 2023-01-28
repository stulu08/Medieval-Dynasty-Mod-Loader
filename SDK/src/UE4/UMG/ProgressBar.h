#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ProgressBar
// Super: Class UMG.Widget
// Size: 792
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UProgressBar : public UWidget {
public:
#pragma region Members
	//struct FProgressBarStyle	WidgetStyle;		//Offset: 264	Size: 416	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FProgressBarStyle M_GetWidgetStyle() const;
	struct FProgressBarStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FProgressBarStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 680	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//class USlateBrushAsset*	BackgroundImage;		//Offset: 688	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetBackgroundImage() const;
	class USlateBrushAsset** M_PtrGetBackgroundImage();
	void M_SetBackgroundImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	FillImage;		//Offset: 696	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetFillImage() const;
	class USlateBrushAsset** M_PtrGetFillImage();
	void M_SetFillImage(const class USlateBrushAsset*& value);

	//class USlateBrushAsset*	MarqueeImage;		//Offset: 704	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetMarqueeImage() const;
	class USlateBrushAsset** M_PtrGetMarqueeImage();
	void M_SetMarqueeImage(const class USlateBrushAsset*& value);

	//float	Percent;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetPercent() const;
	float* M_PtrGetPercent();
	void M_SetPercent(const float& value);

	//TEnumAsByte<EProgressBarFillType>	BarFillType;		//Offset: 716	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EProgressBarFillType> M_GetBarFillType() const;
	TEnumAsByte<EProgressBarFillType>* M_PtrGetBarFillType();
	void M_SetBarFillType(const TEnumAsByte<EProgressBarFillType>& value);

	//bool	bIsMarquee;		//Offset: 717	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsMarquee() const;
	bool* M_PtrGetbIsMarquee();
	void M_SetbIsMarquee(const bool& value);

	//struct FVector2D	BorderPadding;		//Offset: 720	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetBorderPadding() const;
	struct FVector2D* M_PtrGetBorderPadding();
	void M_SetBorderPadding(const struct FVector2D& value);

	//struct FScriptDelegate	PercentDelegate;		//Offset: 728	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetPercentDelegate() const;
	struct FScriptDelegate* M_PtrGetPercentDelegate();
	void M_SetPercentDelegate(const struct FScriptDelegate& value);

	//struct FLinearColor	FillColorAndOpacity;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetFillColorAndOpacity() const;
	struct FLinearColor* M_PtrGetFillColorAndOpacity();
	void M_SetFillColorAndOpacity(const struct FLinearColor& value);

	//struct FScriptDelegate	FillColorAndOpacityDelegate;		//Offset: 760	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetFillColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetFillColorAndOpacityDelegate();
	void M_SetFillColorAndOpacityDelegate(const struct FScriptDelegate& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}

#pragma region Functions
	void SetFillColorAndOpacity(struct FLinearColor InColor);

	void SetIsMarquee(bool InbIsMarquee);

	void SetPercent(float InPercent);

#pragma endregion
};
};