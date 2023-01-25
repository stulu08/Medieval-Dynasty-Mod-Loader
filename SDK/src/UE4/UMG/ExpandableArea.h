#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ExpandableArea
// Super: Class UMG.Widget
// Size: 824
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UExpandableArea : public UWidget {
public:
#pragma region Members
	//struct FExpandableAreaStyle	Style;		//Offset: 272	Size: 288	Flags: Edit, NativeAccessSpecifierPublic
	struct FExpandableAreaStyle M_GetStyle() const;
	struct FExpandableAreaStyle* M_PtrGetStyle();
	void M_SetStyle(const struct FExpandableAreaStyle& value);

	//struct FSlateBrush	BorderBrush;		//Offset: 560	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetBorderBrush() const;
	struct FSlateBrush* M_PtrGetBorderBrush();
	void M_SetBorderBrush(const struct FSlateBrush& value);

	//struct FSlateColor	BorderColor;		//Offset: 696	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateColor M_GetBorderColor() const;
	struct FSlateColor* M_PtrGetBorderColor();
	void M_SetBorderColor(const struct FSlateColor& value);

	//bool	bIsExpanded;		//Offset: 736	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsExpanded() const;
	bool* M_PtrGetbIsExpanded();
	void M_SetbIsExpanded(const bool& value);

	//float	MaxHeight;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxHeight() const;
	float* M_PtrGetMaxHeight();
	void M_SetMaxHeight(const float& value);

	//struct FMargin	HeaderPadding;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetHeaderPadding() const;
	struct FMargin* M_PtrGetHeaderPadding();
	void M_SetHeaderPadding(const struct FMargin& value);

	//struct FMargin	AreaPadding;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetAreaPadding() const;
	struct FMargin* M_PtrGetAreaPadding();
	void M_SetAreaPadding(const struct FMargin& value);

	//TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>	OnExpansionChanged;		//Offset: 776	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature> M_GetOnExpansionChanged() const;
	TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>* M_PtrGetOnExpansionChanged();
	void M_SetOnExpansionChanged(const TAssetPtr<class FOnExpandableAreaExpansionChanged__DelegateSignature>& value);

	//class UWidget*	HeaderContent;		//Offset: 792	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UWidget* M_GetHeaderContent() const;
	class UWidget** M_PtrGetHeaderContent();
	void M_SetHeaderContent(const class UWidget*& value);

	//class UWidget*	BodyContent;		//Offset: 800	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UWidget* M_GetBodyContent() const;
	class UWidget** M_PtrGetBodyContent();
	void M_SetBodyContent(const class UWidget*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}

#pragma region Functions
	bool GetIsExpanded() const;

	void SetIsExpanded(bool IsExpanded);

	void SetIsExpanded_Animated(bool IsExpanded);

#pragma endregion
};
};