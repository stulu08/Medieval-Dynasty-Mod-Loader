#include "../SDK.h"
#include "UserListEntry.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UserListEntry.BP_OnEntryReleased
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUserListEntry::BP_OnEntryReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");

	struct UUserListEntry_BP_OnEntryReleased_Params {
	};
	UUserListEntry_BP_OnEntryReleased_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: bIsExpanded	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");

	struct UUserListEntry_BP_OnItemExpansionChanged_Params {
		bool bIsExpanded;			//Offset: 0 | ElementSize: 1
	};
	UUserListEntry_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: bIsSelected	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");

	struct UUserListEntry_BP_OnItemSelectionChanged_Params {
		bool bIsSelected;			//Offset: 0 | ElementSize: 1
	};
	UUserListEntry_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}