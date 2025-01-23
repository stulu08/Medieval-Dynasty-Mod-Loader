#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/RelationsComponentBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C
// Super: Class Medieval_Dynasty.RelationsComponentBase
// Size: 904
// Size inherited: 256
/////////////////////////////////////////////
namespace UE4 {
class UBP_CharacterRelationsComponent_C : public URelationsComponentBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 256	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//struct FString	HouseID;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetHouseID() const;
	struct FString* M_PtrGetHouseID();
	void M_SetHouseID(const struct FString& value);

	//class ABP_MasterBuilding_C*	HouseReference;		//Offset: 280	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuilding_C* M_GetHouseReference() const;
	class ABP_MasterBuilding_C** M_PtrGetHouseReference();
	void M_SetHouseReference(const class ABP_MasterBuilding_C*& value);

	//struct FString	PartnerID;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetPartnerID() const;
	struct FString* M_PtrGetPartnerID();
	void M_SetPartnerID(const struct FString& value);

	//class ABP_BaseCharacter_C*	Partner;		//Offset: 304	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetPartner() const;
	class ABP_BaseCharacter_C** M_PtrGetPartner();
	void M_SetPartner(const class ABP_BaseCharacter_C*& value);

	//struct FString	MotherID;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetMotherID() const;
	struct FString* M_PtrGetMotherID();
	void M_SetMotherID(const struct FString& value);

	//class ABP_BaseCharacter_C*	Mother;		//Offset: 328	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetMother() const;
	class ABP_BaseCharacter_C** M_PtrGetMother();
	void M_SetMother(const class ABP_BaseCharacter_C*& value);

	//struct FString	FatherID;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetFatherID() const;
	struct FString* M_PtrGetFatherID();
	void M_SetFatherID(const struct FString& value);

	//class ABP_BaseCharacter_C*	Father;		//Offset: 352	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetFather() const;
	class ABP_BaseCharacter_C** M_PtrGetFather();
	void M_SetFather(const class ABP_BaseCharacter_C*& value);

	//TArray<struct FString>	ChildrenID;		//Offset: 360	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FString> M_GetChildrenID() const;
	TArray<struct FString>* M_PtrGetChildrenID();
	void M_SetChildrenID(const TArray<struct FString>& value);

	//TArray<class ABP_BaseCharacter_C*>	Children;		//Offset: 376	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate
	TArray<class ABP_BaseCharacter_C*> M_GetChildren() const;
	TArray<class ABP_BaseCharacter_C*>* M_PtrGetChildren();
	void M_SetChildren(const TArray<class ABP_BaseCharacter_C*>& value);

	//TArray<struct FString>	SiblingsID;		//Offset: 392	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FString> M_GetSiblingsID() const;
	TArray<struct FString>* M_PtrGetSiblingsID();
	void M_SetSiblingsID(const TArray<struct FString>& value);

	//TArray<class ABP_BaseCharacter_C*>	Siblings;		//Offset: 408	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate
	TArray<class ABP_BaseCharacter_C*> M_GetSiblings() const;
	TArray<class ABP_BaseCharacter_C*>* M_PtrGetSiblings();
	void M_SetSiblings(const TArray<class ABP_BaseCharacter_C*>& value);

	//struct FString	WorkPlaceID;		//Offset: 424	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetWorkPlaceID() const;
	struct FString* M_PtrGetWorkPlaceID();
	void M_SetWorkPlaceID(const struct FString& value);

	//class ABP_MasterBuilding_C*	WorkPlaceReference;		//Offset: 440	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuilding_C* M_GetWorkPlaceReference() const;
	class ABP_MasterBuilding_C** M_PtrGetWorkPlaceReference();
	void M_SetWorkPlaceReference(const class ABP_MasterBuilding_C*& value);

	//int32_t	TimeToBirth;		//Offset: 448	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTimeToBirth() const;
	int32_t* M_PtrGetTimeToBirth();
	void M_SetTimeToBirth(const int32_t& value);

	//int32_t	Affection;		//Offset: 452	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAffection() const;
	int32_t* M_PtrGetAffection();
	void M_SetAffection(const int32_t& value);

	//TAssetPtr<class FOnPartnerChanged__DelegateSignature>	OnPartnerChanged;		//Offset: 456	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPartnerChanged__DelegateSignature> M_GetOnPartnerChanged() const;
	TAssetPtr<class FOnPartnerChanged__DelegateSignature>* M_PtrGetOnPartnerChanged();
	void M_SetOnPartnerChanged(const TAssetPtr<class FOnPartnerChanged__DelegateSignature>& value);

	//TAssetPtr<class FOnChildrenChanged__DelegateSignature>	OnChildrenChanged;		//Offset: 472	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnChildrenChanged__DelegateSignature> M_GetOnChildrenChanged() const;
	TAssetPtr<class FOnChildrenChanged__DelegateSignature>* M_PtrGetOnChildrenChanged();
	void M_SetOnChildrenChanged(const TAssetPtr<class FOnChildrenChanged__DelegateSignature>& value);

	//bool	IsPregnant;		//Offset: 488	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIsPregnant() const;
	bool* M_PtrGetIsPregnant();
	void M_SetIsPregnant(const bool& value);

	//TArray<struct FST_MatchingNPC>	PossibleHusbands;		//Offset: 496	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MatchingNPC> M_GetPossibleHusbands() const;
	TArray<struct FST_MatchingNPC>* M_PtrGetPossibleHusbands();
	void M_SetPossibleHusbands(const TArray<struct FST_MatchingNPC>& value);

	//float	ChanceForBabyBirth;		//Offset: 512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetChanceForBabyBirth() const;
	float* M_PtrGetChanceForBabyBirth();
	void M_SetChanceForBabyBirth(const float& value);

	//class ACharacter*	InDialogueCharacter;		//Offset: 520	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ACharacter* M_GetInDialogueCharacter() const;
	class ACharacter** M_PtrGetInDialogueCharacter();
	void M_SetInDialogueCharacter(const class ACharacter*& value);

	//TAssetPtr<class UDialogue>	ActualDialogue;		//Offset: 528	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UDialogue> M_GetActualDialogue() const;
	TAssetPtr<class UDialogue>* M_PtrGetActualDialogue();
	void M_SetActualDialogue(const TAssetPtr<class UDialogue>& value);

	//TArray<struct FST_DialoguesUsedDialogueLines>	DialoguesLinesStates;		//Offset: 568	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_DialoguesUsedDialogueLines> M_GetDialoguesLinesStates() const;
	TArray<struct FST_DialoguesUsedDialogueLines>* M_PtrGetDialoguesLinesStates();
	void M_SetDialoguesLinesStates(const TArray<struct FST_DialoguesUsedDialogueLines>& value);

	//TArray<struct FName>	DialogueAffection;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FName> M_GetDialogueAffection() const;
	TArray<struct FName>* M_PtrGetDialogueAffection();
	void M_SetDialogueAffection(const TArray<struct FName>& value);

	//TArray<struct FName>	DialogueAffectionBuffer;		//Offset: 600	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FName> M_GetDialogueAffectionBuffer() const;
	TArray<struct FName>* M_PtrGetDialogueAffectionBuffer();
	void M_SetDialogueAffectionBuffer(const TArray<struct FName>& value);

	//struct FString	TalkingCharacter_ID;		//Offset: 616	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetTalkingCharacter_ID() const;
	struct FString* M_PtrGetTalkingCharacter_ID();
	void M_SetTalkingCharacter_ID(const struct FString& value);

	//float	TalkChanceAffection;		//Offset: 632	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTalkChanceAffection() const;
	float* M_PtrGetTalkChanceAffection();
	void M_SetTalkChanceAffection(const float& value);

	//int32_t	SeasonsSinceInteraction;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSeasonsSinceInteraction() const;
	int32_t* M_PtrGetSeasonsSinceInteraction();
	void M_SetSeasonsSinceInteraction(const int32_t& value);

	//bool	BlockTalking;		//Offset: 640	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockTalking() const;
	bool* M_PtrGetBlockTalking();
	void M_SetBlockTalking(const bool& value);

	//bool	UsedAffection;		//Offset: 641	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsedAffection() const;
	bool* M_PtrGetUsedAffection();
	void M_SetUsedAffection(const bool& value);

	//bool	WasSpokenTo;		//Offset: 642	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasSpokenTo() const;
	bool* M_PtrGetWasSpokenTo();
	void M_SetWasSpokenTo(const bool& value);

	//bool	TalkWithNPC;		//Offset: 643	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTalkWithNPC() const;
	bool* M_PtrGetTalkWithNPC();
	void M_SetTalkWithNPC(const bool& value);

	//bool	GiftGiven;		//Offset: 644	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGiftGiven() const;
	bool* M_PtrGetGiftGiven();
	void M_SetGiftGiven(const bool& value);

	//bool	Smalltalk;		//Offset: 645	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSmalltalk() const;
	bool* M_PtrGetSmalltalk();
	void M_SetSmalltalk(const bool& value);

	//bool	WifeDayText;		//Offset: 646	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWifeDayText() const;
	bool* M_PtrGetWifeDayText();
	void M_SetWifeDayText(const bool& value);

	//bool	FirstDialogue;		//Offset: 647	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFirstDialogue() const;
	bool* M_PtrGetFirstDialogue();
	void M_SetFirstDialogue(const bool& value);

	//TArray<int32_t>	DialogueRumors;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetDialogueRumors() const;
	TArray<int32_t>* M_PtrGetDialogueRumors();
	void M_SetDialogueRumors(const TArray<int32_t>& value);

	//class ABP_BaseCharacter_C*	BaseCharacterReference;		//Offset: 744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetBaseCharacterReference() const;
	class ABP_BaseCharacter_C** M_PtrGetBaseCharacterReference();
	void M_SetBaseCharacterReference(const class ABP_BaseCharacter_C*& value);

	//TArray<class ABP_PlayerCharacter_C*>	PlayersInDialogue;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_PlayerCharacter_C*> M_GetPlayersInDialogue() const;
	TArray<class ABP_PlayerCharacter_C*>* M_PtrGetPlayersInDialogue();
	void M_SetPlayersInDialogue(const TArray<class ABP_PlayerCharacter_C*>& value);

	//int32_t	HighlightedDialogue;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHighlightedDialogue() const;
	int32_t* M_PtrGetHighlightedDialogue();
	void M_SetHighlightedDialogue(const int32_t& value);

	//TArray<struct FString>	InteractedPlayersNetIDs;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FString> M_GetInteractedPlayersNetIDs() const;
	TArray<struct FString>* M_PtrGetInteractedPlayersNetIDs();
	void M_SetInteractedPlayersNetIDs(const TArray<struct FString>& value);

	//TArray<int32_t>	Affections_Coop;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
	TArray<int32_t> M_GetAffections_Coop() const;
	TArray<int32_t>* M_PtrGetAffections_Coop();
	void M_SetAffections_Coop(const TArray<int32_t>& value);

	//TArray<bool>	Smalltalks_Coop;		//Offset: 808	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<bool> M_GetSmalltalks_Coop() const;
	TArray<bool>* M_PtrGetSmalltalks_Coop();
	void M_SetSmalltalks_Coop(const TArray<bool>& value);

	//TArray<float>	TalkChanceAffections_Coop;		//Offset: 824	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<float> M_GetTalkChanceAffections_Coop() const;
	TArray<float>* M_PtrGetTalkChanceAffections_Coop();
	void M_SetTalkChanceAffections_Coop(const TArray<float>& value);

	//struct FString	OfflinePlayerId;		//Offset: 840	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetOfflinePlayerId() const;
	struct FString* M_PtrGetOfflinePlayerId();
	void M_SetOfflinePlayerId(const struct FString& value);

	//TArray<bool>	GiftsGiven_Coop;		//Offset: 856	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<bool> M_GetGiftsGiven_Coop() const;
	TArray<bool>* M_PtrGetGiftsGiven_Coop();
	void M_SetGiftsGiven_Coop(const TArray<bool>& value);

	//TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>	OnIsPregnantChanged;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnIsPregnantChanged__DelegateSignature> M_GetOnIsPregnantChanged() const;
	TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>* M_PtrGetOnIsPregnantChanged();
	void M_SetOnIsPregnantChanged(const TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>	OnTimeToBirthChanged;		//Offset: 888	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature> M_GetOnTimeToBirthChanged() const;
	TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>* M_PtrGetOnTimeToBirthChanged();
	void M_SetOnTimeToBirthChanged(const TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C");
		return ptr;
	}

#pragma region Functions
	void OnPartnerChanged__DelegateSignature();

	void OnChildrenChanged__DelegateSignature();

	void OnIsPregnantChanged__DelegateSignature(bool IsPregnant);

	void OnTimeToBirthChanged__DelegateSignature(int32_t TimeToBirth);

	void ExecuteUbergraph_BP_CharacterRelationsComponent(int32_t EntryPoint);

	void OnRep_CurrentWorkPlaceID();

	void OnRep_CurrentHouseID();

	void InitRelationsComponent(class ABP_BaseCharacter_C* BaseCharacter);

	void IncreaseAffection(int32_t Value, const struct FString& PlayerNetID);

	void Decrease_Affection(int32_t Value, const struct FString& PlayerNetID);

	void SetPartner(class ABP_BaseCharacter_C* Partner, struct FString PartnerID);

	void RemovePartner();

	void AddChild(class ABP_BaseCharacter_C* Child, struct FString ChildID);

	void RemoveChild(class ABP_BaseCharacter_C* Child);

	void GetPartner(class ABP_BaseCharacter_C** Partner, struct FString* Partner_ID);

	void RemoveChildByID(struct FString ChildID);

	void SetChildren(TArray<class ABP_BaseCharacter_C*>* Children, TArray<struct FString>* ID);

	bool DecreaseTimeToBirth();

	void IsTimeToBirth(bool* IsTimeToBirth);

	void SetMother(class ABP_BaseCharacter_C* Mother, struct FString MotherID);

	void SetFather(class ABP_BaseCharacter_C* Father, struct FString FatherID);

	void RelationsInit(class ABP_BaseCharacter_C* Father, class ABP_BaseCharacter_C* Mother, class ABP_BaseCharacter_C* Partner, TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<class ABP_BaseCharacter_C*>* Children, int32_t Affection);

	void AssignHouse(class ABP_MasterBuilding_C* House);

	void GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID);

	void AssignWorkPlace(class ABP_MasterBuilding_C* Workplace);

	void GetWorkPlace(class ABP_MasterBuilding_C** Workplace, struct FString* WokrPlace_ID);

	void SetRelationsData(struct FString ID_Mother, struct FString ID_Father, struct FString ID_Partner, TArray<struct FString>* ID_Siblings, TArray<struct FString>* ID_Children);

	void AddRelationWithPossiblePartner();

	void AddChanceForBabyBirth();

	void RemoveChildren();

	void GetFamily(class ABP_BaseCharacter_C* SelfCharacter, bool CheckChildrenAffection, TArray<class ABP_BaseCharacter_C*>* Family, bool* SomebodyHasPartner);

	void GetFather(class ABP_BaseCharacter_C** Father, struct FString* Father_ID);

	void GetMother(class ABP_BaseCharacter_C** Mother, struct FString* Mother_ID);

	void AddSibling(class ABP_BaseCharacter_C* Sibling, struct FString SiblingID);

	void RemoveSibling(class ABP_BaseCharacter_C* Sibling);

	void SetSiblings(TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<struct FString>* SiblingsID);

	void RemoveSiblings();

	void GetRelationDecreaseLevel(int32_t* Status);

	void ClearFamilyRelations();

	void GetBasicDialogue(struct FString ID, TEnumAsByte<E_Sex> sex, TAssetPtr<class UDialogue>* BasicDialogue);

	void GetActualDialogue(TAssetPtr<class UDialogue>* ActualDialogue);

	void SetActualDialogue(TAssetPtr<class UDialogue> ActualDialogue);

	void ResetActualDialogue(bool ResetToBasic, struct FString ID, TEnumAsByte<E_Sex> sex);

	void CheckSpecialBasicDialogue(struct FString ID, TAssetPtr<class UDialogue>* BasicDialogue);

	void ResetAffectionDialogue();

	void DecreaseAffectionDialogueChance(bool SetToZero, struct FString PlayerNetID);

	void AddDialogueLinesState(class UDialogue* DialogueReference);

	void ResetDialogueParameters(bool ResetToBasicActualDialogue, struct FString ID);

	void AffectionChanges();

	void CheckIfPlayerIsPartner(struct FString CheckPlayerID, bool* Success, struct FString* PartnerID);

	void CheckIfPlayerIsMother(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId);

	void CheckIfPlayerIsFather(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId);

	void CheckIfPlayerIsSibling(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId);

	void FindPlayerAmongAncestors(struct FString CheckPlayerID, bool* found, EBondsType* Relation, struct FString* PlayerId);

	void WasAnyChildJustBorn(bool* Value);

	void WasHeirHairCutToggled(bool* Value);

	void FindPlayerAmongDescendants(bool OnlyFirstBloodline, struct FString CheckPlayerID, bool* found, EBondsType* Relation, struct FString* PlayerId);

	void GetMaleHeirs(TArray<class ABP_BaseCharacter_C*>* Heirs);

	void GetRelationsData(struct FString* MotherID, struct FString* FatherID, struct FString* PartnerID, TArray<struct FString>* SiblingsIDs, TArray<struct FString>* ChildrenIDs);

	void SetDialogueAffectionArrayElement(int32_t Index, const struct FName& Item, bool bSizeToFit);

	void SetDialogueAffectionBufferArrayElement(int32_t Index, const struct FName& Item, bool bSizeToFit);

	void AddToDialogueAffectionBuffer(const struct FName& Item);

	void RestoreAffectionDialogueChance();

	void Check_If_Player_Is_In_Family(EBondsType CheckRelation, struct FString CheckPlayerID, bool* Success, EBondsType* Relation, struct FString* PlayerId);

	void GetAffection(struct FString CoopPlayerNetID, bool GetHighestCoop, int32_t* Affection);

	void OnRep_Affections_Coop();

	void OnRep_HouseReference();

	void OnRep_WorkPlaceReference();

	void SetGiftGiven(bool Value, struct FString PlayerNetID);

	void Marry(class ABP_BaseCharacter_C* CharacterToMarry);

	void DivorcePlayer();

	void UpdatePlayerTimeToBirth();

	void OnRep_IsPregnant();

	void OnRep_TimeToBirth();

	void FindPlayerAmongUs(struct FString CheckPlayerID, bool* Success, EBondsType* Relation, struct FString* PlayerId);

	void ResetComponent();

	void ResetAffectionGiftsAndSmallTalks(struct FString PlayerNetID);

#pragma endregion
};
};