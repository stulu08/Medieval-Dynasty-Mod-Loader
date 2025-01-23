#include "../SDK.h"
#include "PerceptionComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of sensedActors
// Declaration: TMap<class AActor*, struct FPerceptionSensesStimulationData> sensedActors
TMap<class AActor*, struct FPerceptionSensesStimulationData> UPerceptionComponent::M_GetsensedActors() const {
	return Read<TMap<class AActor*, struct FPerceptionSensesStimulationData>>((byte*)this + 176);
}
TMap<class AActor*, struct FPerceptionSensesStimulationData>* UPerceptionComponent::M_PtrGetsensedActors() {
	return reinterpret_cast<TMap<class AActor*, struct FPerceptionSensesStimulationData>*>((byte*)this + 176);
}
void UPerceptionComponent::M_SetsensedActors(const TMap<class AActor*, struct FPerceptionSensesStimulationData>& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of perceptibleStimuliSourceComponents
// Declaration: TArray<class UPerceptionStimuliSourceComponent*> perceptibleStimuliSourceComponents
TArray<class UPerceptionStimuliSourceComponent*> UPerceptionComponent::M_GetperceptibleStimuliSourceComponents() const {
	return Read<TArray<class UPerceptionStimuliSourceComponent*>>((byte*)this + 256);
}
TArray<class UPerceptionStimuliSourceComponent*>* UPerceptionComponent::M_PtrGetperceptibleStimuliSourceComponents() {
	return reinterpret_cast<TArray<class UPerceptionStimuliSourceComponent*>*>((byte*)this + 256);
}
void UPerceptionComponent::M_SetperceptibleStimuliSourceComponents(const TArray<class UPerceptionStimuliSourceComponent*>& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of shouldHandlePerceptionComponentRegistration
// Declaration: bool shouldHandlePerceptionComponentRegistration
bool UPerceptionComponent::M_GetshouldHandlePerceptionComponentRegistration() const {
	return Read<bool>((byte*)this + 320);
}
bool* UPerceptionComponent::M_PtrGetshouldHandlePerceptionComponentRegistration() {
	return reinterpret_cast<bool*>((byte*)this + 320);
}
void UPerceptionComponent::M_SetshouldHandlePerceptionComponentRegistration(const bool& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of perceptibleStimuliSourceTypes
// Declaration: int32_t perceptibleStimuliSourceTypes
int32_t UPerceptionComponent::M_GetperceptibleStimuliSourceTypes() const {
	return Read<int32_t>((byte*)this + 324);
}
int32_t* UPerceptionComponent::M_PtrGetperceptibleStimuliSourceTypes() {
	return reinterpret_cast<int32_t*>((byte*)this + 324);
}
void UPerceptionComponent::M_SetperceptibleStimuliSourceTypes(const int32_t& value) {
	Write((byte*)this + 324, value);
}
// Member Getter and Setter of maxPerceptibleObjectDistance
// Declaration: float maxPerceptibleObjectDistance
float UPerceptionComponent::M_GetmaxPerceptibleObjectDistance() const {
	return Read<float>((byte*)this + 328);
}
float* UPerceptionComponent::M_PtrGetmaxPerceptibleObjectDistance() {
	return reinterpret_cast<float*>((byte*)this + 328);
}
void UPerceptionComponent::M_SetmaxPerceptibleObjectDistance(const float& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of perceptibleObjectsUpdateInterval
// Declaration: float perceptibleObjectsUpdateInterval
float UPerceptionComponent::M_GetperceptibleObjectsUpdateInterval() const {
	return Read<float>((byte*)this + 332);
}
float* UPerceptionComponent::M_PtrGetperceptibleObjectsUpdateInterval() {
	return reinterpret_cast<float*>((byte*)this + 332);
}
void UPerceptionComponent::M_SetperceptibleObjectsUpdateInterval(const float& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of perceptibleObjectsUpdateIntervalMaxRandomDeviation
// Declaration: float perceptibleObjectsUpdateIntervalMaxRandomDeviation
float UPerceptionComponent::M_GetperceptibleObjectsUpdateIntervalMaxRandomDeviation() const {
	return Read<float>((byte*)this + 336);
}
float* UPerceptionComponent::M_PtrGetperceptibleObjectsUpdateIntervalMaxRandomDeviation() {
	return reinterpret_cast<float*>((byte*)this + 336);
}
void UPerceptionComponent::M_SetperceptibleObjectsUpdateIntervalMaxRandomDeviation(const float& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of skinnedMeshComponentName
// Declaration: struct FName skinnedMeshComponentName
struct FName UPerceptionComponent::M_GetskinnedMeshComponentName() const {
	return Read<struct FName>((byte*)this + 340);
}
struct FName* UPerceptionComponent::M_PtrGetskinnedMeshComponentName() {
	return reinterpret_cast<struct FName*>((byte*)this + 340);
}
void UPerceptionComponent::M_SetskinnedMeshComponentName(const struct FName& value) {
	Write((byte*)this + 340, value);
}
// Member Getter and Setter of senseParentSocketName
// Declaration: struct FName senseParentSocketName
struct FName UPerceptionComponent::M_GetsenseParentSocketName() const {
	return Read<struct FName>((byte*)this + 348);
}
struct FName* UPerceptionComponent::M_PtrGetsenseParentSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 348);
}
void UPerceptionComponent::M_SetsenseParentSocketName(const struct FName& value) {
	Write((byte*)this + 348, value);
}
// Member Getter and Setter of relativeSenseLocation
// Declaration: struct FVector relativeSenseLocation
struct FVector UPerceptionComponent::M_GetrelativeSenseLocation() const {
	return Read<struct FVector>((byte*)this + 356);
}
struct FVector* UPerceptionComponent::M_PtrGetrelativeSenseLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 356);
}
void UPerceptionComponent::M_SetrelativeSenseLocation(const struct FVector& value) {
	Write((byte*)this + 356, value);
}
// Member Getter and Setter of relativeSenseRotation
// Declaration: struct FRotator relativeSenseRotation
struct FRotator UPerceptionComponent::M_GetrelativeSenseRotation() const {
	return Read<struct FRotator>((byte*)this + 368);
}
struct FRotator* UPerceptionComponent::M_PtrGetrelativeSenseRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 368);
}
void UPerceptionComponent::M_SetrelativeSenseRotation(const struct FRotator& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of senseStimulationExpireDelay
// Declaration: float senseStimulationExpireDelay
float UPerceptionComponent::M_GetsenseStimulationExpireDelay() const {
	return Read<float>((byte*)this + 380);
}
float* UPerceptionComponent::M_PtrGetsenseStimulationExpireDelay() {
	return reinterpret_cast<float*>((byte*)this + 380);
}
void UPerceptionComponent::M_SetsenseStimulationExpireDelay(const float& value) {
	Write((byte*)this + 380, value);
}
// Member Getter and Setter of senses
// Declaration: TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970> senses
TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970> UPerceptionComponent::M_Getsenses() const {
	return Read<TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>>((byte*)this + 384);
}
TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>* UPerceptionComponent::M_PtrGetsenses() {
	return reinterpret_cast<TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>*>((byte*)this + 384);
}
void UPerceptionComponent::M_Setsenses(const TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>& value) {
	Write((byte*)this + 384, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UPerceptionComponent::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 464);
}
bool* UPerceptionComponent::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 464);
}
void UPerceptionComponent::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 464, value);
}
// Member Getter and Setter of debugShowSensedActors
// Declaration: bool debugShowSensedActors
bool UPerceptionComponent::M_GetdebugShowSensedActors() const {
	return Read<bool>((byte*)this + 465);
}
bool* UPerceptionComponent::M_PtrGetdebugShowSensedActors() {
	return reinterpret_cast<bool*>((byte*)this + 465);
}
void UPerceptionComponent::M_SetdebugShowSensedActors(const bool& value) {
	Write((byte*)this + 465, value);
}
// Member Getter and Setter of debugShowSensedActorArrows
// Declaration: bool debugShowSensedActorArrows
bool UPerceptionComponent::M_GetdebugShowSensedActorArrows() const {
	return Read<bool>((byte*)this + 466);
}
bool* UPerceptionComponent::M_PtrGetdebugShowSensedActorArrows() {
	return reinterpret_cast<bool*>((byte*)this + 466);
}
void UPerceptionComponent::M_SetdebugShowSensedActorArrows(const bool& value) {
	Write((byte*)this + 466, value);
}
// Member Getter and Setter of debugShowSensedActorStimulationDataArrows
// Declaration: bool debugShowSensedActorStimulationDataArrows
bool UPerceptionComponent::M_GetdebugShowSensedActorStimulationDataArrows() const {
	return Read<bool>((byte*)this + 467);
}
bool* UPerceptionComponent::M_PtrGetdebugShowSensedActorStimulationDataArrows() {
	return reinterpret_cast<bool*>((byte*)this + 467);
}
void UPerceptionComponent::M_SetdebugShowSensedActorStimulationDataArrows(const bool& value) {
	Write((byte*)this + 467, value);
}
// Member Getter and Setter of debugShowSensedActorStimulationDataTexts
// Declaration: bool debugShowSensedActorStimulationDataTexts
bool UPerceptionComponent::M_GetdebugShowSensedActorStimulationDataTexts() const {
	return Read<bool>((byte*)this + 468);
}
bool* UPerceptionComponent::M_PtrGetdebugShowSensedActorStimulationDataTexts() {
	return reinterpret_cast<bool*>((byte*)this + 468);
}
void UPerceptionComponent::M_SetdebugShowSensedActorStimulationDataTexts(const bool& value) {
	Write((byte*)this + 468, value);
}
// Member Getter and Setter of onActorSensedInitial
// Declaration: TAssetPtr<class FOnActorSensedInitial__DelegateSignature> onActorSensedInitial
TAssetPtr<class FOnActorSensedInitial__DelegateSignature> UPerceptionComponent::M_GetonActorSensedInitial() const {
	return Read<TAssetPtr<class FOnActorSensedInitial__DelegateSignature>>((byte*)this + 472);
}
TAssetPtr<class FOnActorSensedInitial__DelegateSignature>* UPerceptionComponent::M_PtrGetonActorSensedInitial() {
	return reinterpret_cast<TAssetPtr<class FOnActorSensedInitial__DelegateSignature>*>((byte*)this + 472);
}
void UPerceptionComponent::M_SetonActorSensedInitial(const TAssetPtr<class FOnActorSensedInitial__DelegateSignature>& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of onActorSensedInitialForSense
// Declaration: TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature> onActorSensedInitialForSense
TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature> UPerceptionComponent::M_GetonActorSensedInitialForSense() const {
	return Read<TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>>((byte*)this + 488);
}
TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>* UPerceptionComponent::M_PtrGetonActorSensedInitialForSense() {
	return reinterpret_cast<TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>*>((byte*)this + 488);
}
void UPerceptionComponent::M_SetonActorSensedInitialForSense(const TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>& value) {
	Write((byte*)this + 488, value);
}
// Member Getter and Setter of OnActorSensed
// Declaration: TAssetPtr<class FOnActorSensed__DelegateSignature> OnActorSensed
TAssetPtr<class FOnActorSensed__DelegateSignature> UPerceptionComponent::M_GetOnActorSensed() const {
	return Read<TAssetPtr<class FOnActorSensed__DelegateSignature>>((byte*)this + 504);
}
TAssetPtr<class FOnActorSensed__DelegateSignature>* UPerceptionComponent::M_PtrGetOnActorSensed() {
	return reinterpret_cast<TAssetPtr<class FOnActorSensed__DelegateSignature>*>((byte*)this + 504);
}
void UPerceptionComponent::M_SetOnActorSensed(const TAssetPtr<class FOnActorSensed__DelegateSignature>& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of onActorLost
// Declaration: TAssetPtr<class FOnActorLost__DelegateSignature> onActorLost
TAssetPtr<class FOnActorLost__DelegateSignature> UPerceptionComponent::M_GetonActorLost() const {
	return Read<TAssetPtr<class FOnActorLost__DelegateSignature>>((byte*)this + 520);
}
TAssetPtr<class FOnActorLost__DelegateSignature>* UPerceptionComponent::M_PtrGetonActorLost() {
	return reinterpret_cast<TAssetPtr<class FOnActorLost__DelegateSignature>*>((byte*)this + 520);
}
void UPerceptionComponent::M_SetonActorLost(const TAssetPtr<class FOnActorLost__DelegateSignature>& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of onActorLostBySense
// Declaration: TAssetPtr<class FOnActorLostBySense__DelegateSignature> onActorLostBySense
TAssetPtr<class FOnActorLostBySense__DelegateSignature> UPerceptionComponent::M_GetonActorLostBySense() const {
	return Read<TAssetPtr<class FOnActorLostBySense__DelegateSignature>>((byte*)this + 536);
}
TAssetPtr<class FOnActorLostBySense__DelegateSignature>* UPerceptionComponent::M_PtrGetonActorLostBySense() {
	return reinterpret_cast<TAssetPtr<class FOnActorLostBySense__DelegateSignature>*>((byte*)this + 536);
}
void UPerceptionComponent::M_SetonActorLostBySense(const TAssetPtr<class FOnActorLostBySense__DelegateSignature>& value) {
	Write((byte*)this + 536, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.FindRecentStimulatedSenseData
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: sensedActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: senseClass	Type: class UPerceptionSense*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: senseStimulationData	Type: struct FPerceptionSenseStimulationData	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: wasSensed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionComponent::FindRecentStimulatedSenseData(class AActor* sensedActor, class UPerceptionSense** senseClass, struct FPerceptionSenseStimulationData* senseStimulationData, bool* wasSensed) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.FindRecentStimulatedSenseData");

	struct UPerceptionComponent_FindRecentStimulatedSenseData_Params {
		class AActor* sensedActor;			//Offset: 0 | ElementSize: 8
		class UPerceptionSense* senseClass;			//Offset: 8 | ElementSize: 8
		struct FPerceptionSenseStimulationData senseStimulationData;			//Offset: 16 | ElementSize: 56
		bool wasSensed;			//Offset: 72 | ElementSize: 1
	};
	UPerceptionComponent_FindRecentStimulatedSenseData_Params params;
	params.sensedActor = sensedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (senseClass != nullptr)
		*senseClass = params.senseClass;
	if (senseStimulationData != nullptr)
		*senseStimulationData = params.senseStimulationData;
	if (wasSensed != nullptr)
		*wasSensed = params.wasSensed;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.FindStimulatedSenses
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: sensedActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: outStimulatedSenses	Type: TMap<class UPerceptionSense*, struct FPerceptionSenseStimulationData>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: hasFoundStimulatedSenses	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionComponent::FindStimulatedSenses(class AActor* sensedActor, TMap<class UPerceptionSense*, struct FPerceptionSenseStimulationData>* outStimulatedSenses, bool* hasFoundStimulatedSenses)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.FindStimulatedSenses");

	struct UPerceptionComponent_FindStimulatedSenses_Params {
		class AActor* sensedActor;			//Offset: 0 | ElementSize: 8
		TMap<class UPerceptionSense*, struct FPerceptionSenseStimulationData> outStimulatedSenses;			//Offset: 8 | ElementSize: 80
		bool hasFoundStimulatedSenses;			//Offset: 88 | ElementSize: 1
	};
	UPerceptionComponent_FindStimulatedSenses_Params params;
	params.sensedActor = sensedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (outStimulatedSenses != nullptr)
		*outStimulatedSenses = params.outStimulatedSenses;
	if (hasFoundStimulatedSenses != nullptr)
		*hasFoundStimulatedSenses = params.hasFoundStimulatedSenses;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.GetSensedActors
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TAssetPtr<class FNone_128>	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class FNone_128> UPerceptionComponent::GetSensedActors()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.GetSensedActors");

	struct UPerceptionComponent_GetSensedActors_Params {
		TAssetPtr<class FNone_128> ReturnValue;			//Offset: 0 | ElementSize: 80
	};
	UPerceptionComponent_GetSensedActors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.GetSenses
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TAssetPtr<class FNone_128>	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class FNone_128> UPerceptionComponent::GetSenses()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.GetSenses");

	struct UPerceptionComponent_GetSenses_Params {
		TAssetPtr<class FNone_128> ReturnValue;			//Offset: 0 | ElementSize: 80
	};
	UPerceptionComponent_GetSenses_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.IsSenseEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: senseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPerceptionComponent::IsSenseEnabled(class UPerceptionSense* senseClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.IsSenseEnabled");

	struct UPerceptionComponent_IsSenseEnabled_Params {
		class UPerceptionSense* senseClass;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPerceptionComponent_IsSenseEnabled_Params params;
	params.senseClass = senseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionComponent.SetIsSenseEnabled
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: senseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newIsSenseEnabled	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionComponent::SetIsSenseEnabled(class UPerceptionSense* senseClass, bool newIsSenseEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionComponent.SetIsSenseEnabled");

	struct UPerceptionComponent_SetIsSenseEnabled_Params {
		class UPerceptionSense* senseClass;			//Offset: 0 | ElementSize: 8
		bool newIsSenseEnabled;			//Offset: 8 | ElementSize: 1
	};
	UPerceptionComponent_SetIsSenseEnabled_Params params;
	params.senseClass = senseClass;
	params.newIsSenseEnabled = newIsSenseEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}