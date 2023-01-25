#include "../SDK.h"
#include "WidgetComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Space
// Declaration: EWidgetSpace Space
EWidgetSpace UWidgetComponent::M_GetSpace() const {
	return Read<EWidgetSpace>((byte*)this + 1144);
}
EWidgetSpace* UWidgetComponent::M_PtrGetSpace() {
	return reinterpret_cast<EWidgetSpace*>((byte*)this + 1144);
}
void UWidgetComponent::M_SetSpace(const EWidgetSpace& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of TimingPolicy
// Declaration: EWidgetTimingPolicy TimingPolicy
EWidgetTimingPolicy UWidgetComponent::M_GetTimingPolicy() const {
	return Read<EWidgetTimingPolicy>((byte*)this + 1145);
}
EWidgetTimingPolicy* UWidgetComponent::M_PtrGetTimingPolicy() {
	return reinterpret_cast<EWidgetTimingPolicy*>((byte*)this + 1145);
}
void UWidgetComponent::M_SetTimingPolicy(const EWidgetTimingPolicy& value) {
	Write((byte*)this + 1145, value);
}
// Member Getter and Setter of WidgetClass
// Declaration: class UUserWidget* WidgetClass
class UUserWidget* UWidgetComponent::M_GetWidgetClass() const {
	return Read<class UUserWidget*>((byte*)this + 1152);
}
class UUserWidget** UWidgetComponent::M_PtrGetWidgetClass() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1152);
}
void UWidgetComponent::M_SetWidgetClass(const class UUserWidget*& value) {
	Write((byte*)this + 1152, value);
}
// Member Getter and Setter of DrawSize
// Declaration: struct FIntPoint DrawSize
struct FIntPoint UWidgetComponent::M_GetDrawSize() const {
	return Read<struct FIntPoint>((byte*)this + 1160);
}
struct FIntPoint* UWidgetComponent::M_PtrGetDrawSize() {
	return reinterpret_cast<struct FIntPoint*>((byte*)this + 1160);
}
void UWidgetComponent::M_SetDrawSize(const struct FIntPoint& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of bManuallyRedraw
// Declaration: bool bManuallyRedraw
bool UWidgetComponent::M_GetbManuallyRedraw() const {
	return Read<bool>((byte*)this + 1168);
}
bool* UWidgetComponent::M_PtrGetbManuallyRedraw() {
	return reinterpret_cast<bool*>((byte*)this + 1168);
}
void UWidgetComponent::M_SetbManuallyRedraw(const bool& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of bRedrawRequested
// Declaration: bool bRedrawRequested
bool UWidgetComponent::M_GetbRedrawRequested() const {
	return Read<bool>((byte*)this + 1169);
}
bool* UWidgetComponent::M_PtrGetbRedrawRequested() {
	return reinterpret_cast<bool*>((byte*)this + 1169);
}
void UWidgetComponent::M_SetbRedrawRequested(const bool& value) {
	Write((byte*)this + 1169, value);
}
// Member Getter and Setter of RedrawTime
// Declaration: float RedrawTime
float UWidgetComponent::M_GetRedrawTime() const {
	return Read<float>((byte*)this + 1172);
}
float* UWidgetComponent::M_PtrGetRedrawTime() {
	return reinterpret_cast<float*>((byte*)this + 1172);
}
void UWidgetComponent::M_SetRedrawTime(const float& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of CurrentDrawSize
// Declaration: struct FIntPoint CurrentDrawSize
struct FIntPoint UWidgetComponent::M_GetCurrentDrawSize() const {
	return Read<struct FIntPoint>((byte*)this + 1184);
}
struct FIntPoint* UWidgetComponent::M_PtrGetCurrentDrawSize() {
	return reinterpret_cast<struct FIntPoint*>((byte*)this + 1184);
}
void UWidgetComponent::M_SetCurrentDrawSize(const struct FIntPoint& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of bDrawAtDesiredSize
// Declaration: bool bDrawAtDesiredSize
bool UWidgetComponent::M_GetbDrawAtDesiredSize() const {
	return Read<bool>((byte*)this + 1192);
}
bool* UWidgetComponent::M_PtrGetbDrawAtDesiredSize() {
	return reinterpret_cast<bool*>((byte*)this + 1192);
}
void UWidgetComponent::M_SetbDrawAtDesiredSize(const bool& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of Pivot
// Declaration: struct FVector2D Pivot
struct FVector2D UWidgetComponent::M_GetPivot() const {
	return Read<struct FVector2D>((byte*)this + 1196);
}
struct FVector2D* UWidgetComponent::M_PtrGetPivot() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 1196);
}
void UWidgetComponent::M_SetPivot(const struct FVector2D& value) {
	Write((byte*)this + 1196, value);
}
// Member Getter and Setter of bReceiveHardwareInput
// Declaration: bool bReceiveHardwareInput
bool UWidgetComponent::M_GetbReceiveHardwareInput() const {
	return Read<bool>((byte*)this + 1204);
}
bool* UWidgetComponent::M_PtrGetbReceiveHardwareInput() {
	return reinterpret_cast<bool*>((byte*)this + 1204);
}
void UWidgetComponent::M_SetbReceiveHardwareInput(const bool& value) {
	Write((byte*)this + 1204, value);
}
// Member Getter and Setter of bWindowFocusable
// Declaration: bool bWindowFocusable
bool UWidgetComponent::M_GetbWindowFocusable() const {
	return Read<bool>((byte*)this + 1205);
}
bool* UWidgetComponent::M_PtrGetbWindowFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 1205);
}
void UWidgetComponent::M_SetbWindowFocusable(const bool& value) {
	Write((byte*)this + 1205, value);
}
// Member Getter and Setter of WindowVisibility
// Declaration: EWindowVisibility WindowVisibility
EWindowVisibility UWidgetComponent::M_GetWindowVisibility() const {
	return Read<EWindowVisibility>((byte*)this + 1206);
}
EWindowVisibility* UWidgetComponent::M_PtrGetWindowVisibility() {
	return reinterpret_cast<EWindowVisibility*>((byte*)this + 1206);
}
void UWidgetComponent::M_SetWindowVisibility(const EWindowVisibility& value) {
	Write((byte*)this + 1206, value);
}
// Member Getter and Setter of bApplyGammaCorrection
// Declaration: bool bApplyGammaCorrection
bool UWidgetComponent::M_GetbApplyGammaCorrection() const {
	return Read<bool>((byte*)this + 1207);
}
bool* UWidgetComponent::M_PtrGetbApplyGammaCorrection() {
	return reinterpret_cast<bool*>((byte*)this + 1207);
}
void UWidgetComponent::M_SetbApplyGammaCorrection(const bool& value) {
	Write((byte*)this + 1207, value);
}
// Member Getter and Setter of OwnerPlayer
// Declaration: class ULocalPlayer* OwnerPlayer
class ULocalPlayer* UWidgetComponent::M_GetOwnerPlayer() const {
	return Read<class ULocalPlayer*>((byte*)this + 1208);
}
class ULocalPlayer** UWidgetComponent::M_PtrGetOwnerPlayer() {
	return reinterpret_cast<class ULocalPlayer**>((byte*)this + 1208);
}
void UWidgetComponent::M_SetOwnerPlayer(const class ULocalPlayer*& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of BackgroundColor
// Declaration: struct FLinearColor BackgroundColor
struct FLinearColor UWidgetComponent::M_GetBackgroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 1216);
}
struct FLinearColor* UWidgetComponent::M_PtrGetBackgroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1216);
}
void UWidgetComponent::M_SetBackgroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of TintColorAndOpacity
// Declaration: struct FLinearColor TintColorAndOpacity
struct FLinearColor UWidgetComponent::M_GetTintColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 1232);
}
struct FLinearColor* UWidgetComponent::M_PtrGetTintColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1232);
}
void UWidgetComponent::M_SetTintColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of OpacityFromTexture
// Declaration: float OpacityFromTexture
float UWidgetComponent::M_GetOpacityFromTexture() const {
	return Read<float>((byte*)this + 1248);
}
float* UWidgetComponent::M_PtrGetOpacityFromTexture() {
	return reinterpret_cast<float*>((byte*)this + 1248);
}
void UWidgetComponent::M_SetOpacityFromTexture(const float& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of BlendMode
// Declaration: EWidgetBlendMode BlendMode
EWidgetBlendMode UWidgetComponent::M_GetBlendMode() const {
	return Read<EWidgetBlendMode>((byte*)this + 1252);
}
EWidgetBlendMode* UWidgetComponent::M_PtrGetBlendMode() {
	return reinterpret_cast<EWidgetBlendMode*>((byte*)this + 1252);
}
void UWidgetComponent::M_SetBlendMode(const EWidgetBlendMode& value) {
	Write((byte*)this + 1252, value);
}
// Member Getter and Setter of bIsTwoSided
// Declaration: bool bIsTwoSided
bool UWidgetComponent::M_GetbIsTwoSided() const {
	return Read<bool>((byte*)this + 1253);
}
bool* UWidgetComponent::M_PtrGetbIsTwoSided() {
	return reinterpret_cast<bool*>((byte*)this + 1253);
}
void UWidgetComponent::M_SetbIsTwoSided(const bool& value) {
	Write((byte*)this + 1253, value);
}
// Member Getter and Setter of TickWhenOffscreen
// Declaration: bool TickWhenOffscreen
bool UWidgetComponent::M_GetTickWhenOffscreen() const {
	return Read<bool>((byte*)this + 1254);
}
bool* UWidgetComponent::M_PtrGetTickWhenOffscreen() {
	return reinterpret_cast<bool*>((byte*)this + 1254);
}
void UWidgetComponent::M_SetTickWhenOffscreen(const bool& value) {
	Write((byte*)this + 1254, value);
}
// Member Getter and Setter of BodySetup
// Declaration: class UBodySetup* BodySetup
class UBodySetup* UWidgetComponent::M_GetBodySetup() const {
	return Read<class UBodySetup*>((byte*)this + 1256);
}
class UBodySetup** UWidgetComponent::M_PtrGetBodySetup() {
	return reinterpret_cast<class UBodySetup**>((byte*)this + 1256);
}
void UWidgetComponent::M_SetBodySetup(const class UBodySetup*& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of TranslucentMaterial
// Declaration: class UMaterialInterface* TranslucentMaterial
class UMaterialInterface* UWidgetComponent::M_GetTranslucentMaterial() const {
	return Read<class UMaterialInterface*>((byte*)this + 1264);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetTranslucentMaterial() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1264);
}
void UWidgetComponent::M_SetTranslucentMaterial(const class UMaterialInterface*& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of TranslucentMaterial_OneSided
// Declaration: class UMaterialInterface* TranslucentMaterial_OneSided
class UMaterialInterface* UWidgetComponent::M_GetTranslucentMaterial_OneSided() const {
	return Read<class UMaterialInterface*>((byte*)this + 1272);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetTranslucentMaterial_OneSided() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1272);
}
void UWidgetComponent::M_SetTranslucentMaterial_OneSided(const class UMaterialInterface*& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of OpaqueMaterial
// Declaration: class UMaterialInterface* OpaqueMaterial
class UMaterialInterface* UWidgetComponent::M_GetOpaqueMaterial() const {
	return Read<class UMaterialInterface*>((byte*)this + 1280);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetOpaqueMaterial() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1280);
}
void UWidgetComponent::M_SetOpaqueMaterial(const class UMaterialInterface*& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of OpaqueMaterial_OneSided
// Declaration: class UMaterialInterface* OpaqueMaterial_OneSided
class UMaterialInterface* UWidgetComponent::M_GetOpaqueMaterial_OneSided() const {
	return Read<class UMaterialInterface*>((byte*)this + 1288);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetOpaqueMaterial_OneSided() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1288);
}
void UWidgetComponent::M_SetOpaqueMaterial_OneSided(const class UMaterialInterface*& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of MaskedMaterial
// Declaration: class UMaterialInterface* MaskedMaterial
class UMaterialInterface* UWidgetComponent::M_GetMaskedMaterial() const {
	return Read<class UMaterialInterface*>((byte*)this + 1296);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetMaskedMaterial() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1296);
}
void UWidgetComponent::M_SetMaskedMaterial(const class UMaterialInterface*& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of MaskedMaterial_OneSided
// Declaration: class UMaterialInterface* MaskedMaterial_OneSided
class UMaterialInterface* UWidgetComponent::M_GetMaskedMaterial_OneSided() const {
	return Read<class UMaterialInterface*>((byte*)this + 1304);
}
class UMaterialInterface** UWidgetComponent::M_PtrGetMaskedMaterial_OneSided() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 1304);
}
void UWidgetComponent::M_SetMaskedMaterial_OneSided(const class UMaterialInterface*& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of RenderTarget
// Declaration: class UTextureRenderTarget2D* RenderTarget
class UTextureRenderTarget2D* UWidgetComponent::M_GetRenderTarget() const {
	return Read<class UTextureRenderTarget2D*>((byte*)this + 1312);
}
class UTextureRenderTarget2D** UWidgetComponent::M_PtrGetRenderTarget() {
	return reinterpret_cast<class UTextureRenderTarget2D**>((byte*)this + 1312);
}
void UWidgetComponent::M_SetRenderTarget(const class UTextureRenderTarget2D*& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of MaterialInstance
// Declaration: class UMaterialInstanceDynamic* MaterialInstance
class UMaterialInstanceDynamic* UWidgetComponent::M_GetMaterialInstance() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 1320);
}
class UMaterialInstanceDynamic** UWidgetComponent::M_PtrGetMaterialInstance() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 1320);
}
void UWidgetComponent::M_SetMaterialInstance(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of bAddedToScreen
// Declaration: bool bAddedToScreen
bool UWidgetComponent::M_GetbAddedToScreen() const {
	return Read<bool>((byte*)this + 1328);
}
bool* UWidgetComponent::M_PtrGetbAddedToScreen() {
	return reinterpret_cast<bool*>((byte*)this + 1328);
}
void UWidgetComponent::M_SetbAddedToScreen(const bool& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of bEditTimeUsable
// Declaration: bool bEditTimeUsable
bool UWidgetComponent::M_GetbEditTimeUsable() const {
	return Read<bool>((byte*)this + 1329);
}
bool* UWidgetComponent::M_PtrGetbEditTimeUsable() {
	return reinterpret_cast<bool*>((byte*)this + 1329);
}
void UWidgetComponent::M_SetbEditTimeUsable(const bool& value) {
	Write((byte*)this + 1329, value);
}
// Member Getter and Setter of SharedLayerName
// Declaration: struct FName SharedLayerName
struct FName UWidgetComponent::M_GetSharedLayerName() const {
	return Read<struct FName>((byte*)this + 1332);
}
struct FName* UWidgetComponent::M_PtrGetSharedLayerName() {
	return reinterpret_cast<struct FName*>((byte*)this + 1332);
}
void UWidgetComponent::M_SetSharedLayerName(const struct FName& value) {
	Write((byte*)this + 1332, value);
}
// Member Getter and Setter of LayerZOrder
// Declaration: int32_t LayerZOrder
int32_t UWidgetComponent::M_GetLayerZOrder() const {
	return Read<int32_t>((byte*)this + 1340);
}
int32_t* UWidgetComponent::M_PtrGetLayerZOrder() {
	return reinterpret_cast<int32_t*>((byte*)this + 1340);
}
void UWidgetComponent::M_SetLayerZOrder(const int32_t& value) {
	Write((byte*)this + 1340, value);
}
// Member Getter and Setter of GeometryMode
// Declaration: EWidgetGeometryMode GeometryMode
EWidgetGeometryMode UWidgetComponent::M_GetGeometryMode() const {
	return Read<EWidgetGeometryMode>((byte*)this + 1344);
}
EWidgetGeometryMode* UWidgetComponent::M_PtrGetGeometryMode() {
	return reinterpret_cast<EWidgetGeometryMode*>((byte*)this + 1344);
}
void UWidgetComponent::M_SetGeometryMode(const EWidgetGeometryMode& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of CylinderArcAngle
// Declaration: float CylinderArcAngle
float UWidgetComponent::M_GetCylinderArcAngle() const {
	return Read<float>((byte*)this + 1348);
}
float* UWidgetComponent::M_PtrGetCylinderArcAngle() {
	return reinterpret_cast<float*>((byte*)this + 1348);
}
void UWidgetComponent::M_SetCylinderArcAngle(const float& value) {
	Write((byte*)this + 1348, value);
}
// Member Getter and Setter of TickMode
// Declaration: ETickMode TickMode
ETickMode UWidgetComponent::M_GetTickMode() const {
	return Read<ETickMode>((byte*)this + 1352);
}
ETickMode* UWidgetComponent::M_PtrGetTickMode() {
	return reinterpret_cast<ETickMode*>((byte*)this + 1352);
}
void UWidgetComponent::M_SetTickMode(const ETickMode& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of Widget
// Declaration: class UUserWidget* Widget
class UUserWidget* UWidgetComponent::M_GetWidget() const {
	return Read<class UUserWidget*>((byte*)this + 1392);
}
class UUserWidget** UWidgetComponent::M_PtrGetWidget() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1392);
}
void UWidgetComponent::M_SetWidget(const class UUserWidget*& value) {
	Write((byte*)this + 1392, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetCurrentDrawSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetComponent::GetCurrentDrawSize() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	struct UWidgetComponent_GetCurrentDrawSize_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetCurrentDrawSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetCylinderArcAngle
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidgetComponent::GetCylinderArcAngle() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	struct UWidgetComponent_GetCylinderArcAngle_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetComponent_GetCylinderArcAngle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::GetDrawAtDesiredSize() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	struct UWidgetComponent_GetDrawAtDesiredSize_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetDrawAtDesiredSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetDrawSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetComponent::GetDrawSize() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	struct UWidgetComponent_GetDrawSize_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetDrawSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetGeometryMode
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EWidgetGeometryMode	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EWidgetGeometryMode UWidgetComponent::GetGeometryMode() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	struct UWidgetComponent_GetGeometryMode_Params {
		EWidgetGeometryMode ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetGeometryMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetManuallyRedraw
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::GetManuallyRedraw() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	struct UWidgetComponent_GetManuallyRedraw_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetManuallyRedraw_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetMaterialInstance
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	struct UWidgetComponent_GetMaterialInstance_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetMaterialInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetOwnerPlayer
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class ULocalPlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	struct UWidgetComponent_GetOwnerPlayer_Params {
		class ULocalPlayer* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetOwnerPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetPivot
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetComponent::GetPivot() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	struct UWidgetComponent_GetPivot_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetPivot_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetRedrawTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidgetComponent::GetRedrawTime() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	struct UWidgetComponent_GetRedrawTime_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetComponent_GetRedrawTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetRenderTarget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UTextureRenderTarget2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	struct UWidgetComponent_GetRenderTarget_Params {
		class UTextureRenderTarget2D* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetRenderTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetTickWhenOffscreen
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::GetTickWhenOffscreen() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	struct UWidgetComponent_GetTickWhenOffscreen_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetTickWhenOffscreen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetTwoSided
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::GetTwoSided() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	struct UWidgetComponent_GetTwoSided_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetTwoSided_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetUserWidgetObject
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UWidgetComponent::GetUserWidgetObject() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	struct UWidgetComponent_GetUserWidgetObject_Params {
		class UUserWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetUserWidgetObject_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetWidget
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UWidgetComponent::GetWidget() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidget");

	struct UWidgetComponent_GetWidget_Params {
		class UUserWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_GetWidget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetWidgetSpace
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EWidgetSpace	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EWidgetSpace UWidgetComponent::GetWidgetSpace() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	struct UWidgetComponent_GetWidgetSpace_Params {
		EWidgetSpace ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetWidgetSpace_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetWindowFocusable
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::GetWindowFocusable() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	struct UWidgetComponent_GetWindowFocusable_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetWindowFocusable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.GetWindowVisiblility
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EWindowVisibility	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EWindowVisibility UWidgetComponent::GetWindowVisiblility() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	struct UWidgetComponent_GetWindowVisiblility_Params {
		EWindowVisibility ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_GetWindowVisiblility_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.IsWidgetVisible
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetComponent::IsWidgetVisible() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.IsWidgetVisible");

	struct UWidgetComponent_IsWidgetVisible_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_IsWidgetVisible_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.RequestRedraw
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetComponent::RequestRedraw() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	struct UWidgetComponent_RequestRedraw_Params {
	};
	UWidgetComponent_RequestRedraw_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.RequestRenderUpdate
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetComponent::RequestRenderUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRenderUpdate");

	struct UWidgetComponent_RequestRenderUpdate_Params {
	};
	UWidgetComponent_RequestRenderUpdate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetBackgroundColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewBackgroundColor	Type: struct FLinearColor	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetBackgroundColor(const struct FLinearColor NewBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	struct UWidgetComponent_SetBackgroundColor_Params {
		struct FLinearColor NewBackgroundColor;			//Offset: 0 | ElementSize: 16
	};
	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetCylinderArcAngle
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InCylinderArcAngle	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetCylinderArcAngle(const float InCylinderArcAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	struct UWidgetComponent_SetCylinderArcAngle_Params {
		float InCylinderArcAngle;			//Offset: 0 | ElementSize: 4
	};
	UWidgetComponent_SetCylinderArcAngle_Params params;
	params.InCylinderArcAngle = InCylinderArcAngle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInDrawAtDesiredSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	struct UWidgetComponent_SetDrawAtDesiredSize_Params {
		bool bInDrawAtDesiredSize;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetDrawAtDesiredSize_Params params;
	params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetDrawSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Size	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetDrawSize(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	struct UWidgetComponent_SetDrawSize_Params {
		struct FVector2D Size;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetGeometryMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InGeometryMode	Type: EWidgetGeometryMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	struct UWidgetComponent_SetGeometryMode_Params {
		EWidgetGeometryMode InGeometryMode;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetGeometryMode_Params params;
	params.InGeometryMode = InGeometryMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetManuallyRedraw
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bUseManualRedraw	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	struct UWidgetComponent_SetManuallyRedraw_Params {
		bool bUseManualRedraw;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetManuallyRedraw_Params params;
	params.bUseManualRedraw = bUseManualRedraw;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetOwnerPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocalPlayer	Type: class ULocalPlayer*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	struct UWidgetComponent_SetOwnerPlayer_Params {
		class ULocalPlayer* LocalPlayer;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetPivot
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InPivot	Type: struct FVector2D	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetPivot(const struct FVector2D& InPivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	struct UWidgetComponent_SetPivot_Params {
		struct FVector2D InPivot;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_SetPivot_Params params;
	params.InPivot = InPivot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetRedrawTime
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InRedrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetRedrawTime(float InRedrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	struct UWidgetComponent_SetRedrawTime_Params {
		float InRedrawTime;			//Offset: 0 | ElementSize: 4
	};
	UWidgetComponent_SetRedrawTime_Params params;
	params.InRedrawTime = InRedrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetTickMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTickMode	Type: ETickMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetTickMode(ETickMode InTickMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickMode");

	struct UWidgetComponent_SetTickMode_Params {
		ETickMode InTickMode;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetTickMode_Params params;
	params.InTickMode = InTickMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetTickWhenOffscreen
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bWantTickWhenOffscreen	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetTickWhenOffscreen(const bool bWantTickWhenOffscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	struct UWidgetComponent_SetTickWhenOffscreen_Params {
		bool bWantTickWhenOffscreen;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetTickWhenOffscreen_Params params;
	params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetTintColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewTintColorAndOpacity	Type: struct FLinearColor	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor NewTintColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	struct UWidgetComponent_SetTintColorAndOpacity_Params {
		struct FLinearColor NewTintColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UWidgetComponent_SetTintColorAndOpacity_Params params;
	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetTwoSided
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bWantTwoSided	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetTwoSided(const bool bWantTwoSided) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	struct UWidgetComponent_SetTwoSided_Params {
		bool bWantTwoSided;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetTwoSided_Params params;
	params.bWantTwoSided = bWantTwoSided;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetWidget
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetWidget(class UUserWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	struct UWidgetComponent_SetWidget_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
	};
	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetWidgetSpace
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewSpace	Type: EWidgetSpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	struct UWidgetComponent_SetWidgetSpace_Params {
		EWidgetSpace NewSpace;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetWidgetSpace_Params params;
	params.NewSpace = NewSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetWindowFocusable
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInWindowFocusable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	struct UWidgetComponent_SetWindowFocusable_Params {
		bool bInWindowFocusable;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetWindowFocusable_Params params;
	params.bInWindowFocusable = bInWindowFocusable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetComponent.SetWindowVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVisibility	Type: EWindowVisibility	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	struct UWidgetComponent_SetWindowVisibility_Params {
		EWindowVisibility InVisibility;			//Offset: 0 | ElementSize: 1
	};
	UWidgetComponent_SetWindowVisibility_Params params;
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