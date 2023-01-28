#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.WidgetTree
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetTree : public UObject {
public:
#pragma region Members
	//class UWidget*	RootWidget;		//Offset: 40	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidget* M_GetRootWidget() const;
	class UWidget** M_PtrGetRootWidget();
	void M_SetRootWidget(const class UWidget*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};