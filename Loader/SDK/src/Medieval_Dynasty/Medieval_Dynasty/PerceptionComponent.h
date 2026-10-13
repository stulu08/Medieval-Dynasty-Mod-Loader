#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionComponent
// Super: Class Engine.ActorComponent
// Size: 552
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionComponent : public UActorComponent {
public:
#pragma region Members
	//TMap<class AActor*, struct FPerceptionSensesStimulationData>	sensedActors;		//Offset: 176	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<class AActor*, struct FPerceptionSensesStimulationData> M_GetsensedActors() const;
	TMap<class AActor*, struct FPerceptionSensesStimulationData>* M_PtrGetsensedActors();
	void M_SetsensedActors(const TMap<class AActor*, struct FPerceptionSensesStimulationData>& value);

	//TArray<class UPerceptionStimuliSourceComponent*>	perceptibleStimuliSourceComponents;		//Offset: 256	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UPerceptionStimuliSourceComponent*> M_GetperceptibleStimuliSourceComponents() const;
	TArray<class UPerceptionStimuliSourceComponent*>* M_PtrGetperceptibleStimuliSourceComponents();
	void M_SetperceptibleStimuliSourceComponents(const TArray<class UPerceptionStimuliSourceComponent*>& value);

	//bool	shouldHandlePerceptionComponentRegistration;		//Offset: 320	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetshouldHandlePerceptionComponentRegistration() const;
	bool* M_PtrGetshouldHandlePerceptionComponentRegistration();
	void M_SetshouldHandlePerceptionComponentRegistration(const bool& value);

	//int32_t	perceptibleStimuliSourceTypes;		//Offset: 324	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetperceptibleStimuliSourceTypes() const;
	int32_t* M_PtrGetperceptibleStimuliSourceTypes();
	void M_SetperceptibleStimuliSourceTypes(const int32_t& value);

	//float	maxPerceptibleObjectDistance;		//Offset: 328	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxPerceptibleObjectDistance() const;
	float* M_PtrGetmaxPerceptibleObjectDistance();
	void M_SetmaxPerceptibleObjectDistance(const float& value);

	//float	perceptibleObjectsUpdateInterval;		//Offset: 332	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetperceptibleObjectsUpdateInterval() const;
	float* M_PtrGetperceptibleObjectsUpdateInterval();
	void M_SetperceptibleObjectsUpdateInterval(const float& value);

	//float	perceptibleObjectsUpdateIntervalMaxRandomDeviation;		//Offset: 336	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetperceptibleObjectsUpdateIntervalMaxRandomDeviation() const;
	float* M_PtrGetperceptibleObjectsUpdateIntervalMaxRandomDeviation();
	void M_SetperceptibleObjectsUpdateIntervalMaxRandomDeviation(const float& value);

	//struct FName	skinnedMeshComponentName;		//Offset: 340	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetskinnedMeshComponentName() const;
	struct FName* M_PtrGetskinnedMeshComponentName();
	void M_SetskinnedMeshComponentName(const struct FName& value);

	//struct FName	senseParentSocketName;		//Offset: 348	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetsenseParentSocketName() const;
	struct FName* M_PtrGetsenseParentSocketName();
	void M_SetsenseParentSocketName(const struct FName& value);

	//struct FVector	relativeSenseLocation;		//Offset: 356	Size: 12	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetrelativeSenseLocation() const;
	struct FVector* M_PtrGetrelativeSenseLocation();
	void M_SetrelativeSenseLocation(const struct FVector& value);

	//struct FRotator	relativeSenseRotation;		//Offset: 368	Size: 12	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetrelativeSenseRotation() const;
	struct FRotator* M_PtrGetrelativeSenseRotation();
	void M_SetrelativeSenseRotation(const struct FRotator& value);

	//float	senseStimulationExpireDelay;		//Offset: 380	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsenseStimulationExpireDelay() const;
	float* M_PtrGetsenseStimulationExpireDelay();
	void M_SetsenseStimulationExpireDelay(const float& value);

	//TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>	senses;		//Offset: 384	Size: 80	Flags: Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970> M_Getsenses() const;
	TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>* M_PtrGetsenses();
	void M_Setsenses(const TAssetPtr<class FB_AimPose_Fem_TP_Mid_7929970>& value);

	//bool	isDebugEnabled;		//Offset: 464	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//bool	debugShowSensedActors;		//Offset: 465	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedActors() const;
	bool* M_PtrGetdebugShowSensedActors();
	void M_SetdebugShowSensedActors(const bool& value);

	//bool	debugShowSensedActorArrows;		//Offset: 466	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedActorArrows() const;
	bool* M_PtrGetdebugShowSensedActorArrows();
	void M_SetdebugShowSensedActorArrows(const bool& value);

	//bool	debugShowSensedActorStimulationDataArrows;		//Offset: 467	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedActorStimulationDataArrows() const;
	bool* M_PtrGetdebugShowSensedActorStimulationDataArrows();
	void M_SetdebugShowSensedActorStimulationDataArrows(const bool& value);

	//bool	debugShowSensedActorStimulationDataTexts;		//Offset: 468	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedActorStimulationDataTexts() const;
	bool* M_PtrGetdebugShowSensedActorStimulationDataTexts();
	void M_SetdebugShowSensedActorStimulationDataTexts(const bool& value);

	//TAssetPtr<class FOnActorSensedInitial__DelegateSignature>	onActorSensedInitial;		//Offset: 472	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnActorSensedInitial__DelegateSignature> M_GetonActorSensedInitial() const;
	TAssetPtr<class FOnActorSensedInitial__DelegateSignature>* M_PtrGetonActorSensedInitial();
	void M_SetonActorSensedInitial(const TAssetPtr<class FOnActorSensedInitial__DelegateSignature>& value);

	//TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>	onActorSensedInitialForSense;		//Offset: 488	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature> M_GetonActorSensedInitialForSense() const;
	TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>* M_PtrGetonActorSensedInitialForSense();
	void M_SetonActorSensedInitialForSense(const TAssetPtr<class FOnActorSensedInitialForSense__DelegateSignature>& value);

	//TAssetPtr<class FOnActorSensed__DelegateSignature>	OnActorSensed;		//Offset: 504	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnActorSensed__DelegateSignature> M_GetOnActorSensed() const;
	TAssetPtr<class FOnActorSensed__DelegateSignature>* M_PtrGetOnActorSensed();
	void M_SetOnActorSensed(const TAssetPtr<class FOnActorSensed__DelegateSignature>& value);

	//TAssetPtr<class FOnActorLost__DelegateSignature>	onActorLost;		//Offset: 520	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnActorLost__DelegateSignature> M_GetonActorLost() const;
	TAssetPtr<class FOnActorLost__DelegateSignature>* M_PtrGetonActorLost();
	void M_SetonActorLost(const TAssetPtr<class FOnActorLost__DelegateSignature>& value);

	//TAssetPtr<class FOnActorLostBySense__DelegateSignature>	onActorLostBySense;		//Offset: 536	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnActorLostBySense__DelegateSignature> M_GetonActorLostBySense() const;
	TAssetPtr<class FOnActorLostBySense__DelegateSignature>* M_PtrGetonActorLostBySense();
	void M_SetonActorLostBySense(const TAssetPtr<class FOnActorLostBySense__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionComponent");
		return ptr;
	}

#pragma region Functions
	void FindRecentStimulatedSenseData(class AActor* sensedActor, class UPerceptionSense** senseClass, struct FPerceptionSenseStimulationData* senseStimulationData, bool* wasSensed);

	void FindStimulatedSenses(class AActor* sensedActor, TMap<class UPerceptionSense*, struct FPerceptionSenseStimulationData>* outStimulatedSenses, bool* hasFoundStimulatedSenses)/* const*/;

	TAssetPtr<class FNone_128> GetSensedActors()/* const*/;

	TAssetPtr<class FNone_128> GetSenses()/* const*/;

	bool IsSenseEnabled(class UPerceptionSense* senseClass)/* const*/;

	void SetIsSenseEnabled(class UPerceptionSense* senseClass, bool newIsSenseEnabled);

#pragma endregion
};
};