#include "../SDK.h"
#include "GridSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UGridSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 56);
}
struct FMargin* UGridSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 56);
}
void UGridSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UGridSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 72);
}
TEnumAsByte<EHorizontalAlignment>* UGridSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 72);
}
void UGridSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UGridSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 73);
}
TEnumAsByte<EVerticalAlignment>* UGridSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 73);
}
void UGridSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 73, value);
}
// Member Getter and Setter of Row
// Declaration: int32_t Row
int32_t UGridSlot::M_GetRow() const {
	return Read<int32_t>((byte*)this + 76);
}
int32_t* UGridSlot::M_PtrGetRow() {
	return reinterpret_cast<int32_t*>((byte*)this + 76);
}
void UGridSlot::M_SetRow(const int32_t& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of RowSpan
// Declaration: int32_t RowSpan
int32_t UGridSlot::M_GetRowSpan() const {
	return Read<int32_t>((byte*)this + 80);
}
int32_t* UGridSlot::M_PtrGetRowSpan() {
	return reinterpret_cast<int32_t*>((byte*)this + 80);
}
void UGridSlot::M_SetRowSpan(const int32_t& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of Column
// Declaration: int32_t Column
int32_t UGridSlot::M_GetColumn() const {
	return Read<int32_t>((byte*)this + 84);
}
int32_t* UGridSlot::M_PtrGetColumn() {
	return reinterpret_cast<int32_t*>((byte*)this + 84);
}
void UGridSlot::M_SetColumn(const int32_t& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of ColumnSpan
// Declaration: int32_t ColumnSpan
int32_t UGridSlot::M_GetColumnSpan() const {
	return Read<int32_t>((byte*)this + 88);
}
int32_t* UGridSlot::M_PtrGetColumnSpan() {
	return reinterpret_cast<int32_t*>((byte*)this + 88);
}
void UGridSlot::M_SetColumnSpan(const int32_t& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of Layer
// Declaration: int32_t Layer
int32_t UGridSlot::M_GetLayer() const {
	return Read<int32_t>((byte*)this + 92);
}
int32_t* UGridSlot::M_PtrGetLayer() {
	return reinterpret_cast<int32_t*>((byte*)this + 92);
}
void UGridSlot::M_SetLayer(const int32_t& value) {
	Write((byte*)this + 92, value);
}
// Member Getter and Setter of Nudge
// Declaration: struct FVector2D Nudge
struct FVector2D UGridSlot::M_GetNudge() const {
	return Read<struct FVector2D>((byte*)this + 96);
}
struct FVector2D* UGridSlot::M_PtrGetNudge() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 96);
}
void UGridSlot::M_SetNudge(const struct FVector2D& value) {
	Write((byte*)this + 96, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.GridSlot.SetColumn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InColumn	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	struct UGridSlot_SetColumn_Params {
		int32_t InColumn;			//Offset: 0 | ElementSize: 4
	};
	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetColumnSpan
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InColumnSpan	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetColumnSpan(int32_t InColumnSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	struct UGridSlot_SetColumnSpan_Params {
		int32_t InColumnSpan;			//Offset: 0 | ElementSize: 4
	};
	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	struct UGridSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetLayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InLayer	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetLayer(int32_t InLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	struct UGridSlot_SetLayer_Params {
		int32_t InLayer;			//Offset: 0 | ElementSize: 4
	};
	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetNudge
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InNudge	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetNudge(struct FVector2D InNudge) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	struct UGridSlot_SetNudge_Params {
		struct FVector2D InNudge;			//Offset: 0 | ElementSize: 8
	};
	UGridSlot_SetNudge_Params params;
	params.InNudge = InNudge;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	struct UGridSlot_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetRow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InRow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	struct UGridSlot_SetRow_Params {
		int32_t InRow;			//Offset: 0 | ElementSize: 4
	};
	UGridSlot_SetRow_Params params;
	params.InRow = InRow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetRowSpan
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InRowSpan	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetRowSpan(int32_t InRowSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	struct UGridSlot_SetRowSpan_Params {
		int32_t InRowSpan;			//Offset: 0 | ElementSize: 4
	};
	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.GridSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	struct UGridSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UGridSlot_SetVerticalAlignment_Params params;
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