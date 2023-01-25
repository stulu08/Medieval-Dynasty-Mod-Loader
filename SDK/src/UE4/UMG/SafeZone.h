#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.SafeZone
// Super: Class UMG.ContentWidget
// Size: 312
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class USafeZone : public UContentWidget {
public:
#pragma region Members
	//bool	PadLeft;		//Offset: 288	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetPadLeft() const;
	bool* M_PtrGetPadLeft();
	void M_SetPadLeft(const bool& value);

	//bool	PadRight;		//Offset: 289	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetPadRight() const;
	bool* M_PtrGetPadRight();
	void M_SetPadRight(const bool& value);

	//bool	PadTop;		//Offset: 290	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetPadTop() const;
	bool* M_PtrGetPadTop();
	void M_SetPadTop(const bool& value);

	//bool	PadBottom;		//Offset: 291	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetPadBottom() const;
	bool* M_PtrGetPadBottom();
	void M_SetPadBottom(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}

#pragma region Functions
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);

#pragma endregion
};
};