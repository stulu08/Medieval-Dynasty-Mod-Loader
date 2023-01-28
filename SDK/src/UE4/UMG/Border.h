#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.Border
// Super: Class UMG.ContentWidget
// Size: 624
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UBorder : public UContentWidget {
public:
#pragma region Members
	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 288	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VerticalAlignment;		//Offset: 289	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVerticalAlignment();
	void M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

	//unsigned char	bShowEffectWhenDisabled : 1;		//Offset: 290	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShowEffectWhenDisabled() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShowEffectWhenDisabled();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShowEffectWhenDisabled(const unsigned char& value);

	//struct FLinearColor	ContentColorAndOpacity;		//Offset: 292	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetContentColorAndOpacity() const;
	struct FLinearColor* M_PtrGetContentColorAndOpacity();
	void M_SetContentColorAndOpacity(const struct FLinearColor& value);

	//struct FScriptDelegate	ContentColorAndOpacityDelegate;		//Offset: 308	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetContentColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetContentColorAndOpacityDelegate();
	void M_SetContentColorAndOpacityDelegate(const struct FScriptDelegate& value);

	//struct FMargin	Padding;		//Offset: 324	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//struct FSlateBrush	Background;		//Offset: 344	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetBackground() const;
	struct FSlateBrush* M_PtrGetBackground();
	void M_SetBackground(const struct FSlateBrush& value);

	//struct FScriptDelegate	BackgroundDelegate;		//Offset: 480	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetBackgroundDelegate() const;
	struct FScriptDelegate* M_PtrGetBackgroundDelegate();
	void M_SetBackgroundDelegate(const struct FScriptDelegate& value);

	//struct FLinearColor	BrushColor;		//Offset: 496	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetBrushColor() const;
	struct FLinearColor* M_PtrGetBrushColor();
	void M_SetBrushColor(const struct FLinearColor& value);

	//struct FScriptDelegate	BrushColorDelegate;		//Offset: 512	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetBrushColorDelegate() const;
	struct FScriptDelegate* M_PtrGetBrushColorDelegate();
	void M_SetBrushColorDelegate(const struct FScriptDelegate& value);

	//struct FVector2D	DesiredSizeScale;		//Offset: 528	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetDesiredSizeScale() const;
	struct FVector2D* M_PtrGetDesiredSizeScale();
	void M_SetDesiredSizeScale(const struct FVector2D& value);

	//bool	bFlipForRightToLeftFlowDirection;		//Offset: 536	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFlipForRightToLeftFlowDirection() const;
	bool* M_PtrGetbFlipForRightToLeftFlowDirection();
	void M_SetbFlipForRightToLeftFlowDirection(const bool& value);

	//struct FScriptDelegate	OnMouseButtonDownEvent;		//Offset: 540	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnMouseButtonDownEvent() const;
	struct FScriptDelegate* M_PtrGetOnMouseButtonDownEvent();
	void M_SetOnMouseButtonDownEvent(const struct FScriptDelegate& value);

	//struct FScriptDelegate	OnMouseButtonUpEvent;		//Offset: 556	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnMouseButtonUpEvent() const;
	struct FScriptDelegate* M_PtrGetOnMouseButtonUpEvent();
	void M_SetOnMouseButtonUpEvent(const struct FScriptDelegate& value);

	//struct FScriptDelegate	OnMouseMoveEvent;		//Offset: 572	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnMouseMoveEvent() const;
	struct FScriptDelegate* M_PtrGetOnMouseMoveEvent();
	void M_SetOnMouseMoveEvent(const struct FScriptDelegate& value);

	//struct FScriptDelegate	OnMouseDoubleClickEvent;		//Offset: 588	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnMouseDoubleClickEvent() const;
	struct FScriptDelegate* M_PtrGetOnMouseDoubleClickEvent();
	void M_SetOnMouseDoubleClickEvent(const struct FScriptDelegate& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}

#pragma region Functions
	class UMaterialInstanceDynamic* GetDynamicMaterial();

	void SetBrush(const struct FSlateBrush& InBrush);

	void SetBrushColor(struct FLinearColor InBrushColor);

	void SetBrushFromAsset(class USlateBrushAsset* Asset);

	void SetBrushFromMaterial(class UMaterialInterface* Material);

	void SetBrushFromTexture(class UTexture2D* Texture);

	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity);

	void SetDesiredSizeScale(struct FVector2D InScale);

	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetPadding(struct FMargin InPadding);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};