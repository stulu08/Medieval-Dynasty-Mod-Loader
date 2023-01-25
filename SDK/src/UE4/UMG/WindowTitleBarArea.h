#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.WindowTitleBarArea
// Super: Class UMG.ContentWidget
// Size: 320
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UWindowTitleBarArea : public UContentWidget {
public:
#pragma region Members
	//bool	bWindowButtonsEnabled;		//Offset: 288	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbWindowButtonsEnabled() const;
	bool* M_PtrGetbWindowButtonsEnabled();
	void M_SetbWindowButtonsEnabled(const bool& value);

	//bool	bDoubleClickTogglesFullscreen;		//Offset: 289	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbDoubleClickTogglesFullscreen() const;
	bool* M_PtrGetbDoubleClickTogglesFullscreen();
	void M_SetbDoubleClickTogglesFullscreen(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}

#pragma region Functions
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetPadding(struct FMargin InPadding);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};