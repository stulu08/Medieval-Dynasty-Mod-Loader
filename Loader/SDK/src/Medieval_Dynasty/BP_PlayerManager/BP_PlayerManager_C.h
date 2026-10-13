#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C
// Super: Class Engine.Actor
// Size: 2160
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

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 560	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//class APC_Player_C*	PM_PlayerControllerReference;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APC_Player_C* M_GetPM_PlayerControllerReference() const;
	class APC_Player_C** M_PtrGetPM_PlayerControllerReference();
	void M_SetPM_PlayerControllerReference(const class APC_Player_C*& value);

	//struct FTransform	PlayerStartTransform;		//Offset: 576	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform M_GetPlayerStartTransform() const;
	struct FTransform* M_PtrGetPlayerStartTransform();
	void M_SetPlayerStartTransform(const struct FTransform& value);

	//TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>	FullscreenTutorials;		//Offset: 624	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> M_GetFullscreenTutorials() const;
	TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>* M_PtrGetFullscreenTutorials();
	void M_SetFullscreenTutorials(const TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>& value);

	//TArray<struct FVector>	BorderPoints;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetBorderPoints() const;
	TArray<struct FVector>* M_PtrGetBorderPoints();
	void M_SetBorderPoints(const TArray<struct FVector>& value);

	//TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>	L_KnowledgeTutorials;		//Offset: 720	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle> M_GetL_KnowledgeTutorials() const;
	TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>* M_PtrGetL_KnowledgeTutorials();
	void M_SetL_KnowledgeTutorials(const TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>& value);

	//TArray<struct FST_SAVE_Player>	LoadedMultiPlayerData;		//Offset: 800	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SAVE_Player> M_GetLoadedMultiPlayerData() const;
	TArray<struct FST_SAVE_Player>* M_PtrGetLoadedMultiPlayerData();
	void M_SetLoadedMultiPlayerData(const TArray<struct FST_SAVE_Player>& value);

	//struct FST_SAVE_Player	LoadedPlayerData;		//Offset: 816	Size: 888	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_SAVE_Player M_GetLoadedPlayerData() const;
	struct FST_SAVE_Player* M_PtrGetLoadedPlayerData();
	void M_SetLoadedPlayerData(const struct FST_SAVE_Player& value);

	//struct FTransform	InEditorPlayerStartTransform;		//Offset: 1712	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform M_GetInEditorPlayerStartTransform() const;
	struct FTransform* M_PtrGetInEditorPlayerStartTransform();
	void M_SetInEditorPlayerStartTransform(const struct FTransform& value);

	//TArray<int32_t>	HeirToPlayerHairColor;		//Offset: 1760	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetHeirToPlayerHairColor() const;
	TArray<int32_t>* M_PtrGetHeirToPlayerHairColor();
	void M_SetHeirToPlayerHairColor(const TArray<int32_t>& value);

	//TMap<struct FString, struct FST_PlayerMarriageQueryData>	PlayerMarriagePairs;		//Offset: 1776	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, struct FST_PlayerMarriageQueryData> M_GetPlayerMarriagePairs() const;
	TMap<struct FString, struct FST_PlayerMarriageQueryData>* M_PtrGetPlayerMarriagePairs();
	void M_SetPlayerMarriagePairs(const TMap<struct FString, struct FST_PlayerMarriageQueryData>& value);

	//TArray<struct FString>	ChildrenToLeftPlayerOne;		//Offset: 1856	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetChildrenToLeftPlayerOne() const;
	TArray<struct FString>* M_PtrGetChildrenToLeftPlayerOne();
	void M_SetChildrenToLeftPlayerOne(const TArray<struct FString>& value);

	//TArray<struct FString>	ChildrenToLeftPlayerTwo;		//Offset: 1872	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetChildrenToLeftPlayerTwo() const;
	TArray<struct FString>* M_PtrGetChildrenToLeftPlayerTwo();
	void M_SetChildrenToLeftPlayerTwo(const TArray<struct FString>& value);

	//bool	RandomisedChildNameIndex;		//Offset: 1888	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRandomisedChildNameIndex() const;
	bool* M_PtrGetRandomisedChildNameIndex();
	void M_SetRandomisedChildNameIndex(const bool& value);

	//TMap<struct FString, struct FST_ChildNameSelection>	PlayersSelectingName;		//Offset: 1896	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, struct FST_ChildNameSelection> M_GetPlayersSelectingName() const;
	TMap<struct FString, struct FST_ChildNameSelection>* M_PtrGetPlayersSelectingName();
	void M_SetPlayersSelectingName(const TMap<struct FString, struct FST_ChildNameSelection>& value);

	//TMap<class AActor*, class ABP_BaseCharacter_C*>	PlayerHeirPair;		//Offset: 1976	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, class ABP_BaseCharacter_C*> M_GetPlayerHeirPair() const;
	TMap<class AActor*, class ABP_BaseCharacter_C*>* M_PtrGetPlayerHeirPair();
	void M_SetPlayerHeirPair(const TMap<class AActor*, class ABP_BaseCharacter_C*>& value);

	//TMap<struct FString, struct FST_ChildSexSelection>	PlayersSelectingSex;		//Offset: 2056	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, struct FST_ChildSexSelection> M_GetPlayersSelectingSex() const;
	TMap<struct FString, struct FST_ChildSexSelection>* M_PtrGetPlayersSelectingSex();
	void M_SetPlayersSelectingSex(const TMap<struct FString, struct FST_ChildSexSelection>& value);

	//int32_t	NameButtonID;		//Offset: 2136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNameButtonID() const;
	int32_t* M_PtrGetNameButtonID();
	void M_SetNameButtonID(const int32_t& value);

	//TEnumAsByte<E_SpouseType>	NameSpouseType;		//Offset: 2140	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SpouseType> M_GetNameSpouseType() const;
	TEnumAsByte<E_SpouseType>* M_PtrGetNameSpouseType();
	void M_SetNameSpouseType(const TEnumAsByte<E_SpouseType>& value);

	//TEnumAsByte<E_SpouseType>	SexSpouse_Type;		//Offset: 2141	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SpouseType> M_GetSexSpouse_Type() const;
	TEnumAsByte<E_SpouseType>* M_PtrGetSexSpouse_Type();
	void M_SetSexSpouse_Type(const TEnumAsByte<E_SpouseType>& value);

	//TEnumAsByte<E_ChildSex>	Child_Sex;		//Offset: 2142	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ChildSex> M_GetChild_Sex() const;
	TEnumAsByte<E_ChildSex>* M_PtrGetChild_Sex();
	void M_SetChild_Sex(const TEnumAsByte<E_ChildSex>& value);

	//struct FLinearColor	Player_Color;		//Offset: 2144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetPlayer_Color() const;
	struct FLinearColor* M_PtrGetPlayer_Color();
	void M_SetPlayer_Color(const struct FLinearColor& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_PlayerManager(int32_t EntryPoint);

	void CreateStartQuestNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void CreateQuestNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay);

	void TryToCreateHUDTutorial_PM(class AController* ControllerRef, bool AllPlayers, TEnumAsByte<E_Tutorials> Tutorial, bool FullscreenMessage);

	void UpdateOnSeasonChanged();

	void StartPlayerManager(bool LoadGame, bool MainMenu);

	void ReceiveBeginPlay();

	void Init();

	void CreatePlayer(bool load);

	void InitPlayerHUD();

	void Spawn_Player(class AController* PlayerController, bool load);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference, class ABP_PlayerCharacter_C* ClientCharacterReference);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void LoadSaveFileIntoSystemFinishing(class USAVE_Game_C* SaveReference);

	void SwitchToHeir(class ABP_BaseCharacter_C* Heir, class ABP_BaseCharacter_C* Player, bool* Success);

	void SwitchPlayerAndHeir(class ABP_BaseCharacter_C* Heir, class ABP_BaseCharacter_C* Player, bool* Success);

	void TeleportPlayers();

	void CheckIsHeir(class ABP_BaseCharacter_C* Player, bool* Success, class ABP_BaseCharacter_C** Heir);

	void CheckIsHeir_Local(class ABP_BaseCharacter_C* Player, bool* Success, class ABP_BaseCharacter_C** Heir);

	void CheckHeir_Local(class ABP_BaseCharacter_C* Player, class ABP_BaseCharacter_C* Heir, bool* Success);

	void HideRoads(bool Visibility);

	void HideFields(bool Visibility);

	void GetMapBorderPoints();

	void InitializePlayers();

	void TeleportHost();

	void TeleportClients();

	void DrawDebugSpawns();

	bool IsPlayerSaveValid(TArray<struct FST_SAVE_Player>* MultiPlayersData, int32_t Index);

	void MarryPlayers(struct FString PlayerId, struct FString PlayerID2, EProposalState* ProposalState);

	void DivorcePlayers(struct FString PlayerId, struct FString PlayerID2);

	void PlayerDivorceChildrenUpdate(class ABP_BaseCharacter_C* Player, struct FString* PlayerID1, struct FString* PlayerID2);

	void CheckIfCanMarry(struct FString PlayerId, struct FString Player2ID, EProposalState* ProposalState)/* const*/;

	void UpdatePlayerHouses(class ABP_PlayerCharacter_C* Player, class ABP_PlayerCharacter_C* Player2, EProposalState ProposalState, bool* Success);

	void MakeLove(struct FString PlayerId, struct FString Player2ID, EMakeLoveState* MakeLoveState);

	void UpdatePlayersOnSeasonChange();

	void CheckIfCanMakeLove(struct FString PlayerId, struct FString Player2ID, EMakeLoveState* MakeLoveState);

	void AddMarriagePair(struct FString PlayerId, struct FString PlayerID2, EMarriageChoice MarriageChoice, bool* Success);

	void RemoveMarriagePair(struct FString PlayerId, struct FString PlayerID2);

	void OnMarriageChoiceQuery(EMarriageChoice MarriageChoice, struct FString PlayerId, struct FString PlayerID2);

	void OnMarriageChoiceQueryResponse(EQueryResponse QueryResponse, struct FString ResponderPlayerID);

	void OnMarriageChoiceQueryCancel(struct FString QuerierPlayerID);

	void AddChildToLeftParent(struct FString ChildName, bool IsPlayerOne);

	bool CanNickFromCreatorBeVisible(struct FString PlayerId);

	void GetOfflineChildPlayerName(struct FString ChildPlayerID, struct FText* Name);

	void CreateDivorceNotifications(class ABP_PlayerCharacter_C* Player1, class ABP_PlayerCharacter_C* Player2);

	void GenerateChildrenLeftText(bool IsPlayerOne, struct FText* Text);

	void ClearChildrenToLeft();

	void OfflinePregnancyUpdate(struct FST_SAVE_Player* Save, struct FString* MotherID);

	void UpdateOfflineMembersRelations(struct FString NewNPCID, TArray<struct FString>* Children, struct FString Partner);

	void AddPlayerSelectingChildName(struct FString PlayerId, struct FST_ChildNameSelection ChildData);

	void OnMarriageCutscene(EMarriageChoice MarriageChoice, EProposalState ProposalState, EQueryResponse QueryResponse);

	void AddPlayerSelectingChildSex(struct FString PlayerId, struct FST_ChildSexSelection ChildData);

	void Get_Chances_for_Boy(TEnumAsByte<E_ChildSex> FirstPartnerChoice, TEnumAsByte<E_ChildSex> SecondPartnerChoice, float* Chances);

	bool DidFavoredPlayerChooseSpecificSex(TEnumAsByte<E_ChildSex> FirstPartner, TEnumAsByte<E_ChildSex> SecondPartner);

	void SetLockedNameData(int32_t ButtonID, TEnumAsByte<E_SpouseType> SpouseType);

	void SetLockedSexData(TEnumAsByte<E_ChildSex> ChildSex, TEnumAsByte<E_SpouseType> SpouseType, struct FLinearColor PlayerColor);

	void ClearChildBirthWindowData();

#pragma endregion
};
};