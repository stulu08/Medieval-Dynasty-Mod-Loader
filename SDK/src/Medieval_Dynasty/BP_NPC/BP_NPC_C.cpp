#include "../SDK.h"
#include "BP_NPC_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_NPC_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 5840);
}
struct FPointerToUberGraphFrame* ABP_NPC_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 5840);
}
void ABP_NPC_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 5840, value);
}
// Member Getter and Setter of Voice
// Declaration: class UAudioComponent* Voice
class UAudioComponent* ABP_NPC_C::M_GetVoice() const {
	return Read<class UAudioComponent*>((byte*)this + 5848);
}
class UAudioComponent** ABP_NPC_C::M_PtrGetVoice() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 5848);
}
void ABP_NPC_C::M_SetVoice(const class UAudioComponent*& value) {
	Write((byte*)this + 5848, value);
}
// Member Getter and Setter of ShadowCaster
// Declaration: class USkeletalMeshComponent* ShadowCaster
class USkeletalMeshComponent* ABP_NPC_C::M_GetShadowCaster() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 5856);
}
class USkeletalMeshComponent** ABP_NPC_C::M_PtrGetShadowCaster() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 5856);
}
void ABP_NPC_C::M_SetShadowCaster(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 5856, value);
}
// Member Getter and Setter of BP_BoostComponent
// Declaration: class UBP_BoostComponent_C* BP_BoostComponent
class UBP_BoostComponent_C* ABP_NPC_C::M_GetBP_BoostComponent() const {
	return Read<class UBP_BoostComponent_C*>((byte*)this + 5864);
}
class UBP_BoostComponent_C** ABP_NPC_C::M_PtrGetBP_BoostComponent() {
	return reinterpret_cast<class UBP_BoostComponent_C**>((byte*)this + 5864);
}
void ABP_NPC_C::M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value) {
	Write((byte*)this + 5864, value);
}
// Member Getter and Setter of NavigationInvoker
// Declaration: class UNavigationInvokerComponent* NavigationInvoker
class UNavigationInvokerComponent* ABP_NPC_C::M_GetNavigationInvoker() const {
	return Read<class UNavigationInvokerComponent*>((byte*)this + 5872);
}
class UNavigationInvokerComponent** ABP_NPC_C::M_PtrGetNavigationInvoker() {
	return reinterpret_cast<class UNavigationInvokerComponent**>((byte*)this + 5872);
}
void ABP_NPC_C::M_SetNavigationInvoker(const class UNavigationInvokerComponent*& value) {
	Write((byte*)this + 5872, value);
}
// Member Getter and Setter of AINPCReference
// Declaration: class AAIC_NPC_C* AINPCReference
class AAIC_NPC_C* ABP_NPC_C::M_GetAINPCReference() const {
	return Read<class AAIC_NPC_C*>((byte*)this + 5880);
}
class AAIC_NPC_C** ABP_NPC_C::M_PtrGetAINPCReference() {
	return reinterpret_cast<class AAIC_NPC_C**>((byte*)this + 5880);
}
void ABP_NPC_C::M_SetAINPCReference(const class AAIC_NPC_C*& value) {
	Write((byte*)this + 5880, value);
}
// Member Getter and Setter of ID
// Declaration: struct FString ID
struct FString ABP_NPC_C::M_GetID() const {
	return Read<struct FString>((byte*)this + 5888);
}
struct FString* ABP_NPC_C::M_PtrGetID() {
	return reinterpret_cast<struct FString*>((byte*)this + 5888);
}
void ABP_NPC_C::M_SetID(const struct FString& value) {
	Write((byte*)this + 5888, value);
}
// Member Getter and Setter of VoiceID
// Declaration: struct FName VoiceID
struct FName ABP_NPC_C::M_GetVoiceID() const {
	return Read<struct FName>((byte*)this + 5904);
}
struct FName* ABP_NPC_C::M_PtrGetVoiceID() {
	return reinterpret_cast<struct FName*>((byte*)this + 5904);
}
void ABP_NPC_C::M_SetVoiceID(const struct FName& value) {
	Write((byte*)this + 5904, value);
}
// Member Getter and Setter of CustomNPC_DTHandler
// Declaration: struct FDataTableRowHandle CustomNPC_DTHandler
struct FDataTableRowHandle ABP_NPC_C::M_GetCustomNPC_DTHandler() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 5912);
}
struct FDataTableRowHandle* ABP_NPC_C::M_PtrGetCustomNPC_DTHandler() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 5912);
}
void ABP_NPC_C::M_SetCustomNPC_DTHandler(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 5912, value);
}
// Member Getter and Setter of ProfessionData
// Declaration: struct FST_Profession ProfessionData
struct FST_Profession ABP_NPC_C::M_GetProfessionData() const {
	return Read<struct FST_Profession>((byte*)this + 5928);
}
struct FST_Profession* ABP_NPC_C::M_PtrGetProfessionData() {
	return reinterpret_cast<struct FST_Profession*>((byte*)this + 5928);
}
void ABP_NPC_C::M_SetProfessionData(const struct FST_Profession& value) {
	Write((byte*)this + 5928, value);
}
// Member Getter and Setter of OutsideNPCType
// Declaration: TEnumAsByte<E_OutsideNPCTypes> OutsideNPCType
TEnumAsByte<E_OutsideNPCTypes> ABP_NPC_C::M_GetOutsideNPCType() const {
	return Read<TEnumAsByte<E_OutsideNPCTypes>>((byte*)this + 6000);
}
TEnumAsByte<E_OutsideNPCTypes>* ABP_NPC_C::M_PtrGetOutsideNPCType() {
	return reinterpret_cast<TEnumAsByte<E_OutsideNPCTypes>*>((byte*)this + 6000);
}
void ABP_NPC_C::M_SetOutsideNPCType(const TEnumAsByte<E_OutsideNPCTypes>& value) {
	Write((byte*)this + 6000, value);
}
// Member Getter and Setter of OutsideNPC_Ownership
// Declaration: TEnumAsByte<E_Ownership> OutsideNPC_Ownership
TEnumAsByte<E_Ownership> ABP_NPC_C::M_GetOutsideNPC_Ownership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 6001);
}
TEnumAsByte<E_Ownership>* ABP_NPC_C::M_PtrGetOutsideNPC_Ownership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 6001);
}
void ABP_NPC_C::M_SetOutsideNPC_Ownership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 6001, value);
}
// Member Getter and Setter of BanditType
// Declaration: TEnumAsByte<E_BanditType> BanditType
TEnumAsByte<E_BanditType> ABP_NPC_C::M_GetBanditType() const {
	return Read<TEnumAsByte<E_BanditType>>((byte*)this + 6002);
}
TEnumAsByte<E_BanditType>* ABP_NPC_C::M_PtrGetBanditType() {
	return reinterpret_cast<TEnumAsByte<E_BanditType>*>((byte*)this + 6002);
}
void ABP_NPC_C::M_SetBanditType(const TEnumAsByte<E_BanditType>& value) {
	Write((byte*)this + 6002, value);
}
// Member Getter and Setter of Wealth
// Declaration: TEnumAsByte<E_Wealth> Wealth
TEnumAsByte<E_Wealth> ABP_NPC_C::M_GetWealth() const {
	return Read<TEnumAsByte<E_Wealth>>((byte*)this + 6003);
}
TEnumAsByte<E_Wealth>* ABP_NPC_C::M_PtrGetWealth() {
	return reinterpret_cast<TEnumAsByte<E_Wealth>*>((byte*)this + 6003);
}
void ABP_NPC_C::M_SetWealth(const TEnumAsByte<E_Wealth>& value) {
	Write((byte*)this + 6003, value);
}
// Member Getter and Setter of ProfessionState
// Declaration: unsigned char ProfessionState
unsigned char ABP_NPC_C::M_GetProfessionState() const {
	return Read<unsigned char>((byte*)this + 6004);
}
unsigned char* ABP_NPC_C::M_PtrGetProfessionState() {
	return reinterpret_cast<unsigned char*>((byte*)this + 6004);
}
void ABP_NPC_C::M_SetProfessionState(const unsigned char& value) {
	Write((byte*)this + 6004, value);
}
// Member Getter and Setter of BreakAnimID
// Declaration: unsigned char BreakAnimID
unsigned char ABP_NPC_C::M_GetBreakAnimID() const {
	return Read<unsigned char>((byte*)this + 6005);
}
unsigned char* ABP_NPC_C::M_PtrGetBreakAnimID() {
	return reinterpret_cast<unsigned char*>((byte*)this + 6005);
}
void ABP_NPC_C::M_SetBreakAnimID(const unsigned char& value) {
	Write((byte*)this + 6005, value);
}
// Member Getter and Setter of BreakAnimType
// Declaration: TEnumAsByte<E_AnimBreakType> BreakAnimType
TEnumAsByte<E_AnimBreakType> ABP_NPC_C::M_GetBreakAnimType() const {
	return Read<TEnumAsByte<E_AnimBreakType>>((byte*)this + 6006);
}
TEnumAsByte<E_AnimBreakType>* ABP_NPC_C::M_PtrGetBreakAnimType() {
	return reinterpret_cast<TEnumAsByte<E_AnimBreakType>*>((byte*)this + 6006);
}
void ABP_NPC_C::M_SetBreakAnimType(const TEnumAsByte<E_AnimBreakType>& value) {
	Write((byte*)this + 6006, value);
}
// Member Getter and Setter of WorkStateLoops
// Declaration: int32_t WorkStateLoops
int32_t ABP_NPC_C::M_GetWorkStateLoops() const {
	return Read<int32_t>((byte*)this + 6008);
}
int32_t* ABP_NPC_C::M_PtrGetWorkStateLoops() {
	return reinterpret_cast<int32_t*>((byte*)this + 6008);
}
void ABP_NPC_C::M_SetWorkStateLoops(const int32_t& value) {
	Write((byte*)this + 6008, value);
}
// Member Getter and Setter of CurrentWorkStateLoop
// Declaration: int32_t CurrentWorkStateLoop
int32_t ABP_NPC_C::M_GetCurrentWorkStateLoop() const {
	return Read<int32_t>((byte*)this + 6012);
}
int32_t* ABP_NPC_C::M_PtrGetCurrentWorkStateLoop() {
	return reinterpret_cast<int32_t*>((byte*)this + 6012);
}
void ABP_NPC_C::M_SetCurrentWorkStateLoop(const int32_t& value) {
	Write((byte*)this + 6012, value);
}
// Member Getter and Setter of BeginWakeUpTime
// Declaration: struct FST_Hour BeginWakeUpTime
struct FST_Hour ABP_NPC_C::M_GetBeginWakeUpTime() const {
	return Read<struct FST_Hour>((byte*)this + 6016);
}
struct FST_Hour* ABP_NPC_C::M_PtrGetBeginWakeUpTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 6016);
}
void ABP_NPC_C::M_SetBeginWakeUpTime(const struct FST_Hour& value) {
	Write((byte*)this + 6016, value);
}
// Member Getter and Setter of BeginSleepTime
// Declaration: struct FST_Hour BeginSleepTime
struct FST_Hour ABP_NPC_C::M_GetBeginSleepTime() const {
	return Read<struct FST_Hour>((byte*)this + 6028);
}
struct FST_Hour* ABP_NPC_C::M_PtrGetBeginSleepTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 6028);
}
void ABP_NPC_C::M_SetBeginSleepTime(const struct FST_Hour& value) {
	Write((byte*)this + 6028, value);
}
// Member Getter and Setter of StartWorkingTime
// Declaration: struct FST_Hour StartWorkingTime
struct FST_Hour ABP_NPC_C::M_GetStartWorkingTime() const {
	return Read<struct FST_Hour>((byte*)this + 6040);
}
struct FST_Hour* ABP_NPC_C::M_PtrGetStartWorkingTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 6040);
}
void ABP_NPC_C::M_SetStartWorkingTime(const struct FST_Hour& value) {
	Write((byte*)this + 6040, value);
}
// Member Getter and Setter of StopWorkingTime
// Declaration: struct FST_Hour StopWorkingTime
struct FST_Hour ABP_NPC_C::M_GetStopWorkingTime() const {
	return Read<struct FST_Hour>((byte*)this + 6052);
}
struct FST_Hour* ABP_NPC_C::M_PtrGetStopWorkingTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 6052);
}
void ABP_NPC_C::M_SetStopWorkingTime(const struct FST_Hour& value) {
	Write((byte*)this + 6052, value);
}
// Member Getter and Setter of CheckUnderTheMapTimer
// Declaration: struct FTimerHandle CheckUnderTheMapTimer
struct FTimerHandle ABP_NPC_C::M_GetCheckUnderTheMapTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 6064);
}
struct FTimerHandle* ABP_NPC_C::M_PtrGetCheckUnderTheMapTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6064);
}
void ABP_NPC_C::M_SetCheckUnderTheMapTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 6064, value);
}
// Member Getter and Setter of AfterGetOrWakeUpTimer
// Declaration: struct FTimerHandle AfterGetOrWakeUpTimer
struct FTimerHandle ABP_NPC_C::M_GetAfterGetOrWakeUpTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 6072);
}
struct FTimerHandle* ABP_NPC_C::M_PtrGetAfterGetOrWakeUpTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 6072);
}
void ABP_NPC_C::M_SetAfterGetOrWakeUpTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 6072, value);
}
// Member Getter and Setter of ChangedTimeOfDay
// Declaration: TMap<TEnumAsByte<E_TimeOfDay>, bool> ChangedTimeOfDay
TMap<TEnumAsByte<E_TimeOfDay>, bool> ABP_NPC_C::M_GetChangedTimeOfDay() const {
	return Read<TMap<TEnumAsByte<E_TimeOfDay>, bool>>((byte*)this + 6080);
}
TMap<TEnumAsByte<E_TimeOfDay>, bool>* ABP_NPC_C::M_PtrGetChangedTimeOfDay() {
	return reinterpret_cast<TMap<TEnumAsByte<E_TimeOfDay>, bool>*>((byte*)this + 6080);
}
void ABP_NPC_C::M_SetChangedTimeOfDay(const TMap<TEnumAsByte<E_TimeOfDay>, bool>& value) {
	Write((byte*)this + 6080, value);
}
// Member Getter and Setter of Spawned
// Declaration: bool Spawned
bool ABP_NPC_C::M_GetSpawned() const {
	return Read<bool>((byte*)this + 6160);
}
bool* ABP_NPC_C::M_PtrGetSpawned() {
	return reinterpret_cast<bool*>((byte*)this + 6160);
}
void ABP_NPC_C::M_SetSpawned(const bool& value) {
	Write((byte*)this + 6160, value);
}
// Member Getter and Setter of IsStoryNPC
// Declaration: bool IsStoryNPC
bool ABP_NPC_C::M_GetIsStoryNPC() const {
	return Read<bool>((byte*)this + 6161);
}
bool* ABP_NPC_C::M_PtrGetIsStoryNPC() {
	return reinterpret_cast<bool*>((byte*)this + 6161);
}
void ABP_NPC_C::M_SetIsStoryNPC(const bool& value) {
	Write((byte*)this + 6161, value);
}
// Member Getter and Setter of NightPatrol
// Declaration: bool NightPatrol
bool ABP_NPC_C::M_GetNightPatrol() const {
	return Read<bool>((byte*)this + 6162);
}
bool* ABP_NPC_C::M_PtrGetNightPatrol() {
	return reinterpret_cast<bool*>((byte*)this + 6162);
}
void ABP_NPC_C::M_SetNightPatrol(const bool& value) {
	Write((byte*)this + 6162, value);
}
// Member Getter and Setter of HasInfant
// Declaration: bool HasInfant
bool ABP_NPC_C::M_GetHasInfant() const {
	return Read<bool>((byte*)this + 6163);
}
bool* ABP_NPC_C::M_PtrGetHasInfant() {
	return reinterpret_cast<bool*>((byte*)this + 6163);
}
void ABP_NPC_C::M_SetHasInfant(const bool& value) {
	Write((byte*)this + 6163, value);
}
// Member Getter and Setter of ChangeCollision
// Declaration: bool ChangeCollision
bool ABP_NPC_C::M_GetChangeCollision() const {
	return Read<bool>((byte*)this + 6164);
}
bool* ABP_NPC_C::M_PtrGetChangeCollision() {
	return reinterpret_cast<bool*>((byte*)this + 6164);
}
void ABP_NPC_C::M_SetChangeCollision(const bool& value) {
	Write((byte*)this + 6164, value);
}
// Member Getter and Setter of IsComponent
// Declaration: bool IsComponent
bool ABP_NPC_C::M_GetIsComponent() const {
	return Read<bool>((byte*)this + 6165);
}
bool* ABP_NPC_C::M_PtrGetIsComponent() {
	return reinterpret_cast<bool*>((byte*)this + 6165);
}
void ABP_NPC_C::M_SetIsComponent(const bool& value) {
	Write((byte*)this + 6165, value);
}
// Member Getter and Setter of Interactable
// Declaration: bool Interactable
bool ABP_NPC_C::M_GetInteractable() const {
	return Read<bool>((byte*)this + 6166);
}
bool* ABP_NPC_C::M_PtrGetInteractable() {
	return reinterpret_cast<bool*>((byte*)this + 6166);
}
void ABP_NPC_C::M_SetInteractable(const bool& value) {
	Write((byte*)this + 6166, value);
}
// Member Getter and Setter of IsLookAtTargetRotation
// Declaration: bool IsLookAtTargetRotation
bool ABP_NPC_C::M_GetIsLookAtTargetRotation() const {
	return Read<bool>((byte*)this + 6167);
}
bool* ABP_NPC_C::M_PtrGetIsLookAtTargetRotation() {
	return reinterpret_cast<bool*>((byte*)this + 6167);
}
void ABP_NPC_C::M_SetIsLookAtTargetRotation(const bool& value) {
	Write((byte*)this + 6167, value);
}
// Member Getter and Setter of InspectorVisibility
// Declaration: bool InspectorVisibility
bool ABP_NPC_C::M_GetInspectorVisibility() const {
	return Read<bool>((byte*)this + 6168);
}
bool* ABP_NPC_C::M_PtrGetInspectorVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 6168);
}
void ABP_NPC_C::M_SetInspectorVisibility(const bool& value) {
	Write((byte*)this + 6168, value);
}
// Member Getter and Setter of IsLost
// Declaration: bool IsLost
bool ABP_NPC_C::M_GetIsLost() const {
	return Read<bool>((byte*)this + 6169);
}
bool* ABP_NPC_C::M_PtrGetIsLost() {
	return reinterpret_cast<bool*>((byte*)this + 6169);
}
void ABP_NPC_C::M_SetIsLost(const bool& value) {
	Write((byte*)this + 6169, value);
}
// Member Getter and Setter of IsTargetOfTalkGoal
// Declaration: bool IsTargetOfTalkGoal
bool ABP_NPC_C::M_GetIsTargetOfTalkGoal() const {
	return Read<bool>((byte*)this + 6170);
}
bool* ABP_NPC_C::M_PtrGetIsTargetOfTalkGoal() {
	return reinterpret_cast<bool*>((byte*)this + 6170);
}
void ABP_NPC_C::M_SetIsTargetOfTalkGoal(const bool& value) {
	Write((byte*)this + 6170, value);
}
// Member Getter and Setter of QuestIndex
// Declaration: int32_t QuestIndex
int32_t ABP_NPC_C::M_GetQuestIndex() const {
	return Read<int32_t>((byte*)this + 6172);
}
int32_t* ABP_NPC_C::M_PtrGetQuestIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 6172);
}
void ABP_NPC_C::M_SetQuestIndex(const int32_t& value) {
	Write((byte*)this + 6172, value);
}
// Member Getter and Setter of AnimalsReferences
// Declaration: TArray<class UObject*> AnimalsReferences
TArray<class UObject*> ABP_NPC_C::M_GetAnimalsReferences() const {
	return Read<TArray<class UObject*>>((byte*)this + 6176);
}
TArray<class UObject*>* ABP_NPC_C::M_PtrGetAnimalsReferences() {
	return reinterpret_cast<TArray<class UObject*>*>((byte*)this + 6176);
}
void ABP_NPC_C::M_SetAnimalsReferences(const TArray<class UObject*>& value) {
	Write((byte*)this + 6176, value);
}
// Member Getter and Setter of Building
// Declaration: class AActor* Building
class AActor* ABP_NPC_C::M_GetBuilding() const {
	return Read<class AActor*>((byte*)this + 6192);
}
class AActor** ABP_NPC_C::M_PtrGetBuilding() {
	return reinterpret_cast<class AActor**>((byte*)this + 6192);
}
void ABP_NPC_C::M_SetBuilding(const class AActor*& value) {
	Write((byte*)this + 6192, value);
}
// Member Getter and Setter of Vendor
// Declaration: bool Vendor
bool ABP_NPC_C::M_GetVendor() const {
	return Read<bool>((byte*)this + 6200);
}
bool* ABP_NPC_C::M_PtrGetVendor() {
	return reinterpret_cast<bool*>((byte*)this + 6200);
}
void ABP_NPC_C::M_SetVendor(const bool& value) {
	Write((byte*)this + 6200, value);
}
// Member Getter and Setter of LastFurniture
// Declaration: class AActor* LastFurniture
class AActor* ABP_NPC_C::M_GetLastFurniture() const {
	return Read<class AActor*>((byte*)this + 6208);
}
class AActor** ABP_NPC_C::M_PtrGetLastFurniture() {
	return reinterpret_cast<class AActor**>((byte*)this + 6208);
}
void ABP_NPC_C::M_SetLastFurniture(const class AActor*& value) {
	Write((byte*)this + 6208, value);
}
// Member Getter and Setter of Spawner
// Declaration: class AActor* Spawner
class AActor* ABP_NPC_C::M_GetSpawner() const {
	return Read<class AActor*>((byte*)this + 6216);
}
class AActor** ABP_NPC_C::M_PtrGetSpawner() {
	return reinterpret_cast<class AActor**>((byte*)this + 6216);
}
void ABP_NPC_C::M_SetSpawner(const class AActor*& value) {
	Write((byte*)this + 6216, value);
}
// Member Getter and Setter of FoliageTarget
// Declaration: struct FST_FoliageTarget FoliageTarget
struct FST_FoliageTarget ABP_NPC_C::M_GetFoliageTarget() const {
	return Read<struct FST_FoliageTarget>((byte*)this + 6224);
}
struct FST_FoliageTarget* ABP_NPC_C::M_PtrGetFoliageTarget() {
	return reinterpret_cast<struct FST_FoliageTarget*>((byte*)this + 6224);
}
void ABP_NPC_C::M_SetFoliageTarget(const struct FST_FoliageTarget& value) {
	Write((byte*)this + 6224, value);
}
// Member Getter and Setter of FoliageLocation
// Declaration: struct FVector FoliageLocation
struct FVector ABP_NPC_C::M_GetFoliageLocation() const {
	return Read<struct FVector>((byte*)this + 6304);
}
struct FVector* ABP_NPC_C::M_PtrGetFoliageLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 6304);
}
void ABP_NPC_C::M_SetFoliageLocation(const struct FVector& value) {
	Write((byte*)this + 6304, value);
}
// Member Getter and Setter of BedIndex
// Declaration: int32_t BedIndex
int32_t ABP_NPC_C::M_GetBedIndex() const {
	return Read<int32_t>((byte*)this + 6316);
}
int32_t* ABP_NPC_C::M_PtrGetBedIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 6316);
}
void ABP_NPC_C::M_SetBedIndex(const int32_t& value) {
	Write((byte*)this + 6316, value);
}
// Member Getter and Setter of BedSlotIndex
// Declaration: int32_t BedSlotIndex
int32_t ABP_NPC_C::M_GetBedSlotIndex() const {
	return Read<int32_t>((byte*)this + 6320);
}
int32_t* ABP_NPC_C::M_PtrGetBedSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 6320);
}
void ABP_NPC_C::M_SetBedSlotIndex(const int32_t& value) {
	Write((byte*)this + 6320, value);
}
// Member Getter and Setter of WorkSlotIndex
// Declaration: int32_t WorkSlotIndex
int32_t ABP_NPC_C::M_GetWorkSlotIndex() const {
	return Read<int32_t>((byte*)this + 6324);
}
int32_t* ABP_NPC_C::M_PtrGetWorkSlotIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 6324);
}
void ABP_NPC_C::M_SetWorkSlotIndex(const int32_t& value) {
	Write((byte*)this + 6324, value);
}
// Member Getter and Setter of AI_Task
// Declaration: class UBTTask_BlueprintBase* AI_Task
class UBTTask_BlueprintBase* ABP_NPC_C::M_GetAI_Task() const {
	return Read<class UBTTask_BlueprintBase*>((byte*)this + 6328);
}
class UBTTask_BlueprintBase** ABP_NPC_C::M_PtrGetAI_Task() {
	return reinterpret_cast<class UBTTask_BlueprintBase**>((byte*)this + 6328);
}
void ABP_NPC_C::M_SetAI_Task(const class UBTTask_BlueprintBase*& value) {
	Write((byte*)this + 6328, value);
}
// Member Getter and Setter of FieldTask
// Declaration: struct FST_FieldTasksLists FieldTask
struct FST_FieldTasksLists ABP_NPC_C::M_GetFieldTask() const {
	return Read<struct FST_FieldTasksLists>((byte*)this + 6336);
}
struct FST_FieldTasksLists* ABP_NPC_C::M_PtrGetFieldTask() {
	return reinterpret_cast<struct FST_FieldTasksLists*>((byte*)this + 6336);
}
void ABP_NPC_C::M_SetFieldTask(const struct FST_FieldTasksLists& value) {
	Write((byte*)this + 6336, value);
}
// Member Getter and Setter of QuestAnimation
// Declaration: struct FST_QuestAnimation QuestAnimation
struct FST_QuestAnimation ABP_NPC_C::M_GetQuestAnimation() const {
	return Read<struct FST_QuestAnimation>((byte*)this + 6392);
}
struct FST_QuestAnimation* ABP_NPC_C::M_PtrGetQuestAnimation() {
	return reinterpret_cast<struct FST_QuestAnimation*>((byte*)this + 6392);
}
void ABP_NPC_C::M_SetQuestAnimation(const struct FST_QuestAnimation& value) {
	Write((byte*)this + 6392, value);
}
// Member Getter and Setter of QuestToGive
// Declaration: struct FST_QuestInfos QuestToGive
struct FST_QuestInfos ABP_NPC_C::M_GetQuestToGive() const {
	return Read<struct FST_QuestInfos>((byte*)this + 6400);
}
struct FST_QuestInfos* ABP_NPC_C::M_PtrGetQuestToGive() {
	return reinterpret_cast<struct FST_QuestInfos*>((byte*)this + 6400);
}
void ABP_NPC_C::M_SetQuestToGive(const struct FST_QuestInfos& value) {
	Write((byte*)this + 6400, value);
}
// Member Getter and Setter of TalkQuestReference
// Declaration: TArray<struct FST_QuestInfos> TalkQuestReference
TArray<struct FST_QuestInfos> ABP_NPC_C::M_GetTalkQuestReference() const {
	return Read<TArray<struct FST_QuestInfos>>((byte*)this + 7376);
}
TArray<struct FST_QuestInfos>* ABP_NPC_C::M_PtrGetTalkQuestReference() {
	return reinterpret_cast<TArray<struct FST_QuestInfos>*>((byte*)this + 7376);
}
void ABP_NPC_C::M_SetTalkQuestReference(const TArray<struct FST_QuestInfos>& value) {
	Write((byte*)this + 7376, value);
}
// Member Getter and Setter of WorkMontageComplete
// Declaration: TAssetPtr<class FWorkMontageComplete__DelegateSignature> WorkMontageComplete
TAssetPtr<class FWorkMontageComplete__DelegateSignature> ABP_NPC_C::M_GetWorkMontageComplete() const {
	return Read<TAssetPtr<class FWorkMontageComplete__DelegateSignature>>((byte*)this + 7392);
}
TAssetPtr<class FWorkMontageComplete__DelegateSignature>* ABP_NPC_C::M_PtrGetWorkMontageComplete() {
	return reinterpret_cast<TAssetPtr<class FWorkMontageComplete__DelegateSignature>*>((byte*)this + 7392);
}
void ABP_NPC_C::M_SetWorkMontageComplete(const TAssetPtr<class FWorkMontageComplete__DelegateSignature>& value) {
	Write((byte*)this + 7392, value);
}
// Member Getter and Setter of WorkLoopsFinished
// Declaration: TAssetPtr<class FWorkLoopsFinished__DelegateSignature> WorkLoopsFinished
TAssetPtr<class FWorkLoopsFinished__DelegateSignature> ABP_NPC_C::M_GetWorkLoopsFinished() const {
	return Read<TAssetPtr<class FWorkLoopsFinished__DelegateSignature>>((byte*)this + 7408);
}
TAssetPtr<class FWorkLoopsFinished__DelegateSignature>* ABP_NPC_C::M_PtrGetWorkLoopsFinished() {
	return reinterpret_cast<TAssetPtr<class FWorkLoopsFinished__DelegateSignature>*>((byte*)this + 7408);
}
void ABP_NPC_C::M_SetWorkLoopsFinished(const TAssetPtr<class FWorkLoopsFinished__DelegateSignature>& value) {
	Write((byte*)this + 7408, value);
}
// Member Getter and Setter of OptimizationBlackboards
// Declaration: struct FST_SAVE_NPC_Blackboards OptimizationBlackboards
struct FST_SAVE_NPC_Blackboards ABP_NPC_C::M_GetOptimizationBlackboards() const {
	return Read<struct FST_SAVE_NPC_Blackboards>((byte*)this + 7424);
}
struct FST_SAVE_NPC_Blackboards* ABP_NPC_C::M_PtrGetOptimizationBlackboards() {
	return reinterpret_cast<struct FST_SAVE_NPC_Blackboards*>((byte*)this + 7424);
}
void ABP_NPC_C::M_SetOptimizationBlackboards(const struct FST_SAVE_NPC_Blackboards& value) {
	Write((byte*)this + 7424, value);
}
// Member Getter and Setter of WorkMontage
// Declaration: class UAnimMontage* WorkMontage
class UAnimMontage* ABP_NPC_C::M_GetWorkMontage() const {
	return Read<class UAnimMontage*>((byte*)this + 7464);
}
class UAnimMontage** ABP_NPC_C::M_PtrGetWorkMontage() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 7464);
}
void ABP_NPC_C::M_SetWorkMontage(const class UAnimMontage*& value) {
	Write((byte*)this + 7464, value);
}
// Member Getter and Setter of VendorCat
// Declaration: struct FDataTableRowHandle VendorCat
struct FDataTableRowHandle ABP_NPC_C::M_GetVendorCat() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 7472);
}
struct FDataTableRowHandle* ABP_NPC_C::M_PtrGetVendorCat() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 7472);
}
void ABP_NPC_C::M_SetVendorCat(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 7472, value);
}
// Member Getter and Setter of NPC_Status
// Declaration: TEnumAsByte<E_NPCStatus> NPC_Status
TEnumAsByte<E_NPCStatus> ABP_NPC_C::M_GetNPC_Status() const {
	return Read<TEnumAsByte<E_NPCStatus>>((byte*)this + 7488);
}
TEnumAsByte<E_NPCStatus>* ABP_NPC_C::M_PtrGetNPC_Status() {
	return reinterpret_cast<TEnumAsByte<E_NPCStatus>*>((byte*)this + 7488);
}
void ABP_NPC_C::M_SetNPC_Status(const TEnumAsByte<E_NPCStatus>& value) {
	Write((byte*)this + 7488, value);
}
// Member Getter and Setter of ToolActivity
// Declaration: TEnumAsByte<E_Tools_Activity> ToolActivity
TEnumAsByte<E_Tools_Activity> ABP_NPC_C::M_GetToolActivity() const {
	return Read<TEnumAsByte<E_Tools_Activity>>((byte*)this + 7489);
}
TEnumAsByte<E_Tools_Activity>* ABP_NPC_C::M_PtrGetToolActivity() {
	return reinterpret_cast<TEnumAsByte<E_Tools_Activity>*>((byte*)this + 7489);
}
void ABP_NPC_C::M_SetToolActivity(const TEnumAsByte<E_Tools_Activity>& value) {
	Write((byte*)this + 7489, value);
}
// Member Getter and Setter of NeedItem
// Declaration: struct FName NeedItem
struct FName ABP_NPC_C::M_GetNeedItem() const {
	return Read<struct FName>((byte*)this + 7492);
}
struct FName* ABP_NPC_C::M_PtrGetNeedItem() {
	return reinterpret_cast<struct FName*>((byte*)this + 7492);
}
void ABP_NPC_C::M_SetNeedItem(const struct FName& value) {
	Write((byte*)this + 7492, value);
}
// Member Getter and Setter of OptimizationSetBlackboards
// Declaration: bool OptimizationSetBlackboards
bool ABP_NPC_C::M_GetOptimizationSetBlackboards() const {
	return Read<bool>((byte*)this + 7500);
}
bool* ABP_NPC_C::M_PtrGetOptimizationSetBlackboards() {
	return reinterpret_cast<bool*>((byte*)this + 7500);
}
void ABP_NPC_C::M_SetOptimizationSetBlackboards(const bool& value) {
	Write((byte*)this + 7500, value);
}
// Member Getter and Setter of Paths
// Declaration: TArray<struct FVector> Paths
TArray<struct FVector> ABP_NPC_C::M_GetPaths() const {
	return Read<TArray<struct FVector>>((byte*)this + 7504);
}
TArray<struct FVector>* ABP_NPC_C::M_PtrGetPaths() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 7504);
}
void ABP_NPC_C::M_SetPaths(const TArray<struct FVector>& value) {
	Write((byte*)this + 7504, value);
}
// Member Getter and Setter of WhetherAffectNavigation
// Declaration: bool WhetherAffectNavigation
bool ABP_NPC_C::M_GetWhetherAffectNavigation() const {
	return Read<bool>((byte*)this + 7520);
}
bool* ABP_NPC_C::M_PtrGetWhetherAffectNavigation() {
	return reinterpret_cast<bool*>((byte*)this + 7520);
}
void ABP_NPC_C::M_SetWhetherAffectNavigation(const bool& value) {
	Write((byte*)this + 7520, value);
}
// Member Getter and Setter of BreakMontageComplete
// Declaration: TAssetPtr<class FBreakMontageComplete__DelegateSignature> BreakMontageComplete
TAssetPtr<class FBreakMontageComplete__DelegateSignature> ABP_NPC_C::M_GetBreakMontageComplete() const {
	return Read<TAssetPtr<class FBreakMontageComplete__DelegateSignature>>((byte*)this + 7528);
}
TAssetPtr<class FBreakMontageComplete__DelegateSignature>* ABP_NPC_C::M_PtrGetBreakMontageComplete() {
	return reinterpret_cast<TAssetPtr<class FBreakMontageComplete__DelegateSignature>*>((byte*)this + 7528);
}
void ABP_NPC_C::M_SetBreakMontageComplete(const TAssetPtr<class FBreakMontageComplete__DelegateSignature>& value) {
	Write((byte*)this + 7528, value);
}
// Member Getter and Setter of BreakMontage
// Declaration: class UAnimMontage* BreakMontage
class UAnimMontage* ABP_NPC_C::M_GetBreakMontage() const {
	return Read<class UAnimMontage*>((byte*)this + 7544);
}
class UAnimMontage** ABP_NPC_C::M_PtrGetBreakMontage() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 7544);
}
void ABP_NPC_C::M_SetBreakMontage(const class UAnimMontage*& value) {
	Write((byte*)this + 7544, value);
}
// Member Getter and Setter of Toys
// Declaration: TArray<struct FName> Toys
TArray<struct FName> ABP_NPC_C::M_GetToys() const {
	return Read<TArray<struct FName>>((byte*)this + 7552);
}
TArray<struct FName>* ABP_NPC_C::M_PtrGetToys() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 7552);
}
void ABP_NPC_C::M_SetToys(const TArray<struct FName>& value) {
	Write((byte*)this + 7552, value);
}
// Member Getter and Setter of CanChangeMovementActive
// Declaration: bool CanChangeMovementActive
bool ABP_NPC_C::M_GetCanChangeMovementActive() const {
	return Read<bool>((byte*)this + 7568);
}
bool* ABP_NPC_C::M_PtrGetCanChangeMovementActive() {
	return reinterpret_cast<bool*>((byte*)this + 7568);
}
void ABP_NPC_C::M_SetCanChangeMovementActive(const bool& value) {
	Write((byte*)this + 7568, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.WorkMontageComplete__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::WorkMontageComplete__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.WorkMontageComplete__DelegateSignature");

	struct ABP_NPC_C_WorkMontageComplete__DelegateSignature_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_WorkMontageComplete__DelegateSignature_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.WorkLoopsFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::WorkLoopsFinished__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.WorkLoopsFinished__DelegateSignature");

	struct ABP_NPC_C_WorkLoopsFinished__DelegateSignature_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_WorkLoopsFinished__DelegateSignature_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.BreakMontageComplete__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::BreakMontageComplete__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BreakMontageComplete__DelegateSignature");

	struct ABP_NPC_C_BreakMontageComplete__DelegateSignature_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_BreakMontageComplete__DelegateSignature_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::ExecuteUbergraph_BP_NPC(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC");

	struct ABP_NPC_C_ExecuteUbergraph_BP_NPC_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_ExecuteUbergraph_BP_NPC_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_BindEventToBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_BindEventToBreakMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_BindEventToBreakMontageComplete");

	struct ABP_NPC_C_AI_BindEventToBreakMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_BindEventToBreakMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindEventFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindEventFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindEventFromBreakMontageComplete");

	struct ABP_NPC_C_AI_UnbindEventFromBreakMontageComplete_Params {
	};
	ABP_NPC_C_AI_UnbindEventFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnBind_BreakMontage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnBind_BreakMontage(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBind_BreakMontage");

	struct ABP_NPC_C_OnBind_BreakMontage_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_OnBind_BreakMontage_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_BindEventToOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_BindEventToOnIdleAnimFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_BindEventToOnIdleAnimFinished");

	struct ABP_NPC_C_AI_BindEventToOnIdleAnimFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_BindEventToOnIdleAnimFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindEventsFromOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindEventsFromOnIdleAnimFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindEventsFromOnIdleAnimFinished");

	struct ABP_NPC_C_AI_UnbindEventsFromOnIdleAnimFinished_Params {
	};
	ABP_NPC_C_AI_UnbindEventsFromOnIdleAnimFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnBind_IdleAnim
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnBind_IdleAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBind_IdleAnim");

	struct ABP_NPC_C_OnBind_IdleAnim_Params {
	};
	ABP_NPC_C_OnBind_IdleAnim_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_BindEventToOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_BindEventToOnSleepFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_BindEventToOnSleepFinished");

	struct ABP_NPC_C_AI_BindEventToOnSleepFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_BindEventToOnSleepFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnBind_OnSleep
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnBind_OnSleep() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBind_OnSleep");

	struct ABP_NPC_C_OnBind_OnSleep_Params {
	};
	ABP_NPC_C_OnBind_OnSleep_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindEventFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindEventFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindEventFromOnSleepFinished");

	struct ABP_NPC_C_AI_UnbindEventFromOnSleepFinished_Params {
	};
	ABP_NPC_C_AI_UnbindEventFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindAllEventsFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromOnSleepFinished");

	struct ABP_NPC_C_AI_UnbindAllEventsFromOnSleepFinished_Params {
	};
	ABP_NPC_C_AI_UnbindAllEventsFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_BindEventToOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_BindEventToOnSitFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_BindEventToOnSitFinished");

	struct ABP_NPC_C_AI_BindEventToOnSitFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_BindEventToOnSitFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindEventFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindEventFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindEventFromOnSitFinished");

	struct ABP_NPC_C_AI_UnbindEventFromOnSitFinished_Params {
	};
	ABP_NPC_C_AI_UnbindEventFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindAllEventsFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromOnSitFinished");

	struct ABP_NPC_C_AI_UnbindAllEventsFromOnSitFinished_Params {
	};
	ABP_NPC_C_AI_UnbindAllEventsFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnBind_OnSit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnBind_OnSit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBind_OnSit");

	struct ABP_NPC_C_OnBind_OnSit_Params {
	};
	ABP_NPC_C_OnBind_OnSit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindAllEventsFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromBreakMontageComplete");

	struct ABP_NPC_C_AI_UnbindAllEventsFromBreakMontageComplete_Params {
	};
	ABP_NPC_C_AI_UnbindAllEventsFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_BindEventToWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_BindEventToWorkMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_BindEventToWorkMontageComplete");

	struct ABP_NPC_C_AI_BindEventToWorkMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_BindEventToWorkMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindEventFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindEventFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindEventFromWorkMontageComplete");

	struct ABP_NPC_C_AI_UnbindEventFromWorkMontageComplete_Params {
	};
	ABP_NPC_C_AI_UnbindEventFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnbindAllEventsFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnbindAllEventsFromWorkMontageComplete");

	struct ABP_NPC_C_AI_UnbindAllEventsFromWorkMontageComplete_Params {
	};
	ABP_NPC_C_AI_UnbindAllEventsFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnBind_WorkMontage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnBind_WorkMontage(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBind_WorkMontage");

	struct ABP_NPC_C_OnBind_WorkMontage_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_OnBind_WorkMontage_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_HideHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateToolType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_HideHeldItem(bool IsWorking, bool UpdateToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideHeldItem");

	struct ABP_NPC_C_AI_HideHeldItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		bool UpdateToolType;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_HideHeldItem_Params params;
	params.IsWorking = IsWorking;
	params.UpdateToolType = UpdateToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SpawnTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnTool");

	struct ABP_NPC_C_AI_SpawnTool_Params {
		TEnumAsByte<E_Tools> Tool;			//Offset: 0 | ElementSize: 1
		bool CheckInInventory;			//Offset: 1 | ElementSize: 1
		bool FlipTool;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_C_AI_SpawnTool_Params params;
	params.Tool = Tool;
	params.CheckInInventory = CheckInInventory;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SpawnOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnOff-HandItem");

	struct ABP_NPC_C_AI_SpawnOff_HandItem_Params {
		TEnumAsByte<E_Tools> Item;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SpawnOff_HandItem_Params params;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_HideOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_HideOff_HandItem(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideOff-HandItem");

	struct ABP_NPC_C_AI_HideOff_HandItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_HideOff_HandItem_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_HideItemsInHands
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_HideItemsInHands(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideItemsInHands");

	struct ABP_NPC_C_AI_HideItemsInHands_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_HideItemsInHands_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_InteractResource
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_InteractResource(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_InteractResource");

	struct ABP_NPC_C_AI_InteractResource_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_InteractResource_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_InteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_InteractFoliage(bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_InteractFoliage");

	struct ABP_NPC_C_AI_InteractFoliage_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_InteractFoliage_Params params;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_ToolInteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_ToolInteractFoliage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ToolInteractFoliage");

	struct ABP_NPC_C_AI_ToolInteractFoliage_Params {
	};
	ABP_NPC_C_AI_ToolInteractFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_OutsideInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_OutsideInteract(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_OutsideInteract");

	struct ABP_NPC_C_AI_OutsideInteract_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_OutsideInteract_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_InteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_InteractWithFurniture(struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_InteractWithFurniture");

	struct ABP_NPC_C_AI_InteractWithFurniture_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		bool Timer;			//Offset: 136 | ElementSize: 1
	};
	ABP_NPC_C_AI_InteractWithFurniture_Params params;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CancelInteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_CancelInteractWithFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CancelInteractWithFurniture");

	struct ABP_NPC_C_AI_CancelInteractWithFurniture_Params {
	};
	ABP_NPC_C_AI_CancelInteractWithFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_StopMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_StopMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_StopMovement");

	struct ABP_NPC_C_AI_StopMovement_Params {
	};
	ABP_NPC_C_AI_StopMovement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_MoveAside
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_MoveAside() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_MoveAside");

	struct ABP_NPC_C_AI_MoveAside_Params {
	};
	ABP_NPC_C_AI_MoveAside_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnlockThings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnlockThings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnlockThings");

	struct ABP_NPC_C_AI_UnlockThings_Params {
	};
	ABP_NPC_C_AI_UnlockThings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FlipTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnFlip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FlipTool(bool UnFlip) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FlipTool");

	struct ABP_NPC_C_AI_FlipTool_Params {
		bool UnFlip;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_FlipTool_Params params;
	params.UnFlip = UnFlip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckChildrenAffection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOut(bool CheckChildrenAffection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOut");

	struct ABP_NPC_C_AI_GetOut_Params {
		bool CheckChildrenAffection;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetOut_Params params;
	params.CheckChildrenAffection = CheckChildrenAffection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_LightCampfire
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_LightCampfire() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_LightCampfire");

	struct ABP_NPC_C_AI_LightCampfire_Params {
	};
	ABP_NPC_C_AI_LightCampfire_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnoccupyBuildingWorkSlot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnoccupyBuildingWorkSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnoccupyBuildingWorkSlot");

	struct ABP_NPC_C_AI_UnoccupyBuildingWorkSlot_Params {
	};
	ABP_NPC_C_AI_UnoccupyBuildingWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_UnoccupyNPC_FieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_UnoccupyNPC_FieldTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnoccupyNPC_FieldTask");

	struct ABP_NPC_C_AI_UnoccupyNPC_FieldTask_Params {
	};
	ABP_NPC_C_AI_UnoccupyNPC_FieldTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_ResetBehaviorOnWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_ResetBehaviorOnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ResetBehaviorOnWakeUp");

	struct ABP_NPC_C_AI_ResetBehaviorOnWakeUp_Params {
	};
	ABP_NPC_C_AI_ResetBehaviorOnWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_PlayAudio
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_PlayAudio(float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_PlayAudio");

	struct ABP_NPC_C_AI_PlayAudio_Params {
		float StartTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_PlayAudio_Params params;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_StopAudio
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_StopAudio() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_StopAudio");

	struct ABP_NPC_C_AI_StopAudio_Params {
	};
	ABP_NPC_C_AI_StopAudio_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_StopFurnitureAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_StopFurnitureAnimation(class AActor* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_StopFurnitureAnimation");

	struct ABP_NPC_C_AI_StopFurnitureAnimation_Params {
		class AActor* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_StopFurnitureAnimation_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SleepingFinish
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SleepingFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SleepingFinish");

	struct ABP_NPC_C_SleepingFinish_Params {
	};
	ABP_NPC_C_SleepingFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SittingFinish
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SittingFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SittingFinish");

	struct ABP_NPC_C_SittingFinish_Params {
	};
	ABP_NPC_C_SittingFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetBanditType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetBanditType(TEnumAsByte<E_BanditType> BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBanditType");

	struct ABP_NPC_C_AI_SetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetBanditType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetActivity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpecifiedActivities	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetActivity(const TArray<int32_t>& SpecifiedActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetActivity");

	struct ABP_NPC_C_AI_SetActivity_Params {
		TArray<int32_t> SpecifiedActivities;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_SetActivity_Params params;
	params.SpecifiedActivities = SpecifiedActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetGoHome_Activity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetGoHome_Activity(bool GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetGoHome_Activity");

	struct ABP_NPC_C_AI_SetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetGoHome_Activity_Params params;
	params.GoHome_Activity = GoHome_Activity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetWorkSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetWorkSlotIndex(int32_t WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetWorkSlotIndex");

	struct ABP_NPC_C_AI_SetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetWorkSlotIndex_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetFieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Field_Task	Type: struct FST_FieldTasksLists	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetFieldTask(struct FST_FieldTasksLists Field_Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetFieldTask");

	struct ABP_NPC_C_AI_SetFieldTask_Params {
		struct FST_FieldTasksLists Field_Task;			//Offset: 0 | ElementSize: 56
	};
	ABP_NPC_C_AI_SetFieldTask_Params params;
	params.Field_Task = Field_Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCharacterRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCharacterRotation");

	struct ABP_NPC_C_AI_SetCharacterRotation_Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCollisionResponse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCollisionResponse");

	struct ABP_NPC_C_AI_SetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Response;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetCollisionResponse_Params params;
	params.Channel = Channel;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetNPC_MustBeDeactivated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNPC_MustBeDeactivated");

	struct ABP_NPC_C_AI_SetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetNPC_MustBeDeactivated_Params params;
	params.NPC_MustBeDeactivated = NPC_MustBeDeactivated;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetNPC_Status
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetNPC_Status(TEnumAsByte<E_NPCStatus> NPC_Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNPC_Status");

	struct ABP_NPC_C_AI_SetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetNPC_Status_Params params;
	params.NPC_Status = NPC_Status;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetNeedItemName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetNeedItemName(struct FName NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNeedItemName");

	struct ABP_NPC_C_AI_SetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_SetNeedItemName_Params params;
	params.NeedItem = NeedItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetIsLookAtTargetRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetIsLookAtTargetRotation");

	struct ABP_NPC_C_AI_SetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetIsLookAtTargetRotation_Params params;
	params.IsLookAtTargetRotation = IsLookAtTargetRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCanAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCanAffectNavigation(bool CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCanAffectNavigation");

	struct ABP_NPC_C_AI_SetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetCanAffectNavigation_Params params;
	params.CanAffectNavigation = CanAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetInteractionSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetInteractionSlotIndex(int32_t InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetInteractionSlotIndex");

	struct ABP_NPC_C_AI_SetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetInteractionSlotIndex_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetIsChangedTimeOfDay
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetIsChangedTimeOfDay");

	struct ABP_NPC_C_AI_SetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetWhetherAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetWhetherAffectNavigation(bool WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetWhetherAffectNavigation");

	struct ABP_NPC_C_AI_SetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetWhetherAffectNavigation_Params params;
	params.WhetherAffectNavigation = WhetherAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCasualClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCasualClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCasualClothes");

	struct ABP_NPC_C_AI_SetCasualClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetCasualClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetProfessionClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetProfessionClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetProfessionClothes");

	struct ABP_NPC_C_AI_SetProfessionClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetProfessionClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_TalkingNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_TalkingNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_TalkingNPC");

	struct ABP_NPC_C_AI_TalkingNPC_Params {
	};
	ABP_NPC_C_AI_TalkingNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetBlockTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlockTalking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetBlockTalking(bool BlockTalking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBlockTalking");

	struct ABP_NPC_C_AI_SetBlockTalking_Params {
		bool BlockTalking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetBlockTalking_Params params;
	params.BlockTalking = BlockTalking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_EndTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_EndTalking() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_EndTalking");

	struct ABP_NPC_C_AI_EndTalking_Params {
	};
	ABP_NPC_C_AI_EndTalking_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_EnableDeadMethods
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_EnableDeadMethods() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_EnableDeadMethods");

	struct ABP_NPC_C_AI_EnableDeadMethods_Params {
	};
	ABP_NPC_C_AI_EnableDeadMethods_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetMontages
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetMontages");

	struct ABP_NPC_C_AI_SetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_C_AI_SetMontages_Params params;
	params.WorkMontage = WorkMontage;
	params.BreakMontage = BreakMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetBeginSleepTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetBeginSleepTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBeginSleepTime");

	struct ABP_NPC_C_AI_SetBeginSleepTime_Params {
	};
	ABP_NPC_C_AI_SetBeginSleepTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetBeginWakeUpTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetBeginWakeUpTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBeginWakeUpTime");

	struct ABP_NPC_C_AI_SetBeginWakeUpTime_Params {
	};
	ABP_NPC_C_AI_SetBeginWakeUpTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetPlayingTagNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetPlayingTagNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetPlayingTagNPC");

	struct ABP_NPC_C_AI_SetPlayingTagNPC_Params {
	};
	ABP_NPC_C_AI_SetPlayingTagNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCurrentWorkStateLoop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCurrentWorkStateLoop");

	struct ABP_NPC_C_AI_SetCurrentWorkStateLoop_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetCurrentWorkStateLoop_Params params;
	params.CurrentWorkStateLoop = CurrentWorkStateLoop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetPath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDistance	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetPath");

	struct ABP_NPC_C_AI_SetPath_Params {
		bool CheckDistance;			//Offset: 0 | ElementSize: 1
		float Distance;			//Offset: 4 | ElementSize: 4
		struct FVector Destination;			//Offset: 8 | ElementSize: 12
	};
	ABP_NPC_C_AI_SetPath_Params params;
	params.CheckDistance = CheckDistance;
	params.Distance = Distance;
	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetInteractedActor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetInteractedActor(class AActor* InteractedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetInteractedActor");

	struct ABP_NPC_C_AI_SetInteractedActor_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_SetInteractedActor_Params params;
	params.InteractedActor = InteractedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetAnimationState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetAnimationState");

	struct ABP_NPC_C_AI_SetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetAnimationState_Params params;
	params.Sleeping = Sleeping;
	params.Sitting = Sitting;
	params.Working = Working;
	params.TakingBreak = TakingBreak;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetGetOutSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetGetOutSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetGetOutSettings");

	struct ABP_NPC_C_AI_SetGetOutSettings_Params {
	};
	ABP_NPC_C_AI_SetGetOutSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetSound
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: TAssetPtr<class USoundBase>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetSound(TAssetPtr<class USoundBase> Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetSound");

	struct ABP_NPC_C_AI_SetSound_Params {
		TAssetPtr<class USoundBase> Sound;			//Offset: 0 | ElementSize: 40
	};
	ABP_NPC_C_AI_SetSound_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetChangeCollision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeCollision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetChangeCollision(bool ChangeCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetChangeCollision");

	struct ABP_NPC_C_AI_SetChangeCollision_Params {
		bool ChangeCollision;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetChangeCollision_Params params;
	params.ChangeCollision = ChangeCollision;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetNPCAfterGetOrWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetNPCAfterGetOrWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNPCAfterGetOrWakeUp");

	struct ABP_NPC_C_AI_SetNPCAfterGetOrWakeUp_Params {
	};
	ABP_NPC_C_AI_SetNPCAfterGetOrWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetWorkTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetWorkTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetWorkTask");

	struct ABP_NPC_C_AI_SetWorkTask_Params {
	};
	ABP_NPC_C_AI_SetWorkTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetHasInfant
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetHasInfant(bool HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetHasInfant");

	struct ABP_NPC_C_AI_SetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetHasInfant_Params params;
	params.HasInfant = HasInfant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetProfessionData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetProfessionData(struct FST_Profession ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetProfessionData");

	struct ABP_NPC_C_SetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	ABP_NPC_C_SetProfessionData_Params params;
	params.ProfessionData = ProfessionData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetID(struct FString ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetID");

	struct ABP_NPC_C_AI_SetID_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_SetID_Params params;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetRotationManaged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRotationManaged	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetRotationManaged(bool IsRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetRotationManaged");

	struct ABP_NPC_C_AI_SetRotationManaged_Params {
		bool IsRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetRotationManaged_Params params;
	params.IsRotationManaged = IsRotationManaged;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetBedIndexes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBedIndexes");

	struct ABP_NPC_C_AI_SetBedIndexes_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetBedIndexes_Params params;
	params.BedIndex = BedIndex;
	params.BedSlotIndex = BedSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetWaitTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDayActivities	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetWaitTask(bool CheckDayActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetWaitTask");

	struct ABP_NPC_C_AI_SetWaitTask_Params {
		bool CheckDayActivities;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetWaitTask_Params params;
	params.CheckDayActivities = CheckDayActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetCanChangeMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanChangeMovementActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetCanChangeMovementActive(bool CanChangeMovementActive) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCanChangeMovementActive");

	struct ABP_NPC_C_AI_SetCanChangeMovementActive_Params {
		bool CanChangeMovementActive;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetCanChangeMovementActive_Params params;
	params.CanChangeMovementActive = CanChangeMovementActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetQuestBlocking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetQuestBlocking(bool QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetQuestBlocking");

	struct ABP_NPC_C_AI_SetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_SetQuestBlocking_Params params;
	params.QuestBlocking = QuestBlocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI Start Combat
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_Start_Combat(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI Start Combat");

	struct ABP_NPC_C_AI_Start_Combat_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_Start_Combat_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetMotherParameters
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetMotherParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetMotherParameters");

	struct ABP_NPC_C_AI_SetMotherParameters_Params {
	};
	ABP_NPC_C_AI_SetMotherParameters_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_AfterRemovalFromWorkplace
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_AfterRemovalFromWorkplace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_AfterRemovalFromWorkplace");

	struct ABP_NPC_C_AI_AfterRemovalFromWorkplace_Params {
	};
	ABP_NPC_C_AI_AfterRemovalFromWorkplace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_RemovePathsPoint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_RemovePathsPoint(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_RemovePathsPoint");

	struct ABP_NPC_C_AI_RemovePathsPoint_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_RemovePathsPoint_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_RemoveAnimalReference
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_RemoveAnimalReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_RemoveAnimalReference");

	struct ABP_NPC_C_AI_RemoveAnimalReference_Params {
	};
	ABP_NPC_C_AI_RemoveAnimalReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_AfterRemovalFromHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_AfterRemovalFromHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_AfterRemovalFromHouse");

	struct ABP_NPC_C_AI_AfterRemovalFromHouse_Params {
	};
	ABP_NPC_C_AI_AfterRemovalFromHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_DestroyOnGetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_DestroyOnGetOut() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_DestroyOnGetOut");

	struct ABP_NPC_C_AI_DestroyOnGetOut_Params {
	};
	ABP_NPC_C_AI_DestroyOnGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Set Sleeping Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set Sleeping Event");

	struct ABP_NPC_C_Set_Sleeping_Event_Params {
		bool IsSleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_C_Set_Sleeping_Event_Params params;
	params.IsSleeping = IsSleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Set Sitting Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set Sitting Event");

	struct ABP_NPC_C_Set_Sitting_Event_Params {
		bool IsSitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_C_Set_Sitting_Event_Params params;
	params.IsSitting = IsSitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.PlayPickingUpMontage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayAnimSound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.PlayPickingUpMontage");

	struct ABP_NPC_C_PlayPickingUpMontage_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
		bool PlayAnimSound;			//Offset: 9 | ElementSize: 1
	};
	ABP_NPC_C_PlayPickingUpMontage_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;
	params.PlayAnimSound = PlayAnimSound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.NPCsStartTimer_Stamina_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::NPCsStartTimer_Stamina_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.NPCsStartTimer_Stamina_BPI");

	struct ABP_NPC_C_NPCsStartTimer_Stamina_BPI_Params {
	};
	ABP_NPC_C_NPCsStartTimer_Stamina_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.HitRagdollDecay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::HitRagdollDecay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.HitRagdollDecay");

	struct ABP_NPC_C_HitRagdollDecay_Params {
	};
	ABP_NPC_C_HitRagdollDecay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnCapsuleComponentHit
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NormalImpulse	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_NPC_C::OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCapsuleComponentHit");

	struct ABP_NPC_C_OnCapsuleComponentHit_Params {
		class UPrimitiveComponent* HitComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		struct FVector NormalImpulse;			//Offset: 24 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 36 | ElementSize: 136
	};
	ABP_NPC_C_OnCapsuleComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Hit
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitForce	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Hit");

	struct ABP_NPC_C_Hit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector HitForce;			//Offset: 12 | ElementSize: 12
		struct FName HitBoneName;			//Offset: 24 | ElementSize: 8
	};
	ABP_NPC_C_Hit_Params params;
	params.HitLocation = HitLocation;
	params.HitForce = HitForce;
	params.HitBoneName = HitBoneName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SetPerceptionActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TickInterval	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_SetPerceptionActive(bool Enabled, float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetPerceptionActive");

	struct ABP_NPC_C_AI_SetPerceptionActive_Params {
		bool Enabled;			//Offset: 0 | ElementSize: 1
		float TickInterval;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_AI_SetPerceptionActive_Params params;
	params.Enabled = Enabled;
	params.TickInterval = TickInterval;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetCharacterMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsIKActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::SetCharacterMovementActive(bool IsActive, bool IsIKActive) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetCharacterMovementActive");

	struct ABP_NPC_C_SetCharacterMovementActive_Params {
		bool IsActive;			//Offset: 0 | ElementSize: 1
		bool IsIKActive;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_SetCharacterMovementActive_Params params;
	params.IsActive = IsActive;
	params.IsIKActive = IsIKActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_BreakLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_BreakLoopIncreased");

	struct ABP_NPC_C_AnimNotify_BreakLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_AnimNotify_BreakLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_BreakLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_BreakLoopsFinished");

	struct ABP_NPC_C_AnimNotify_BreakLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_AnimNotify_BreakLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopIncreased");

	struct ABP_NPC_C_AnimNotify_WorkLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_AnimNotify_WorkLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_BreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_BreakMontageComplete");

	struct ABP_NPC_C_AnimNotify_BreakMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AnimNotify_BreakMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FarOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::FarOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FarOptimization");

	struct ABP_NPC_C_FarOptimization_Params {
	};
	ABP_NPC_C_FarOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.MediumOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::MediumOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.MediumOptimization");

	struct ABP_NPC_C_MediumOptimization_Params {
	};
	ABP_NPC_C_MediumOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.CloseOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::CloseOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CloseOptimization");

	struct ABP_NPC_C_CloseOptimization_Params {
	};
	ABP_NPC_C_CloseOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.NoneOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::NoneOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.NoneOptimization");

	struct ABP_NPC_C_NoneOptimization_Params {
	};
	ABP_NPC_C_NoneOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.RemoveFamilyFromHouse
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::RemoveFamilyFromHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RemoveFamilyFromHouse");

	struct ABP_NPC_C_RemoveFamilyFromHouse_Params {
	};
	ABP_NPC_C_RemoveFamilyFromHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.UpdateOnDead
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::UpdateOnDead() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UpdateOnDead");

	struct ABP_NPC_C_UpdateOnDead_Params {
	};
	ABP_NPC_C_UpdateOnDead_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnWakeUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnWakeUp");

	struct ABP_NPC_C_OnWakeUp_Params {
	};
	ABP_NPC_C_OnWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnGetUp
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnGetUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnGetUp");

	struct ABP_NPC_C_OnGetUp_Params {
	};
	ABP_NPC_C_OnGetUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.InitSetSkills
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::InitSetSkills(bool Birth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitSetSkills");

	struct ABP_NPC_C_InitSetSkills_Params {
		bool Birth;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_InitSetSkills_Params params;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopsFinished");

	struct ABP_NPC_C_AnimNotify_WorkLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AnimNotify_WorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_WorkMontageComplete");

	struct ABP_NPC_C_AnimNotify_WorkMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.EndFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::EndFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EndFalling");

	struct ABP_NPC_C_EndFalling_Params {
	};
	ABP_NPC_C_EndFalling_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.StartFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::StartFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StartFalling");

	struct ABP_NPC_C_StartFalling_Params {
	};
	ABP_NPC_C_StartFalling_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.DisableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::DisableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.DisableNPC");

	struct ABP_NPC_C_DisableNPC_Params {
	};
	ABP_NPC_C_DisableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.EnableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::EnableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EnableNPC");

	struct ABP_NPC_C_EnableNPC_Params {
	};
	ABP_NPC_C_EnableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetMeshAndMaterials
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TorsoMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HandsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LegsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FeetMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HatSKMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HoodMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Backpack	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Pouch	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DynamicMaterials	Type: TArray<struct FST_MeshDynamicMaterials>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_NPC_C::SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UObject* AnimClass, const TArray<struct FST_MeshDynamicMaterials>& DynamicMaterials) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMeshAndMaterials");

	struct ABP_NPC_C_SetMeshAndMaterials_Params {
		class USkeletalMesh* HeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* TorsoMesh;			//Offset: 8 | ElementSize: 8
		class USkeletalMesh* HandsMesh;			//Offset: 16 | ElementSize: 8
		class USkeletalMesh* LegsMesh;			//Offset: 24 | ElementSize: 8
		class USkeletalMesh* FeetMesh;			//Offset: 32 | ElementSize: 8
		class USkeletalMesh* HatSKMesh;			//Offset: 40 | ElementSize: 8
		class USkeletalMesh* HoodMesh;			//Offset: 48 | ElementSize: 8
		class USkeletalMesh* Backpack;			//Offset: 56 | ElementSize: 8
		class USkeletalMesh* Pouch;			//Offset: 64 | ElementSize: 8
		class UObject* AnimClass;			//Offset: 72 | ElementSize: 8
		TArray<struct FST_MeshDynamicMaterials> DynamicMaterials;			//Offset: 80 | ElementSize: 16
	};
	ABP_NPC_C_SetMeshAndMaterials_Params params;
	params.HeadMesh = HeadMesh;
	params.TorsoMesh = TorsoMesh;
	params.HandsMesh = HandsMesh;
	params.LegsMesh = LegsMesh;
	params.FeetMesh = FeetMesh;
	params.HatSKMesh = HatSKMesh;
	params.HoodMesh = HoodMesh;
	params.Backpack = Backpack;
	params.Pouch = Pouch;
	params.AnimClass = AnimClass;
	params.DynamicMaterials = DynamicMaterials;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetMesh
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NewHeadMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewTorsoMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHandsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewLegsMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewFeetMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHatSKMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHoodMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewHairMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewBackpackMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewPouchMesh	Type: class USkeletalMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UObject* NewClass, bool UpdateOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMesh");

	struct ABP_NPC_C_SetMesh_Params {
		class USkeletalMesh* NewHeadMesh;			//Offset: 0 | ElementSize: 8
		class USkeletalMesh* NewTorsoMesh;			//Offset: 8 | ElementSize: 8
		class USkeletalMesh* NewHandsMesh;			//Offset: 16 | ElementSize: 8
		class USkeletalMesh* NewLegsMesh;			//Offset: 24 | ElementSize: 8
		class USkeletalMesh* NewFeetMesh;			//Offset: 32 | ElementSize: 8
		class USkeletalMesh* NewHatSKMesh;			//Offset: 40 | ElementSize: 8
		class USkeletalMesh* NewHoodMesh;			//Offset: 48 | ElementSize: 8
		class USkeletalMesh* NewHairMesh;			//Offset: 56 | ElementSize: 8
		class USkeletalMesh* NewBackpackMesh;			//Offset: 64 | ElementSize: 8
		class USkeletalMesh* NewPouchMesh;			//Offset: 72 | ElementSize: 8
		class UObject* NewClass;			//Offset: 80 | ElementSize: 8
		bool UpdateOnly;			//Offset: 88 | ElementSize: 1
	};
	ABP_NPC_C_SetMesh_Params params;
	params.NewHeadMesh = NewHeadMesh;
	params.NewTorsoMesh = NewTorsoMesh;
	params.NewHandsMesh = NewHandsMesh;
	params.NewLegsMesh = NewLegsMesh;
	params.NewFeetMesh = NewFeetMesh;
	params.NewHatSKMesh = NewHatSKMesh;
	params.NewHoodMesh = NewHoodMesh;
	params.NewHairMesh = NewHairMesh;
	params.NewBackpackMesh = NewBackpackMesh;
	params.NewPouchMesh = NewPouchMesh;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.LoadNPCDataFromSave
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCData	Type: struct FST_SAVE_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: ResetEQ	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::LoadNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.LoadNPCDataFromSave");

	struct ABP_NPC_C_LoadNPCDataFromSave_Params {
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1160
		bool ResetEQ;			//Offset: 1160 | ElementSize: 1
		struct FString SaveGameVersion;			//Offset: 1168 | ElementSize: 16
	};
	ABP_NPC_C_LoadNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Init_NPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::Init_NPC(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Init_NPC");

	struct ABP_NPC_C_Init_NPC_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_Init_NPC_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ShowInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::ShowInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ShowInspectorUI");

	struct ABP_NPC_C_ShowInspectorUI_Params {
	};
	ABP_NPC_C_ShowInspectorUI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveTick");

	struct ABP_NPC_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.RemoveFromWorkPlace
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::RemoveFromWorkPlace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RemoveFromWorkPlace");

	struct ABP_NPC_C_RemoveFromWorkPlace_Params {
	};
	ABP_NPC_C_RemoveFromWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_AddSkills
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_AddSkills");

	struct ABP_NPC_C_AI_AddSkills_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_AI_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Interact");

	struct ABP_NPC_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool Timer;			//Offset: 144 | ElementSize: 1
	};
	ABP_NPC_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveBeginPlay");

	struct ABP_NPC_C_ReceiveBeginPlay_Params {
	};
	ABP_NPC_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_ResetNavInvoker
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AI_ResetNavInvoker() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ResetNavInvoker");

	struct ABP_NPC_C_AI_ResetNavInvoker_Params {
	};
	ABP_NPC_C_AI_ResetNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26");

	struct ABP_NPC_C_OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0");

	struct ABP_NPC_C_OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnLoaded_10E0287042B5716E06C80D849582D9F5
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnLoaded_10E0287042B5716E06C80D849582D9F5(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_10E0287042B5716E06C80D849582D9F5");

	struct ABP_NPC_C_OnLoaded_10E0287042B5716E06C80D849582D9F5_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnLoaded_10E0287042B5716E06C80D849582D9F5_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnLoaded_BB2717E64866BD380FC9D781DB1EF03A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnLoaded_BB2717E64866BD380FC9D781DB1EF03A(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_BB2717E64866BD380FC9D781DB1EF03A");

	struct ABP_NPC_C_OnLoaded_BB2717E64866BD380FC9D781DB1EF03A_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnLoaded_BB2717E64866BD380FC9D781DB1EF03A_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Loaded	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7");

	struct ABP_NPC_C_OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7_Params params;
	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetHeldItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetHeldItem");

	struct ABP_NPC_C_GetHeldItem_Params {
		class ABP_MasterHoldableItem_C* HeldItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_GetHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.IsInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowPressUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowTimerUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowOnlyName	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.IsInteractable");

	struct ABP_NPC_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.CheckForTalkGoal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::CheckForTalkGoal(TAssetPtr<class UDialogue>* Dialogue, bool* found) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckForTalkGoal");

	struct ABP_NPC_C_CheckForTalkGoal_Params {
		TAssetPtr<class UDialogue> Dialogue;			//Offset: 0 | ElementSize: 40
		bool found;			//Offset: 40 | ElementSize: 1
	};
	ABP_NPC_C_CheckForTalkGoal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Dialogue != nullptr)
		*Dialogue = params.Dialogue;
	if (found != nullptr)
		*found = params.found;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FindBedInHouse
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::FindBedInHouse(bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindBedInHouse");

	struct ABP_NPC_C_FindBedInHouse_Params {
		bool Occupy;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_FindBedInHouse_Params params;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetLookingRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
struct FRotator ABP_NPC_C::GetLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetLookingRotation");

	struct ABP_NPC_C_GetLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ABP_NPC_C_GetLookingRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Object
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlacboardObject	Type: TEnumAsByte<E_NPC_BlackboardObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Object	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject> BlacboardObject, class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Object");

	struct ABP_NPC_C_SetBlackboardValues_Object_Params {
		TEnumAsByte<E_NPC_BlackboardObject> BlacboardObject;			//Offset: 0 | ElementSize: 1
		class UObject* Object;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_C_SetBlackboardValues_Object_Params params;
	params.BlacboardObject = BlacboardObject;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Boolean
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<E_NPC_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Boolean");

	struct ABP_NPC_C_SetBlackboardValues_Boolean_Params {
		TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Vector
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blackboard_Vector	Type: TEnumAsByte<E_NPC_BlackboardVector>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector, struct FVector Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Vector");

	struct ABP_NPC_C_SetBlackboardValues_Vector_Params {
		TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector;			//Offset: 0 | ElementSize: 1
		struct FVector Value;			//Offset: 4 | ElementSize: 12
	};
	ABP_NPC_C_SetBlackboardValues_Vector_Params params;
	params.Blackboard_Vector = Blackboard_Vector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Object
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardObject	Type: TEnumAsByte<E_NPC_BlackboardObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Object	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject> BlackboardObject, class UObject** Object) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Object");

	struct ABP_NPC_C_GetBlackboardValues_Object_Params {
		TEnumAsByte<E_NPC_BlackboardObject> BlackboardObject;			//Offset: 0 | ElementSize: 1
		class UObject* Object;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_C_GetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;

	UObject::ProcessEvent(fn, &params);
	if (Object != nullptr)
		*Object = params.Object;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Boolean
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<E_NPC_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BooleanValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Boolean");

	struct ABP_NPC_C_GetBlackboardValues_Boolean_Params {
		TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool BooleanValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;

	UObject::ProcessEvent(fn, &params);
	if (BooleanValue != nullptr)
		*BooleanValue = params.BooleanValue;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Vector
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Blackboard_Vector	Type: TEnumAsByte<E_NPC_BlackboardVector>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VectorValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector, struct FVector* VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Vector");

	struct ABP_NPC_C_GetBlackboardValues_Vector_Params {
		TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector;			//Offset: 0 | ElementSize: 1
		struct FVector VectorValue;			//Offset: 4 | ElementSize: 12
	};
	ABP_NPC_C_GetBlackboardValues_Vector_Params params;
	params.Blackboard_Vector = Blackboard_Vector;

	UObject::ProcessEvent(fn, &params);
	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Int
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blackboard_Int	Type: TEnumAsByte<E_NPC_BlackboardInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Int	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int, int32_t Int) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Int");

	struct ABP_NPC_C_SetBlackboardValues_Int_Params {
		TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int;			//Offset: 0 | ElementSize: 1
		int32_t Int;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_SetBlackboardValues_Int_Params params;
	params.Blackboard_Int = Blackboard_Int;
	params.Int = Int;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_DailyCycle
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DailyCycle	Type: TEnumAsByte<E_DailyCycle>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle> DailyCycle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_DailyCycle");

	struct ABP_NPC_C_SetBlackboardValues_DailyCycle_Params {
		TEnumAsByte<E_DailyCycle> DailyCycle;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_DailyCycle_Params params;
	params.DailyCycle = DailyCycle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_NPCBehavior
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCBehavior	Type: TEnumAsByte<E_NPCBehavior>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior> NPCBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_NPCBehavior");

	struct ABP_NPC_C_SetBlackboardValues_NPCBehavior_Params {
		TEnumAsByte<E_NPCBehavior> NPCBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_NPCBehavior_Params params;
	params.NPCBehavior = NPCBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Int
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Blackboard_Int	Type: TEnumAsByte<E_NPC_BlackboardInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Int	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int, int32_t* Int) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Int");

	struct ABP_NPC_C_GetBlackboardValues_Int_Params {
		TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int;			//Offset: 0 | ElementSize: 1
		int32_t Int;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_GetBlackboardValues_Int_Params params;
	params.Blackboard_Int = Blackboard_Int;

	UObject::ProcessEvent(fn, &params);
	if (Int != nullptr)
		*Int = params.Int;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_DailyCycle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DailyCycle	Type: TEnumAsByte<E_DailyCycle>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle>* DailyCycle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_DailyCycle");

	struct ABP_NPC_C_GetBlackboardValues_DailyCycle_Params {
		TEnumAsByte<E_DailyCycle> DailyCycle;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_DailyCycle_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DailyCycle != nullptr)
		*DailyCycle = params.DailyCycle;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_NPCBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCBehavior	Type: TEnumAsByte<E_NPCBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior>* NPCBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_NPCBehavior");

	struct ABP_NPC_C_GetBlackboardValues_NPCBehavior_Params {
		TEnumAsByte<E_NPCBehavior> NPCBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_NPCBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPCBehavior != nullptr)
		*NPCBehavior = params.NPCBehavior;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentNPCBehavior
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCBehavior	Type: TEnumAsByte<E_NPCBehavior>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior> NPCBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentNPCBehavior");

	struct ABP_NPC_C_SetBlackboardValues_CurrentNPCBehavior_Params {
		TEnumAsByte<E_NPCBehavior> NPCBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_CurrentNPCBehavior_Params params;
	params.NPCBehavior = NPCBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_WorkTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkTask	Type: TEnumAsByte<E_Tasks>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks> WorkTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_WorkTask");

	struct ABP_NPC_C_SetBlackboardValues_WorkTask_Params {
		TEnumAsByte<E_Tasks> WorkTask;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_WorkTask_Params params;
	params.WorkTask = WorkTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Task
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Task	Type: TEnumAsByte<E_Tasks>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Task(TEnumAsByte<E_Tasks> Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Task");

	struct ABP_NPC_C_SetBlackboardValues_Task_Params {
		TEnumAsByte<E_Tasks> Task;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_Task_Params params;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Task	Type: TEnumAsByte<E_Tasks>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks> Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentTask");

	struct ABP_NPC_C_SetBlackboardValues_CurrentTask_Params {
		TEnumAsByte<E_Tasks> Task;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_CurrentTask_Params params;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_TaskState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TaskState	Type: TEnumAsByte<E_TaskState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_TaskState(TEnumAsByte<E_TaskState> TaskState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_TaskState");

	struct ABP_NPC_C_SetBlackboardValues_TaskState_Params {
		TEnumAsByte<E_TaskState> TaskState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_TaskState_Params params;
	params.TaskState = TaskState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentNPCBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCBehavior	Type: TEnumAsByte<E_NPCBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior>* NPCBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentNPCBehavior");

	struct ABP_NPC_C_GetBlackboardValues_CurrentNPCBehavior_Params {
		TEnumAsByte<E_NPCBehavior> NPCBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_CurrentNPCBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPCBehavior != nullptr)
		*NPCBehavior = params.NPCBehavior;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_WorkTask
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: WorkTask	Type: TEnumAsByte<E_Tasks>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks>* WorkTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_WorkTask");

	struct ABP_NPC_C_GetBlackboardValues_WorkTask_Params {
		TEnumAsByte<E_Tasks> WorkTask;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_WorkTask_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkTask != nullptr)
		*WorkTask = params.WorkTask;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Task
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Task	Type: TEnumAsByte<E_Tasks>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Task(TEnumAsByte<E_Tasks>* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Task");

	struct ABP_NPC_C_GetBlackboardValues_Task_Params {
		TEnumAsByte<E_Tasks> Task;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_Task_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Task != nullptr)
		*Task = params.Task;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentTask
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Task	Type: TEnumAsByte<E_Tasks>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks>* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentTask");

	struct ABP_NPC_C_GetBlackboardValues_CurrentTask_Params {
		TEnumAsByte<E_Tasks> Task;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_CurrentTask_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Task != nullptr)
		*Task = params.Task;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_TaskState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TaskState	Type: TEnumAsByte<E_TaskState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_TaskState(TEnumAsByte<E_TaskState>* TaskState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_TaskState");

	struct ABP_NPC_C_GetBlackboardValues_TaskState_Params {
		TEnumAsByte<E_TaskState> TaskState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_TaskState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TaskState != nullptr)
		*TaskState = params.TaskState;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceState	Type: TEnumAsByte<E_ResourceState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState> ResourceState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceState");

	struct ABP_NPC_C_SetBlackboardValues_ResourceState_Params {
		TEnumAsByte<E_ResourceState> ResourceState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_ResourceState_Params params;
	params.ResourceState = ResourceState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ResourceState	Type: TEnumAsByte<E_ResourceState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState>* ResourceState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceState");

	struct ABP_NPC_C_GetBlackboardValues_ResourceState_Params {
		TEnumAsByte<E_ResourceState> ResourceState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_ResourceState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ResourceState != nullptr)
		*ResourceState = params.ResourceState;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentResourceState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceState	Type: TEnumAsByte<E_ResourceState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState> ResourceState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentResourceState");

	struct ABP_NPC_C_SetBlackboardValues_CurrentResourceState_Params {
		TEnumAsByte<E_ResourceState> ResourceState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_CurrentResourceState_Params params;
	params.ResourceState = ResourceState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Talk
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Talk	Type: TEnumAsByte<E_Talk>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Talk(TEnumAsByte<E_Talk> Talk) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Talk");

	struct ABP_NPC_C_SetBlackboardValues_Talk_Params {
		TEnumAsByte<E_Talk> Talk;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_Talk_Params params;
	params.Talk = Talk;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentResourceState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ResourceState	Type: TEnumAsByte<E_ResourceState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState>* ResourceState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentResourceState");

	struct ABP_NPC_C_GetBlackboardValues_CurrentResourceState_Params {
		TEnumAsByte<E_ResourceState> ResourceState;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_CurrentResourceState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ResourceState != nullptr)
		*ResourceState = params.ResourceState;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Talk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Talk	Type: TEnumAsByte<E_Talk>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Talk(TEnumAsByte<E_Talk>* Talk) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Talk");

	struct ABP_NPC_C_GetBlackboardValues_Talk_Params {
		TEnumAsByte<E_Talk> Talk;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_Talk_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Talk != nullptr)
		*Talk = params.Talk;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Seeds
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Seeds	Type: TEnumAsByte<E_BagMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_Seeds(TEnumAsByte<E_BagMode> Seeds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Seeds");

	struct ABP_NPC_C_SetBlackboardValues_Seeds_Params {
		TEnumAsByte<E_BagMode> Seeds;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_Seeds_Params params;
	params.Seeds = Seeds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Seeds
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Seeds	Type: TEnumAsByte<E_BagMode>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_Seeds(TEnumAsByte<E_BagMode>* Seeds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Seeds");

	struct ABP_NPC_C_GetBlackboardValues_Seeds_Params {
		TEnumAsByte<E_BagMode> Seeds;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_Seeds_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Seeds != nullptr)
		*Seeds = params.Seeds;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetProfession
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetProfession(TEnumAsByte<E_Profession>* Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetProfession");

	struct ABP_NPC_C_GetProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetProfession_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Profession != nullptr)
		*Profession = params.Profession;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FindTool
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Found_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemDetails	Type: struct FST_ItemDetails	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::FindTool(TEnumAsByte<E_Tools> ToolType, bool* Found_, struct FST_ItemDetails* ItemDetails) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindTool");

	struct ABP_NPC_C_FindTool_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		bool Found_;			//Offset: 1 | ElementSize: 1
		struct FST_ItemDetails ItemDetails;			//Offset: 8 | ElementSize: 848
	};
	ABP_NPC_C_FindTool_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnDayChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnDayChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDayChanged");

	struct ABP_NPC_C_OnDayChanged_Params {
	};
	ABP_NPC_C_OnDayChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnSeasonChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnSeasonChanged");

	struct ABP_NPC_C_OnSeasonChanged_Params {
	};
	ABP_NPC_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnCharacterTypeChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnCharacterTypeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCharacterTypeChanged");

	struct ABP_NPC_C_OnCharacterTypeChanged_Params {
	};
	ABP_NPC_C_OnCharacterTypeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnDialogueStarted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnDialogueStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDialogueStarted");

	struct ABP_NPC_C_OnDialogueStarted_Params {
	};
	ABP_NPC_C_OnDialogueStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnDialogueEnded
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnDialogueEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDialogueEnded");

	struct ABP_NPC_C_OnDialogueEnded_Params {
	};
	ABP_NPC_C_OnDialogueEnded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Set New Collision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsCollision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::Set_New_Collision(bool IsCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set New Collision");

	struct ABP_NPC_C_Set_New_Collision_Params {
		bool IsCollision;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_Set_New_Collision_Params params;
	params.IsCollision = IsCollision;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetNPCDataToSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCData	Type: struct FST_SAVE_NPC	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetNPCDataToSave(struct FST_SAVE_NPC* NPCData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetNPCDataToSave");

	struct ABP_NPC_C_GetNPCDataToSave_Params {
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1160
	};
	ABP_NPC_C_GetNPCDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPCData != nullptr)
		*NPCData = params.NPCData;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetNPCDataFromSave
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCData	Type: struct FST_SAVE_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: ResetEQ	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetNPCDataFromSave");

	struct ABP_NPC_C_SetNPCDataFromSave_Params {
		struct FST_SAVE_NPC NPCData;			//Offset: 0 | ElementSize: 1160
		bool ResetEQ;			//Offset: 1160 | ElementSize: 1
		struct FString SaveGameVersion;			//Offset: 1168 | ElementSize: 16
	};
	ABP_NPC_C_SetNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Destroy NPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::Destroy_NPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Destroy NPC");

	struct ABP_NPC_C_Destroy_NPC_Params {
	};
	ABP_NPC_C_Destroy_NPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.RespawnInfant
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::RespawnInfant() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RespawnInfant");

	struct ABP_NPC_C_RespawnInfant_Params {
	};
	ABP_NPC_C_RespawnInfant_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetSceneName
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetSceneName() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetSceneName");

	struct ABP_NPC_C_SetSceneName_Params {
	};
	ABP_NPC_C_SetSceneName_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.EndTalking
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::EndTalking() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EndTalking");

	struct ABP_NPC_C_EndTalking_Params {
	};
	ABP_NPC_C_EndTalking_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetTransformByRoot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Transform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: WorldLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorTransform	Type: struct FTransform	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetTransformByRoot(struct FTransform Transform, struct FVector WorldLocation, const struct FTransform& ActorTransform, struct FVector* Location, struct FVector* Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetTransformByRoot");

	struct ABP_NPC_C_GetTransformByRoot_Params {
		struct FTransform Transform;			//Offset: 0 | ElementSize: 48
		struct FVector WorldLocation;			//Offset: 48 | ElementSize: 12
		struct FTransform ActorTransform;			//Offset: 64 | ElementSize: 48
		struct FVector Location;			//Offset: 112 | ElementSize: 12
		struct FVector Direction;			//Offset: 124 | ElementSize: 12
	};
	ABP_NPC_C_GetTransformByRoot_Params params;
	params.Transform = Transform;
	params.WorldLocation = WorldLocation;
	params.ActorTransform = ActorTransform;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetNPCBehaviorFromSave
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetNPCBehaviorFromSave() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetNPCBehaviorFromSave");

	struct ABP_NPC_C_SetNPCBehaviorFromSave_Params {
	};
	ABP_NPC_C_SetNPCBehaviorFromSave_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnPlayerOccupy
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnPlayerOccupy");

	struct ABP_NPC_C_OnPlayerOccupy_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_OnPlayerOccupy_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.BindFurnitureEvents
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BindFurnitureEvents");

	struct ABP_NPC_C_BindFurnitureEvents_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_BindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.UnbindFurnitureEvents
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UnbindFurnitureEvents");

	struct ABP_NPC_C_UnbindFurnitureEvents_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_UnbindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnOptimizationActive
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnOptimizationActive() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnOptimizationActive");

	struct ABP_NPC_C_OnOptimizationActive_Params {
	};
	ABP_NPC_C_OnOptimizationActive_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnOptimizationDeactive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnOptimizationDeactive() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnOptimizationDeactive");

	struct ABP_NPC_C_OnOptimizationDeactive_Params {
	};
	ABP_NPC_C_OnOptimizationDeactive_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetMeshesFromPreset
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UpdateOnly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMeshesFromPreset");

	struct ABP_NPC_C_SetMeshesFromPreset_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UObject* NewClass;			//Offset: 8 | ElementSize: 8
		bool UpdateOnly;			//Offset: 16 | ElementSize: 1
		bool LoadGame;			//Offset: 17 | ElementSize: 1
	};
	ABP_NPC_C_SetMeshesFromPreset_Params params;
	params.Profession = Profession;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.CheckUnderTheMap
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::CheckUnderTheMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckUnderTheMap");

	struct ABP_NPC_C_CheckUnderTheMap_Params {
	};
	ABP_NPC_C_CheckUnderTheMap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetProfessionData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetProfessionData(struct FST_Profession* ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetProfessionData");

	struct ABP_NPC_C_GetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	ABP_NPC_C_GetProfessionData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FixCustomNPCsFromDT
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::FixCustomNPCsFromDT() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixCustomNPCsFromDT");

	struct ABP_NPC_C_FixCustomNPCsFromDT_Params {
	};
	ABP_NPC_C_FixCustomNPCsFromDT_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ToolInteractFoliage
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::ToolInteractFoliage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToolInteractFoliage");

	struct ABP_NPC_C_ToolInteractFoliage_Params {
	};
	ABP_NPC_C_ToolInteractFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SelectCaster
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: class USkeletalMesh*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class USkeletalMesh* ABP_NPC_C::SelectCaster() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SelectCaster");

	struct ABP_NPC_C_SelectCaster_Params {
		class USkeletalMesh* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_SelectCaster_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetDirection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Direction	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetDirection(float* Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetDirection");

	struct ABP_NPC_C_GetDirection_Params {
		float Direction;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_GetDirection_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetCustomNPC_DTHandler
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetCustomNPC_DTHandler(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetCustomNPC_DTHandler");

	struct ABP_NPC_C_SetCustomNPC_DTHandler_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_SetCustomNPC_DTHandler_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetGiftVendorItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VendorCategory	Type: struct FST_VendorCategory	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetGiftVendorItems(struct FST_VendorCategory VendorCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetGiftVendorItems");

	struct ABP_NPC_C_SetGiftVendorItems_Params {
		struct FST_VendorCategory VendorCategory;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_SetGiftVendorItems_Params params;
	params.VendorCategory = VendorCategory;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetToolHoldableClass
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedTool	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FoundTool	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HoldableClass	Type: TAssetPtr<class UClass>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetToolHoldableClass(bool* NeedTool, bool* FoundTool, TAssetPtr<class UClass>* HoldableClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetToolHoldableClass");

	struct ABP_NPC_C_GetToolHoldableClass_Params {
		bool NeedTool;			//Offset: 0 | ElementSize: 1
		bool FoundTool;			//Offset: 1 | ElementSize: 1
		TAssetPtr<class UClass> HoldableClass;			//Offset: 8 | ElementSize: 40
	};
	ABP_NPC_C_GetToolHoldableClass_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (FoundTool != nullptr)
		*FoundTool = params.FoundTool;
	if (HoldableClass != nullptr)
		*HoldableClass = params.HoldableClass;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FixPlayersWifeAffection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::FixPlayersWifeAffection(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixPlayersWifeAffection");

	struct ABP_NPC_C_FixPlayersWifeAffection_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_FixPlayersWifeAffection_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetMinDeadAge
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetMinDeadAge() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMinDeadAge");

	struct ABP_NPC_C_SetMinDeadAge_Params {
	};
	ABP_NPC_C_SetMinDeadAge_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetSaveMeshPresets
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MeshName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BPIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: SkinTone	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HairColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HeadID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HairID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetsIDs	Type: TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_NPC_C::SetSaveMeshPresets(struct FString NPC_ID, struct FName MeshName, TMap<TEnumAsByte<E_BodyParts>, int32_t> BPIndexes, struct FLinearColor SkinTone, struct FLinearColor HairColor, int32_t HeadID, int32_t HairID, TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetSaveMeshPresets");

	struct ABP_NPC_C_SetSaveMeshPresets_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		struct FName MeshName;			//Offset: 16 | ElementSize: 8
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BPIndexes;			//Offset: 24 | ElementSize: 80
		struct FLinearColor SkinTone;			//Offset: 104 | ElementSize: 16
		struct FLinearColor HairColor;			//Offset: 120 | ElementSize: 16
		int32_t HeadID;			//Offset: 136 | ElementSize: 4
		int32_t HairID;			//Offset: 140 | ElementSize: 4
		TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs;			//Offset: 144 | ElementSize: 80
	};
	ABP_NPC_C_SetSaveMeshPresets_Params params;
	params.NPC_ID = NPC_ID;
	params.MeshName = MeshName;
	params.BPIndexes = BPIndexes;
	params.SkinTone = SkinTone;
	params.HairColor = HairColor;
	params.HeadID = HeadID;
	params.HairID = HairID;
	params.PresetsIDs = PresetsIDs;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetBlackboardValues_BanditType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetBlackboardValues_BanditType(TEnumAsByte<E_BanditType> BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_BanditType");

	struct ABP_NPC_C_SetBlackboardValues_BanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetBlackboardValues_BanditType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetBlackboardValues_BanditType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetBlackboardValues_BanditType(TEnumAsByte<E_BanditType>* BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_BanditType");

	struct ABP_NPC_C_GetBlackboardValues_BanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_GetBlackboardValues_BanditType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditType != nullptr)
		*BanditType = params.BanditType;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AfterDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::AfterDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AfterDeath");

	struct ABP_NPC_C_AfterDeath_Params {
	};
	ABP_NPC_C_AfterDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetRandomInventory
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetRandomInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetRandomInventory");

	struct ABP_NPC_C_SetRandomInventory_Params {
	};
	ABP_NPC_C_SetRandomInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Attach Components
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::Attach_Components() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Attach Components");

	struct ABP_NPC_C_Attach_Components_Params {
	};
	ABP_NPC_C_Attach_Components_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ChangeName
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewRowName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ChangeSex	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ChangeName");

	struct ABP_NPC_C_ChangeName_Params {
		struct FName NewRowName;			//Offset: 0 | ElementSize: 8
		struct FText NewName;			//Offset: 8 | ElementSize: 24
		bool ChangeSex;			//Offset: 32 | ElementSize: 1
	};
	ABP_NPC_C_ChangeName_Params params;
	params.NewRowName = NewRowName;
	params.NewName = NewName;
	params.ChangeSex = ChangeSex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ChooseCharacterVoiceID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::ChooseCharacterVoiceID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ChooseCharacterVoiceID");

	struct ABP_NPC_C_ChooseCharacterVoiceID_Params {
	};
	ABP_NPC_C_ChooseCharacterVoiceID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetActualDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
TAssetPtr<class UDialogue> ABP_NPC_C::GetActualDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetActualDialogue");

	struct ABP_NPC_C_GetActualDialogue_Params {
		TAssetPtr<class UDialogue> ReturnValue;			//Offset: 0 | ElementSize: 40
	};
	ABP_NPC_C_GetActualDialogue_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetDialogue
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetDialogue(class ABP_PlayerCharacter_C* PlayerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetDialogue");

	struct ABP_NPC_C_SetDialogue_Params {
		class ABP_PlayerCharacter_C* PlayerReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_SetDialogue_Params params;
	params.PlayerReference = PlayerReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetKestrelBehavior
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SetNewBehavior	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::SetKestrelBehavior(bool SetNewBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetKestrelBehavior");

	struct ABP_NPC_C_SetKestrelBehavior_Params {
		bool SetNewBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_SetKestrelBehavior_Params params;
	params.SetNewBehavior = SetNewBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetOptimizationBlackboards
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetOptimizationBlackboards() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetOptimizationBlackboards");

	struct ABP_NPC_C_SetOptimizationBlackboards_Params {
	};
	ABP_NPC_C_SetOptimizationBlackboards_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ReloadCharacterVoice
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::ReloadCharacterVoice(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReloadCharacterVoice");

	struct ABP_NPC_C_ReloadCharacterVoice_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_ReloadCharacterVoice_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.OnDestroyFurniture
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::OnDestroyFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDestroyFurniture");

	struct ABP_NPC_C_OnDestroyFurniture_Params {
	};
	ABP_NPC_C_OnDestroyFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.BoostComponentDebug
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::BoostComponentDebug() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BoostComponentDebug");

	struct ABP_NPC_C_BoostComponentDebug_Params {
	};
	ABP_NPC_C_BoostComponentDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetQuestNPC_OnLoad
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::SetQuestNPC_OnLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetQuestNPC_OnLoad");

	struct ABP_NPC_C_SetQuestNPC_OnLoad_Params {
	};
	ABP_NPC_C_SetQuestNPC_OnLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.CheckNPCLocationOnSave
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::CheckNPCLocationOnSave() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckNPCLocationOnSave");

	struct ABP_NPC_C_CheckNPCLocationOnSave_Params {
	};
	ABP_NPC_C_CheckNPCLocationOnSave_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ChangeApprenticeToWorker
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::ChangeApprenticeToWorker() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ChangeApprenticeToWorker");

	struct ABP_NPC_C_ChangeApprenticeToWorker_Params {
	};
	ABP_NPC_C_ChangeApprenticeToWorker_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AddSkillsToApprentices
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AddSkillsToApprentices");

	struct ABP_NPC_C_AddSkillsToApprentices_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
	};
	ABP_NPC_C_AddSkillsToApprentices_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.ComeBackHome
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ParentTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::ComeBackHome(struct FTransform ParentTransform, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ComeBackHome");

	struct ABP_NPC_C_ComeBackHome_Params {
		struct FTransform ParentTransform;			//Offset: 0 | ElementSize: 48
		bool Success;			//Offset: 48 | ElementSize: 1
	};
	ABP_NPC_C_ComeBackHome_Params params;
	params.ParentTransform = ParentTransform;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AddRandomToys
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddSamborFigurines	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AddRandomToys(bool AddSamborFigurines) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AddRandomToys");

	struct ABP_NPC_C_AddRandomToys_Params {
		bool AddSamborFigurines;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AddRandomToys_Params params;
	params.AddSamborFigurines = AddSamborFigurines;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FixMothersTasks
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::FixMothersTasks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixMothersTasks");

	struct ABP_NPC_C_FixMothersTasks_Params {
	};
	ABP_NPC_C_FixMothersTasks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.FixQuestNPCsPersonality
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::FixQuestNPCsPersonality(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixQuestNPCsPersonality");

	struct ABP_NPC_C_FixQuestNPCsPersonality_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_FixQuestNPCsPersonality_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.MeshSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::MeshSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.MeshSettings");

	struct ABP_NPC_C_MeshSettings_Params {
	};
	ABP_NPC_C_MeshSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.SetQuestPose
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AfterIdlePose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::SetQuestPose(TEnumAsByte<E_IdleStates> IdleState, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> AfterIdlePose) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetQuestPose");

	struct ABP_NPC_C_SetQuestPose_Params {
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> AfterIdlePose;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_C_SetQuestPose_Params params;
	params.IdleState = IdleState;
	params.PoseID = PoseID;
	params.AfterIdlePose = AfterIdlePose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetDistance");

	struct ABP_NPC_C_GetDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_GetDistance_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.GetOptimalizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::GetOptimalizationStage(int32_t* Stage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetOptimalizationStage");

	struct ABP_NPC_C_GetOptimalizationStage_Params {
		int32_t Stage;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_GetOptimalizationStage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Stage != nullptr)
		*Stage = params.Stage;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.Push Sounds
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::Push_Sounds() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Push Sounds");

	struct ABP_NPC_C_Push_Sounds_Params {
	};
	ABP_NPC_C_Push_Sounds_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindFoliage
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Foliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindFoliage");

	struct ABP_NPC_C_AI_FindFoliage_Params {
		TEnumAsByte<E_Resources> TargetType;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Foliage;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindFoliage_Params params;
	params.TargetType = TargetType;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Foliage != nullptr)
		*Foliage = params.Foliage;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetTargetLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDirection	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DistanceToLastPoint	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OutsideLastPoint	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetTargetLocation");

	struct ABP_NPC_C_AI_GetTargetLocation_Params {
		struct FVector Target;			//Offset: 0 | ElementSize: 12
		float MaxDistance;			//Offset: 12 | ElementSize: 4
		float MaxDirection;			//Offset: 16 | ElementSize: 4
		float DistanceToLastPoint;			//Offset: 20 | ElementSize: 4
		bool OutsideLastPoint;			//Offset: 24 | ElementSize: 1
		struct FVector Location;			//Offset: 28 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetTargetLocation_Params params;
	params.Target = Target;
	params.MaxDistance = MaxDistance;
	params.MaxDirection = MaxDirection;
	params.DistanceToLastPoint = DistanceToLastPoint;
	params.OutsideLastPoint = OutsideLastPoint;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetDistanceAndDirection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target_Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Current_Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetDistanceAndDirection(struct FVector Target_Location, struct FVector Current_Location, float* Distance, struct FVector* Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetDistanceAndDirection");

	struct ABP_NPC_C_AI_GetDistanceAndDirection_Params {
		struct FVector Target_Location;			//Offset: 0 | ElementSize: 12
		struct FVector Current_Location;			//Offset: 12 | ElementSize: 12
		float Distance;			//Offset: 24 | ElementSize: 4
		struct FVector Direction;			//Offset: 28 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetDistanceAndDirection_Params params;
	params.Target_Location = Target_Location;
	params.Current_Location = Current_Location;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindField
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Field	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TaskList	Type: struct FST_FieldTasksLists	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: IsTask	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindField");

	struct ABP_NPC_C_AI_FindField_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Field;			//Offset: 12 | ElementSize: 1
		struct FST_FieldTasksLists TaskList;			//Offset: 16 | ElementSize: 56
		bool IsTask;			//Offset: 72 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Field != nullptr)
		*Field = params.Field;
	if (TaskList != nullptr)
		*TaskList = params.TaskList;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_IncreaseNavInvoker
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToBig	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_IncreaseNavInvoker(bool* ToBig) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_IncreaseNavInvoker");

	struct ABP_NPC_C_AI_IncreaseNavInvoker_Params {
		bool ToBig;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_IncreaseNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToBig != nullptr)
		*ToBig = params.ToBig;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetMesh
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetMesh(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetMesh");

	struct ABP_NPC_C_AI_GetMesh_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_GetMesh_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindHouse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FindBed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindHouse");

	struct ABP_NPC_C_AI_FindHouse_Params {
		bool FindBed;			//Offset: 0 | ElementSize: 1
		bool Occupy;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindHouse_Params params;
	params.FindBed = FindBed;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindAnimal(struct FVector* Destination, bool* Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindAnimal");

	struct ABP_NPC_C_AI_FindAnimal_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Animal;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Animal != nullptr)
		*Animal = params.Animal;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindWorkPlace
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkRadius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkPlace	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* WorkPlace) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindWorkPlace");

	struct ABP_NPC_C_AI_FindWorkPlace_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		float WorkRadius;			//Offset: 12 | ElementSize: 4
		bool WorkPlace;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkRadius != nullptr)
		*WorkRadius = params.WorkRadius;
	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindClosestFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindClosestFurniture");

	struct ABP_NPC_C_AI_FindClosestFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindClosestFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckTargetFoliage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTargetFoliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckTargetFoliage(bool* IsTargetFoliage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckTargetFoliage");

	struct ABP_NPC_C_AI_CheckTargetFoliage_Params {
		bool IsTargetFoliage;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckTargetFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsTargetFoliage != nullptr)
		*IsTargetFoliage = params.IsTargetFoliage;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetStats
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: Parm, OutParm
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetStats");

	struct ABP_NPC_C_AI_GetStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> Sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 32 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetStats_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetIDFromNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetIDFromNPC(struct FString* NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIDFromNPC");

	struct ABP_NPC_C_AI_GetIDFromNPC_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_GetIDFromNPC_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_ID != nullptr)
		*NPC_ID = params.NPC_ID;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckBuildingIsConstructed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsConstructed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckBuildingIsConstructed(bool* IsConstructed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckBuildingIsConstructed");

	struct ABP_NPC_C_AI_CheckBuildingIsConstructed_Params {
		bool IsConstructed;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckBuildingIsConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOwnership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOwnership");

	struct ABP_NPC_C_AI_GetOwnership_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetOwnership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBedIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBedIndex");

	struct ABP_NPC_C_AI_GetBedIndex_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetBedIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BedIndex != nullptr)
		*BedIndex = params.BedIndex;
	if (BedSlotIndex != nullptr)
		*BedSlotIndex = params.BedSlotIndex;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindNPCtoTalk
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindNPCtoTalk");

	struct ABP_NPC_C_AI_FindNPCtoTalk_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindNPCtoTalk_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetNightPatrol
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NightPatrol	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetNightPatrol(bool* NightPatrol) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNightPatrol");

	struct ABP_NPC_C_AI_GetNightPatrol_Params {
		bool NightPatrol;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetNightPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NightPatrol != nullptr)
		*NightPatrol = params.NightPatrol;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindBuildingWorkbenches
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsWorkbenches	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindBuildingWorkbenches");

	struct ABP_NPC_C_AI_FindBuildingWorkbenches_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool IsWorkbenches;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindBuildingWorkbenches_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsWorkbenches != nullptr)
		*IsWorkbenches = params.IsWorkbenches;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetCapsuleHalfHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CapsuleHalfHeight	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCapsuleHalfHeight");

	struct ABP_NPC_C_AI_GetCapsuleHalfHeight_Params {
		float CapsuleHalfHeight;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetCapsuleHalfHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindTavernFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindTavernFurniture");

	struct ABP_NPC_C_AI_FindTavernFurniture_Params {
		bool Occupy;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindTavernFurniture_Params params;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindRandomFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindRandomFurniture");

	struct ABP_NPC_C_AI_FindRandomFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindRandomFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetQuestBlocking
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetQuestBlocking(bool* QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetQuestBlocking");

	struct ABP_NPC_C_AI_GetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetQuestBlocking_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestBlocking != nullptr)
		*QuestBlocking = params.QuestBlocking;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetAnimationState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetAnimationState");

	struct ABP_NPC_C_AI_GetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetAnimationState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Sleeping != nullptr)
		*Sleeping = params.Sleeping;
	if (Sitting != nullptr)
		*Sitting = params.Sitting;
	if (Working != nullptr)
		*Working = params.Working;
	if (TakingBreak != nullptr)
		*TakingBreak = params.TakingBreak;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetInteractionSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetInteractionSlotIndex");

	struct ABP_NPC_C_AI_GetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetInteractionSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractionSlotIndex != nullptr)
		*InteractionSlotIndex = params.InteractionSlotIndex;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetIsChangedTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsChanged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsChangedTimeOfDay");

	struct ABP_NPC_C_AI_GetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool IsChanged;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetCollisionResponse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Resposne	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Resposne) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCollisionResponse");

	struct ABP_NPC_C_AI_GetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Resposne;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetCollisionResponse_Params params;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
	if (Resposne != nullptr)
		*Resposne = params.Resposne;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOptimizationBlackboards
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OptimizationBlackboards	Type: struct FST_SAVE_NPC_Blackboards	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOptimizationBlackboards");

	struct ABP_NPC_C_AI_GetOptimizationBlackboards_Params {
		struct FST_SAVE_NPC_Blackboards OptimizationBlackboards;			//Offset: 0 | ElementSize: 40
	};
	ABP_NPC_C_AI_GetOptimizationBlackboards_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OptimizationBlackboards != nullptr)
		*OptimizationBlackboards = params.OptimizationBlackboards;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetDead
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsDead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetDead(bool* IsDead) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetDead");

	struct ABP_NPC_C_AI_GetDead_Params {
		bool IsDead;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetIsGetOut
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOut	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetIsGetOut(bool* GetOut) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsGetOut");

	struct ABP_NPC_C_AI_GetIsGetOut_Params {
		bool GetOut;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetIsGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOut != nullptr)
		*GetOut = params.GetOut;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StopWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWorkHours");

	struct ABP_NPC_C_AI_GetWorkHours_Params {
		struct FST_Hour StartWorkingTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour StopWorkingTime;			//Offset: 12 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (StartWorkingTime != nullptr)
		*StartWorkingTime = params.StartWorkingTime;
	if (StopWorkingTime != nullptr)
		*StopWorkingTime = params.StopWorkingTime;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetNPC_MustBeDeactivated
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNPC_MustBeDeactivated");

	struct ABP_NPC_C_AI_GetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetNPC_MustBeDeactivated_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_MustBeDeactivated != nullptr)
		*NPC_MustBeDeactivated = params.NPC_MustBeDeactivated;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindFishingPoint
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindFishingPoint(struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindFishingPoint");

	struct ABP_NPC_C_AI_FindFishingPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Find;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindFishingPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOptimizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: optimizationStage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOptimizationStage(int32_t* optimizationStage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOptimizationStage");

	struct ABP_NPC_C_AI_GetOptimizationStage_Params {
		int32_t optimizationStage;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetOptimizationStage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (optimizationStage != nullptr)
		*optimizationStage = params.optimizationStage;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Ownership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsideNPC_Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership>* OutsideNPC_Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Ownership");

	struct ABP_NPC_C_AI_GetOutsideNPC_Ownership_Params {
		TEnumAsByte<E_Ownership> OutsideNPC_Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetOutsideNPC_Ownership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsideNPC_Ownership != nullptr)
		*OutsideNPC_Ownership = params.OutsideNPC_Ownership;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckSeedsInChest
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RemoveItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BagSeeds	Type: TEnumAsByte<E_BagMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsBag	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode> BagSeeds, bool* IsBag) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckSeedsInChest");

	struct ABP_NPC_C_AI_CheckSeedsInChest_Params {
		bool RemoveItem;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagSeeds;			//Offset: 1 | ElementSize: 1
		bool IsBag;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckSeedsInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.BagSeeds = BagSeeds;

	UObject::ProcessEvent(fn, &params);
	if (IsBag != nullptr)
		*IsBag = params.IsBag;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetNPC_Status
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedTool	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetNPC_Status(TEnumAsByte<E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity>* NeedTool, struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNPC_Status");

	struct ABP_NPC_C_AI_GetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> NeedTool;			//Offset: 1 | ElementSize: 1
		struct FName NeedItem;			//Offset: 4 | ElementSize: 8
	};
	ABP_NPC_C_AI_GetNPC_Status_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_Status != nullptr)
		*NPC_Status = params.NPC_Status;
	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetNeedItemName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetNeedItemName(struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNeedItemName");

	struct ABP_NPC_C_AI_GetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_C_AI_GetNeedItemName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindAnimalsBreederPoint
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Point	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindAnimalsBreederPoint");

	struct ABP_NPC_C_AI_FindAnimalsBreederPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Point;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindAnimalsBreederPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Point != nullptr)
		*Point = params.Point;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SpawnBow
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SpawnBow(bool CheckInInventory, bool* IsBow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnBow");

	struct ABP_NPC_C_AI_SpawnBow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsBow;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_SpawnBow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsBow != nullptr)
		*IsBow = params.IsBow;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SnapToFurnitureSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToFinishSlot	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SnapToFurnitureSlot");

	struct ABP_NPC_C_AI_SnapToFurnitureSlot_Params {
		bool ToFinishSlot;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_SnapToFurnitureSlot_Params params;
	params.ToFinishSlot = ToFinishSlot;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckIsChunkInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckIsChunkInteractable(bool* Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsChunkInteractable");

	struct ABP_NPC_C_AI_CheckIsChunkInteractable_Params {
		bool Interactable;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckIsChunkInteractable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetIsLookAtTargetRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsLookAtTargetRotation");

	struct ABP_NPC_C_AI_GetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetIsLookAtTargetRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsLookAtTargetRotation != nullptr)
		*IsLookAtTargetRotation = params.IsLookAtTargetRotation;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetCanAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetCanAffectNavigation(bool* CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCanAffectNavigation");

	struct ABP_NPC_C_AI_GetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetCanAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAffectNavigation != nullptr)
		*CanAffectNavigation = params.CanAffectNavigation;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindWorkSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindWorkSlot");

	struct ABP_NPC_C_AI_FindWorkSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool WorkSlot;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkSlot != nullptr)
		*WorkSlot = params.WorkSlot;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetGoHome_Activity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetGoHome_Activity(bool* GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetGoHome_Activity");

	struct ABP_NPC_C_AI_GetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetGoHome_Activity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GoHome_Activity != nullptr)
		*GoHome_Activity = params.GoHome_Activity;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetPaths
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Paths	Type: TArray<struct FVector>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetPaths(TArray<struct FVector>* Paths) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetPaths");

	struct ABP_NPC_C_AI_GetPaths_Params {
		TArray<struct FVector> Paths;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_GetPaths_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Paths != nullptr)
		*Paths = params.Paths;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetPathsPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PathsPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetPathsPoint(bool* Succes, struct FVector* PathsPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetPathsPoint");

	struct ABP_NPC_C_AI_GetPathsPoint_Params {
		bool Succes;			//Offset: 0 | ElementSize: 1
		struct FVector PathsPoint;			//Offset: 4 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetPathsPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (PathsPoint != nullptr)
		*PathsPoint = params.PathsPoint;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindVillageCenter
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageCenter	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindVillageCenter(struct FVector* VillageCenter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindVillageCenter");

	struct ABP_NPC_C_AI_FindVillageCenter_Params {
		struct FVector VillageCenter;			//Offset: 0 | ElementSize: 12
	};
	ABP_NPC_C_AI_FindVillageCenter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VillageCenter != nullptr)
		*VillageCenter = params.VillageCenter;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetWhetherAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetWhetherAffectNavigation(bool* WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWhetherAffectNavigation");

	struct ABP_NPC_C_AI_GetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetWhetherAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WhetherAffectNavigation != nullptr)
		*WhetherAffectNavigation = params.WhetherAffectNavigation;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindPOIFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindPOIFurniture(bool* IsFurniture, struct FVector* Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindPOIFurniture");

	struct ABP_NPC_C_AI_FindPOIFurniture_Params {
		bool IsFurniture;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
	};
	ABP_NPC_C_AI_FindPOIFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
	if (Destination != nullptr)
		*Destination = params.Destination;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBanditType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBanditType");

	struct ABP_NPC_C_AI_GetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetBanditType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditType != nullptr)
		*BanditType = params.BanditType;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindGetOutPoint
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOutPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindGetOutPoint(struct FVector* GetOutPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindGetOutPoint");

	struct ABP_NPC_C_AI_FindGetOutPoint_Params {
		struct FVector GetOutPoint;			//Offset: 0 | ElementSize: 12
	};
	ABP_NPC_C_AI_FindGetOutPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOutPoint != nullptr)
		*GetOutPoint = params.GetOutPoint;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetWorkSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetWorkSlotIndex(int32_t* WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWorkSlotIndex");

	struct ABP_NPC_C_AI_GetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetWorkSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBuildingType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidBuilding	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BuildingType	Type: TEnumAsByte<E_Buildings>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBuildingType");

	struct ABP_NPC_C_AI_GetBuildingType_Params {
		bool IsValidBuilding;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Buildings> BuildingType;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetBuildingType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidBuilding != nullptr)
		*IsValidBuilding = params.IsValidBuilding;
	if (BuildingType != nullptr)
		*BuildingType = params.BuildingType;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_SpawnCrossbow
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCrossBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnCrossbow");

	struct ABP_NPC_C_AI_SpawnCrossbow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsCrossBow;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_SpawnCrossbow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsCrossBow != nullptr)
		*IsCrossBow = params.IsCrossBow;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetVendor
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Vendor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetVendor(bool* Vendor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetVendor");

	struct ABP_NPC_C_AI_GetVendor_Params {
		bool Vendor;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetVendor_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Vendor != nullptr)
		*Vendor = params.Vendor;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetSpawnerLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSpawner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnerLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetSpawnerLocation");

	struct ABP_NPC_C_AI_GetSpawnerLocation_Params {
		bool IsValidSpawner;			//Offset: 0 | ElementSize: 1
		struct FVector SpawnerLocation;			//Offset: 4 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetSpawnerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSpawner != nullptr)
		*IsValidSpawner = params.IsValidSpawner;
	if (SpawnerLocation != nullptr)
		*SpawnerLocation = params.SpawnerLocation;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.CharacterVoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_CharacterVoice	Type: struct FST_CharacterVoiceCues	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CharacterVoice");

	struct ABP_NPC_C_CharacterVoice_Params {
		struct FST_CharacterVoiceCues ST_CharacterVoice;			//Offset: 0 | ElementSize: 24
	};
	ABP_NPC_C_CharacterVoice_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ST_CharacterVoice != nullptr)
		*ST_CharacterVoice = params.ST_CharacterVoice;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindBreakSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindBreakSlot");

	struct ABP_NPC_C_AI_FindBreakSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool BreakSlot;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindBreakSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (BreakSlot != nullptr)
		*BreakSlot = params.BreakSlot;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetMontages
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetMontages");

	struct ABP_NPC_C_AI_GetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_C_AI_GetMontages_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkMontage != nullptr)
		*WorkMontage = params.WorkMontage;
	if (BreakMontage != nullptr)
		*BreakMontage = params.BreakMontage;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBreakAnimID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimID	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBreakAnimID(unsigned char* BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBreakAnimID");

	struct ABP_NPC_C_AI_GetBreakAnimID_Params {
		unsigned char BreakAnimID;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetBreakAnimID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimID != nullptr)
		*BreakAnimID = params.BreakAnimID;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBuildingsWorkSlotWorldTransforms
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Slot	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBuildingsWorkSlotWorldTransforms(bool* IsValidSlot, struct FTransform* Slot, struct FTransform* StartPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBuildingsWorkSlotWorldTransforms");

	struct ABP_NPC_C_AI_GetBuildingsWorkSlotWorldTransforms_Params {
		bool IsValidSlot;			//Offset: 0 | ElementSize: 1
		struct FTransform Slot;			//Offset: 16 | ElementSize: 48
		struct FTransform StartPoint;			//Offset: 64 | ElementSize: 48
	};
	ABP_NPC_C_AI_GetBuildingsWorkSlotWorldTransforms_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetWakeUpAndSleepTimes
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BeginWakeUpTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BeginSleepTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetWakeUpAndSleepTimes(struct FST_Hour* BeginWakeUpTime, struct FST_Hour* BeginSleepTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWakeUpAndSleepTimes");

	struct ABP_NPC_C_AI_GetWakeUpAndSleepTimes_Params {
		struct FST_Hour BeginWakeUpTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour BeginSleepTime;			//Offset: 12 | ElementSize: 12
	};
	ABP_NPC_C_AI_GetWakeUpAndSleepTimes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BeginWakeUpTime != nullptr)
		*BeginWakeUpTime = params.BeginWakeUpTime;
	if (BeginSleepTime != nullptr)
		*BeginSleepTime = params.BeginSleepTime;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Type
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Outside_NPC_Type	Type: TEnumAsByte<E_OutsideNPCTypes>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetOutsideNPC_Type(TEnumAsByte<E_OutsideNPCTypes>* Outside_NPC_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Type");

	struct ABP_NPC_C_AI_GetOutsideNPC_Type_Params {
		TEnumAsByte<E_OutsideNPCTypes> Outside_NPC_Type;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetOutsideNPC_Type_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Outside_NPC_Type != nullptr)
		*Outside_NPC_Type = params.Outside_NPC_Type;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindNPCtoPlayingTag
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindNPCtoPlayingTag(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindNPCtoPlayingTag");

	struct ABP_NPC_C_AI_FindNPCtoPlayingTag_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindNPCtoPlayingTag_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetWorkStateLoops
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkStateLoops	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetWorkStateLoops(int32_t* CurrentWorkStateLoop, int32_t* WorkStateLoops) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWorkStateLoops");

	struct ABP_NPC_C_AI_GetWorkStateLoops_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
		int32_t WorkStateLoops;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetWorkStateLoops_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CurrentWorkStateLoop != nullptr)
		*CurrentWorkStateLoop = params.CurrentWorkStateLoop;
	if (WorkStateLoops != nullptr)
		*WorkStateLoops = params.WorkStateLoops;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetDistanceToPlayer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetDistanceToPlayer(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetDistanceToPlayer");

	struct ABP_NPC_C_AI_GetDistanceToPlayer_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_C_AI_GetDistanceToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindCampfire
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsCampfire	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindCampfire(TEnumAsByte<E_Ownership> Location, bool IgnoreOwnership, struct FVector* Destination, bool* IsCampfire) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindCampfire");

	struct ABP_NPC_C_AI_FindCampfire_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsCampfire;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindCampfire_Params params;
	params.Location = Location;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsCampfire != nullptr)
		*IsCampfire = params.IsCampfire;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetCustomNPC_DTHandler
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomNPC_DTHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetCustomNPC_DTHandler(struct FDataTableRowHandle* CustomNPC_DTHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCustomNPC_DTHandler");

	struct ABP_NPC_C_AI_GetCustomNPC_DTHandler_Params {
		struct FDataTableRowHandle CustomNPC_DTHandler;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_GetCustomNPC_DTHandler_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CustomNPC_DTHandler != nullptr)
		*CustomNPC_DTHandler = params.CustomNPC_DTHandler;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindOutsidePoint
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsidePoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindOutsidePoint(struct FVector* OutsidePoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindOutsidePoint");

	struct ABP_NPC_C_AI_FindOutsidePoint_Params {
		struct FVector OutsidePoint;			//Offset: 0 | ElementSize: 12
	};
	ABP_NPC_C_AI_FindOutsidePoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsidePoint != nullptr)
		*OutsidePoint = params.OutsidePoint;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetTalkingCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TalkingCharacter	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetTalkingCharacter(bool* Success, class AActor** TalkingCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetTalkingCharacter");

	struct ABP_NPC_C_AI_GetTalkingCharacter_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class AActor* TalkingCharacter;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_C_AI_GetTalkingCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (TalkingCharacter != nullptr)
		*TalkingCharacter = params.TalkingCharacter;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckIsPlayerPartner
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlayerPartner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckIsPlayerPartner(bool* IsPlayerPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsPlayerPartner");

	struct ABP_NPC_C_AI_CheckIsPlayerPartner_Params {
		bool IsPlayerPartner;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckIsPlayerPartner_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsPlayerPartner != nullptr)
		*IsPlayerPartner = params.IsPlayerPartner;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_TeleportToHouseOrWorkplace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToHouse	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_TeleportToHouseOrWorkplace(bool ToHouse, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_TeleportToHouseOrWorkplace");

	struct ABP_NPC_C_AI_TeleportToHouseOrWorkplace_Params {
		bool ToHouse;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_TeleportToHouseOrWorkplace_Params params;
	params.ToHouse = ToHouse;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetTimeOfDay(TEnumAsByte<E_TimeOfDay>* TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetTimeOfDay");

	struct ABP_NPC_C_AI_GetTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetTimeOfDay_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TimeOfDay != nullptr)
		*TimeOfDay = params.TimeOfDay;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckCanMove
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanMove	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckCanMove(bool* CanMove) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckCanMove");

	struct ABP_NPC_C_AI_CheckCanMove_Params {
		bool CanMove;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckCanMove_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_FindApprenticeSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ApprenticeSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_FindApprenticeSlot(struct FVector* Destination, bool* ApprenticeSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindApprenticeSlot");

	struct ABP_NPC_C_AI_FindApprenticeSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool ApprenticeSlot;			//Offset: 12 | ElementSize: 1
	};
	ABP_NPC_C_AI_FindApprenticeSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (ApprenticeSlot != nullptr)
		*ApprenticeSlot = params.ApprenticeSlot;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetBreakAnimType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimType	Type: TEnumAsByte<E_AnimBreakType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetBreakAnimType(TEnumAsByte<E_AnimBreakType>* BreakAnimType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBreakAnimType");

	struct ABP_NPC_C_AI_GetBreakAnimType_Params {
		TEnumAsByte<E_AnimBreakType> BreakAnimType;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetBreakAnimType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimType != nullptr)
		*BreakAnimType = params.BreakAnimType;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetHasInfant
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetHasInfant(bool* HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetHasInfant");

	struct ABP_NPC_C_AI_GetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetHasInfant_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasInfant != nullptr)
		*HasInfant = params.HasInfant;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetToys
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Toys	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetToys(TArray<struct FName>* Toys) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetToys");

	struct ABP_NPC_C_AI_GetToys_Params {
		TArray<struct FName> Toys;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_C_AI_GetToys_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Toys != nullptr)
		*Toys = params.Toys;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckCanTalk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckResourceState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CanTalk	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckCanTalk(bool CheckResourceState, bool* CanTalk) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckCanTalk");

	struct ABP_NPC_C_AI_CheckCanTalk_Params {
		bool CheckResourceState;			//Offset: 0 | ElementSize: 1
		bool CanTalk;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckCanTalk_Params params;
	params.CheckResourceState = CheckResourceState;

	UObject::ProcessEvent(fn, &params);
	if (CanTalk != nullptr)
		*CanTalk = params.CanTalk;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_GetRotationManaged
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRotationManaged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_GetRotationManaged(bool* IsRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetRotationManaged");

	struct ABP_NPC_C_AI_GetRotationManaged_Params {
		bool IsRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_GetRotationManaged_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsRotationManaged != nullptr)
		*IsRotationManaged = params.IsRotationManaged;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckIsInGoToCenterTask
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckIsInGoToCenterTask(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsInGoToCenterTask");

	struct ABP_NPC_C_AI_CheckIsInGoToCenterTask_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckIsInGoToCenterTask_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_ChangeSex
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_ChangeSex(TEnumAsByte<E_Sex> TargetSex, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ChangeSex");

	struct ABP_NPC_C_AI_ChangeSex_Params {
		TEnumAsByte<E_Sex> TargetSex;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_C_AI_ChangeSex_Params params;
	params.TargetSex = TargetSex;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_ChangeHeiressToHeir
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_ChangeHeiressToHeir(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ChangeHeiressToHeir");

	struct ABP_NPC_C_AI_ChangeHeiressToHeir_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_ChangeHeiressToHeir_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckIsWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckIsWorkHours(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsWorkHours");

	struct ABP_NPC_C_AI_CheckIsWorkHours_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckIsWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC.BP_NPC_C.AI_CheckIsField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsField	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_C::AI_CheckIsField(bool* IsField) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsField");

	struct ABP_NPC_C_AI_CheckIsField_Params {
		bool IsField;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_C_AI_CheckIsField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsField != nullptr)
		*IsField = params.IsField;
}

/////////////////////////////////////////////
// InheritableComponentHandler BP_NPC.BP_NPC_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, Net, MulticastDelegate, Private, NetServer, HasOutParms
// Params:
/////////////////////////////////////////////
void ABP_NPC_C::InheritableComponentHandler() {
	static auto fn = UObject::FindObject<UFunction>("InheritableComponentHandler BP_NPC.BP_NPC_C.InheritableComponentHandler");

	struct ABP_NPC_C_InheritableComponentHandler_Params {
	};
	ABP_NPC_C_InheritableComponentHandler_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}