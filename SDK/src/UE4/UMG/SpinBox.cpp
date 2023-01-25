#include "../SDK.h"
#include "SpinBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Value
// Declaration: float Value
float USpinBox::M_GetValue() const {
	return Read<float>((byte*)this + 264);
}
float* USpinBox::M_PtrGetValue() {
	return reinterpret_cast<float*>((byte*)this + 264);
}
void USpinBox::M_SetValue(const float& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of ValueDelegate
// Declaration: struct FScriptDelegate ValueDelegate
struct FScriptDelegate USpinBox::M_GetValueDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 268);
}
struct FScriptDelegate* USpinBox::M_PtrGetValueDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 268);
}
void USpinBox::M_SetValueDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of WidgetStyle
// Declaration: struct FSpinBoxStyle WidgetStyle
struct FSpinBoxStyle USpinBox::M_GetWidgetStyle() const {
	return Read<struct FSpinBoxStyle>((byte*)this + 288);
}
struct FSpinBoxStyle* USpinBox::M_PtrGetWidgetStyle() {
	return reinterpret_cast<struct FSpinBoxStyle*>((byte*)this + 288);
}
void USpinBox::M_SetWidgetStyle(const struct FSpinBoxStyle& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of Style
// Declaration: class USlateWidgetStyleAsset* Style
class USlateWidgetStyleAsset* USpinBox::M_GetStyle() const {
	return Read<class USlateWidgetStyleAsset*>((byte*)this + 1032);
}
class USlateWidgetStyleAsset** USpinBox::M_PtrGetStyle() {
	return reinterpret_cast<class USlateWidgetStyleAsset**>((byte*)this + 1032);
}
void USpinBox::M_SetStyle(const class USlateWidgetStyleAsset*& value) {
	Write((byte*)this + 1032, value);
}
// Member Getter and Setter of MinFractionalDigits
// Declaration: int32_t MinFractionalDigits
int32_t USpinBox::M_GetMinFractionalDigits() const {
	return Read<int32_t>((byte*)this + 1040);
}
int32_t* USpinBox::M_PtrGetMinFractionalDigits() {
	return reinterpret_cast<int32_t*>((byte*)this + 1040);
}
void USpinBox::M_SetMinFractionalDigits(const int32_t& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of MaxFractionalDigits
// Declaration: int32_t MaxFractionalDigits
int32_t USpinBox::M_GetMaxFractionalDigits() const {
	return Read<int32_t>((byte*)this + 1044);
}
int32_t* USpinBox::M_PtrGetMaxFractionalDigits() {
	return reinterpret_cast<int32_t*>((byte*)this + 1044);
}
void USpinBox::M_SetMaxFractionalDigits(const int32_t& value) {
	Write((byte*)this + 1044, value);
}
// Member Getter and Setter of bAlwaysUsesDeltaSnap
// Declaration: bool bAlwaysUsesDeltaSnap
bool USpinBox::M_GetbAlwaysUsesDeltaSnap() const {
	return Read<bool>((byte*)this + 1048);
}
bool* USpinBox::M_PtrGetbAlwaysUsesDeltaSnap() {
	return reinterpret_cast<bool*>((byte*)this + 1048);
}
void USpinBox::M_SetbAlwaysUsesDeltaSnap(const bool& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of Delta
// Declaration: float Delta
float USpinBox::M_GetDelta() const {
	return Read<float>((byte*)this + 1052);
}
float* USpinBox::M_PtrGetDelta() {
	return reinterpret_cast<float*>((byte*)this + 1052);
}
void USpinBox::M_SetDelta(const float& value) {
	Write((byte*)this + 1052, value);
}
// Member Getter and Setter of SliderExponent
// Declaration: float SliderExponent
float USpinBox::M_GetSliderExponent() const {
	return Read<float>((byte*)this + 1056);
}
float* USpinBox::M_PtrGetSliderExponent() {
	return reinterpret_cast<float*>((byte*)this + 1056);
}
void USpinBox::M_SetSliderExponent(const float& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of Font
// Declaration: struct FSlateFontInfo Font
struct FSlateFontInfo USpinBox::M_GetFont() const {
	return Read<struct FSlateFontInfo>((byte*)this + 1064);
}
struct FSlateFontInfo* USpinBox::M_PtrGetFont() {
	return reinterpret_cast<struct FSlateFontInfo*>((byte*)this + 1064);
}
void USpinBox::M_SetFont(const struct FSlateFontInfo& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of Justification
// Declaration: TEnumAsByte<ETextJustify> Justification
TEnumAsByte<ETextJustify> USpinBox::M_GetJustification() const {
	return Read<TEnumAsByte<ETextJustify>>((byte*)this + 1152);
}
TEnumAsByte<ETextJustify>* USpinBox::M_PtrGetJustification() {
	return reinterpret_cast<TEnumAsByte<ETextJustify>*>((byte*)this + 1152);
}
void USpinBox::M_SetJustification(const TEnumAsByte<ETextJustify>& value) {
	Write((byte*)this + 1152, value);
}
// Member Getter and Setter of MinDesiredWidth
// Declaration: float MinDesiredWidth
float USpinBox::M_GetMinDesiredWidth() const {
	return Read<float>((byte*)this + 1156);
}
float* USpinBox::M_PtrGetMinDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 1156);
}
void USpinBox::M_SetMinDesiredWidth(const float& value) {
	Write((byte*)this + 1156, value);
}
// Member Getter and Setter of ClearKeyboardFocusOnCommit
// Declaration: bool ClearKeyboardFocusOnCommit
bool USpinBox::M_GetClearKeyboardFocusOnCommit() const {
	return Read<bool>((byte*)this + 1160);
}
bool* USpinBox::M_PtrGetClearKeyboardFocusOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 1160);
}
void USpinBox::M_SetClearKeyboardFocusOnCommit(const bool& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of SelectAllTextOnCommit
// Declaration: bool SelectAllTextOnCommit
bool USpinBox::M_GetSelectAllTextOnCommit() const {
	return Read<bool>((byte*)this + 1161);
}
bool* USpinBox::M_PtrGetSelectAllTextOnCommit() {
	return reinterpret_cast<bool*>((byte*)this + 1161);
}
void USpinBox::M_SetSelectAllTextOnCommit(const bool& value) {
	Write((byte*)this + 1161, value);
}
// Member Getter and Setter of ForegroundColor
// Declaration: struct FSlateColor ForegroundColor
struct FSlateColor USpinBox::M_GetForegroundColor() const {
	return Read<struct FSlateColor>((byte*)this + 1168);
}
struct FSlateColor* USpinBox::M_PtrGetForegroundColor() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 1168);
}
void USpinBox::M_SetForegroundColor(const struct FSlateColor& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of OnValueChanged
// Declaration: TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> OnValueChanged
TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> USpinBox::M_GetOnValueChanged() const {
	return Read<TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>>((byte*)this + 1208);
}
TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>* USpinBox::M_PtrGetOnValueChanged() {
	return reinterpret_cast<TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>*>((byte*)this + 1208);
}
void USpinBox::M_SetOnValueChanged(const TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of OnValueCommitted
// Declaration: TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature> OnValueCommitted
TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature> USpinBox::M_GetOnValueCommitted() const {
	return Read<TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>>((byte*)this + 1224);
}
TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>* USpinBox::M_PtrGetOnValueCommitted() {
	return reinterpret_cast<TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>*>((byte*)this + 1224);
}
void USpinBox::M_SetOnValueCommitted(const TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of OnBeginSliderMovement
// Declaration: TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature> OnBeginSliderMovement
TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature> USpinBox::M_GetOnBeginSliderMovement() const {
	return Read<TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>>((byte*)this + 1240);
}
TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>* USpinBox::M_PtrGetOnBeginSliderMovement() {
	return reinterpret_cast<TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>*>((byte*)this + 1240);
}
void USpinBox::M_SetOnBeginSliderMovement(const TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of OnEndSliderMovement
// Declaration: TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> OnEndSliderMovement
TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> USpinBox::M_GetOnEndSliderMovement() const {
	return Read<TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>>((byte*)this + 1256);
}
TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>* USpinBox::M_PtrGetOnEndSliderMovement() {
	return reinterpret_cast<TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>*>((byte*)this + 1256);
}
void USpinBox::M_SetOnEndSliderMovement(const TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of bOverride_MinValue
// Declaration: unsigned char bOverride_MinValue : 1
unsigned char USpinBox::M_GetbOverride_MinValue() const {
	return Read<unsigned char>((byte*)this + 1272);
}
unsigned char* USpinBox::M_PtrGetbOverride_MinValue() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1272);
}
void USpinBox::M_SetbOverride_MinValue(const unsigned char& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of bOverride_MaxValue
// Declaration: unsigned char bOverride_MaxValue : 1
unsigned char USpinBox::M_GetbOverride_MaxValue() const {
	return Read<unsigned char>((byte*)this + 1272);
}
unsigned char* USpinBox::M_PtrGetbOverride_MaxValue() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1272);
}
void USpinBox::M_SetbOverride_MaxValue(const unsigned char& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of bOverride_MinSliderValue
// Declaration: unsigned char bOverride_MinSliderValue : 1
unsigned char USpinBox::M_GetbOverride_MinSliderValue() const {
	return Read<unsigned char>((byte*)this + 1272);
}
unsigned char* USpinBox::M_PtrGetbOverride_MinSliderValue() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1272);
}
void USpinBox::M_SetbOverride_MinSliderValue(const unsigned char& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of bOverride_MaxSliderValue
// Declaration: unsigned char bOverride_MaxSliderValue : 1
unsigned char USpinBox::M_GetbOverride_MaxSliderValue() const {
	return Read<unsigned char>((byte*)this + 1272);
}
unsigned char* USpinBox::M_PtrGetbOverride_MaxSliderValue() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1272);
}
void USpinBox::M_SetbOverride_MaxSliderValue(const unsigned char& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of MinValue
// Declaration: float MinValue
float USpinBox::M_GetMinValue() const {
	return Read<float>((byte*)this + 1276);
}
float* USpinBox::M_PtrGetMinValue() {
	return reinterpret_cast<float*>((byte*)this + 1276);
}
void USpinBox::M_SetMinValue(const float& value) {
	Write((byte*)this + 1276, value);
}
// Member Getter and Setter of MaxValue
// Declaration: float MaxValue
float USpinBox::M_GetMaxValue() const {
	return Read<float>((byte*)this + 1280);
}
float* USpinBox::M_PtrGetMaxValue() {
	return reinterpret_cast<float*>((byte*)this + 1280);
}
void USpinBox::M_SetMaxValue(const float& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of MinSliderValue
// Declaration: float MinSliderValue
float USpinBox::M_GetMinSliderValue() const {
	return Read<float>((byte*)this + 1284);
}
float* USpinBox::M_PtrGetMinSliderValue() {
	return reinterpret_cast<float*>((byte*)this + 1284);
}
void USpinBox::M_SetMinSliderValue(const float& value) {
	Write((byte*)this + 1284, value);
}
// Member Getter and Setter of MaxSliderValue
// Declaration: float MaxSliderValue
float USpinBox::M_GetMaxSliderValue() const {
	return Read<float>((byte*)this + 1288);
}
float* USpinBox::M_PtrGetMaxSliderValue() {
	return reinterpret_cast<float*>((byte*)this + 1288);
}
void USpinBox::M_SetMaxSliderValue(const float& value) {
	Write((byte*)this + 1288, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.SpinBox.ClearMaxSliderValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USpinBox::ClearMaxSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	struct USpinBox_ClearMaxSliderValue_Params {
	};
	USpinBox_ClearMaxSliderValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.ClearMaxValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USpinBox::ClearMaxValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	struct USpinBox_ClearMaxValue_Params {
	};
	USpinBox_ClearMaxValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.ClearMinSliderValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USpinBox::ClearMinSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	struct USpinBox_ClearMinSliderValue_Params {
	};
	USpinBox_ClearMinSliderValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.ClearMinValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USpinBox::ClearMinValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	struct USpinBox_ClearMinValue_Params {
	};
	USpinBox_ClearMinValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USpinBox::GetAlwaysUsesDeltaSnap() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");

	struct USpinBox_GetAlwaysUsesDeltaSnap_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USpinBox_GetAlwaysUsesDeltaSnap_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetDelta
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetDelta() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");

	struct USpinBox_GetDelta_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetDelta_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMaxFractionalDigits
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USpinBox::GetMaxFractionalDigits() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");

	struct USpinBox_GetMaxFractionalDigits_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMaxFractionalDigits_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMaxSliderValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetMaxSliderValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	struct USpinBox_GetMaxSliderValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMaxSliderValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMaxValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetMaxValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	struct USpinBox_GetMaxValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMaxValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMinFractionalDigits
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USpinBox::GetMinFractionalDigits() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");

	struct USpinBox_GetMinFractionalDigits_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMinFractionalDigits_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMinSliderValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetMinSliderValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	struct USpinBox_GetMinSliderValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMinSliderValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetMinValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetMinValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	struct USpinBox_GetMinValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetMinValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.SpinBox.GetValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USpinBox::GetValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	struct USpinBox_GetValue_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_GetValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
/////////////////////////////////////////////
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params {
	};
	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// Flags: MulticastDelegate, Public, Delegate
// Params:
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CommitMethod	Type: TEnumAsByte<ETextCommit>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params {
		float InValue;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<ETextCommit> CommitMethod;			//Offset: 4 | ElementSize: 1
	};
	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");

	struct USpinBox_SetAlwaysUsesDeltaSnap_Params {
		bool bNewValue;			//Offset: 0 | ElementSize: 1
	};
	USpinBox_SetAlwaysUsesDeltaSnap_Params params;
	params.bNewValue = bNewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetDelta
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetDelta(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");

	struct USpinBox_SetDelta_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetDelta_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetForegroundColor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InForegroundColor	Type: struct FSlateColor	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	struct USpinBox_SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;			//Offset: 0 | ElementSize: 40
	};
	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMaxFractionalDigits
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMaxFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");

	struct USpinBox_SetMaxFractionalDigits_Params {
		int32_t NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMaxFractionalDigits_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMaxSliderValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMaxSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	struct USpinBox_SetMaxSliderValue_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMaxValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMaxValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	struct USpinBox_SetMaxValue_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMinFractionalDigits
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMinFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");

	struct USpinBox_SetMinFractionalDigits_Params {
		int32_t NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMinFractionalDigits_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMinSliderValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMinSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	struct USpinBox_SetMinSliderValue_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetMinValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetMinValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	struct USpinBox_SetMinValue_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SpinBox.SetValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpinBox::SetValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	struct USpinBox_SetValue_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}