#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.HorizontalBox
// Super: Class UMG.PanelWidget
// Size: 304
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UHorizontalBox : public UPanelWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}

#pragma region Functions
	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);

#pragma endregion
};
};