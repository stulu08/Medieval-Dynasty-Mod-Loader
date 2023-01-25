#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.DynamicEntryBoxBase
// Super: Class UMG.Widget
// Size: 472
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UDynamicEntryBoxBase : public UWidget {
public:
#pragma region Members
	//EDynamicBoxType	EntryBoxType;		//Offset: 264	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EDynamicBoxType M_GetEntryBoxType() const;
	EDynamicBoxType* M_PtrGetEntryBoxType();
	void M_SetEntryBoxType(const EDynamicBoxType& value);

	//struct FVector2D	EntrySpacing;		//Offset: 268	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector2D M_GetEntrySpacing() const;
	struct FVector2D* M_PtrGetEntrySpacing();
	void M_SetEntrySpacing(const struct FVector2D& value);

	//TArray<struct FVector2D>	SpacingPattern;		//Offset: 280	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVector2D> M_GetSpacingPattern() const;
	TArray<struct FVector2D>* M_PtrGetSpacingPattern();
	void M_SetSpacingPattern(const TArray<struct FVector2D>& value);

	//struct FSlateChildSize	EntrySizeRule;		//Offset: 296	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FSlateChildSize M_GetEntrySizeRule() const;
	struct FSlateChildSize* M_PtrGetEntrySizeRule();
	void M_SetEntrySizeRule(const struct FSlateChildSize& value);

	//TEnumAsByte<EHorizontalAlignment>	EntryHorizontalAlignment;		//Offset: 304	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<EHorizontalAlignment> M_GetEntryHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetEntryHorizontalAlignment();
	void M_SetEntryHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	EntryVerticalAlignment;		//Offset: 305	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<EVerticalAlignment> M_GetEntryVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetEntryVerticalAlignment();
	void M_SetEntryVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

	//int32_t	MaxElementSize;		//Offset: 308	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetMaxElementSize() const;
	int32_t* M_PtrGetMaxElementSize();
	void M_SetMaxElementSize(const int32_t& value);

	//struct FRadialBoxSettings	RadialBoxSettings;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRadialBoxSettings M_GetRadialBoxSettings() const;
	struct FRadialBoxSettings* M_PtrGetRadialBoxSettings();
	void M_SetRadialBoxSettings(const struct FRadialBoxSettings& value);

	//struct FUserWidgetPool	EntryWidgetPool;		//Offset: 344	Size: 128	Flags: Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	struct FUserWidgetPool M_GetEntryWidgetPool() const;
	struct FUserWidgetPool* M_PtrGetEntryWidgetPool();
	void M_SetEntryWidgetPool(const struct FUserWidgetPool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}

#pragma region Functions
	TArray<class UUserWidget*> GetAllEntries() const;

	int32_t GetNumEntries() const;

	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);

	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);

#pragma endregion
};
};