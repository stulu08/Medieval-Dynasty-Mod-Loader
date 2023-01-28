#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ComboBoxWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 1056
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FComboBoxStyle	ComboBoxStyle;		//Offset: 48	Size: 1008	Flags: Edit, NativeAccessSpecifierPublic
	struct FComboBoxStyle M_GetComboBoxStyle() const;
	struct FComboBoxStyle* M_PtrGetComboBoxStyle();
	void M_SetComboBoxStyle(const struct FComboBoxStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};