#include "../SDK.h"
#include "ListViewBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EntryWidgetClass
// Declaration: class UUserWidget* EntryWidgetClass
class UUserWidget* UListViewBase::M_GetEntryWidgetClass() const {
	return Read<class UUserWidget*>((byte*)this + 264);
}
class UUserWidget** UListViewBase::M_PtrGetEntryWidgetClass() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 264);
}
void UListViewBase::M_SetEntryWidgetClass(const class UUserWidget*& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of WheelScrollMultiplier
// Declaration: float WheelScrollMultiplier
float UListViewBase::M_GetWheelScrollMultiplier() const {
	return Read<float>((byte*)this + 272);
}
float* UListViewBase::M_PtrGetWheelScrollMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UListViewBase::M_SetWheelScrollMultiplier(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of bEnableScrollAnimation
// Declaration: bool bEnableScrollAnimation
bool UListViewBase::M_GetbEnableScrollAnimation() const {
	return Read<bool>((byte*)this + 276);
}
bool* UListViewBase::M_PtrGetbEnableScrollAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 276);
}
void UListViewBase::M_SetbEnableScrollAnimation(const bool& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of bEnableFixedLineOffset
// Declaration: bool bEnableFixedLineOffset
bool UListViewBase::M_GetbEnableFixedLineOffset() const {
	return Read<bool>((byte*)this + 277);
}
bool* UListViewBase::M_PtrGetbEnableFixedLineOffset() {
	return reinterpret_cast<bool*>((byte*)this + 277);
}
void UListViewBase::M_SetbEnableFixedLineOffset(const bool& value) {
	Write((byte*)this + 277, value);
}
// Member Getter and Setter of FixedLineScrollOffset
// Declaration: float FixedLineScrollOffset
float UListViewBase::M_GetFixedLineScrollOffset() const {
	return Read<float>((byte*)this + 280);
}
float* UListViewBase::M_PtrGetFixedLineScrollOffset() {
	return reinterpret_cast<float*>((byte*)this + 280);
}
void UListViewBase::M_SetFixedLineScrollOffset(const float& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of BP_OnEntryGenerated
// Declaration: TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature> BP_OnEntryGenerated
TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature> UListViewBase::M_GetBP_OnEntryGenerated() const {
	return Read<TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>>((byte*)this + 288);
}
TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>* UListViewBase::M_PtrGetBP_OnEntryGenerated() {
	return reinterpret_cast<TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>*>((byte*)this + 288);
}
void UListViewBase::M_SetBP_OnEntryGenerated(const TAssetPtr<class FOnListEntryGeneratedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of BP_OnEntryReleased
// Declaration: TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature> BP_OnEntryReleased
TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature> UListViewBase::M_GetBP_OnEntryReleased() const {
	return Read<TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>>((byte*)this + 304);
}
TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>* UListViewBase::M_PtrGetBP_OnEntryReleased() {
	return reinterpret_cast<TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>*>((byte*)this + 304);
}
void UListViewBase::M_SetBP_OnEntryReleased(const TAssetPtr<class FOnListEntryReleasedDynamic__DelegateSignature>& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of EntryWidgetPool
// Declaration: struct FUserWidgetPool EntryWidgetPool
struct FUserWidgetPool UListViewBase::M_GetEntryWidgetPool() const {
	return Read<struct FUserWidgetPool>((byte*)this + 320);
}
struct FUserWidgetPool* UListViewBase::M_PtrGetEntryWidgetPool() {
	return reinterpret_cast<struct FUserWidgetPool*>((byte*)this + 320);
}
void UListViewBase::M_SetEntryWidgetPool(const struct FUserWidgetPool& value) {
	Write((byte*)this + 320, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UUserWidget*>	Flags: ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	struct UListViewBase_GetDisplayedEntryWidgets_Params {
		TArray<class UUserWidget*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UListViewBase_GetDisplayedEntryWidgets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ListViewBase.RegenerateAllEntries
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListViewBase::RegenerateAllEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	struct UListViewBase_RegenerateAllEntries_Params {
	};
	UListViewBase_RegenerateAllEntries_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.RequestRefresh
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListViewBase::RequestRefresh() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	struct UListViewBase_RequestRefresh_Params {
	};
	UListViewBase_RequestRefresh_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.ScrollToBottom
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListViewBase::ScrollToBottom() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	struct UListViewBase_ScrollToBottom_Params {
	};
	UListViewBase_ScrollToBottom_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.ScrollToTop
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UListViewBase::ScrollToTop() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	struct UListViewBase_ScrollToTop_Params {
	};
	UListViewBase_ScrollToTop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.SetScrollbarVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVisibility	Type: ESlateVisibility	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListViewBase::SetScrollbarVisibility(ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	struct UListViewBase_SetScrollbarVisibility_Params {
		ESlateVisibility InVisibility;			//Offset: 0 | ElementSize: 1
	};
	UListViewBase_SetScrollbarVisibility_Params params;
	params.InVisibility = InVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.SetScrollOffset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InScrollOffset	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListViewBase::SetScrollOffset(const float InScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	struct UListViewBase_SetScrollOffset_Params {
		float InScrollOffset;			//Offset: 0 | ElementSize: 4
	};
	UListViewBase_SetScrollOffset_Params params;
	params.InScrollOffset = InScrollOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.ListViewBase.SetWheelScrollMultiplier
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewWheelScrollMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	struct UListViewBase_SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;			//Offset: 0 | ElementSize: 4
	};
	UListViewBase_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}