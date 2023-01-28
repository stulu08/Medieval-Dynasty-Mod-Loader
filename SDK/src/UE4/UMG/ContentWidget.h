#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.ContentWidget
// Super: Class UMG.PanelWidget
// Size: 288
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UContentWidget : public UPanelWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}

#pragma region Functions
	class UWidget* GetContent()/* const*/;

	class UPanelSlot* GetContentSlot()/* const*/;

	class UPanelSlot* SetContent(class UWidget* Content);

#pragma endregion
};
};