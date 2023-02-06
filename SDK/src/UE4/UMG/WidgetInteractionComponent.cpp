#include "../SDK.h"
#include "WidgetInteractionComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnHoveredWidgetChanged
// Declaration: TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature> OnHoveredWidgetChanged
TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature> UWidgetInteractionComponent::M_GetOnHoveredWidgetChanged() const {
	return Read<TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>>((byte*)this + 504);
}
TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>* UWidgetInteractionComponent::M_PtrGetOnHoveredWidgetChanged() {
	return reinterpret_cast<TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>*>((byte*)this + 504);
}
void UWidgetInteractionComponent::M_SetOnHoveredWidgetChanged(const TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of VirtualUserIndex
// Declaration: int32_t VirtualUserIndex
int32_t UWidgetInteractionComponent::M_GetVirtualUserIndex() const {
	return Read<int32_t>((byte*)this + 536);
}
int32_t* UWidgetInteractionComponent::M_PtrGetVirtualUserIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 536);
}
void UWidgetInteractionComponent::M_SetVirtualUserIndex(const int32_t& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of PointerIndex
// Declaration: int32_t PointerIndex
int32_t UWidgetInteractionComponent::M_GetPointerIndex() const {
	return Read<int32_t>((byte*)this + 540);
}
int32_t* UWidgetInteractionComponent::M_PtrGetPointerIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 540);
}
void UWidgetInteractionComponent::M_SetPointerIndex(const int32_t& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of TraceChannel
// Declaration: TEnumAsByte<ECollisionChannel> TraceChannel
TEnumAsByte<ECollisionChannel> UWidgetInteractionComponent::M_GetTraceChannel() const {
	return Read<TEnumAsByte<ECollisionChannel>>((byte*)this + 544);
}
TEnumAsByte<ECollisionChannel>* UWidgetInteractionComponent::M_PtrGetTraceChannel() {
	return reinterpret_cast<TEnumAsByte<ECollisionChannel>*>((byte*)this + 544);
}
void UWidgetInteractionComponent::M_SetTraceChannel(const TEnumAsByte<ECollisionChannel>& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of InteractionDistance
// Declaration: float InteractionDistance
float UWidgetInteractionComponent::M_GetInteractionDistance() const {
	return Read<float>((byte*)this + 548);
}
float* UWidgetInteractionComponent::M_PtrGetInteractionDistance() {
	return reinterpret_cast<float*>((byte*)this + 548);
}
void UWidgetInteractionComponent::M_SetInteractionDistance(const float& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of InteractionSource
// Declaration: EWidgetInteractionSource InteractionSource
EWidgetInteractionSource UWidgetInteractionComponent::M_GetInteractionSource() const {
	return Read<EWidgetInteractionSource>((byte*)this + 552);
}
EWidgetInteractionSource* UWidgetInteractionComponent::M_PtrGetInteractionSource() {
	return reinterpret_cast<EWidgetInteractionSource*>((byte*)this + 552);
}
void UWidgetInteractionComponent::M_SetInteractionSource(const EWidgetInteractionSource& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of bEnableHitTesting
// Declaration: bool bEnableHitTesting
bool UWidgetInteractionComponent::M_GetbEnableHitTesting() const {
	return Read<bool>((byte*)this + 553);
}
bool* UWidgetInteractionComponent::M_PtrGetbEnableHitTesting() {
	return reinterpret_cast<bool*>((byte*)this + 553);
}
void UWidgetInteractionComponent::M_SetbEnableHitTesting(const bool& value) {
	Write((byte*)this + 553, value);
}
// Member Getter and Setter of bShowDebug
// Declaration: bool bShowDebug
bool UWidgetInteractionComponent::M_GetbShowDebug() const {
	return Read<bool>((byte*)this + 554);
}
bool* UWidgetInteractionComponent::M_PtrGetbShowDebug() {
	return reinterpret_cast<bool*>((byte*)this + 554);
}
void UWidgetInteractionComponent::M_SetbShowDebug(const bool& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of DebugSphereLineThickness
// Declaration: float DebugSphereLineThickness
float UWidgetInteractionComponent::M_GetDebugSphereLineThickness() const {
	return Read<float>((byte*)this + 556);
}
float* UWidgetInteractionComponent::M_PtrGetDebugSphereLineThickness() {
	return reinterpret_cast<float*>((byte*)this + 556);
}
void UWidgetInteractionComponent::M_SetDebugSphereLineThickness(const float& value) {
	Write((byte*)this + 556, value);
}
// Member Getter and Setter of DebugLineThickness
// Declaration: float DebugLineThickness
float UWidgetInteractionComponent::M_GetDebugLineThickness() const {
	return Read<float>((byte*)this + 560);
}
float* UWidgetInteractionComponent::M_PtrGetDebugLineThickness() {
	return reinterpret_cast<float*>((byte*)this + 560);
}
void UWidgetInteractionComponent::M_SetDebugLineThickness(const float& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of DebugColor
// Declaration: struct FLinearColor DebugColor
struct FLinearColor UWidgetInteractionComponent::M_GetDebugColor() const {
	return Read<struct FLinearColor>((byte*)this + 564);
}
struct FLinearColor* UWidgetInteractionComponent::M_PtrGetDebugColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 564);
}
void UWidgetInteractionComponent::M_SetDebugColor(const struct FLinearColor& value) {
	Write((byte*)this + 564, value);
}
// Member Getter and Setter of CustomHitResult
// Declaration: struct FHitResult CustomHitResult
struct FHitResult UWidgetInteractionComponent::M_GetCustomHitResult() const {
	return Read<struct FHitResult>((byte*)this + 704);
}
struct FHitResult* UWidgetInteractionComponent::M_PtrGetCustomHitResult() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 704);
}
void UWidgetInteractionComponent::M_SetCustomHitResult(const struct FHitResult& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of LocalHitLocation
// Declaration: struct FVector2D LocalHitLocation
struct FVector2D UWidgetInteractionComponent::M_GetLocalHitLocation() const {
	return Read<struct FVector2D>((byte*)this + 840);
}
struct FVector2D* UWidgetInteractionComponent::M_PtrGetLocalHitLocation() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 840);
}
void UWidgetInteractionComponent::M_SetLocalHitLocation(const struct FVector2D& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of LastLocalHitLocation
// Declaration: struct FVector2D LastLocalHitLocation
struct FVector2D UWidgetInteractionComponent::M_GetLastLocalHitLocation() const {
	return Read<struct FVector2D>((byte*)this + 848);
}
struct FVector2D* UWidgetInteractionComponent::M_PtrGetLastLocalHitLocation() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 848);
}
void UWidgetInteractionComponent::M_SetLastLocalHitLocation(const struct FVector2D& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of HoveredWidgetComponent
// Declaration: class UWidgetComponent* HoveredWidgetComponent
class UWidgetComponent* UWidgetInteractionComponent::M_GetHoveredWidgetComponent() const {
	return Read<class UWidgetComponent*>((byte*)this + 856);
}
class UWidgetComponent** UWidgetInteractionComponent::M_PtrGetHoveredWidgetComponent() {
	return reinterpret_cast<class UWidgetComponent**>((byte*)this + 856);
}
void UWidgetInteractionComponent::M_SetHoveredWidgetComponent(const class UWidgetComponent*& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of LastHitResult
// Declaration: struct FHitResult LastHitResult
struct FHitResult UWidgetInteractionComponent::M_GetLastHitResult() const {
	return Read<struct FHitResult>((byte*)this + 864);
}
struct FHitResult* UWidgetInteractionComponent::M_PtrGetLastHitResult() {
	return reinterpret_cast<struct FHitResult*>((byte*)this + 864);
}
void UWidgetInteractionComponent::M_SetLastHitResult(const struct FHitResult& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of bIsHoveredWidgetInteractable
// Declaration: bool bIsHoveredWidgetInteractable
bool UWidgetInteractionComponent::M_GetbIsHoveredWidgetInteractable() const {
	return Read<bool>((byte*)this + 1000);
}
bool* UWidgetInteractionComponent::M_PtrGetbIsHoveredWidgetInteractable() {
	return reinterpret_cast<bool*>((byte*)this + 1000);
}
void UWidgetInteractionComponent::M_SetbIsHoveredWidgetInteractable(const bool& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of bIsHoveredWidgetFocusable
// Declaration: bool bIsHoveredWidgetFocusable
bool UWidgetInteractionComponent::M_GetbIsHoveredWidgetFocusable() const {
	return Read<bool>((byte*)this + 1001);
}
bool* UWidgetInteractionComponent::M_PtrGetbIsHoveredWidgetFocusable() {
	return reinterpret_cast<bool*>((byte*)this + 1001);
}
void UWidgetInteractionComponent::M_SetbIsHoveredWidgetFocusable(const bool& value) {
	Write((byte*)this + 1001, value);
}
// Member Getter and Setter of bIsHoveredWidgetHitTestVisible
// Declaration: bool bIsHoveredWidgetHitTestVisible
bool UWidgetInteractionComponent::M_GetbIsHoveredWidgetHitTestVisible() const {
	return Read<bool>((byte*)this + 1002);
}
bool* UWidgetInteractionComponent::M_PtrGetbIsHoveredWidgetHitTestVisible() {
	return reinterpret_cast<bool*>((byte*)this + 1002);
}
void UWidgetInteractionComponent::M_SetbIsHoveredWidgetHitTestVisible(const bool& value) {
	Write((byte*)this + 1002, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	struct UWidgetInteractionComponent_Get2DHitLocation_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetInteractionComponent_Get2DHitLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UWidgetComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params {
		class UWidgetComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.GetLastHitResult
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FHitResult UWidgetInteractionComponent::GetLastHitResult()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	struct UWidgetInteractionComponent_GetLastHitResult_Params {
		struct FHitResult ReturnValue;			//Offset: 0 | ElementSize: 136
	};
	UWidgetInteractionComponent_GetLastHitResult_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::IsOverFocusableWidget()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	struct UWidgetInteractionComponent_IsOverFocusableWidget_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::IsOverInteractableWidget()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	struct UWidgetInteractionComponent_IsOverInteractableWidget_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::PressAndReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	struct UWidgetInteractionComponent_PressAndReleaseKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.PressKey
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRepeat	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::PressKey(struct FKey Key, bool bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	struct UWidgetInteractionComponent_PressKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool bRepeat;			//Offset: 24 | ElementSize: 1
		bool ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.PressPointerKey
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetInteractionComponent::PressPointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	struct UWidgetInteractionComponent_PressPointerKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.ReleaseKey
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::ReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	struct UWidgetInteractionComponent_ReleaseKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetInteractionComponent::ReleasePointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	struct UWidgetInteractionComponent_ReleasePointerKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.ScrollWheel
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ScrollDelta	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	struct UWidgetInteractionComponent_ScrollWheel_Params {
		float ScrollDelta;			//Offset: 0 | ElementSize: 4
	};
	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.SendKeyChar
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Characters	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRepeat	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetInteractionComponent::SendKeyChar(struct FString Characters, bool bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	struct UWidgetInteractionComponent_SendKeyChar_Params {
		struct FString Characters;			//Offset: 0 | ElementSize: 16
		bool bRepeat;			//Offset: 16 | ElementSize: 1
		bool ReturnValue;			//Offset: 17 | ElementSize: 1
	};
	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: HitResult	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	struct UWidgetInteractionComponent_SetCustomHitResult_Params {
		struct FHitResult HitResult;			//Offset: 0 | ElementSize: 136
	};
	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetInteractionComponent.SetFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: FocusWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	struct UWidgetInteractionComponent_SetFocus_Params {
		class UWidget* FocusWidget;			//Offset: 0 | ElementSize: 8
	};
	UWidgetInteractionComponent_SetFocus_Params params;
	params.FocusWidget = FocusWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}