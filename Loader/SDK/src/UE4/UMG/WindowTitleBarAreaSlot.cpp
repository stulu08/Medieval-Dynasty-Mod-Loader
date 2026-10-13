#include "../SDK.h"
#include "WindowTitleBarAreaSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UWindowTitleBarAreaSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 56);
}
struct FMargin* UWindowTitleBarAreaSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 56);
}
void UWindowTitleBarAreaSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UWindowTitleBarAreaSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 72);
}
TEnumAsByte<EHorizontalAlignment>* UWindowTitleBarAreaSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 72);
}
void UWindowTitleBarAreaSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UWindowTitleBarAreaSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 73);
}
TEnumAsByte<EVerticalAlignment>* UWindowTitleBarAreaSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 73);
}
void UWindowTitleBarAreaSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 73, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WindowTitleBarAreaSlot.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarAreaSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	struct UWindowTitleBarAreaSlot_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
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