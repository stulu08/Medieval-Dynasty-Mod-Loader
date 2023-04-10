#include "../SDK.h"
#include "BP_CharacterRelationsComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_CharacterRelationsComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_CharacterRelationsComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_CharacterRelationsComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of HouseID
// Declaration: struct FString HouseID
struct FString UBP_CharacterRelationsComponent_C::M_GetHouseID() const {
	return Read<struct FString>((byte*)this + 184);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetHouseID() {
	return reinterpret_cast<struct FString*>((byte*)this + 184);
}
void UBP_CharacterRelationsComponent_C::M_SetHouseID(const struct FString& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of HouseReference
// Declaration: class ABP_MasterBuilding_C* HouseReference
class ABP_MasterBuilding_C* UBP_CharacterRelationsComponent_C::M_GetHouseReference() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 200);
}
class ABP_MasterBuilding_C** UBP_CharacterRelationsComponent_C::M_PtrGetHouseReference() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 200);
}
void UBP_CharacterRelationsComponent_C::M_SetHouseReference(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of PartnerID
// Declaration: struct FString PartnerID
struct FString UBP_CharacterRelationsComponent_C::M_GetPartnerID() const {
	return Read<struct FString>((byte*)this + 208);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetPartnerID() {
	return reinterpret_cast<struct FString*>((byte*)this + 208);
}
void UBP_CharacterRelationsComponent_C::M_SetPartnerID(const struct FString& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of Partner
// Declaration: class ABP_BaseCharacter_C* Partner
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetPartner() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 224);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetPartner() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 224);
}
void UBP_CharacterRelationsComponent_C::M_SetPartner(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of MotherID
// Declaration: struct FString MotherID
struct FString UBP_CharacterRelationsComponent_C::M_GetMotherID() const {
	return Read<struct FString>((byte*)this + 232);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetMotherID() {
	return reinterpret_cast<struct FString*>((byte*)this + 232);
}
void UBP_CharacterRelationsComponent_C::M_SetMotherID(const struct FString& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of Mother
// Declaration: class ABP_BaseCharacter_C* Mother
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetMother() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 248);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetMother() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 248);
}
void UBP_CharacterRelationsComponent_C::M_SetMother(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of FatherID
// Declaration: struct FString FatherID
struct FString UBP_CharacterRelationsComponent_C::M_GetFatherID() const {
	return Read<struct FString>((byte*)this + 256);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetFatherID() {
	return reinterpret_cast<struct FString*>((byte*)this + 256);
}
void UBP_CharacterRelationsComponent_C::M_SetFatherID(const struct FString& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of Father
// Declaration: class ABP_BaseCharacter_C* Father
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetFather() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 272);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetFather() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 272);
}
void UBP_CharacterRelationsComponent_C::M_SetFather(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of ChildrenID
// Declaration: TArray<struct FString> ChildrenID
TArray<struct FString> UBP_CharacterRelationsComponent_C::M_GetChildrenID() const {
	return Read<TArray<struct FString>>((byte*)this + 280);
}
TArray<struct FString>* UBP_CharacterRelationsComponent_C::M_PtrGetChildrenID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 280);
}
void UBP_CharacterRelationsComponent_C::M_SetChildrenID(const TArray<struct FString>& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of Children
// Declaration: TArray<class ABP_BaseCharacter_C*> Children
TArray<class ABP_BaseCharacter_C*> UBP_CharacterRelationsComponent_C::M_GetChildren() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 296);
}
TArray<class ABP_BaseCharacter_C*>* UBP_CharacterRelationsComponent_C::M_PtrGetChildren() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 296);
}
void UBP_CharacterRelationsComponent_C::M_SetChildren(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of SiblingsID
// Declaration: TArray<struct FString> SiblingsID
TArray<struct FString> UBP_CharacterRelationsComponent_C::M_GetSiblingsID() const {
	return Read<TArray<struct FString>>((byte*)this + 312);
}
TArray<struct FString>* UBP_CharacterRelationsComponent_C::M_PtrGetSiblingsID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 312);
}
void UBP_CharacterRelationsComponent_C::M_SetSiblingsID(const TArray<struct FString>& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Siblings
// Declaration: TArray<class ABP_BaseCharacter_C*> Siblings
TArray<class ABP_BaseCharacter_C*> UBP_CharacterRelationsComponent_C::M_GetSiblings() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 328);
}
TArray<class ABP_BaseCharacter_C*>* UBP_CharacterRelationsComponent_C::M_PtrGetSiblings() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 328);
}
void UBP_CharacterRelationsComponent_C::M_SetSiblings(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of WorkPlaceID
// Declaration: struct FString WorkPlaceID
struct FString UBP_CharacterRelationsComponent_C::M_GetWorkPlaceID() const {
	return Read<struct FString>((byte*)this + 344);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetWorkPlaceID() {
	return reinterpret_cast<struct FString*>((byte*)this + 344);
}
void UBP_CharacterRelationsComponent_C::M_SetWorkPlaceID(const struct FString& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of WorkPlaceReference
// Declaration: class ABP_MasterBuilding_C* WorkPlaceReference
class ABP_MasterBuilding_C* UBP_CharacterRelationsComponent_C::M_GetWorkPlaceReference() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 360);
}
class ABP_MasterBuilding_C** UBP_CharacterRelationsComponent_C::M_PtrGetWorkPlaceReference() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 360);
}
void UBP_CharacterRelationsComponent_C::M_SetWorkPlaceReference(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of TimeToBirth
// Declaration: int32_t TimeToBirth
int32_t UBP_CharacterRelationsComponent_C::M_GetTimeToBirth() const {
	return Read<int32_t>((byte*)this + 368);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetTimeToBirth() {
	return reinterpret_cast<int32_t*>((byte*)this + 368);
}
void UBP_CharacterRelationsComponent_C::M_SetTimeToBirth(const int32_t& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of Affection
// Declaration: int32_t Affection
int32_t UBP_CharacterRelationsComponent_C::M_GetAffection() const {
	return Read<int32_t>((byte*)this + 372);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetAffection() {
	return reinterpret_cast<int32_t*>((byte*)this + 372);
}
void UBP_CharacterRelationsComponent_C::M_SetAffection(const int32_t& value) {
	Write((byte*)this + 372, value);
}
// Member Getter and Setter of OnPartnerChanged
// Declaration: TAssetPtr<class FOnPartnerChanged__DelegateSignature> OnPartnerChanged
TAssetPtr<class FOnPartnerChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnPartnerChanged() const {
	return Read<TAssetPtr<class FOnPartnerChanged__DelegateSignature>>((byte*)this + 376);
}
TAssetPtr<class FOnPartnerChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnPartnerChanged() {
	return reinterpret_cast<TAssetPtr<class FOnPartnerChanged__DelegateSignature>*>((byte*)this + 376);
}
void UBP_CharacterRelationsComponent_C::M_SetOnPartnerChanged(const TAssetPtr<class FOnPartnerChanged__DelegateSignature>& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of OnChildrenChanged
// Declaration: TAssetPtr<class FOnChildrenChanged__DelegateSignature> OnChildrenChanged
TAssetPtr<class FOnChildrenChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnChildrenChanged() const {
	return Read<TAssetPtr<class FOnChildrenChanged__DelegateSignature>>((byte*)this + 392);
}
TAssetPtr<class FOnChildrenChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnChildrenChanged() {
	return reinterpret_cast<TAssetPtr<class FOnChildrenChanged__DelegateSignature>*>((byte*)this + 392);
}
void UBP_CharacterRelationsComponent_C::M_SetOnChildrenChanged(const TAssetPtr<class FOnChildrenChanged__DelegateSignature>& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of IsPregnant
// Declaration: bool IsPregnant
bool UBP_CharacterRelationsComponent_C::M_GetIsPregnant() const {
	return Read<bool>((byte*)this + 408);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetIsPregnant() {
	return reinterpret_cast<bool*>((byte*)this + 408);
}
void UBP_CharacterRelationsComponent_C::M_SetIsPregnant(const bool& value) {
	Write((byte*)this + 408, value);
}
// Member Getter and Setter of PossibleHusbands
// Declaration: TArray<struct FST_MatchingNPC> PossibleHusbands
TArray<struct FST_MatchingNPC> UBP_CharacterRelationsComponent_C::M_GetPossibleHusbands() const {
	return Read<TArray<struct FST_MatchingNPC>>((byte*)this + 416);
}
TArray<struct FST_MatchingNPC>* UBP_CharacterRelationsComponent_C::M_PtrGetPossibleHusbands() {
	return reinterpret_cast<TArray<struct FST_MatchingNPC>*>((byte*)this + 416);
}
void UBP_CharacterRelationsComponent_C::M_SetPossibleHusbands(const TArray<struct FST_MatchingNPC>& value) {
	Write((byte*)this + 416, value);
}
// Member Getter and Setter of ChanceForBabyBirth
// Declaration: float ChanceForBabyBirth
float UBP_CharacterRelationsComponent_C::M_GetChanceForBabyBirth() const {
	return Read<float>((byte*)this + 432);
}
float* UBP_CharacterRelationsComponent_C::M_PtrGetChanceForBabyBirth() {
	return reinterpret_cast<float*>((byte*)this + 432);
}
void UBP_CharacterRelationsComponent_C::M_SetChanceForBabyBirth(const float& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of InDialogueCharacter
// Declaration: class ACharacter* InDialogueCharacter
class ACharacter* UBP_CharacterRelationsComponent_C::M_GetInDialogueCharacter() const {
	return Read<class ACharacter*>((byte*)this + 440);
}
class ACharacter** UBP_CharacterRelationsComponent_C::M_PtrGetInDialogueCharacter() {
	return reinterpret_cast<class ACharacter**>((byte*)this + 440);
}
void UBP_CharacterRelationsComponent_C::M_SetInDialogueCharacter(const class ACharacter*& value) {
	Write((byte*)this + 440, value);
}
// Member Getter and Setter of ActualDialogue
// Declaration: TAssetPtr<class UDialogue> ActualDialogue
TAssetPtr<class UDialogue> UBP_CharacterRelationsComponent_C::M_GetActualDialogue() const {
	return Read<TAssetPtr<class UDialogue>>((byte*)this + 448);
}
TAssetPtr<class UDialogue>* UBP_CharacterRelationsComponent_C::M_PtrGetActualDialogue() {
	return reinterpret_cast<TAssetPtr<class UDialogue>*>((byte*)this + 448);
}
void UBP_CharacterRelationsComponent_C::M_SetActualDialogue(const TAssetPtr<class UDialogue>& value) {
	Write((byte*)this + 448, value);
}
// Member Getter and Setter of DialoguesLinesStates
// Declaration: TArray<struct FST_DialoguesUsedDialogueLines> DialoguesLinesStates
TArray<struct FST_DialoguesUsedDialogueLines> UBP_CharacterRelationsComponent_C::M_GetDialoguesLinesStates() const {
	return Read<TArray<struct FST_DialoguesUsedDialogueLines>>((byte*)this + 488);
}
TArray<struct FST_DialoguesUsedDialogueLines>* UBP_CharacterRelationsComponent_C::M_PtrGetDialoguesLinesStates() {
	return reinterpret_cast<TArray<struct FST_DialoguesUsedDialogueLines>*>((byte*)this + 488);
}
void UBP_CharacterRelationsComponent_C::M_SetDialoguesLinesStates(const TArray<struct FST_DialoguesUsedDialogueLines>& value) {
	Write((byte*)this + 488, value);
}
// Member Getter and Setter of DialogueAffection
// Declaration: TArray<struct FName> DialogueAffection
TArray<struct FName> UBP_CharacterRelationsComponent_C::M_GetDialogueAffection() const {
	return Read<TArray<struct FName>>((byte*)this + 504);
}
TArray<struct FName>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueAffection() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 504);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueAffection(const TArray<struct FName>& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of DialogueAffectionBuffer
// Declaration: TArray<struct FName> DialogueAffectionBuffer
TArray<struct FName> UBP_CharacterRelationsComponent_C::M_GetDialogueAffectionBuffer() const {
	return Read<TArray<struct FName>>((byte*)this + 520);
}
TArray<struct FName>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueAffectionBuffer() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 520);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueAffectionBuffer(const TArray<struct FName>& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of TalkingCharacter_ID
// Declaration: struct FString TalkingCharacter_ID
struct FString UBP_CharacterRelationsComponent_C::M_GetTalkingCharacter_ID() const {
	return Read<struct FString>((byte*)this + 536);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetTalkingCharacter_ID() {
	return reinterpret_cast<struct FString*>((byte*)this + 536);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkingCharacter_ID(const struct FString& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of TalkChanceAffection
// Declaration: float TalkChanceAffection
float UBP_CharacterRelationsComponent_C::M_GetTalkChanceAffection() const {
	return Read<float>((byte*)this + 552);
}
float* UBP_CharacterRelationsComponent_C::M_PtrGetTalkChanceAffection() {
	return reinterpret_cast<float*>((byte*)this + 552);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkChanceAffection(const float& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SeasonsSinceInteraction
// Declaration: int32_t SeasonsSinceInteraction
int32_t UBP_CharacterRelationsComponent_C::M_GetSeasonsSinceInteraction() const {
	return Read<int32_t>((byte*)this + 556);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetSeasonsSinceInteraction() {
	return reinterpret_cast<int32_t*>((byte*)this + 556);
}
void UBP_CharacterRelationsComponent_C::M_SetSeasonsSinceInteraction(const int32_t& value) {
	Write((byte*)this + 556, value);
}
// Member Getter and Setter of BlockTalking
// Declaration: bool BlockTalking
bool UBP_CharacterRelationsComponent_C::M_GetBlockTalking() const {
	return Read<bool>((byte*)this + 560);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetBlockTalking() {
	return reinterpret_cast<bool*>((byte*)this + 560);
}
void UBP_CharacterRelationsComponent_C::M_SetBlockTalking(const bool& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of UsedAffection
// Declaration: bool UsedAffection
bool UBP_CharacterRelationsComponent_C::M_GetUsedAffection() const {
	return Read<bool>((byte*)this + 561);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetUsedAffection() {
	return reinterpret_cast<bool*>((byte*)this + 561);
}
void UBP_CharacterRelationsComponent_C::M_SetUsedAffection(const bool& value) {
	Write((byte*)this + 561, value);
}
// Member Getter and Setter of WasSpokenTo
// Declaration: bool WasSpokenTo
bool UBP_CharacterRelationsComponent_C::M_GetWasSpokenTo() const {
	return Read<bool>((byte*)this + 562);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetWasSpokenTo() {
	return reinterpret_cast<bool*>((byte*)this + 562);
}
void UBP_CharacterRelationsComponent_C::M_SetWasSpokenTo(const bool& value) {
	Write((byte*)this + 562, value);
}
// Member Getter and Setter of TalkWithNPC
// Declaration: bool TalkWithNPC
bool UBP_CharacterRelationsComponent_C::M_GetTalkWithNPC() const {
	return Read<bool>((byte*)this + 563);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetTalkWithNPC() {
	return reinterpret_cast<bool*>((byte*)this + 563);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkWithNPC(const bool& value) {
	Write((byte*)this + 563, value);
}
// Member Getter and Setter of GiftGiven
// Declaration: bool GiftGiven
bool UBP_CharacterRelationsComponent_C::M_GetGiftGiven() const {
	return Read<bool>((byte*)this + 564);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetGiftGiven() {
	return reinterpret_cast<bool*>((byte*)this + 564);
}
void UBP_CharacterRelationsComponent_C::M_SetGiftGiven(const bool& value) {
	Write((byte*)this + 564, value);
}
// Member Getter and Setter of Smalltalk
// Declaration: bool Smalltalk
bool UBP_CharacterRelationsComponent_C::M_GetSmalltalk() const {
	return Read<bool>((byte*)this + 565);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetSmalltalk() {
	return reinterpret_cast<bool*>((byte*)this + 565);
}
void UBP_CharacterRelationsComponent_C::M_SetSmalltalk(const bool& value) {
	Write((byte*)this + 565, value);
}
// Member Getter and Setter of WifeDayText
// Declaration: bool WifeDayText
bool UBP_CharacterRelationsComponent_C::M_GetWifeDayText() const {
	return Read<bool>((byte*)this + 566);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetWifeDayText() {
	return reinterpret_cast<bool*>((byte*)this + 566);
}
void UBP_CharacterRelationsComponent_C::M_SetWifeDayText(const bool& value) {
	Write((byte*)this + 566, value);
}
// Member Getter and Setter of FirstDialogue
// Declaration: bool FirstDialogue
bool UBP_CharacterRelationsComponent_C::M_GetFirstDialogue() const {
	return Read<bool>((byte*)this + 567);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetFirstDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 567);
}
void UBP_CharacterRelationsComponent_C::M_SetFirstDialogue(const bool& value) {
	Write((byte*)this + 567, value);
}
// Member Getter and Setter of FirstConversations
// Declaration: TMap<TEnumAsByte<EFirstConversations>, bool> FirstConversations
TMap<TEnumAsByte<EFirstConversations>, bool> UBP_CharacterRelationsComponent_C::M_GetFirstConversations() const {
	return Read<TMap<TEnumAsByte<EFirstConversations>, bool>>((byte*)this + 568);
}
TMap<TEnumAsByte<EFirstConversations>, bool>* UBP_CharacterRelationsComponent_C::M_PtrGetFirstConversations() {
	return reinterpret_cast<TMap<TEnumAsByte<EFirstConversations>, bool>*>((byte*)this + 568);
}
void UBP_CharacterRelationsComponent_C::M_SetFirstConversations(const TMap<TEnumAsByte<EFirstConversations>, bool>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of DialogueRumors
// Declaration: TArray<int32_t> DialogueRumors
TArray<int32_t> UBP_CharacterRelationsComponent_C::M_GetDialogueRumors() const {
	return Read<TArray<int32_t>>((byte*)this + 648);
}
TArray<int32_t>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueRumors() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 648);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueRumors(const TArray<int32_t>& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of BaseCharacterReference
// Declaration: class ABP_BaseCharacter_C* BaseCharacterReference
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetBaseCharacterReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 664);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetBaseCharacterReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 664);
}
void UBP_CharacterRelationsComponent_C::M_SetBaseCharacterReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 664, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnPartnerChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnPartnerChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnPartnerChanged__DelegateSignature");

	struct UBP_CharacterRelationsComponent_C_OnPartnerChanged__DelegateSignature_Params {
	};
	UBP_CharacterRelationsComponent_C_OnPartnerChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnChildrenChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnChildrenChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnChildrenChanged__DelegateSignature");

	struct UBP_CharacterRelationsComponent_C_OnChildrenChanged__DelegateSignature_Params {
	};
	UBP_CharacterRelationsComponent_C_OnChildrenChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ExecuteUbergraph_BP_CharacterRelationsComponent
// Flags: Final
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ExecuteUbergraph_BP_CharacterRelationsComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ExecuteUbergraph_BP_CharacterRelationsComponent");

	struct UBP_CharacterRelationsComponent_C_ExecuteUbergraph_BP_CharacterRelationsComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_ExecuteUbergraph_BP_CharacterRelationsComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.InitRelationsComponent
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::InitRelationsComponent(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.InitRelationsComponent");

	struct UBP_CharacterRelationsComponent_C_InitRelationsComponent_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_InitRelationsComponent_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::IncreaseAffection(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection");

	struct UBP_CharacterRelationsComponent_C_IncreaseAffection_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_IncreaseAffection_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Decrease Affection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::Decrease_Affection(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Decrease Affection");

	struct UBP_CharacterRelationsComponent_C_Decrease_Affection_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_Decrease_Affection_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetPartner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Partner	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PartnerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetPartner(class ABP_BaseCharacter_C* Partner, struct FString PartnerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetPartner");

	struct UBP_CharacterRelationsComponent_C_SetPartner_Params {
		class ABP_BaseCharacter_C* Partner;			//Offset: 0 | ElementSize: 8
		struct FString PartnerID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetPartner_Params params;
	params.Partner = Partner;
	params.PartnerID = PartnerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemovePartner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemovePartner() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemovePartner");

	struct UBP_CharacterRelationsComponent_C_RemovePartner_Params {
	};
	UBP_CharacterRelationsComponent_C_RemovePartner_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChild
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Child	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChildID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddChild(class ABP_BaseCharacter_C* Child, struct FString ChildID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChild");

	struct UBP_CharacterRelationsComponent_C_AddChild_Params {
		class ABP_BaseCharacter_C* Child;			//Offset: 0 | ElementSize: 8
		struct FString ChildID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_AddChild_Params params;
	params.Child = Child;
	params.ChildID = ChildID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChild
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Child	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemoveChild(class ABP_BaseCharacter_C* Child) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChild");

	struct UBP_CharacterRelationsComponent_C_RemoveChild_Params {
		class ABP_BaseCharacter_C* Child;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_RemoveChild_Params params;
	params.Child = Child;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetPartner
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Partner	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Partner_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetPartner(class ABP_BaseCharacter_C** Partner, struct FString* Partner_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetPartner");

	struct UBP_CharacterRelationsComponent_C_GetPartner_Params {
		class ABP_BaseCharacter_C* Partner;			//Offset: 0 | ElementSize: 8
		struct FString Partner_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetPartner_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Partner != nullptr)
		*Partner = params.Partner;
	if (Partner_ID != nullptr)
		*Partner_ID = params.Partner_ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetChildren
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Children	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ID	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetChildren(TArray<class ABP_BaseCharacter_C*>* Children, TArray<struct FString>* ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetChildren");

	struct UBP_CharacterRelationsComponent_C_SetChildren_Params {
		TArray<class ABP_BaseCharacter_C*> Children;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> ID;			//Offset: 16 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetChildren_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Children != nullptr)
		*Children = params.Children;
	if (ID != nullptr)
		*ID = params.ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseTimeToBirth
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool UBP_CharacterRelationsComponent_C::DecreaseTimeToBirth() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseTimeToBirth");

	struct UBP_CharacterRelationsComponent_C_DecreaseTimeToBirth_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_DecreaseTimeToBirth_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IsTimeToBirth
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTimeToBirth	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::IsTimeToBirth(bool* IsTimeToBirth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IsTimeToBirth");

	struct UBP_CharacterRelationsComponent_C_IsTimeToBirth_Params {
		bool IsTimeToBirth;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_IsTimeToBirth_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsTimeToBirth != nullptr)
		*IsTimeToBirth = params.IsTimeToBirth;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetMother
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mother	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MotherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetMother(class ABP_BaseCharacter_C* Mother, struct FString MotherID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetMother");

	struct UBP_CharacterRelationsComponent_C_SetMother_Params {
		class ABP_BaseCharacter_C* Mother;			//Offset: 0 | ElementSize: 8
		struct FString MotherID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetMother_Params params;
	params.Mother = Mother;
	params.MotherID = MotherID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetFather
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Father	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FatherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetFather(class ABP_BaseCharacter_C* Father, struct FString FatherID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetFather");

	struct UBP_CharacterRelationsComponent_C_SetFather_Params {
		class ABP_BaseCharacter_C* Father;			//Offset: 0 | ElementSize: 8
		struct FString FatherID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetFather_Params params;
	params.Father = Father;
	params.FatherID = FatherID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RelationsInit
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Father	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mother	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Partner	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Siblings	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Children	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Affection	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RelationsInit(class ABP_BaseCharacter_C* Father, class ABP_BaseCharacter_C* Mother, class ABP_BaseCharacter_C* Partner, TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<class ABP_BaseCharacter_C*>* Children, int32_t Affection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RelationsInit");

	struct UBP_CharacterRelationsComponent_C_RelationsInit_Params {
		class ABP_BaseCharacter_C* Father;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* Mother;			//Offset: 8 | ElementSize: 8
		class ABP_BaseCharacter_C* Partner;			//Offset: 16 | ElementSize: 8
		TArray<class ABP_BaseCharacter_C*> Siblings;			//Offset: 24 | ElementSize: 16
		TArray<class ABP_BaseCharacter_C*> Children;			//Offset: 40 | ElementSize: 16
		int32_t Affection;			//Offset: 56 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_RelationsInit_Params params;
	params.Father = Father;
	params.Mother = Mother;
	params.Partner = Partner;
	params.Affection = Affection;

	UObject::ProcessEvent(fn, &params);
	if (Siblings != nullptr)
		*Siblings = params.Siblings;
	if (Children != nullptr)
		*Children = params.Children;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: House	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AssignHouse(class ABP_MasterBuilding_C* House) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignHouse");

	struct UBP_CharacterRelationsComponent_C_AssignHouse_Params {
		class ABP_MasterBuilding_C* House;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_AssignHouse_Params params;
	params.House = House;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetHouse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: House	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: House_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetHouse");

	struct UBP_CharacterRelationsComponent_C_GetHouse_Params {
		class ABP_MasterBuilding_C* House;			//Offset: 0 | ElementSize: 8
		struct FString House_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetHouse_Params params;

	UObject::ProcessEvent(fn, &params);
	if (House != nullptr)
		*House = params.House;
	if (House_ID != nullptr)
		*House_ID = params.House_ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkPlace	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AssignWorkPlace(class ABP_MasterBuilding_C* WorkPlace) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace");

	struct UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params {
		class ABP_MasterBuilding_C* WorkPlace;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params params;
	params.WorkPlace = WorkPlace;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkPlace	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WokrPlace_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetWorkPlace(class ABP_MasterBuilding_C** WorkPlace, struct FString* WokrPlace_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace");

	struct UBP_CharacterRelationsComponent_C_GetWorkPlace_Params {
		class ABP_MasterBuilding_C* WorkPlace;			//Offset: 0 | ElementSize: 8
		struct FString WokrPlace_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
	if (WokrPlace_ID != nullptr)
		*WokrPlace_ID = params.WokrPlace_ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetRelationsData
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID_Mother	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ID_Father	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ID_Partner	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ID_Siblings	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ID_Children	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetRelationsData(struct FString ID_Mother, struct FString ID_Father, struct FString ID_Partner, TArray<struct FString>* ID_Siblings, TArray<struct FString>* ID_Children) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetRelationsData");

	struct UBP_CharacterRelationsComponent_C_SetRelationsData_Params {
		struct FString ID_Mother;			//Offset: 0 | ElementSize: 16
		struct FString ID_Father;			//Offset: 16 | ElementSize: 16
		struct FString ID_Partner;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> ID_Siblings;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> ID_Children;			//Offset: 64 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetRelationsData_Params params;
	params.ID_Mother = ID_Mother;
	params.ID_Father = ID_Father;
	params.ID_Partner = ID_Partner;

	UObject::ProcessEvent(fn, &params);
	if (ID_Siblings != nullptr)
		*ID_Siblings = params.ID_Siblings;
	if (ID_Children != nullptr)
		*ID_Children = params.ID_Children;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddRelationWithPossiblePartner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddRelationWithPossiblePartner() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddRelationWithPossiblePartner");

	struct UBP_CharacterRelationsComponent_C_AddRelationWithPossiblePartner_Params {
	};
	UBP_CharacterRelationsComponent_C_AddRelationWithPossiblePartner_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChanceForBabyBirth
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddChanceForBabyBirth() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChanceForBabyBirth");

	struct UBP_CharacterRelationsComponent_C_AddChanceForBabyBirth_Params {
	};
	UBP_CharacterRelationsComponent_C_AddChanceForBabyBirth_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildren
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemoveChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildren");

	struct UBP_CharacterRelationsComponent_C_RemoveChildren_Params {
	};
	UBP_CharacterRelationsComponent_C_RemoveChildren_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFamily
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SelfCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckChildrenAffection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Family	Type: TArray<class ABP_BaseCharacter_C*>	Flags: Parm, OutParm
// Name: SomebodyHasPartner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetFamily(class ABP_BaseCharacter_C* SelfCharacter, bool CheckChildrenAffection, TArray<class ABP_BaseCharacter_C*>* Family, bool* SomebodyHasPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFamily");

	struct UBP_CharacterRelationsComponent_C_GetFamily_Params {
		class ABP_BaseCharacter_C* SelfCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckChildrenAffection;			//Offset: 8 | ElementSize: 1
		TArray<class ABP_BaseCharacter_C*> Family;			//Offset: 16 | ElementSize: 16
		bool SomebodyHasPartner;			//Offset: 32 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_GetFamily_Params params;
	params.SelfCharacter = SelfCharacter;
	params.CheckChildrenAffection = CheckChildrenAffection;

	UObject::ProcessEvent(fn, &params);
	if (Family != nullptr)
		*Family = params.Family;
	if (SomebodyHasPartner != nullptr)
		*SomebodyHasPartner = params.SomebodyHasPartner;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFather
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Father	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Father_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetFather(class ABP_BaseCharacter_C** Father, struct FString* Father_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFather");

	struct UBP_CharacterRelationsComponent_C_GetFather_Params {
		class ABP_BaseCharacter_C* Father;			//Offset: 0 | ElementSize: 8
		struct FString Father_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetFather_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Father != nullptr)
		*Father = params.Father;
	if (Father_ID != nullptr)
		*Father_ID = params.Father_ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMother
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mother	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mother_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetMother(class ABP_BaseCharacter_C** Mother, struct FString* Mother_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMother");

	struct UBP_CharacterRelationsComponent_C_GetMother_Params {
		class ABP_BaseCharacter_C* Mother;			//Offset: 0 | ElementSize: 8
		struct FString Mother_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetMother_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mother != nullptr)
		*Mother = params.Mother;
	if (Mother_ID != nullptr)
		*Mother_ID = params.Mother_ID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddSibling
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sibling	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SiblingID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddSibling(class ABP_BaseCharacter_C* Sibling, struct FString SiblingID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddSibling");

	struct UBP_CharacterRelationsComponent_C_AddSibling_Params {
		class ABP_BaseCharacter_C* Sibling;			//Offset: 0 | ElementSize: 8
		struct FString SiblingID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_AddSibling_Params params;
	params.Sibling = Sibling;
	params.SiblingID = SiblingID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSibling
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sibling	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemoveSibling(class ABP_BaseCharacter_C* Sibling) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSibling");

	struct UBP_CharacterRelationsComponent_C_RemoveSibling_Params {
		class ABP_BaseCharacter_C* Sibling;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_RemoveSibling_Params params;
	params.Sibling = Sibling;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetSiblings
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Siblings	Type: TArray<class ABP_BaseCharacter_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SiblingsID	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetSiblings(TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<struct FString>* SiblingsID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetSiblings");

	struct UBP_CharacterRelationsComponent_C_SetSiblings_Params {
		TArray<class ABP_BaseCharacter_C*> Siblings;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> SiblingsID;			//Offset: 16 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetSiblings_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Siblings != nullptr)
		*Siblings = params.Siblings;
	if (SiblingsID != nullptr)
		*SiblingsID = params.SiblingsID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSiblings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemoveSiblings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSiblings");

	struct UBP_CharacterRelationsComponent_C_RemoveSiblings_Params {
	};
	UBP_CharacterRelationsComponent_C_RemoveSiblings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationDecreaseLevel
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Status	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetRelationDecreaseLevel(int32_t* Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationDecreaseLevel");

	struct UBP_CharacterRelationsComponent_C_GetRelationDecreaseLevel_Params {
		int32_t Status;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_GetRelationDecreaseLevel_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Status != nullptr)
		*Status = params.Status;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ClearFamilyRelations
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ClearFamilyRelations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ClearFamilyRelations");

	struct UBP_CharacterRelationsComponent_C_ClearFamilyRelations_Params {
	};
	UBP_CharacterRelationsComponent_C_ClearFamilyRelations_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionDialogue
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetAffectionDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionDialogue");

	struct UBP_CharacterRelationsComponent_C_ResetAffectionDialogue_Params {
	};
	UBP_CharacterRelationsComponent_C_ResetAffectionDialogue_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::DecreaseAffectionDialogueChance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance");

	struct UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params {
	};
	UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddDialogueLinesState
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DialogueReference	Type: class UDialogue*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddDialogueLinesState(class UDialogue* DialogueReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddDialogueLinesState");

	struct UBP_CharacterRelationsComponent_C_AddDialogueLinesState_Params {
		class UDialogue* DialogueReference;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_AddDialogueLinesState_Params params;
	params.DialogueReference = DialogueReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetDialogueParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters");

	struct UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params {
	};
	UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AffectionChanges
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AffectionChanges() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AffectionChanges");

	struct UBP_CharacterRelationsComponent_C_AffectionChanges_Params {
	};
	UBP_CharacterRelationsComponent_C_AffectionChanges_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongAncestors
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::FindPlayerAmongAncestors(bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongAncestors");

	struct UBP_CharacterRelationsComponent_C_FindPlayerAmongAncestors_Params {
		bool Find;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_FindPlayerAmongAncestors_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.WasAnyChildJustBorn
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::WasAnyChildJustBorn(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.WasAnyChildJustBorn");

	struct UBP_CharacterRelationsComponent_C_WasAnyChildJustBorn_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_WasAnyChildJustBorn_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.WasHeirHairCutToggled
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::WasHeirHairCutToggled(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.WasHeirHairCutToggled");

	struct UBP_CharacterRelationsComponent_C_WasHeirHairCutToggled_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_WasHeirHairCutToggled_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMaleHeirs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heirs	Type: TArray<class ABP_BaseCharacter_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetMaleHeirs(TArray<class ABP_BaseCharacter_C*>* Heirs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMaleHeirs");

	struct UBP_CharacterRelationsComponent_C_GetMaleHeirs_Params {
		TArray<class ABP_BaseCharacter_C*> Heirs;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetMaleHeirs_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Heirs != nullptr)
		*Heirs = params.Heirs;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationsData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MotherID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: FatherID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: PartnerID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: SiblingsIDs	Type: TArray<struct FString>	Flags: Parm, OutParm
// Name: ChildrenIDs	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetRelationsData(struct FString* MotherID, struct FString* FatherID, struct FString* PartnerID, TArray<struct FString>* SiblingsIDs, TArray<struct FString>* ChildrenIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationsData");

	struct UBP_CharacterRelationsComponent_C_GetRelationsData_Params {
		struct FString MotherID;			//Offset: 0 | ElementSize: 16
		struct FString FatherID;			//Offset: 16 | ElementSize: 16
		struct FString PartnerID;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> SiblingsIDs;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> ChildrenIDs;			//Offset: 64 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetRelationsData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MotherID != nullptr)
		*MotherID = params.MotherID;
	if (FatherID != nullptr)
		*FatherID = params.FatherID;
	if (PartnerID != nullptr)
		*PartnerID = params.PartnerID;
	if (SiblingsIDs != nullptr)
		*SiblingsIDs = params.SiblingsIDs;
	if (ChildrenIDs != nullptr)
		*ChildrenIDs = params.ChildrenIDs;
}

#pragma endregion
}