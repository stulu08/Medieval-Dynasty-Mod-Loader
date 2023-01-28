#include "../SDK.h"
#include "BP_PlayerManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_PlayerManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_PlayerManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_PlayerManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of Ambient
// Declaration: class UAudioComponent* Ambient
class UAudioComponent* ABP_PlayerManager_C::M_GetAmbient() const {
	return Read<class UAudioComponent*>((byte*)this + 552);
}
class UAudioComponent** ABP_PlayerManager_C::M_PtrGetAmbient() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 552);
}
void ABP_PlayerManager_C::M_SetAmbient(const class UAudioComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_PlayerManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 560);
}
class USceneComponent** ABP_PlayerManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 560);
}
void ABP_PlayerManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of InspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1
// Declaration: float InspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1
float ABP_PlayerManager_C::M_GetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1() const {
	return Read<float>((byte*)this + 568);
}
float* ABP_PlayerManager_C::M_PtrGetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1() {
	return reinterpret_cast<float*>((byte*)this + 568);
}
void ABP_PlayerManager_C::M_SetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1(const float& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of InspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1
// Declaration: TEnumAsByte<ETimelineDirection> InspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1
TEnumAsByte<ETimelineDirection> ABP_PlayerManager_C::M_GetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 572);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerManager_C::M_PtrGetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 572);
}
void ABP_PlayerManager_C::M_SetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 572, value);
}
// Member Getter and Setter of InspectorIntensity
// Declaration: class UTimelineComponent* InspectorIntensity
class UTimelineComponent* ABP_PlayerManager_C::M_GetInspectorIntensity() const {
	return Read<class UTimelineComponent*>((byte*)this + 576);
}
class UTimelineComponent** ABP_PlayerManager_C::M_PtrGetInspectorIntensity() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 576);
}
void ABP_PlayerManager_C::M_SetInspectorIntensity(const class UTimelineComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of NightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6
// Declaration: float NightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6
float ABP_PlayerManager_C::M_GetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6() const {
	return Read<float>((byte*)this + 584);
}
float* ABP_PlayerManager_C::M_PtrGetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6() {
	return reinterpret_cast<float*>((byte*)this + 584);
}
void ABP_PlayerManager_C::M_SetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6(const float& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of NightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6
// Declaration: TEnumAsByte<ETimelineDirection> NightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6
TEnumAsByte<ETimelineDirection> ABP_PlayerManager_C::M_GetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 588);
}
TEnumAsByte<ETimelineDirection>* ABP_PlayerManager_C::M_PtrGetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 588);
}
void ABP_PlayerManager_C::M_SetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 588, value);
}
// Member Getter and Setter of NightVisionIntensity
// Declaration: class UTimelineComponent* NightVisionIntensity
class UTimelineComponent* ABP_PlayerManager_C::M_GetNightVisionIntensity() const {
	return Read<class UTimelineComponent*>((byte*)this + 592);
}
class UTimelineComponent** ABP_PlayerManager_C::M_PtrGetNightVisionIntensity() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 592);
}
void ABP_PlayerManager_C::M_SetNightVisionIntensity(const class UTimelineComponent*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_PlayerManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 600);
}
class ABP_SystemsManager_C** ABP_PlayerManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 600);
}
void ABP_PlayerManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of PlayerControllerReference
// Declaration: class APC_Player_C* PlayerControllerReference
class APC_Player_C* ABP_PlayerManager_C::M_GetPlayerControllerReference() const {
	return Read<class APC_Player_C*>((byte*)this + 608);
}
class APC_Player_C** ABP_PlayerManager_C::M_PtrGetPlayerControllerReference() {
	return reinterpret_cast<class APC_Player_C**>((byte*)this + 608);
}
void ABP_PlayerManager_C::M_SetPlayerControllerReference(const class APC_Player_C*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of PlayerStartTransform
// Declaration: struct FTransform PlayerStartTransform
struct FTransform ABP_PlayerManager_C::M_GetPlayerStartTransform() const {
	return Read<struct FTransform>((byte*)this + 624);
}
struct FTransform* ABP_PlayerManager_C::M_PtrGetPlayerStartTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 624);
}
void ABP_PlayerManager_C::M_SetPlayerStartTransform(const struct FTransform& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of InspectorMode
// Declaration: bool InspectorMode
bool ABP_PlayerManager_C::M_GetInspectorMode() const {
	return Read<bool>((byte*)this + 672);
}
bool* ABP_PlayerManager_C::M_PtrGetInspectorMode() {
	return reinterpret_cast<bool*>((byte*)this + 672);
}
void ABP_PlayerManager_C::M_SetInspectorMode(const bool& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of InspectorModeVisibility
// Declaration: ESlateVisibility InspectorModeVisibility
ESlateVisibility ABP_PlayerManager_C::M_GetInspectorModeVisibility() const {
	return Read<ESlateVisibility>((byte*)this + 673);
}
ESlateVisibility* ABP_PlayerManager_C::M_PtrGetInspectorModeVisibility() {
	return reinterpret_cast<ESlateVisibility*>((byte*)this + 673);
}
void ABP_PlayerManager_C::M_SetInspectorModeVisibility(const ESlateVisibility& value) {
	Write((byte*)this + 673, value);
}
// Member Getter and Setter of InspectorModeDistance
// Declaration: float InspectorModeDistance
float ABP_PlayerManager_C::M_GetInspectorModeDistance() const {
	return Read<float>((byte*)this + 676);
}
float* ABP_PlayerManager_C::M_PtrGetInspectorModeDistance() {
	return reinterpret_cast<float*>((byte*)this + 676);
}
void ABP_PlayerManager_C::M_SetInspectorModeDistance(const float& value) {
	Write((byte*)this + 676, value);
}
// Member Getter and Setter of ShownTutorials
// Declaration: TMap<TEnumAsByte<E_Tutorials>, bool> ShownTutorials
TMap<TEnumAsByte<E_Tutorials>, bool> ABP_PlayerManager_C::M_GetShownTutorials() const {
	return Read<TMap<TEnumAsByte<E_Tutorials>, bool>>((byte*)this + 680);
}
TMap<TEnumAsByte<E_Tutorials>, bool>* ABP_PlayerManager_C::M_PtrGetShownTutorials() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tutorials>, bool>*>((byte*)this + 680);
}
void ABP_PlayerManager_C::M_SetShownTutorials(const TMap<TEnumAsByte<E_Tutorials>, bool>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of MountWhistleSound
// Declaration: class USoundBase* MountWhistleSound
class USoundBase* ABP_PlayerManager_C::M_GetMountWhistleSound() const {
	return Read<class USoundBase*>((byte*)this + 760);
}
class USoundBase** ABP_PlayerManager_C::M_PtrGetMountWhistleSound() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 760);
}
void ABP_PlayerManager_C::M_SetMountWhistleSound(const class USoundBase*& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of PlayerMountReference
// Declaration: class ABP_AnimalBase_C* PlayerMountReference
class ABP_AnimalBase_C* ABP_PlayerManager_C::M_GetPlayerMountReference() const {
	return Read<class ABP_AnimalBase_C*>((byte*)this + 768);
}
class ABP_AnimalBase_C** ABP_PlayerManager_C::M_PtrGetPlayerMountReference() {
	return reinterpret_cast<class ABP_AnimalBase_C**>((byte*)this + 768);
}
void ABP_PlayerManager_C::M_SetPlayerMountReference(const class ABP_AnimalBase_C*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of Is_Move
// Declaration: bool Is_Move
bool ABP_PlayerManager_C::M_GetIs_Move() const {
	return Read<bool>((byte*)this + 776);
}
bool* ABP_PlayerManager_C::M_PtrGetIs_Move() {
	return reinterpret_cast<bool*>((byte*)this + 776);
}
void ABP_PlayerManager_C::M_SetIs_Move(const bool& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of CurrentForestIntensity
// Declaration: float CurrentForestIntensity
float ABP_PlayerManager_C::M_GetCurrentForestIntensity() const {
	return Read<float>((byte*)this + 780);
}
float* ABP_PlayerManager_C::M_PtrGetCurrentForestIntensity() {
	return reinterpret_cast<float*>((byte*)this + 780);
}
void ABP_PlayerManager_C::M_SetCurrentForestIntensity(const float& value) {
	Write((byte*)this + 780, value);
}
// Member Getter and Setter of CurrentVillageIntensity
// Declaration: float CurrentVillageIntensity
float ABP_PlayerManager_C::M_GetCurrentVillageIntensity() const {
	return Read<float>((byte*)this + 784);
}
float* ABP_PlayerManager_C::M_PtrGetCurrentVillageIntensity() {
	return reinterpret_cast<float*>((byte*)this + 784);
}
void ABP_PlayerManager_C::M_SetCurrentVillageIntensity(const float& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of TargetForestIntensity
// Declaration: float TargetForestIntensity
float ABP_PlayerManager_C::M_GetTargetForestIntensity() const {
	return Read<float>((byte*)this + 788);
}
float* ABP_PlayerManager_C::M_PtrGetTargetForestIntensity() {
	return reinterpret_cast<float*>((byte*)this + 788);
}
void ABP_PlayerManager_C::M_SetTargetForestIntensity(const float& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of TargetVillageIntensity
// Declaration: float TargetVillageIntensity
float ABP_PlayerManager_C::M_GetTargetVillageIntensity() const {
	return Read<float>((byte*)this + 792);
}
float* ABP_PlayerManager_C::M_PtrGetTargetVillageIntensity() {
	return reinterpret_cast<float*>((byte*)this + 792);
}
void ABP_PlayerManager_C::M_SetTargetVillageIntensity(const float& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of AmbientBlendSpeed
// Declaration: float AmbientBlendSpeed
float ABP_PlayerManager_C::M_GetAmbientBlendSpeed() const {
	return Read<float>((byte*)this + 796);
}
float* ABP_PlayerManager_C::M_PtrGetAmbientBlendSpeed() {
	return reinterpret_cast<float*>((byte*)this + 796);
}
void ABP_PlayerManager_C::M_SetAmbientBlendSpeed(const float& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of NumberOfGeneration
// Declaration: int32_t NumberOfGeneration
int32_t ABP_PlayerManager_C::M_GetNumberOfGeneration() const {
	return Read<int32_t>((byte*)this + 800);
}
int32_t* ABP_PlayerManager_C::M_PtrGetNumberOfGeneration() {
	return reinterpret_cast<int32_t*>((byte*)this + 800);
}
void ABP_PlayerManager_C::M_SetNumberOfGeneration(const int32_t& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of AffectionBonus
// Declaration: int32_t AffectionBonus
int32_t ABP_PlayerManager_C::M_GetAffectionBonus() const {
	return Read<int32_t>((byte*)this + 804);
}
int32_t* ABP_PlayerManager_C::M_PtrGetAffectionBonus() {
	return reinterpret_cast<int32_t*>((byte*)this + 804);
}
void ABP_PlayerManager_C::M_SetAffectionBonus(const int32_t& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of FullscreenTutorials
// Declaration: TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> FullscreenTutorials
TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> ABP_PlayerManager_C::M_GetFullscreenTutorials() const {
	return Read<TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>>((byte*)this + 808);
}
TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>* ABP_PlayerManager_C::M_PtrGetFullscreenTutorials() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>*>((byte*)this + 808);
}
void ABP_PlayerManager_C::M_SetFullscreenTutorials(const TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of BorderPoints
// Declaration: TArray<struct FVector> BorderPoints
TArray<struct FVector> ABP_PlayerManager_C::M_GetBorderPoints() const {
	return Read<TArray<struct FVector>>((byte*)this + 888);
}
TArray<struct FVector>* ABP_PlayerManager_C::M_PtrGetBorderPoints() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 888);
}
void ABP_PlayerManager_C::M_SetBorderPoints(const TArray<struct FVector>& value) {
	Write((byte*)this + 888, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::ExecuteUbergraph_BP_PlayerManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager");

	struct ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params params;
	params.EntryPoint = EntryPoint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature");

	struct ABP_PlayerManager_C_BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature_Params {
	};
	ABP_PlayerManager_C_BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StopInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorMode");

	struct ABP_PlayerManager_C_StopInspectorMode_Params {
	};
	ABP_PlayerManager_C_StopInspectorMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OnQueryFinishedEvent_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: QueryInstance	Type: class UEnvQueryInstanceBlueprintWrapper*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QueryStatus	Type: TEnumAsByte<EEnvQueryStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OnQueryFinishedEvent_Event");

	struct ABP_PlayerManager_C_OnQueryFinishedEvent_Event_Params {
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EEnvQueryStatus> QueryStatus;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerManager_C_OnQueryFinishedEvent_Event_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.DisableNightVision
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::DisableNightVision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.DisableNightVision");

	struct ABP_PlayerManager_C_DisableNightVision_Params {
	};
	ABP_PlayerManager_C_DisableNightVision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.EnableNightVision
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::EnableNightVision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.EnableNightVision");

	struct ABP_PlayerManager_C_EnableNightVision_Params {
	};
	ABP_PlayerManager_C_EnableNightVision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ResetAmbientParameters
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ResetAmbientParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ResetAmbientParameters");

	struct ABP_PlayerManager_C_ResetAmbientParameters_Params {
	};
	ABP_PlayerManager_C_ResetAmbientParameters_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnTimeChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IteratorNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateOnTimeChanged(int32_t IteratorNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnTimeChanged");

	struct ABP_PlayerManager_C_UpdateOnTimeChanged_Params {
		int32_t IteratorNumber;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerManager_C_UpdateOnTimeChanged_Params params;
	params.IteratorNumber = IteratorNumber;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_CheckIsMove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StopTimer_CheckIsMove() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_CheckIsMove");

	struct ABP_PlayerManager_C_StopTimer_CheckIsMove_Params {
	};
	ABP_PlayerManager_C_StopTimer_CheckIsMove_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsMove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIsMove() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsMove");

	struct ABP_PlayerManager_C_CheckIsMove_Params {
	};
	ABP_PlayerManager_C_CheckIsMove_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_CheckIsMove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartTimer_CheckIsMove() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_CheckIsMove");

	struct ABP_PlayerManager_C_StartTimer_CheckIsMove_Params {
	};
	ABP_PlayerManager_C_StartTimer_CheckIsMove_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_PlayerStay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StopTimer_PlayerStay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_PlayerStay");

	struct ABP_PlayerManager_C_StopTimer_PlayerStay_Params {
	};
	ABP_PlayerManager_C_StopTimer_PlayerStay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateAmbientParameters
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateAmbientParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateAmbientParameters");

	struct ABP_PlayerManager_C_UpdateAmbientParameters_Params {
	};
	ABP_PlayerManager_C_UpdateAmbientParameters_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_PlayerMove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartTimer_PlayerMove() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_PlayerMove");

	struct ABP_PlayerManager_C_StartTimer_PlayerMove_Params {
	};
	ABP_PlayerManager_C_StartTimer_PlayerMove_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SummonMount
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::SummonMount() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SummonMount");

	struct ABP_PlayerManager_C_SummonMount_Params {
	};
	ABP_PlayerManager_C_SummonMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged");

	struct ABP_PlayerManager_C_UpdateOnSeasonChanged_Params {
	};
	ABP_PlayerManager_C_UpdateOnSeasonChanged_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartPlayerManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager");

	struct ABP_PlayerManager_C_StartPlayerManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerManager_C_StartPlayerManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StopAnimation_InspectorMode
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StopAnimation_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopAnimation_InspectorMode");

	struct ABP_PlayerManager_C_StopAnimation_InspectorMode_Params {
	};
	ABP_PlayerManager_C_StopAnimation_InspectorMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.PlayAnimation_InspectorMode
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::PlayAnimation_InspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.PlayAnimation_InspectorMode");

	struct ABP_PlayerManager_C_PlayAnimation_InspectorMode_Params {
	};
	ABP_PlayerManager_C_PlayAnimation_InspectorMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateInspector
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateInspector() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateInspector");

	struct ABP_PlayerManager_C_UpdateInspector_Params {
	};
	ABP_PlayerManager_C_UpdateInspector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StopInspectorTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorTimer");

	struct ABP_PlayerManager_C_StopInspectorTimer_Params {
	};
	ABP_PlayerManager_C_StopInspectorTimer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartInspectorTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorTimer");

	struct ABP_PlayerManager_C_StartInspectorTimer_Params {
	};
	ABP_PlayerManager_C_StartInspectorTimer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SetBuildingMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::SetBuildingMode(TEnumAsByte<E_BuildingModifications> BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SetBuildingMode");

	struct ABP_PlayerManager_C_SetBuildingMode_Params {
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_SetBuildingMode_Params params;
	params.BuildingMode = BuildingMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay");

	struct ABP_PlayerManager_C_ReceiveBeginPlay_Params {
	};
	ABP_PlayerManager_C_ReceiveBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartInspectorMode() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorMode");

	struct ABP_PlayerManager_C_StartInspectorMode_Params {
	};
	ABP_PlayerManager_C_StartInspectorMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.NightVisionIntensity__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::NightVisionIntensity__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.NightVisionIntensity__UpdateFunc");

	struct ABP_PlayerManager_C_NightVisionIntensity__UpdateFunc_Params {
	};
	ABP_PlayerManager_C_NightVisionIntensity__UpdateFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.NightVisionIntensity__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::NightVisionIntensity__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.NightVisionIntensity__FinishedFunc");

	struct ABP_PlayerManager_C_NightVisionIntensity__FinishedFunc_Params {
	};
	ABP_PlayerManager_C_NightVisionIntensity__FinishedFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InspectorIntensity__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__UpdateFunc");

	struct ABP_PlayerManager_C_InspectorIntensity__UpdateFunc_Params {
	};
	ABP_PlayerManager_C_InspectorIntensity__UpdateFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InspectorIntensity__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__FinishedFunc");

	struct ABP_PlayerManager_C_InspectorIntensity__FinishedFunc_Params {
	};
	ABP_PlayerManager_C_InspectorIntensity__FinishedFunc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Init");

	struct ABP_PlayerManager_C_Init_Params {
	};
	ABP_PlayerManager_C_Init_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreatePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer");

	struct ABP_PlayerManager_C_CreatePlayer_Params {
	};
	ABP_PlayerManager_C_CreatePlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InitPlayerHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD");

	struct ABP_PlayerManager_C_InitPlayerHUD_Params {
	};
	ABP_PlayerManager_C_InitPlayerHUD_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::Spawn_Player(class AController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player");

	struct ABP_PlayerManager_C_Spawn_Player_Params {
		class AController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_Spawn_Player_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile");

	struct ABP_PlayerManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem");

	struct ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Load Save File Into System Finishing
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::Load_Save_File_Into_System_Finishing(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Load Save File Into System Finishing");

	struct ABP_PlayerManager_C_Load_Save_File_Into_System_Finishing_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_Load_Save_File_Into_System_Finishing_Params params;
	params.SaveReference = SaveReference;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SwitchToHeir
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::SwitchToHeir(class ABP_BaseCharacter_C* Heir, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SwitchToHeir");

	struct ABP_PlayerManager_C_SwitchToHeir_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerManager_C_SwitchToHeir_Params params;
	params.Heir = Heir;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SwitchPlayerAndHeir
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::SwitchPlayerAndHeir(class ABP_BaseCharacter_C* Heir, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SwitchPlayerAndHeir");

	struct ABP_PlayerManager_C_SwitchPlayerAndHeir_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerManager_C_SwitchPlayerAndHeir_Params params;
	params.Heir = Heir;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InspectorDetection
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InspectorDetection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorDetection");

	struct ABP_PlayerManager_C_InspectorDetection_Params {
	};
	ABP_PlayerManager_C_InspectorDetection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::TeleportPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayer");

	struct ABP_PlayerManager_C_TeleportPlayer_Params {
	};
	ABP_PlayerManager_C_TeleportPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FullscreenMessage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::TryToCreateHUDTutorial(TEnumAsByte<E_Tutorials> Tutorial, bool FullscreenMessage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial");

	struct ABP_PlayerManager_C_TryToCreateHUDTutorial_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool FullscreenMessage;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerManager_C_TryToCreateHUDTutorial_Params params;
	params.Tutorial = Tutorial;
	params.FullscreenMessage = FullscreenMessage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIsHeir(bool* Success, class ABP_BaseCharacter_C** Heir) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir");

	struct ABP_PlayerManager_C_CheckIsHeir_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class ABP_BaseCharacter_C* Heir;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerManager_C_CheckIsHeir_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Success != nullptr)
		*Success = params.Success;
	if (Heir != nullptr)
		*Heir = params.Heir;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CanMoveMountToPlayer
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
// Name: TargetLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerManager_C::CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CanMoveMountToPlayer");

	struct ABP_PlayerManager_C_CanMoveMountToPlayer_Params {
		struct FVector TargetLocation;			//Offset: 4 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 16 | ElementSize: 12
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_CanMoveMountToPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.FindRandomPointForMount
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RandomLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::FindRandomPointForMount(struct FVector* RandomLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.FindRandomPointForMount");

	struct ABP_PlayerManager_C_FindRandomPointForMount_Params {
		struct FVector RandomLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_PlayerManager_C_FindRandomPointForMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateForestIntensity
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateForestIntensity() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateForestIntensity");

	struct ABP_PlayerManager_C_UpdateForestIntensity_Params {
	};
	ABP_PlayerManager_C_UpdateForestIntensity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateVillageIntensity
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateVillageIntensity() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateVillageIntensity");

	struct ABP_PlayerManager_C_UpdateVillageIntensity_Params {
	};
	ABP_PlayerManager_C_UpdateVillageIntensity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.IsMove
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::IsMove() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.IsMove");

	struct ABP_PlayerManager_C_IsMove_Params {
	};
	ABP_PlayerManager_C_IsMove_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.HideRoads
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Visibility	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::HideRoads(bool Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.HideRoads");

	struct ABP_PlayerManager_C_HideRoads_Params {
		bool Visibility;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_HideRoads_Params params;
	params.Visibility = Visibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.HideFields
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Visibility	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::HideFields(bool Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.HideFields");

	struct ABP_PlayerManager_C_HideFields_Params {
		bool Visibility;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_HideFields_Params params;
	params.Visibility = Visibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.FixAffectionBonus
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::FixAffectionBonus(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.FixAffectionBonus");

	struct ABP_PlayerManager_C_FixAffectionBonus_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerManager_C_FixAffectionBonus_Params params;
	params.SaveGameVersion = SaveGameVersion;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ReloadHeirsHeadAndHair
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::ReloadHeirsHeadAndHair(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ReloadHeirsHeadAndHair");

	struct ABP_PlayerManager_C_ReloadHeirsHeadAndHair_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerManager_C_ReloadHeirsHeadAndHair_Params params;
	params.SaveGameVersion = SaveGameVersion;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.GetMapBorderPoints
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::GetMapBorderPoints() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.GetMapBorderPoints");

	struct ABP_PlayerManager_C_GetMapBorderPoints_Params {
	};
	ABP_PlayerManager_C_GetMapBorderPoints_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// ComponentDelegateBinding BP_PlayerManager.BP_PlayerManager_C.ComponentDelegateBinding_1
// Flags: Final
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ComponentDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("ComponentDelegateBinding BP_PlayerManager.BP_PlayerManager_C.ComponentDelegateBinding_1");

	struct ABP_PlayerManager_C_ComponentDelegateBinding_1_Params {
	};
	ABP_PlayerManager_C_ComponentDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}