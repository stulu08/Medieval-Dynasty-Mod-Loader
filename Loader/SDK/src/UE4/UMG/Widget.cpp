#include "../SDK.h"
#include "Widget.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Slot
// Declaration: class UPanelSlot* Slot
class UPanelSlot* UWidget::M_GetSlot() const {
	return Read<class UPanelSlot*>((byte*)this + 40);
}
class UPanelSlot** UWidget::M_PtrGetSlot() {
	return reinterpret_cast<class UPanelSlot**>((byte*)this + 40);
}
void UWidget::M_SetSlot(const class UPanelSlot*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bIsEnabledDelegate
// Declaration: struct FScriptDelegate bIsEnabledDelegate
struct FScriptDelegate UWidget::M_GetbIsEnabledDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 48);
}
struct FScriptDelegate* UWidget::M_PtrGetbIsEnabledDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 48);
}
void UWidget::M_SetbIsEnabledDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of ToolTipText
// Declaration: struct FText ToolTipText
struct FText UWidget::M_GetToolTipText() const {
	return Read<struct FText>((byte*)this + 64);
}
struct FText* UWidget::M_PtrGetToolTipText() {
	return reinterpret_cast<struct FText*>((byte*)this + 64);
}
void UWidget::M_SetToolTipText(const struct FText& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of ToolTipTextDelegate
// Declaration: struct FScriptDelegate ToolTipTextDelegate
struct FScriptDelegate UWidget::M_GetToolTipTextDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 88);
}
struct FScriptDelegate* UWidget::M_PtrGetToolTipTextDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 88);
}
void UWidget::M_SetToolTipTextDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of ToolTipWidget
// Declaration: class UWidget* ToolTipWidget
class UWidget* UWidget::M_GetToolTipWidget() const {
	return Read<class UWidget*>((byte*)this + 104);
}
class UWidget** UWidget::M_PtrGetToolTipWidget() {
	return reinterpret_cast<class UWidget**>((byte*)this + 104);
}
void UWidget::M_SetToolTipWidget(const class UWidget*& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of ToolTipWidgetDelegate
// Declaration: struct FScriptDelegate ToolTipWidgetDelegate
struct FScriptDelegate UWidget::M_GetToolTipWidgetDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 112);
}
struct FScriptDelegate* UWidget::M_PtrGetToolTipWidgetDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 112);
}
void UWidget::M_SetToolTipWidgetDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 112, value);
}
// Member Getter and Setter of VisibilityDelegate
// Declaration: struct FScriptDelegate VisibilityDelegate
struct FScriptDelegate UWidget::M_GetVisibilityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 128);
}
struct FScriptDelegate* UWidget::M_PtrGetVisibilityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 128);
}
void UWidget::M_SetVisibilityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 128, value);
}
// Member Getter and Setter of RenderTransform
// Declaration: struct FWidgetTransform RenderTransform
struct FWidgetTransform UWidget::M_GetRenderTransform() const {
	return Read<struct FWidgetTransform>((byte*)this + 144);
}
struct FWidgetTransform* UWidget::M_PtrGetRenderTransform() {
	return reinterpret_cast<struct FWidgetTransform*>((byte*)this + 144);
}
void UWidget::M_SetRenderTransform(const struct FWidgetTransform& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of RenderTransformPivot
// Declaration: struct FVector2D RenderTransformPivot
struct FVector2D UWidget::M_GetRenderTransformPivot() const {
	return Read<struct FVector2D>((byte*)this + 172);
}
struct FVector2D* UWidget::M_PtrGetRenderTransformPivot() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 172);
}
void UWidget::M_SetRenderTransformPivot(const struct FVector2D& value) {
	Write((byte*)this + 172, value);
}
// Member Getter and Setter of bIsVariable
// Declaration: unsigned char bIsVariable : 1
unsigned char UWidget::M_GetbIsVariable() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UWidget::M_PtrGetbIsVariable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UWidget::M_SetbIsVariable(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bCreatedByConstructionScript
// Declaration: unsigned char bCreatedByConstructionScript : 1
unsigned char UWidget::M_GetbCreatedByConstructionScript() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UWidget::M_PtrGetbCreatedByConstructionScript() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UWidget::M_SetbCreatedByConstructionScript(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bIsEnabled
// Declaration: unsigned char bIsEnabled : 1
unsigned char UWidget::M_GetbIsEnabled() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UWidget::M_PtrGetbIsEnabled() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UWidget::M_SetbIsEnabled(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bOverride_Cursor
// Declaration: unsigned char bOverride_Cursor : 1
unsigned char UWidget::M_GetbOverride_Cursor() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UWidget::M_PtrGetbOverride_Cursor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UWidget::M_SetbOverride_Cursor(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of AccessibleWidgetData
// Declaration: class USlateAccessibleWidgetData* AccessibleWidgetData
class USlateAccessibleWidgetData* UWidget::M_GetAccessibleWidgetData() const {
	return Read<class USlateAccessibleWidgetData*>((byte*)this + 184);
}
class USlateAccessibleWidgetData** UWidget::M_PtrGetAccessibleWidgetData() {
	return reinterpret_cast<class USlateAccessibleWidgetData**>((byte*)this + 184);
}
void UWidget::M_SetAccessibleWidgetData(const class USlateAccessibleWidgetData*& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of bIsVolatile
// Declaration: unsigned char bIsVolatile : 1
unsigned char UWidget::M_GetbIsVolatile() const {
	return Read<unsigned char>((byte*)this + 192);
}
unsigned char* UWidget::M_PtrGetbIsVolatile() {
	return reinterpret_cast<unsigned char*>((byte*)this + 192);
}
void UWidget::M_SetbIsVolatile(const unsigned char& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of Cursor
// Declaration: TEnumAsByte<EMouseCursor> Cursor
TEnumAsByte<EMouseCursor> UWidget::M_GetCursor() const {
	return Read<TEnumAsByte<EMouseCursor>>((byte*)this + 193);
}
TEnumAsByte<EMouseCursor>* UWidget::M_PtrGetCursor() {
	return reinterpret_cast<TEnumAsByte<EMouseCursor>*>((byte*)this + 193);
}
void UWidget::M_SetCursor(const TEnumAsByte<EMouseCursor>& value) {
	Write((byte*)this + 193, value);
}
// Member Getter and Setter of Clipping
// Declaration: EWidgetClipping Clipping
EWidgetClipping UWidget::M_GetClipping() const {
	return Read<EWidgetClipping>((byte*)this + 194);
}
EWidgetClipping* UWidget::M_PtrGetClipping() {
	return reinterpret_cast<EWidgetClipping*>((byte*)this + 194);
}
void UWidget::M_SetClipping(const EWidgetClipping& value) {
	Write((byte*)this + 194, value);
}
// Member Getter and Setter of Visibility
// Declaration: ESlateVisibility Visibility
ESlateVisibility UWidget::M_GetVisibility() const {
	return Read<ESlateVisibility>((byte*)this + 195);
}
ESlateVisibility* UWidget::M_PtrGetVisibility() {
	return reinterpret_cast<ESlateVisibility*>((byte*)this + 195);
}
void UWidget::M_SetVisibility(const ESlateVisibility& value) {
	Write((byte*)this + 195, value);
}
// Member Getter and Setter of RenderOpacity
// Declaration: float RenderOpacity
float UWidget::M_GetRenderOpacity() const {
	return Read<float>((byte*)this + 196);
}
float* UWidget::M_PtrGetRenderOpacity() {
	return reinterpret_cast<float*>((byte*)this + 196);
}
void UWidget::M_SetRenderOpacity(const float& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of Navigation
// Declaration: class UWidgetNavigation* Navigation
class UWidgetNavigation* UWidget::M_GetNavigation() const {
	return Read<class UWidgetNavigation*>((byte*)this + 200);
}
class UWidgetNavigation** UWidget::M_PtrGetNavigation() {
	return reinterpret_cast<class UWidgetNavigation**>((byte*)this + 200);
}
void UWidget::M_SetNavigation(const class UWidgetNavigation*& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of FlowDirectionPreference
// Declaration: EFlowDirectionPreference FlowDirectionPreference
EFlowDirectionPreference UWidget::M_GetFlowDirectionPreference() const {
	return Read<EFlowDirectionPreference>((byte*)this + 208);
}
EFlowDirectionPreference* UWidget::M_PtrGetFlowDirectionPreference() {
	return reinterpret_cast<EFlowDirectionPreference*>((byte*)this + 208);
}
void UWidget::M_SetFlowDirectionPreference(const EFlowDirectionPreference& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of NativeBindings
// Declaration: TArray<class UPropertyBinding*> NativeBindings
TArray<class UPropertyBinding*> UWidget::M_GetNativeBindings() const {
	return Read<TArray<class UPropertyBinding*>>((byte*)this + 248);
}
TArray<class UPropertyBinding*>* UWidget::M_PtrGetNativeBindings() {
	return reinterpret_cast<TArray<class UPropertyBinding*>*>((byte*)this + 248);
}
void UWidget::M_SetNativeBindings(const TArray<class UPropertyBinding*>& value) {
	Write((byte*)this + 248, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Widget.ForceLayoutPrepass
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::ForceLayoutPrepass() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	struct UWidget_ForceLayoutPrepass_Params {
	};
	UWidget_ForceLayoutPrepass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.ForceVolatile
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bForce	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::ForceVolatile(bool bForce) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	struct UWidget_ForceVolatile_Params {
		bool bForce;			//Offset: 0 | ElementSize: 1
	};
	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: Item	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	struct UWidget_GenerateWidgetForObject__DelegateSignature_Params {
		class UObject* Item;			//Offset: 0 | ElementSize: 8
		class UWidget* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: Item	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	struct UWidget_GenerateWidgetForString__DelegateSignature_Params {
		struct FString Item;			//Offset: 0 | ElementSize: 16
		class UWidget* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetAccessibleSummaryText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UWidget::GetAccessibleSummaryText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleSummaryText");

	struct UWidget_GetAccessibleSummaryText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UWidget_GetAccessibleSummaryText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetAccessibleText
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UWidget::GetAccessibleText()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleText");

	struct UWidget_GetAccessibleText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UWidget_GetAccessibleText_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::GetBool__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	struct UWidget_GetBool__DelegateSignature_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetBool__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetCachedGeometry
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FGeometry	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGeometry UWidget::GetCachedGeometry()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	struct UWidget_GetCachedGeometry_Params {
		struct FGeometry ReturnValue;			//Offset: 0 | ElementSize: 56
	};
	UWidget_GetCachedGeometry_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: ECheckBoxState	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	struct UWidget_GetCheckBoxState__DelegateSignature_Params {
		ECheckBoxState ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetClipping
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EWidgetClipping	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EWidgetClipping UWidget::GetClipping()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	struct UWidget_GetClipping_Params {
		EWidgetClipping ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetClipping_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetDesiredSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidget::GetDesiredSize()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	struct UWidget_GetDesiredSize_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetDesiredSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidget::GetFloat__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	struct UWidget_GetFloat__DelegateSignature_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidget_GetFloat__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetGameInstance
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UGameInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UGameInstance* UWidget::GetGameInstance()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	struct UWidget_GetGameInstance_Params {
		class UGameInstance* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetGameInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UWidget::GetInt32__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	struct UWidget_GetInt32__DelegateSignature_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidget_GetInt32__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetIsEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::GetIsEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	struct UWidget_GetIsEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetIsEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// Flags: Public, Delegate, HasDefaults
// Params:
// Name: ReturnValue	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FLinearColor UWidget::GetLinearColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	struct UWidget_GetLinearColor__DelegateSignature_Params {
		struct FLinearColor ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UWidget_GetLinearColor__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: TEnumAsByte<EMouseCursor>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	struct UWidget_GetMouseCursor__DelegateSignature_Params {
		TEnumAsByte<EMouseCursor> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetMouseCursor__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetOwningLocalPlayer
// Flags: BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class ULocalPlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ULocalPlayer* UWidget::GetOwningLocalPlayer()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	struct UWidget_GetOwningLocalPlayer_Params {
		class ULocalPlayer* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetOwningLocalPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetOwningPlayer
// Flags: BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerController* UWidget::GetOwningPlayer()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	struct UWidget_GetOwningPlayer_Params {
		class APlayerController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetOwningPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetPaintSpaceGeometry
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FGeometry	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGeometry UWidget::GetPaintSpaceGeometry()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	struct UWidget_GetPaintSpaceGeometry_Params {
		struct FGeometry ReturnValue;			//Offset: 0 | ElementSize: 56
	};
	UWidget_GetPaintSpaceGeometry_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetParent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPanelWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPanelWidget* UWidget::GetParent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	struct UWidget_GetParent_Params {
		class UPanelWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetParent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetRenderOpacity
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidget::GetRenderOpacity()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	struct UWidget_GetRenderOpacity_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidget_GetRenderOpacity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetRenderTransformAngle
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidget::GetRenderTransformAngle()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	struct UWidget_GetRenderTransformAngle_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidget_GetRenderTransformAngle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	struct UWidget_GetSlateBrush__DelegateSignature_Params {
		struct FSlateBrush ReturnValue;			//Offset: 0 | ElementSize: 136
	};
	UWidget_GetSlateBrush__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: struct FSlateColor	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateColor UWidget::GetSlateColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	struct UWidget_GetSlateColor__DelegateSignature_Params {
		struct FSlateColor ReturnValue;			//Offset: 0 | ElementSize: 40
	};
	UWidget_GetSlateColor__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: ESlateVisibility	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	struct UWidget_GetSlateVisibility__DelegateSignature_Params {
		ESlateVisibility ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetText__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UWidget::GetText__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	struct UWidget_GetText__DelegateSignature_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UWidget_GetText__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetTickSpaceGeometry
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FGeometry	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGeometry UWidget::GetTickSpaceGeometry()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	struct UWidget_GetTickSpaceGeometry_Params {
		struct FGeometry ReturnValue;			//Offset: 0 | ElementSize: 56
	};
	UWidget_GetTickSpaceGeometry_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.GetVisibility
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: ESlateVisibility	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ESlateVisibility UWidget::GetVisibility()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	struct UWidget_GetVisibility_Params {
		ESlateVisibility ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_GetVisibility_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidget::GetWidget__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	struct UWidget_GetWidget__DelegateSignature_Params {
		class UWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidget_GetWidget__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasAnyUserFocus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasAnyUserFocus()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	struct UWidget_HasAnyUserFocus_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_HasAnyUserFocus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasFocusedDescendants
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasFocusedDescendants()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	struct UWidget_HasFocusedDescendants_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_HasFocusedDescendants_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasKeyboardFocus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasKeyboardFocus()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	struct UWidget_HasKeyboardFocus_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_HasKeyboardFocus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasMouseCapture
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasMouseCapture()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	struct UWidget_HasMouseCapture_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_HasMouseCapture_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasMouseCaptureByUser
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: UserIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PointerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	struct UWidget_HasMouseCaptureByUser_Params {
		int32_t UserIndex;			//Offset: 0 | ElementSize: 4
		int32_t PointerIndex;			//Offset: 4 | ElementSize: 4
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UWidget_HasMouseCaptureByUser_Params params;
	params.UserIndex = UserIndex;
	params.PointerIndex = PointerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasUserFocus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasUserFocus(class APlayerController* PlayerController)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	struct UWidget_HasUserFocus_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.HasUserFocusedDescendants
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	struct UWidget_HasUserFocusedDescendants_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.InvalidateLayoutAndVolatility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::InvalidateLayoutAndVolatility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	struct UWidget_InvalidateLayoutAndVolatility_Params {
	};
	UWidget_InvalidateLayoutAndVolatility_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.IsHovered
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::IsHovered()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	struct UWidget_IsHovered_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_IsHovered_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.IsVisible
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidget::IsVisible()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	struct UWidget_IsVisible_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidget_IsVisible_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// Flags: Public, Delegate, HasOutParms
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	struct UWidget_OnPointerEvent__DelegateSignature_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidget::OnReply__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	struct UWidget_OnReply__DelegateSignature_Params {
		struct FEventReply ReturnValue;			//Offset: 0 | ElementSize: 184
	};
	UWidget_OnReply__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Widget.RemoveFromParent
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::RemoveFromParent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	struct UWidget_RemoveFromParent_Params {
	};
	UWidget_RemoveFromParent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.ResetCursor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::ResetCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	struct UWidget_ResetCursor_Params {
	};
	UWidget_ResetCursor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetAllNavigationRules
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Rule	Type: EUINavigationRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WidgetToFocus	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	struct UWidget_SetAllNavigationRules_Params {
		EUINavigationRule Rule;			//Offset: 0 | ElementSize: 1
		struct FName WidgetToFocus;			//Offset: 4 | ElementSize: 8
	};
	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetClipping
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClipping	Type: EWidgetClipping	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetClipping(EWidgetClipping InClipping) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	struct UWidget_SetClipping_Params {
		EWidgetClipping InClipping;			//Offset: 0 | ElementSize: 1
	};
	UWidget_SetClipping_Params params;
	params.InClipping = InClipping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetCursor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InCursor	Type: TEnumAsByte<EMouseCursor>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetCursor(TEnumAsByte<EMouseCursor> InCursor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	struct UWidget_SetCursor_Params {
		TEnumAsByte<EMouseCursor> InCursor;			//Offset: 0 | ElementSize: 1
	};
	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::SetFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	struct UWidget_SetFocus_Params {
	};
	UWidget_SetFocus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetIsEnabled
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bInIsEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetIsEnabled(bool bInIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	struct UWidget_SetIsEnabled_Params {
		bool bInIsEnabled;			//Offset: 0 | ElementSize: 1
	};
	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetKeyboardFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidget::SetKeyboardFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	struct UWidget_SetKeyboardFocus_Params {
	};
	UWidget_SetKeyboardFocus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetNavigationRule
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Direction	Type: EUINavigation	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rule	Type: EUINavigationRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WidgetToFocus	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	struct UWidget_SetNavigationRule_Params {
		EUINavigation Direction;			//Offset: 0 | ElementSize: 1
		EUINavigationRule Rule;			//Offset: 1 | ElementSize: 1
		struct FName WidgetToFocus;			//Offset: 4 | ElementSize: 8
	};
	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetNavigationRuleBase
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Direction	Type: EUINavigation	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rule	Type: EUINavigationRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	struct UWidget_SetNavigationRuleBase_Params {
		EUINavigation Direction;			//Offset: 0 | ElementSize: 1
		EUINavigationRule Rule;			//Offset: 1 | ElementSize: 1
	};
	UWidget_SetNavigationRuleBase_Params params;
	params.Direction = Direction;
	params.Rule = Rule;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetNavigationRuleCustom
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Direction	Type: EUINavigation	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InCustomDelegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetNavigationRuleCustom(EUINavigation Direction, struct FScriptDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	struct UWidget_SetNavigationRuleCustom_Params {
		EUINavigation Direction;			//Offset: 0 | ElementSize: 1
		struct FScriptDelegate InCustomDelegate;			//Offset: 4 | ElementSize: 16
	};
	UWidget_SetNavigationRuleCustom_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetNavigationRuleCustomBoundary
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Direction	Type: EUINavigation	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InCustomDelegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, struct FScriptDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	struct UWidget_SetNavigationRuleCustomBoundary_Params {
		EUINavigation Direction;			//Offset: 0 | ElementSize: 1
		struct FScriptDelegate InCustomDelegate;			//Offset: 4 | ElementSize: 16
	};
	UWidget_SetNavigationRuleCustomBoundary_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetNavigationRuleExplicit
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Direction	Type: EUINavigation	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	struct UWidget_SetNavigationRuleExplicit_Params {
		EUINavigation Direction;			//Offset: 0 | ElementSize: 1
		class UWidget* InWidget;			//Offset: 8 | ElementSize: 8
	};
	UWidget_SetNavigationRuleExplicit_Params params;
	params.Direction = Direction;
	params.InWidget = InWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InOpacity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	struct UWidget_SetRenderOpacity_Params {
		float InOpacity;			//Offset: 0 | ElementSize: 4
	};
	UWidget_SetRenderOpacity_Params params;
	params.InOpacity = InOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderScale
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Scale	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderScale(struct FVector2D Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	struct UWidget_SetRenderScale_Params {
		struct FVector2D Scale;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderShear
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Shear	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderShear(struct FVector2D Shear) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	struct UWidget_SetRenderShear_Params {
		struct FVector2D Shear;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderTransform
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTransform	Type: struct FWidgetTransform	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderTransform(struct FWidgetTransform InTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	struct UWidget_SetRenderTransform_Params {
		struct FWidgetTransform InTransform;			//Offset: 0 | ElementSize: 28
	};
	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderTransformAngle
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Angle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderTransformAngle(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	struct UWidget_SetRenderTransformAngle_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	UWidget_SetRenderTransformAngle_Params params;
	params.Angle = Angle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderTransformPivot
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Pivot	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderTransformPivot(struct FVector2D Pivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	struct UWidget_SetRenderTransformPivot_Params {
		struct FVector2D Pivot;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetRenderTranslation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Translation	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetRenderTranslation(struct FVector2D Translation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	struct UWidget_SetRenderTranslation_Params {
		struct FVector2D Translation;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetToolTip
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetToolTip(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	struct UWidget_SetToolTip_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetToolTipText
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InToolTipText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetToolTipText(const struct FText& InToolTipText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	struct UWidget_SetToolTipText_Params {
		struct FText InToolTipText;			//Offset: 0 | ElementSize: 24
	};
	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetUserFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetUserFocus(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	struct UWidget_SetUserFocus_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Widget.SetVisibility
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InVisibility	Type: ESlateVisibility	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidget::SetVisibility(ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	struct UWidget_SetVisibility_Params {
		ESlateVisibility InVisibility;			//Offset: 0 | ElementSize: 1
	};
	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}