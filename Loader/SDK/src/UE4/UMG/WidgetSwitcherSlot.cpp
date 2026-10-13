#include "../SDK.h"
#include "WidgetSwitcherSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UWidgetSwitcherSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 64);
}
struct FMargin* UWidgetSwitcherSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 64);
}
void UWidgetSwitcherSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of HorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> HorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UWidgetSwitcherSlot::M_GetHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 80);
}
TEnumAsByte<EHorizontalAlignment>* UWidgetSwitcherSlot::M_PtrGetHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 80);
}
void UWidgetSwitcherSlot::M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of VerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> VerticalAlignment
TEnumAsByte<EVerticalAlignment> UWidgetSwitcherSlot::M_GetVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 81);
}
TEnumAsByte<EVerticalAlignment>* UWidgetSwitcherSlot::M_PtrGetVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 81);
}
void UWidgetSwitcherSlot::M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 81, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcherSlot.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetSwitcherSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	struct UWidgetSwitcherSlot_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	struct UWidgetSwitcherSlot_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
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