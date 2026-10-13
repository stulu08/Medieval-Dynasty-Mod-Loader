#include "../SDK.h"
#include "WrapBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of InnerSlotPadding
// Declaration: struct FVector2D InnerSlotPadding
struct FVector2D UWrapBox::M_GetInnerSlotPadding() const {
	return Read<struct FVector2D>((byte*)this + 288);
}
struct FVector2D* UWrapBox::M_PtrGetInnerSlotPadding() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 288);
}
void UWrapBox::M_SetInnerSlotPadding(const struct FVector2D& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of WrapWidth
// Declaration: float WrapWidth
float UWrapBox::M_GetWrapWidth() const {
	return Read<float>((byte*)this + 296);
}
float* UWrapBox::M_PtrGetWrapWidth() {
	return reinterpret_cast<float*>((byte*)this + 296);
}
void UWrapBox::M_SetWrapWidth(const float& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of WrapSize
// Declaration: float WrapSize
float UWrapBox::M_GetWrapSize() const {
	return Read<float>((byte*)this + 300);
}
float* UWrapBox::M_PtrGetWrapSize() {
	return reinterpret_cast<float*>((byte*)this + 300);
}
void UWrapBox::M_SetWrapSize(const float& value) {
	Write((byte*)this + 300, value);
}
// Member Getter and Setter of bExplicitWrapWidth
// Declaration: bool bExplicitWrapWidth
bool UWrapBox::M_GetbExplicitWrapWidth() const {
	return Read<bool>((byte*)this + 304);
}
bool* UWrapBox::M_PtrGetbExplicitWrapWidth() {
	return reinterpret_cast<bool*>((byte*)this + 304);
}
void UWrapBox::M_SetbExplicitWrapWidth(const bool& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of bExplicitWrapSize
// Declaration: bool bExplicitWrapSize
bool UWrapBox::M_GetbExplicitWrapSize() const {
	return Read<bool>((byte*)this + 305);
}
bool* UWrapBox::M_PtrGetbExplicitWrapSize() {
	return reinterpret_cast<bool*>((byte*)this + 305);
}
void UWrapBox::M_SetbExplicitWrapSize(const bool& value) {
	Write((byte*)this + 305, value);
}
// Member Getter and Setter of Orientation
// Declaration: TEnumAsByte<EOrientation> Orientation
TEnumAsByte<EOrientation> UWrapBox::M_GetOrientation() const {
	return Read<TEnumAsByte<EOrientation>>((byte*)this + 306);
}
TEnumAsByte<EOrientation>* UWrapBox::M_PtrGetOrientation() {
	return reinterpret_cast<TEnumAsByte<EOrientation>*>((byte*)this + 306);
}
void UWrapBox::M_SetOrientation(const TEnumAsByte<EOrientation>& value) {
	Write((byte*)this + 306, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WrapBox.AddChildToWrapBox
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWrapBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	struct UWrapBox_AddChildToWrapBox_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		class UWrapBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWrapBox_AddChildToWrapBox_Params params;
	params.Content = Content;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WrapBox.SetInnerSlotPadding
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWrapBox::SetInnerSlotPadding(struct FVector2D InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	struct UWrapBox_SetInnerSlotPadding_Params {
		struct FVector2D InPadding;			//Offset: 0 | ElementSize: 8
	};
	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}