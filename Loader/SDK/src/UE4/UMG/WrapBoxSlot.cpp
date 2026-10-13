#include "../SDK.h"
#include "WrapBoxSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UWrapBoxSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 56);
}
struct FMargin* UWrapBoxSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 56);
}
void UWrapBoxSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of bFillEmptySpace
// Declaration: bool bFillEmptySpace
bool UWrapBoxSlot::M_GetbFillEmptySpace() const {
	return Read<bool>((byte*)this + 72);
}
bool* UWrapBoxSlot::M_PtrGetbFillEmptySpace() {
	return reinterpret_cast<bool*>((byte*)this + 72);
}
void UWrapBoxSlot::M_SetbFillEmptySpace(const bool& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of FillSpanWhenLessThan
// Declaration: float FillSpanWhenLessThan
float UWrapBoxSlot::M_GetFillSpanWhenLessThan() const {
	return Read<float>((byte*)this + 76);
}
float* UWrapBoxSlot::M_PtrGetFillSpanWhenLessThan() {
	return reinterpret_cast<float*>((byte*)this + 76);
}
void UWrapBoxSlot::M_SetFillSpanWhenLessThan(const float& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UWrapBoxSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 80);
}
TEnumAsByte<EHorizontalAlignment>* UWrapBoxSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 80);
}
void UWrapBoxSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UWrapBoxSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 81);
}
TEnumAsByte<EVerticalAlignment>* UWrapBoxSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 81);
}
void UWrapBoxSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 81, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WrapBoxSlot.SetFillEmptySpace
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InbFillEmptySpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	struct UWrapBoxSlot_SetFillEmptySpace_Params {
		bool InbFillEmptySpace;			//Offset: 0 | ElementSize: 1
	};
	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InFillSpanWhenLessThan	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params {
		float InFillSpanWhenLessThan;			//Offset: 0 | ElementSize: 4
	};
	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	struct UWrapBoxSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WrapBoxSlot.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	struct UWrapBoxSlot_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WrapBoxSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	struct UWrapBoxSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWrapBoxSlot_SetVerticalAlignment_Params params;
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