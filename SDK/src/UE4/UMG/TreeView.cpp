#include "../SDK.h"
#include "TreeView.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BP_OnGetItemChildren
// Declaration: struct FScriptDelegate BP_OnGetItemChildren
struct FScriptDelegate UTreeView::M_GetBP_OnGetItemChildren() const {
	return Read<struct FScriptDelegate>((byte*)this + 888);
}
struct FScriptDelegate* UTreeView::M_PtrGetBP_OnGetItemChildren() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 888);
}
void UTreeView::M_SetBP_OnGetItemChildren(const struct FScriptDelegate& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of BP_OnItemExpansionChanged
// Declaration: TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature> BP_OnItemExpansionChanged
TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature> UTreeView::M_GetBP_OnItemExpansionChanged() const {
	return Read<TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>>((byte*)this + 904);
}
TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>* UTreeView::M_PtrGetBP_OnItemExpansionChanged() {
	return reinterpret_cast<TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>*>((byte*)this + 904);
}
void UTreeView::M_SetBP_OnItemExpansionChanged(const TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 904, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.TreeView.CollapseAll
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UTreeView::CollapseAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	struct UTreeView_CollapseAll_Params {
	};
	UTreeView_CollapseAll_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TreeView.ExpandAll
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UTreeView::ExpandAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	struct UTreeView_ExpandAll_Params {
	};
	UTreeView_ExpandAll_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TreeView.SetItemExpansion
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bExpandItem	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	struct UTreeView_SetItemExpansion_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
		bool bExpandItem;			//Offset: 8 | ElementSize: 1
	};
	UTreeView_SetItemExpansion_Params params;
	params.Item = Item;
	params.bExpandItem = bExpandItem;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}