#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.WidgetSwitcher
// Super: Class UMG.PanelWidget
// Size: 312
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UWidgetSwitcher : public UPanelWidget {
public:
#pragma region Members
	//int32_t	ActiveWidgetIndex;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetActiveWidgetIndex() const;
	int32_t* M_PtrGetActiveWidgetIndex();
	void M_SetActiveWidgetIndex(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}

#pragma region Functions
	class UWidget* GetActiveWidget()/* const*/;

	int32_t GetActiveWidgetIndex()/* const*/;

	int32_t GetNumWidgets()/* const*/;

	class UWidget* GetWidgetAtIndex(int32_t Index)/* const*/;

	void SetActiveWidget(class UWidget* Widget);

	void SetActiveWidgetIndex(int32_t Index);

#pragma endregion
};
};