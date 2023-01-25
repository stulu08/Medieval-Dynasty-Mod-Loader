#include "../SDK.h"
#include "SlateAccessibleWidgetData.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bCanChildrenBeAccessible
// Declaration: bool bCanChildrenBeAccessible
bool USlateAccessibleWidgetData::M_GetbCanChildrenBeAccessible() const {
	return Read<bool>((byte*)this + 40);
}
bool* USlateAccessibleWidgetData::M_PtrGetbCanChildrenBeAccessible() {
	return reinterpret_cast<bool*>((byte*)this + 40);
}
void USlateAccessibleWidgetData::M_SetbCanChildrenBeAccessible(const bool& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of AccessibleBehavior
// Declaration: ESlateAccessibleBehavior AccessibleBehavior
ESlateAccessibleBehavior USlateAccessibleWidgetData::M_GetAccessibleBehavior() const {
	return Read<ESlateAccessibleBehavior>((byte*)this + 41);
}
ESlateAccessibleBehavior* USlateAccessibleWidgetData::M_PtrGetAccessibleBehavior() {
	return reinterpret_cast<ESlateAccessibleBehavior*>((byte*)this + 41);
}
void USlateAccessibleWidgetData::M_SetAccessibleBehavior(const ESlateAccessibleBehavior& value) {
	Write((byte*)this + 41, value);
}
// Member Getter and Setter of AccessibleSummaryBehavior
// Declaration: ESlateAccessibleBehavior AccessibleSummaryBehavior
ESlateAccessibleBehavior USlateAccessibleWidgetData::M_GetAccessibleSummaryBehavior() const {
	return Read<ESlateAccessibleBehavior>((byte*)this + 42);
}
ESlateAccessibleBehavior* USlateAccessibleWidgetData::M_PtrGetAccessibleSummaryBehavior() {
	return reinterpret_cast<ESlateAccessibleBehavior*>((byte*)this + 42);
}
void USlateAccessibleWidgetData::M_SetAccessibleSummaryBehavior(const ESlateAccessibleBehavior& value) {
	Write((byte*)this + 42, value);
}
// Member Getter and Setter of AccessibleText
// Declaration: struct FText AccessibleText
struct FText USlateAccessibleWidgetData::M_GetAccessibleText() const {
	return Read<struct FText>((byte*)this + 48);
}
struct FText* USlateAccessibleWidgetData::M_PtrGetAccessibleText() {
	return reinterpret_cast<struct FText*>((byte*)this + 48);
}
void USlateAccessibleWidgetData::M_SetAccessibleText(const struct FText& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of AccessibleTextDelegate
// Declaration: struct FScriptDelegate AccessibleTextDelegate
struct FScriptDelegate USlateAccessibleWidgetData::M_GetAccessibleTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 72);
}
struct FScriptDelegate* USlateAccessibleWidgetData::M_PtrGetAccessibleTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 72);
}
void USlateAccessibleWidgetData::M_SetAccessibleTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of AccessibleSummaryText
// Declaration: struct FText AccessibleSummaryText
struct FText USlateAccessibleWidgetData::M_GetAccessibleSummaryText() const {
	return Read<struct FText>((byte*)this + 88);
}
struct FText* USlateAccessibleWidgetData::M_PtrGetAccessibleSummaryText() {
	return reinterpret_cast<struct FText*>((byte*)this + 88);
}
void USlateAccessibleWidgetData::M_SetAccessibleSummaryText(const struct FText& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of AccessibleSummaryTextDelegate
// Declaration: struct FScriptDelegate AccessibleSummaryTextDelegate
struct FScriptDelegate USlateAccessibleWidgetData::M_GetAccessibleSummaryTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 112);
}
struct FScriptDelegate* USlateAccessibleWidgetData::M_PtrGetAccessibleSummaryTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 112);
}
void USlateAccessibleWidgetData::M_SetAccessibleSummaryTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 112, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// DelegateFunction UMG.SlateAccessibleWidgetData.GetText__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText USlateAccessibleWidgetData::GetText__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SlateAccessibleWidgetData.GetText__DelegateSignature");

	struct USlateAccessibleWidgetData_GetText__DelegateSignature_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	USlateAccessibleWidgetData_GetText__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}