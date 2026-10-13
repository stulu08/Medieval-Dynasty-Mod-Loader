#include "../SDK.h"
#include "VerticalBoxSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Size
// Declaration: struct FSlateChildSize Size
struct FSlateChildSize UVerticalBoxSlot::M_GetSize() const {
	return Read<struct FSlateChildSize>((byte*)this + 56);
}
struct FSlateChildSize* UVerticalBoxSlot::M_PtrGetSize() {
	return reinterpret_cast<struct FSlateChildSize*>((byte*)this + 56);
}
void UVerticalBoxSlot::M_SetSize(const struct FSlateChildSize& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UVerticalBoxSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 64);
}
struct FMargin* UVerticalBoxSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 64);
}
void UVerticalBoxSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UVerticalBoxSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 88);
}
TEnumAsByte<EHorizontalAlignment>* UVerticalBoxSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 88);
}
void UVerticalBoxSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UVerticalBoxSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 89);
}
TEnumAsByte<EVerticalAlignment>* UVerticalBoxSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 89);
}
void UVerticalBoxSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 89, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	struct UVerticalBoxSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.VerticalBoxSlot.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UVerticalBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	struct UVerticalBoxSlot_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.VerticalBoxSlot.SetSize
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InSize	Type: struct FSlateChildSize	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UVerticalBoxSlot::SetSize(struct FSlateChildSize InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	struct UVerticalBoxSlot_SetSize_Params {
		struct FSlateChildSize InSize;			//Offset: 0 | ElementSize: 8
	};
	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	struct UVerticalBoxSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UVerticalBoxSlot_SetVerticalAlignment_Params params;
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