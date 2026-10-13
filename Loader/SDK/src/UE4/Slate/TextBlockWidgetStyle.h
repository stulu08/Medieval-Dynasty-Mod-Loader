#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.TextBlockWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 672
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FTextBlockStyle	TextBlockStyle;		//Offset: 48	Size: 624	Flags: Edit, NativeAccessSpecifierPublic
	struct FTextBlockStyle M_GetTextBlockStyle() const;
	struct FTextBlockStyle* M_PtrGetTextBlockStyle();
	void M_SetTextBlockStyle(const struct FTextBlockStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};