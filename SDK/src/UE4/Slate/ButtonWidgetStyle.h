#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ButtonWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 680
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FButtonStyle	ButtonStyle;		//Offset: 48	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle M_GetButtonStyle() const;
	struct FButtonStyle* M_PtrGetButtonStyle();
	void M_SetButtonStyle(const struct FButtonStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};