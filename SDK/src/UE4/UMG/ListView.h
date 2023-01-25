#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ListViewBase.h"
/////////////////////////////////////////////
// Class UMG.ListView
// Super: Class UMG.ListViewBase
// Size: 872
// Size inherited: 536
/////////////////////////////////////////////
namespace UE4 {
class UListView : public UListViewBase {
public:
#pragma region Members
	//TEnumAsByte<EOrientation>	Orientation;		//Offset: 728	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<EOrientation> M_GetOrientation() const;
	TEnumAsByte<EOrientation>* M_PtrGetOrientation();
	void M_SetOrientation(const TEnumAsByte<EOrientation>& value);

	//TEnumAsByte<ESelectionMode>	SelectionMode;		//Offset: 729	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ESelectionMode> M_GetSelectionMode() const;
	TEnumAsByte<ESelectionMode>* M_PtrGetSelectionMode();
	void M_SetSelectionMode(const TEnumAsByte<ESelectionMode>& value);

	//EConsumeMouseWheel	ConsumeMouseWheel;		//Offset: 730	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EConsumeMouseWheel M_GetConsumeMouseWheel() const;
	EConsumeMouseWheel* M_PtrGetConsumeMouseWheel();
	void M_SetConsumeMouseWheel(const EConsumeMouseWheel& value);

	//bool	bClearSelectionOnClick;		//Offset: 731	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbClearSelectionOnClick() const;
	bool* M_PtrGetbClearSelectionOnClick();
	void M_SetbClearSelectionOnClick(const bool& value);

	//bool	bIsFocusable;		//Offset: 732	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsFocusable() const;
	bool* M_PtrGetbIsFocusable();
	void M_SetbIsFocusable(const bool& value);

	//float	EntrySpacing;		//Offset: 736	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetEntrySpacing() const;
	float* M_PtrGetEntrySpacing();
	void M_SetEntrySpacing(const float& value);

	//bool	bReturnFocusToSelection;		//Offset: 740	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbReturnFocusToSelection() const;
	bool* M_PtrGetbReturnFocusToSelection();
	void M_SetbReturnFocusToSelection(const bool& value);

	//TArray<class UObject*>	ListItems;		//Offset: 744	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class UObject*> M_GetListItems() const;
	TArray<class UObject*>* M_PtrGetListItems();
	void M_SetListItems(const TArray<class UObject*>& value);

	//TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>	BP_OnEntryInitialized;		//Offset: 776	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature> M_GetBP_OnEntryInitialized() const;
	TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>* M_PtrGetBP_OnEntryInitialized();
	void M_SetBP_OnEntryInitialized(const TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>& value);

	//TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>	BP_OnItemClicked;		//Offset: 792	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> M_GetBP_OnItemClicked() const;
	TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>* M_PtrGetBP_OnItemClicked();
	void M_SetBP_OnItemClicked(const TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>& value);

	//TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>	BP_OnItemDoubleClicked;		//Offset: 808	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> M_GetBP_OnItemDoubleClicked() const;
	TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>* M_PtrGetBP_OnItemDoubleClicked();
	void M_SetBP_OnItemDoubleClicked(const TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>& value);

	//TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>	BP_OnItemIsHoveredChanged;		//Offset: 824	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature> M_GetBP_OnItemIsHoveredChanged() const;
	TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>* M_PtrGetBP_OnItemIsHoveredChanged();
	void M_SetBP_OnItemIsHoveredChanged(const TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>& value);

	//TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>	BP_OnItemSelectionChanged;		//Offset: 840	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature> M_GetBP_OnItemSelectionChanged() const;
	TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>* M_PtrGetBP_OnItemSelectionChanged();
	void M_SetBP_OnItemSelectionChanged(const TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>& value);

	//TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>	BP_OnItemScrolledIntoView;		//Offset: 856	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature> M_GetBP_OnItemScrolledIntoView() const;
	TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>* M_PtrGetBP_OnItemScrolledIntoView();
	void M_SetBP_OnItemScrolledIntoView(const TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

#pragma region Functions
	void AddItem(class UObject* Item);

	void BP_CancelScrollIntoView();

	void BP_ClearSelection();

	int32_t BP_GetNumItemsSelected() const;

	class UObject* BP_GetSelectedItem() const;

	bool BP_GetSelectedItems(TArray<class UObject*>* Items) const;

	bool BP_IsItemVisible(class UObject* Item) const;

	void BP_NavigateToItem(class UObject* Item);

	void BP_ScrollItemIntoView(class UObject* Item);

	void BP_SetItemSelection(class UObject* Item, bool bSelected);

	void BP_SetListItems(const TArray<class UObject*>& InListItems);

	void BP_SetSelectedItem(class UObject* Item);

	void ClearListItems();

	int32_t GetIndexForItem(class UObject* Item) const;

	class UObject* GetItemAt(int32_t Index) const;

	TArray<class UObject*> GetListItems() const;

	int32_t GetNumItems() const;

	bool IsRefreshPending() const;

	void NavigateToIndex(int32_t Index);

	void RemoveItem(class UObject* Item);

	void ScrollIndexIntoView(int32_t Index);

	void SetSelectedIndex(int32_t Index);

	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);

#pragma endregion
};
};