#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ComboButtonWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 1000
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FComboButtonStyle	ComboButtonStyle;		//Offset: 48	Size: 952	Flags: Edit, NativeAccessSpecifierPublic
	struct FComboButtonStyle M_GetComboButtonStyle() const;
	struct FComboButtonStyle* M_PtrGetComboButtonStyle();
	void M_SetComboButtonStyle(const struct FComboButtonStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};