#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.CanvasPanel
// Super: Class UMG.PanelWidget
// Size: 304
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UCanvasPanel : public UPanelWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}

#pragma region Functions
	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);

#pragma endregion
};
};