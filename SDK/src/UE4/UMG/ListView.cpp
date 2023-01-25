#include "../SDK.h"
#include "ListView.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Orientation
// Declaration: TEnumAsByte<EOrientation> Orientation
TEnumAsByte<EOrientation> UListView::M_GetOrientation() const {
	return Read<TEnumAsByte<EOrientation>>((byte*)this + 728);
}
TEnumAsByte<EOrientation>* UListView::M_PtrGetOrientation() {
	return reinterpret_cast<TEnumAsByte<EOrientation>*>((byte*)this + 728);
}
void UListView::M_SetOrientation(const TEnumAsByte<EOrientation>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of SelectionMode
// Declaration: TEnumAsByte<ESelectionMode> SelectionMode
TEnumAsByte<ESelectionMode> UListView::M_GetSelectionMode() const {
	return Read<TEnumAsByte<ESelectionMode>>((byte*)this + 729);
}
TEnumAsByte<ESelectionMode>* UListView::M_PtrGetSelectionMode() {
	return reinterpret_cast<TEnumAsByte<ESelectionMode>*>((byte*)this + 729);
}
void UListView::M_SetSelectionMode(const TEnumAsByte<ESelectionMode>& value) {
	Write((byte*)this + 729, value);
}
// Member Getter and Setter of ConsumeMouseWheel
// Declaration: EConsumeMouseWheel ConsumeMouseWheel
EConsumeMouseWheel UListView::M_GetConsumeMouseWheel() const {
	return Read<EConsumeMouseWheel>((byte*)this + 730);
}
EConsumeMouseWheel* UListView::M_PtrGetConsumeMouseWheel() {
	return reinterpret_cast<EConsumeMouseWheel*>((byte*)this + 730);
}
void UListView::M_SetConsumeMouseWheel(const EConsumeMouseWheel& value) {
	Write((byte*)this + 730, value);
}
// Member Getter and Setter of bClearSelectionOnClick
// Declaration: bool bClearSelectionOnClick
bool UListView::M_GetbClearSelectionOnClick() const {
	return Read<bool>((byte*)this + 731);
}
bool* UListView::M_PtrGetbClearSelectionOnClick() {
	return reinterpret_cast<bool*>((byte*)this + 731);
}
void UListView::M_SetbClearSelectionOnClick(const bool& value) {
	Write((byte*)this + 731, value);
}
// Member Getter and Setter of bIsFocusable
// Declaration: bool bIsFocusable
bool UListView::M_GetbIsFocusable() const {
	return Read<bool>((byte*)this + 732);
}
bool* UListView::M_PtrGetbIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 732);
}
void UListView::M_SetbIsFocusable(const bool& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of EntrySpacing
// Declaration: float EntrySpacing
float UListView::M_GetEntrySpacing() const {
	return Read<float>((byte*)this + 736);
}
float* UListView::M_PtrGetEntrySpacing() {
	return reinterpret_cast<float*>((byte*)this + 736);
}
void UListView::M_SetEntrySpacing(const float& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of bReturnFocusToSelection
// Declaration: bool bReturnFocusToSelection
bool UListView::M_GetbReturnFocusToSelection() const {
	return Read<bool>((byte*)this + 740);
}
bool* UListView::M_PtrGetbReturnFocusToSelection() {
	return reinterpret_cast<bool*>((byte*)this + 740);
}
void UListView::M_SetbReturnFocusToSelection(const bool& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of ListItems
// Declaration: TArray<class UObject*> ListItems
TArray<class UObject*> UListView::M_GetListItems() const {
	return Read<TArray<class UObject*>>((byte*)this + 744);
}
TArray<class UObject*>* UListView::M_PtrGetListItems() {
	return reinterpret_cast<TArray<class UObject*>*>((byte*)this + 744);
}
void UListView::M_SetListItems(const TArray<class UObject*>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of BP_OnEntryInitialized
// Declaration: TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature> BP_OnEntryInitialized
TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature> UListView::M_GetBP_OnEntryInitialized() const {
	return Read<TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>>((byte*)this + 776);
}
TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnEntryInitialized() {
	return reinterpret_cast<TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>*>((byte*)this + 776);
}
void UListView::M_SetBP_OnEntryInitialized(const TAssetPtr<class FOnListEntryInitializedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of BP_OnItemClicked
// Declaration: TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> BP_OnItemClicked
TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> UListView::M_GetBP_OnItemClicked() const {
	return Read<TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>>((byte*)this + 792);
}
TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnItemClicked() {
	return reinterpret_cast<TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>*>((byte*)this + 792);
}
void UListView::M_SetBP_OnItemClicked(const TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of BP_OnItemDoubleClicked
// Declaration: TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> BP_OnItemDoubleClicked
TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature> UListView::M_GetBP_OnItemDoubleClicked() const {
	return Read<TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>>((byte*)this + 808);
}
TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnItemDoubleClicked() {
	return reinterpret_cast<TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>*>((byte*)this + 808);
}
void UListView::M_SetBP_OnItemDoubleClicked(const TAssetPtr<class FSimpleListItemEventDynamic__DelegateSignature>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of BP_OnItemIsHoveredChanged
// Declaration: TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature> BP_OnItemIsHoveredChanged
TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature> UListView::M_GetBP_OnItemIsHoveredChanged() const {
	return Read<TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>>((byte*)this + 824);
}
TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnItemIsHoveredChanged() {
	return reinterpret_cast<TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>*>((byte*)this + 824);
}
void UListView::M_SetBP_OnItemIsHoveredChanged(const TAssetPtr<class FOnItemIsHoveredChangedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of BP_OnItemSelectionChanged
// Declaration: TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature> BP_OnItemSelectionChanged
TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature> UListView::M_GetBP_OnItemSelectionChanged() const {
	return Read<TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>>((byte*)this + 840);
}
TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnItemSelectionChanged() {
	return reinterpret_cast<TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>*>((byte*)this + 840);
}
void UListView::M_SetBP_OnItemSelectionChanged(const TAssetPtr<class FOnListItemSelectionChangedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of BP_OnItemScrolledIntoView
// Declaration: TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature> BP_OnItemScrolledIntoView
TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature> UListView::M_GetBP_OnItemScrolledIntoView() const {
	return Read<TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>>((byte*)this + 856);
}
TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>* UListView::M_PtrGetBP_OnItemScrolledIntoView() {
	return reinterpret_cast<TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>*>((byte*)this + 856);
}
void UListView::M_SetBP_OnItemScrolledIntoView(const TAssetPtr<class FOnListItemScrolledIntoViewDynamic__DelegateSignature>& value) {
	Write((byte*)this + 856, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ListView.AddItem
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::AddItem(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	struct UListView_AddItem_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
	};
	UListView_AddItem_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_CancelScrollIntoView
// Flags: Final, Native, Private, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListView::BP_CancelScrollIntoView() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	struct UListView_BP_CancelScrollIntoView_Params {
	};
	UListView_BP_CancelScrollIntoView_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_ClearSelection
// Flags: Final, Native, Private, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListView::BP_ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	struct UListView_BP_ClearSelection_Params {
	};
	UListView_BP_ClearSelection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_GetNumItemsSelected
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UListView::BP_GetNumItemsSelected() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	struct UListView_BP_GetNumItemsSelected_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UListView_BP_GetNumItemsSelected_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.BP_GetSelectedItem
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UListView::BP_GetSelectedItem() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	struct UListView_BP_GetSelectedItem_Params {
		class UObject* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UListView_BP_GetSelectedItem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.BP_GetSelectedItems
// Flags: Final, Native, Private, HasOutParms, BlueprintCallable, Const
// Params:
// Name: Items	Type: TArray<class UObject*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items) const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	struct UListView_BP_GetSelectedItems_Params {
		TArray<class UObject*> Items;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UListView_BP_GetSelectedItems_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Items != nullptr)
		*Items = params.Items;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.BP_IsItemVisible
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UListView::BP_IsItemVisible(class UObject* Item) const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	struct UListView_BP_IsItemVisible_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UListView_BP_IsItemVisible_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.BP_NavigateToItem
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::BP_NavigateToItem(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	struct UListView_BP_NavigateToItem_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
	};
	UListView_BP_NavigateToItem_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_ScrollItemIntoView
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::BP_ScrollItemIntoView(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	struct UListView_BP_ScrollItemIntoView_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
	};
	UListView_BP_ScrollItemIntoView_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_SetItemSelection
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSelected	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	struct UListView_BP_SetItemSelection_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
		bool bSelected;			//Offset: 8 | ElementSize: 1
	};
	UListView_BP_SetItemSelection_Params params;
	params.Item = Item;
	params.bSelected = bSelected;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_SetListItems
// Flags: Final, Native, Private, HasOutParms, BlueprintCallable
// Params:
// Name: InListItems	Type: TArray<class UObject*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::BP_SetListItems(const TArray<class UObject*>& InListItems) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	struct UListView_BP_SetListItems_Params {
		TArray<class UObject*> InListItems;			//Offset: 0 | ElementSize: 16
	};
	UListView_BP_SetListItems_Params params;
	params.InListItems = InListItems;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.BP_SetSelectedItem
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::BP_SetSelectedItem(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	struct UListView_BP_SetSelectedItem_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
	};
	UListView_BP_SetSelectedItem_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.ClearListItems
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListView::ClearListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	struct UListView_ClearListItems_Params {
	};
	UListView_ClearListItems_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.GetIndexForItem
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UListView::GetIndexForItem(class UObject* Item) const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	struct UListView_GetIndexForItem_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UListView_GetIndexForItem_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.GetItemAt
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UListView::GetItemAt(int32_t Index) const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	struct UListView_GetItemAt_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		class UObject* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UListView_GetItemAt_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.GetListItems
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UObject*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UObject*> UListView::GetListItems() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	struct UListView_GetListItems_Params {
		TArray<class UObject*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UListView_GetListItems_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.GetNumItems
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UListView::GetNumItems() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	struct UListView_GetNumItems_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UListView_GetNumItems_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.IsRefreshPending
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UListView::IsRefreshPending() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	struct UListView_IsRefreshPending_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UListView_IsRefreshPending_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListView.NavigateToIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::NavigateToIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	struct UListView_NavigateToIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UListView_NavigateToIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.RemoveItem
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::RemoveItem(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	struct UListView_RemoveItem_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
	};
	UListView_RemoveItem_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.ScrollIndexIntoView
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::ScrollIndexIntoView(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	struct UListView_ScrollIndexIntoView_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UListView_ScrollIndexIntoView_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.SetSelectedIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	struct UListView_SetSelectedIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UListView_SetSelectedIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListView.SetSelectionMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SelectionMode	Type: TEnumAsByte<ESelectionMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListView::SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	struct UListView_SetSelectionMode_Params {
		TEnumAsByte<ESelectionMode> SelectionMode;			//Offset: 0 | ElementSize: 1
	};
	UListView_SetSelectionMode_Params params;
	params.SelectionMode = SelectionMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}