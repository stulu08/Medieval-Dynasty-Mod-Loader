#pragma once
#include "Structs.h"
#include "Engine/GameStateBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GS_GameState.GS_GameState_C
// Super: Class Engine.GameStateBase
// Size: 736
// Size inherited: 624
/////////////////////////////////////////////
namespace UE4 {
class AGS_GameState_C : public AGameStateBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 624	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 632	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//int32_t	DaysPerSeason;		//Offset: 640	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason() const;
	int32_t* M_PtrGetDaysPerSeason();
	void M_SetDaysPerSeason(const int32_t& value);

	//float	TaxMultiplier;		//Offset: 644	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTaxMultiplier() const;
	float* M_PtrGetTaxMultiplier();
	void M_SetTaxMultiplier(const float& value);

	//float	BuildingLimitMultiplier;		//Offset: 648	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingLimitMultiplier() const;
	float* M_PtrGetBuildingLimitMultiplier();
	void M_SetBuildingLimitMultiplier(const float& value);

	//bool	Events;		//Offset: 652	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEvents() const;
	bool* M_PtrGetEvents();
	void M_SetEvents(const bool& value);

	//bool	Bandits;		//Offset: 653	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBandits() const;
	bool* M_PtrGetBandits();
	void M_SetBandits(const bool& value);

	//bool	Birds;		//Offset: 654	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBirds() const;
	bool* M_PtrGetBirds();
	void M_SetBirds(const bool& value);

	//float	NPCNeeds_FoodMultiplier;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier();
	void M_SetNPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier;		//Offset: 660	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier();
	void M_SetNPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WoodMultiplier;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier();
	void M_SetNPCNeeds_WoodMultiplier(const float& value);

	//float	BanditsHPMultiplier;		//Offset: 668	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsHPMultiplier() const;
	float* M_PtrGetBanditsHPMultiplier();
	void M_SetBanditsHPMultiplier(const float& value);

	//float	BanditsDamageMultiplier;		//Offset: 672	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsDamageMultiplier() const;
	float* M_PtrGetBanditsDamageMultiplier();
	void M_SetBanditsDamageMultiplier(const float& value);

	//float	AnimalsHPMultiplier;		//Offset: 676	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier() const;
	float* M_PtrGetAnimalsHPMultiplier();
	void M_SetAnimalsHPMultiplier(const float& value);

	//float	AnimalsDamageMultiplier;		//Offset: 680	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier() const;
	float* M_PtrGetAnimalsDamageMultiplier();
	void M_SetAnimalsDamageMultiplier(const float& value);

	//float	XPGainMultiplier;		//Offset: 684	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetXPGainMultiplier() const;
	float* M_PtrGetXPGainMultiplier();
	void M_SetXPGainMultiplier(const float& value);

	//float	TechnologyGainMultiplier;		//Offset: 688	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTechnologyGainMultiplier() const;
	float* M_PtrGetTechnologyGainMultiplier();
	void M_SetTechnologyGainMultiplier(const float& value);

	//float	DynastyReputationGainMultiplier;		//Offset: 692	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDynastyReputationGainMultiplier() const;
	float* M_PtrGetDynastyReputationGainMultiplier();
	void M_SetDynastyReputationGainMultiplier(const float& value);

	//bool	StopSpoilForDroppedItems;		//Offset: 696	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopSpoilForDroppedItems() const;
	bool* M_PtrGetStopSpoilForDroppedItems();
	void M_SetStopSpoilForDroppedItems(const bool& value);

	//bool	StopDestructionOverTime;		//Offset: 697	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopDestructionOverTime() const;
	bool* M_PtrGetStopDestructionOverTime();
	void M_SetStopDestructionOverTime(const bool& value);

	//class AGM_MedievalDynasty_C*	GameModeReference;		//Offset: 704	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AGM_MedievalDynasty_C* M_GetGameModeReference() const;
	class AGM_MedievalDynasty_C** M_PtrGetGameModeReference();
	void M_SetGameModeReference(const class AGM_MedievalDynasty_C*& value);

	//TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>	OnDaysPerSeasonChanged;		//Offset: 712	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature> M_GetOnDaysPerSeasonChanged() const;
	TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>* M_PtrGetOnDaysPerSeasonChanged();
	void M_SetOnDaysPerSeasonChanged(const TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>& value);

	//float	WeaponDurabilityMultiplier;		//Offset: 728	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWeaponDurabilityMultiplier() const;
	float* M_PtrGetWeaponDurabilityMultiplier();
	void M_SetWeaponDurabilityMultiplier(const float& value);

	//float	ArmorDurabilityMultiplier;		//Offset: 732	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetArmorDurabilityMultiplier() const;
	float* M_PtrGetArmorDurabilityMultiplier();
	void M_SetArmorDurabilityMultiplier(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GS_GameState.GS_GameState_C");
		return ptr;
	}

#pragma region Functions
	void OnDaysPerSeasonChanged__DelegateSignature();

	void ExecuteUbergraph_GS_GameState(int32_t EntryPoint);

	void ReceiveBeginPlay();

	void Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1);

	void UserConstructionScript();

	void RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1);

	void SetUnlimitedHP(bool NewValue);

	void UpdateGameSettingsFromGameMode();

	void OnRep_DaysPerSeason();

	void RetrievePlayerCharacterObject(class UObject* Object, class UObject** PlayerCharacterObject)/* const*/;

	void GetMountedPlayer(class UObject* MountObject, class UObject** MountedPlayerCharacterObject)/* const*/;

	void GetPlayerCharacter_BPI(bool GetLocalPlayer, bool GetHost, bool GetSpecificPlayerFromArrayIndex, int32_t PlayerArrayIndex, class ABP_PlayerCharacter_C** Player_Character_Reference);

	void GetDaysPerSeason(int32_t* DaysPerSeason)/* const*/;

	void GetBanditsDamageMultiplier(float* BanditsDamageMultiplier)/* const*/;

	void GetBanditsHealthMultiplier(float* BanditsHealthMultiplier)/* const*/;

	void AreBanditsEnabled(bool* AreBanditsEnabled)/* const*/;

	void GetPlayerCharacter(int32_t PlayerStateIndex, class UObject** PlayerCharacterObject)/* const*/;

	void GetLocalPlayerCharacter(class UObject** LocalPlayerCharacterObject)/* const*/;

	void GetHostPlayerCharacter(class UObject** HostPlayerCharacterObject)/* const*/;

#pragma endregion
};
};