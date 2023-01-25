#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ListView.h"
/////////////////////////////////////////////
// Class UMG.TreeView
// Super: Class UMG.ListView
// Size: 960
// Size inherited: 872
/////////////////////////////////////////////
namespace UE4 {
class UTreeView : public UListView {
public:
#pragma region Members
	//struct FScriptDelegate	BP_OnGetItemChildren;		//Offset: 888	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
	struct FScriptDelegate M_GetBP_OnGetItemChildren() const;
	struct FScriptDelegate* M_PtrGetBP_OnGetItemChildren();
	void M_SetBP_OnGetItemChildren(const struct FScriptDelegate& value);

	//TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>	BP_OnItemExpansionChanged;		//Offset: 904	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature> M_GetBP_OnItemExpansionChanged() const;
	TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>* M_PtrGetBP_OnItemExpansionChanged();
	void M_SetBP_OnItemExpansionChanged(const TAssetPtr<class FOnItemExpansionChangedDynamic__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}

#pragma region Functions
	void CollapseAll();

	void ExpandAll();

	void SetItemExpansion(class UObject* Item, bool bExpandItem);

#pragma endregion
};
};