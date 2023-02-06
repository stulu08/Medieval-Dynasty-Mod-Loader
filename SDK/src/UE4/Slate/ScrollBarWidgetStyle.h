#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ScrollBarWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 1280
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FScrollBarStyle	ScrollBarStyle;		//Offset: 48	Size: 1232	Flags: Edit, NativeAccessSpecifierPublic
	struct FScrollBarStyle M_GetScrollBarStyle() const;
	struct FScrollBarStyle* M_PtrGetScrollBarStyle();
	void M_SetScrollBarStyle(const struct FScrollBarStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};