#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_AI.BPI_AI_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_AI_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AI.BPI_AI_C");
		return ptr;
	}

#pragma region Functions
	void AI_InteractResource(bool FlipTool);

	void AI_InteractFoliage(bool Timer);

	void AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage);

	void AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool);

	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item);

	void AI_SpawnBow(bool CheckInInventory, bool* IsBow);

	void AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location);

	void AI_GetDistanceAndDirection(struct FVector Target_Location, struct FVector Current_Location, float* Distance, struct FVector* Direction);

	void AI_ToolInteractFoliage();

	void AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value);

	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);

	void AI_GetOut(bool CheckChildrenAffection);

	void AI_UnlockThings();

	void AI_IncreaseNavInvoker(bool* ToBig);

	void AI_ResetNavInvoker();

	void AI_MoveAside();

	void AI_GetMesh(class USkeletalMeshComponent** Mesh);

	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find);

	void AI_FindAnimal(struct FVector* Destination, bool* Animal);

	void AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* WorkPlace);

	void AI_SetID(struct FString ID);

	void AI_SetWorkTask();

	void AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex);

	void AI_SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed);

	void AI_CheckTargetFoliage(bool* IsTargetFoliage);

	void AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType);

	void AI_GetIDFromNPC(struct FString* NPC_ID);

	void AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_CheckIsField(bool* IsField);

	void AI_CheckBuildingIsConstructed(bool* IsConstructed);

	void AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void AI_SetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response);

	void AI_OutsideInteract(bool FlipTool);

	void AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex);

	void AI_StopMovement();

	void AI_FindCampfire(TEnumAsByte<E_Ownership> Location, bool IgnoreOwnership, struct FVector* Destination, bool* IsCampfire);

	void AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);

	void AI_TalkingNPC();

	void AI_GetNightPatrol(bool* NightPatrol);

	void AI_FindNPCtoPlayingTag(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);

	void AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches);

	void AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight);

	void AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find);

	void AI_GetQuestBlocking(bool* QuestBlocking);

	void AI_SetPlayingTagNPC();

	void AI_SetBlockTalking(bool BlockTalking);

	void AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak);

	void AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex);

	void AI_SetInteractedActor(class AActor* InteractedActor);

	void AI_SetInteractionSlotIndex(int32_t InteractionSlotIndex);

	void AI_EndTalking();

	void AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool Value);

	void AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged);

	void AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Resposne);

	void AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards);

	void AI_GetDead(bool* IsDead);

	void AI_EnableDeadMethods();

	void AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage);

	void AI_GetIsGetOut(bool* GetOut);

	void AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime);

	void AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated);

	void AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated);

	void AI_FindFishingPoint(struct FVector* Destination, bool* Find);

	void AI_GetOptimizationStage(int32_t* optimizationStage);

	void AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership>* OutsideNPC_Ownership);

	void AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode> BagSeeds, bool* IsBag);

	void AI_SetNPC_Status(TEnumAsByte<E_NPCStatus> NPC_Status);

	void AI_GetOutsideNPC_Type(TEnumAsByte<E_OutsideNPCTypes>* Outside_NPC_Type);

	void AI_GetNPC_Status(TEnumAsByte<E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity>* NeedTool, struct FName* NeedItem);

	void AI_GetNeedItemName(struct FName* NeedItem);

	void AI_SetNeedItemName(struct FName NeedItem);

	void AI_SetProfessionClothes(bool LoadGame);

	void AI_SetCasualClothes(bool LoadGame);

	void AI_SetFieldTask(struct FST_FieldTasksLists Field_Task);

	void AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point);

	void AI_RemoveAnimalReference();

	void AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success);

	void AI_CheckIsChunkInteractable(bool* Interactable);

	void AI_RemovePathsPoint(int32_t Index);

	void AI_AfterRemovalFromHouse();

	void AI_AfterRemovalFromWorkplace();

	void AI_HideHeldItem(bool IsWorking, bool UpdateToolType);

	void AI_HideOff_HandItem(bool IsWorking);

	void AI_HideItemsInHands(bool IsWorking);

	void AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation);

	void AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation);

	void AI_SetCanAffectNavigation(bool CanAffectNavigation);

	void AI_GetCanAffectNavigation(bool* CanAffectNavigation);

	void AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot);

	void AI_SetActivity(const TArray<int32_t>& SpecifiedActivities);

	void AI_GetGoHome_Activity(bool* GoHome_Activity);

	void AI_SetGoHome_Activity(bool GoHome_Activity);

	void AI_GetPaths(TArray<struct FVector>* Paths);

	void AI_GetPathsPoint(bool* Succes, struct FVector* PathsPoint);

	void AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot);

	void AI_FindApprenticeSlot(struct FVector* Destination, bool* ApprenticeSlot);

	void AI_FindVillageCenter(struct FVector* VillageCenter);

	void AI_SetWhetherAffectNavigation(bool WhetherAffectNavigation);

	void AI_FindPOIFurniture(bool* IsFurniture, struct FVector* Destination);

	void AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType);

	void AI_SetBanditType(TEnumAsByte<E_BanditType> BanditType);

	void AI_FindGetOutPoint(struct FVector* GetOutPoint);

	void AI_GetWorkSlotIndex(int32_t* WorkSlotIndex);

	void AI_SetWorkSlotIndex(int32_t WorkSlotIndex);

	void AI_GetWhetherAffectNavigation(bool* WhetherAffectNavigation);

	void AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType);

	void AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow);

	void AI_GetBuildingsWorkSlotWorldTransforms(bool* IsValidSlot, struct FTransform* Slot, struct FTransform* StartPoint);

	void AI_GetVendor(bool* Vendor);

	void AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation);

	void AI_UnoccupyBuildingWorkSlot();

	void AI_UnoccupyNPC_FieldTask();

	void AI_FlipTool(bool UnFlip);

	void CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice);

	void AI_GetBreakAnimID(unsigned char* BreakAnimID);

	void AI_LightCampfire();

	void AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage);

	void AI_GetBreakAnimType(TEnumAsByte<E_AnimBreakType>* BreakAnimType);

	void AI_GetWakeUpAndSleepTimes(struct FST_Hour* BeginWakeUpTime, struct FST_Hour* BeginSleepTime);

	void AI_SetBeginWakeUpTime();

	void AI_SetBeginSleepTime();

	void AI_GetWorkStateLoops(int32_t* CurrentWorkStateLoop, int32_t* WorkStateLoops);

	void AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop);

	void AI_GetDistanceToPlayer(float* Distance);

	void AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination);

	void AI_InteractWithFurniture(struct FHitResult Hit, bool Timer);

	void AI_CancelInteractWithFurniture();

	void AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak);

	void AI_GetCustomNPC_DTHandler(struct FDataTableRowHandle* CustomNPC_DTHandler);

	void AI_FindOutsidePoint(struct FVector* OutsidePoint);

	void AI_GetTalkingCharacter(bool* Success, class AActor** TalkingCharacter);

	void AI_BindEventToWorkMontageComplete(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromWorkMontageComplete();

	void AI_UnbindAllEventsFromWorkMontageComplete();

	void AI_BindEventToBreakMontageComplete(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromBreakMontageComplete();

	void AI_DestroyOnGetOut();

	void AI_CheckIsPlayerPartner(bool* IsPlayerPartner);

	void AI_UnbindAllEventsFromBreakMontageComplete();

	void AI_BindEventToOnIdleAnimFinished(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventsFromOnIdleAnimFinished();

	void AI_TeleportToHouseOrWorkplace(bool ToHouse, bool* Success);

	void AI_GetTimeOfDay(TEnumAsByte<E_TimeOfDay>* TimeOfDay);

	void AI_CheckCanMove(bool* CanMove);

	void AI_SetGetOutSettings();

	void AI_BindEventToOnSleepFinished(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromOnSleepFinished();

	void AI_UnbindAllEventsFromOnSleepFinished();

	void AI_BindEventToOnSitFinished(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromOnSitFinished();

	void AI_UnbindAllEventsFromOnSitFinished();

	void AI_ResetBehaviorOnWakeUp();

	void AI_SetSound(TAssetPtr<class USoundBase> Sound);

	void AI_PlayAudio(float StartTime);

	void AI_StopAudio();

	void AI_StopFurnitureAnimation(class AActor* Furniture);

	void AI_SetChangeCollision(bool ChangeCollision);

	void AI_SetNPCAfterGetOrWakeUp();

	void AI_GetHasInfant(bool* HasInfant);

	void AI_SetHasInfant(bool HasInfant);

	void AI_GetToys(TArray<struct FName>* Toys);

	void AI_CheckCanTalk(bool CheckResourceState, bool* CanTalk);

	void AI_SetRotationManaged(bool IsRotationManaged);

	void AI_GetRotationManaged(bool* IsRotationManaged);

	void AI_Start_Combat(class AActor*& Actor);

	void AI_SetWaitTask(bool CheckDayActivities);

	void AI_SetCanChangeMovementActive(bool CanChangeMovementActive);

	void AI_CheckIsInGoToCenterTask(bool* Success);

	void AI_SetQuestBlocking(bool QuestBlocking);

	void AI_SetPerceptionActive(bool Enabled, float TickInterval);

	void AI_ChangeHeiressToHeir(bool* Success);

	void AI_ChangeSex(TEnumAsByte<E_Sex> TargetSex, bool* Success);

	void AI_SetMotherParameters();

	void AI_CheckIsWorkHours(bool* Success);

	void NPCsStartTimer_Stamina_BPI();

#pragma endregion
};
};