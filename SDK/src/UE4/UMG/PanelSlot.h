#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Visual.h"
/////////////////////////////////////////////
// Class UMG.PanelSlot
// Super: Class UMG.Visual
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPanelSlot : public UVisual {
public:
#pragma region Members
	//class UPanelWidget*	Parent;		//Offset: 40	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPanelWidget* M_GetParent() const;
	class UPanelWidget** M_PtrGetParent();
	void M_SetParent(const class UPanelWidget*& value);

	//class UWidget*	Content;		//Offset: 48	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidget* M_GetContent() const;
	class UWidget** M_PtrGetContent();
	void M_SetContent(const class UWidget*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};