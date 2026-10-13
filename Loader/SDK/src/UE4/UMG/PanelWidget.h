#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.PanelWidget
// Super: Class UMG.Widget
// Size: 288
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UPanelWidget : public UWidget {
public:
#pragma region Members
	//TArray<class UPanelSlot*>	Slots;		//Offset: 264	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<class UPanelSlot*> M_GetSlots() const;
	TArray<class UPanelSlot*>* M_PtrGetSlots();
	void M_SetSlots(const TArray<class UPanelSlot*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}

#pragma region Functions
	class UPanelSlot* AddChild(class UWidget* Content);

	void ClearChildren();

	TArray<class UWidget*> GetAllChildren()/* const*/;

	class UWidget* GetChildAt(int32_t Index)/* const*/;

	int32_t GetChildIndex(class UWidget* Content)/* const*/;

	int32_t GetChildrenCount()/* const*/;

	bool HasAnyChildren()/* const*/;

	bool HasChild(class UWidget* Content)/* const*/;

	bool RemoveChild(class UWidget* Content);

	bool RemoveChildAt(int32_t Index);

#pragma endregion
};
};