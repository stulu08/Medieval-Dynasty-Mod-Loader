#include "../SDK.h"
#include "BP_QuestManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_QuestManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_QuestManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_QuestManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of QuestInventory
// Declaration: class UInventoryComponent_C* QuestInventory
class UInventoryComponent_C* ABP_QuestManager_C::M_GetQuestInventory() const {
	return Read<class UInventoryComponent_C*>((byte*)this + 552);
}
class UInventoryComponent_C** ABP_QuestManager_C::M_PtrGetQuestInventory() {
	return reinterpret_cast<class UInventoryComponent_C**>((byte*)this + 552);
}
void ABP_QuestManager_C::M_SetQuestInventory(const class UInventoryComponent_C*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_QuestManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 560);
}
class USceneComponent** ABP_QuestManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 560);
}
void ABP_QuestManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_QuestManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 568);
}
class ABP_SystemsManager_C** ABP_QuestManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 568);
}
void ABP_QuestManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of AmountToHunt
// Declaration: int32_t AmountToHunt
int32_t ABP_QuestManager_C::M_GetAmountToHunt() const {
	return Read<int32_t>((byte*)this + 576);
}
int32_t* ABP_QuestManager_C::M_PtrGetAmountToHunt() {
	return reinterpret_cast<int32_t*>((byte*)this + 576);
}
void ABP_QuestManager_C::M_SetAmountToHunt(const int32_t& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of IncreaseHuntedByPlayer
// Declaration: TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature> IncreaseHuntedByPlayer
TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature> ABP_QuestManager_C::M_GetIncreaseHuntedByPlayer() const {
	return Read<TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>>((byte*)this + 584);
}
TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>* ABP_QuestManager_C::M_PtrGetIncreaseHuntedByPlayer() {
	return reinterpret_cast<TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>*>((byte*)this + 584);
}
void ABP_QuestManager_C::M_SetIncreaseHuntedByPlayer(const TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of AllAcceptedQuests
// Declaration: TArray<struct FST_QuestInfos> AllAcceptedQuests
TArray<struct FST_QuestInfos> ABP_QuestManager_C::M_GetAllAcceptedQuests() const {
	return Read<TArray<struct FST_QuestInfos>>((byte*)this + 600);
}
TArray<struct FST_QuestInfos>* ABP_QuestManager_C::M_PtrGetAllAcceptedQuests() {
	return reinterpret_cast<TArray<struct FST_QuestInfos>*>((byte*)this + 600);
}
void ABP_QuestManager_C::M_SetAllAcceptedQuests(const TArray<struct FST_QuestInfos>& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of TmpNPCReference
// Declaration: class ABP_NPC_C* TmpNPCReference
class ABP_NPC_C* ABP_QuestManager_C::M_GetTmpNPCReference() const {
	return Read<class ABP_NPC_C*>((byte*)this + 616);
}
class ABP_NPC_C** ABP_QuestManager_C::M_PtrGetTmpNPCReference() {
	return reinterpret_cast<class ABP_NPC_C**>((byte*)this + 616);
}
void ABP_QuestManager_C::M_SetTmpNPCReference(const class ABP_NPC_C*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of tmpDynastyReputationToAdd
// Declaration: int32_t tmpDynastyReputationToAdd
int32_t ABP_QuestManager_C::M_GettmpDynastyReputationToAdd() const {
	return Read<int32_t>((byte*)this + 624);
}
int32_t* ABP_QuestManager_C::M_PtrGettmpDynastyReputationToAdd() {
	return reinterpret_cast<int32_t*>((byte*)this + 624);
}
void ABP_QuestManager_C::M_SettmpDynastyReputationToAdd(const int32_t& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of GoalActors
// Declaration: TArray<class ABP_GoalActor_C*> GoalActors
TArray<class ABP_GoalActor_C*> ABP_QuestManager_C::M_GetGoalActors() const {
	return Read<TArray<class ABP_GoalActor_C*>>((byte*)this + 632);
}
TArray<class ABP_GoalActor_C*>* ABP_QuestManager_C::M_PtrGetGoalActors() {
	return reinterpret_cast<TArray<class ABP_GoalActor_C*>*>((byte*)this + 632);
}
void ABP_QuestManager_C::M_SetGoalActors(const TArray<class ABP_GoalActor_C*>& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of OnVillageParametersChange
// Declaration: TAssetPtr<class FOnVillageParametersChange__DelegateSignature> OnVillageParametersChange
TAssetPtr<class FOnVillageParametersChange__DelegateSignature> ABP_QuestManager_C::M_GetOnVillageParametersChange() const {
	return Read<TAssetPtr<class FOnVillageParametersChange__DelegateSignature>>((byte*)this + 648);
}
TAssetPtr<class FOnVillageParametersChange__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnVillageParametersChange() {
	return reinterpret_cast<TAssetPtr<class FOnVillageParametersChange__DelegateSignature>*>((byte*)this + 648);
}
void ABP_QuestManager_C::M_SetOnVillageParametersChange(const TAssetPtr<class FOnVillageParametersChange__DelegateSignature>& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of tmpTechnologyBuildingsUnlocked
// Declaration: int32_t tmpTechnologyBuildingsUnlocked
int32_t ABP_QuestManager_C::M_GettmpTechnologyBuildingsUnlocked() const {
	return Read<int32_t>((byte*)this + 664);
}
int32_t* ABP_QuestManager_C::M_PtrGettmpTechnologyBuildingsUnlocked() {
	return reinterpret_cast<int32_t*>((byte*)this + 664);
}
void ABP_QuestManager_C::M_SettmpTechnologyBuildingsUnlocked(const int32_t& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of tmpBuildingsBuilt
// Declaration: int32_t tmpBuildingsBuilt
int32_t ABP_QuestManager_C::M_GettmpBuildingsBuilt() const {
	return Read<int32_t>((byte*)this + 668);
}
int32_t* ABP_QuestManager_C::M_PtrGettmpBuildingsBuilt() {
	return reinterpret_cast<int32_t*>((byte*)this + 668);
}
void ABP_QuestManager_C::M_SettmpBuildingsBuilt(const int32_t& value) {
	Write((byte*)this + 668, value);
}
// Member Getter and Setter of OnTalentsChange
// Declaration: TAssetPtr<class FOnTalentsChange__DelegateSignature> OnTalentsChange
TAssetPtr<class FOnTalentsChange__DelegateSignature> ABP_QuestManager_C::M_GetOnTalentsChange() const {
	return Read<TAssetPtr<class FOnTalentsChange__DelegateSignature>>((byte*)this + 672);
}
TAssetPtr<class FOnTalentsChange__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnTalentsChange() {
	return reinterpret_cast<TAssetPtr<class FOnTalentsChange__DelegateSignature>*>((byte*)this + 672);
}
void ABP_QuestManager_C::M_SetOnTalentsChange(const TAssetPtr<class FOnTalentsChange__DelegateSignature>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of tmpTalentPointsSpent
// Declaration: int32_t tmpTalentPointsSpent
int32_t ABP_QuestManager_C::M_GettmpTalentPointsSpent() const {
	return Read<int32_t>((byte*)this + 688);
}
int32_t* ABP_QuestManager_C::M_PtrGettmpTalentPointsSpent() {
	return reinterpret_cast<int32_t*>((byte*)this + 688);
}
void ABP_QuestManager_C::M_SettmpTalentPointsSpent(const int32_t& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of tmpVillagersAssignedToWork
// Declaration: int32_t tmpVillagersAssignedToWork
int32_t ABP_QuestManager_C::M_GettmpVillagersAssignedToWork() const {
	return Read<int32_t>((byte*)this + 692);
}
int32_t* ABP_QuestManager_C::M_PtrGettmpVillagersAssignedToWork() {
	return reinterpret_cast<int32_t*>((byte*)this + 692);
}
void ABP_QuestManager_C::M_SettmpVillagersAssignedToWork(const int32_t& value) {
	Write((byte*)this + 692, value);
}
// Member Getter and Setter of OnVillagersProfessionsChange
// Declaration: TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature> OnVillagersProfessionsChange
TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature> ABP_QuestManager_C::M_GetOnVillagersProfessionsChange() const {
	return Read<TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>>((byte*)this + 696);
}
TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnVillagersProfessionsChange() {
	return reinterpret_cast<TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>*>((byte*)this + 696);
}
void ABP_QuestManager_C::M_SetOnVillagersProfessionsChange(const TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of OnDaySeasonChange
// Declaration: TAssetPtr<class FOnDaySeasonChange__DelegateSignature> OnDaySeasonChange
TAssetPtr<class FOnDaySeasonChange__DelegateSignature> ABP_QuestManager_C::M_GetOnDaySeasonChange() const {
	return Read<TAssetPtr<class FOnDaySeasonChange__DelegateSignature>>((byte*)this + 712);
}
TAssetPtr<class FOnDaySeasonChange__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnDaySeasonChange() {
	return reinterpret_cast<TAssetPtr<class FOnDaySeasonChange__DelegateSignature>*>((byte*)this + 712);
}
void ABP_QuestManager_C::M_SetOnDaySeasonChange(const TAssetPtr<class FOnDaySeasonChange__DelegateSignature>& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of OnGoalsTimePass
// Declaration: TAssetPtr<class FOnGoalsTimePass__DelegateSignature> OnGoalsTimePass
TAssetPtr<class FOnGoalsTimePass__DelegateSignature> ABP_QuestManager_C::M_GetOnGoalsTimePass() const {
	return Read<TAssetPtr<class FOnGoalsTimePass__DelegateSignature>>((byte*)this + 728);
}
TAssetPtr<class FOnGoalsTimePass__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnGoalsTimePass() {
	return reinterpret_cast<TAssetPtr<class FOnGoalsTimePass__DelegateSignature>*>((byte*)this + 728);
}
void ABP_QuestManager_C::M_SetOnGoalsTimePass(const TAssetPtr<class FOnGoalsTimePass__DelegateSignature>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of OnArcheryContestUpdate
// Declaration: TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature> OnArcheryContestUpdate
TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature> ABP_QuestManager_C::M_GetOnArcheryContestUpdate() const {
	return Read<TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>>((byte*)this + 744);
}
TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnArcheryContestUpdate() {
	return reinterpret_cast<TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>*>((byte*)this + 744);
}
void ABP_QuestManager_C::M_SetOnArcheryContestUpdate(const TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of OnFoliageRemoved
// Declaration: TAssetPtr<class FOnFoliageRemoved__DelegateSignature> OnFoliageRemoved
TAssetPtr<class FOnFoliageRemoved__DelegateSignature> ABP_QuestManager_C::M_GetOnFoliageRemoved() const {
	return Read<TAssetPtr<class FOnFoliageRemoved__DelegateSignature>>((byte*)this + 760);
}
TAssetPtr<class FOnFoliageRemoved__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnFoliageRemoved() {
	return reinterpret_cast<TAssetPtr<class FOnFoliageRemoved__DelegateSignature>*>((byte*)this + 760);
}
void ABP_QuestManager_C::M_SetOnFoliageRemoved(const TAssetPtr<class FOnFoliageRemoved__DelegateSignature>& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of OnQuestCompleted
// Declaration: TAssetPtr<class FOnQuestCompleted__DelegateSignature> OnQuestCompleted
TAssetPtr<class FOnQuestCompleted__DelegateSignature> ABP_QuestManager_C::M_GetOnQuestCompleted() const {
	return Read<TAssetPtr<class FOnQuestCompleted__DelegateSignature>>((byte*)this + 776);
}
TAssetPtr<class FOnQuestCompleted__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnQuestCompleted() {
	return reinterpret_cast<TAssetPtr<class FOnQuestCompleted__DelegateSignature>*>((byte*)this + 776);
}
void ABP_QuestManager_C::M_SetOnQuestCompleted(const TAssetPtr<class FOnQuestCompleted__DelegateSignature>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of OnFlirtWithNPC
// Declaration: TAssetPtr<class FOnFlirtWithNPC__DelegateSignature> OnFlirtWithNPC
TAssetPtr<class FOnFlirtWithNPC__DelegateSignature> ABP_QuestManager_C::M_GetOnFlirtWithNPC() const {
	return Read<TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>>((byte*)this + 792);
}
TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnFlirtWithNPC() {
	return reinterpret_cast<TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>*>((byte*)this + 792);
}
void ABP_QuestManager_C::M_SetOnFlirtWithNPC(const TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of CustomGoalsMap
// Declaration: TMap<struct FString, class UMasterCustomGoal_C*> CustomGoalsMap
TMap<struct FString, class UMasterCustomGoal_C*> ABP_QuestManager_C::M_GetCustomGoalsMap() const {
	return Read<TMap<struct FString, class UMasterCustomGoal_C*>>((byte*)this + 808);
}
TMap<struct FString, class UMasterCustomGoal_C*>* ABP_QuestManager_C::M_PtrGetCustomGoalsMap() {
	return reinterpret_cast<TMap<struct FString, class UMasterCustomGoal_C*>*>((byte*)this + 808);
}
void ABP_QuestManager_C::M_SetCustomGoalsMap(const TMap<struct FString, class UMasterCustomGoal_C*>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of OnChunkToolInteraction
// Declaration: TAssetPtr<class FOnChunkToolInteraction__DelegateSignature> OnChunkToolInteraction
TAssetPtr<class FOnChunkToolInteraction__DelegateSignature> ABP_QuestManager_C::M_GetOnChunkToolInteraction() const {
	return Read<TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>>((byte*)this + 888);
}
TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnChunkToolInteraction() {
	return reinterpret_cast<TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>*>((byte*)this + 888);
}
void ABP_QuestManager_C::M_SetOnChunkToolInteraction(const TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of HugoBloodStains
// Declaration: class ABP_MasterQuestScenography_C* HugoBloodStains
class ABP_MasterQuestScenography_C* ABP_QuestManager_C::M_GetHugoBloodStains() const {
	return Read<class ABP_MasterQuestScenography_C*>((byte*)this + 904);
}
class ABP_MasterQuestScenography_C** ABP_QuestManager_C::M_PtrGetHugoBloodStains() {
	return reinterpret_cast<class ABP_MasterQuestScenography_C**>((byte*)this + 904);
}
void ABP_QuestManager_C::M_SetHugoBloodStains(const class ABP_MasterQuestScenography_C*& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of KestrelMess
// Declaration: class ABP_MasterQuestScenography_C* KestrelMess
class ABP_MasterQuestScenography_C* ABP_QuestManager_C::M_GetKestrelMess() const {
	return Read<class ABP_MasterQuestScenography_C*>((byte*)this + 912);
}
class ABP_MasterQuestScenography_C** ABP_QuestManager_C::M_PtrGetKestrelMess() {
	return reinterpret_cast<class ABP_MasterQuestScenography_C**>((byte*)this + 912);
}
void ABP_QuestManager_C::M_SetKestrelMess(const class ABP_MasterQuestScenography_C*& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of OnBanditCampCleared
// Declaration: TAssetPtr<class FOnBanditCampCleared__DelegateSignature> OnBanditCampCleared
TAssetPtr<class FOnBanditCampCleared__DelegateSignature> ABP_QuestManager_C::M_GetOnBanditCampCleared() const {
	return Read<TAssetPtr<class FOnBanditCampCleared__DelegateSignature>>((byte*)this + 920);
}
TAssetPtr<class FOnBanditCampCleared__DelegateSignature>* ABP_QuestManager_C::M_PtrGetOnBanditCampCleared() {
	return reinterpret_cast<TAssetPtr<class FOnBanditCampCleared__DelegateSignature>*>((byte*)this + 920);
}
void ABP_QuestManager_C::M_SetOnBanditCampCleared(const TAssetPtr<class FOnBanditCampCleared__DelegateSignature>& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of AcceptedFamilyQuests
// Declaration: TAssetPtr<class FNone_513> AcceptedFamilyQuests
TAssetPtr<class FNone_513> ABP_QuestManager_C::M_GetAcceptedFamilyQuests() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 936);
}
TAssetPtr<class FNone_513>* ABP_QuestManager_C::M_PtrGetAcceptedFamilyQuests() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 936);
}
void ABP_QuestManager_C::M_SetAcceptedFamilyQuests(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of ShouldWaitForSeasonWithFamilyQuest
// Declaration: bool ShouldWaitForSeasonWithFamilyQuest
bool ABP_QuestManager_C::M_GetShouldWaitForSeasonWithFamilyQuest() const {
	return Read<bool>((byte*)this + 1016);
}
bool* ABP_QuestManager_C::M_PtrGetShouldWaitForSeasonWithFamilyQuest() {
	return reinterpret_cast<bool*>((byte*)this + 1016);
}
void ABP_QuestManager_C::M_SetShouldWaitForSeasonWithFamilyQuest(const bool& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of DialogueChoices
// Declaration: TMap<struct FName, int32_t> DialogueChoices
TMap<struct FName, int32_t> ABP_QuestManager_C::M_GetDialogueChoices() const {
	return Read<TMap<struct FName, int32_t>>((byte*)this + 1024);
}
TMap<struct FName, int32_t>* ABP_QuestManager_C::M_PtrGetDialogueChoices() {
	return reinterpret_cast<TMap<struct FName, int32_t>*>((byte*)this + 1024);
}
void ABP_QuestManager_C::M_SetDialogueChoices(const TMap<struct FName, int32_t>& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of NoticeBoardReference
// Declaration: class AActor* NoticeBoardReference
class AActor* ABP_QuestManager_C::M_GetNoticeBoardReference() const {
	return Read<class AActor*>((byte*)this + 1104);
}
class AActor** ABP_QuestManager_C::M_PtrGetNoticeBoardReference() {
	return reinterpret_cast<class AActor**>((byte*)this + 1104);
}
void ABP_QuestManager_C::M_SetNoticeBoardReference(const class AActor*& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of MultiGenericQuestHistory
// Declaration: TArray<struct FName> MultiGenericQuestHistory
TArray<struct FName> ABP_QuestManager_C::M_GetMultiGenericQuestHistory() const {
	return Read<TArray<struct FName>>((byte*)this + 1112);
}
TArray<struct FName>* ABP_QuestManager_C::M_PtrGetMultiGenericQuestHistory() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1112);
}
void ABP_QuestManager_C::M_SetMultiGenericQuestHistory(const TArray<struct FName>& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of AnimalsQuestLoot
// Declaration: TArray<struct FST_AnimalQuestLoot> AnimalsQuestLoot
TArray<struct FST_AnimalQuestLoot> ABP_QuestManager_C::M_GetAnimalsQuestLoot() const {
	return Read<TArray<struct FST_AnimalQuestLoot>>((byte*)this + 1128);
}
TArray<struct FST_AnimalQuestLoot>* ABP_QuestManager_C::M_PtrGetAnimalsQuestLoot() {
	return reinterpret_cast<TArray<struct FST_AnimalQuestLoot>*>((byte*)this + 1128);
}
void ABP_QuestManager_C::M_SetAnimalsQuestLoot(const TArray<struct FST_AnimalQuestLoot>& value) {
	Write((byte*)this + 1128, value);
}
// Member Getter and Setter of Co_OpStartSideQuestsList
// Declaration: TArray<struct FName> Co_OpStartSideQuestsList
TArray<struct FName> ABP_QuestManager_C::M_GetCo_OpStartSideQuestsList() const {
	return Read<TArray<struct FName>>((byte*)this + 1144);
}
TArray<struct FName>* ABP_QuestManager_C::M_PtrGetCo_OpStartSideQuestsList() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1144);
}
void ABP_QuestManager_C::M_SetCo_OpStartSideQuestsList(const TArray<struct FName>& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of Co_OpEndSideQuestsList
// Declaration: TArray<struct FName> Co_OpEndSideQuestsList
TArray<struct FName> ABP_QuestManager_C::M_GetCo_OpEndSideQuestsList() const {
	return Read<TArray<struct FName>>((byte*)this + 1160);
}
TArray<struct FName>* ABP_QuestManager_C::M_PtrGetCo_OpEndSideQuestsList() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1160);
}
void ABP_QuestManager_C::M_SetCo_OpEndSideQuestsList(const TArray<struct FName>& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of SkipGivingNextObjectives
// Declaration: TMap<struct FName, int32_t> SkipGivingNextObjectives
TMap<struct FName, int32_t> ABP_QuestManager_C::M_GetSkipGivingNextObjectives() const {
	return Read<TMap<struct FName, int32_t>>((byte*)this + 1176);
}
TMap<struct FName, int32_t>* ABP_QuestManager_C::M_PtrGetSkipGivingNextObjectives() {
	return reinterpret_cast<TMap<struct FName, int32_t>*>((byte*)this + 1176);
}
void ABP_QuestManager_C::M_SetSkipGivingNextObjectives(const TMap<struct FName, int32_t>& value) {
	Write((byte*)this + 1176, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedByPlayer__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::IncreaseHuntedByPlayer__DelegateSignature(TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedByPlayer__DelegateSignature");

	struct ABP_QuestManager_C_IncreaseHuntedByPlayer__DelegateSignature_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_IncreaseHuntedByPlayer__DelegateSignature_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnVillageParametersChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageGoalType	Type: TEnumAsByte<E_Goal_VillageParametersTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnVillageParametersChange__DelegateSignature(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnVillageParametersChange__DelegateSignature");

	struct ABP_QuestManager_C_OnVillageParametersChange__DelegateSignature_Params {
		TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_OnVillageParametersChange__DelegateSignature_Params params;
	params.VillageGoalType = VillageGoalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnTalentsChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnTalentsChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnTalentsChange__DelegateSignature");

	struct ABP_QuestManager_C_OnTalentsChange__DelegateSignature_Params {
	};
	ABP_QuestManager_C_OnTalentsChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnVillagersProfessionsChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnVillagersProfessionsChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnVillagersProfessionsChange__DelegateSignature");

	struct ABP_QuestManager_C_OnVillagersProfessionsChange__DelegateSignature_Params {
	};
	ABP_QuestManager_C_OnVillagersProfessionsChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnDaySeasonChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange__DelegateSignature");

	struct ABP_QuestManager_C_OnDaySeasonChange__DelegateSignature_Params {
	};
	ABP_QuestManager_C_OnDaySeasonChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: PassedTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnGoalsTimePass__DelegateSignature(struct FST_Time PassedTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass__DelegateSignature");

	struct ABP_QuestManager_C_OnGoalsTimePass__DelegateSignature_Params {
		struct FST_Time PassedTime;			//Offset: 0 | ElementSize: 24
	};
	ABP_QuestManager_C_OnGoalsTimePass__DelegateSignature_Params params;
	params.PassedTime = PassedTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate__DelegateSignature
// Flags: Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievedPoints	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target_sTags	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::OnArcheryContestUpdate__DelegateSignature(float AchievedPoints, TArray<struct FName>* Target_sTags) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate__DelegateSignature");

	struct ABP_QuestManager_C_OnArcheryContestUpdate__DelegateSignature_Params {
		float AchievedPoints;			//Offset: 0 | ElementSize: 4
		TArray<struct FName> Target_sTags;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_OnArcheryContestUpdate__DelegateSignature_Params params;
	params.AchievedPoints = AchievedPoints;

	UObject::ProcessEvent(fn, &params);
	if (Target_sTags != nullptr)
		*Target_sTags = params.Target_sTags;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoliageSpecies	Type: TEnumAsByte<E_FoliageSpecies>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFoliageRemoved__DelegateSignature(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved__DelegateSignature");

	struct ABP_QuestManager_C_OnFoliageRemoved__DelegateSignature_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FoliageSpecies> FoliageSpecies;			//Offset: 1 | ElementSize: 1
	};
	ABP_QuestManager_C_OnFoliageRemoved__DelegateSignature_Params params;
	params.ResourceType = ResourceType;
	params.FoliageSpecies = FoliageSpecies;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnQuestCompleted__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted__DelegateSignature");

	struct ABP_QuestManager_C_OnQuestCompleted__DelegateSignature_Params {
	};
	ABP_QuestManager_C_OnQuestCompleted__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFlirtWithNPC__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC__DelegateSignature");

	struct ABP_QuestManager_C_OnFlirtWithNPC__DelegateSignature_Params {
	};
	ABP_QuestManager_C_OnFlirtWithNPC__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnChunkToolInteraction__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedChunkFinalState	Type: EChunkState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnChunkToolInteraction__DelegateSignature(EChunkState InteractedChunkFinalState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnChunkToolInteraction__DelegateSignature");

	struct ABP_QuestManager_C_OnChunkToolInteraction__DelegateSignature_Params {
		EChunkState InteractedChunkFinalState;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_OnChunkToolInteraction__DelegateSignature_Params params;
	params.InteractedChunkFinalState = InteractedChunkFinalState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnBanditCampCleared__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: CampLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CampID	Type: struct FGuid	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnBanditCampCleared__DelegateSignature(struct FVector CampLocation, struct FGuid CampID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnBanditCampCleared__DelegateSignature");

	struct ABP_QuestManager_C_OnBanditCampCleared__DelegateSignature_Params {
		struct FVector CampLocation;			//Offset: 0 | ElementSize: 12
		struct FGuid CampID;			//Offset: 12 | ElementSize: 16
	};
	ABP_QuestManager_C_OnBanditCampCleared__DelegateSignature_Params params;
	params.CampLocation = CampLocation;
	params.CampID = CampID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ExecuteUbergraph_BP_QuestManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::ExecuteUbergraph_BP_QuestManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ExecuteUbergraph_BP_QuestManager");

	struct ABP_QuestManager_C_ExecuteUbergraph_BP_QuestManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_QuestManager_C_ExecuteUbergraph_BP_QuestManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Event_1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnPlayerAnimalsChange_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Event_1");

	struct ABP_QuestManager_C_OnPlayerAnimalsChange_Event_1_Params {
	};
	ABP_QuestManager_C_OnPlayerAnimalsChange_Event_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFlirtWithNPC_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Event");

	struct ABP_QuestManager_C_OnFlirtWithNPC_Event_Params {
	};
	ABP_QuestManager_C_OnFlirtWithNPC_Event_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnQuestCompleted_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Event");

	struct ABP_QuestManager_C_OnQuestCompleted_Event_Params {
	};
	ABP_QuestManager_C_OnQuestCompleted_Event_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoliageSpecies	Type: TEnumAsByte<E_FoliageSpecies>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFoliageRemoved_Event(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Event");

	struct ABP_QuestManager_C_OnFoliageRemoved_Event_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FoliageSpecies> FoliageSpecies;			//Offset: 1 | ElementSize: 1
	};
	ABP_QuestManager_C_OnFoliageRemoved_Event_Params params;
	params.ResourceType = ResourceType;
	params.FoliageSpecies = FoliageSpecies;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Event
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievedPoints	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target_sTags	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::OnArcheryContestUpdate_Event(float AchievedPoints, TArray<struct FName>* Target_sTags) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Event");

	struct ABP_QuestManager_C_OnArcheryContestUpdate_Event_Params {
		float AchievedPoints;			//Offset: 0 | ElementSize: 4
		TArray<struct FName> Target_sTags;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_OnArcheryContestUpdate_Event_Params params;
	params.AchievedPoints = AchievedPoints;

	UObject::ProcessEvent(fn, &params);
	if (Target_sTags != nullptr)
		*Target_sTags = params.Target_sTags;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PassedTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnGoalsTimePass_Event(struct FST_Time PassedTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Event");

	struct ABP_QuestManager_C_OnGoalsTimePass_Event_Params {
		struct FST_Time PassedTime;			//Offset: 0 | ElementSize: 24
	};
	ABP_QuestManager_C_OnGoalsTimePass_Event_Params params;
	params.PassedTime = PassedTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnDaySeasonChange_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Event");

	struct ABP_QuestManager_C_OnDaySeasonChange_Event_Params {
	};
	ABP_QuestManager_C_OnDaySeasonChange_Event_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Event_1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnPlayersPopulationChange_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Event_1");

	struct ABP_QuestManager_C_OnPlayersPopulationChange_Event_1_Params {
	};
	ABP_QuestManager_C_OnPlayersPopulationChange_Event_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckPledgedProfessions() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions");

	struct ABP_QuestManager_C_CheckPledgedProfessions_Params {
	};
	ABP_QuestManager_C_CheckPledgedProfessions_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForChildren");

	struct ABP_QuestManager_C_CheckForChildren_Params {
	};
	ABP_QuestManager_C_CheckForChildren_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForPatner() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForPatner");

	struct ABP_QuestManager_C_CheckForPatner_Params {
	};
	ABP_QuestManager_C_CheckForPatner_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckTalentPoints() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints");

	struct ABP_QuestManager_C_CheckTalentPoints_Params {
	};
	ABP_QuestManager_C_CheckTalentPoints_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageGoalType	Type: TEnumAsByte<E_Goal_VillageParametersTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateVillageParametersQuests(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests");

	struct ABP_QuestManager_C_UpdateVillageParametersQuests_Params {
		TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_UpdateVillageParametersQuests_Params params;
	params.VillageGoalType = VillageGoalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::IncreaseHuntedAnimals(TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals");

	struct ABP_QuestManager_C_IncreaseHuntedAnimals_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_IncreaseHuntedAnimals_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForNeededItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems");

	struct ABP_QuestManager_C_CheckForNeededItems_Params {
	};
	ABP_QuestManager_C_CheckForNeededItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.DoAutosaveOnQuestCompletion
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::DoAutosaveOnQuestCompletion() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.DoAutosaveOnQuestCompletion");

	struct ABP_QuestManager_C_DoAutosaveOnQuestCompletion_Params {
	};
	ABP_QuestManager_C_DoAutosaveOnQuestCompletion_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnQuestInventoryChange
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnQuestInventoryChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestInventoryChange");

	struct ABP_QuestManager_C_OnQuestInventoryChange_Params {
	};
	ABP_QuestManager_C_OnQuestInventoryChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixStartingQuestOnLoad
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixStartingQuestOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixStartingQuestOnLoad");

	struct ABP_QuestManager_C_FixStartingQuestOnLoad_Params {
	};
	ABP_QuestManager_C_FixStartingQuestOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.TryToGenerateTaxesQuest
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::TryToGenerateTaxesQuest() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.TryToGenerateTaxesQuest");

	struct ABP_QuestManager_C_TryToGenerateTaxesQuest_Params {
	};
	ABP_QuestManager_C_TryToGenerateTaxesQuest_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.StartQuestSystem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::StartQuestSystem(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartQuestSystem");

	struct ABP_QuestManager_C_StartQuestSystem_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_StartQuestSystem_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AfterSeasonSkip
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::AfterSeasonSkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AfterSeasonSkip");

	struct ABP_QuestManager_C_AfterSeasonSkip_Params {
	};
	ABP_QuestManager_C_AfterSeasonSkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ReceiveBeginPlay");

	struct ABP_QuestManager_C_ReceiveBeginPlay_Params {
	};
	ABP_QuestManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AssignQuestToNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InputPin	Type: struct FST_QuestInfos	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: NPCID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: QuestDataTable	Type: class UDataTable*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AssignQuestToNPC(struct FST_QuestInfos InputPin, struct FString NPCID, class UDataTable* QuestDataTable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignQuestToNPC");

	struct ABP_QuestManager_C_AssignQuestToNPC_Params {
		struct FST_QuestInfos InputPin;			//Offset: 0 | ElementSize: 992
		struct FString NPCID;			//Offset: 992 | ElementSize: 16
		class UDataTable* QuestDataTable;			//Offset: 1008 | ElementSize: 8
	};
	ABP_QuestManager_C_AssignQuestToNPC_Params params;
	params.InputPin = InputPin;
	params.NPCID = NPCID;
	params.QuestDataTable = QuestDataTable;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FailQuest
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::FailQuest(int32_t QuestID, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailQuest");

	struct ABP_QuestManager_C_FailQuest_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		bool AllPlayers;			//Offset: 4 | ElementSize: 1
	};
	ABP_QuestManager_C_FailQuest_Params params;
	params.QuestID = QuestID;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.Init
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.Init");

	struct ABP_QuestManager_C_Init_Params {
	};
	ABP_QuestManager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddEmotesToDialogueChoices
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnlockedEmotes	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::AddEmotesToDialogueChoices(const TArray<struct FName>& UnlockedEmotes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddEmotesToDialogueChoices");

	struct ABP_QuestManager_C_AddEmotesToDialogueChoices_Params {
		TArray<struct FName> UnlockedEmotes;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_AddEmotesToDialogueChoices_Params params;
	params.UnlockedEmotes = UnlockedEmotes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Choice	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AddToDialogueChoice_Multicast(struct FName ChoiceID, int32_t Choice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice_Multicast");

	struct ABP_QuestManager_C_AddToDialogueChoice_Multicast_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t Choice;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_AddToDialogueChoice_Multicast_Params params;
	params.ChoiceID = ChoiceID;
	params.Choice = Choice;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Choice	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AddToDialogueChoice_Server(struct FName ChoiceID, int32_t Choice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice_Server");

	struct ABP_QuestManager_C_AddToDialogueChoice_Server_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t Choice;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_AddToDialogueChoice_Server_Params params;
	params.ChoiceID = ChoiceID;
	params.Choice = Choice;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FailQuest_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FailQuest_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailQuest_Server");

	struct ABP_QuestManager_C_FailQuest_Server_Params {
	};
	ABP_QuestManager_C_FailQuest_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CompleteQuest_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CompleteQuest_Server(int32_t QuestID, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteQuest_Server");

	struct ABP_QuestManager_C_CompleteQuest_Server_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		bool AllPlayers;			//Offset: 4 | ElementSize: 1
	};
	ABP_QuestManager_C_CompleteQuest_Server_Params params;
	params.QuestID = QuestID;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateNPCQuestsOnSeasonChange
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateNPCQuestsOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateNPCQuestsOnSeasonChange");

	struct ABP_QuestManager_C_UpdateNPCQuestsOnSeasonChange_Params {
	};
	ABP_QuestManager_C_UpdateNPCQuestsOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GenerateChallengeValues
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputChallenge	Type: struct FST_Challange	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: OutputChallenge	Type: struct FST_Challange	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GenerateChallengeValues(const struct FST_Challange& InputChallenge, struct FST_Challange* OutputChallenge) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateChallengeValues");

	struct ABP_QuestManager_C_GenerateChallengeValues_Params {
		struct FST_Challange InputChallenge;			//Offset: 0 | ElementSize: 264
		struct FST_Challange OutputChallenge;			//Offset: 264 | ElementSize: 264
	};
	ABP_QuestManager_C_GenerateChallengeValues_Params params;
	params.InputChallenge = InputChallenge;

	UObject::ProcessEvent(fn, &params);
	if (OutputChallenge != nullptr)
		*OutputChallenge = params.OutputChallenge;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.StartQuest
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Quest	Type: struct FST_QuestInfos	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: ThroughDialogue_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: QuestID	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::StartQuest(struct FST_QuestInfos Quest, bool ThroughDialogue_, int32_t* QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartQuest");

	struct ABP_QuestManager_C_StartQuest_Params {
		struct FST_QuestInfos Quest;			//Offset: 0 | ElementSize: 992
		bool ThroughDialogue_;			//Offset: 992 | ElementSize: 1
		int32_t QuestID;			//Offset: 996 | ElementSize: 4
	};
	ABP_QuestManager_C_StartQuest_Params params;
	params.Quest = Quest;
	params.ThroughDialogue_ = ThroughDialogue_;

	UObject::ProcessEvent(fn, &params);
	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CompleteGoal
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CompleteGoal(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteGoal");

	struct ABP_QuestManager_C_CompleteGoal_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
		int32_t GoalID;			//Offset: 8 | ElementSize: 4
		int32_t PlayerId;			//Offset: 12 | ElementSize: 4
	};
	ABP_QuestManager_C_CompleteGoal_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FindNPCsForTalkGoalAndHideNPCsHeldItem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FindNPCsForTalkGoalAndHideNPCsHeldItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FindNPCsForTalkGoalAndHideNPCsHeldItem");

	struct ABP_QuestManager_C_FindNPCsForTalkGoalAndHideNPCsHeldItem_Params {
	};
	ABP_QuestManager_C_FindNPCsForTalkGoalAndHideNPCsHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.StartObjective
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::StartObjective(int32_t QuestID, int32_t ObjectiveID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartObjective");

	struct ABP_QuestManager_C_StartObjective_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
	};
	ABP_QuestManager_C_StartObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CompleteObjective
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CompleteObjective(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteObjective");

	struct ABP_QuestManager_C_CompleteObjective_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
		int32_t GoalID;			//Offset: 8 | ElementSize: 4
		int32_t PlayerId;			//Offset: 12 | ElementSize: 4
	};
	ABP_QuestManager_C_CompleteObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestReference	Type: struct FST_QuestInfos	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPCValidForQuest	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckNPCForQuestRestrictions(struct FST_QuestInfos QuestReference, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions");

	struct ABP_QuestManager_C_CheckNPCForQuestRestrictions_Params {
		struct FST_QuestInfos QuestReference;			//Offset: 0 | ElementSize: 992
		class ABP_NPC_C* NPCReference;			//Offset: 992 | ElementSize: 8
		bool NPCValidForQuest;			//Offset: 1000 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckNPCForQuestRestrictions_Params params;
	params.QuestReference = QuestReference;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (NPCValidForQuest != nullptr)
		*NPCValidForQuest = params.NPCValidForQuest;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuests() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_Params {
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SetMainQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MainQuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SetMainQuest(struct FName MainQuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetMainQuest");

	struct ABP_QuestManager_C_SetMainQuest_Params {
		struct FName MainQuestID;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_SetMainQuest_Params params;
	params.MainQuestID = MainQuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.LoadSaveFileIntoSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.LoadSaveFileIntoSystem");

	struct ABP_QuestManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SaveDataFromSystemToFile");

	struct ABP_QuestManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AssignStoryQuests
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::AssignStoryQuests() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignStoryQuests");

	struct ABP_QuestManager_C_AssignStoryQuests_Params {
	};
	ABP_QuestManager_C_AssignStoryQuests_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GiveQuestReward
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputPin	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GiveQuestReward(int32_t InputPin, int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GiveQuestReward");

	struct ABP_QuestManager_C_GiveQuestReward_Params {
		int32_t InputPin;			//Offset: 0 | ElementSize: 4
		int32_t PlayerId;			//Offset: 4 | ElementSize: 4
	};
	ABP_QuestManager_C_GiveQuestReward_Params params;
	params.InputPin = InputPin;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForTalk
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalkRestriction	Type: struct FST_GeneratedQuest_TalkGoalNPCRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPCValidForQuest	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckNPCForTalk(struct FST_GeneratedQuest_TalkGoalNPCRestrictions TalkRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckNPCForTalk");

	struct ABP_QuestManager_C_CheckNPCForTalk_Params {
		struct FST_GeneratedQuest_TalkGoalNPCRestrictions TalkRestriction;			//Offset: 0 | ElementSize: 256
		class ABP_NPC_C* NPCReference;			//Offset: 256 | ElementSize: 8
		bool NPCValidForQuest;			//Offset: 264 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckNPCForTalk_Params params;
	params.TalkRestriction = TalkRestriction;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (NPCValidForQuest != nullptr)
		*NPCValidForQuest = params.NPCValidForQuest;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FailObjective
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FailObjective(int32_t QuestID, int32_t ObjectiveID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailObjective");

	struct ABP_QuestManager_C_FailObjective_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
	};
	ABP_QuestManager_C_FailObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckTechnologyRestriction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TechnologyRestriction	Type: struct FST_GeneratedQuestRestrictions_Technology	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckTechnologyRestriction(struct FST_GeneratedQuestRestrictions_Technology TechnologyRestriction, bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTechnologyRestriction");

	struct ABP_QuestManager_C_CheckTechnologyRestriction_Params {
		struct FST_GeneratedQuestRestrictions_Technology TechnologyRestriction;			//Offset: 0 | ElementSize: 176
		bool Value;			//Offset: 176 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckTechnologyRestriction_Params params;
	params.TechnologyRestriction = TechnologyRestriction;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestRewards
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GeneratorQuestsRewards	Type: TArray<struct FST_GenerateQuestReward>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: GeneratedReward	Type: struct FST_QuestReward	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GenerateQuestRewards(TArray<struct FST_GenerateQuestReward>* GeneratorQuestsRewards, struct FST_QuestReward* GeneratedReward) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestRewards");

	struct ABP_QuestManager_C_GenerateQuestRewards_Params {
		TArray<struct FST_GenerateQuestReward> GeneratorQuestsRewards;			//Offset: 0 | ElementSize: 16
		struct FST_QuestReward GeneratedReward;			//Offset: 16 | ElementSize: 232
	};
	ABP_QuestManager_C_GenerateQuestRewards_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GeneratorQuestsRewards != nullptr)
		*GeneratorQuestsRewards = params.GeneratorQuestsRewards;
	if (GeneratedReward != nullptr)
		*GeneratedReward = params.GeneratedReward;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GeneratorQuestObjectives	Type: TArray<struct FST_GenerateObjectivesForQuest>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
// Name: GeneratedObjectives	Type: TArray<struct FST_QuestObjectives>	Flags: Parm, OutParm, ContainsInstancedReference
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::GenerateQuestObjectives(TArray<struct FST_GenerateObjectivesForQuest>* GeneratorQuestObjectives, TArray<struct FST_QuestObjectives>* GeneratedObjectives, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives");

	struct ABP_QuestManager_C_GenerateQuestObjectives_Params {
		TArray<struct FST_GenerateObjectivesForQuest> GeneratorQuestObjectives;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_QuestObjectives> GeneratedObjectives;			//Offset: 16 | ElementSize: 16
		bool Success;			//Offset: 32 | ElementSize: 1
	};
	ABP_QuestManager_C_GenerateQuestObjectives_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GeneratorQuestObjectives != nullptr)
		*GeneratorQuestObjectives = params.GeneratorQuestObjectives;
	if (GeneratedObjectives != nullptr)
		*GeneratedObjectives = params.GeneratedObjectives;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixDuplicatedMainMultiQuestsOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixDuplicatedMainMultiQuestsOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixDuplicatedMainMultiQuestsOnLoad");

	struct ABP_QuestManager_C_FixDuplicatedMainMultiQuestsOnLoad_Params {
	};
	ABP_QuestManager_C_FixDuplicatedMainMultiQuestsOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GenerateTaxQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::GenerateTaxQuest() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateTaxQuest");

	struct ABP_QuestManager_C_GenerateTaxQuest_Params {
	};
	ABP_QuestManager_C_GenerateTaxQuest_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckDevelopmentStageOnChaptersLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckDevelopmentStageOnChaptersLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckDevelopmentStageOnChaptersLoad");

	struct ABP_QuestManager_C_CheckDevelopmentStageOnChaptersLoad_Params {
	};
	ABP_QuestManager_C_CheckDevelopmentStageOnChaptersLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive");

	struct ABP_QuestManager_C_FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive_Params {
	};
	ABP_QuestManager_C_FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixListenToConversationGoalsOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixListenToConversationGoalsOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixListenToConversationGoalsOnLoad");

	struct ABP_QuestManager_C_FixListenToConversationGoalsOnLoad_Params {
	};
	ABP_QuestManager_C_FixListenToConversationGoalsOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixHeirQuestsOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixHeirQuestsOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixHeirQuestsOnLoad");

	struct ABP_QuestManager_C_FixHeirQuestsOnLoad_Params {
	};
	ABP_QuestManager_C_FixHeirQuestsOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixAlwinQuestlineOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixAlwinQuestlineOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinQuestlineOnLoad");

	struct ABP_QuestManager_C_FixAlwinQuestlineOnLoad_Params {
	};
	ABP_QuestManager_C_FixAlwinQuestlineOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuest_Cheat
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuest_Cheat(struct FName QuestName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuest_Cheat");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuest_Cheat_Params {
		struct FName QuestName;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuest_Cheat_Params params;
	params.QuestName = QuestName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ClearOldSideQuests
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::ClearOldSideQuests() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ClearOldSideQuests");

	struct ABP_QuestManager_C_ClearOldSideQuests_Params {
	};
	ABP_QuestManager_C_ClearOldSideQuests_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RerollTaxQuestOnUniegostDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::RerollTaxQuestOnUniegostDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RerollTaxQuestOnUniegostDeath");

	struct ABP_QuestManager_C_RerollTaxQuestOnUniegostDeath_Params {
	};
	ABP_QuestManager_C_RerollTaxQuestOnUniegostDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckAlwin'sTargetAtGostovia
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckAlwin_sTargetAtGostovia() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckAlwin'sTargetAtGostovia");

	struct ABP_QuestManager_C_CheckAlwin_sTargetAtGostovia_Params {
	};
	ABP_QuestManager_C_CheckAlwin_sTargetAtGostovia_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AssignGeneratedChallenge
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TmpNPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RowName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AssignGeneratedChallenge(class ABP_NPC_C* TmpNPCReference, struct FName RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignGeneratedChallenge");

	struct ABP_QuestManager_C_AssignGeneratedChallenge_Params {
		class ABP_NPC_C* TmpNPCReference;			//Offset: 0 | ElementSize: 8
		struct FName RowName;			//Offset: 8 | ElementSize: 8
	};
	ABP_QuestManager_C_AssignGeneratedChallenge_Params params;
	params.TmpNPCReference = TmpNPCReference;
	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CompleteQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CompleteQuest(int32_t QuestID, bool AllPlayers, int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteQuest");

	struct ABP_QuestManager_C_CompleteQuest_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		bool AllPlayers;			//Offset: 4 | ElementSize: 1
		int32_t PlayerId;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_CompleteQuest_Params params;
	params.QuestID = QuestID;
	params.AllPlayers = AllPlayers;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForNeededItems_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems_Function");

	struct ABP_QuestManager_C_CheckForNeededItems_Function_Params {
	};
	ABP_QuestManager_C_CheckForNeededItems_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::IncreaseHuntedAnimals_Function(TEnumAsByte<E_AnimalType> AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals_Function");

	struct ABP_QuestManager_C_IncreaseHuntedAnimals_Function_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_IncreaseHuntedAnimals_Function_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageGoalType	Type: TEnumAsByte<E_Goal_VillageParametersTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateVillageParametersQuests_Function(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests_Function");

	struct ABP_QuestManager_C_UpdateVillageParametersQuests_Function_Params {
		TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_QuestManager_C_UpdateVillageParametersQuests_Function_Params params;
	params.VillageGoalType = VillageGoalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckTalentPoints_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints_Function");

	struct ABP_QuestManager_C_CheckTalentPoints_Function_Params {
	};
	ABP_QuestManager_C_CheckTalentPoints_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForPatner_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForPatner_Function");

	struct ABP_QuestManager_C_CheckForPatner_Function_Params {
	};
	ABP_QuestManager_C_CheckForPatner_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForChildren_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForChildren_Function");

	struct ABP_QuestManager_C_CheckForChildren_Function_Params {
	};
	ABP_QuestManager_C_CheckForChildren_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckPledgedProfessions_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions_Function");

	struct ABP_QuestManager_C_CheckPledgedProfessions_Function_Params {
	};
	ABP_QuestManager_C_CheckPledgedProfessions_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnPlayersPopulationChange_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Function");

	struct ABP_QuestManager_C_OnPlayersPopulationChange_Function_Params {
	};
	ABP_QuestManager_C_OnPlayersPopulationChange_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnPlayerAnimalsChange_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Function");

	struct ABP_QuestManager_C_OnPlayerAnimalsChange_Function_Params {
	};
	ABP_QuestManager_C_OnPlayerAnimalsChange_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnDaySeasonChange_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Function");

	struct ABP_QuestManager_C_OnDaySeasonChange_Function_Params {
	};
	ABP_QuestManager_C_OnDaySeasonChange_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PassedTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnGoalsTimePass_Function(struct FST_Time PassedTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Function");

	struct ABP_QuestManager_C_OnGoalsTimePass_Function_Params {
		struct FST_Time PassedTime;			//Offset: 0 | ElementSize: 24
	};
	ABP_QuestManager_C_OnGoalsTimePass_Function_Params params;
	params.PassedTime = PassedTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Function
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievedPoints	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target_sTags	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::OnArcheryContestUpdate_Function(float AchievedPoints, TArray<struct FName>* Target_sTags) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Function");

	struct ABP_QuestManager_C_OnArcheryContestUpdate_Function_Params {
		float AchievedPoints;			//Offset: 0 | ElementSize: 4
		TArray<struct FName> Target_sTags;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_OnArcheryContestUpdate_Function_Params params;
	params.AchievedPoints = AchievedPoints;

	UObject::ProcessEvent(fn, &params);
	if (Target_sTags != nullptr)
		*Target_sTags = params.Target_sTags;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoliageSpecies	Type: TEnumAsByte<E_FoliageSpecies>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFoliageRemoved_Function(TEnumAsByte<E_Resources> FoliageType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Function");

	struct ABP_QuestManager_C_OnFoliageRemoved_Function_Params {
		TEnumAsByte<E_Resources> FoliageType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FoliageSpecies> FoliageSpecies;			//Offset: 1 | ElementSize: 1
	};
	ABP_QuestManager_C_OnFoliageRemoved_Function_Params params;
	params.FoliageType = FoliageType;
	params.FoliageSpecies = FoliageSpecies;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnQuestCompleted_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Function");

	struct ABP_QuestManager_C_OnQuestCompleted_Function_Params {
	};
	ABP_QuestManager_C_OnQuestCompleted_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::OnFlirtWithNPC_Function() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Function");

	struct ABP_QuestManager_C_OnFlirtWithNPC_Function_Params {
	};
	ABP_QuestManager_C_OnFlirtWithNPC_Function_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AssignFirstQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::AssignFirstQuest() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignFirstQuest");

	struct ABP_QuestManager_C_AssignFirstQuest_Params {
	};
	ABP_QuestManager_C_AssignFirstQuest_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckQuestsOnNPCRemove
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RemovedNPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckQuestsOnNPCRemove(class ABP_NPC_C* RemovedNPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckQuestsOnNPCRemove");

	struct ABP_QuestManager_C_CheckQuestsOnNPCRemove_Params {
		class ABP_NPC_C* RemovedNPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_CheckQuestsOnNPCRemove_Params params;
	params.RemovedNPCReference = RemovedNPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CancelQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CancelQuest(int32_t QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CancelQuest");

	struct ABP_QuestManager_C_CancelQuest_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
	};
	ABP_QuestManager_C_CancelQuest_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyGoal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Goal	Type: struct FST_MasterGoals	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixQuestEmptyGoal(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID, bool* Success, struct FST_MasterGoals* Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyGoal");

	struct ABP_QuestManager_C_FixQuestEmptyGoal_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		int32_t GoalID;			//Offset: 12 | ElementSize: 4
		bool Success;			//Offset: 16 | ElementSize: 1
		struct FST_MasterGoals Goal;			//Offset: 24 | ElementSize: 1416
	};
	ABP_QuestManager_C_FixQuestEmptyGoal_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Goal != nullptr)
		*Goal = params.Goal;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyObjective
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Objective	Type: struct FST_QuestObjectives	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixQuestEmptyObjective(struct FName QuestID, int32_t ObjectiveID, bool* Success, struct FST_QuestObjectives* Objective) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyObjective");

	struct ABP_QuestManager_C_FixQuestEmptyObjective_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		bool Success;			//Offset: 12 | ElementSize: 1
		struct FST_QuestObjectives Objective;			//Offset: 16 | ElementSize: 216
	};
	ABP_QuestManager_C_FixQuestEmptyObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Objective != nullptr)
		*Objective = params.Objective;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckAndFixDialogueOnLoad
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Goal	Type: struct FST_Goal_Talk	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Fixed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FixedGoal	Type: struct FST_Goal_Talk	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckAndFixDialogueOnLoad(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID, struct FST_Goal_Talk Goal, bool* Fixed, struct FST_Goal_Talk* FixedGoal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckAndFixDialogueOnLoad");

	struct ABP_QuestManager_C_CheckAndFixDialogueOnLoad_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		int32_t GoalID;			//Offset: 12 | ElementSize: 4
		struct FST_Goal_Talk Goal;			//Offset: 16 | ElementSize: 432
		bool Fixed;			//Offset: 448 | ElementSize: 1
		struct FST_Goal_Talk FixedGoal;			//Offset: 456 | ElementSize: 432
	};
	ABP_QuestManager_C_CheckAndFixDialogueOnLoad_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
	if (Fixed != nullptr)
		*Fixed = params.Fixed;
	if (FixedGoal != nullptr)
		*FixedGoal = params.FixedGoal;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SetNPCsObjectivesAndGoals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_QuestInfo	Type: struct FST_QuestInfos	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SetNPCsObjectivesAndGoals(const struct FST_QuestInfos& ST_QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetNPCsObjectivesAndGoals");

	struct ABP_QuestManager_C_SetNPCsObjectivesAndGoals_Params {
		struct FST_QuestInfos ST_QuestInfo;			//Offset: 0 | ElementSize: 992
	};
	ABP_QuestManager_C_SetNPCsObjectivesAndGoals_Params params;
	params.ST_QuestInfo = ST_QuestInfo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixAlwinOnVersion0_5_0_8
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixAlwinOnVersion0_5_0_8(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinOnVersion0_5_0_8");

	struct ABP_QuestManager_C_FixAlwinOnVersion0_5_0_8_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixAlwinOnVersion0_5_0_8_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixChapters0_5_1_1
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixChapters0_5_1_1(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixChapters0_5_1_1");

	struct ABP_QuestManager_C_FixChapters0_5_1_1_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixChapters0_5_1_1_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.Stop All Follow for Quest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonChange	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::Stop_All_Follow_for_Quest(int32_t QuestID, bool SeasonChange) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.Stop All Follow for Quest");

	struct ABP_QuestManager_C_Stop_All_Follow_for_Quest_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		bool SeasonChange;			//Offset: 4 | ElementSize: 1
	};
	ABP_QuestManager_C_Stop_All_Follow_for_Quest_Params params;
	params.QuestID = QuestID;
	params.SeasonChange = SeasonChange;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Goal_BuildTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Constructed_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests");

	struct ABP_QuestManager_C_UpdateBuildingQuests_Params {
		TEnumAsByte<E_Goal_BuildTypes> Type;			//Offset: 0 | ElementSize: 1
		bool Constructed_;			//Offset: 1 | ElementSize: 1
		struct FName Name;			//Offset: 4 | ElementSize: 8
		struct FVector Location;			//Offset: 12 | ElementSize: 12
	};
	ABP_QuestManager_C_UpdateBuildingQuests_Params params;
	params.Type = Type;
	params.Constructed_ = Constructed_;
	params.Name = Name;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SpawnCustomGoalObject
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomGoal	Type: struct FST_Goal_Custom	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalState	Type: TEnumAsByte<E_GoalState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SpawnCustomGoalObject(struct FST_Goal_Custom* CustomGoal, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalIndex, TEnumAsByte<E_GoalState> GoalState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SpawnCustomGoalObject");

	struct ABP_QuestManager_C_SpawnCustomGoalObject_Params {
		struct FST_Goal_Custom CustomGoal;			//Offset: 0 | ElementSize: 64
		struct FName QuestID;			//Offset: 64 | ElementSize: 8
		int32_t ObjectiveIndex;			//Offset: 72 | ElementSize: 4
		int32_t GoalIndex;			//Offset: 76 | ElementSize: 4
		TEnumAsByte<E_GoalState> GoalState;			//Offset: 80 | ElementSize: 1
	};
	ABP_QuestManager_C_SpawnCustomGoalObject_Params params;
	params.QuestID = QuestID;
	params.ObjectiveIndex = ObjectiveIndex;
	params.GoalIndex = GoalIndex;
	params.GoalState = GoalState;

	UObject::ProcessEvent(fn, &params);
	if (CustomGoal != nullptr)
		*CustomGoal = params.CustomGoal;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FailGoal
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FailGoal(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailGoal");

	struct ABP_QuestManager_C_FailGoal_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
		int32_t GoalID;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_FailGoal_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixUniegostOnVersion_1_0_0_8
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixUniegostOnVersion_1_0_0_8(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixUniegostOnVersion_1_0_0_8");

	struct ABP_QuestManager_C_FixUniegostOnVersion_1_0_0_8_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixUniegostOnVersion_1_0_0_8_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryVI_OnVersion_1_3_0_5
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixAlwinInStoryVI_OnVersion_1_3_0_5(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryVI_OnVersion_1_3_0_5");

	struct ABP_QuestManager_C_FixAlwinInStoryVI_OnVersion_1_3_0_5_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixAlwinInStoryVI_OnVersion_1_3_0_5_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixTaxQuestOnVersion_1_1_1_1
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixTaxQuestOnVersion_1_1_1_1(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixTaxQuestOnVersion_1_1_1_1");

	struct ABP_QuestManager_C_FixTaxQuestOnVersion_1_1_1_1_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixTaxQuestOnVersion_1_1_1_1_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryVII&VIII_UpToVersion_1_3_0_4
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixAlwinInStoryVII_VIII_UpToVersion_1_3_0_4(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryVII&VIII_UpToVersion_1_3_0_4");

	struct ABP_QuestManager_C_FixAlwinInStoryVII_VIII_UpToVersion_1_3_0_4_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixAlwinInStoryVII_VIII_UpToVersion_1_3_0_4_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SetKestrelBehavior
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::SetKestrelBehavior() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetKestrelBehavior");

	struct ABP_QuestManager_C_SetKestrelBehavior_Params {
	};
	ABP_QuestManager_C_SetKestrelBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GetActiveQuestIndex(struct FName QuestID, int32_t* QuestIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestIndex");

	struct ABP_QuestManager_C_GetActiveQuestIndex_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t QuestIndex;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_GetActiveQuestIndex_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (QuestIndex != nullptr)
		*QuestIndex = params.QuestIndex;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignFamilyQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Cheat	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignFamilyQuest(bool Cheat, struct FName CheatName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignFamilyQuest");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignFamilyQuest_Params {
		bool Cheat;			//Offset: 0 | ElementSize: 1
		struct FName CheatName;			//Offset: 4 | ElementSize: 8
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignFamilyQuest_Params params;
	params.Cheat = Cheat;
	params.CheatName = CheatName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddSamborFigurinesOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AddSamborFigurinesOnLoad(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddSamborFigurinesOnLoad");

	struct ABP_QuestManager_C_AddSamborFigurinesOnLoad_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_AddSamborFigurinesOnLoad_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixFindGoalForVengeanceQuest
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixFindGoalForVengeanceQuest(int32_t QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixFindGoalForVengeanceQuest");

	struct ABP_QuestManager_C_FixFindGoalForVengeanceQuest_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
	};
	ABP_QuestManager_C_FixFindGoalForVengeanceQuest_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixFamilyQuestsNPCsOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixFamilyQuestsNPCsOnLoad(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixFamilyQuestsNPCsOnLoad");

	struct ABP_QuestManager_C_FixFamilyQuestsNPCsOnLoad_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixFamilyQuestsNPCsOnLoad_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryIV
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixAlwinInStoryIV(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinInStoryIV");

	struct ABP_QuestManager_C_FixAlwinInStoryIV_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixAlwinInStoryIV_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixForInvalidQuestItemsRemainingInInventory
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixForInvalidQuestItemsRemainingInInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixForInvalidQuestItemsRemainingInInventory");

	struct ABP_QuestManager_C_FixForInvalidQuestItemsRemainingInInventory_Params {
	};
	ABP_QuestManager_C_FixForInvalidQuestItemsRemainingInInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SetDialogueChoice
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Choice	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SetDialogueChoice(struct FName ChoiceID, int32_t Choice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetDialogueChoice");

	struct ABP_QuestManager_C_SetDialogueChoice_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t Choice;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_SetDialogueChoice_Params params;
	params.ChoiceID = ChoiceID;
	params.Choice = Choice;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetDialogueChoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Choice	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GetDialogueChoice(struct FName ChoiceID, int32_t* Choice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetDialogueChoice");

	struct ABP_QuestManager_C_GetDialogueChoice_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t Choice;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_GetDialogueChoice_Params params;
	params.ChoiceID = ChoiceID;

	UObject::ProcessEvent(fn, &params);
	if (Choice != nullptr)
		*Choice = params.Choice;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestCurrentObjective
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GetActiveQuestCurrentObjective(struct FName QuestID, int32_t* ObjectiveID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestCurrentObjective");

	struct ABP_QuestManager_C_GetActiveQuestCurrentObjective_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_GetActiveQuestCurrentObjective_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (ObjectiveID != nullptr)
		*ObjectiveID = params.ObjectiveID;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestCurrentGoals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalsIDs	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetActiveQuestCurrentGoals(struct FName QuestID, TArray<int32_t>* GoalsIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestCurrentGoals");

	struct ABP_QuestManager_C_GetActiveQuestCurrentGoals_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		TArray<int32_t> GoalsIDs;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_GetActiveQuestCurrentGoals_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (GoalsIDs != nullptr)
		*GoalsIDs = params.GoalsIDs;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestsAndObjectives
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ActiveQuestsAndObjectives	Type: TMap<struct FName, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetActiveQuestsAndObjectives(TMap<struct FName, int32_t>* ActiveQuestsAndObjectives) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetActiveQuestsAndObjectives");

	struct ABP_QuestManager_C_GetActiveQuestsAndObjectives_Params {
		TMap<struct FName, int32_t> ActiveQuestsAndObjectives;			//Offset: 0 | ElementSize: 80
	};
	ABP_QuestManager_C_GetActiveQuestsAndObjectives_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActiveQuestsAndObjectives != nullptr)
		*ActiveQuestsAndObjectives = params.ActiveQuestsAndObjectives;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetCompletedQuestsIDs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CompletedQuestsIDs	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetCompletedQuestsIDs(TArray<struct FName>* CompletedQuestsIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetCompletedQuestsIDs");

	struct ABP_QuestManager_C_GetCompletedQuestsIDs_Params {
		TArray<struct FName> CompletedQuestsIDs;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_GetCompletedQuestsIDs_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CompletedQuestsIDs != nullptr)
		*CompletedQuestsIDs = params.CompletedQuestsIDs;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckQuestByState
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckObjective	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ObjectiveIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckIsDone	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveState	Type: TEnumAsByte<E_ObjectiveState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckQuestByState(struct FName QuestID, bool CheckObjective, int32_t ObjectiveIndex, bool CheckIsDone, TEnumAsByte<E_QuestState> QuestState, TEnumAsByte<E_ObjectiveState> ObjectiveState, bool* Success, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckQuestByState");

	struct ABP_QuestManager_C_CheckQuestByState_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		bool CheckObjective;			//Offset: 8 | ElementSize: 1
		int32_t ObjectiveIndex;			//Offset: 12 | ElementSize: 4
		bool CheckIsDone;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 17 | ElementSize: 1
		TEnumAsByte<E_ObjectiveState> ObjectiveState;			//Offset: 18 | ElementSize: 1
		bool Success;			//Offset: 19 | ElementSize: 1
		bool found;			//Offset: 20 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckQuestByState_Params params;
	params.QuestID = QuestID;
	params.CheckObjective = CheckObjective;
	params.ObjectiveIndex = ObjectiveIndex;
	params.CheckIsDone = CheckIsDone;
	params.QuestState = QuestState;
	params.ObjectiveState = ObjectiveState;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ObjectiveIdWhereItemIsUsedInActiveQuest
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemId	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AtObjective	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::ObjectiveIdWhereItemIsUsedInActiveQuest(struct FName QuestID, struct FName ItemId, int32_t* AtObjective) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ObjectiveIdWhereItemIsUsedInActiveQuest");

	struct ABP_QuestManager_C_ObjectiveIdWhereItemIsUsedInActiveQuest_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		struct FName ItemId;			//Offset: 8 | ElementSize: 8
		int32_t AtObjective;			//Offset: 16 | ElementSize: 4
	};
	ABP_QuestManager_C_ObjectiveIdWhereItemIsUsedInActiveQuest_Params params;
	params.QuestID = QuestID;
	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
	if (AtObjective != nullptr)
		*AtObjective = params.AtObjective;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuestsToNoticeBoard
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuestsToNoticeBoard() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuestsToNoticeBoard");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuestsToNoticeBoard_Params {
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuestsToNoticeBoard_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateNoticeBoardQuestsOnSeasonChange
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateNoticeBoardQuestsOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateNoticeBoardQuestsOnSeasonChange");

	struct ABP_QuestManager_C_UpdateNoticeBoardQuestsOnSeasonChange_Params {
	};
	ABP_QuestManager_C_UpdateNoticeBoardQuestsOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetQuestHandlerFromID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::GetQuestHandlerFromID(struct FName QuestID, struct FDataTableRowHandle* QuestHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetQuestHandlerFromID");

	struct ABP_QuestManager_C_GetQuestHandlerFromID_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		struct FDataTableRowHandle QuestHandler;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_GetQuestHandlerFromID_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (QuestHandler != nullptr)
		*QuestHandler = params.QuestHandler;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FillQuestDataFromHandler
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestHandler	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: AddedAtIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FillQuestDataFromHandler(struct FDataTableRowHandle QuestHandler, int32_t* AddedAtIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FillQuestDataFromHandler");

	struct ABP_QuestManager_C_FillQuestDataFromHandler_Params {
		struct FDataTableRowHandle QuestHandler;			//Offset: 0 | ElementSize: 16
		int32_t AddedAtIndex;			//Offset: 16 | ElementSize: 4
	};
	ABP_QuestManager_C_FillQuestDataFromHandler_Params params;
	params.QuestHandler = QuestHandler;

	UObject::ProcessEvent(fn, &params);
	if (AddedAtIndex != nullptr)
		*AddedAtIndex = params.AddedAtIndex;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ReplicateQuestsDataOnClientLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Quest	Type: struct FST_QuestInfo_Save	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::ReplicateQuestsDataOnClientLoad(int32_t QuestIndex, struct FST_QuestInfo_Save Quest) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ReplicateQuestsDataOnClientLoad");

	struct ABP_QuestManager_C_ReplicateQuestsDataOnClientLoad_Params {
		int32_t QuestIndex;			//Offset: 0 | ElementSize: 4
		struct FST_QuestInfo_Save Quest;			//Offset: 8 | ElementSize: 352
	};
	ABP_QuestManager_C_ReplicateQuestsDataOnClientLoad_Params params;
	params.QuestIndex = QuestIndex;
	params.Quest = Quest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestsToReplicate	Type: TArray<struct FST_QuestInfo_Save>	Flags: Parm, OutParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_QuestManager_C::GetQuestsDataForReplication(TArray<struct FST_QuestInfo_Save>* QuestsToReplicate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication");

	struct ABP_QuestManager_C_GetQuestsDataForReplication_Params {
		TArray<struct FST_QuestInfo_Save> QuestsToReplicate;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_GetQuestsDataForReplication_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestsToReplicate != nullptr)
		*QuestsToReplicate = params.QuestsToReplicate;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SetNPC_QuestBehavior
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::SetNPC_QuestBehavior(struct FName QuestID, int32_t ObjectiveID, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetNPC_QuestBehavior");

	struct ABP_QuestManager_C_SetNPC_QuestBehavior_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		bool Success;			//Offset: 12 | ElementSize: 1
	};
	ABP_QuestManager_C_SetNPC_QuestBehavior_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_MultiPlayerNPCs
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuests_MultiPlayerNPCs() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_MultiPlayerNPCs");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Params {
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddQuestToMultiHistory
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AddQuestToMultiHistory(struct FName QuestName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddQuestToMultiHistory");

	struct ABP_QuestManager_C_AddQuestToMultiHistory_Params {
		struct FName QuestName;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_AddQuestToMultiHistory_Params params;
	params.QuestName = QuestName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetSpecialAnimalQuestLoot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemsToDrop	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetSpecialAnimalQuestLoot(TEnumAsByte<E_AnimalType> AnimalType, TArray<struct FST_ItemResource>* ItemsToDrop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetSpecialAnimalQuestLoot");

	struct ABP_QuestManager_C_GetSpecialAnimalQuestLoot_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_ItemResource> ItemsToDrop;			//Offset: 8 | ElementSize: 16
	};
	ABP_QuestManager_C_GetSpecialAnimalQuestLoot_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
	if (ItemsToDrop != nullptr)
		*ItemsToDrop = params.ItemsToDrop;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RunEvent
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::RunEvent(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RunEvent");

	struct ABP_QuestManager_C_RunEvent_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		int32_t GoalID;			//Offset: 12 | ElementSize: 4
	};
	ABP_QuestManager_C_RunEvent_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RunEventOnGoalCompleted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::RunEventOnGoalCompleted(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RunEventOnGoalCompleted");

	struct ABP_QuestManager_C_RunEventOnGoalCompleted_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
		int32_t GoalID;			//Offset: 12 | ElementSize: 4
	};
	ABP_QuestManager_C_RunEventOnGoalCompleted_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RunEventIfQuestIsAvailable
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::RunEventIfQuestIsAvailable(struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RunEventIfQuestIsAvailable");

	struct ABP_QuestManager_C_RunEventIfQuestIsAvailable_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_RunEventIfQuestIsAvailable_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RunEventOnObjectiveCompleted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::RunEventOnObjectiveCompleted(struct FName QuestID, int32_t ObjectiveID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RunEventOnObjectiveCompleted");

	struct ABP_QuestManager_C_RunEventOnObjectiveCompleted_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		int32_t ObjectiveID;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_RunEventOnObjectiveCompleted_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SkipQuestToObjective
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestRef	Type: struct FDataTableRowHandle	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor
// Name: ObjectiveIDToSkipTo	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SkipQuestToObjective(const struct FDataTableRowHandle& QuestRef, int32_t ObjectiveIDToSkipTo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SkipQuestToObjective");

	struct ABP_QuestManager_C_SkipQuestToObjective_Params {
		struct FDataTableRowHandle QuestRef;			//Offset: 0 | ElementSize: 16
		int32_t ObjectiveIDToSkipTo;			//Offset: 16 | ElementSize: 4
	};
	ABP_QuestManager_C_SkipQuestToObjective_Params params;
	params.QuestRef = QuestRef;
	params.ObjectiveIDToSkipTo = ObjectiveIDToSkipTo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetActiveObjective
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Objectives	Type: TArray<struct FST_QuestObjectives>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
// Name: CurrentObjective	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GetActiveObjective(TArray<struct FST_QuestObjectives>* Objectives, int32_t* CurrentObjective) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetActiveObjective");

	struct ABP_QuestManager_C_GetActiveObjective_Params {
		TArray<struct FST_QuestObjectives> Objectives;			//Offset: 0 | ElementSize: 16
		int32_t CurrentObjective;			//Offset: 16 | ElementSize: 4
	};
	ABP_QuestManager_C_GetActiveObjective_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Objectives != nullptr)
		*Objectives = params.Objectives;
	if (CurrentObjective != nullptr)
		*CurrentObjective = params.CurrentObjective;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.IncrementDialogueChoice
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChoiceIncrement	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::IncrementDialogueChoice(struct FName ChoiceID, int32_t ChoiceIncrement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncrementDialogueChoice");

	struct ABP_QuestManager_C_IncrementDialogueChoice_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t ChoiceIncrement;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_IncrementDialogueChoice_Params params;
	params.ChoiceID = ChoiceID;
	params.ChoiceIncrement = ChoiceIncrement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.RemoveDialogueChoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Removed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::RemoveDialogueChoice(struct FName ChoiceID, bool* Removed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RemoveDialogueChoice");

	struct ABP_QuestManager_C_RemoveDialogueChoice_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		bool Removed;			//Offset: 8 | ElementSize: 1
	};
	ABP_QuestManager_C_RemoveDialogueChoice_Params params;
	params.ChoiceID = ChoiceID;

	UObject::ProcessEvent(fn, &params);
	if (Removed != nullptr)
		*Removed = params.Removed;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckForGoalTalkToDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalkingActor	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WhoToTalkToID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SearchReversed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Dialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckForGoalTalkToDialogue(class ABP_BaseCharacter_C* TalkingActor, struct FString WhoToTalkToID, bool SearchReversed, TAssetPtr<class UDialogue>* Dialogue, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForGoalTalkToDialogue");

	struct ABP_QuestManager_C_CheckForGoalTalkToDialogue_Params {
		class ABP_BaseCharacter_C* TalkingActor;			//Offset: 0 | ElementSize: 8
		struct FString WhoToTalkToID;			//Offset: 8 | ElementSize: 16
		bool SearchReversed;			//Offset: 24 | ElementSize: 1
		TAssetPtr<class UDialogue> Dialogue;			//Offset: 32 | ElementSize: 40
		bool found;			//Offset: 72 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckForGoalTalkToDialogue_Params params;
	params.TalkingActor = TalkingActor;
	params.WhoToTalkToID = WhoToTalkToID;
	params.SearchReversed = SearchReversed;

	UObject::ProcessEvent(fn, &params);
	if (Dialogue != nullptr)
		*Dialogue = params.Dialogue;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckIfQuestIsPartOne
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckIfQuestIsPartOne(struct FName QuestID, bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckIfQuestIsPartOne");

	struct ABP_QuestManager_C_CheckIfQuestIsPartOne_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
		bool Value;			//Offset: 8 | ElementSize: 1
	};
	ABP_QuestManager_C_CheckIfQuestIsPartOne_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat(struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat(const struct FName& QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat");

	struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.MakeDescriptionFromStringTables
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Array	Type: TArray<struct FST_StringTable_IDKey_Pair>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Value	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::MakeDescriptionFromStringTables(TArray<struct FST_StringTable_IDKey_Pair>* Array, struct FText* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.MakeDescriptionFromStringTables");

	struct ABP_QuestManager_C_MakeDescriptionFromStringTables_Params {
		TArray<struct FST_StringTable_IDKey_Pair> Array;			//Offset: 0 | ElementSize: 16
		struct FText Value;			//Offset: 16 | ElementSize: 24
	};
	ABP_QuestManager_C_MakeDescriptionFromStringTables_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Array != nullptr)
		*Array = params.Array;
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CheckIfCoopMainQuestsShouldStart
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CheckIfCoopMainQuestsShouldStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckIfCoopMainQuestsShouldStart");

	struct ABP_QuestManager_C_CheckIfCoopMainQuestsShouldStart_Params {
	};
	ABP_QuestManager_C_CheckIfCoopMainQuestsShouldStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CompleteGoal_ClientVersion
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectiveID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: GoalID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::CompleteGoal_ClientVersion(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, struct FName QuestName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteGoal_ClientVersion");

	struct ABP_QuestManager_C_CompleteGoal_ClientVersion_Params {
		int32_t QuestID;			//Offset: 0 | ElementSize: 4
		int32_t ObjectiveID;			//Offset: 4 | ElementSize: 4
		int32_t GoalID;			//Offset: 8 | ElementSize: 4
		struct FName QuestName;			//Offset: 12 | ElementSize: 8
	};
	ABP_QuestManager_C_CompleteGoal_ClientVersion_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;
	params.QuestName = QuestName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.CreateCustomGoalsForClient
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::CreateCustomGoalsForClient() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CreateCustomGoalsForClient");

	struct ABP_QuestManager_C_CreateCustomGoalsForClient_Params {
	};
	ABP_QuestManager_C_CreateCustomGoalsForClient_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceID	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Choice	Type: int32_t	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::AddToDialogueChoice(const struct FName& ChoiceID, const int32_t& Choice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddToDialogueChoice");

	struct ABP_QuestManager_C_AddToDialogueChoice_Params {
		struct FName ChoiceID;			//Offset: 0 | ElementSize: 8
		int32_t Choice;			//Offset: 8 | ElementSize: 4
	};
	ABP_QuestManager_C_AddToDialogueChoice_Params params;
	params.ChoiceID = ChoiceID;
	params.Choice = Choice;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetUnlockedEmotes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnlockedEmotes	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetUnlockedEmotes(TArray<struct FName>* UnlockedEmotes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetUnlockedEmotes");

	struct ABP_QuestManager_C_GetUnlockedEmotes_Params {
		TArray<struct FName> UnlockedEmotes;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_GetUnlockedEmotes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (UnlockedEmotes != nullptr)
		*UnlockedEmotes = params.UnlockedEmotes;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication_NonGenericQuests
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestsDataForReplication	Type: TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetQuestsDataForReplication_NonGenericQuests(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsDataForReplication) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication_NonGenericQuests");

	struct ABP_QuestManager_C_GetQuestsDataForReplication_NonGenericQuests_Params {
		TArray<struct FST_QuestInfoForReplicationOnPlayerJoin> QuestsDataForReplication;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_GetQuestsDataForReplication_NonGenericQuests_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestsDataForReplication != nullptr)
		*QuestsDataForReplication = params.QuestsDataForReplication;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddQuestsFromDataReplication_NonGenericQuests
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestsData	Type: TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::AddQuestsFromDataReplication_NonGenericQuests(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddQuestsFromDataReplication_NonGenericQuests");

	struct ABP_QuestManager_C_AddQuestsFromDataReplication_NonGenericQuests_Params {
		TArray<struct FST_QuestInfoForReplicationOnPlayerJoin> QuestsData;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_AddQuestsFromDataReplication_NonGenericQuests_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestsData != nullptr)
		*QuestsData = params.QuestsData;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication_GenericQuest
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GenericQuestInfo	Type: TArray<struct FST_QuestInfoForReplicationGenericQuest>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::GetQuestsDataForReplication_GenericQuest(TArray<struct FST_QuestInfoForReplicationGenericQuest>* GenericQuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetQuestsDataForReplication_GenericQuest");

	struct ABP_QuestManager_C_GetQuestsDataForReplication_GenericQuest_Params {
		TArray<struct FST_QuestInfoForReplicationGenericQuest> GenericQuestInfo;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_GetQuestsDataForReplication_GenericQuest_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GenericQuestInfo != nullptr)
		*GenericQuestInfo = params.GenericQuestInfo;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SerializeGenericQuestRewards
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Items	Type: TArray<struct FST_Quest_PickedItemsFromGenerator>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ParsedItems	Type: TArray<struct FST_QuestItemRewardsForReplication>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_QuestManager_C::SerializeGenericQuestRewards(TArray<struct FST_Quest_PickedItemsFromGenerator>* Items, TArray<struct FST_QuestItemRewardsForReplication>* ParsedItems) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SerializeGenericQuestRewards");

	struct ABP_QuestManager_C_SerializeGenericQuestRewards_Params {
		TArray<struct FST_Quest_PickedItemsFromGenerator> Items;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_QuestItemRewardsForReplication> ParsedItems;			//Offset: 16 | ElementSize: 16
	};
	ABP_QuestManager_C_SerializeGenericQuestRewards_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Items != nullptr)
		*Items = params.Items;
	if (ParsedItems != nullptr)
		*ParsedItems = params.ParsedItems;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.SerializeGenericQuestGoal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Goal	Type: struct FST_MasterGoals	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash
// Name: GoalTask	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::SerializeGenericQuestGoal(const struct FST_MasterGoals& Goal, struct FString* GoalTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SerializeGenericQuestGoal");

	struct ABP_QuestManager_C_SerializeGenericQuestGoal_Params {
		struct FST_MasterGoals Goal;			//Offset: 0 | ElementSize: 1416
		struct FString GoalTask;			//Offset: 1416 | ElementSize: 16
	};
	ABP_QuestManager_C_SerializeGenericQuestGoal_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
	if (GoalTask != nullptr)
		*GoalTask = params.GoalTask;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.AddQuestsFromDataReplication_GenericQuests
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestData	Type: TArray<struct FST_QuestInfoForReplicationGenericQuest>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_QuestManager_C::AddQuestsFromDataReplication_GenericQuests(TArray<struct FST_QuestInfoForReplicationGenericQuest>* QuestData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AddQuestsFromDataReplication_GenericQuests");

	struct ABP_QuestManager_C_AddQuestsFromDataReplication_GenericQuests_Params {
		TArray<struct FST_QuestInfoForReplicationGenericQuest> QuestData;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_AddQuestsFromDataReplication_GenericQuests_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestData != nullptr)
		*QuestData = params.QuestData;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.DeserializeGenericRewards
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DT_OriginalRewards	Type: struct FST_QuestReward	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: RewardReputation	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RewardItems	Type: TArray<struct FST_QuestItemRewardsForReplication>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ST_QuestReward	Type: struct FST_QuestReward	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::DeserializeGenericRewards(const struct FST_QuestReward& DT_OriginalRewards, int32_t RewardReputation, TArray<struct FST_QuestItemRewardsForReplication>* RewardItems, struct FST_QuestReward* ST_QuestReward) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.DeserializeGenericRewards");

	struct ABP_QuestManager_C_DeserializeGenericRewards_Params {
		struct FST_QuestReward DT_OriginalRewards;			//Offset: 0 | ElementSize: 232
		int32_t RewardReputation;			//Offset: 232 | ElementSize: 4
		TArray<struct FST_QuestItemRewardsForReplication> RewardItems;			//Offset: 240 | ElementSize: 16
		struct FST_QuestReward ST_QuestReward;			//Offset: 256 | ElementSize: 232
	};
	ABP_QuestManager_C_DeserializeGenericRewards_Params params;
	params.DT_OriginalRewards = DT_OriginalRewards;
	params.RewardReputation = RewardReputation;

	UObject::ProcessEvent(fn, &params);
	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
	if (ST_QuestReward != nullptr)
		*ST_QuestReward = params.ST_QuestReward;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.DeserializeGenericQuestGoals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DT_OriginalGoal	Type: struct FST_MasterGoals	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: Task	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Goal	Type: struct FST_MasterGoals	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::DeserializeGenericQuestGoals(struct FST_MasterGoals DT_OriginalGoal, struct FString Task, struct FST_MasterGoals* Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.DeserializeGenericQuestGoals");

	struct ABP_QuestManager_C_DeserializeGenericQuestGoals_Params {
		struct FST_MasterGoals DT_OriginalGoal;			//Offset: 0 | ElementSize: 1416
		struct FString Task;			//Offset: 1416 | ElementSize: 16
		struct FST_MasterGoals Goal;			//Offset: 1432 | ElementSize: 1416
	};
	ABP_QuestManager_C_DeserializeGenericQuestGoals_Params params;
	params.DT_OriginalGoal = DT_OriginalGoal;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
	if (Goal != nullptr)
		*Goal = params.Goal;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.GetSerializedValues
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Values	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::GetSerializedValues(struct FString SourceString, struct FString* Values) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GetSerializedValues");

	struct ABP_QuestManager_C_GetSerializedValues_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString Values;			//Offset: 16 | ElementSize: 16
	};
	ABP_QuestManager_C_GetSerializedValues_Params params;
	params.SourceString = SourceString;

	UObject::ProcessEvent(fn, &params);
	if (Values != nullptr)
		*Values = params.Values;
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixMissingSwirOnOxbow
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixMissingSwirOnOxbow() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixMissingSwirOnOxbow");

	struct ABP_QuestManager_C_FixMissingSwirOnOxbow_Params {
	};
	ABP_QuestManager_C_FixMissingSwirOnOxbow_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixMultiNPCsQuestBehavior
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FixMultiNPCsQuestBehavior() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixMultiNPCsQuestBehavior");

	struct ABP_QuestManager_C_FixMultiNPCsQuestBehavior_Params {
	};
	ABP_QuestManager_C_FixMultiNPCsQuestBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FixMPPoisAfter2_0_1_2
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FixMPPoisAfter2_0_1_2(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixMPPoisAfter2_0_1_2");

	struct ABP_QuestManager_C_FixMPPoisAfter2_0_1_2_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_QuestManager_C_FixMPPoisAfter2_0_1_2_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FindQuestByIDAndSetStatusToCompleted
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::FindQuestByIDAndSetStatusToCompleted(struct FName QuestID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FindQuestByIDAndSetStatusToCompleted");

	struct ABP_QuestManager_C_FindQuestByIDAndSetStatusToCompleted_Params {
		struct FName QuestID;			//Offset: 0 | ElementSize: 8
	};
	ABP_QuestManager_C_FindQuestByIDAndSetStatusToCompleted_Params params;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.FillMissingDescriptionsForClientOnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::FillMissingDescriptionsForClientOnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FillMissingDescriptionsForClientOnLoad");

	struct ABP_QuestManager_C_FillMissingDescriptionsForClientOnLoad_Params {
	};
	ABP_QuestManager_C_FillMissingDescriptionsForClientOnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.ClearFamilyQuestsOnSwitchToHeir
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_QuestManager_C::ClearFamilyQuestsOnSwitchToHeir() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ClearFamilyQuestsOnSwitchToHeir");

	struct ABP_QuestManager_C_ClearFamilyQuestsOnSwitchToHeir_Params {
	};
	ABP_QuestManager_C_ClearFamilyQuestsOnSwitchToHeir_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests_Function
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Goal_BuildTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Constructed_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_QuestManager_C::UpdateBuildingQuests_Function(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests_Function");

	struct ABP_QuestManager_C_UpdateBuildingQuests_Function_Params {
		TEnumAsByte<E_Goal_BuildTypes> Type;			//Offset: 0 | ElementSize: 1
		bool Constructed_;			//Offset: 1 | ElementSize: 1
		struct FName Name;			//Offset: 4 | ElementSize: 8
		struct FVector Location;			//Offset: 12 | ElementSize: 12
	};
	ABP_QuestManager_C_UpdateBuildingQuests_Function_Params params;
	params.Type = Type;
	params.Constructed_ = Constructed_;
	params.Name = Name;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}