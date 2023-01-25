#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ComboBoxString
// Super: Class UMG.Widget
// Size: 3584
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UComboBoxString : public UWidget {
public:
#pragma region Members
	//TArray<struct FString>	DefaultOptions;		//Offset: 264	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FString> M_GetDefaultOptions() const;
	TArray<struct FString>* M_PtrGetDefaultOptions();
	void M_SetDefaultOptions(const TArray<struct FString>& value);

	//struct FString	SelectedOption;		//Offset: 280	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString M_GetSelectedOption() const;
	struct FString* M_PtrGetSelectedOption();
	void M_SetSelectedOption(const struct FString& value);

	//struct FComboBoxStyle	WidgetStyle;		//Offset: 296	Size: 1008	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FComboBoxStyle M_GetWidgetStyle() const;
	struct FComboBoxStyle* M_PtrGetWidgetStyle();
	void M_SetWidgetStyle(const struct FComboBoxStyle& value);

	//struct FTableRowStyle	ItemStyle;		//Offset: 1304	Size: 1992	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTableRowStyle M_GetItemStyle() const;
	struct FTableRowStyle* M_PtrGetItemStyle();
	void M_SetItemStyle(const struct FTableRowStyle& value);

	//struct FMargin	ContentPadding;		//Offset: 3296	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetContentPadding() const;
	struct FMargin* M_PtrGetContentPadding();
	void M_SetContentPadding(const struct FMargin& value);

	//float	MaxListHeight;		//Offset: 3312	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxListHeight() const;
	float* M_PtrGetMaxListHeight();
	void M_SetMaxListHeight(const float& value);

	//bool	HasDownArrow;		//Offset: 3316	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetHasDownArrow() const;
	bool* M_PtrGetHasDownArrow();
	void M_SetHasDownArrow(const bool& value);

	//bool	EnableGamepadNavigationMode;		//Offset: 3317	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetEnableGamepadNavigationMode() const;
	bool* M_PtrGetEnableGamepadNavigationMode();
	void M_SetEnableGamepadNavigationMode(const bool& value);

	//struct FSlateFontInfo	Font;		//Offset: 3320	Size: 88	Flags: Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FSlateColor	ForegroundColor;		//Offset: 3408	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateColor M_GetForegroundColor() const;
	struct FSlateColor* M_PtrGetForegroundColor();
	void M_SetForegroundColor(const struct FSlateColor& value);

	//bool	bIsFocusable;		//Offset: 3448	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsFocusable() const;
	bool* M_PtrGetbIsFocusable();
	void M_SetbIsFocusable(const bool& value);

	//struct FScriptDelegate	OnGenerateWidgetEvent;		//Offset: 3452	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnGenerateWidgetEvent() const;
	struct FScriptDelegate* M_PtrGetOnGenerateWidgetEvent();
	void M_SetOnGenerateWidgetEvent(const struct FScriptDelegate& value);

	//TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>	OnSelectionChanged;		//Offset: 3472	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature> M_GetOnSelectionChanged() const;
	TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>* M_PtrGetOnSelectionChanged();
	void M_SetOnSelectionChanged(const TAssetPtr<class FOnSelectionChangedEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnOpeningEvent__DelegateSignature>	OnOpening;		//Offset: 3488	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnOpeningEvent__DelegateSignature> M_GetOnOpening() const;
	TAssetPtr<class FOnOpeningEvent__DelegateSignature>* M_PtrGetOnOpening();
	void M_SetOnOpening(const TAssetPtr<class FOnOpeningEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}

#pragma region Functions
	void AddOption(struct FString Option);

	void ClearOptions();

	void ClearSelection();

	int32_t FindOptionIndex(struct FString Option) const;

	struct FString GetOptionAtIndex(int32_t Index) const;

	int32_t GetOptionCount() const;

	int32_t GetSelectedIndex() const;

	struct FString GetSelectedOption() const;

	bool IsOpen() const;

	void OnOpeningEvent__DelegateSignature();

	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);

	void RefreshOptions();

	bool RemoveOption(struct FString Option);

	void SetSelectedIndex(const int32_t Index);

	void SetSelectedOption(struct FString Option);

#pragma endregion
};
};