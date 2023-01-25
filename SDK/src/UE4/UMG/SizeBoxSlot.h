#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.SizeBoxSlot
// Super: Class UMG.PanelSlot
// Size: 96
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class USizeBoxSlot : public UPanelSlot {
public:
#pragma region Members
	//struct FMargin	Padding;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
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
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}

#pragma region Functions
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetPadding(struct FMargin InPadding);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};