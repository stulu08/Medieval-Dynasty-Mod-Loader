#include "../SDK.h"
#include "UserObjectListEntry.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UserObjectListEntry.OnListItemObjectSet
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: ListItemObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");

	struct UUserObjectListEntry_OnListItemObjectSet_Params {
		class UObject* ListItemObject;			//Offset: 0 | ElementSize: 8
	};
	UUserObjectListEntry_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}