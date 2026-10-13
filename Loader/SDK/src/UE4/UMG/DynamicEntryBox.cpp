#include "../SDK.h"
#include "DynamicEntryBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EntryWidgetClass
// Declaration: class UUserWidget* EntryWidgetClass
class UUserWidget* UDynamicEntryBox::M_GetEntryWidgetClass() const {
	return Read<class UUserWidget*>((byte*)this + 472);
}
class UUserWidget** UDynamicEntryBox::M_PtrGetEntryWidgetClass() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 472);
}
void UDynamicEntryBox::M_SetEntryWidgetClass(const class UUserWidget*& value) {
	Write((byte*)this + 472, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.DynamicEntryBox.BP_CreateEntry
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UDynamicEntryBox::BP_CreateEntry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	struct UDynamicEntryBox_BP_CreateEntry_Params {
		class UUserWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UDynamicEntryBox_BP_CreateEntry_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: EntryClass	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(class UUserWidget* EntryClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	struct UDynamicEntryBox_BP_CreateEntryOfClass_Params {
		class UUserWidget* EntryClass;			//Offset: 0 | ElementSize: 8
		class UUserWidget* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UDynamicEntryBox_BP_CreateEntryOfClass_Params params;
	params.EntryClass = EntryClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBox.RemoveEntry
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: EntryWidget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	struct UDynamicEntryBox_RemoveEntry_Params {
		class UUserWidget* EntryWidget;			//Offset: 0 | ElementSize: 8
	};
	UDynamicEntryBox_RemoveEntry_Params params;
	params.EntryWidget = EntryWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBox.Reset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bDeleteWidgets	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDynamicEntryBox::Reset(bool bDeleteWidgets) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	struct UDynamicEntryBox_Reset_Params {
		bool bDeleteWidgets;			//Offset: 0 | ElementSize: 1
	};
	UDynamicEntryBox_Reset_Params params;
	params.bDeleteWidgets = bDeleteWidgets;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}