#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.CheckBoxWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 1456
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FCheckBoxStyle	CheckBoxStyle;		//Offset: 48	Size: 1408	Flags: Edit, NativeAccessSpecifierPublic
	struct FCheckBoxStyle M_GetCheckBoxStyle() const;
	struct FCheckBoxStyle* M_PtrGetCheckBoxStyle();
	void M_SetCheckBoxStyle(const struct FCheckBoxStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};