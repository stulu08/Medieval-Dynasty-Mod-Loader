#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.SafeZoneSlot
// Super: Class UMG.PanelSlot
// Size: 96
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class USafeZoneSlot : public UPanelSlot {
public:
#pragma region Members
	//bool	bIsTitleSafe;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsTitleSafe() const;
	bool* M_PtrGetbIsTitleSafe();
	void M_SetbIsTitleSafe(const bool& value);

	//struct FMargin	SafeAreaScale;		//Offset: 60	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetSafeAreaScale() const;
	struct FMargin* M_PtrGetSafeAreaScale();
	void M_SetSafeAreaScale(const struct FMargin& value);

	//TEnumAsByte<EHorizontalAlignment>	HAlign;		//Offset: 76	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHAlign() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHAlign();
	void M_SetHAlign(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VAlign;		//Offset: 77	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVAlign() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVAlign();
	void M_SetVAlign(const TEnumAsByte<EVerticalAlignment>& value);

	//struct FMargin	Padding;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};