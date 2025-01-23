#include "../SDK.h"
#include "BP_CharacterRelationsComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_CharacterRelationsComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 256);
}
struct FPointerToUberGraphFrame* UBP_CharacterRelationsComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 256);
}
void UBP_CharacterRelationsComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of HouseID
// Declaration: struct FString HouseID
struct FString UBP_CharacterRelationsComponent_C::M_GetHouseID() const {
	return Read<struct FString>((byte*)this + 264);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetHouseID() {
	return reinterpret_cast<struct FString*>((byte*)this + 264);
}
void UBP_CharacterRelationsComponent_C::M_SetHouseID(const struct FString& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of HouseReference
// Declaration: class ABP_MasterBuilding_C* HouseReference
class ABP_MasterBuilding_C* UBP_CharacterRelationsComponent_C::M_GetHouseReference() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 280);
}
class ABP_MasterBuilding_C** UBP_CharacterRelationsComponent_C::M_PtrGetHouseReference() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 280);
}
void UBP_CharacterRelationsComponent_C::M_SetHouseReference(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of PartnerID
// Declaration: struct FString PartnerID
struct FString UBP_CharacterRelationsComponent_C::M_GetPartnerID() const {
	return Read<struct FString>((byte*)this + 288);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetPartnerID() {
	return reinterpret_cast<struct FString*>((byte*)this + 288);
}
void UBP_CharacterRelationsComponent_C::M_SetPartnerID(const struct FString& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of Partner
// Declaration: class ABP_BaseCharacter_C* Partner
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetPartner() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 304);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetPartner() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 304);
}
void UBP_CharacterRelationsComponent_C::M_SetPartner(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of MotherID
// Declaration: struct FString MotherID
struct FString UBP_CharacterRelationsComponent_C::M_GetMotherID() const {
	return Read<struct FString>((byte*)this + 312);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetMotherID() {
	return reinterpret_cast<struct FString*>((byte*)this + 312);
}
void UBP_CharacterRelationsComponent_C::M_SetMotherID(const struct FString& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Mother
// Declaration: class ABP_BaseCharacter_C* Mother
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetMother() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 328);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetMother() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 328);
}
void UBP_CharacterRelationsComponent_C::M_SetMother(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of FatherID
// Declaration: struct FString FatherID
struct FString UBP_CharacterRelationsComponent_C::M_GetFatherID() const {
	return Read<struct FString>((byte*)this + 336);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetFatherID() {
	return reinterpret_cast<struct FString*>((byte*)this + 336);
}
void UBP_CharacterRelationsComponent_C::M_SetFatherID(const struct FString& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of Father
// Declaration: class ABP_BaseCharacter_C* Father
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetFather() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 352);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetFather() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 352);
}
void UBP_CharacterRelationsComponent_C::M_SetFather(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of ChildrenID
// Declaration: TArray<struct FString> ChildrenID
TArray<struct FString> UBP_CharacterRelationsComponent_C::M_GetChildrenID() const {
	return Read<TArray<struct FString>>((byte*)this + 360);
}
TArray<struct FString>* UBP_CharacterRelationsComponent_C::M_PtrGetChildrenID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 360);
}
void UBP_CharacterRelationsComponent_C::M_SetChildrenID(const TArray<struct FString>& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of Children
// Declaration: TArray<class ABP_BaseCharacter_C*> Children
TArray<class ABP_BaseCharacter_C*> UBP_CharacterRelationsComponent_C::M_GetChildren() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 376);
}
TArray<class ABP_BaseCharacter_C*>* UBP_CharacterRelationsComponent_C::M_PtrGetChildren() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 376);
}
void UBP_CharacterRelationsComponent_C::M_SetChildren(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of SiblingsID
// Declaration: TArray<struct FString> SiblingsID
TArray<struct FString> UBP_CharacterRelationsComponent_C::M_GetSiblingsID() const {
	return Read<TArray<struct FString>>((byte*)this + 392);
}
TArray<struct FString>* UBP_CharacterRelationsComponent_C::M_PtrGetSiblingsID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 392);
}
void UBP_CharacterRelationsComponent_C::M_SetSiblingsID(const TArray<struct FString>& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of Siblings
// Declaration: TArray<class ABP_BaseCharacter_C*> Siblings
TArray<class ABP_BaseCharacter_C*> UBP_CharacterRelationsComponent_C::M_GetSiblings() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 408);
}
TArray<class ABP_BaseCharacter_C*>* UBP_CharacterRelationsComponent_C::M_PtrGetSiblings() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 408);
}
void UBP_CharacterRelationsComponent_C::M_SetSiblings(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 408, value);
}
// Member Getter and Setter of WorkPlaceID
// Declaration: struct FString WorkPlaceID
struct FString UBP_CharacterRelationsComponent_C::M_GetWorkPlaceID() const {
	return Read<struct FString>((byte*)this + 424);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetWorkPlaceID() {
	return reinterpret_cast<struct FString*>((byte*)this + 424);
}
void UBP_CharacterRelationsComponent_C::M_SetWorkPlaceID(const struct FString& value) {
	Write((byte*)this + 424, value);
}
// Member Getter and Setter of WorkPlaceReference
// Declaration: class ABP_MasterBuilding_C* WorkPlaceReference
class ABP_MasterBuilding_C* UBP_CharacterRelationsComponent_C::M_GetWorkPlaceReference() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 440);
}
class ABP_MasterBuilding_C** UBP_CharacterRelationsComponent_C::M_PtrGetWorkPlaceReference() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 440);
}
void UBP_CharacterRelationsComponent_C::M_SetWorkPlaceReference(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 440, value);
}
// Member Getter and Setter of TimeToBirth
// Declaration: int32_t TimeToBirth
int32_t UBP_CharacterRelationsComponent_C::M_GetTimeToBirth() const {
	return Read<int32_t>((byte*)this + 448);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetTimeToBirth() {
	return reinterpret_cast<int32_t*>((byte*)this + 448);
}
void UBP_CharacterRelationsComponent_C::M_SetTimeToBirth(const int32_t& value) {
	Write((byte*)this + 448, value);
}
// Member Getter and Setter of Affection
// Declaration: int32_t Affection
int32_t UBP_CharacterRelationsComponent_C::M_GetAffection() const {
	return Read<int32_t>((byte*)this + 452);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetAffection() {
	return reinterpret_cast<int32_t*>((byte*)this + 452);
}
void UBP_CharacterRelationsComponent_C::M_SetAffection(const int32_t& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of OnPartnerChanged
// Declaration: TAssetPtr<class FOnPartnerChanged__DelegateSignature> OnPartnerChanged
TAssetPtr<class FOnPartnerChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnPartnerChanged() const {
	return Read<TAssetPtr<class FOnPartnerChanged__DelegateSignature>>((byte*)this + 456);
}
TAssetPtr<class FOnPartnerChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnPartnerChanged() {
	return reinterpret_cast<TAssetPtr<class FOnPartnerChanged__DelegateSignature>*>((byte*)this + 456);
}
void UBP_CharacterRelationsComponent_C::M_SetOnPartnerChanged(const TAssetPtr<class FOnPartnerChanged__DelegateSignature>& value) {
	Write((byte*)this + 456, value);
}
// Member Getter and Setter of OnChildrenChanged
// Declaration: TAssetPtr<class FOnChildrenChanged__DelegateSignature> OnChildrenChanged
TAssetPtr<class FOnChildrenChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnChildrenChanged() const {
	return Read<TAssetPtr<class FOnChildrenChanged__DelegateSignature>>((byte*)this + 472);
}
TAssetPtr<class FOnChildrenChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnChildrenChanged() {
	return reinterpret_cast<TAssetPtr<class FOnChildrenChanged__DelegateSignature>*>((byte*)this + 472);
}
void UBP_CharacterRelationsComponent_C::M_SetOnChildrenChanged(const TAssetPtr<class FOnChildrenChanged__DelegateSignature>& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of IsPregnant
// Declaration: bool IsPregnant
bool UBP_CharacterRelationsComponent_C::M_GetIsPregnant() const {
	return Read<bool>((byte*)this + 488);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetIsPregnant() {
	return reinterpret_cast<bool*>((byte*)this + 488);
}
void UBP_CharacterRelationsComponent_C::M_SetIsPregnant(const bool& value) {
	Write((byte*)this + 488, value);
}
// Member Getter and Setter of PossibleHusbands
// Declaration: TArray<struct FST_MatchingNPC> PossibleHusbands
TArray<struct FST_MatchingNPC> UBP_CharacterRelationsComponent_C::M_GetPossibleHusbands() const {
	return Read<TArray<struct FST_MatchingNPC>>((byte*)this + 496);
}
TArray<struct FST_MatchingNPC>* UBP_CharacterRelationsComponent_C::M_PtrGetPossibleHusbands() {
	return reinterpret_cast<TArray<struct FST_MatchingNPC>*>((byte*)this + 496);
}
void UBP_CharacterRelationsComponent_C::M_SetPossibleHusbands(const TArray<struct FST_MatchingNPC>& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of ChanceForBabyBirth
// Declaration: float ChanceForBabyBirth
float UBP_CharacterRelationsComponent_C::M_GetChanceForBabyBirth() const {
	return Read<float>((byte*)this + 512);
}
float* UBP_CharacterRelationsComponent_C::M_PtrGetChanceForBabyBirth() {
	return reinterpret_cast<float*>((byte*)this + 512);
}
void UBP_CharacterRelationsComponent_C::M_SetChanceForBabyBirth(const float& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of InDialogueCharacter
// Declaration: class ACharacter* InDialogueCharacter
class ACharacter* UBP_CharacterRelationsComponent_C::M_GetInDialogueCharacter() const {
	return Read<class ACharacter*>((byte*)this + 520);
}
class ACharacter** UBP_CharacterRelationsComponent_C::M_PtrGetInDialogueCharacter() {
	return reinterpret_cast<class ACharacter**>((byte*)this + 520);
}
void UBP_CharacterRelationsComponent_C::M_SetInDialogueCharacter(const class ACharacter*& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of ActualDialogue
// Declaration: TAssetPtr<class UDialogue> ActualDialogue
TAssetPtr<class UDialogue> UBP_CharacterRelationsComponent_C::M_GetActualDialogue() const {
	return Read<TAssetPtr<class UDialogue>>((byte*)this + 528);
}
TAssetPtr<class UDialogue>* UBP_CharacterRelationsComponent_C::M_PtrGetActualDialogue() {
	return reinterpret_cast<TAssetPtr<class UDialogue>*>((byte*)this + 528);
}
void UBP_CharacterRelationsComponent_C::M_SetActualDialogue(const TAssetPtr<class UDialogue>& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of DialoguesLinesStates
// Declaration: TArray<struct FST_DialoguesUsedDialogueLines> DialoguesLinesStates
TArray<struct FST_DialoguesUsedDialogueLines> UBP_CharacterRelationsComponent_C::M_GetDialoguesLinesStates() const {
	return Read<TArray<struct FST_DialoguesUsedDialogueLines>>((byte*)this + 568);
}
TArray<struct FST_DialoguesUsedDialogueLines>* UBP_CharacterRelationsComponent_C::M_PtrGetDialoguesLinesStates() {
	return reinterpret_cast<TArray<struct FST_DialoguesUsedDialogueLines>*>((byte*)this + 568);
}
void UBP_CharacterRelationsComponent_C::M_SetDialoguesLinesStates(const TArray<struct FST_DialoguesUsedDialogueLines>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of DialogueAffection
// Declaration: TArray<struct FName> DialogueAffection
TArray<struct FName> UBP_CharacterRelationsComponent_C::M_GetDialogueAffection() const {
	return Read<TArray<struct FName>>((byte*)this + 584);
}
TArray<struct FName>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueAffection() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 584);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueAffection(const TArray<struct FName>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of DialogueAffectionBuffer
// Declaration: TArray<struct FName> DialogueAffectionBuffer
TArray<struct FName> UBP_CharacterRelationsComponent_C::M_GetDialogueAffectionBuffer() const {
	return Read<TArray<struct FName>>((byte*)this + 600);
}
TArray<struct FName>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueAffectionBuffer() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 600);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueAffectionBuffer(const TArray<struct FName>& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of TalkingCharacter_ID
// Declaration: struct FString TalkingCharacter_ID
struct FString UBP_CharacterRelationsComponent_C::M_GetTalkingCharacter_ID() const {
	return Read<struct FString>((byte*)this + 616);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetTalkingCharacter_ID() {
	return reinterpret_cast<struct FString*>((byte*)this + 616);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkingCharacter_ID(const struct FString& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of TalkChanceAffection
// Declaration: float TalkChanceAffection
float UBP_CharacterRelationsComponent_C::M_GetTalkChanceAffection() const {
	return Read<float>((byte*)this + 632);
}
float* UBP_CharacterRelationsComponent_C::M_PtrGetTalkChanceAffection() {
	return reinterpret_cast<float*>((byte*)this + 632);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkChanceAffection(const float& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of SeasonsSinceInteraction
// Declaration: int32_t SeasonsSinceInteraction
int32_t UBP_CharacterRelationsComponent_C::M_GetSeasonsSinceInteraction() const {
	return Read<int32_t>((byte*)this + 636);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetSeasonsSinceInteraction() {
	return reinterpret_cast<int32_t*>((byte*)this + 636);
}
void UBP_CharacterRelationsComponent_C::M_SetSeasonsSinceInteraction(const int32_t& value) {
	Write((byte*)this + 636, value);
}
// Member Getter and Setter of BlockTalking
// Declaration: bool BlockTalking
bool UBP_CharacterRelationsComponent_C::M_GetBlockTalking() const {
	return Read<bool>((byte*)this + 640);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetBlockTalking() {
	return reinterpret_cast<bool*>((byte*)this + 640);
}
void UBP_CharacterRelationsComponent_C::M_SetBlockTalking(const bool& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of UsedAffection
// Declaration: bool UsedAffection
bool UBP_CharacterRelationsComponent_C::M_GetUsedAffection() const {
	return Read<bool>((byte*)this + 641);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetUsedAffection() {
	return reinterpret_cast<bool*>((byte*)this + 641);
}
void UBP_CharacterRelationsComponent_C::M_SetUsedAffection(const bool& value) {
	Write((byte*)this + 641, value);
}
// Member Getter and Setter of WasSpokenTo
// Declaration: bool WasSpokenTo
bool UBP_CharacterRelationsComponent_C::M_GetWasSpokenTo() const {
	return Read<bool>((byte*)this + 642);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetWasSpokenTo() {
	return reinterpret_cast<bool*>((byte*)this + 642);
}
void UBP_CharacterRelationsComponent_C::M_SetWasSpokenTo(const bool& value) {
	Write((byte*)this + 642, value);
}
// Member Getter and Setter of TalkWithNPC
// Declaration: bool TalkWithNPC
bool UBP_CharacterRelationsComponent_C::M_GetTalkWithNPC() const {
	return Read<bool>((byte*)this + 643);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetTalkWithNPC() {
	return reinterpret_cast<bool*>((byte*)this + 643);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkWithNPC(const bool& value) {
	Write((byte*)this + 643, value);
}
// Member Getter and Setter of GiftGiven
// Declaration: bool GiftGiven
bool UBP_CharacterRelationsComponent_C::M_GetGiftGiven() const {
	return Read<bool>((byte*)this + 644);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetGiftGiven() {
	return reinterpret_cast<bool*>((byte*)this + 644);
}
void UBP_CharacterRelationsComponent_C::M_SetGiftGiven(const bool& value) {
	Write((byte*)this + 644, value);
}
// Member Getter and Setter of Smalltalk
// Declaration: bool Smalltalk
bool UBP_CharacterRelationsComponent_C::M_GetSmalltalk() const {
	return Read<bool>((byte*)this + 645);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetSmalltalk() {
	return reinterpret_cast<bool*>((byte*)this + 645);
}
void UBP_CharacterRelationsComponent_C::M_SetSmalltalk(const bool& value) {
	Write((byte*)this + 645, value);
}
// Member Getter and Setter of WifeDayText
// Declaration: bool WifeDayText
bool UBP_CharacterRelationsComponent_C::M_GetWifeDayText() const {
	return Read<bool>((byte*)this + 646);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetWifeDayText() {
	return reinterpret_cast<bool*>((byte*)this + 646);
}
void UBP_CharacterRelationsComponent_C::M_SetWifeDayText(const bool& value) {
	Write((byte*)this + 646, value);
}
// Member Getter and Setter of FirstDialogue
// Declaration: bool FirstDialogue
bool UBP_CharacterRelationsComponent_C::M_GetFirstDialogue() const {
	return Read<bool>((byte*)this + 647);
}
bool* UBP_CharacterRelationsComponent_C::M_PtrGetFirstDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 647);
}
void UBP_CharacterRelationsComponent_C::M_SetFirstDialogue(const bool& value) {
	Write((byte*)this + 647, value);
}
// Member Getter and Setter of DialogueRumors
// Declaration: TArray<int32_t> DialogueRumors
TArray<int32_t> UBP_CharacterRelationsComponent_C::M_GetDialogueRumors() const {
	return Read<TArray<int32_t>>((byte*)this + 728);
}
TArray<int32_t>* UBP_CharacterRelationsComponent_C::M_PtrGetDialogueRumors() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 728);
}
void UBP_CharacterRelationsComponent_C::M_SetDialogueRumors(const TArray<int32_t>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of BaseCharacterReference
// Declaration: class ABP_BaseCharacter_C* BaseCharacterReference
class ABP_BaseCharacter_C* UBP_CharacterRelationsComponent_C::M_GetBaseCharacterReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 744);
}
class ABP_BaseCharacter_C** UBP_CharacterRelationsComponent_C::M_PtrGetBaseCharacterReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 744);
}
void UBP_CharacterRelationsComponent_C::M_SetBaseCharacterReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of PlayersInDialogue
// Declaration: TArray<class ABP_PlayerCharacter_C*> PlayersInDialogue
TArray<class ABP_PlayerCharacter_C*> UBP_CharacterRelationsComponent_C::M_GetPlayersInDialogue() const {
	return Read<TArray<class ABP_PlayerCharacter_C*>>((byte*)this + 752);
}
TArray<class ABP_PlayerCharacter_C*>* UBP_CharacterRelationsComponent_C::M_PtrGetPlayersInDialogue() {
	return reinterpret_cast<TArray<class ABP_PlayerCharacter_C*>*>((byte*)this + 752);
}
void UBP_CharacterRelationsComponent_C::M_SetPlayersInDialogue(const TArray<class ABP_PlayerCharacter_C*>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of HighlightedDialogue
// Declaration: int32_t HighlightedDialogue
int32_t UBP_CharacterRelationsComponent_C::M_GetHighlightedDialogue() const {
	return Read<int32_t>((byte*)this + 768);
}
int32_t* UBP_CharacterRelationsComponent_C::M_PtrGetHighlightedDialogue() {
	return reinterpret_cast<int32_t*>((byte*)this + 768);
}
void UBP_CharacterRelationsComponent_C::M_SetHighlightedDialogue(const int32_t& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of InteractedPlayersNetIDs
// Declaration: TArray<struct FString> InteractedPlayersNetIDs
TArray<struct FString> UBP_CharacterRelationsComponent_C::M_GetInteractedPlayersNetIDs() const {
	return Read<TArray<struct FString>>((byte*)this + 776);
}
TArray<struct FString>* UBP_CharacterRelationsComponent_C::M_PtrGetInteractedPlayersNetIDs() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 776);
}
void UBP_CharacterRelationsComponent_C::M_SetInteractedPlayersNetIDs(const TArray<struct FString>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of Affections_Coop
// Declaration: TArray<int32_t> Affections_Coop
TArray<int32_t> UBP_CharacterRelationsComponent_C::M_GetAffections_Coop() const {
	return Read<TArray<int32_t>>((byte*)this + 792);
}
TArray<int32_t>* UBP_CharacterRelationsComponent_C::M_PtrGetAffections_Coop() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 792);
}
void UBP_CharacterRelationsComponent_C::M_SetAffections_Coop(const TArray<int32_t>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of Smalltalks_Coop
// Declaration: TArray<bool> Smalltalks_Coop
TArray<bool> UBP_CharacterRelationsComponent_C::M_GetSmalltalks_Coop() const {
	return Read<TArray<bool>>((byte*)this + 808);
}
TArray<bool>* UBP_CharacterRelationsComponent_C::M_PtrGetSmalltalks_Coop() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 808);
}
void UBP_CharacterRelationsComponent_C::M_SetSmalltalks_Coop(const TArray<bool>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of TalkChanceAffections_Coop
// Declaration: TArray<float> TalkChanceAffections_Coop
TArray<float> UBP_CharacterRelationsComponent_C::M_GetTalkChanceAffections_Coop() const {
	return Read<TArray<float>>((byte*)this + 824);
}
TArray<float>* UBP_CharacterRelationsComponent_C::M_PtrGetTalkChanceAffections_Coop() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 824);
}
void UBP_CharacterRelationsComponent_C::M_SetTalkChanceAffections_Coop(const TArray<float>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of OfflinePlayerId
// Declaration: struct FString OfflinePlayerId
struct FString UBP_CharacterRelationsComponent_C::M_GetOfflinePlayerId() const {
	return Read<struct FString>((byte*)this + 840);
}
struct FString* UBP_CharacterRelationsComponent_C::M_PtrGetOfflinePlayerId() {
	return reinterpret_cast<struct FString*>((byte*)this + 840);
}
void UBP_CharacterRelationsComponent_C::M_SetOfflinePlayerId(const struct FString& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of GiftsGiven_Coop
// Declaration: TArray<bool> GiftsGiven_Coop
TArray<bool> UBP_CharacterRelationsComponent_C::M_GetGiftsGiven_Coop() const {
	return Read<TArray<bool>>((byte*)this + 856);
}
TArray<bool>* UBP_CharacterRelationsComponent_C::M_PtrGetGiftsGiven_Coop() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 856);
}
void UBP_CharacterRelationsComponent_C::M_SetGiftsGiven_Coop(const TArray<bool>& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of OnIsPregnantChanged
// Declaration: TAssetPtr<class FOnIsPregnantChanged__DelegateSignature> OnIsPregnantChanged
TAssetPtr<class FOnIsPregnantChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnIsPregnantChanged() const {
	return Read<TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>>((byte*)this + 872);
}
TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnIsPregnantChanged() {
	return reinterpret_cast<TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>*>((byte*)this + 872);
}
void UBP_CharacterRelationsComponent_C::M_SetOnIsPregnantChanged(const TAssetPtr<class FOnIsPregnantChanged__DelegateSignature>& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of OnTimeToBirthChanged
// Declaration: TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature> OnTimeToBirthChanged
TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature> UBP_CharacterRelationsComponent_C::M_GetOnTimeToBirthChanged() const {
	return Read<TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>>((byte*)this + 888);
}
TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>* UBP_CharacterRelationsComponent_C::M_PtrGetOnTimeToBirthChanged() {
	return reinterpret_cast<TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>*>((byte*)this + 888);
}
void UBP_CharacterRelationsComponent_C::M_SetOnTimeToBirthChanged(const TAssetPtr<class FOnTimeToBirthChanged__DelegateSignature>& value) {
	Write((byte*)this + 888, value);
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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnIsPregnantChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPregnant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnIsPregnantChanged__DelegateSignature(bool IsPregnant) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnIsPregnantChanged__DelegateSignature");

	struct UBP_CharacterRelationsComponent_C_OnIsPregnantChanged__DelegateSignature_Params {
		bool IsPregnant;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_OnIsPregnantChanged__DelegateSignature_Params params;
	params.IsPregnant = IsPregnant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnTimeToBirthChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeToBirth	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnTimeToBirthChanged__DelegateSignature(int32_t TimeToBirth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnTimeToBirthChanged__DelegateSignature");

	struct UBP_CharacterRelationsComponent_C_OnTimeToBirthChanged__DelegateSignature_Params {
		int32_t TimeToBirth;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_OnTimeToBirthChanged__DelegateSignature_Params params;
	params.TimeToBirth = TimeToBirth;

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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_CurrentWorkPlaceID
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_CurrentWorkPlaceID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_CurrentWorkPlaceID");

	struct UBP_CharacterRelationsComponent_C_OnRep_CurrentWorkPlaceID_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_CurrentWorkPlaceID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_CurrentHouseID
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_CurrentHouseID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_CurrentHouseID");

	struct UBP_CharacterRelationsComponent_C_OnRep_CurrentHouseID_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_CurrentHouseID_Params params;

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
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerNetID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::IncreaseAffection(int32_t Value, const struct FString& PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection");

	struct UBP_CharacterRelationsComponent_C_IncreaseAffection_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
		struct FString PlayerNetID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_IncreaseAffection_Params params;
	params.Value = Value;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Decrease Affection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerNetID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::Decrease_Affection(int32_t Value, const struct FString& PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Decrease Affection");

	struct UBP_CharacterRelationsComponent_C_Decrease_Affection_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
		struct FString PlayerNetID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_Decrease_Affection_Params params;
	params.Value = Value;
	params.PlayerNetID = PlayerNetID;

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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildByID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RemoveChildByID(struct FString ChildID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildByID");

	struct UBP_CharacterRelationsComponent_C_RemoveChildByID_Params {
		struct FString ChildID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_RemoveChildByID_Params params;
	params.ChildID = ChildID;

	UObject::ProcessEvent(fn, &params);
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
// Name: Workplace	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AssignWorkPlace(class ABP_MasterBuilding_C* Workplace) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace");

	struct UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params {
		class ABP_MasterBuilding_C* Workplace;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params params;
	params.Workplace = Workplace;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Workplace	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WokrPlace_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetWorkPlace(class ABP_MasterBuilding_C** Workplace, struct FString* WokrPlace_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace");

	struct UBP_CharacterRelationsComponent_C_GetWorkPlace_Params {
		class ABP_MasterBuilding_C* Workplace;			//Offset: 0 | ElementSize: 8
		struct FString WokrPlace_ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_GetWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Workplace != nullptr)
		*Workplace = params.Workplace;
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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetBasicDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BasicDialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetBasicDialogue(struct FString ID, TEnumAsByte<E_Sex> sex, TAssetPtr<class UDialogue>* BasicDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetBasicDialogue");

	struct UBP_CharacterRelationsComponent_C_GetBasicDialogue_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Sex> sex;			//Offset: 16 | ElementSize: 1
		TAssetPtr<class UDialogue> BasicDialogue;			//Offset: 24 | ElementSize: 40
	};
	UBP_CharacterRelationsComponent_C_GetBasicDialogue_Params params;
	params.ID = ID;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
	if (BasicDialogue != nullptr)
		*BasicDialogue = params.BasicDialogue;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetActualDialogue
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ActualDialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetActualDialogue(TAssetPtr<class UDialogue>* ActualDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetActualDialogue");

	struct UBP_CharacterRelationsComponent_C_GetActualDialogue_Params {
		TAssetPtr<class UDialogue> ActualDialogue;			//Offset: 0 | ElementSize: 40
	};
	UBP_CharacterRelationsComponent_C_GetActualDialogue_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActualDialogue != nullptr)
		*ActualDialogue = params.ActualDialogue;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetActualDialogue
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActualDialogue	Type: TAssetPtr<class UDialogue>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetActualDialogue(TAssetPtr<class UDialogue> ActualDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetActualDialogue");

	struct UBP_CharacterRelationsComponent_C_SetActualDialogue_Params {
		TAssetPtr<class UDialogue> ActualDialogue;			//Offset: 0 | ElementSize: 40
	};
	UBP_CharacterRelationsComponent_C_SetActualDialogue_Params params;
	params.ActualDialogue = ActualDialogue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetActualDialogue
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResetToBasic	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetActualDialogue(bool ResetToBasic, struct FString ID, TEnumAsByte<E_Sex> sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetActualDialogue");

	struct UBP_CharacterRelationsComponent_C_ResetActualDialogue_Params {
		bool ResetToBasic;			//Offset: 0 | ElementSize: 1
		struct FString ID;			//Offset: 8 | ElementSize: 16
		TEnumAsByte<E_Sex> sex;			//Offset: 24 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_ResetActualDialogue_Params params;
	params.ResetToBasic = ResetToBasic;
	params.ID = ID;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckSpecialBasicDialogue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: BasicDialogue	Type: TAssetPtr<class UDialogue>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::CheckSpecialBasicDialogue(struct FString ID, TAssetPtr<class UDialogue>* BasicDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckSpecialBasicDialogue");

	struct UBP_CharacterRelationsComponent_C_CheckSpecialBasicDialogue_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		TAssetPtr<class UDialogue> BasicDialogue;			//Offset: 16 | ElementSize: 40
	};
	UBP_CharacterRelationsComponent_C_CheckSpecialBasicDialogue_Params params;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
	if (BasicDialogue != nullptr)
		*BasicDialogue = params.BasicDialogue;
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
// Name: SetToZero	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::DecreaseAffectionDialogueChance(bool SetToZero, struct FString PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance");

	struct UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params {
		bool SetToZero;			//Offset: 0 | ElementSize: 1
		struct FString PlayerNetID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params params;
	params.SetToZero = SetToZero;
	params.PlayerNetID = PlayerNetID;

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
// Name: ResetToBasicActualDialogue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetDialogueParameters(bool ResetToBasicActualDialogue, struct FString ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters");

	struct UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params {
		bool ResetToBasicActualDialogue;			//Offset: 0 | ElementSize: 1
		struct FString ID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params params;
	params.ResetToBasicActualDialogue = ResetToBasicActualDialogue;
	params.ID = ID;

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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsPartner
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PartnerID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::CheckIfPlayerIsPartner(struct FString CheckPlayerID, bool* Success, struct FString* PartnerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsPartner");

	struct UBP_CharacterRelationsComponent_C_CheckIfPlayerIsPartner_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		struct FString PartnerID;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_CheckIfPlayerIsPartner_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (PartnerID != nullptr)
		*PartnerID = params.PartnerID;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsMother
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::CheckIfPlayerIsMother(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsMother");

	struct UBP_CharacterRelationsComponent_C_CheckIfPlayerIsMother_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		struct FString PlayerId;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_CheckIfPlayerIsMother_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsFather
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::CheckIfPlayerIsFather(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsFather");

	struct UBP_CharacterRelationsComponent_C_CheckIfPlayerIsFather_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		struct FString PlayerId;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_CheckIfPlayerIsFather_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsSibling
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::CheckIfPlayerIsSibling(struct FString CheckPlayerID, bool* Success, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.CheckIfPlayerIsSibling");

	struct UBP_CharacterRelationsComponent_C_CheckIfPlayerIsSibling_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		struct FString PlayerId;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_CheckIfPlayerIsSibling_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongAncestors
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Relation	Type: EBondsType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::FindPlayerAmongAncestors(struct FString CheckPlayerID, bool* found, EBondsType* Relation, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongAncestors");

	struct UBP_CharacterRelationsComponent_C_FindPlayerAmongAncestors_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool found;			//Offset: 16 | ElementSize: 1
		EBondsType Relation;			//Offset: 17 | ElementSize: 1
		struct FString PlayerId;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_FindPlayerAmongAncestors_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (Relation != nullptr)
		*Relation = params.Relation;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
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
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongDescendants
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OnlyFirstBloodline	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Relation	Type: EBondsType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::FindPlayerAmongDescendants(bool OnlyFirstBloodline, struct FString CheckPlayerID, bool* found, EBondsType* Relation, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongDescendants");

	struct UBP_CharacterRelationsComponent_C_FindPlayerAmongDescendants_Params {
		bool OnlyFirstBloodline;			//Offset: 0 | ElementSize: 1
		struct FString CheckPlayerID;			//Offset: 8 | ElementSize: 16
		bool found;			//Offset: 24 | ElementSize: 1
		EBondsType Relation;			//Offset: 25 | ElementSize: 1
		struct FString PlayerId;			//Offset: 32 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_FindPlayerAmongDescendants_Params params;
	params.OnlyFirstBloodline = OnlyFirstBloodline;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (Relation != nullptr)
		*Relation = params.Relation;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
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

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetDialogueAffectionArrayElement
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bSizeToFit	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetDialogueAffectionArrayElement(int32_t Index, const struct FName& Item, bool bSizeToFit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetDialogueAffectionArrayElement");

	struct UBP_CharacterRelationsComponent_C_SetDialogueAffectionArrayElement_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FName Item;			//Offset: 4 | ElementSize: 8
		bool bSizeToFit;			//Offset: 12 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_SetDialogueAffectionArrayElement_Params params;
	params.Index = Index;
	params.Item = Item;
	params.bSizeToFit = bSizeToFit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetDialogueAffectionBufferArrayElement
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Item	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bSizeToFit	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetDialogueAffectionBufferArrayElement(int32_t Index, const struct FName& Item, bool bSizeToFit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetDialogueAffectionBufferArrayElement");

	struct UBP_CharacterRelationsComponent_C_SetDialogueAffectionBufferArrayElement_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FName Item;			//Offset: 4 | ElementSize: 8
		bool bSizeToFit;			//Offset: 12 | ElementSize: 1
	};
	UBP_CharacterRelationsComponent_C_SetDialogueAffectionBufferArrayElement_Params params;
	params.Index = Index;
	params.Item = Item;
	params.bSizeToFit = bSizeToFit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddToDialogueAffectionBuffer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::AddToDialogueAffectionBuffer(const struct FName& Item) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddToDialogueAffectionBuffer");

	struct UBP_CharacterRelationsComponent_C_AddToDialogueAffectionBuffer_Params {
		struct FName Item;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_AddToDialogueAffectionBuffer_Params params;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RestoreAffectionDialogueChance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::RestoreAffectionDialogueChance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RestoreAffectionDialogueChance");

	struct UBP_CharacterRelationsComponent_C_RestoreAffectionDialogueChance_Params {
	};
	UBP_CharacterRelationsComponent_C_RestoreAffectionDialogueChance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Check If Player Is In Family
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CheckRelation	Type: EBondsType	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Relation	Type: EBondsType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::Check_If_Player_Is_In_Family(EBondsType CheckRelation, struct FString CheckPlayerID, bool* Success, EBondsType* Relation, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Check If Player Is In Family");

	struct UBP_CharacterRelationsComponent_C_Check_If_Player_Is_In_Family_Params {
		EBondsType CheckRelation;			//Offset: 0 | ElementSize: 1
		struct FString CheckPlayerID;			//Offset: 8 | ElementSize: 16
		bool Success;			//Offset: 24 | ElementSize: 1
		EBondsType Relation;			//Offset: 25 | ElementSize: 1
		struct FString PlayerId;			//Offset: 32 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_Check_If_Player_Is_In_Family_Params params;
	params.CheckRelation = CheckRelation;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Relation != nullptr)
		*Relation = params.Relation;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetAffection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CoopPlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: GetHighestCoop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Affection	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::GetAffection(struct FString CoopPlayerNetID, bool GetHighestCoop, int32_t* Affection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetAffection");

	struct UBP_CharacterRelationsComponent_C_GetAffection_Params {
		struct FString CoopPlayerNetID;			//Offset: 0 | ElementSize: 16
		bool GetHighestCoop;			//Offset: 16 | ElementSize: 1
		int32_t Affection;			//Offset: 20 | ElementSize: 4
	};
	UBP_CharacterRelationsComponent_C_GetAffection_Params params;
	params.CoopPlayerNetID = CoopPlayerNetID;
	params.GetHighestCoop = GetHighestCoop;

	UObject::ProcessEvent(fn, &params);
	if (Affection != nullptr)
		*Affection = params.Affection;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_Affections_Coop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_Affections_Coop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_Affections_Coop");

	struct UBP_CharacterRelationsComponent_C_OnRep_Affections_Coop_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_Affections_Coop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_HouseReference
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_HouseReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_HouseReference");

	struct UBP_CharacterRelationsComponent_C_OnRep_HouseReference_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_HouseReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_WorkPlaceReference
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_WorkPlaceReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_WorkPlaceReference");

	struct UBP_CharacterRelationsComponent_C_OnRep_WorkPlaceReference_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_WorkPlaceReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetGiftGiven
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::SetGiftGiven(bool Value, struct FString PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetGiftGiven");

	struct UBP_CharacterRelationsComponent_C_SetGiftGiven_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
		struct FString PlayerNetID;			//Offset: 8 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_SetGiftGiven_Params params;
	params.Value = Value;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Marry
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterToMarry	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::Marry(class ABP_BaseCharacter_C* CharacterToMarry) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.Marry");

	struct UBP_CharacterRelationsComponent_C_Marry_Params {
		class ABP_BaseCharacter_C* CharacterToMarry;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterRelationsComponent_C_Marry_Params params;
	params.CharacterToMarry = CharacterToMarry;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DivorcePlayer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::DivorcePlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DivorcePlayer");

	struct UBP_CharacterRelationsComponent_C_DivorcePlayer_Params {
	};
	UBP_CharacterRelationsComponent_C_DivorcePlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.UpdatePlayerTimeToBirth
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::UpdatePlayerTimeToBirth() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.UpdatePlayerTimeToBirth");

	struct UBP_CharacterRelationsComponent_C_UpdatePlayerTimeToBirth_Params {
	};
	UBP_CharacterRelationsComponent_C_UpdatePlayerTimeToBirth_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_IsPregnant
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_IsPregnant() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_IsPregnant");

	struct UBP_CharacterRelationsComponent_C_OnRep_IsPregnant_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_IsPregnant_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_TimeToBirth
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::OnRep_TimeToBirth() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnRep_TimeToBirth");

	struct UBP_CharacterRelationsComponent_C_OnRep_TimeToBirth_Params {
	};
	UBP_CharacterRelationsComponent_C_OnRep_TimeToBirth_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongUs
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Relation	Type: EBondsType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::FindPlayerAmongUs(struct FString CheckPlayerID, bool* Success, EBondsType* Relation, struct FString* PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.FindPlayerAmongUs");

	struct UBP_CharacterRelationsComponent_C_FindPlayerAmongUs_Params {
		struct FString CheckPlayerID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		EBondsType Relation;			//Offset: 17 | ElementSize: 1
		struct FString PlayerId;			//Offset: 24 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_FindPlayerAmongUs_Params params;
	params.CheckPlayerID = CheckPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Relation != nullptr)
		*Relation = params.Relation;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetComponent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetComponent");

	struct UBP_CharacterRelationsComponent_C_ResetComponent_Params {
	};
	UBP_CharacterRelationsComponent_C_ResetComponent_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionGiftsAndSmallTalks
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterRelationsComponent_C::ResetAffectionGiftsAndSmallTalks(struct FString PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionGiftsAndSmallTalks");

	struct UBP_CharacterRelationsComponent_C_ResetAffectionGiftsAndSmallTalks_Params {
		struct FString PlayerNetID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterRelationsComponent_C_ResetAffectionGiftsAndSmallTalks_Params params;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}