#include "../SDK.h"
#include "Slider.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Value
// Declaration: float Value
float USlider::M_GetValue() const {
	return Read<float>((byte*)this + 264);
}
float* USlider::M_PtrGetValue() {
	return reinterpret_cast<float*>((byte*)this + 264);
}
void USlider::M_SetValue(const float& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of ValueDelegate
// Declaration: struct FScriptDelegate ValueDelegate
struct FScriptDelegate USlider::M_GetValueDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 268);
}
struct FScriptDelegate* USlider::M_PtrGetValueDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 268);
}
void USlider::M_SetValueDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of MinValue
// Declaration: float MinValue
float USlider::M_GetMinValue() const {
	return Read<float>((byte*)this + 284);
}
float* USlider::M_PtrGetMinValue() {
	return reinterpret_cast<float*>((byte*)this + 284);
}
void USlider::M_SetMinValue(const float& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of MaxValue
// Declaration: float MaxValue
float USlider::M_GetMaxValue() const {
	return Read<float>((byte*)this + 288);
}
float* USlider::M_PtrGetMaxValue() {
	return reinterpret_cast<float*>((byte*)this + 288);
}
void USlider::M_SetMaxValue(const float& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FSliderStyle WidgetStyle
struct FSliderStyle USlider::M_GetWidgetStyle() const {
	return Read<struct FSliderStyle>((byte*)this + 296);
}
struct FSliderStyle* USlider::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FSliderStyle*>((byte*)this + 296);
}
void USlider::M_SetWidgetStyle(const struct FSliderStyle& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of Orientation
// Declaration: TEnumAsByte<EOrientation> Orientation
TEnumAsByte<EOrientation> USlider::M_GetOrientation() const {
	return Read<TEnumAsByte<EOrientation>>((byte*)this + 1128);
}
TEnumAsByte<EOrientation>* USlider::M_PtrGetOrientation() {
	return reinterpret_cast<TEnumAsByte<EOrientation>*>((byte*)this + 1128);
}
void USlider::M_SetOrientation(const TEnumAsByte<EOrientation>& value) {
	Write((byte*)this + 1128, value);
}
// Member Getter and Setter of SliderBarColor
// Declaration: struct FLinearColor SliderBarColor
struct FLinearColor USlider::M_GetSliderBarColor() const {
	return Read<struct FLinearColor>((byte*)this + 1132);
}
struct FLinearColor* USlider::M_PtrGetSliderBarColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1132);
}
void USlider::M_SetSliderBarColor(const struct FLinearColor& value) {
	Write((byte*)this + 1132, value);
}
// Member Getter and Setter of SliderHandleColor
// Declaration: struct FLinearColor SliderHandleColor
struct FLinearColor USlider::M_GetSliderHandleColor() const {
	return Read<struct FLinearColor>((byte*)this + 1148);
}
struct FLinearColor* USlider::M_PtrGetSliderHandleColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1148);
}
void USlider::M_SetSliderHandleColor(const struct FLinearColor& value) {
	Write((byte*)this + 1148, value);
}
// Member Getter and Setter of IndentHandle
// Declaration: bool IndentHandle
bool USlider::M_GetIndentHandle() const {
	return Read<bool>((byte*)this + 1164);
}
bool* USlider::M_PtrGetIndentHandle() {
	return reinterpret_cast<bool*>((byte*)this + 1164);
}
void USlider::M_SetIndentHandle(const bool& value) {
	Write((byte*)this + 1164, value);
}
// Member Getter and Setter of Locked
// Declaration: bool Locked
bool USlider::M_GetLocked() const {
	return Read<bool>((byte*)this + 1165);
}
bool* USlider::M_PtrGetLocked() {
	return reinterpret_cast<bool*>((byte*)this + 1165);
}
void USlider::M_SetLocked(const bool& value) {
	Write((byte*)this + 1165, value);
}
// Member Getter and Setter of MouseUsesStep
// Declaration: bool MouseUsesStep
bool USlider::M_GetMouseUsesStep() const {
	return Read<bool>((byte*)this + 1166);
}
bool* USlider::M_PtrGetMouseUsesStep() {
	return reinterpret_cast<bool*>((byte*)this + 1166);
}
void USlider::M_SetMouseUsesStep(const bool& value) {
	Write((byte*)this + 1166, value);
}
// Member Getter and Setter of RequiresControllerLock
// Declaration: bool RequiresControllerLock
bool USlider::M_GetRequiresControllerLock() const {
	return Read<bool>((byte*)this + 1167);
}
bool* USlider::M_PtrGetRequiresControllerLock() {
	return reinterpret_cast<bool*>((byte*)this + 1167);
}
void USlider::M_SetRequiresControllerLock(const bool& value) {
	Write((byte*)this + 1167, value);
}
// Member Getter and Setter of StepSize
// Declaration: float StepSize
float USlider::M_GetStepSize() const {
	return Read<float>((byte*)this + 1168);
}
float* USlider::M_PtrGetStepSize() {
	return reinterpret_cast<float*>((byte*)this + 1168);
}
void USlider::M_SetStepSize(const float& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of IsFocusable
// Declaration: bool IsFocusable
bool USlider::M_GetIsFocusable() const {
	return Read<bool>((byte*)this + 1172);
}
bool* USlider::M_PtrGetIsFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 1172);
}
void USlider::M_SetIsFocusable(const bool& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of OnMouseCaptureBegin
// Declaration: TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature> OnMouseCaptureBegin
TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature> USlider::M_GetOnMouseCaptureBegin() const {
	return Read<TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>>((byte*)this + 1176);
}
TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>* USlider::M_PtrGetOnMouseCaptureBegin() {
	return reinterpret_cast<TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>*>((byte*)this + 1176);
}
void USlider::M_SetOnMouseCaptureBegin(const TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of OnMouseCaptureEnd
// Declaration: TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature> OnMouseCaptureEnd
TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature> USlider::M_GetOnMouseCaptureEnd() const {
	return Read<TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>>((byte*)this + 1192);
}
TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>* USlider::M_PtrGetOnMouseCaptureEnd() {
	return reinterpret_cast<TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>*>((byte*)this + 1192);
}
void USlider::M_SetOnMouseCaptureEnd(const TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of OnControllerCaptureBegin
// Declaration: TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature> OnControllerCaptureBegin
TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature> USlider::M_GetOnControllerCaptureBegin() const {
	return Read<TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>>((byte*)this + 1208);
}
TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>* USlider::M_PtrGetOnControllerCaptureBegin() {
	return reinterpret_cast<TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>*>((byte*)this + 1208);
}
void USlider::M_SetOnControllerCaptureBegin(const TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of OnControllerCaptureEnd
// Declaration: TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature> OnControllerCaptureEnd
TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature> USlider::M_GetOnControllerCaptureEnd() const {
	return Read<TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>>((byte*)this + 1224);
}
TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>* USlider::M_PtrGetOnControllerCaptureEnd() {
	return reinterpret_cast<TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>*>((byte*)this + 1224);
}
void USlider::M_SetOnControllerCaptureEnd(const TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of OnValueChanged
// Declaration: TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature> OnValueChanged
TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature> USlider::M_GetOnValueChanged() const {
	return Read<TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>>((byte*)this + 1240);
}
TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>* USlider::M_PtrGetOnValueChanged() {
	return reinterpret_cast<TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>*>((byte*)this + 1240);
}
void USlider::M_SetOnValueChanged(const TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1240, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Slider.GetNormalizedValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USlider::GetNormalizedValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	struct USlider_GetNormalizedValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_GetNormalizedValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Slider.GetValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USlider::GetValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	struct USlider_GetValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_GetValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Slider.SetIndentHandle
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetIndentHandle(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	struct USlider_SetIndentHandle_Params {
		bool InValue;			//Offset: 0 | ElementSize: 1
	};
	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetLocked
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetLocked(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	struct USlider_SetLocked_Params {
		bool InValue;			//Offset: 0 | ElementSize: 1
	};
	USlider_SetLocked_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetMaxValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetMaxValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	struct USlider_SetMaxValue_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_SetMaxValue_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetMinValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetMinValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	struct USlider_SetMinValue_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_SetMinValue_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetSliderBarColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InValue	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetSliderBarColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	struct USlider_SetSliderBarColor_Params {
		struct FLinearColor InValue;			//Offset: 0 | ElementSize: 16
	};
	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetSliderHandleColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InValue	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetSliderHandleColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	struct USlider_SetSliderHandleColor_Params {
		struct FLinearColor InValue;			//Offset: 0 | ElementSize: 16
	};
	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetStepSize
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	struct USlider_SetStepSize_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_SetStepSize_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Slider.SetValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USlider::SetValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	struct USlider_SetValue_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
	};
	USlider_SetValue_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}