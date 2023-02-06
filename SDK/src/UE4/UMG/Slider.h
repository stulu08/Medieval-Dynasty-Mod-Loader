#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.Slider
// Super: Class UMG.Widget
// Size: 1272
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class USlider : public UWidget {
public:
#pragma region Members
	//float	Value;		//Offset: 264	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetValue() const;
	float* M_PtrGetValue();
	void M_SetValue(const float& value);

	//struct FScriptDelegate	ValueDelegate;		//Offset: 268	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetValueDelegate() const;
	struct FScriptDelegate* M_PtrGetValueDelegate();
	void M_SetValueDelegate(const struct FScriptDelegate& value);

	//float	MinValue;		//Offset: 284	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinValue() const;
	float* M_PtrGetMinValue();
	void M_SetMinValue(const float& value);

	//float	MaxValue;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxValue() const;
	float* M_PtrGetMaxValue();
	void M_SetMaxValue(const float& value);

	//struct FSliderStyle	WidgetStyle;		//Offset: 296	Size: 832	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSliderStyle M_GetWidgetStyle() const;
	struct FSliderStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FSliderStyle& value);

	//TEnumAsByte<EOrientation>	Orientation;		//Offset: 1128	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EOrientation> M_GetOrientation() const;
	TEnumAsByte<EOrientation>* M_PtrGetOrientation();
	void M_SetOrientation(const TEnumAsByte<EOrientation>& value);

	//struct FLinearColor	SliderBarColor;		//Offset: 1132	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetSliderBarColor() const;
	struct FLinearColor* M_PtrGetSliderBarColor();
	void M_SetSliderBarColor(const struct FLinearColor& value);

	//struct FLinearColor	SliderHandleColor;		//Offset: 1148	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetSliderHandleColor() const;
	struct FLinearColor* M_PtrGetSliderHandleColor();
	void M_SetSliderHandleColor(const struct FLinearColor& value);

	//bool	IndentHandle;		//Offset: 1164	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIndentHandle() const;
	bool* M_PtrGetIndentHandle();
	void M_SetIndentHandle(const bool& value);

	//bool	Locked;		//Offset: 1165	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetLocked() const;
	bool* M_PtrGetLocked();
	void M_SetLocked(const bool& value);

	//bool	MouseUsesStep;		//Offset: 1166	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetMouseUsesStep() const;
	bool* M_PtrGetMouseUsesStep();
	void M_SetMouseUsesStep(const bool& value);

	//bool	RequiresControllerLock;		//Offset: 1167	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRequiresControllerLock() const;
	bool* M_PtrGetRequiresControllerLock();
	void M_SetRequiresControllerLock(const bool& value);

	//float	StepSize;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetStepSize() const;
	float* M_PtrGetStepSize();
	void M_SetStepSize(const float& value);

	//bool	IsFocusable;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIsFocusable() const;
	bool* M_PtrGetIsFocusable();
	void M_SetIsFocusable(const bool& value);

	//TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>	OnMouseCaptureBegin;		//Offset: 1176	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature> M_GetOnMouseCaptureBegin() const;
	TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>* M_PtrGetOnMouseCaptureBegin();
	void M_SetOnMouseCaptureBegin(const TAssetPtr<class FOnMouseCaptureBeginEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>	OnMouseCaptureEnd;		//Offset: 1192	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature> M_GetOnMouseCaptureEnd() const;
	TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>* M_PtrGetOnMouseCaptureEnd();
	void M_SetOnMouseCaptureEnd(const TAssetPtr<class FOnMouseCaptureEndEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>	OnControllerCaptureBegin;		//Offset: 1208	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature> M_GetOnControllerCaptureBegin() const;
	TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>* M_PtrGetOnControllerCaptureBegin();
	void M_SetOnControllerCaptureBegin(const TAssetPtr<class FOnControllerCaptureBeginEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>	OnControllerCaptureEnd;		//Offset: 1224	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature> M_GetOnControllerCaptureEnd() const;
	TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>* M_PtrGetOnControllerCaptureEnd();
	void M_SetOnControllerCaptureEnd(const TAssetPtr<class FOnControllerCaptureEndEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>	OnValueChanged;		//Offset: 1240	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature> M_GetOnValueChanged() const;
	TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>* M_PtrGetOnValueChanged();
	void M_SetOnValueChanged(const TAssetPtr<class FOnFloatValueChangedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}

#pragma region Functions
	float GetNormalizedValue()/* const*/;

	float GetValue()/* const*/;

	void SetIndentHandle(bool InValue);

	void SetLocked(bool InValue);

	void SetMaxValue(float InValue);

	void SetMinValue(float InValue);

	void SetSliderBarColor(struct FLinearColor InValue);

	void SetSliderHandleColor(struct FLinearColor InValue);

	void SetStepSize(float InValue);

	void SetValue(float InValue);

#pragma endregion
};
};