#include "../SDK.h"
#include "UniformGridPanel.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SlotPadding
// Declaration: struct FMargin SlotPadding
struct FMargin UUniformGridPanel::M_GetSlotPadding() const {
	return Read<struct FMargin>((byte*)this + 288);
}
struct FMargin* UUniformGridPanel::M_PtrGetSlotPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 288);
}
void UUniformGridPanel::M_SetSlotPadding(const struct FMargin& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of MinDesiredSlotWidth
// Declaration: float MinDesiredSlotWidth
float UUniformGridPanel::M_GetMinDesiredSlotWidth() const {
	return Read<float>((byte*)this + 304);
}
float* UUniformGridPanel::M_PtrGetMinDesiredSlotWidth() {
	return reinterpret_cast<float*>((byte*)this + 304);
}
void UUniformGridPanel::M_SetMinDesiredSlotWidth(const float& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of MinDesiredSlotHeight
// Declaration: float MinDesiredSlotHeight
float UUniformGridPanel::M_GetMinDesiredSlotHeight() const {
	return Read<float>((byte*)this + 308);
}
float* UUniformGridPanel::M_PtrGetMinDesiredSlotHeight() {
	return reinterpret_cast<float*>((byte*)this + 308);
}
void UUniformGridPanel::M_SetMinDesiredSlotHeight(const float& value) {
	Write((byte*)this + 308, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UniformGridPanel.AddChildToUniformGrid
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InColumn	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUniformGridSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	struct UUniformGridPanel_AddChildToUniformGrid_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		int32_t InRow;			//Offset: 8 | ElementSize: 4
		int32_t InColumn;			//Offset: 12 | ElementSize: 4
		class UUniformGridSlot* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UUniformGridPanel_AddChildToUniformGrid_Params params;
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
// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredSlotHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	struct UUniformGridPanel_SetMinDesiredSlotHeight_Params {
		float InMinDesiredSlotHeight;			//Offset: 0 | ElementSize: 4
	};
	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredSlotWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	struct UUniformGridPanel_SetMinDesiredSlotWidth_Params {
		float InMinDesiredSlotWidth;			//Offset: 0 | ElementSize: 4
	};
	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UniformGridPanel.SetSlotPadding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InSlotPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUniformGridPanel::SetSlotPadding(struct FMargin InSlotPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	struct UUniformGridPanel_SetSlotPadding_Params {
		struct FMargin InSlotPadding;			//Offset: 0 | ElementSize: 16
	};
	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}