#include "../SDK.h"
#include "PanelWidget.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Slots
// Declaration: TArray<class UPanelSlot*> Slots
TArray<class UPanelSlot*> UPanelWidget::M_GetSlots() const {
	return Read<TArray<class UPanelSlot*>>((byte*)this + 264);
}
TArray<class UPanelSlot*>* UPanelWidget::M_PtrGetSlots() {
	return reinterpret_cast<TArray<class UPanelSlot*>*>((byte*)this + 264);
}
void UPanelWidget::M_SetSlots(const TArray<class UPanelSlot*>& value) {
	Write((byte*)this + 264, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.PanelWidget.AddChild
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UPanelSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	struct UPanelWidget_AddChild_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		class UPanelSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.ClearChildren
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UPanelWidget::ClearChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	struct UPanelWidget_ClearChildren_Params {
	};
	UPanelWidget_ClearChildren_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.PanelWidget.GetAllChildren
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UWidget*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UWidget*> UPanelWidget::GetAllChildren()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	struct UPanelWidget_GetAllChildren_Params {
		TArray<class UWidget*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPanelWidget_GetAllChildren_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.GetChildAt
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UPanelWidget::GetChildAt(int32_t Index)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	struct UPanelWidget_GetChildAt_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		class UWidget* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UPanelWidget_GetChildAt_Params params;
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
// Function UMG.PanelWidget.GetChildIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Content	Type: class UWidget*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UPanelWidget::GetChildIndex(class UWidget* Content)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	struct UPanelWidget_GetChildIndex_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.GetChildrenCount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UPanelWidget::GetChildrenCount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	struct UPanelWidget_GetChildrenCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UPanelWidget_GetChildrenCount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.HasAnyChildren
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPanelWidget::HasAnyChildren()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	struct UPanelWidget_HasAnyChildren_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPanelWidget_HasAnyChildren_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.HasChild
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPanelWidget::HasChild(class UWidget* Content)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	struct UPanelWidget_HasChild_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.RemoveChild
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPanelWidget::RemoveChild(class UWidget* Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	struct UPanelWidget_RemoveChild_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.PanelWidget.RemoveChildAt
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPanelWidget::RemoveChildAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	struct UPanelWidget_RemoveChildAt_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}