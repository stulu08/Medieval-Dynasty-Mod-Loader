#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.Overlay
// Super: Class UMG.PanelWidget
// Size: 304
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UOverlay : public UPanelWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}

#pragma region Functions
	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);

#pragma endregion
};
};