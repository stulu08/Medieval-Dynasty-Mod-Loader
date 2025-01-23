#include "../SDK.h"
#include "BP_NPC_Manager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_NPC_Manager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_NPC_Manager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_NPC_Manager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_NPC_Manager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_NPC_Manager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_NPC_Manager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of AddSamborFigurines
// Declaration: bool AddSamborFigurines
bool ABP_NPC_Manager_C::M_GetAddSamborFigurines() const {
	return Read<bool>((byte*)this + 560);
}
bool* ABP_NPC_Manager_C::M_PtrGetAddSamborFigurines() {
	return reinterpret_cast<bool*>((byte*)this + 560);
}
void ABP_NPC_Manager_C::M_SetAddSamborFigurines(const bool& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of IsBand
// Declaration: bool IsBand
bool ABP_NPC_Manager_C::M_GetIsBand() const {
	return Read<bool>((byte*)this + 561);
}
bool* ABP_NPC_Manager_C::M_PtrGetIsBand() {
	return reinterpret_cast<bool*>((byte*)this + 561);
}
void ABP_NPC_Manager_C::M_SetIsBand(const bool& value) {
	Write((byte*)this + 561, value);
}
// Member Getter and Setter of GlobalNumberOfChatters
// Declaration: int32_t GlobalNumberOfChatters
int32_t ABP_NPC_Manager_C::M_GetGlobalNumberOfChatters() const {
	return Read<int32_t>((byte*)this + 564);
}
int32_t* ABP_NPC_Manager_C::M_PtrGetGlobalNumberOfChatters() {
	return reinterpret_cast<int32_t*>((byte*)this + 564);
}
void ABP_NPC_Manager_C::M_SetGlobalNumberOfChatters(const int32_t& value) {
	Write((byte*)this + 564, value);
}
// Member Getter and Setter of VillagesNumberOfChatters
// Declaration: TMap<TEnumAsByte<E_Ownership>, int32_t> VillagesNumberOfChatters
TMap<TEnumAsByte<E_Ownership>, int32_t> ABP_NPC_Manager_C::M_GetVillagesNumberOfChatters() const {
	return Read<TMap<TEnumAsByte<E_Ownership>, int32_t>>((byte*)this + 568);
}
TMap<TEnumAsByte<E_Ownership>, int32_t>* ABP_NPC_Manager_C::M_PtrGetVillagesNumberOfChatters() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Ownership>, int32_t>*>((byte*)this + 568);
}
void ABP_NPC_Manager_C::M_SetVillagesNumberOfChatters(const TMap<TEnumAsByte<E_Ownership>, int32_t>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of NearChatterNPC_ID
// Declaration: struct FString NearChatterNPC_ID
struct FString ABP_NPC_Manager_C::M_GetNearChatterNPC_ID() const {
	return Read<struct FString>((byte*)this + 648);
}
struct FString* ABP_NPC_Manager_C::M_PtrGetNearChatterNPC_ID() {
	return reinterpret_cast<struct FString*>((byte*)this + 648);
}
void ABP_NPC_Manager_C::M_SetNearChatterNPC_ID(const struct FString& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of AvailableMaleNames
// Declaration: TArray<struct FName> AvailableMaleNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetAvailableMaleNames() const {
	return Read<TArray<struct FName>>((byte*)this + 664);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetAvailableMaleNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 664);
}
void ABP_NPC_Manager_C::M_SetAvailableMaleNames(const TArray<struct FName>& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of AvailableFemaleNames
// Declaration: TArray<struct FName> AvailableFemaleNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetAvailableFemaleNames() const {
	return Read<TArray<struct FName>>((byte*)this + 680);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetAvailableFemaleNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 680);
}
void ABP_NPC_Manager_C::M_SetAvailableFemaleNames(const TArray<struct FName>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_NPC_Manager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 696);
}
class ABP_SystemsManager_C** ABP_NPC_Manager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 696);
}
void ABP_NPC_Manager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of ChattersSubCategories
// Declaration: TArray<struct FName> ChattersSubCategories
TArray<struct FName> ABP_NPC_Manager_C::M_GetChattersSubCategories() const {
	return Read<TArray<struct FName>>((byte*)this + 704);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetChattersSubCategories() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 704);
}
void ABP_NPC_Manager_C::M_SetChattersSubCategories(const TArray<struct FName>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of ChattersDialoguesNames
// Declaration: TArray<struct FName> ChattersDialoguesNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetChattersDialoguesNames() const {
	return Read<TArray<struct FName>>((byte*)this + 720);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetChattersDialoguesNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 720);
}
void ABP_NPC_Manager_C::M_SetChattersDialoguesNames(const TArray<struct FName>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of NPCs_ID
// Declaration: TArray<struct FString> NPCs_ID
TArray<struct FString> ABP_NPC_Manager_C::M_GetNPCs_ID() const {
	return Read<TArray<struct FString>>((byte*)this + 736);
}
TArray<struct FString>* ABP_NPC_Manager_C::M_PtrGetNPCs_ID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 736);
}
void ABP_NPC_Manager_C::M_SetNPCs_ID(const TArray<struct FString>& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of NewNPCs
// Declaration: TArray<struct FText> NewNPCs
TArray<struct FText> ABP_NPC_Manager_C::M_GetNewNPCs() const {
	return Read<TArray<struct FText>>((byte*)this + 752);
}
TArray<struct FText>* ABP_NPC_Manager_C::M_PtrGetNewNPCs() {
	return reinterpret_cast<TArray<struct FText>*>((byte*)this + 752);
}
void ABP_NPC_Manager_C::M_SetNewNPCs(const TArray<struct FText>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of AvailableMalePresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableMalePresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableMalePresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 768);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableMalePresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 768);
}
void ABP_NPC_Manager_C::M_SetAvailableMalePresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of AvailableMaleBanditPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableMaleBanditPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableMaleBanditPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 784);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableMaleBanditPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 784);
}
void ABP_NPC_Manager_C::M_SetAvailableMaleBanditPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of AvailableFemalePresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableFemalePresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableFemalePresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 800);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableFemalePresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 800);
}
void ABP_NPC_Manager_C::M_SetAvailableFemalePresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of AvailableBoyPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableBoyPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableBoyPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 816);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableBoyPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 816);
}
void ABP_NPC_Manager_C::M_SetAvailableBoyPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of AvailableGirlPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableGirlPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableGirlPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 832);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableGirlPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 832);
}
void ABP_NPC_Manager_C::M_SetAvailableGirlPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of AvailableToddlerPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableToddlerPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableToddlerPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 848);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableToddlerPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 848);
}
void ABP_NPC_Manager_C::M_SetAvailableToddlerPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of NPCsThatLeft
// Declaration: TArray<class AActor*> NPCsThatLeft
TArray<class AActor*> ABP_NPC_Manager_C::M_GetNPCsThatLeft() const {
	return Read<TArray<class AActor*>>((byte*)this + 864);
}
TArray<class AActor*>* ABP_NPC_Manager_C::M_PtrGetNPCsThatLeft() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 864);
}
void ABP_NPC_Manager_C::M_SetNPCsThatLeft(const TArray<class AActor*>& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of NeighboursHouses
// Declaration: TArray<class AActor*> NeighboursHouses
TArray<class AActor*> ABP_NPC_Manager_C::M_GetNeighboursHouses() const {
	return Read<TArray<class AActor*>>((byte*)this + 880);
}
TArray<class AActor*>* ABP_NPC_Manager_C::M_PtrGetNeighboursHouses() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 880);
}
void ABP_NPC_Manager_C::M_SetNeighboursHouses(const TArray<class AActor*>& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of ChattersNamesByCharacterType
// Declaration: TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name> ChattersNamesByCharacterType
TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name> ABP_NPC_Manager_C::M_GetChattersNamesByCharacterType() const {
	return Read<TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>>((byte*)this + 896);
}
TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>* ABP_NPC_Manager_C::M_PtrGetChattersNamesByCharacterType() {
	return reinterpret_cast<TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>*>((byte*)this + 896);
}
void ABP_NPC_Manager_C::M_SetChattersNamesByCharacterType(const TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of TalkingNPCsManagers
// Declaration: TMap<struct FString, class UO_TalkingNPCsManager_C*> TalkingNPCsManagers
TMap<struct FString, class UO_TalkingNPCsManager_C*> ABP_NPC_Manager_C::M_GetTalkingNPCsManagers() const {
	return Read<TMap<struct FString, class UO_TalkingNPCsManager_C*>>((byte*)this + 976);
}
TMap<struct FString, class UO_TalkingNPCsManager_C*>* ABP_NPC_Manager_C::M_PtrGetTalkingNPCsManagers() {
	return reinterpret_cast<TMap<struct FString, class UO_TalkingNPCsManager_C*>*>((byte*)this + 976);
}
void ABP_NPC_Manager_C::M_SetTalkingNPCsManagers(const TMap<struct FString, class UO_TalkingNPCsManager_C*>& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of DeadNPCs
// Declaration: TMap<struct FString, class AActor*> DeadNPCs
TMap<struct FString, class AActor*> ABP_NPC_Manager_C::M_GetDeadNPCs() const {
	return Read<TMap<struct FString, class AActor*>>((byte*)this + 1056);
}
TMap<struct FString, class AActor*>* ABP_NPC_Manager_C::M_PtrGetDeadNPCs() {
	return reinterpret_cast<TMap<struct FString, class AActor*>*>((byte*)this + 1056);
}
void ABP_NPC_Manager_C::M_SetDeadNPCs(const TMap<struct FString, class AActor*>& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of SpecialQuestNPCDialogues
// Declaration: TMap<struct FString, TAssetPtr<class UDialogue>> SpecialQuestNPCDialogues
TMap<struct FString, TAssetPtr<class UDialogue>> ABP_NPC_Manager_C::M_GetSpecialQuestNPCDialogues() const {
	return Read<TMap<struct FString, TAssetPtr<class UDialogue>>>((byte*)this + 1136);
}
TMap<struct FString, TAssetPtr<class UDialogue>>* ABP_NPC_Manager_C::M_PtrGetSpecialQuestNPCDialogues() {
	return reinterpret_cast<TMap<struct FString, TAssetPtr<class UDialogue>>*>((byte*)this + 1136);
}
void ABP_NPC_Manager_C::M_SetSpecialQuestNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value) {
	Write((byte*)this + 1136, value);
}
// Member Getter and Setter of NewNeighboursDTHandler
// Declaration: TArray<struct FDataTableRowHandle> NewNeighboursDTHandler
TArray<struct FDataTableRowHandle> ABP_NPC_Manager_C::M_GetNewNeighboursDTHandler() const {
	return Read<TArray<struct FDataTableRowHandle>>((byte*)this + 1216);
}
TArray<struct FDataTableRowHandle>* ABP_NPC_Manager_C::M_PtrGetNewNeighboursDTHandler() {
	return reinterpret_cast<TArray<struct FDataTableRowHandle>*>((byte*)this + 1216);
}
void ABP_NPC_Manager_C::M_SetNewNeighboursDTHandler(const TArray<struct FDataTableRowHandle>& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of IterationsPerTick
// Declaration: int32_t IterationsPerTick
int32_t ABP_NPC_Manager_C::M_GetIterationsPerTick() const {
	return Read<int32_t>((byte*)this + 1232);
}
int32_t* ABP_NPC_Manager_C::M_PtrGetIterationsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 1232);
}
void ABP_NPC_Manager_C::M_SetIterationsPerTick(const int32_t& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of PresetsPerVillage
// Declaration: TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> PresetsPerVillage
TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> ABP_NPC_Manager_C::M_GetPresetsPerVillage() const {
	return Read<TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>>((byte*)this + 1240);
}
TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>* ABP_NPC_Manager_C::M_PtrGetPresetsPerVillage() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>*>((byte*)this + 1240);
}
void ABP_NPC_Manager_C::M_SetPresetsPerVillage(const TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of OnNPCDeath
// Declaration: TAssetPtr<class FOnNPCDeath__DelegateSignature> OnNPCDeath
TAssetPtr<class FOnNPCDeath__DelegateSignature> ABP_NPC_Manager_C::M_GetOnNPCDeath() const {
	return Read<TAssetPtr<class FOnNPCDeath__DelegateSignature>>((byte*)this + 1320);
}
TAssetPtr<class FOnNPCDeath__DelegateSignature>* ABP_NPC_Manager_C::M_PtrGetOnNPCDeath() {
	return reinterpret_cast<TAssetPtr<class FOnNPCDeath__DelegateSignature>*>((byte*)this + 1320);
}
void ABP_NPC_Manager_C::M_SetOnNPCDeath(const TAssetPtr<class FOnNPCDeath__DelegateSignature>& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of OnNPCBirth
// Declaration: TAssetPtr<class FOnNPCBirth__DelegateSignature> OnNPCBirth
TAssetPtr<class FOnNPCBirth__DelegateSignature> ABP_NPC_Manager_C::M_GetOnNPCBirth() const {
	return Read<TAssetPtr<class FOnNPCBirth__DelegateSignature>>((byte*)this + 1336);
}
TAssetPtr<class FOnNPCBirth__DelegateSignature>* ABP_NPC_Manager_C::M_PtrGetOnNPCBirth() {
	return reinterpret_cast<TAssetPtr<class FOnNPCBirth__DelegateSignature>*>((byte*)this + 1336);
}
void ABP_NPC_Manager_C::M_SetOnNPCBirth(const TAssetPtr<class FOnNPCBirth__DelegateSignature>& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of OnParentsExpectingChild
// Declaration: TAssetPtr<class FOnParentsExpectingChild__DelegateSignature> OnParentsExpectingChild
TAssetPtr<class FOnParentsExpectingChild__DelegateSignature> ABP_NPC_Manager_C::M_GetOnParentsExpectingChild() const {
	return Read<TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>>((byte*)this + 1352);
}
TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>* ABP_NPC_Manager_C::M_PtrGetOnParentsExpectingChild() {
	return reinterpret_cast<TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>*>((byte*)this + 1352);
}
void ABP_NPC_Manager_C::M_SetOnParentsExpectingChild(const TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of OnNPCsWedding
// Declaration: TAssetPtr<class FOnNPCsWedding__DelegateSignature> OnNPCsWedding
TAssetPtr<class FOnNPCsWedding__DelegateSignature> ABP_NPC_Manager_C::M_GetOnNPCsWedding() const {
	return Read<TAssetPtr<class FOnNPCsWedding__DelegateSignature>>((byte*)this + 1368);
}
TAssetPtr<class FOnNPCsWedding__DelegateSignature>* ABP_NPC_Manager_C::M_PtrGetOnNPCsWedding() {
	return reinterpret_cast<TAssetPtr<class FOnNPCsWedding__DelegateSignature>*>((byte*)this + 1368);
}
void ABP_NPC_Manager_C::M_SetOnNPCsWedding(const TAssetPtr<class FOnNPCsWedding__DelegateSignature>& value) {
	Write((byte*)this + 1368, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCDeath__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RelationTag	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnNPCDeath__DelegateSignature(class UObject* NPC, struct FName RelationTag) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCDeath__DelegateSignature");

	struct ABP_NPC_Manager_C_OnNPCDeath__DelegateSignature_Params {
		class UObject* NPC;			//Offset: 0 | ElementSize: 8
		struct FName RelationTag;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_OnNPCDeath__DelegateSignature_Params params;
	params.NPC = NPC;
	params.RelationTag = RelationTag;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCBirth__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnNPCBirth__DelegateSignature(class UObject* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCBirth__DelegateSignature");

	struct ABP_NPC_Manager_C_OnNPCBirth__DelegateSignature_Params {
		class UObject* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_OnNPCBirth__DelegateSignature_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnParentsExpectingChild__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mother	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Father	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnParentsExpectingChild__DelegateSignature(class ABP_NPC_C* Mother, class ABP_NPC_C* Father) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnParentsExpectingChild__DelegateSignature");

	struct ABP_NPC_Manager_C_OnParentsExpectingChild__DelegateSignature_Params {
		class ABP_NPC_C* Mother;			//Offset: 0 | ElementSize: 8
		class ABP_NPC_C* Father;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_OnParentsExpectingChild__DelegateSignature_Params params;
	params.Mother = Mother;
	params.Father = Father;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCsWedding__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: FirstPartner	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondPartner	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnNPCsWedding__DelegateSignature(class ABP_NPC_C* FirstPartner, class ABP_NPC_C* SecondPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnNPCsWedding__DelegateSignature");

	struct ABP_NPC_Manager_C_OnNPCsWedding__DelegateSignature_Params {
		class ABP_NPC_C* FirstPartner;			//Offset: 0 | ElementSize: 8
		class ABP_NPC_C* SecondPartner;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_OnNPCsWedding__DelegateSignature_Params params;
	params.FirstPartner = FirstPartner;
	params.SecondPartner = SecondPartner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ExecuteUbergraph_BP_NPC_Manager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager");

	struct ABP_NPC_Manager_C_ExecuteUbergraph_BP_NPC_Manager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Manager_C_ExecuteUbergraph_BP_NPC_Manager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged_Client
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnSeasonChanged_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged_Client");

	struct ABP_NPC_Manager_C_OnSeasonChanged_Client_Params {
	};
	ABP_NPC_Manager_C_OnSeasonChanged_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager Async
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::StartNPCManager_Async(bool LoadGame, bool MainMenu, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager Async");

	struct ABP_NPC_Manager_C_StartNPCManager_Async_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_StartNPCManager_Async_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnTimeOfDayChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay> TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnTimeOfDayChanged");

	struct ABP_NPC_Manager_C_OnTimeOfDayChanged_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_OnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnDaySkip
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnDaySkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnDaySkip");

	struct ABP_NPC_Manager_C_OnDaySkip_Params {
	};
	ABP_NPC_Manager_C_OnDaySkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged");

	struct ABP_NPC_Manager_C_OnSeasonChanged_Params {
	};
	ABP_NPC_Manager_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay");

	struct ABP_NPC_Manager_C_ReceiveBeginPlay_Params {
	};
	ABP_NPC_Manager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NameHandle	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomName(TEnumAsByte<E_Sex> sex, struct FDataTableRowHandle* NameHandle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomName");

	struct ABP_NPC_Manager_C_RandomName_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
		struct FDataTableRowHandle NameHandle;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_RandomName_Params params;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
	if (NameHandle != nullptr)
		*NameHandle = params.NameHandle;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomSex
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomSex(TEnumAsByte<E_Sex>* sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomSex");

	struct ABP_NPC_Manager_C_RandomSex_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_RandomSex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (sex != nullptr)
		*sex = params.sex;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.InitAvailableNames
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::InitAvailableNames() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InitAvailableNames");

	struct ABP_NPC_Manager_C_InitAvailableNames_Params {
	};
	ABP_NPC_Manager_C_InitAvailableNames_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddNameToAvailableNamesArray
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddNameToAvailableNamesArray(struct FString NPC_ID, TEnumAsByte<E_Sex> sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddNameToAvailableNamesArray");

	struct ABP_NPC_Manager_C_AddNameToAvailableNamesArray_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Sex> sex;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_Manager_C_AddNameToAvailableNamesArray_Params params;
	params.NPC_ID = NPC_ID;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Structure	Type: struct FST_CustomNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsCustomNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsNewNeighbour	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNPC(struct FST_CustomNPC NPC_Structure, TEnumAsByte<E_BanditType> BanditType, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC");

	struct ABP_NPC_Manager_C_SpawnNPC_Params {
		struct FST_CustomNPC NPC_Structure;			//Offset: 0 | ElementSize: 320
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 320 | ElementSize: 1
		bool IsCustomNPC;			//Offset: 321 | ElementSize: 1
		bool IsNewNeighbour;			//Offset: 322 | ElementSize: 1
		bool LoadGame;			//Offset: 323 | ElementSize: 1
		bool Birth;			//Offset: 324 | ElementSize: 1
		bool Success;			//Offset: 325 | ElementSize: 1
		class ABP_NPC_C* NPC;			//Offset: 328 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnNPC_Params params;
	params.NPC_Structure = NPC_Structure;
	params.BanditType = BanditType;
	params.IsCustomNPC = IsCustomNPC;
	params.IsNewNeighbour = IsNewNeighbour;
	params.LoadGame = LoadGame;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckNPC_ID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
// Name: New_NPC_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckNPC_ID");

	struct ABP_NPC_Manager_C_CheckNPC_ID_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		struct FString New_NPC_ID;			//Offset: 16 | ElementSize: 16
	};
	ABP_NPC_Manager_C_CheckNPC_ID_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
	if (New_NPC_ID != nullptr)
		*New_NPC_ID = params.New_NPC_ID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckVoiceID
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_RowName	Type: struct FDataTableRowHandle	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor
// Name: VoiceID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsMultiNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CorrectVoiceID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckVoiceID(const struct FDataTableRowHandle& NPC_RowName, struct FName VoiceID, bool IsMultiNPC, struct FName* CorrectVoiceID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckVoiceID");

	struct ABP_NPC_Manager_C_CheckVoiceID_Params {
		struct FDataTableRowHandle NPC_RowName;			//Offset: 0 | ElementSize: 16
		struct FName VoiceID;			//Offset: 16 | ElementSize: 8
		bool IsMultiNPC;			//Offset: 24 | ElementSize: 1
		struct FName CorrectVoiceID;			//Offset: 28 | ElementSize: 8
	};
	ABP_NPC_Manager_C_CheckVoiceID_Params params;
	params.NPC_RowName = NPC_RowName;
	params.VoiceID = VoiceID;
	params.IsMultiNPC = IsMultiNPC;

	UObject::ProcessEvent(fn, &params);
	if (CorrectVoiceID != nullptr)
		*CorrectVoiceID = params.CorrectVoiceID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.Set NPCRelations
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Structure	Type: struct FST_CustomNPC	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::Set_NPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.Set NPCRelations");

	struct ABP_NPC_Manager_C_Set_NPCRelations_Params {
		struct FST_CustomNPC NPC_Structure;			//Offset: 0 | ElementSize: 320
		class ABP_NPC_C* NPCReference;			//Offset: 320 | ElementSize: 8
		struct FString NPC_ID;			//Offset: 328 | ElementSize: 16
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 344 | ElementSize: 1
	};
	ABP_NPC_Manager_C_Set_NPCRelations_Params params;
	params.NPC_Structure = NPC_Structure;
	params.NPCReference = NPCReference;
	params.NPC_ID = NPC_ID;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetMultiNPCRelations
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MultiNPC_Structure	Type: struct FST_Multi_Village_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetMultiNPCRelations(struct FST_Multi_Village_NPC MultiNPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetMultiNPCRelations");

	struct ABP_NPC_Manager_C_SetMultiNPCRelations_Params {
		struct FST_Multi_Village_NPC MultiNPC_Structure;			//Offset: 0 | ElementSize: 288
		class ABP_NPC_C* NPCReference;			//Offset: 288 | ElementSize: 8
		struct FString NPC_ID;			//Offset: 296 | ElementSize: 16
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 312 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SetMultiNPCRelations_Params params;
	params.MultiNPC_Structure = MultiNPC_Structure;
	params.NPCReference = NPCReference;
	params.NPC_ID = NPC_ID;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.TeleportToHouse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerIncluded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::TeleportToHouse(bool PlayerIncluded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.TeleportToHouse");

	struct ABP_NPC_Manager_C_TeleportToHouse_Params {
		bool PlayerIncluded;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_TeleportToHouse_Params params;
	params.PlayerIncluded = PlayerIncluded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.Init");

	struct ABP_NPC_Manager_C_Init_Params {
	};
	ABP_NPC_Manager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ResetIllness
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ResetIllness(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ResetIllness");

	struct ABP_NPC_Manager_C_ResetIllness_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_ResetIllness_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnMultiNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Structure	Type: struct FST_Multi_Village_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsCustomNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BehaviorDT	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnMultiNPC(struct FST_Multi_Village_NPC NPC_Structure, bool IsCustomNPC, bool LoadGame, bool Birth, struct FName BehaviorDT, bool* Success, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnMultiNPC");

	struct ABP_NPC_Manager_C_SpawnMultiNPC_Params {
		struct FST_Multi_Village_NPC NPC_Structure;			//Offset: 0 | ElementSize: 288
		bool IsCustomNPC;			//Offset: 288 | ElementSize: 1
		bool LoadGame;			//Offset: 289 | ElementSize: 1
		bool Birth;			//Offset: 290 | ElementSize: 1
		struct FName BehaviorDT;			//Offset: 292 | ElementSize: 8
		bool Success;			//Offset: 300 | ElementSize: 1
		class ABP_NPC_C* NPC;			//Offset: 304 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnMultiNPC_Params params;
	params.NPC_Structure = NPC_Structure;
	params.IsCustomNPC = IsCustomNPC;
	params.LoadGame = LoadGame;
	params.Birth = Birth;
	params.BehaviorDT = BehaviorDT;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNeighbours");

	struct ABP_NPC_Manager_C_SpawnNeighbours_Params {
	};
	ABP_NPC_Manager_C_SpawnNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNewNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNewNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNewNeighbours");

	struct ABP_NPC_Manager_C_SpawnNewNeighbours_Params {
	};
	ABP_NPC_Manager_C_SpawnNewNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnRandomNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomNPC");

	struct ABP_NPC_Manager_C_SpawnRandomNPC_Params {
	};
	ABP_NPC_Manager_C_SpawnRandomNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::StartNPCManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager");

	struct ABP_NPC_Manager_C_StartNPCManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Manager_C_StartNPCManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddItemsToNeighborhoodBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddItemsToNeighborhoodBuildings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddItemsToNeighborhoodBuildings");

	struct ABP_NPC_Manager_C_AddItemsToNeighborhoodBuildings_Params {
	};
	ABP_NPC_Manager_C_AddItemsToNeighborhoodBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ResetItemsInNeighborhoodBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ResetItemsInNeighborhoodBuildings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ResetItemsInNeighborhoodBuildings");

	struct ABP_NPC_Manager_C_ResetItemsInNeighborhoodBuildings_Params {
	};
	ABP_NPC_Manager_C_ResetItemsInNeighborhoodBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadSaveFileIntoSystem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadSaveFileIntoSystem");

	struct ABP_NPC_Manager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SaveDataFromSystemToFile");

	struct ABP_NPC_Manager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomizeCharacterMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KeepHead	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomizeCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool KeepHead, bool LoadGame, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomizeCharacterMeshes");

	struct ABP_NPC_Manager_C_RandomizeCharacterMeshes_Params {
		class UObject* AnimClass;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 8 | ElementSize: 1
		class ABP_NPC_C* NPC_Reference;			//Offset: 16 | ElementSize: 8
		bool KeepHead;			//Offset: 24 | ElementSize: 1
		bool LoadGame;			//Offset: 25 | ElementSize: 1
		bool Success;			//Offset: 26 | ElementSize: 1
	};
	ABP_NPC_Manager_C_RandomizeCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetCustomCharacterMeshes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetCustomCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetCustomCharacterMeshes");

	struct ABP_NPC_Manager_C_SetCustomCharacterMeshes_Params {
		class UObject* AnimClass;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 8 | ElementSize: 1
		class ABP_NPC_C* NPC_Reference;			//Offset: 16 | ElementSize: 8
		bool LoadGame;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SetCustomCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadCharacterMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadCharacterMeshes(TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, class ABP_NPC_C* NPCReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadCharacterMeshes");

	struct ABP_NPC_Manager_C_LoadCharacterMeshes_Params {
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 0 | ElementSize: 80
		class ABP_NPC_C* NPCReference;			//Offset: 80 | ElementSize: 8
		bool Success;			//Offset: 88 | ElementSize: 1
	};
	ABP_NPC_Manager_C_LoadCharacterMeshes_Params params;
	params.BodyPartsIndexes = BodyPartsIndexes;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomMultiNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnRandomMultiNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomMultiNPC");

	struct ABP_NPC_Manager_C_SpawnRandomMultiNPC_Params {
	};
	ABP_NPC_Manager_C_SpawnRandomMultiNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnChild
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TransformLocation	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: MotherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MustBeMale	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Child	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnChild(TEnumAsByte<E_Ownership> Ownership, struct FTransform TransformLocation, struct FString MotherID, bool MustBeMale, bool Birth, bool* Succes, class ABP_NPC_C** Child) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnChild");

	struct ABP_NPC_Manager_C_SpawnChild_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FTransform TransformLocation;			//Offset: 16 | ElementSize: 48
		struct FString MotherID;			//Offset: 64 | ElementSize: 16
		bool MustBeMale;			//Offset: 80 | ElementSize: 1
		bool Birth;			//Offset: 81 | ElementSize: 1
		bool Succes;			//Offset: 82 | ElementSize: 1
		class ABP_NPC_C* Child;			//Offset: 88 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnChild_Params params;
	params.Ownership = Ownership;
	params.TransformLocation = TransformLocation;
	params.MotherID = MotherID;
	params.MustBeMale = MustBeMale;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (Child != nullptr)
		*Child = params.Child;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectMeshesForNPCGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KeepHead	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BodyPartsMeshes	Type: TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectMeshesForNPCGen(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectMeshesForNPCGen");

	struct ABP_NPC_Manager_C_SelectMeshesForNPCGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		class ABP_NPC_C* NPC_Reference;			//Offset: 128 | ElementSize: 8
		bool KeepHead;			//Offset: 136 | ElementSize: 1
		TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;			//Offset: 144 | ElementSize: 80
	};
	ABP_NPC_Manager_C_SelectMeshesForNPCGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;

	UObject::ProcessEvent(fn, &params);
	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedNPCMeshes	Type: struct FST_NPCMeshesGen	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: SortedIndexes	Type: TArray<struct FST_ArrayOfArraysInt>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortMeshes(struct FST_NPCMeshesGen NPCMeshes, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortMeshes");

	struct ABP_NPC_Manager_C_SortMeshes_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TEnumAsByte<E_Profession> Profession;			//Offset: 128 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 129 | ElementSize: 1
		struct FST_NPCMeshesGen SortedNPCMeshes;			//Offset: 136 | ElementSize: 128
		TArray<struct FST_ArrayOfArraysInt> SortedIndexes;			//Offset: 264 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortMeshes_Params params;
	params.NPCMeshes = NPCMeshes;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (SortedNPCMeshes != nullptr)
		*SortedNPCMeshes = params.SortedNPCMeshes;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.MeshGenSorter
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsGenMeshSettings>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsGenMeshSettings>	Flags: Parm, OutParm
// Name: SortedIndexes	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int32_t>* SortedIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.MeshGenSorter");

	struct ABP_NPC_Manager_C_MeshGenSorter_Params {
		TArray<struct FST_NPCsGenMeshSettings> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Profession> Profession;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_NPCsGenMeshSettings> SortedArray;			//Offset: 24 | ElementSize: 16
		TArray<int32_t> SortedIndexes;			//Offset: 40 | ElementSize: 16
	};
	ABP_NPC_Manager_C_MeshGenSorter_Params params;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetRandomIndexesFromNPCMeshesGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SortedIndexes	Type: TArray<struct FST_ArrayOfArraysInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetRandomIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyPartsIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetRandomIndexesFromNPCMeshesGen");

	struct ABP_NPC_Manager_C_GetRandomIndexesFromNPCMeshesGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TArray<struct FST_ArrayOfArraysInt> SortedIndexes;			//Offset: 128 | ElementSize: 16
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 144 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetRandomIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;

	UObject::ProcessEvent(fn, &params);
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
	if (BodyPartsIndexes != nullptr)
		*BodyPartsIndexes = params.BodyPartsIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetMeshesByIndexesFromNPCMeshesGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: BodyPartsMeshes	Type: TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetMeshesByIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetMeshesByIndexesFromNPCMeshesGen");

	struct ABP_NPC_Manager_C_GetMeshesByIndexesFromNPCMeshesGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 128 | ElementSize: 80
		TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;			//Offset: 208 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetMeshesByIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.BodyPartsIndexes = BodyPartsIndexes;

	UObject::ProcessEvent(fn, &params);
	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NakedNPCPrevention
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BodyParts	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NakedNPCPrevention(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyParts) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NakedNPCPrevention");

	struct ABP_NPC_Manager_C_NakedNPCPrevention_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		class ABP_NPC_C* NPCReference;			//Offset: 128 | ElementSize: 8
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyParts;			//Offset: 136 | ElementSize: 80
	};
	ABP_NPC_Manager_C_NakedNPCPrevention_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (BodyParts != nullptr)
		*BodyParts = params.BodyParts;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.InitializePresetTables
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::InitializePresetTables() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InitializePresetTables");

	struct ABP_NPC_Manager_C_InitializePresetTables_Params {
	};
	ABP_NPC_Manager_C_InitializePresetTables_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectPresetsForNPC
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectPresetsForNPC");

	struct ABP_NPC_Manager_C_SelectPresetsForNPC_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SelectPresetsForNPC_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCPresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCPresets");

	struct ABP_NPC_Manager_C_VerifyNPCPresets_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_NPC_Manager_C_VerifyNPCPresets_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadPresetTables
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvailableMalePresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableMaleBanditPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableFemalePresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableBoyPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableGirlPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableToddlerPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadPresetTables(TArray<struct FString>* AvailableMalePresets, TArray<struct FString>* AvailableMaleBanditPresets, TArray<struct FString>* AvailableFemalePresets, TArray<struct FString>* AvailableBoyPresets, TArray<struct FString>* AvailableGirlPresets, TArray<struct FString>* AvailableToddlerPresets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadPresetTables");

	struct ABP_NPC_Manager_C_LoadPresetTables_Params {
		TArray<struct FString> AvailableMalePresets;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> AvailableMaleBanditPresets;			//Offset: 16 | ElementSize: 16
		TArray<struct FString> AvailableFemalePresets;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> AvailableBoyPresets;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> AvailableGirlPresets;			//Offset: 64 | ElementSize: 16
		TArray<struct FString> AvailableToddlerPresets;			//Offset: 80 | ElementSize: 16
	};
	ABP_NPC_Manager_C_LoadPresetTables_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AvailableMalePresets != nullptr)
		*AvailableMalePresets = params.AvailableMalePresets;
	if (AvailableMaleBanditPresets != nullptr)
		*AvailableMaleBanditPresets = params.AvailableMaleBanditPresets;
	if (AvailableFemalePresets != nullptr)
		*AvailableFemalePresets = params.AvailableFemalePresets;
	if (AvailableBoyPresets != nullptr)
		*AvailableBoyPresets = params.AvailableBoyPresets;
	if (AvailableGirlPresets != nullptr)
		*AvailableGirlPresets = params.AvailableGirlPresets;
	if (AvailableToddlerPresets != nullptr)
		*AvailableToddlerPresets = params.AvailableToddlerPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetSeasonClothingPresetsForProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonClothingPresets	Type: struct FST_NPCSeasonClothing	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetSeasonClothingPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, struct FST_NPCSeasonClothing* SeasonClothingPresets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetSeasonClothingPresetsForProfession");

	struct ABP_NPC_Manager_C_GetSeasonClothingPresetsForProfession_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		struct FST_NPCSeasonClothing SeasonClothingPresets;			//Offset: 16 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetSeasonClothingPresetsForProfession_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
	if (SeasonClothingPresets != nullptr)
		*SeasonClothingPresets = params.SeasonClothingPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetDataTableForNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: class UDataTable*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UDataTable* ABP_NPC_Manager_C::GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetDataTableForNPC");

	struct ABP_NPC_Manager_C_GetPresetDataTableForNPC_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
		class UDataTable* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetDataTableForNPC_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetNPCPresets
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DataTable	Type: class UDataTable*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetNPCPresets");

	struct ABP_NPC_Manager_C_GetNPCPresets_Params {
		class UDataTable* DataTable;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_GetNPCPresets_Params params;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortByProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Profession>& Profession, TArray<struct FST_NPCsPresets>* SortedArray)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortByProfession");

	struct ABP_NPC_Manager_C_SortByProfession_Params {
		TArray<struct FST_NPCsPresets> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Profession> Profession;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> SortedArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortByProfession_Params params;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortBySeason
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Seasons>& Season, TArray<struct FST_NPCsPresets>* SortedArray)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortBySeason");

	struct ABP_NPC_Manager_C_SortBySeason_Params {
		TArray<struct FST_NPCsPresets> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Seasons> Season;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> SortedArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortBySeason_Params params;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectHeadAndHair
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectHeadAndHair(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectHeadAndHair");

	struct ABP_NPC_Manager_C_SelectHeadAndHair_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SelectHeadAndHair_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonCharacterType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetPresetByProfessionSeasonCharacterType(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FName* PresetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonCharacterType");

	struct ABP_NPC_Manager_C_GetPresetByProfessionSeasonCharacterType_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 9 | ElementSize: 1
		struct FName PresetID;			//Offset: 12 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetByProfessionSeasonCharacterType_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (PresetID != nullptr)
		*PresetID = params.PresetID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyAvailablePresets
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DataTable	Type: class UDataTable*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayToVerify	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyAvailablePresets");

	struct ABP_NPC_Manager_C_VerifyAvailablePresets_Params {
		class UDataTable* DataTable;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_NPCsPresets> ArrayToVerify;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_VerifyAvailablePresets_Params params;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToVerify != nullptr)
		*ArrayToVerify = params.ArrayToVerify;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIsNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckIsNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIsNeighbours");

	struct ABP_NPC_Manager_C_CheckIsNeighbours_Params {
	};
	ABP_NPC_Manager_C_CheckIsNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPC_NightPatrol
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetNPC_NightPatrol() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPC_NightPatrol");

	struct ABP_NPC_Manager_C_SetNPC_NightPatrol_Params {
	};
	ABP_NPC_Manager_C_SetNPC_NightPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnChildForOfflineMother
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MotherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MustBeMale	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FatherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SiblingsIDs	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: HouseID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Child	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnChildForOfflineMother(TEnumAsByte<E_Ownership> Ownership, struct FString MotherID, bool MustBeMale, bool Birth, struct FString FatherID, TArray<struct FString>* SiblingsIDs, struct FString HouseID, bool* Succes, class ABP_NPC_C** Child) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnChildForOfflineMother");

	struct ABP_NPC_Manager_C_SpawnChildForOfflineMother_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString MotherID;			//Offset: 8 | ElementSize: 16
		bool MustBeMale;			//Offset: 24 | ElementSize: 1
		bool Birth;			//Offset: 25 | ElementSize: 1
		struct FString FatherID;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> SiblingsIDs;			//Offset: 48 | ElementSize: 16
		struct FString HouseID;			//Offset: 64 | ElementSize: 16
		bool Succes;			//Offset: 80 | ElementSize: 1
		class ABP_NPC_C* Child;			//Offset: 88 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnChildForOfflineMother_Params params;
	params.Ownership = Ownership;
	params.MotherID = MotherID;
	params.MustBeMale = MustBeMale;
	params.Birth = Birth;
	params.FatherID = FatherID;
	params.HouseID = HouseID;

	UObject::ProcessEvent(fn, &params);
	if (SiblingsIDs != nullptr)
		*SiblingsIDs = params.SiblingsIDs;
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (Child != nullptr)
		*Child = params.Child;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnHerald
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnHerald(class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnHerald");

	struct ABP_NPC_Manager_C_SpawnHerald_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnHerald_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonWealthCharacterType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Wealth	Type: TEnumAsByte<E_Wealth>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetPresetByProfessionSeasonWealthCharacterType(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Wealth> Wealth, struct FName* PresetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonWealthCharacterType");

	struct ABP_NPC_Manager_C_GetPresetByProfessionSeasonWealthCharacterType_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_Wealth> Wealth;			//Offset: 10 | ElementSize: 1
		struct FName PresetID;			//Offset: 12 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetByProfessionSeasonWealthCharacterType_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;
	params.Wealth = Wealth;

	UObject::ProcessEvent(fn, &params);
	if (PresetID != nullptr)
		*PresetID = params.PresetID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByWealth
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Wealth	Type: TEnumAsByte<E_Wealth>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FilteredPresets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FilterByWealth(TArray<struct FST_NPCsPresets>* Presets, const TEnumAsByte<E_Wealth>& Wealth, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByWealth");

	struct ABP_NPC_Manager_C_FilterByWealth_Params {
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Wealth> Wealth;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> FilteredPresets;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FilterByWealth_Params params;
	params.Wealth = Wealth;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
	if (FilteredPresets != nullptr)
		*FilteredPresets = params.FilteredPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateVendors
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateVendors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateVendors");

	struct ABP_NPC_Manager_C_UpdateVendors_Params {
	};
	ABP_NPC_Manager_C_UpdateVendors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCHeadAndHair
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCHeadAndHair");

	struct ABP_NPC_Manager_C_VerifyNPCHeadAndHair_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_VerifyNPCHeadAndHair_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnGiftVendor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TransformLocation	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: VendorCategory	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnGiftVendor(struct FTransform TransformLocation, struct FDataTableRowHandle VendorCategory, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnGiftVendor");

	struct ABP_NPC_Manager_C_SpawnGiftVendor_Params {
		struct FTransform TransformLocation;			//Offset: 0 | ElementSize: 48
		struct FDataTableRowHandle VendorCategory;			//Offset: 48 | ElementSize: 16
		class ABP_NPC_C* NPC;			//Offset: 64 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnGiftVendor_Params params;
	params.TransformLocation = TransformLocation;
	params.VendorCategory = VendorCategory;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnBand
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnBand(bool* Success, TArray<class ABP_NPC_C*>* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnBand");

	struct ABP_NPC_Manager_C_SpawnBand_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		TArray<class ABP_NPC_C*> NPC;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SpawnBand_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RowName	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC_Parameters	Type: struct FST_SimpleNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnQuestNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestNPC");

	struct ABP_NPC_Manager_C_SpawnQuestNPC_Params {
		struct FDataTableRowHandle RowName;			//Offset: 0 | ElementSize: 16
		struct FST_SimpleNPC NPC_Parameters;			//Offset: 16 | ElementSize: 128
		class ABP_NPC_C* NPC;			//Offset: 144 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnQuestNPC_Params params;
	params.RowName = RowName;
	params.NPC_Parameters = NPC_Parameters;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestMultiNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RowName	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC_Parameters	Type: struct FST_SimpleNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: QuestID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnQuestMultiNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, struct FString QuestID, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestMultiNPC");

	struct ABP_NPC_Manager_C_SpawnQuestMultiNPC_Params {
		struct FDataTableRowHandle RowName;			//Offset: 0 | ElementSize: 16
		struct FST_SimpleNPC NPC_Parameters;			//Offset: 16 | ElementSize: 128
		struct FString QuestID;			//Offset: 144 | ElementSize: 16
		class ABP_NPC_C* NPC;			//Offset: 160 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnQuestMultiNPC_Params params;
	params.RowName = RowName;
	params.NPC_Parameters = NPC_Parameters;
	params.QuestID = QuestID;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnWaggoner
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnWaggoner(TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnWaggoner");

	struct ABP_NPC_Manager_C_SpawnWaggoner_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SpawnWaggoner_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC_FromSpawner
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: POI_ID	Type: struct FGuid	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: NPC_Name	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC_Parameters	Type: struct FST_SimpleNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnerTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNPC_FromSpawner(struct FGuid POI_ID, struct FString NPC_ID, struct FDataTableRowHandle NPC_Name, struct FST_SimpleNPC NPC_Parameters, bool LoadGame, struct FTransform SpawnerTransform, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC_FromSpawner");

	struct ABP_NPC_Manager_C_SpawnNPC_FromSpawner_Params {
		struct FGuid POI_ID;			//Offset: 0 | ElementSize: 16
		struct FString NPC_ID;			//Offset: 16 | ElementSize: 16
		struct FDataTableRowHandle NPC_Name;			//Offset: 32 | ElementSize: 16
		struct FST_SimpleNPC NPC_Parameters;			//Offset: 48 | ElementSize: 128
		bool LoadGame;			//Offset: 176 | ElementSize: 1
		struct FTransform SpawnerTransform;			//Offset: 192 | ElementSize: 48
		class ABP_NPC_C* NPC;			//Offset: 240 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnNPC_FromSpawner_Params params;
	params.POI_ID = POI_ID;
	params.NPC_ID = NPC_ID;
	params.NPC_Name = NPC_Name;
	params.NPC_Parameters = NPC_Parameters;
	params.LoadGame = LoadGame;
	params.SpawnerTransform = SpawnerTransform;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NeighboursDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NeighboursDeath(class ABP_NPC_C* NPC_Reference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NeighboursDeath");

	struct ABP_NPC_Manager_C_NeighboursDeath_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_NeighboursDeath_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateNPCsOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged");

	struct ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Params {
	};
	ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NPCsDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NPCsDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NPCsDeath");

	struct ABP_NPC_Manager_C_NPCsDeath_Params {
	};
	ABP_NPC_Manager_C_NPCsDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetNeighboursRelations
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetNeighboursRelations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetNeighboursRelations");

	struct ABP_NPC_Manager_C_SetNeighboursRelations_Params {
	};
	ABP_NPC_Manager_C_SetNeighboursRelations_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyHerald
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyHerald(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyHerald");

	struct ABP_NPC_Manager_C_DestroyHerald_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_DestroyHerald_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyQuestNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RowName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyQuestNPC(struct FString RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyQuestNPC");

	struct ABP_NPC_Manager_C_DestroyQuestNPC_Params {
		struct FString RowName;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_DestroyQuestNPC_Params params;
	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ReloadNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ReloadNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ReloadNeighbours");

	struct ABP_NPC_Manager_C_ReloadNeighbours_Params {
	};
	ABP_NPC_Manager_C_ReloadNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddNPCsThatLeft
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddNPCsThatLeft(class AActor*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddNPCsThatLeft");

	struct ABP_NPC_Manager_C_AddNPCsThatLeft_Params {
		class AActor* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_AddNPCsThatLeft_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveNPCsThatLeft
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemoveNPCsThatLeft(class AActor*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveNPCsThatLeft");

	struct ABP_NPC_Manager_C_RemoveNPCsThatLeft_Params {
		class AActor* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemoveNPCsThatLeft_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyNPCsThatLeftOnSkip
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyNPCsThatLeftOnSkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyNPCsThatLeftOnSkip");

	struct ABP_NPC_Manager_C_DestroyNPCsThatLeftOnSkip_Params {
	};
	ABP_NPC_Manager_C_DestroyNPCsThatLeftOnSkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateWaggoners
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateWaggoners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateWaggoners");

	struct ABP_NPC_Manager_C_UpdateWaggoners_Params {
	};
	ABP_NPC_Manager_C_UpdateWaggoners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddToysToNeighboursKids
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddSamborFigurines	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddToysToNeighboursKids(bool AddSamborFigurines) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddToysToNeighboursKids");

	struct ABP_NPC_Manager_C_AddToysToNeighboursKids_Params {
		bool AddSamborFigurines;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_AddToysToNeighboursKids_Params params;
	params.AddSamborFigurines = AddSamborFigurines;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetFromPool
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetToRemove	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemovePresetFromPool(class ABP_NPC_C* NPC, struct FName PresetToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetFromPool");

	struct ABP_NPC_Manager_C_RemovePresetFromPool_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
		struct FName PresetToRemove;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemovePresetFromPool_Params params;
	params.NPC = NPC;
	params.PresetToRemove = PresetToRemove;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RefillPresetTable
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Array	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RefillPresetTable(TArray<struct FST_NPCsPresets>* Array, class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RefillPresetTable");

	struct ABP_NPC_Manager_C_RefillPresetTable_Params {
		TArray<struct FST_NPCsPresets> Array;			//Offset: 0 | ElementSize: 16
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 16 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RefillPresetTable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Array != nullptr)
		*Array = params.Array;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FindUnusedPresets
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UnusedPresets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FindUnusedPresets(TArray<struct FST_NPCsPresets>* Presets, class ABP_BaseCharacter_C* BaseCharacter, TArray<struct FST_NPCsPresets>* UnusedPresets)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FindUnusedPresets");

	struct ABP_NPC_Manager_C_FindUnusedPresets_Params {
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 0 | ElementSize: 16
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 16 | ElementSize: 8
		TArray<struct FST_NPCsPresets> UnusedPresets;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FindUnusedPresets_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
	if (UnusedPresets != nullptr)
		*UnusedPresets = params.UnusedPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdatePresetsPerVillage
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetToAdd	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdatePresetsPerVillage(class ABP_BaseCharacter_C* BaseCharacter, const struct FName& PresetToAdd) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdatePresetsPerVillage");

	struct ABP_NPC_Manager_C_UpdatePresetsPerVillage_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FName PresetToAdd;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_UpdatePresetsPerVillage_Params params;
	params.BaseCharacter = BaseCharacter;
	params.PresetToAdd = PresetToAdd;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetsPerVillage
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemovePresetsPerVillage(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetsPerVillage");

	struct ABP_NPC_Manager_C_RemovePresetsPerVillage_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemovePresetsPerVillage_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadUsedPresets
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UsedPresets	Type: TMap<unsigned char, struct Falb_Array_Name>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadUsedPresets(TMap<unsigned char, struct Falb_Array_Name> UsedPresets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadUsedPresets");

	struct ABP_NPC_Manager_C_LoadUsedPresets_Params {
		TMap<unsigned char, struct Falb_Array_Name> UsedPresets;			//Offset: 0 | ElementSize: 80
	};
	ABP_NPC_Manager_C_LoadUsedPresets_Params params;
	params.UsedPresets = UsedPresets;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeBefore
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeBefore	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsBefore	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::IsTimeBefore(struct FST_Hour Time, struct FST_Hour TimeBefore, bool* IsBefore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeBefore");

	struct ABP_NPC_Manager_C_IsTimeBefore_Params {
		struct FST_Hour Time;			//Offset: 0 | ElementSize: 12
		struct FST_Hour TimeBefore;			//Offset: 12 | ElementSize: 12
		bool IsBefore;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Manager_C_IsTimeBefore_Params params;
	params.Time = Time;
	params.TimeBefore = TimeBefore;

	UObject::ProcessEvent(fn, &params);
	if (IsBefore != nullptr)
		*IsBefore = params.IsBefore;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeEqual
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time1	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Time2	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsEqual	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::IsTimeEqual(struct FST_Hour Time1, struct FST_Hour Time2, bool* IsEqual) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeEqual");

	struct ABP_NPC_Manager_C_IsTimeEqual_Params {
		struct FST_Hour Time1;			//Offset: 0 | ElementSize: 12
		struct FST_Hour Time2;			//Offset: 12 | ElementSize: 12
		bool IsEqual;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Manager_C_IsTimeEqual_Params params;
	params.Time1 = Time1;
	params.Time2 = Time2;

	UObject::ProcessEvent(fn, &params);
	if (IsEqual != nullptr)
		*IsEqual = params.IsEqual;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeBetween
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimePeriodStart	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimePeriodEnd	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Inclusive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsBetween	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::IsTimeBetween(struct FST_Hour Time, struct FST_Hour TimePeriodStart, struct FST_Hour TimePeriodEnd, bool Inclusive, bool* IsBetween) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.IsTimeBetween");

	struct ABP_NPC_Manager_C_IsTimeBetween_Params {
		struct FST_Hour Time;			//Offset: 0 | ElementSize: 12
		struct FST_Hour TimePeriodStart;			//Offset: 12 | ElementSize: 12
		struct FST_Hour TimePeriodEnd;			//Offset: 24 | ElementSize: 12
		bool Inclusive;			//Offset: 36 | ElementSize: 1
		bool IsBetween;			//Offset: 37 | ElementSize: 1
	};
	ABP_NPC_Manager_C_IsTimeBetween_Params params;
	params.Time = Time;
	params.TimePeriodStart = TimePeriodStart;
	params.TimePeriodEnd = TimePeriodEnd;
	params.Inclusive = Inclusive;

	UObject::ProcessEvent(fn, &params);
	if (IsBetween != nullptr)
		*IsBetween = params.IsBetween;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIfChatterCanBeUsed
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ChatterName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckIfChatterCanBeUsed(struct FName ChatterName, TEnumAsByte<E_CharacterType> CharacterType, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIfChatterCanBeUsed");

	struct ABP_NPC_Manager_C_CheckIfChatterCanBeUsed_Params {
		struct FName ChatterName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_NPC_Manager_C_CheckIfChatterCanBeUsed_Params params;
	params.ChatterName = ChatterName;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.IsNotTooMuchChatters
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNear	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::IsNotTooMuchChatters(TEnumAsByte<E_Ownership> Ownership, bool IsNear, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.IsNotTooMuchChatters");

	struct ABP_NPC_Manager_C_IsNotTooMuchChatters_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		bool IsNear;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
	};
	ABP_NPC_Manager_C_IsNotTooMuchChatters_Params params;
	params.Ownership = Ownership;
	params.IsNear = IsNear;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.IncreaseNumberOfChatters
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NearNPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::IncreaseNumberOfChatters(TEnumAsByte<E_Ownership> Ownership, struct FString NearNPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.IncreaseNumberOfChatters");

	struct ABP_NPC_Manager_C_IncreaseNumberOfChatters_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString NearNPC_ID;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_IncreaseNumberOfChatters_Params params;
	params.Ownership = Ownership;
	params.NearNPC_ID = NearNPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DecreaseNumberOfChatters
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DecreaseNumberOfChatters(TEnumAsByte<E_Ownership> Ownership, struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DecreaseNumberOfChatters");

	struct ABP_NPC_Manager_C_DecreaseNumberOfChatters_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString NPC_ID;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_DecreaseNumberOfChatters_Params params;
	params.Ownership = Ownership;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateUsedChatters
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatterCategory	Type: EChatterSoundType	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterSubCategory	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateUsedChatters(EChatterSoundType ChatterCategory, struct FName ChatterSubCategory, const struct FName& ChatterName, TEnumAsByte<E_CharacterType> CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateUsedChatters");

	struct ABP_NPC_Manager_C_UpdateUsedChatters_Params {
		EChatterSoundType ChatterCategory;			//Offset: 0 | ElementSize: 1
		struct FName ChatterSubCategory;			//Offset: 4 | ElementSize: 8
		struct FName ChatterName;			//Offset: 12 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 20 | ElementSize: 1
	};
	ABP_NPC_Manager_C_UpdateUsedChatters_Params params;
	params.ChatterCategory = ChatterCategory;
	params.ChatterSubCategory = ChatterSubCategory;
	params.ChatterName = ChatterName;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddTalkingNPCsManager
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: TalkingNPC_Manager	Type: class UO_TalkingNPCsManager_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddTalkingNPCsManager(struct FString NPC_ID, class UO_TalkingNPCsManager_C*& TalkingNPC_Manager) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddTalkingNPCsManager");

	struct ABP_NPC_Manager_C_AddTalkingNPCsManager_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		class UO_TalkingNPCsManager_C* TalkingNPC_Manager;			//Offset: 16 | ElementSize: 8
	};
	ABP_NPC_Manager_C_AddTalkingNPCsManager_Params params;
	params.NPC_ID = NPC_ID;
	params.TalkingNPC_Manager = TalkingNPC_Manager;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveTalkingNPCsManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemoveTalkingNPCsManager(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveTalkingNPCsManager");

	struct ABP_NPC_Manager_C_RemoveTalkingNPCsManager_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_RemoveTalkingNPCsManager_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIfTalkingNPCsManagerExists
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC1_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: NPC2_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TalkingNPCsManager	Type: class UO_TalkingNPCsManager_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckIfTalkingNPCsManagerExists(struct FString NPC1_ID, struct FString NPC2_ID, bool* Success, class UO_TalkingNPCsManager_C** TalkingNPCsManager) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIfTalkingNPCsManagerExists");

	struct ABP_NPC_Manager_C_CheckIfTalkingNPCsManagerExists_Params {
		struct FString NPC1_ID;			//Offset: 0 | ElementSize: 16
		struct FString NPC2_ID;			//Offset: 16 | ElementSize: 16
		bool Success;			//Offset: 32 | ElementSize: 1
		class UO_TalkingNPCsManager_C* TalkingNPCsManager;			//Offset: 40 | ElementSize: 8
	};
	ABP_NPC_Manager_C_CheckIfTalkingNPCsManagerExists_Params params;
	params.NPC1_ID = NPC1_ID;
	params.NPC2_ID = NPC2_ID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (TalkingNPCsManager != nullptr)
		*TalkingNPCsManager = params.TalkingNPCsManager;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FindSpecialQuestNPC_Dialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SpecialDialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FindSpecialQuestNPC_Dialogue(struct FString ID, TAssetPtr<class UDialogue>* SpecialDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FindSpecialQuestNPC_Dialogue");

	struct ABP_NPC_Manager_C_FindSpecialQuestNPC_Dialogue_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		TAssetPtr<class UDialogue> SpecialDialogue;			//Offset: 16 | ElementSize: 40
	};
	ABP_NPC_Manager_C_FindSpecialQuestNPC_Dialogue_Params params;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
	if (SpecialDialogue != nullptr)
		*SpecialDialogue = params.SpecialDialogue;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged_Client
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateNPCsOnSeasonChanged_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged_Client");

	struct ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Client_Params {
	};
	ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateUsedChattersDialogues
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatterDialogueName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateUsedChattersDialogues(const struct FName& ChatterDialogueName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateUsedChattersDialogues");

	struct ABP_NPC_Manager_C_UpdateUsedChattersDialogues_Params {
		struct FName ChatterDialogueName;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_UpdateUsedChattersDialogues_Params params;
	params.ChatterDialogueName = ChatterDialogueName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetUsedChatters
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChattersSubCategories	Type: TArray<struct FName>	Flags: Parm, OutParm
// Name: ChattersNames	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetUsedChatters(TEnumAsByte<E_CharacterType> CharacterType, TArray<struct FName>* ChattersSubCategories, TArray<struct FName>* ChattersNames) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetUsedChatters");

	struct ABP_NPC_Manager_C_GetUsedChatters_Params {
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 0 | ElementSize: 1
		TArray<struct FName> ChattersSubCategories;			//Offset: 8 | ElementSize: 16
		TArray<struct FName> ChattersNames;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_GetUsedChatters_Params params;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
	if (ChattersSubCategories != nullptr)
		*ChattersSubCategories = params.ChattersSubCategories;
	if (ChattersNames != nullptr)
		*ChattersNames = params.ChattersNames;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ChangeTimeToString
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Time	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StringTime	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ChangeTimeToString(int32_t Time, struct FString* StringTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ChangeTimeToString");

	struct ABP_NPC_Manager_C_ChangeTimeToString_Params {
		int32_t Time;			//Offset: 0 | ElementSize: 4
		struct FString StringTime;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_ChangeTimeToString_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
	if (StringTime != nullptr)
		*StringTime = params.StringTime;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetID_Timestamp
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ID_Timestamp	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetID_Timestamp(struct FString* ID_Timestamp) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetID_Timestamp");

	struct ABP_NPC_Manager_C_GetID_Timestamp_Params {
		struct FString ID_Timestamp;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_GetID_Timestamp_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ID_Timestamp != nullptr)
		*ID_Timestamp = params.ID_Timestamp;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetUsedChattersDialogues
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ChattersDialoguesNames	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetUsedChattersDialogues(TArray<struct FName>* ChattersDialoguesNames) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetUsedChattersDialogues");

	struct ABP_NPC_Manager_C_GetUsedChattersDialogues_Params {
		TArray<struct FName> ChattersDialoguesNames;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_GetUsedChattersDialogues_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ChattersDialoguesNames != nullptr)
		*ChattersDialoguesNames = params.ChattersDialoguesNames;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomChatterDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatterDialogueCategory	Type: EChatterDialogueType	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FirstTalkerCharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FirstTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerCharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsDialogue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DialogueName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: WhoStarts	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dialogueinfo	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FindRandomChatterDialogue(EChatterDialogueType ChatterDialogueCategory, TEnumAsByte<E_CharacterType> FirstTalkerCharacterType, TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_CharacterType> SecondTalkerCharacterType, TEnumAsByte<E_Sex> SecondTalkerSex, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomChatterDialogue");

	struct ABP_NPC_Manager_C_FindRandomChatterDialogue_Params {
		EChatterDialogueType ChatterDialogueCategory;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_CharacterType> FirstTalkerCharacterType;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_Sex> FirstTalkerSex;			//Offset: 2 | ElementSize: 1
		TEnumAsByte<E_CharacterType> SecondTalkerCharacterType;			//Offset: 3 | ElementSize: 1
		TEnumAsByte<E_Sex> SecondTalkerSex;			//Offset: 4 | ElementSize: 1
		bool IsDialogue;			//Offset: 5 | ElementSize: 1
		struct FString DialogueName;			//Offset: 8 | ElementSize: 16
		int32_t WhoStarts;			//Offset: 24 | ElementSize: 4
		TArray<struct FString> Dialogueinfo;			//Offset: 32 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FindRandomChatterDialogue_Params params;
	params.ChatterDialogueCategory = ChatterDialogueCategory;
	params.FirstTalkerCharacterType = FirstTalkerCharacterType;
	params.FirstTalkerSex = FirstTalkerSex;
	params.SecondTalkerCharacterType = SecondTalkerCharacterType;
	params.SecondTalkerSex = SecondTalkerSex;

	UObject::ProcessEvent(fn, &params);
	if (IsDialogue != nullptr)
		*IsDialogue = params.IsDialogue;
	if (DialogueName != nullptr)
		*DialogueName = params.DialogueName;
	if (WhoStarts != nullptr)
		*WhoStarts = params.WhoStarts;
	if (Dialogueinfo != nullptr)
		*Dialogueinfo = params.Dialogueinfo;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomChatterDialogueBySubCategories
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatterDialogueCategory	Type: EChatterDialogueType	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterDialogueSubCategories	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FirstTalkerCharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FirstTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerCharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsDialogue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DialogueName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: WhoStarts	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dialogueinfo	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FindRandomChatterDialogueBySubCategories(EChatterDialogueType ChatterDialogueCategory, TArray<struct FString>* ChatterDialogueSubCategories, TEnumAsByte<E_CharacterType> FirstTalkerCharacterType, TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_CharacterType> SecondTalkerCharacterType, TEnumAsByte<E_Sex> SecondTalkerSex, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomChatterDialogueBySubCategories");

	struct ABP_NPC_Manager_C_FindRandomChatterDialogueBySubCategories_Params {
		EChatterDialogueType ChatterDialogueCategory;			//Offset: 0 | ElementSize: 1
		TArray<struct FString> ChatterDialogueSubCategories;			//Offset: 8 | ElementSize: 16
		TEnumAsByte<E_CharacterType> FirstTalkerCharacterType;			//Offset: 24 | ElementSize: 1
		TEnumAsByte<E_Sex> FirstTalkerSex;			//Offset: 25 | ElementSize: 1
		TEnumAsByte<E_CharacterType> SecondTalkerCharacterType;			//Offset: 26 | ElementSize: 1
		TEnumAsByte<E_Sex> SecondTalkerSex;			//Offset: 27 | ElementSize: 1
		bool IsDialogue;			//Offset: 28 | ElementSize: 1
		struct FString DialogueName;			//Offset: 32 | ElementSize: 16
		int32_t WhoStarts;			//Offset: 48 | ElementSize: 4
		TArray<struct FString> Dialogueinfo;			//Offset: 56 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FindRandomChatterDialogueBySubCategories_Params params;
	params.ChatterDialogueCategory = ChatterDialogueCategory;
	params.FirstTalkerCharacterType = FirstTalkerCharacterType;
	params.FirstTalkerSex = FirstTalkerSex;
	params.SecondTalkerCharacterType = SecondTalkerCharacterType;
	params.SecondTalkerSex = SecondTalkerSex;

	UObject::ProcessEvent(fn, &params);
	if (ChatterDialogueSubCategories != nullptr)
		*ChatterDialogueSubCategories = params.ChatterDialogueSubCategories;
	if (IsDialogue != nullptr)
		*IsDialogue = params.IsDialogue;
	if (DialogueName != nullptr)
		*DialogueName = params.DialogueName;
	if (WhoStarts != nullptr)
		*WhoStarts = params.WhoStarts;
	if (Dialogueinfo != nullptr)
		*Dialogueinfo = params.Dialogueinfo;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomBandChatterDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FirstTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FirstTalkerProfession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalkerProfession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsDialogue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DialogueName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: WhoStarts	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dialogueinfo	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FindRandomBandChatterDialogue(TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_Profession> FirstTalkerProfession, TEnumAsByte<E_Sex> SecondTalkerSex, TEnumAsByte<E_Profession> SecondTalkerProfession, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FindRandomBandChatterDialogue");

	struct ABP_NPC_Manager_C_FindRandomBandChatterDialogue_Params {
		TEnumAsByte<E_Sex> FirstTalkerSex;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> FirstTalkerProfession;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_Sex> SecondTalkerSex;			//Offset: 2 | ElementSize: 1
		TEnumAsByte<E_Profession> SecondTalkerProfession;			//Offset: 3 | ElementSize: 1
		bool IsDialogue;			//Offset: 4 | ElementSize: 1
		struct FString DialogueName;			//Offset: 8 | ElementSize: 16
		int32_t WhoStarts;			//Offset: 24 | ElementSize: 4
		TArray<struct FString> Dialogueinfo;			//Offset: 32 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FindRandomBandChatterDialogue_Params params;
	params.FirstTalkerSex = FirstTalkerSex;
	params.FirstTalkerProfession = FirstTalkerProfession;
	params.SecondTalkerSex = SecondTalkerSex;
	params.SecondTalkerProfession = SecondTalkerProfession;

	UObject::ProcessEvent(fn, &params);
	if (IsDialogue != nullptr)
		*IsDialogue = params.IsDialogue;
	if (DialogueName != nullptr)
		*DialogueName = params.DialogueName;
	if (WhoStarts != nullptr)
		*WhoStarts = params.WhoStarts;
	if (Dialogueinfo != nullptr)
		*Dialogueinfo = params.Dialogueinfo;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetChatterDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatterDialogueCategory	Type: EChatterDialogueType	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DialogueName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Dialogueinfo	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FirstTalker	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondTalker	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldClearTalkingNPCsIDs	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TalkingNPCsManager	Type: class UO_TalkingNPCsManager_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetChatterDialogue(EChatterDialogueType ChatterDialogueCategory, struct FString DialogueName, TArray<struct FString>* Dialogueinfo, class ABP_NPC_C* FirstTalker, class ABP_NPC_C* SecondTalker, bool ShouldClearTalkingNPCsIDs, class UO_TalkingNPCsManager_C** TalkingNPCsManager) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetChatterDialogue");

	struct ABP_NPC_Manager_C_SetChatterDialogue_Params {
		EChatterDialogueType ChatterDialogueCategory;			//Offset: 0 | ElementSize: 1
		struct FString DialogueName;			//Offset: 8 | ElementSize: 16
		TArray<struct FString> Dialogueinfo;			//Offset: 24 | ElementSize: 16
		class ABP_NPC_C* FirstTalker;			//Offset: 40 | ElementSize: 8
		class ABP_NPC_C* SecondTalker;			//Offset: 48 | ElementSize: 8
		bool ShouldClearTalkingNPCsIDs;			//Offset: 56 | ElementSize: 1
		class UO_TalkingNPCsManager_C* TalkingNPCsManager;			//Offset: 64 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SetChatterDialogue_Params params;
	params.ChatterDialogueCategory = ChatterDialogueCategory;
	params.DialogueName = DialogueName;
	params.FirstTalker = FirstTalker;
	params.SecondTalker = SecondTalker;
	params.ShouldClearTalkingNPCsIDs = ShouldClearTalkingNPCsIDs;

	UObject::ProcessEvent(fn, &params);
	if (Dialogueinfo != nullptr)
		*Dialogueinfo = params.Dialogueinfo;
	if (TalkingNPCsManager != nullptr)
		*TalkingNPCsManager = params.TalkingNPCsManager;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByBanditType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FilteredPresets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FilterByBanditType(TArray<struct FST_NPCsPresets>* Presets, TEnumAsByte<E_BanditType> BanditType, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByBanditType");

	struct ABP_NPC_Manager_C_FilterByBanditType_Params {
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> FilteredPresets;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FilterByBanditType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
	if (FilteredPresets != nullptr)
		*FilteredPresets = params.FilteredPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByCharacterType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: CharacterObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FilteredPresets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FilterByCharacterType(TArray<struct FST_NPCsPresets>* Presets, class UObject* CharacterObject, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FilterByCharacterType");

	struct ABP_NPC_Manager_C_FilterByCharacterType_Params {
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 0 | ElementSize: 16
		class UObject* CharacterObject;			//Offset: 16 | ElementSize: 8
		TArray<struct FST_NPCsPresets> FilteredPresets;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FilterByCharacterType_Params params;
	params.CharacterObject = CharacterObject;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
	if (FilteredPresets != nullptr)
		*FilteredPresets = params.FilteredPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetBanditNameUsingType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BanditName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetBanditNameUsingType(TEnumAsByte<E_BanditType> BanditType, struct FText* BanditName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetBanditNameUsingType");

	struct ABP_NPC_Manager_C_GetBanditNameUsingType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
		struct FText BanditName;			//Offset: 8 | ElementSize: 24
	};
	ABP_NPC_Manager_C_GetBanditNameUsingType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
	if (BanditName != nullptr)
		*BanditName = params.BanditName;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.InheritAppearanceParams
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCRef	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::InheritAppearanceParams(class ABP_NPC_C* NPCRef) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InheritAppearanceParams");

	struct ABP_NPC_Manager_C_InheritAppearanceParams_Params {
		class ABP_NPC_C* NPCRef;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_InheritAppearanceParams_Params params;
	params.NPCRef = NPCRef;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}