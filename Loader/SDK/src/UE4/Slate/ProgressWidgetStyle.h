#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.ProgressWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 464
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FProgressBarStyle	ProgressBarStyle;		//Offset: 48	Size: 416	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FProgressBarStyle M_GetProgressBarStyle() const;
	struct FProgressBarStyle* M_PtrGetProgressBarStyle();
	void M_SetProgressBarStyle(const struct FProgressBarStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};