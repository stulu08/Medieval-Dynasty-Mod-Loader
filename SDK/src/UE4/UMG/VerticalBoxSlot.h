#pragma once
#include "Structs.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.VerticalBoxSlot
// Super: Class UMG.PanelSlot
// Size: 96
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UVerticalBoxSlot : public UPanelSlot {
public:
#pragma region Members
	//struct FSlateChildSize	Size;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateChildSize M_GetSize() const;
	struct FSlateChildSize* M_PtrGetSize();
	void M_SetSize(const struct FSlateChildSize& value);

	//struct FMargin	Padding;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VerticalAlignment;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVerticalAlignment();
	void M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}

#pragma region Functions
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetPadding(struct FMargin InPadding);

	void SetSize(struct FSlateChildSize InSize);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};