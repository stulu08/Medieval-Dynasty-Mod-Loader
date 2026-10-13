#include "../SDK.h"
#include "WindowTitleBarArea.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bWindowButtonsEnabled
// Declaration: bool bWindowButtonsEnabled
bool UWindowTitleBarArea::M_GetbWindowButtonsEnabled() const {
	return Read<bool>((byte*)this + 288);
}
bool* UWindowTitleBarArea::M_PtrGetbWindowButtonsEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 288);
}
void UWindowTitleBarArea::M_SetbWindowButtonsEnabled(const bool& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of bDoubleClickTogglesFullscreen
// Declaration: bool bDoubleClickTogglesFullscreen
bool UWindowTitleBarArea::M_GetbDoubleClickTogglesFullscreen() const {
	return Read<bool>((byte*)this + 289);
}
bool* UWindowTitleBarArea::M_PtrGetbDoubleClickTogglesFullscreen() {
	return reinterpret_cast<bool*>((byte*)this + 289);
}
void UWindowTitleBarArea::M_SetbDoubleClickTogglesFullscreen(const bool& value) {
	Write((byte*)this + 289, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHorizontalAlignment	Type: TEnumAsByte<EHorizontalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	struct UWindowTitleBarArea_SetHorizontalAlignment_Params {
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WindowTitleBarArea.SetPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarArea::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	struct UWindowTitleBarArea_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVerticalAlignment	Type: TEnumAsByte<EVerticalAlignment>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	struct UWindowTitleBarArea_SetVerticalAlignment_Params {
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;			//Offset: 0 | ElementSize: 1
	};
	UWindowTitleBarArea_SetVerticalAlignment_Params params;
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