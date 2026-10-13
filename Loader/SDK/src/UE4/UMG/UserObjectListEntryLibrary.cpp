#include "../SDK.h"
#include "UserObjectListEntryLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: UserObjectListEntry	Type: TScriptInterface<class UUserObjectListEntry>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<class UUserObjectListEntry> UserObjectListEntry) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");

	struct UUserObjectListEntryLibrary_GetListItemObject_Params {
		TScriptInterface<class UUserObjectListEntry> UserObjectListEntry;			//Offset: 0 | ElementSize: 16
		class UObject* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UUserObjectListEntryLibrary_GetListItemObject_Params params;
	params.UserObjectListEntry = UserObjectListEntry;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}