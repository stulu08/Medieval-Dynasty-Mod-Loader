#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.EditableTextWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 592
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FEditableTextStyle	EditableTextStyle;		//Offset: 48	Size: 544	Flags: Edit, NativeAccessSpecifierPublic
	struct FEditableTextStyle M_GetEditableTextStyle() const;
	struct FEditableTextStyle* M_PtrGetEditableTextStyle();
	void M_SetEditableTextStyle(const struct FEditableTextStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};