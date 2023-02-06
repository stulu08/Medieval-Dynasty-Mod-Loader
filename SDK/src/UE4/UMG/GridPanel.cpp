#include "../SDK.h"
#include "GridPanel.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ColumnFill
// Declaration: TArray<float> ColumnFill
TArray<float> UGridPanel::M_GetColumnFill() const {
	return Read<TArray<float>>((byte*)this + 288);
}
TArray<float>* UGridPanel::M_PtrGetColumnFill() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 288);
}
void UGridPanel::M_SetColumnFill(const TArray<float>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of RowFill
// Declaration: TArray<float> RowFill
TArray<float> UGridPanel::M_GetRowFill() const {
	return Read<TArray<float>>((byte*)this + 304);
}
TArray<float>* UGridPanel::M_PtrGetRowFill() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 304);
}
void UGridPanel::M_SetRowFill(const TArray<float>& value) {
	Write((byte*)this + 304, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.GridPanel.AddChildToGrid
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InColumn	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UGridSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	struct UGridPanel_AddChildToGrid_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		int32_t InRow;			//Offset: 8 | ElementSize: 4
		int32_t InColumn;			//Offset: 12 | ElementSize: 4
		class UGridSlot* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.GridPanel.SetColumnFill
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ColumnIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Coefficient	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	struct UGridPanel_SetColumnFill_Params {
		int32_t ColumnIndex;			//Offset: 0 | ElementSize: 4
		float Coefficient;			//Offset: 4 | ElementSize: 4
	};
	UGridPanel_SetColumnFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridPanel.SetRowFill
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ColumnIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Coefficient	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	struct UGridPanel_SetRowFill_Params {
		int32_t ColumnIndex;			//Offset: 0 | ElementSize: 4
		float Coefficient;			//Offset: 4 | ElementSize: 4
	};
	UGridPanel_SetRowFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}