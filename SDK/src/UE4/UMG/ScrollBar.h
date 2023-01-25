#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ScrollBar
// Super: Class UMG.Widget
// Size: 1552
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UScrollBar : public UWidget {
public:
#pragma region Members
	//struct FScrollBarStyle	WidgetStyle;		//Offset: 264	Size: 1232	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FScrollBarStyle M_GetWidgetStyle() const;
	struct FScrollBarStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FScrollBarStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 1496	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//bool	bAlwaysShowScrollbar;		//Offset: 1504	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAlwaysShowScrollbar() const;
	bool* M_PtrGetbAlwaysShowScrollbar();
	void M_SetbAlwaysShowScrollbar(const bool& value);

	//bool	bAlwaysShowScrollbarTrack;		//Offset: 1505	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAlwaysShowScrollbarTrack() const;
	bool* M_PtrGetbAlwaysShowScrollbarTrack();
	void M_SetbAlwaysShowScrollbarTrack(const bool& value);

	//TEnumAsByte<EOrientation>	Orientation;		//Offset: 1506	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EOrientation> M_GetOrientation() const;
	TEnumAsByte<EOrientation>* M_PtrGetOrientation();
	void M_SetOrientation(const TEnumAsByte<EOrientation>& value);

	//struct FVector2D	Thickness;		//Offset: 1508	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetThickness() const;
	struct FVector2D* M_PtrGetThickness();
	void M_SetThickness(const struct FVector2D& value);

	//struct FMargin	Padding;		//Offset: 1516	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}

#pragma region Functions
	void SetState(float InOffsetFraction, float InThumbSizeFraction);

#pragma endregion
};
};