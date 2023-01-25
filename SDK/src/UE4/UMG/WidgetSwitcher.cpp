#include "../SDK.h"
#include "WidgetSwitcher.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ActiveWidgetIndex
// Declaration: int32_t ActiveWidgetIndex
int32_t UWidgetSwitcher::M_GetActiveWidgetIndex() const {
	return Read<int32_t>((byte*)this + 288);
}
int32_t* UWidgetSwitcher::M_PtrGetActiveWidgetIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 288);
}
void UWidgetSwitcher::M_SetActiveWidgetIndex(const int32_t& value) {
	Write((byte*)this + 288, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetSwitcher.GetActiveWidget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidgetSwitcher::GetActiveWidget() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	struct UWidgetSwitcher_GetActiveWidget_Params {
		class UWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetSwitcher_GetActiveWidget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UWidgetSwitcher::GetActiveWidgetIndex() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	struct UWidgetSwitcher_GetActiveWidgetIndex_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetSwitcher_GetActiveWidgetIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcher.GetNumWidgets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UWidgetSwitcher::GetNumWidgets() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	struct UWidgetSwitcher_GetNumWidgets_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetSwitcher_GetNumWidgets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index) const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	struct UWidgetSwitcher_GetWidgetAtIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		class UWidget* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetSwitcher_GetWidgetAtIndex_Params params;
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
// Function UMG.WidgetSwitcher.SetActiveWidget
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	struct UWidgetSwitcher_SetActiveWidget_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
	};
	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	struct UWidgetSwitcher_SetActiveWidgetIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}