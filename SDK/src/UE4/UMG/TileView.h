#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ListView.h"
/////////////////////////////////////////////
// Class UMG.TileView
// Super: Class UMG.ListView
// Size: 904
// Size inherited: 872
/////////////////////////////////////////////
namespace UE4 {
class UTileView : public UListView {
public:
#pragma region Members
	//float	EntryHeight;		//Offset: 872	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetEntryHeight() const;
	float* M_PtrGetEntryHeight();
	void M_SetEntryHeight(const float& value);

	//float	EntryWidth;		//Offset: 876	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetEntryWidth() const;
	float* M_PtrGetEntryWidth();
	void M_SetEntryWidth(const float& value);

	//EListItemAlignment	TileAlignment;		//Offset: 880	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EListItemAlignment M_GetTileAlignment() const;
	EListItemAlignment* M_PtrGetTileAlignment();
	void M_SetTileAlignment(const EListItemAlignment& value);

	//bool	bWrapHorizontalNavigation;		//Offset: 881	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbWrapHorizontalNavigation() const;
	bool* M_PtrGetbWrapHorizontalNavigation();
	void M_SetbWrapHorizontalNavigation(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}

#pragma region Functions
	float GetEntryHeight() const;

	float GetEntryWidth() const;

	void SetEntryHeight(float NewHeight);

	void SetEntryWidth(float NewWidth);

#pragma endregion
};
};