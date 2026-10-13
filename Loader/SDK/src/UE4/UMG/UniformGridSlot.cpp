#include "../SDK.h"
#include "UniformGridSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UUniformGridSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 56);
}
TEnumAsByte<EHorizontalAlignment>* UUniformGridSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 56);
}
void UUniformGridSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UUniformGridSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 57);
}
TEnumAsByte<EVerticalAlignment>* UUniformGridSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 57);
}
void UUniformGridSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 57, value);
}
// Member Getter and Setter of Row
// Declaration: int32_t Row
int32_t UUniformGridSlot::M_GetRow() const {
	return Read<int32_t>((byte*)this + 60);
}
int32_t* UUniformGridSlot::M_PtrGetRow() {
	return reinterpret_cast<int32_t*>((byte*)this + 60);
}
void UUniformGridSlot::M_SetRow(const int32_t& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of Column
// Declaration: int32_t Column
int32_t UUniformGridSlot::M_GetColumn() const {
	return Read<int32_t>((byte*)this + 64);
}
int32_t* UUniformGridSlot::M_PtrGetColumn() {
	return reinterpret_cast<int32_t*>((byte*)this + 64);
}
void UUniformGridSlot::M_SetColumn(const int32_t& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UniformGridSlot.SetColumn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InColumn	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	struct UUniformGridSlot_SetColumn_Params {
		int32_t InColumn;			//Offset: 0 | ElementSize: 4
	};
	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UniformGridSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	struct UUniformGridSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UniformGridSlot.SetRow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InRow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	struct UUniformGridSlot_SetRow_Params {
		int32_t InRow;			//Offset: 0 | ElementSize: 4
	};
	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UniformGridSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	struct UUniformGridSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}