#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.EditableTextBoxWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 2088
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FEditableTextBoxStyle	EditableTextBoxStyle;		//Offset: 48	Size: 2040	Flags: Edit, NativeAccessSpecifierPublic
	struct FEditableTextBoxStyle M_GetEditableTextBoxStyle() const;
	struct FEditableTextBoxStyle* M_PtrGetEditableTextBoxStyle();
	void M_SetEditableTextBoxStyle(const struct FEditableTextBoxStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};