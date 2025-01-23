#pragma once
#include "Structs.h"
#include "Engine/GameInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.GI_MedievalDynastyBase
// Super: Class Engine.GameInstance
// Size: 648
// Size inherited: 424
/////////////////////////////////////////////
namespace UE4 {
class UGI_MedievalDynastyBase : public UGameInstance {
public:
#pragma region Members
	//bool	MicrosoftVersion;		//Offset: 424	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetMicrosoftVersion() const;
	bool* M_PtrGetMicrosoftVersion();
	void M_SetMicrosoftVersion(const bool& value);

	//EMD_GameState	MDGameState;		//Offset: 425	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMD_GameState M_GetMDGameState() const;
	EMD_GameState* M_PtrGetMDGameState();
	void M_SetMDGameState(const EMD_GameState& value);

	//bool	SafeAccChange;		//Offset: 426	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetSafeAccChange() const;
	bool* M_PtrGetSafeAccChange();
	void M_SetSafeAccChange(const bool& value);

	//bool	bUserChanged;		//Offset: 427	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUserChanged() const;
	bool* M_PtrGetbUserChanged();
	void M_SetbUserChanged(const bool& value);

	//E_GraphicsRHI	DefaultRHI;		//Offset: 428	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	E_GraphicsRHI M_GetDefaultRHI() const;
	E_GraphicsRHI* M_PtrGetDefaultRHI();
	void M_SetDefaultRHI(const E_GraphicsRHI& value);

	//E_GraphicsRHI	CurrentRHI;		//Offset: 429	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	E_GraphicsRHI M_GetCurrentRHI() const;
	E_GraphicsRHI* M_PtrGetCurrentRHI();
	void M_SetCurrentRHI(const E_GraphicsRHI& value);

	//bool	bIsDX12Supported;		//Offset: 430	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbIsDX12Supported() const;
	bool* M_PtrGetbIsDX12Supported();
	void M_SetbIsDX12Supported(const bool& value);

	//bool	bHasInternetConnection;		//Offset: 431	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbHasInternetConnection() const;
	bool* M_PtrGetbHasInternetConnection();
	void M_SetbHasInternetConnection(const bool& value);

	//TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>	OnPlayerIsLoggedInDelegate;		//Offset: 432	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature> M_GetOnPlayerIsLoggedInDelegate() const;
	TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>* M_PtrGetOnPlayerIsLoggedInDelegate();
	void M_SetOnPlayerIsLoggedInDelegate(const TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>& value);

	//TAssetPtr<class FNewMessageDelegate__DelegateSignature>	MessageDelegate;		//Offset: 448	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FNewMessageDelegate__DelegateSignature> M_GetMessageDelegate() const;
	TAssetPtr<class FNewMessageDelegate__DelegateSignature>* M_PtrGetMessageDelegate();
	void M_SetMessageDelegate(const TAssetPtr<class FNewMessageDelegate__DelegateSignature>& value);

	//TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>	ConnectionDelegate;		//Offset: 464	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FConnectionChangedDelegate__DelegateSignature> M_GetConnectionDelegate() const;
	TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>* M_PtrGetConnectionDelegate();
	void M_SetConnectionDelegate(const TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>& value);

	//TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>	AppReactivatedDelegate;		//Offset: 480	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FAppReactivatedDelegate__DelegateSignature> M_GetAppReactivatedDelegate() const;
	TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>* M_PtrGetAppReactivatedDelegate();
	void M_SetAppReactivatedDelegate(const TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.GI_MedievalDynastyBase");
		return ptr;
	}

#pragma region Functions
	bool AddPlayerToRecentPlayers(class APlayerController* PC, class APlayerState* UserStateToBeAdded);

	void CacheBlockList();

	void CheckForDX12Support();

	bool CheckIfPlayerIsBlockedOnService(class APlayerController* PC, class APlayerState* UserToBeChecked);

	TArray<struct FString> CheckWhichPlayersAreBlockedByNetID(class APlayerController* PC, TArray<struct FString> UsersToBeFiltered);

	void ClearPreviousPlayer();

	void DoesCurrentSessionHaveCrossplayEnabled(bool* IsEnabled, bool* SuccessfullyRetrieved);

	void FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString SearchSessionName, int32_t MaxResults, bool bUseLAN);

	TArray<struct FString> GetAccountInfo();

	TArray<struct FString> GetBlockedPlayersIDs(class APlayerController* PC);

	bool GetChatPrivilegeState();

	bool GetCrossplayPrivilegeState();

	struct FString GetCurrentPlayerUniqueId();

	E_GraphicsRHI GetCurrentRHI(bool GetFromFile);

	struct FName GetCurrentSessionName();

	int32_t GetCurrentUserIndex();

	bool GetInternetConnectionStatus();

	class APlayerController* GetLocalPlayerController();

	struct FString GetLocalPlayerUniqueId();

	struct FString GetPasswordForSessionByName(struct FName SessionName, bool* isSuccess);

	int32_t GetPlatformUserID();

	bool GetPlayerBanStateCached();

	void GetPlayerBanStateFromServer(struct FString PlayerId, struct FString PlayerPlatform);

	bool GetUGCPrivilegeState();

	void HandleSessionInvite(bool bWasSuccessful, int32_t LocalUserNum, struct FString UserUNiD, const struct FBlueprintSessionResultCustom& SessionToJoin);

	bool IsLoggedInNative(class APlayerController* PC);

	void OnFindSessionFinished(const TArray<struct FBlueprintSessionResultCustom>& Results);

	void OnFocusGained();

	void OnFocusLost();

	void PrintDebugUser(struct FString AdditionalMessage, class APlayerController* LocalPlayer);

	bool ReSetController(int32_t ControllerIndex);

	void SendReportMessage(struct FString ReportingPlayerID, struct FString ReportingPlayerPlatform, struct FString ReportedPlayerID, struct FString ReportedPlayerPlatform, struct FString Message);

	void SetChatPrivilegeState(bool CanUseChat);

	void SetCrossplayInConfig(bool bEnable);

	void SetCrossplayPrivilegeState(bool CanCrossplay);

	bool SetCurrentPlayer(class APlayerController* PlayerController);

	bool SetCurrentPlayerById(int32_t ID, bool reassign);

	void SetCurrentSessionName(struct FName SessionName);

	void SetGameInitializedForSession(bool gameInit, bool* isSuccess);

	void SetPlayerMultiplayerFeatures(class APlayerController* PC, bool NewState);

	void SetPlayerSessionInConfig(struct FString SessionName);

	void SetRHI(E_GraphicsRHI NewRHI);

	void SetUGCPrivilegeState(bool CanDisplayUGC);

	bool ShowAccountUpgradeUI(class APlayerController* PC);

	bool ShowFriendsInviteUI();

	bool ShowSocialFeaturesRestrictedUI(class APlayerController* PC);

	bool ShowUserProfileUI(class APlayerState* UserProfileToShow, class APlayerState* UserViewingProfile);

	bool TryToLoginLocalPlayer(class ULocalPlayer* LocalPlayer);

	bool TryToLogoutLocalPlayer(class ULocalPlayer* LocalPlayer);

	bool VerifyPlayerState(class APlayerController* PC);

	bool WasPlayerLoggedIn(class ULocalPlayer* CurrentLoggedInPlayer);

#pragma endregion
};
};