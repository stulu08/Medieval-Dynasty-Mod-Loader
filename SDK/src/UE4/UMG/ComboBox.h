#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ComboBox
// Super: Class UMG.Widget
// Size: 320
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UComboBox : public UWidget {
public:
#pragma region Members
	//TArray<class UObject*>	Items;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UObject*> M_GetItems() const;
	TArray<class UObject*>* M_PtrGetItems();
	void M_SetItems(const TArray<class UObject*>& value);

	//struct FScriptDelegate	OnGenerateWidgetEvent;		//Offset: 280	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnGenerateWidgetEvent() const;
	struct FScriptDelegate* M_PtrGetOnGenerateWidgetEvent();
	void M_SetOnGenerateWidgetEvent(const struct FScriptDelegate& value);

	//bool	bIsFocusable;		//Offset: 296	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsFocusable() const;
	bool* M_PtrGetbIsFocusable();
	void M_SetbIsFocusable(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};