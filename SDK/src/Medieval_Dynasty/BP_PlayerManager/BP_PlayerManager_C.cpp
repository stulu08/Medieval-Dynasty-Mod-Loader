#include "../SDK.h"
#include "BP_PlayerManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_PlayerManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_PlayerManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_PlayerManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_PlayerManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_PlayerManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_PlayerManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_PlayerManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 560);
}
class ABP_SystemsManager_C** ABP_PlayerManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 560);
}
void ABP_PlayerManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of PM_PlayerControllerReference
// Declaration: class APC_Player_C* PM_PlayerControllerReference
class APC_Player_C* ABP_PlayerManager_C::M_GetPM_PlayerControllerReference() const {
	return Read<class APC_Player_C*>((byte*)this + 568);
}
class APC_Player_C** ABP_PlayerManager_C::M_PtrGetPM_PlayerControllerReference() {
	return reinterpret_cast<class APC_Player_C**>((byte*)this + 568);
}
void ABP_PlayerManager_C::M_SetPM_PlayerControllerReference(const class APC_Player_C*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of PlayerStartTransform
// Declaration: struct FTransform PlayerStartTransform
struct FTransform ABP_PlayerManager_C::M_GetPlayerStartTransform() const {
	return Read<struct FTransform>((byte*)this + 576);
}
struct FTransform* ABP_PlayerManager_C::M_PtrGetPlayerStartTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 576);
}
void ABP_PlayerManager_C::M_SetPlayerStartTransform(const struct FTransform& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of FullscreenTutorials
// Declaration: TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> FullscreenTutorials
TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>> ABP_PlayerManager_C::M_GetFullscreenTutorials() const {
	return Read<TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>>((byte*)this + 624);
}
TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>* ABP_PlayerManager_C::M_PtrGetFullscreenTutorials() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>*>((byte*)this + 624);
}
void ABP_PlayerManager_C::M_SetFullscreenTutorials(const TMap<TEnumAsByte<E_Tutorials>, TAssetPtr<class UClass>>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of BorderPoints
// Declaration: TArray<struct FVector> BorderPoints
TArray<struct FVector> ABP_PlayerManager_C::M_GetBorderPoints() const {
	return Read<TArray<struct FVector>>((byte*)this + 704);
}
TArray<struct FVector>* ABP_PlayerManager_C::M_PtrGetBorderPoints() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 704);
}
void ABP_PlayerManager_C::M_SetBorderPoints(const TArray<struct FVector>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of L_KnowledgeTutorials
// Declaration: TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle> L_KnowledgeTutorials
TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle> ABP_PlayerManager_C::M_GetL_KnowledgeTutorials() const {
	return Read<TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>>((byte*)this + 720);
}
TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>* ABP_PlayerManager_C::M_PtrGetL_KnowledgeTutorials() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>*>((byte*)this + 720);
}
void ABP_PlayerManager_C::M_SetL_KnowledgeTutorials(const TMap<TEnumAsByte<E_Tutorials>, struct FDataTableRowHandle>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of LoadedMultiPlayerData
// Declaration: TArray<struct FST_SAVE_Player> LoadedMultiPlayerData
TArray<struct FST_SAVE_Player> ABP_PlayerManager_C::M_GetLoadedMultiPlayerData() const {
	return Read<TArray<struct FST_SAVE_Player>>((byte*)this + 800);
}
TArray<struct FST_SAVE_Player>* ABP_PlayerManager_C::M_PtrGetLoadedMultiPlayerData() {
	return reinterpret_cast<TArray<struct FST_SAVE_Player>*>((byte*)this + 800);
}
void ABP_PlayerManager_C::M_SetLoadedMultiPlayerData(const TArray<struct FST_SAVE_Player>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of LoadedPlayerData
// Declaration: struct FST_SAVE_Player LoadedPlayerData
struct FST_SAVE_Player ABP_PlayerManager_C::M_GetLoadedPlayerData() const {
	return Read<struct FST_SAVE_Player>((byte*)this + 816);
}
struct FST_SAVE_Player* ABP_PlayerManager_C::M_PtrGetLoadedPlayerData() {
	return reinterpret_cast<struct FST_SAVE_Player*>((byte*)this + 816);
}
void ABP_PlayerManager_C::M_SetLoadedPlayerData(const struct FST_SAVE_Player& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of InEditorPlayerStartTransform
// Declaration: struct FTransform InEditorPlayerStartTransform
struct FTransform ABP_PlayerManager_C::M_GetInEditorPlayerStartTransform() const {
	return Read<struct FTransform>((byte*)this + 1712);
}
struct FTransform* ABP_PlayerManager_C::M_PtrGetInEditorPlayerStartTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 1712);
}
void ABP_PlayerManager_C::M_SetInEditorPlayerStartTransform(const struct FTransform& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of HeirToPlayerHairColor
// Declaration: TArray<int32_t> HeirToPlayerHairColor
TArray<int32_t> ABP_PlayerManager_C::M_GetHeirToPlayerHairColor() const {
	return Read<TArray<int32_t>>((byte*)this + 1760);
}
TArray<int32_t>* ABP_PlayerManager_C::M_PtrGetHeirToPlayerHairColor() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1760);
}
void ABP_PlayerManager_C::M_SetHeirToPlayerHairColor(const TArray<int32_t>& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of PlayerMarriagePairs
// Declaration: TMap<struct FString, struct FST_PlayerMarriageQueryData> PlayerMarriagePairs
TMap<struct FString, struct FST_PlayerMarriageQueryData> ABP_PlayerManager_C::M_GetPlayerMarriagePairs() const {
	return Read<TMap<struct FString, struct FST_PlayerMarriageQueryData>>((byte*)this + 1776);
}
TMap<struct FString, struct FST_PlayerMarriageQueryData>* ABP_PlayerManager_C::M_PtrGetPlayerMarriagePairs() {
	return reinterpret_cast<TMap<struct FString, struct FST_PlayerMarriageQueryData>*>((byte*)this + 1776);
}
void ABP_PlayerManager_C::M_SetPlayerMarriagePairs(const TMap<struct FString, struct FST_PlayerMarriageQueryData>& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of ChildrenToLeftPlayerOne
// Declaration: TArray<struct FString> ChildrenToLeftPlayerOne
TArray<struct FString> ABP_PlayerManager_C::M_GetChildrenToLeftPlayerOne() const {
	return Read<TArray<struct FString>>((byte*)this + 1856);
}
TArray<struct FString>* ABP_PlayerManager_C::M_PtrGetChildrenToLeftPlayerOne() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1856);
}
void ABP_PlayerManager_C::M_SetChildrenToLeftPlayerOne(const TArray<struct FString>& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of ChildrenToLeftPlayerTwo
// Declaration: TArray<struct FString> ChildrenToLeftPlayerTwo
TArray<struct FString> ABP_PlayerManager_C::M_GetChildrenToLeftPlayerTwo() const {
	return Read<TArray<struct FString>>((byte*)this + 1872);
}
TArray<struct FString>* ABP_PlayerManager_C::M_PtrGetChildrenToLeftPlayerTwo() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1872);
}
void ABP_PlayerManager_C::M_SetChildrenToLeftPlayerTwo(const TArray<struct FString>& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of RandomisedChildNameIndex
// Declaration: bool RandomisedChildNameIndex
bool ABP_PlayerManager_C::M_GetRandomisedChildNameIndex() const {
	return Read<bool>((byte*)this + 1888);
}
bool* ABP_PlayerManager_C::M_PtrGetRandomisedChildNameIndex() {
	return reinterpret_cast<bool*>((byte*)this + 1888);
}
void ABP_PlayerManager_C::M_SetRandomisedChildNameIndex(const bool& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of PlayersSelectingName
// Declaration: TMap<struct FString, struct FST_ChildNameSelection> PlayersSelectingName
TMap<struct FString, struct FST_ChildNameSelection> ABP_PlayerManager_C::M_GetPlayersSelectingName() const {
	return Read<TMap<struct FString, struct FST_ChildNameSelection>>((byte*)this + 1896);
}
TMap<struct FString, struct FST_ChildNameSelection>* ABP_PlayerManager_C::M_PtrGetPlayersSelectingName() {
	return reinterpret_cast<TMap<struct FString, struct FST_ChildNameSelection>*>((byte*)this + 1896);
}
void ABP_PlayerManager_C::M_SetPlayersSelectingName(const TMap<struct FString, struct FST_ChildNameSelection>& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of PlayerHeirPair
// Declaration: TMap<class AActor*, class ABP_BaseCharacter_C*> PlayerHeirPair
TMap<class AActor*, class ABP_BaseCharacter_C*> ABP_PlayerManager_C::M_GetPlayerHeirPair() const {
	return Read<TMap<class AActor*, class ABP_BaseCharacter_C*>>((byte*)this + 1976);
}
TMap<class AActor*, class ABP_BaseCharacter_C*>* ABP_PlayerManager_C::M_PtrGetPlayerHeirPair() {
	return reinterpret_cast<TMap<class AActor*, class ABP_BaseCharacter_C*>*>((byte*)this + 1976);
}
void ABP_PlayerManager_C::M_SetPlayerHeirPair(const TMap<class AActor*, class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of PlayersSelectingSex
// Declaration: TMap<struct FString, struct FST_ChildSexSelection> PlayersSelectingSex
TMap<struct FString, struct FST_ChildSexSelection> ABP_PlayerManager_C::M_GetPlayersSelectingSex() const {
	return Read<TMap<struct FString, struct FST_ChildSexSelection>>((byte*)this + 2056);
}
TMap<struct FString, struct FST_ChildSexSelection>* ABP_PlayerManager_C::M_PtrGetPlayersSelectingSex() {
	return reinterpret_cast<TMap<struct FString, struct FST_ChildSexSelection>*>((byte*)this + 2056);
}
void ABP_PlayerManager_C::M_SetPlayersSelectingSex(const TMap<struct FString, struct FST_ChildSexSelection>& value) {
	Write((byte*)this + 2056, value);
}
// Member Getter and Setter of NameButtonID
// Declaration: int32_t NameButtonID
int32_t ABP_PlayerManager_C::M_GetNameButtonID() const {
	return Read<int32_t>((byte*)this + 2136);
}
int32_t* ABP_PlayerManager_C::M_PtrGetNameButtonID() {
	return reinterpret_cast<int32_t*>((byte*)this + 2136);
}
void ABP_PlayerManager_C::M_SetNameButtonID(const int32_t& value) {
	Write((byte*)this + 2136, value);
}
// Member Getter and Setter of NameSpouseType
// Declaration: TEnumAsByte<E_SpouseType> NameSpouseType
TEnumAsByte<E_SpouseType> ABP_PlayerManager_C::M_GetNameSpouseType() const {
	return Read<TEnumAsByte<E_SpouseType>>((byte*)this + 2140);
}
TEnumAsByte<E_SpouseType>* ABP_PlayerManager_C::M_PtrGetNameSpouseType() {
	return reinterpret_cast<TEnumAsByte<E_SpouseType>*>((byte*)this + 2140);
}
void ABP_PlayerManager_C::M_SetNameSpouseType(const TEnumAsByte<E_SpouseType>& value) {
	Write((byte*)this + 2140, value);
}
// Member Getter and Setter of SexSpouse_Type
// Declaration: TEnumAsByte<E_SpouseType> SexSpouse_Type
TEnumAsByte<E_SpouseType> ABP_PlayerManager_C::M_GetSexSpouse_Type() const {
	return Read<TEnumAsByte<E_SpouseType>>((byte*)this + 2141);
}
TEnumAsByte<E_SpouseType>* ABP_PlayerManager_C::M_PtrGetSexSpouse_Type() {
	return reinterpret_cast<TEnumAsByte<E_SpouseType>*>((byte*)this + 2141);
}
void ABP_PlayerManager_C::M_SetSexSpouse_Type(const TEnumAsByte<E_SpouseType>& value) {
	Write((byte*)this + 2141, value);
}
// Member Getter and Setter of Child_Sex
// Declaration: TEnumAsByte<E_ChildSex> Child_Sex
TEnumAsByte<E_ChildSex> ABP_PlayerManager_C::M_GetChild_Sex() const {
	return Read<TEnumAsByte<E_ChildSex>>((byte*)this + 2142);
}
TEnumAsByte<E_ChildSex>* ABP_PlayerManager_C::M_PtrGetChild_Sex() {
	return reinterpret_cast<TEnumAsByte<E_ChildSex>*>((byte*)this + 2142);
}
void ABP_PlayerManager_C::M_SetChild_Sex(const TEnumAsByte<E_ChildSex>& value) {
	Write((byte*)this + 2142, value);
}
// Member Getter and Setter of Player_Color
// Declaration: struct FLinearColor Player_Color
struct FLinearColor ABP_PlayerManager_C::M_GetPlayer_Color() const {
	return Read<struct FLinearColor>((byte*)this + 2144);
}
struct FLinearColor* ABP_PlayerManager_C::M_PtrGetPlayer_Color() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 2144);
}
void ABP_PlayerManager_C::M_SetPlayer_Color(const struct FLinearColor& value) {
	Write((byte*)this + 2144, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::ExecuteUbergraph_BP_PlayerManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager");

	struct ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreateStartQuestNotification_PM
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ControllerRef	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreateStartQuestNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreateStartQuestNotification_PM");

	struct ABP_PlayerManager_C_CreateStartQuestNotification_PM_Params {
		class AController* ControllerRef;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
		struct FText QuestName;			//Offset: 16 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 40 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 44 | ElementSize: 4
	};
	ABP_PlayerManager_C_CreateStartQuestNotification_PM_Params params;
	params.ControllerRef = ControllerRef;
	params.AllPlayers = AllPlayers;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreateQuestNotification_PM
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ControllerRef	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreateQuestNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreateQuestNotification_PM");

	struct ABP_PlayerManager_C_CreateQuestNotification_PM_Params {
		class AController* ControllerRef;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
		struct FText QuestName;			//Offset: 16 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 40 | ElementSize: 1
		bool isUpdated;			//Offset: 41 | ElementSize: 1
		bool IsCanceled;			//Offset: 42 | ElementSize: 1
	};
	ABP_PlayerManager_C_CreateQuestNotification_PM_Params params;
	params.ControllerRef = ControllerRef;
	params.AllPlayers = AllPlayers;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreateNotification_PM
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ControllerRef	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreateNotification_PM(class AController* ControllerRef, bool AllPlayers, struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreateNotification_PM");

	struct ABP_PlayerManager_C_CreateNotification_PM_Params {
		class AController* ControllerRef;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
		struct FST_ItemInventorys Item;			//Offset: 12 | ElementSize: 56
		bool NotificationImage;			//Offset: 68 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 69 | ElementSize: 1
		struct FText WarningText;			//Offset: 72 | ElementSize: 24
		float NotificationTimeout;			//Offset: 96 | ElementSize: 4
		float NotificationDelay;			//Offset: 100 | ElementSize: 4
	};
	ABP_PlayerManager_C_CreateNotification_PM_Params params;
	params.ControllerRef = ControllerRef;
	params.AllPlayers = AllPlayers;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial_PM
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ControllerRef	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FullscreenMessage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::TryToCreateHUDTutorial_PM(class AController* ControllerRef, bool AllPlayers, TEnumAsByte<E_Tutorials> Tutorial, bool FullscreenMessage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial_PM");

	struct ABP_PlayerManager_C_TryToCreateHUDTutorial_PM_Params {
		class AController* ControllerRef;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 9 | ElementSize: 1
		bool FullscreenMessage;			//Offset: 10 | ElementSize: 1
	};
	ABP_PlayerManager_C_TryToCreateHUDTutorial_PM_Params params;
	params.ControllerRef = ControllerRef;
	params.AllPlayers = AllPlayers;
	params.Tutorial = Tutorial;
	params.FullscreenMessage = FullscreenMessage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged");

	struct ABP_PlayerManager_C_UpdateOnSeasonChanged_Params {
	};
	ABP_PlayerManager_C_UpdateOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::StartPlayerManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager");

	struct ABP_PlayerManager_C_StartPlayerManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_PlayerManager_C_StartPlayerManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay");

	struct ABP_PlayerManager_C_ReceiveBeginPlay_Params {
	};
	ABP_PlayerManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Init");

	struct ABP_PlayerManager_C_Init_Params {
	};
	ABP_PlayerManager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreatePlayer(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer");

	struct ABP_PlayerManager_C_CreatePlayer_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_CreatePlayer_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InitPlayerHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD");

	struct ABP_PlayerManager_C_InitPlayerHUD_Params {
	};
	ABP_PlayerManager_C_InitPlayerHUD_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::Spawn_Player(class AController* PlayerController, bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player");

	struct ABP_PlayerManager_C_Spawn_Player_Params {
		class AController* PlayerController;			//Offset: 0 | ElementSize: 8
		bool load;			//Offset: 8 | ElementSize: 1
	};
	ABP_PlayerManager_C_Spawn_Player_Params params;
	params.PlayerController = PlayerController;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ClientCharacterReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference, class ABP_PlayerCharacter_C* ClientCharacterReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile");

	struct ABP_PlayerManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class ABP_PlayerCharacter_C* ClientCharacterReference;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;
	params.ClientCharacterReference = ClientCharacterReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem");

	struct ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystemFinishing
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::LoadSaveFileIntoSystemFinishing(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystemFinishing");

	struct ABP_PlayerManager_C_LoadSaveFileIntoSystemFinishing_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_PlayerManager_C_LoadSaveFileIntoSystemFinishing_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SwitchToHeir
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::SwitchToHeir(class ABP_BaseCharacter_C* Heir, class ABP_BaseCharacter_C* Player, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SwitchToHeir");

	struct ABP_PlayerManager_C_SwitchToHeir_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* Player;			//Offset: 8 | ElementSize: 8
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerManager_C_SwitchToHeir_Params params;
	params.Heir = Heir;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SwitchPlayerAndHeir
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::SwitchPlayerAndHeir(class ABP_BaseCharacter_C* Heir, class ABP_BaseCharacter_C* Player, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SwitchPlayerAndHeir");

	struct ABP_PlayerManager_C_SwitchPlayerAndHeir_Params {
		class ABP_BaseCharacter_C* Heir;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* Player;			//Offset: 8 | ElementSize: 8
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerManager_C_SwitchPlayerAndHeir_Params params;
	params.Heir = Heir;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::TeleportPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayers");

	struct ABP_PlayerManager_C_TeleportPlayers_Params {
	};
	ABP_PlayerManager_C_TeleportPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIsHeir(class ABP_BaseCharacter_C* Player, bool* Success, class ABP_BaseCharacter_C** Heir) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir");

	struct ABP_PlayerManager_C_CheckIsHeir_Params {
		class ABP_BaseCharacter_C* Player;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
		class ABP_BaseCharacter_C* Heir;			//Offset: 16 | ElementSize: 8
	};
	ABP_PlayerManager_C_CheckIsHeir_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Heir != nullptr)
		*Heir = params.Heir;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir_Local
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIsHeir_Local(class ABP_BaseCharacter_C* Player, bool* Success, class ABP_BaseCharacter_C** Heir) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir_Local");

	struct ABP_PlayerManager_C_CheckIsHeir_Local_Params {
		class ABP_BaseCharacter_C* Player;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
		class ABP_BaseCharacter_C* Heir;			//Offset: 16 | ElementSize: 8
	};
	ABP_PlayerManager_C_CheckIsHeir_Local_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Heir != nullptr)
		*Heir = params.Heir;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckHeir_Local
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Heir	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckHeir_Local(class ABP_BaseCharacter_C* Player, class ABP_BaseCharacter_C* Heir, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckHeir_Local");

	struct ABP_PlayerManager_C_CheckHeir_Local_Params {
		class ABP_BaseCharacter_C* Player;			//Offset: 0 | ElementSize: 8
		class ABP_BaseCharacter_C* Heir;			//Offset: 8 | ElementSize: 8
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerManager_C_CheckHeir_Local_Params params;
	params.Player = Player;
	params.Heir = Heir;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.HideRoads
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Visibility	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::HideRoads(bool Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.HideRoads");

	struct ABP_PlayerManager_C_HideRoads_Params {
		bool Visibility;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_HideRoads_Params params;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.HideFields
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Visibility	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::HideFields(bool Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.HideFields");

	struct ABP_PlayerManager_C_HideFields_Params {
		bool Visibility;			//Offset: 0 | ElementSize: 1
	};
	ABP_PlayerManager_C_HideFields_Params params;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.GetMapBorderPoints
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::GetMapBorderPoints() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.GetMapBorderPoints");

	struct ABP_PlayerManager_C_GetMapBorderPoints_Params {
	};
	ABP_PlayerManager_C_GetMapBorderPoints_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.InitializePlayers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::InitializePlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InitializePlayers");

	struct ABP_PlayerManager_C_InitializePlayers_Params {
	};
	ABP_PlayerManager_C_InitializePlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TeleportHost
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::TeleportHost() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TeleportHost");

	struct ABP_PlayerManager_C_TeleportHost_Params {
	};
	ABP_PlayerManager_C_TeleportHost_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.TeleportClients
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::TeleportClients() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TeleportClients");

	struct ABP_PlayerManager_C_TeleportClients_Params {
	};
	ABP_PlayerManager_C_TeleportClients_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.DrawDebugSpawns
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::DrawDebugSpawns() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.DrawDebugSpawns");

	struct ABP_PlayerManager_C_DrawDebugSpawns_Params {
	};
	ABP_PlayerManager_C_DrawDebugSpawns_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.IsPlayerSaveValid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MultiPlayersData	Type: TArray<struct FST_SAVE_Player>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerManager_C::IsPlayerSaveValid(TArray<struct FST_SAVE_Player>* MultiPlayersData, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.IsPlayerSaveValid");

	struct ABP_PlayerManager_C_IsPlayerSaveValid_Params {
		TArray<struct FST_SAVE_Player> MultiPlayersData;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	ABP_PlayerManager_C_IsPlayerSaveValid_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (MultiPlayersData != nullptr)
		*MultiPlayersData = params.MultiPlayersData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.MarryPlayers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ProposalState	Type: EProposalState	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::MarryPlayers(struct FString PlayerId, struct FString PlayerID2, EProposalState* ProposalState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.MarryPlayers");

	struct ABP_PlayerManager_C_MarryPlayers_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
		EProposalState ProposalState;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerManager_C_MarryPlayers_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
	if (ProposalState != nullptr)
		*ProposalState = params.ProposalState;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.DivorcePlayers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::DivorcePlayers(struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.DivorcePlayers");

	struct ABP_PlayerManager_C_DivorcePlayers_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerManager_C_DivorcePlayers_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.PlayerDivorceChildrenUpdate
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerID1	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::PlayerDivorceChildrenUpdate(class ABP_BaseCharacter_C* Player, struct FString* PlayerID1, struct FString* PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.PlayerDivorceChildrenUpdate");

	struct ABP_PlayerManager_C_PlayerDivorceChildrenUpdate_Params {
		class ABP_BaseCharacter_C* Player;			//Offset: 0 | ElementSize: 8
		struct FString PlayerID1;			//Offset: 8 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 24 | ElementSize: 16
	};
	ABP_PlayerManager_C_PlayerDivorceChildrenUpdate_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
	if (PlayerID1 != nullptr)
		*PlayerID1 = params.PlayerID1;
	if (PlayerID2 != nullptr)
		*PlayerID2 = params.PlayerID2;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIfCanMarry
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Player2ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ProposalState	Type: EProposalState	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIfCanMarry(struct FString PlayerId, struct FString Player2ID, EProposalState* ProposalState)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIfCanMarry");

	struct ABP_PlayerManager_C_CheckIfCanMarry_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString Player2ID;			//Offset: 16 | ElementSize: 16
		EProposalState ProposalState;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerManager_C_CheckIfCanMarry_Params params;
	params.PlayerId = PlayerId;
	params.Player2ID = Player2ID;

	UObject::ProcessEvent(fn, &params);
	if (ProposalState != nullptr)
		*ProposalState = params.ProposalState;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdatePlayerHouses
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player2	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProposalState	Type: EProposalState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdatePlayerHouses(class ABP_PlayerCharacter_C* Player, class ABP_PlayerCharacter_C* Player2, EProposalState ProposalState, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdatePlayerHouses");

	struct ABP_PlayerManager_C_UpdatePlayerHouses_Params {
		class ABP_PlayerCharacter_C* Player;			//Offset: 0 | ElementSize: 8
		class ABP_PlayerCharacter_C* Player2;			//Offset: 8 | ElementSize: 8
		EProposalState ProposalState;			//Offset: 16 | ElementSize: 1
		bool Success;			//Offset: 17 | ElementSize: 1
	};
	ABP_PlayerManager_C_UpdatePlayerHouses_Params params;
	params.Player = Player;
	params.Player2 = Player2;
	params.ProposalState = ProposalState;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.MakeLove
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Player2ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MakeLoveState	Type: EMakeLoveState	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::MakeLove(struct FString PlayerId, struct FString Player2ID, EMakeLoveState* MakeLoveState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.MakeLove");

	struct ABP_PlayerManager_C_MakeLove_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString Player2ID;			//Offset: 16 | ElementSize: 16
		EMakeLoveState MakeLoveState;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerManager_C_MakeLove_Params params;
	params.PlayerId = PlayerId;
	params.Player2ID = Player2ID;

	UObject::ProcessEvent(fn, &params);
	if (MakeLoveState != nullptr)
		*MakeLoveState = params.MakeLoveState;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdatePlayersOnSeasonChange
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdatePlayersOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdatePlayersOnSeasonChange");

	struct ABP_PlayerManager_C_UpdatePlayersOnSeasonChange_Params {
	};
	ABP_PlayerManager_C_UpdatePlayersOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CheckIfCanMakeLove
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Player2ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MakeLoveState	Type: EMakeLoveState	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CheckIfCanMakeLove(struct FString PlayerId, struct FString Player2ID, EMakeLoveState* MakeLoveState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIfCanMakeLove");

	struct ABP_PlayerManager_C_CheckIfCanMakeLove_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString Player2ID;			//Offset: 16 | ElementSize: 16
		EMakeLoveState MakeLoveState;			//Offset: 32 | ElementSize: 1
	};
	ABP_PlayerManager_C_CheckIfCanMakeLove_Params params;
	params.PlayerId = PlayerId;
	params.Player2ID = Player2ID;

	UObject::ProcessEvent(fn, &params);
	if (MakeLoveState != nullptr)
		*MakeLoveState = params.MakeLoveState;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.AddMarriagePair
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::AddMarriagePair(struct FString PlayerId, struct FString PlayerID2, EMarriageChoice MarriageChoice, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.AddMarriagePair");

	struct ABP_PlayerManager_C_AddMarriagePair_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
		EMarriageChoice MarriageChoice;			//Offset: 32 | ElementSize: 1
		bool Success;			//Offset: 33 | ElementSize: 1
	};
	ABP_PlayerManager_C_AddMarriagePair_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;
	params.MarriageChoice = MarriageChoice;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.RemoveMarriagePair
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::RemoveMarriagePair(struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.RemoveMarriagePair");

	struct ABP_PlayerManager_C_RemoveMarriagePair_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerManager_C_RemoveMarriagePair_Params params;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQuery
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: PlayerID2	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OnMarriageChoiceQuery(EMarriageChoice MarriageChoice, struct FString PlayerId, struct FString PlayerID2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQuery");

	struct ABP_PlayerManager_C_OnMarriageChoiceQuery_Params {
		EMarriageChoice MarriageChoice;			//Offset: 0 | ElementSize: 1
		struct FString PlayerId;			//Offset: 8 | ElementSize: 16
		struct FString PlayerID2;			//Offset: 24 | ElementSize: 16
	};
	ABP_PlayerManager_C_OnMarriageChoiceQuery_Params params;
	params.MarriageChoice = MarriageChoice;
	params.PlayerId = PlayerId;
	params.PlayerID2 = PlayerID2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQueryResponse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QueryResponse	Type: EQueryResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResponderPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OnMarriageChoiceQueryResponse(EQueryResponse QueryResponse, struct FString ResponderPlayerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQueryResponse");

	struct ABP_PlayerManager_C_OnMarriageChoiceQueryResponse_Params {
		EQueryResponse QueryResponse;			//Offset: 0 | ElementSize: 1
		struct FString ResponderPlayerID;			//Offset: 8 | ElementSize: 16
	};
	ABP_PlayerManager_C_OnMarriageChoiceQueryResponse_Params params;
	params.QueryResponse = QueryResponse;
	params.ResponderPlayerID = ResponderPlayerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQueryCancel
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuerierPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OnMarriageChoiceQueryCancel(struct FString QuerierPlayerID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageChoiceQueryCancel");

	struct ABP_PlayerManager_C_OnMarriageChoiceQueryCancel_Params {
		struct FString QuerierPlayerID;			//Offset: 0 | ElementSize: 16
	};
	ABP_PlayerManager_C_OnMarriageChoiceQueryCancel_Params params;
	params.QuerierPlayerID = QuerierPlayerID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.AddChildToLeftParent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: IsPlayerOne	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_PlayerManager_C::AddChildToLeftParent(struct FString ChildName, bool IsPlayerOne) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.AddChildToLeftParent");

	struct ABP_PlayerManager_C_AddChildToLeftParent_Params {
		struct FString ChildName;			//Offset: 0 | ElementSize: 16
		bool IsPlayerOne;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerManager_C_AddChildToLeftParent_Params params;
	params.ChildName = ChildName;
	params.IsPlayerOne = IsPlayerOne;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CanNickFromCreatorBeVisible
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerManager_C::CanNickFromCreatorBeVisible(struct FString PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CanNickFromCreatorBeVisible");

	struct ABP_PlayerManager_C_CanNickFromCreatorBeVisible_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	ABP_PlayerManager_C_CanNickFromCreatorBeVisible_Params params;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.GetOfflineChildPlayerName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildPlayerID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Name	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_PlayerManager_C::GetOfflineChildPlayerName(struct FString ChildPlayerID, struct FText* Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.GetOfflineChildPlayerName");

	struct ABP_PlayerManager_C_GetOfflineChildPlayerName_Params {
		struct FString ChildPlayerID;			//Offset: 0 | ElementSize: 16
		struct FText Name;			//Offset: 16 | ElementSize: 24
	};
	ABP_PlayerManager_C_GetOfflineChildPlayerName_Params params;
	params.ChildPlayerID = ChildPlayerID;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.CreateDivorceNotifications
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player1	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player2	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::CreateDivorceNotifications(class ABP_PlayerCharacter_C* Player1, class ABP_PlayerCharacter_C* Player2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreateDivorceNotifications");

	struct ABP_PlayerManager_C_CreateDivorceNotifications_Params {
		class ABP_PlayerCharacter_C* Player1;			//Offset: 0 | ElementSize: 8
		class ABP_PlayerCharacter_C* Player2;			//Offset: 8 | ElementSize: 8
	};
	ABP_PlayerManager_C_CreateDivorceNotifications_Params params;
	params.Player1 = Player1;
	params.Player2 = Player2;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.GenerateChildrenLeftText
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlayerOne	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Text	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_PlayerManager_C::GenerateChildrenLeftText(bool IsPlayerOne, struct FText* Text) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.GenerateChildrenLeftText");

	struct ABP_PlayerManager_C_GenerateChildrenLeftText_Params {
		bool IsPlayerOne;			//Offset: 0 | ElementSize: 1
		struct FText Text;			//Offset: 8 | ElementSize: 24
	};
	ABP_PlayerManager_C_GenerateChildrenLeftText_Params params;
	params.IsPlayerOne = IsPlayerOne;

	UObject::ProcessEvent(fn, &params);
	if (Text != nullptr)
		*Text = params.Text;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ClearChildrenToLeft
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ClearChildrenToLeft() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ClearChildrenToLeft");

	struct ABP_PlayerManager_C_ClearChildrenToLeft_Params {
	};
	ABP_PlayerManager_C_ClearChildrenToLeft_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OfflinePregnancyUpdate
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: struct FST_SAVE_Player	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: MotherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OfflinePregnancyUpdate(struct FST_SAVE_Player* Save, struct FString* MotherID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OfflinePregnancyUpdate");

	struct ABP_PlayerManager_C_OfflinePregnancyUpdate_Params {
		struct FST_SAVE_Player Save;			//Offset: 0 | ElementSize: 888
		struct FString MotherID;			//Offset: 888 | ElementSize: 16
	};
	ABP_PlayerManager_C_OfflinePregnancyUpdate_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Save != nullptr)
		*Save = params.Save;
	if (MotherID != nullptr)
		*MotherID = params.MotherID;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOfflineMembersRelations
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewNPCID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Children	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Partner	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::UpdateOfflineMembersRelations(struct FString NewNPCID, TArray<struct FString>* Children, struct FString Partner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOfflineMembersRelations");

	struct ABP_PlayerManager_C_UpdateOfflineMembersRelations_Params {
		struct FString NewNPCID;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> Children;			//Offset: 16 | ElementSize: 16
		struct FString Partner;			//Offset: 32 | ElementSize: 16
	};
	ABP_PlayerManager_C_UpdateOfflineMembersRelations_Params params;
	params.NewNPCID = NewNPCID;
	params.Partner = Partner;

	UObject::ProcessEvent(fn, &params);
	if (Children != nullptr)
		*Children = params.Children;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.AddPlayerSelectingChildName
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ChildData	Type: struct FST_ChildNameSelection	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::AddPlayerSelectingChildName(struct FString PlayerId, struct FST_ChildNameSelection ChildData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.AddPlayerSelectingChildName");

	struct ABP_PlayerManager_C_AddPlayerSelectingChildName_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FST_ChildNameSelection ChildData;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerManager_C_AddPlayerSelectingChildName_Params params;
	params.PlayerId = PlayerId;
	params.ChildData = ChildData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageCutscene
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MarriageChoice	Type: EMarriageChoice	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProposalState	Type: EProposalState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QueryResponse	Type: EQueryResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::OnMarriageCutscene(EMarriageChoice MarriageChoice, EProposalState ProposalState, EQueryResponse QueryResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.OnMarriageCutscene");

	struct ABP_PlayerManager_C_OnMarriageCutscene_Params {
		EMarriageChoice MarriageChoice;			//Offset: 0 | ElementSize: 1
		EProposalState ProposalState;			//Offset: 1 | ElementSize: 1
		EQueryResponse QueryResponse;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerManager_C_OnMarriageCutscene_Params params;
	params.MarriageChoice = MarriageChoice;
	params.ProposalState = ProposalState;
	params.QueryResponse = QueryResponse;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.AddPlayerSelectingChildSex
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ChildData	Type: struct FST_ChildSexSelection	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::AddPlayerSelectingChildSex(struct FString PlayerId, struct FST_ChildSexSelection ChildData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.AddPlayerSelectingChildSex");

	struct ABP_PlayerManager_C_AddPlayerSelectingChildSex_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FST_ChildSexSelection ChildData;			//Offset: 16 | ElementSize: 16
	};
	ABP_PlayerManager_C_AddPlayerSelectingChildSex_Params params;
	params.PlayerId = PlayerId;
	params.ChildData = ChildData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.Get Chances for Boy
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FirstPartnerChoice	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondPartnerChoice	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Chances	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::Get_Chances_for_Boy(TEnumAsByte<E_ChildSex> FirstPartnerChoice, TEnumAsByte<E_ChildSex> SecondPartnerChoice, float* Chances) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Get Chances for Boy");

	struct ABP_PlayerManager_C_Get_Chances_for_Boy_Params {
		TEnumAsByte<E_ChildSex> FirstPartnerChoice;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_ChildSex> SecondPartnerChoice;			//Offset: 1 | ElementSize: 1
		float Chances;			//Offset: 4 | ElementSize: 4
	};
	ABP_PlayerManager_C_Get_Chances_for_Boy_Params params;
	params.FirstPartnerChoice = FirstPartnerChoice;
	params.SecondPartnerChoice = SecondPartnerChoice;

	UObject::ProcessEvent(fn, &params);
	if (Chances != nullptr)
		*Chances = params.Chances;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.DidFavoredPlayerChooseSpecificSex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FirstPartner	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SecondPartner	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_PlayerManager_C::DidFavoredPlayerChooseSpecificSex(TEnumAsByte<E_ChildSex> FirstPartner, TEnumAsByte<E_ChildSex> SecondPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.DidFavoredPlayerChooseSpecificSex");

	struct ABP_PlayerManager_C_DidFavoredPlayerChooseSpecificSex_Params {
		TEnumAsByte<E_ChildSex> FirstPartner;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_ChildSex> SecondPartner;			//Offset: 1 | ElementSize: 1
		bool ReturnValue;			//Offset: 2 | ElementSize: 1
	};
	ABP_PlayerManager_C_DidFavoredPlayerChooseSpecificSex_Params params;
	params.FirstPartner = FirstPartner;
	params.SecondPartner = SecondPartner;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SetLockedNameData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::SetLockedNameData(int32_t ButtonID, TEnumAsByte<E_SpouseType> SpouseType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SetLockedNameData");

	struct ABP_PlayerManager_C_SetLockedNameData_Params {
		int32_t ButtonID;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 4 | ElementSize: 1
	};
	ABP_PlayerManager_C_SetLockedNameData_Params params;
	params.ButtonID = ButtonID;
	params.SpouseType = SpouseType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.SetLockedSexData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChildSex	Type: TEnumAsByte<E_ChildSex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpouseType	Type: TEnumAsByte<E_SpouseType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_PlayerManager_C::SetLockedSexData(TEnumAsByte<E_ChildSex> ChildSex, TEnumAsByte<E_SpouseType> SpouseType, struct FLinearColor PlayerColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SetLockedSexData");

	struct ABP_PlayerManager_C_SetLockedSexData_Params {
		TEnumAsByte<E_ChildSex> ChildSex;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SpouseType> SpouseType;			//Offset: 1 | ElementSize: 1
		struct FLinearColor PlayerColor;			//Offset: 4 | ElementSize: 16
	};
	ABP_PlayerManager_C_SetLockedSexData_Params params;
	params.ChildSex = ChildSex;
	params.SpouseType = SpouseType;
	params.PlayerColor = PlayerColor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerManager.BP_PlayerManager_C.ClearChildBirthWindowData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_PlayerManager_C::ClearChildBirthWindowData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ClearChildBirthWindowData");

	struct ABP_PlayerManager_C_ClearChildBirthWindowData_Params {
	};
	ABP_PlayerManager_C_ClearChildBirthWindowData_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}