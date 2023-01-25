#include "../SDK.h"
#include "DynamicEntryBoxBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EntryBoxType
// Declaration: EDynamicBoxType EntryBoxType
EDynamicBoxType UDynamicEntryBoxBase::M_GetEntryBoxType() const {
	return Read<EDynamicBoxType>((byte*)this + 264);
}
EDynamicBoxType* UDynamicEntryBoxBase::M_PtrGetEntryBoxType() {
	return reinterpret_cast<EDynamicBoxType*>((byte*)this + 264);
}
void UDynamicEntryBoxBase::M_SetEntryBoxType(const EDynamicBoxType& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of EntrySpacing
// Declaration: struct FVector2D EntrySpacing
struct FVector2D UDynamicEntryBoxBase::M_GetEntrySpacing() const {
	return Read<struct FVector2D>((byte*)this + 268);
}
struct FVector2D* UDynamicEntryBoxBase::M_PtrGetEntrySpacing() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 268);
}
void UDynamicEntryBoxBase::M_SetEntrySpacing(const struct FVector2D& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of SpacingPattern
// Declaration: TArray<struct FVector2D> SpacingPattern
TArray<struct FVector2D> UDynamicEntryBoxBase::M_GetSpacingPattern() const {
	return Read<TArray<struct FVector2D>>((byte*)this + 280);
}
TArray<struct FVector2D>* UDynamicEntryBoxBase::M_PtrGetSpacingPattern() {
	return reinterpret_cast<TArray<struct FVector2D>*>((byte*)this + 280);
}
void UDynamicEntryBoxBase::M_SetSpacingPattern(const TArray<struct FVector2D>& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of EntrySizeRule
// Declaration: struct FSlateChildSize EntrySizeRule
struct FSlateChildSize UDynamicEntryBoxBase::M_GetEntrySizeRule() const {
	return Read<struct FSlateChildSize>((byte*)this + 296);
}
struct FSlateChildSize* UDynamicEntryBoxBase::M_PtrGetEntrySizeRule() {
	return reinterpret_cast<struct FSlateChildSize*>((byte*)this + 296);
}
void UDynamicEntryBoxBase::M_SetEntrySizeRule(const struct FSlateChildSize& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of EntryHorizontalAlignment
// Declaration: TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment
TEnumAsByte<EHorizontalAlignment> UDynamicEntryBoxBase::M_GetEntryHorizontalAlignment() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 304);
}
TEnumAsByte<EHorizontalAlignment>* UDynamicEntryBoxBase::M_PtrGetEntryHorizontalAlignment() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 304);
}
void UDynamicEntryBoxBase::M_SetEntryHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of EntryVerticalAlignment
// Declaration: TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment
TEnumAsByte<EVerticalAlignment> UDynamicEntryBoxBase::M_GetEntryVerticalAlignment() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 305);
}
TEnumAsByte<EVerticalAlignment>* UDynamicEntryBoxBase::M_PtrGetEntryVerticalAlignment() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 305);
}
void UDynamicEntryBoxBase::M_SetEntryVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 305, value);
}
// Member Getter and Setter of MaxElementSize
// Declaration: int32_t MaxElementSize
int32_t UDynamicEntryBoxBase::M_GetMaxElementSize() const {
	return Read<int32_t>((byte*)this + 308);
}
int32_t* UDynamicEntryBoxBase::M_PtrGetMaxElementSize() {
	return reinterpret_cast<int32_t*>((byte*)this + 308);
}
void UDynamicEntryBoxBase::M_SetMaxElementSize(const int32_t& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of RadialBoxSettings
// Declaration: struct FRadialBoxSettings RadialBoxSettings
struct FRadialBoxSettings UDynamicEntryBoxBase::M_GetRadialBoxSettings() const {
	return Read<struct FRadialBoxSettings>((byte*)this + 312);
}
struct FRadialBoxSettings* UDynamicEntryBoxBase::M_PtrGetRadialBoxSettings() {
	return reinterpret_cast<struct FRadialBoxSettings*>((byte*)this + 312);
}
void UDynamicEntryBoxBase::M_SetRadialBoxSettings(const struct FRadialBoxSettings& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of EntryWidgetPool
// Declaration: struct FUserWidgetPool EntryWidgetPool
struct FUserWidgetPool UDynamicEntryBoxBase::M_GetEntryWidgetPool() const {
	return Read<struct FUserWidgetPool>((byte*)this + 344);
}
struct FUserWidgetPool* UDynamicEntryBoxBase::M_PtrGetEntryWidgetPool() {
	return reinterpret_cast<struct FUserWidgetPool*>((byte*)this + 344);
}
void UDynamicEntryBoxBase::M_SetEntryWidgetPool(const struct FUserWidgetPool& value) {
	Write((byte*)this + 344, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.DynamicEntryBoxBase.GetAllEntries
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UUserWidget*>	Flags: ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	struct UDynamicEntryBoxBase_GetAllEntries_Params {
		TArray<class UUserWidget*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UDynamicEntryBoxBase_GetAllEntries_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBoxBase.GetNumEntries
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UDynamicEntryBoxBase::GetNumEntries() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	struct UDynamicEntryBoxBase_GetNumEntries_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UDynamicEntryBoxBase_GetNumEntries_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InEntrySpacing	Type: struct FVector2D	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	struct UDynamicEntryBoxBase_SetEntrySpacing_Params {
		struct FVector2D InEntrySpacing;			//Offset: 0 | ElementSize: 8
	};
	UDynamicEntryBoxBase_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InSettings	Type: struct FRadialBoxSettings	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetRadialSettings");

	struct UDynamicEntryBoxBase_SetRadialSettings_Params {
		struct FRadialBoxSettings InSettings;			//Offset: 0 | ElementSize: 16
	};
	UDynamicEntryBoxBase_SetRadialSettings_Params params;
	params.InSettings = InSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}