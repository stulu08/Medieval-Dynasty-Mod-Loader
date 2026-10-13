#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ScrollBoxWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 600
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FScrollBoxStyle	ScrollBoxStyle;		//Offset: 48	Size: 552	Flags: Edit, NativeAccessSpecifierPublic
	struct FScrollBoxStyle M_GetScrollBoxStyle() const;
	struct FScrollBoxStyle* M_PtrGetScrollBoxStyle();
	void M_SetScrollBoxStyle(const struct FScrollBoxStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};