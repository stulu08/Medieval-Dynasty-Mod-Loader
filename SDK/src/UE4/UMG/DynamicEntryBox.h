#pragma once
#include "Structs.h"
#include "UMG/DynamicEntryBoxBase.h"
/////////////////////////////////////////////
// Class UMG.DynamicEntryBox
// Super: Class UMG.DynamicEntryBoxBase
// Size: 480
// Size inherited: 472
/////////////////////////////////////////////
namespace UE4 {
class UDynamicEntryBox : public UDynamicEntryBoxBase {
public:
#pragma region Members
	//class UUserWidget*	EntryWidgetClass;		//Offset: 472	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UUserWidget* M_GetEntryWidgetClass() const;
	class UUserWidget** M_PtrGetEntryWidgetClass();
	void M_SetEntryWidgetClass(const class UUserWidget*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}

#pragma region Functions
	class UUserWidget* BP_CreateEntry();

	class UUserWidget* BP_CreateEntryOfClass(class UUserWidget* EntryClass);

	void RemoveEntry(class UUserWidget* EntryWidget);

	void Reset(bool bDeleteWidgets);

#pragma endregion
};
};