#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.ListViewBase
// Super: Class UMG.Widget
// Size: 536
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UListViewBase : public UWidget {
public:
#pragma region Members
	//class UUserWidget*	EntryWidgetClass;		//Offset: 264	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UUserWidget* M_GetEntryWidgetClass() const;
	class UUserWidget** M_PtrGetEntryWidgetClass();
	void M_SetEntryWidgetClass(const class UUserWidget*& value);

	//float	WheelScrollMultiplier;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetWheelScrollMultiplier() const;
	float* M_PtrGetWheelScrollMultiplier();
	void M_SetWheelScrollMultiplier(const float& value);

	//bool	bEnableScrollAnimation;		//Offset: 276	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbEnableScrollAnimation() const;
	bool* M_PtrGetbEnableScrollAnimation();
	void M_SetbEnableScrollAnimation(const bool& value);

	//bool	bEnableFixedLineOffset;		//Offset: 277	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbEnableFixedLineOffset() const;
	bool* M_PtrGetbEnableFixedLineOffset();
	void M_SetbEnableFixedLineOffset(const bool& value);

	//float	FixedLineScrollOffset;		//Offset: 280	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetFixedLineScrollOffset() const;
	float* M_PtrGetFixedLineScrollOffset();
	void M_SetFixedLineScrollOffset(const float& value);

	//TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>	BP_OnEntryGenerated;		//Offset: 288	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature> M_GetBP_OnEntryGenerated() const;
	TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>* M_PtrGetBP_OnEntryGenerated();
	void M_SetBP_OnEntryGenerated(const TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>& value);

	//TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>	BP_OnEntryReleased;		//Offset: 304	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature> M_GetBP_OnEntryReleased() const;
	TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>* M_PtrGetBP_OnEntryReleased();
	void M_SetBP_OnEntryReleased(const TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>& value);

	//struct FUserWidgetPool	EntryWidgetPool;		//Offset: 320	Size: 128	Flags: Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	struct FUserWidgetPool M_GetEntryWidgetPool() const;
	struct FUserWidgetPool* M_PtrGetEntryWidgetPool();
	void M_SetEntryWidgetPool(const struct FUserWidgetPool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}

#pragma region Functions
	TArray<class UUserWidget*> GetDisplayedEntryWidgets() const;

	void RegenerateAllEntries();

	void RequestRefresh();

	void ScrollToBottom();

	void ScrollToTop();

	void SetScrollbarVisibility(ESlateVisibility InVisibility);

	void SetScrollOffset(const float InScrollOffset);

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

#pragma endregion
};
};