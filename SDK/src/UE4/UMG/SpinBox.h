#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.SpinBox
// Super: Class UMG.Widget
// Size: 1312
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class USpinBox : public UWidget {
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

	//struct FSpinBoxStyle	WidgetStyle;		//Offset: 288	Size: 744	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSpinBoxStyle M_GetWidgetStyle() const;
	struct FSpinBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FSpinBoxStyle& value);

	//class USlateWidgetStyleAsset*	Style;		//Offset: 1032	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateWidgetStyleAsset* M_GetStyle() const;
	class USlateWidgetStyleAsset** M_PtrGetStyle();
	void M_SetStyle(const class USlateWidgetStyleAsset*& value);

	//int32_t	MinFractionalDigits;		//Offset: 1040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetMinFractionalDigits() const;
	int32_t* M_PtrGetMinFractionalDigits();
	void M_SetMinFractionalDigits(const int32_t& value);

	//int32_t	MaxFractionalDigits;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetMaxFractionalDigits() const;
	int32_t* M_PtrGetMaxFractionalDigits();
	void M_SetMaxFractionalDigits(const int32_t& value);

	//bool	bAlwaysUsesDeltaSnap;		//Offset: 1048	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAlwaysUsesDeltaSnap() const;
	bool* M_PtrGetbAlwaysUsesDeltaSnap();
	void M_SetbAlwaysUsesDeltaSnap(const bool& value);

	//float	Delta;		//Offset: 1052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDelta() const;
	float* M_PtrGetDelta();
	void M_SetDelta(const float& value);

	//float	SliderExponent;		//Offset: 1056	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSliderExponent() const;
	float* M_PtrGetSliderExponent();
	void M_SetSliderExponent(const float& value);

	//struct FSlateFontInfo	Font;		//Offset: 1064	Size: 88	Flags: Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//TEnumAsByte<ETextJustify>	Justification;		//Offset: 1152	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ETextJustify> M_GetJustification() const;
	TEnumAsByte<ETextJustify>* M_PtrGetJustification();
	void M_SetJustification(const TEnumAsByte<ETextJustify>& value);

	//float	MinDesiredWidth;		//Offset: 1156	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredWidth() const;
	float* M_PtrGetMinDesiredWidth();
	void M_SetMinDesiredWidth(const float& value);

	//bool	ClearKeyboardFocusOnCommit;		//Offset: 1160	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetClearKeyboardFocusOnCommit() const;
	bool* M_PtrGetClearKeyboardFocusOnCommit();
	void M_SetClearKeyboardFocusOnCommit(const bool& value);

	//bool	SelectAllTextOnCommit;		//Offset: 1161	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSelectAllTextOnCommit() const;
	bool* M_PtrGetSelectAllTextOnCommit();
	void M_SetSelectAllTextOnCommit(const bool& value);

	//struct FSlateColor	ForegroundColor;		//Offset: 1168	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateColor M_GetForegroundColor() const;
	struct FSlateColor* M_PtrGetForegroundColor();
	void M_SetForegroundColor(const struct FSlateColor& value);

	//TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>	OnValueChanged;		//Offset: 1208	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> M_GetOnValueChanged() const;
	TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>* M_PtrGetOnValueChanged();
	void M_SetOnValueChanged(const TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>	OnValueCommitted;		//Offset: 1224	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature> M_GetOnValueCommitted() const;
	TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>* M_PtrGetOnValueCommitted();
	void M_SetOnValueCommitted(const TAssetPtr<class FOnSpinBoxValueCommittedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>	OnBeginSliderMovement;		//Offset: 1240	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature> M_GetOnBeginSliderMovement() const;
	TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>* M_PtrGetOnBeginSliderMovement();
	void M_SetOnBeginSliderMovement(const TAssetPtr<class FOnSpinBoxBeginSliderMovement__DelegateSignature>& value);

	//TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>	OnEndSliderMovement;		//Offset: 1256	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature> M_GetOnEndSliderMovement() const;
	TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>* M_PtrGetOnEndSliderMovement();
	void M_SetOnEndSliderMovement(const TAssetPtr<class FOnSpinBoxValueChangedEvent__DelegateSignature>& value);

	//unsigned char	bOverride_MinValue : 1;		//Offset: 1272	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MinValue() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MinValue();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MinValue(const unsigned char& value);

	//unsigned char	bOverride_MaxValue : 1;		//Offset: 1272	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MaxValue() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MaxValue();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MaxValue(const unsigned char& value);

	//unsigned char	bOverride_MinSliderValue : 1;		//Offset: 1272	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MinSliderValue() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MinSliderValue();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MinSliderValue(const unsigned char& value);

	//unsigned char	bOverride_MaxSliderValue : 1;		//Offset: 1272	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MaxSliderValue() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MaxSliderValue();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MaxSliderValue(const unsigned char& value);

	//float	MinValue;		//Offset: 1276	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetMinValue() const;
	float* M_PtrGetMinValue();
	void M_SetMinValue(const float& value);

	//float	MaxValue;		//Offset: 1280	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetMaxValue() const;
	float* M_PtrGetMaxValue();
	void M_SetMaxValue(const float& value);

	//float	MinSliderValue;		//Offset: 1284	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetMinSliderValue() const;
	float* M_PtrGetMinSliderValue();
	void M_SetMinSliderValue(const float& value);

	//float	MaxSliderValue;		//Offset: 1288	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetMaxSliderValue() const;
	float* M_PtrGetMaxSliderValue();
	void M_SetMaxSliderValue(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}

#pragma region Functions
	void ClearMaxSliderValue();

	void ClearMaxValue();

	void ClearMinSliderValue();

	void ClearMinValue();

	bool GetAlwaysUsesDeltaSnap()/* const*/;

	float GetDelta()/* const*/;

	int32_t GetMaxFractionalDigits()/* const*/;

	float GetMaxSliderValue()/* const*/;

	float GetMaxValue()/* const*/;

	int32_t GetMinFractionalDigits()/* const*/;

	float GetMinSliderValue()/* const*/;

	float GetMinValue()/* const*/;

	float GetValue()/* const*/;

	void OnSpinBoxBeginSliderMovement__DelegateSignature();

	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);

	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);

	void SetAlwaysUsesDeltaSnap(bool bNewValue);

	void SetDelta(float NewValue);

	void SetForegroundColor(struct FSlateColor InForegroundColor);

	void SetMaxFractionalDigits(int32_t NewValue);

	void SetMaxSliderValue(float NewValue);

	void SetMaxValue(float NewValue);

	void SetMinFractionalDigits(int32_t NewValue);

	void SetMinSliderValue(float NewValue);

	void SetMinValue(float NewValue);

	void SetValue(float NewValue);

#pragma endregion
};
};