#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_SystemsManager.BP_SystemsManager_C
// Super: Class Engine.Actor
// Size: 696
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_SystemsManager_C : public AActor {
public:
#pragma region Members
	//class USceneComponent*	DefaultSceneRoot;		//Offset: 544	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//class ABP_MasterManager_C*	WeatherSystemReference;		//Offset: 552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterManager_C* M_GetWeatherSystemReference() const;
	class ABP_MasterManager_C** M_PtrGetWeatherSystemReference();
	void M_SetWeatherSystemReference(const class ABP_MasterManager_C*& value);

	//class ABP_DataManager_C*	DataManagerReference;		//Offset: 560	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_DataManager_C* M_GetDataManagerReference() const;
	class ABP_DataManager_C** M_PtrGetDataManagerReference();
	void M_SetDataManagerReference(const class ABP_DataManager_C*& value);

	//class ABP_AnimalsManager_C*	AnimalsManagerReference;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_AnimalsManager_C* M_GetAnimalsManagerReference() const;
	class ABP_AnimalsManager_C** M_PtrGetAnimalsManagerReference();
	void M_SetAnimalsManagerReference(const class ABP_AnimalsManager_C*& value);

	//class ABP_LandscapeManager_C*	LandscapeResourcesManagerReference;		//Offset: 576	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_LandscapeManager_C* M_GetLandscapeResourcesManagerReference() const;
	class ABP_LandscapeManager_C** M_PtrGetLandscapeResourcesManagerReference();
	void M_SetLandscapeResourcesManagerReference(const class ABP_LandscapeManager_C*& value);

	//class ABP_PlayerManager_C*	PlayerManagerReference;		//Offset: 584	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_PlayerManager_C* M_GetPlayerManagerReference() const;
	class ABP_PlayerManager_C** M_PtrGetPlayerManagerReference();
	void M_SetPlayerManagerReference(const class ABP_PlayerManager_C*& value);

	//class ABP_QuestManager_C*	QuestManagerReference;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_QuestManager_C* M_GetQuestManagerReference() const;
	class ABP_QuestManager_C** M_PtrGetQuestManagerReference();
	void M_SetQuestManagerReference(const class ABP_QuestManager_C*& value);

	//class ABP_Chameleon_C*	PostProcessManagerReference;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_Chameleon_C* M_GetPostProcessManagerReference() const;
	class ABP_Chameleon_C** M_PtrGetPostProcessManagerReference();
	void M_SetPostProcessManagerReference(const class ABP_Chameleon_C*& value);

	//class ABP_MarkerManager_C*	MarkerManagerReference;		//Offset: 608	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MarkerManager_C* M_GetMarkerManagerReference() const;
	class ABP_MarkerManager_C** M_PtrGetMarkerManagerReference();
	void M_SetMarkerManagerReference(const class ABP_MarkerManager_C*& value);

	//class ABP_TimeManager_C*	TimeManagerReference;		//Offset: 616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_TimeManager_C* M_GetTimeManagerReference() const;
	class ABP_TimeManager_C** M_PtrGetTimeManagerReference();
	void M_SetTimeManagerReference(const class ABP_TimeManager_C*& value);

	//class ABP_KingdomManager_C*	KingdomManagerReference;		//Offset: 624	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_KingdomManager_C* M_GetKingdomManagerReference() const;
	class ABP_KingdomManager_C** M_PtrGetKingdomManagerReference();
	void M_SetKingdomManagerReference(const class ABP_KingdomManager_C*& value);

	//class ABP_VillageManager_C*	VillageManagerReference;		//Offset: 632	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_VillageManager_C* M_GetVillageManagerReference() const;
	class ABP_VillageManager_C** M_PtrGetVillageManagerReference();
	void M_SetVillageManagerReference(const class ABP_VillageManager_C*& value);

	//class ABP_NPC_Manager_C*	NPCManagerReference;		//Offset: 640	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_NPC_Manager_C* M_GetNPCManagerReference() const;
	class ABP_NPC_Manager_C** M_PtrGetNPCManagerReference();
	void M_SetNPCManagerReference(const class ABP_NPC_Manager_C*& value);

	//class ABP_MasterManager_C*	AudioManagerReference;		//Offset: 648	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterManager_C* M_GetAudioManagerReference() const;
	class ABP_MasterManager_C** M_PtrGetAudioManagerReference();
	void M_SetAudioManagerReference(const class ABP_MasterManager_C*& value);

	//class ABP_EventManager_C*	EventManagerReference;		//Offset: 656	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_EventManager_C* M_GetEventManagerReference() const;
	class ABP_EventManager_C** M_PtrGetEventManagerReference();
	void M_SetEventManagerReference(const class ABP_EventManager_C*& value);

	//class AGM_MedievalDynasty_C*	GameModeReference;		//Offset: 664	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AGM_MedievalDynasty_C* M_GetGameModeReference() const;
	class AGM_MedievalDynasty_C** M_PtrGetGameModeReference();
	void M_SetGameModeReference(const class AGM_MedievalDynasty_C*& value);

	//class ABP_POI_Manager_C*	POI_ManagerReference;		//Offset: 672	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_POI_Manager_C* M_GetPOI_ManagerReference() const;
	class ABP_POI_Manager_C** M_PtrGetPOI_ManagerReference();
	void M_SetPOI_ManagerReference(const class ABP_POI_Manager_C*& value);

	//class ABP_MasterManager_C*	RoadsManagerReference;		//Offset: 680	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterManager_C* M_GetRoadsManagerReference() const;
	class ABP_MasterManager_C** M_PtrGetRoadsManagerReference();
	void M_SetRoadsManagerReference(const class ABP_MasterManager_C*& value);

	//class ABP_ChromaManager_C*	ChromaManagerReference;		//Offset: 688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_ChromaManager_C* M_GetChromaManagerReference() const;
	class ABP_ChromaManager_C** M_PtrGetChromaManagerReference();
	void M_SetChromaManagerReference(const class ABP_ChromaManager_C*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemsManager.BP_SystemsManager_C");
		return ptr;
	}

#pragma region Functions
	void InitSystems();

	void InitSystemsForCinematic();

	void InitPlayer();

	void StartSystems(bool LoadGame, bool MainMenu);

	void SaveSystems(class USAVE_Game_C* SaveReference);

	void StopSystems();

	void StartSystemsForCinematic();

	void InitThreadTasks();

#pragma endregion
};
};