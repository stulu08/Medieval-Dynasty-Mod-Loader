#include "../SDK.h"
#include "UserListEntryLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UserListEntryLibrary.GetOwningListView
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: UserListEntry	Type: TScriptInterface<class UUserListEntry>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UListViewBase*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UListViewBase* UUserListEntryLibrary::GetOwningListView(TScriptInterface<class UUserListEntry> UserListEntry) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");

	struct UUserListEntryLibrary_GetOwningListView_Params {
		TScriptInterface<class UUserListEntry> UserListEntry;			//Offset: 0 | ElementSize: 16
		class UListViewBase* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UUserListEntryLibrary_GetOwningListView_Params params;
	params.UserListEntry = UserListEntry;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserListEntryLibrary.IsListItemExpanded
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: UserListEntry	Type: TScriptInterface<class UUserListEntry>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<class UUserListEntry> UserListEntry) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");

	struct UUserListEntryLibrary_IsListItemExpanded_Params {
		TScriptInterface<class UUserListEntry> UserListEntry;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UUserListEntryLibrary_IsListItemExpanded_Params params;
	params.UserListEntry = UserListEntry;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserListEntryLibrary.IsListItemSelected
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: UserListEntry	Type: TScriptInterface<class UUserListEntry>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserListEntryLibrary::IsListItemSelected(TScriptInterface<class UUserListEntry> UserListEntry) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");

	struct UUserListEntryLibrary_IsListItemSelected_Params {
		TScriptInterface<class UUserListEntry> UserListEntry;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UUserListEntryLibrary_IsListItemSelected_Params params;
	params.UserListEntry = UserListEntry;

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