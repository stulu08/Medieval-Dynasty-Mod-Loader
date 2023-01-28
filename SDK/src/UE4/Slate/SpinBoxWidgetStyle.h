#pragma once
#include "Structs.h"
#include "SlateCore/SlateWidgetStyleContainerBase.h"
/////////////////////////////////////////////
// Class Slate.SpinBoxWidgetStyle
// Super: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 792
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
#pragma region Members
	//struct FSpinBoxStyle	SpinBoxStyle;		//Offset: 48	Size: 744	Flags: Edit, NativeAccessSpecifierPublic
	struct FSpinBoxStyle M_GetSpinBoxStyle() const;
	struct FSpinBoxStyle* M_PtrGetSpinBoxStyle();
	void M_SetSpinBoxStyle(const struct FSpinBoxStyle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};