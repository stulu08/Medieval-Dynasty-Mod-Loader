#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C
// Super: Class Engine.Actor
// Size: 904
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_PlayerManager_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UAudioComponent*	Ambient;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetAmbient() const;
	class UAudioComponent** M_PtrGetAmbient();
	void M_SetAmbient(const class UAudioComponent*& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//float	InspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1;		//Offset: 568	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1() const;
	float* M_PtrGetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1();
	void M_SetInspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1(const float& value);

	//TEnumAsByte<ETimelineDirection>	InspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1;		//Offset: 572	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1();
	void M_SetInspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	InspectorIntensity;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetInspectorIntensity() const;
	class UTimelineComponent** M_PtrGetInspectorIntensity();
	void M_SetInspectorIntensity(const class UTimelineComponent*& value);

	//float	NightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6;		//Offset: 584	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6() const;
	float* M_PtrGetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6();
	void M_SetNightVisionIntensity_Intensity_6575CE164AA85D82CD9AB6A1557902A6(const float& value);

	//TEnumAsByte<ETimelineDirection>	NightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6;		//Offset: 588	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6();
	void M_SetNightVisionIntensity__Direction_6575CE164AA85D82CD9AB6A1557902A6(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	NightVisionIntensity;		//Offset: 592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetNightVisionIntensity() const;
	class UTimelineComponent** M_PtrGetNightVisionIntensity();
	void M_SetNightVisionIntensity(const class UTimelineComponent*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//class APC_Player_C*	PlayerControllerReference;		//Offset: 608	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APC_Player_C* M_GetPlayerControllerReference() const;
	class APC_Player_C** M_PtrGetPlayerControllerReference();
	void M_SetPlayerControllerReference(const class APC_Player_C*& value);

	//struct FTransform	PlayerStartTransform;		//Offset: 624	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform M_GetPlayerStartTransform() const;
	struct FTransform* M_PtrGetPlayerStartTransform();
	void M_SetPlayerStartTransform(const struct FTransform& value);

	//bool	InspectorMode;		//Offset: 672	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInspectorMode() const;
	bool* M_PtrGetInspectorMode();
	void M_SetInspectorMode(const bool& value);

	//ESlateVisibility	InspectorModeVisibility;		//Offset: 673	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	ESlateVisibility M_GetInspectorModeVisibility() const;
	ESlateVisibility* M_PtrGetInspectorModeVisibility();
	void M_SetInspectorModeVisibility(const ESlateVisibility& value);

	//float	InspectorModeDistance;		//Offset: 676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInspectorModeDistance() const;
	float* M_PtrGetInspectorModeDistance();
	void M_SetInspectorModeDistance(const float& value);

	//TMap<TEnumAsByte<E_Tutorials>, bool>	ShownTutorials;		//Offset: 680	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tutorials>, bool> M_GetShownTutorials() const;
	TMap<TEnumAsByte<E_Tutorials>, bool>* M_PtrGetShownTutorials();
	void M_SetShownTutorials(const TMap<TEnumAsByte<E_Tutorials>, bool>& value);

	//class USoundBase*	MountWhistleSound;		//Offset: 760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetMountWhistleSound() const;
	class USoundBase** M_PtrGetMountWhistleSound();
	void M_SetMountWhistleSound(const class USoundBase*& value);

	//class ABP_AnimalBase_C*	PlayerMountReference;		//Offset: 768	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_AnimalBase_C* M_GetPlayerMountReference() const;
	class ABP_AnimalBase_C** M_PtrGetPlayerMountReference();
	void M_SetPlayerMountReference(const class ABP_AnimalBase_C*& value);

	//bool	Is_Move;		//Offset: 776	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIs_Move() const;
	bool* M_PtrGetIs_Move();
	void M_SetIs_Move(const bool& value);

	//float	CurrentForestIntensity;		//Offset: 780	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentForestIntensity() const;
	float* M_PtrGetCurrentForestIntensity();
	void M_SetCurrentForestIntensity(const float& value);

	//float	CurrentVillageIntensity;		//Offset: 784	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentVillageIntensity() const;
	float* M_PtrGetCurrentVillageIntensity();
	void M_SetCurrentVillageIntensity(const float& value);

	//float	TargetForestIntensity;		//Offset: 788	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetForestIntensity() const;
	float* M_PtrGetTargetForestIntensity();
	void M_SetTargetForestIntensity(const float& value);

	//float	TargetVillageIntensity;		//Offset: 792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetVillageIntensity() const;
	float* M_PtrGetTargetVillageIntensity();
	void M_SetTargetVillageIntensity(const float& value);

	//float	AmbientBlendSpeed;		//Offset: 796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAmbientBlendSpeed() const;
	float* M_PtrGetAmbientBlendSpeed();
	void M_SetAmbientBlendSpeed(const float& value);

	//int32_t	NumberOfGeneration;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfGeneration() const;
	int32_t* M_PtrGetNumberOfGeneration();
	void M_SetNumberOfGeneration(const int32_t& value);

	//int32_t	AffectionBonus;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAffectionBonus() const;
	int32_t* M_PtrGetAffectionBonus();
	void M_SetAffectionBonus(const int32_t& value);

	//TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>	FullscreenTutorials;		//Offset: 808	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> M_GetFullscreenTutorials() const;
	TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>* M_PtrGetFullscreenTutorials();
	void M_SetFullscreenTutorials(const TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>& value);

	//TArray<struct FVector>	BorderPoints;		//Offset: 888	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetBorderPoints() const;
	TArray<struct FVector>* M_PtrGetBorderPoints();
	void M_SetBorderPoints(const TArray<struct FVector>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_PlayerManager(int32_t EntryPoint);

	void BndEvt__BP_PlayerManager_Ambient_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();

	void StopInspectorMode();

	void OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);

	void DisableNightVision();

	void EnableNightVision();

	void ResetAmbientParameters();

	void UpdateOnTimeChanged(int32_t IteratorNumber);

	void StopTimer_CheckIsMove();

	void CheckIsMove();

	void StartTimer_CheckIsMove();

	void StopTimer_PlayerStay();

	void UpdateAmbientParameters();

	void StartTimer_PlayerMove();

	void SummonMount();

	void UpdateOnSeasonChanged();

	void StartPlayerManager(bool LoadGame, bool MainMenu);

	void StopAnimation_InspectorMode();

	void PlayAnimation_InspectorMode();

	void UpdateInspector();

	void StopInspectorTimer();

	void StartInspectorTimer();

	void SetBuildingMode(TEnumAsByte<E_BuildingModifications> BuildingMode);

	void ReceiveBeginPlay();

	void StartInspectorMode();

	void NightVisionIntensity__UpdateFunc();

	void NightVisionIntensity__FinishedFunc();

	void InspectorIntensity__UpdateFunc();

	void InspectorIntensity__FinishedFunc();

	void Init();

	void CreatePlayer();

	void InitPlayerHUD();

	void Spawn_Player(class AController* PlayerController);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void Load_Save_File_Into_System_Finishing(class USAVE_Game_C* SaveReference);

	void SwitchToHeir(class ABP_BaseCharacter_C* Heir, bool* Success);

	void SwitchPlayerAndHeir(class ABP_BaseCharacter_C* Heir, bool* Success);

	void InspectorDetection();

	void TeleportPlayer();

	void TryToCreateHUDTutorial(TEnumAsByte<E_Tutorials> Tutorial, bool FullscreenMessage);

	void CheckIsHeir(bool* Success, class ABP_BaseCharacter_C** Heir);

	bool CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation);

	void FindRandomPointForMount(struct FVector* RandomLocation);

	void UpdateForestIntensity();

	void UpdateVillageIntensity();

	void IsMove();

	void HideRoads(bool Visibility);

	void HideFields(bool Visibility);

	void FixAffectionBonus(struct FString SaveGameVersion);

	void ReloadHeirsHeadAndHair(struct FString SaveGameVersion);

	void GetMapBorderPoints();

	void ComponentDelegateBinding_1();

	void CurveFloat_1();

	void CurveFloat_0_2();

	void InspectorIntensity_Template();

	void NightVisionIntensity_Template();

#pragma endregion
};
};