#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class SlateCore.SlateWidgetStyleAsset
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateWidgetStyleAsset : public UObject {
public:
#pragma region Members
	//class USlateWidgetStyleContainerBase*	CustomStyle;		//Offset: 40	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleContainerBase* M_GetCustomStyle() const;
	class USlateWidgetStyleContainerBase** M_PtrGetCustomStyle();
	void M_SetCustomStyle(const class USlateWidgetStyleContainerBase*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};