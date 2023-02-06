#include "../SDK.h"
#include "ScaleBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Stretch
// Declaration: TEnumAsByte<EStretch> Stretch
TEnumAsByte<EStretch> UScaleBox::M_GetStretch() const {
	return Read<TEnumAsByte<EStretch>>((byte*)this + 288);
}
TEnumAsByte<EStretch>* UScaleBox::M_PtrGetStretch() {
	return reinterpret_cast<TEnumAsByte<EStretch>*>((byte*)this + 288);
}
void UScaleBox::M_SetStretch(const TEnumAsByte<EStretch>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of StretchDirection
// Declaration: TEnumAsByte<EStretchDirection> StretchDirection
TEnumAsByte<EStretchDirection> UScaleBox::M_GetStretchDirection() const {
	return Read<TEnumAsByte<EStretchDirection>>((byte*)this + 289);
}
TEnumAsByte<EStretchDirection>* UScaleBox::M_PtrGetStretchDirection() {
	return reinterpret_cast<TEnumAsByte<EStretchDirection>*>((byte*)this + 289);
}
void UScaleBox::M_SetStretchDirection(const TEnumAsByte<EStretchDirection>& value) {
	Write((byte*)this + 289, value);
}
// Member Getter and Setter of UserSpecifiedScale
// Declaration: float UserSpecifiedScale
float UScaleBox::M_GetUserSpecifiedScale() const {
	return Read<float>((byte*)this + 292);
}
float* UScaleBox::M_PtrGetUserSpecifiedScale() {
	return reinterpret_cast<float*>((byte*)this + 292);
}
void UScaleBox::M_SetUserSpecifiedScale(const float& value) {
	Write((byte*)this + 292, value);
}
// Member Getter and Setter of IgnoreInheritedScale
// Declaration: bool IgnoreInheritedScale
bool UScaleBox::M_GetIgnoreInheritedScale() const {
	return Read<bool>((byte*)this + 296);
}
bool* UScaleBox::M_PtrGetIgnoreInheritedScale() {
	return reinterpret_cast<bool*>((byte*)this + 296);
}
void UScaleBox::M_SetIgnoreInheritedScale(const bool& value) {
	Write((byte*)this + 296, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ScaleBox.SetIgnoreInheritedScale
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInIgnoreInheritedScale	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	struct UScaleBox_SetIgnoreInheritedScale_Params {
		bool bInIgnoreInheritedScale;			//Offset: 0 | ElementSize: 1
	};
	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScaleBox.SetStretch
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InStretch	Type: TEnumAsByte<EStretch>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScaleBox::SetStretch(TEnumAsByte<EStretch> InStretch) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	struct UScaleBox_SetStretch_Params {
		TEnumAsByte<EStretch> InStretch;			//Offset: 0 | ElementSize: 1
	};
	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScaleBox.SetStretchDirection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InStretchDirection	Type: TEnumAsByte<EStretchDirection>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	struct UScaleBox_SetStretchDirection_Params {
		TEnumAsByte<EStretchDirection> InStretchDirection;			//Offset: 0 | ElementSize: 1
	};
	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ScaleBox.SetUserSpecifiedScale
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InUserSpecifiedScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	struct UScaleBox_SetUserSpecifiedScale_Params {
		float InUserSpecifiedScale;			//Offset: 0 | ElementSize: 4
	};
	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}