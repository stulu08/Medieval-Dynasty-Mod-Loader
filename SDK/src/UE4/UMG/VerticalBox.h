#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.VerticalBox
// Super: Class UMG.PanelWidget
// Size: 304
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UVerticalBox : public UPanelWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}

#pragma region Functions
	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);

#pragma endregion
};
};