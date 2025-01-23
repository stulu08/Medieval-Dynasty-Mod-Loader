#include "../SDK.h"
#include "GI_MedievalDynastyBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MicrosoftVersion
// Declaration: bool MicrosoftVersion
bool UGI_MedievalDynastyBase::M_GetMicrosoftVersion() const {
	return Read<bool>((byte*)this + 424);
}
bool* UGI_MedievalDynastyBase::M_PtrGetMicrosoftVersion() {
	return reinterpret_cast<bool*>((byte*)this + 424);
}
void UGI_MedievalDynastyBase::M_SetMicrosoftVersion(const bool& value) {
	Write((byte*)this + 424, value);
}
// Member Getter and Setter of MDGameState
// Declaration: EMD_GameState MDGameState
EMD_GameState UGI_MedievalDynastyBase::M_GetMDGameState() const {
	return Read<EMD_GameState>((byte*)this + 425);
}
EMD_GameState* UGI_MedievalDynastyBase::M_PtrGetMDGameState() {
	return reinterpret_cast<EMD_GameState*>((byte*)this + 425);
}
void UGI_MedievalDynastyBase::M_SetMDGameState(const EMD_GameState& value) {
	Write((byte*)this + 425, value);
}
// Member Getter and Setter of SafeAccChange
// Declaration: bool SafeAccChange
bool UGI_MedievalDynastyBase::M_GetSafeAccChange() const {
	return Read<bool>((byte*)this + 426);
}
bool* UGI_MedievalDynastyBase::M_PtrGetSafeAccChange() {
	return reinterpret_cast<bool*>((byte*)this + 426);
}
void UGI_MedievalDynastyBase::M_SetSafeAccChange(const bool& value) {
	Write((byte*)this + 426, value);
}
// Member Getter and Setter of bUserChanged
// Declaration: bool bUserChanged
bool UGI_MedievalDynastyBase::M_GetbUserChanged() const {
	return Read<bool>((byte*)this + 427);
}
bool* UGI_MedievalDynastyBase::M_PtrGetbUserChanged() {
	return reinterpret_cast<bool*>((byte*)this + 427);
}
void UGI_MedievalDynastyBase::M_SetbUserChanged(const bool& value) {
	Write((byte*)this + 427, value);
}
// Member Getter and Setter of DefaultRHI
// Declaration: E_GraphicsRHI DefaultRHI
E_GraphicsRHI UGI_MedievalDynastyBase::M_GetDefaultRHI() const {
	return Read<E_GraphicsRHI>((byte*)this + 428);
}
E_GraphicsRHI* UGI_MedievalDynastyBase::M_PtrGetDefaultRHI() {
	return reinterpret_cast<E_GraphicsRHI*>((byte*)this + 428);
}
void UGI_MedievalDynastyBase::M_SetDefaultRHI(const E_GraphicsRHI& value) {
	Write((byte*)this + 428, value);
}
// Member Getter and Setter of CurrentRHI
// Declaration: E_GraphicsRHI CurrentRHI
E_GraphicsRHI UGI_MedievalDynastyBase::M_GetCurrentRHI() const {
	return Read<E_GraphicsRHI>((byte*)this + 429);
}
E_GraphicsRHI* UGI_MedievalDynastyBase::M_PtrGetCurrentRHI() {
	return reinterpret_cast<E_GraphicsRHI*>((byte*)this + 429);
}
void UGI_MedievalDynastyBase::M_SetCurrentRHI(const E_GraphicsRHI& value) {
	Write((byte*)this + 429, value);
}
// Member Getter and Setter of bIsDX12Supported
// Declaration: bool bIsDX12Supported
bool UGI_MedievalDynastyBase::M_GetbIsDX12Supported() const {
	return Read<bool>((byte*)this + 430);
}
bool* UGI_MedievalDynastyBase::M_PtrGetbIsDX12Supported() {
	return reinterpret_cast<bool*>((byte*)this + 430);
}
void UGI_MedievalDynastyBase::M_SetbIsDX12Supported(const bool& value) {
	Write((byte*)this + 430, value);
}
// Member Getter and Setter of bHasInternetConnection
// Declaration: bool bHasInternetConnection
bool UGI_MedievalDynastyBase::M_GetbHasInternetConnection() const {
	return Read<bool>((byte*)this + 431);
}
bool* UGI_MedievalDynastyBase::M_PtrGetbHasInternetConnection() {
	return reinterpret_cast<bool*>((byte*)this + 431);
}
void UGI_MedievalDynastyBase::M_SetbHasInternetConnection(const bool& value) {
	Write((byte*)this + 431, value);
}
// Member Getter and Setter of OnPlayerIsLoggedInDelegate
// Declaration: TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature> OnPlayerIsLoggedInDelegate
TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature> UGI_MedievalDynastyBase::M_GetOnPlayerIsLoggedInDelegate() const {
	return Read<TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>>((byte*)this + 432);
}
TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>* UGI_MedievalDynastyBase::M_PtrGetOnPlayerIsLoggedInDelegate() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>*>((byte*)this + 432);
}
void UGI_MedievalDynastyBase::M_SetOnPlayerIsLoggedInDelegate(const TAssetPtr<class FOnPlayerIsLoggedInHandle__DelegateSignature>& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of MessageDelegate
// Declaration: TAssetPtr<class FNewMessageDelegate__DelegateSignature> MessageDelegate
TAssetPtr<class FNewMessageDelegate__DelegateSignature> UGI_MedievalDynastyBase::M_GetMessageDelegate() const {
	return Read<TAssetPtr<class FNewMessageDelegate__DelegateSignature>>((byte*)this + 448);
}
TAssetPtr<class FNewMessageDelegate__DelegateSignature>* UGI_MedievalDynastyBase::M_PtrGetMessageDelegate() {
	return reinterpret_cast<TAssetPtr<class FNewMessageDelegate__DelegateSignature>*>((byte*)this + 448);
}
void UGI_MedievalDynastyBase::M_SetMessageDelegate(const TAssetPtr<class FNewMessageDelegate__DelegateSignature>& value) {
	Write((byte*)this + 448, value);
}
// Member Getter and Setter of ConnectionDelegate
// Declaration: TAssetPtr<class FConnectionChangedDelegate__DelegateSignature> ConnectionDelegate
TAssetPtr<class FConnectionChangedDelegate__DelegateSignature> UGI_MedievalDynastyBase::M_GetConnectionDelegate() const {
	return Read<TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>>((byte*)this + 464);
}
TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>* UGI_MedievalDynastyBase::M_PtrGetConnectionDelegate() {
	return reinterpret_cast<TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>*>((byte*)this + 464);
}
void UGI_MedievalDynastyBase::M_SetConnectionDelegate(const TAssetPtr<class FConnectionChangedDelegate__DelegateSignature>& value) {
	Write((byte*)this + 464, value);
}
// Member Getter and Setter of AppReactivatedDelegate
// Declaration: TAssetPtr<class FAppReactivatedDelegate__DelegateSignature> AppReactivatedDelegate
TAssetPtr<class FAppReactivatedDelegate__DelegateSignature> UGI_MedievalDynastyBase::M_GetAppReactivatedDelegate() const {
	return Read<TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>>((byte*)this + 480);
}
TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>* UGI_MedievalDynastyBase::M_PtrGetAppReactivatedDelegate() {
	return reinterpret_cast<TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>*>((byte*)this + 480);
}
void UGI_MedievalDynastyBase::M_SetAppReactivatedDelegate(const TAssetPtr<class FAppReactivatedDelegate__DelegateSignature>& value) {
	Write((byte*)this + 480, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.AddPlayerToRecentPlayers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserStateToBeAdded	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::AddPlayerToRecentPlayers(class APlayerController* PC, class APlayerState* UserStateToBeAdded) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.AddPlayerToRecentPlayers");

	struct UGI_MedievalDynastyBase_AddPlayerToRecentPlayers_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		class APlayerState* UserStateToBeAdded;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_AddPlayerToRecentPlayers_Params params;
	params.PC = PC;
	params.UserStateToBeAdded = UserStateToBeAdded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.CacheBlockList
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::CacheBlockList() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.CacheBlockList");

	struct UGI_MedievalDynastyBase_CacheBlockList_Params {
	};
	UGI_MedievalDynastyBase_CacheBlockList_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckForDX12Support
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::CheckForDX12Support() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckForDX12Support");

	struct UGI_MedievalDynastyBase_CheckForDX12Support_Params {
	};
	UGI_MedievalDynastyBase_CheckForDX12Support_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckIfPlayerIsBlockedOnService
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserToBeChecked	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::CheckIfPlayerIsBlockedOnService(class APlayerController* PC, class APlayerState* UserToBeChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckIfPlayerIsBlockedOnService");

	struct UGI_MedievalDynastyBase_CheckIfPlayerIsBlockedOnService_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		class APlayerState* UserToBeChecked;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_CheckIfPlayerIsBlockedOnService_Params params;
	params.PC = PC;
	params.UserToBeChecked = UserToBeChecked;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckWhichPlayersAreBlockedByNetID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UsersToBeFiltered	Type: TArray<struct FString>	Flags: ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UGI_MedievalDynastyBase::CheckWhichPlayersAreBlockedByNetID(class APlayerController* PC, TArray<struct FString> UsersToBeFiltered) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.CheckWhichPlayersAreBlockedByNetID");

	struct UGI_MedievalDynastyBase_CheckWhichPlayersAreBlockedByNetID_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		TArray<struct FString> UsersToBeFiltered;			//Offset: 8 | ElementSize: 16
		TArray<struct FString> ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_CheckWhichPlayersAreBlockedByNetID_Params params;
	params.PC = PC;
	params.UsersToBeFiltered = UsersToBeFiltered;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ClearPreviousPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::ClearPreviousPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ClearPreviousPlayer");

	struct UGI_MedievalDynastyBase_ClearPreviousPlayer_Params {
	};
	UGI_MedievalDynastyBase_ClearPreviousPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.DoesCurrentSessionHaveCrossplayEnabled
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: IsEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SuccessfullyRetrieved	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::DoesCurrentSessionHaveCrossplayEnabled(bool* IsEnabled, bool* SuccessfullyRetrieved) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.DoesCurrentSessionHaveCrossplayEnabled");

	struct UGI_MedievalDynastyBase_DoesCurrentSessionHaveCrossplayEnabled_Params {
		bool IsEnabled;			//Offset: 0 | ElementSize: 1
		bool SuccessfullyRetrieved;			//Offset: 1 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_DoesCurrentSessionHaveCrossplayEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
	if (SuccessfullyRetrieved != nullptr)
		*SuccessfullyRetrieved = params.SuccessfullyRetrieved;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.FindSessions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchSessionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaxResults	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseLAN	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString SearchSessionName, int32_t MaxResults, bool bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.FindSessions");

	struct UGI_MedievalDynastyBase_FindSessions_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FString SearchSessionName;			//Offset: 16 | ElementSize: 16
		int32_t MaxResults;			//Offset: 32 | ElementSize: 4
		bool bUseLAN;			//Offset: 36 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchSessionName = SearchSessionName;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetAccountInfo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UGI_MedievalDynastyBase::GetAccountInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetAccountInfo");

	struct UGI_MedievalDynastyBase_GetAccountInfo_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetAccountInfo_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetBlockedPlayersIDs
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UGI_MedievalDynastyBase::GetBlockedPlayersIDs(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetBlockedPlayersIDs");

	struct UGI_MedievalDynastyBase_GetBlockedPlayersIDs_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		TArray<struct FString> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetBlockedPlayersIDs_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetChatPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::GetChatPrivilegeState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetChatPrivilegeState");

	struct UGI_MedievalDynastyBase_GetChatPrivilegeState_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetChatPrivilegeState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCrossplayPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::GetCrossplayPrivilegeState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCrossplayPrivilegeState");

	struct UGI_MedievalDynastyBase_GetCrossplayPrivilegeState_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetCrossplayPrivilegeState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentPlayerUniqueId
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UGI_MedievalDynastyBase::GetCurrentPlayerUniqueId() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentPlayerUniqueId");

	struct UGI_MedievalDynastyBase_GetCurrentPlayerUniqueId_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetCurrentPlayerUniqueId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentRHI
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: GetFromFile	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: E_GraphicsRHI	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
E_GraphicsRHI UGI_MedievalDynastyBase::GetCurrentRHI(bool GetFromFile) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentRHI");

	struct UGI_MedievalDynastyBase_GetCurrentRHI_Params {
		bool GetFromFile;			//Offset: 0 | ElementSize: 1
		E_GraphicsRHI ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetCurrentRHI_Params params;
	params.GetFromFile = GetFromFile;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentSessionName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UGI_MedievalDynastyBase::GetCurrentSessionName() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentSessionName");

	struct UGI_MedievalDynastyBase_GetCurrentSessionName_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynastyBase_GetCurrentSessionName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentUserIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UGI_MedievalDynastyBase::GetCurrentUserIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentUserIndex");

	struct UGI_MedievalDynastyBase_GetCurrentUserIndex_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynastyBase_GetCurrentUserIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetInternetConnectionStatus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::GetInternetConnectionStatus() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetInternetConnectionStatus");

	struct UGI_MedievalDynastyBase_GetInternetConnectionStatus_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetInternetConnectionStatus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetLocalPlayerController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerController* UGI_MedievalDynastyBase::GetLocalPlayerController() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetLocalPlayerController");

	struct UGI_MedievalDynastyBase_GetLocalPlayerController_Params {
		class APlayerController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynastyBase_GetLocalPlayerController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetLocalPlayerUniqueId
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UGI_MedievalDynastyBase::GetLocalPlayerUniqueId() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetLocalPlayerUniqueId");

	struct UGI_MedievalDynastyBase_GetLocalPlayerUniqueId_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetLocalPlayerUniqueId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPasswordForSessionByName
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: SessionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isSuccess	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UGI_MedievalDynastyBase::GetPasswordForSessionByName(struct FName SessionName, bool* isSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPasswordForSessionByName");

	struct UGI_MedievalDynastyBase_GetPasswordForSessionByName_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
		bool isSuccess;			//Offset: 8 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetPasswordForSessionByName_Params params;
	params.SessionName = SessionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (isSuccess != nullptr)
		*isSuccess = params.isSuccess;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlatformUserID
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UGI_MedievalDynastyBase::GetPlatformUserID() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlatformUserID");

	struct UGI_MedievalDynastyBase_GetPlatformUserID_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynastyBase_GetPlatformUserID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlayerBanStateCached
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::GetPlayerBanStateCached() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlayerBanStateCached");

	struct UGI_MedievalDynastyBase_GetPlayerBanStateCached_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetPlayerBanStateCached_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlayerBanStateFromServer
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: PlayerId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerPlatform	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::GetPlayerBanStateFromServer(struct FString PlayerId, struct FString PlayerPlatform) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetPlayerBanStateFromServer");

	struct UGI_MedievalDynastyBase_GetPlayerBanStateFromServer_Params {
		struct FString PlayerId;			//Offset: 0 | ElementSize: 16
		struct FString PlayerPlatform;			//Offset: 16 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_GetPlayerBanStateFromServer_Params params;
	params.PlayerId = PlayerId;
	params.PlayerPlatform = PlayerPlatform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetUGCPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::GetUGCPrivilegeState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.GetUGCPrivilegeState");

	struct UGI_MedievalDynastyBase_GetUGCPrivilegeState_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_GetUGCPrivilegeState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.HandleSessionInvite
// Flags: Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: bWasSuccessful	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocalUserNum	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserUNiD	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SessionToJoin	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::HandleSessionInvite(bool bWasSuccessful, int32_t LocalUserNum, struct FString UserUNiD, const struct FBlueprintSessionResultCustom& SessionToJoin) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.HandleSessionInvite");

	struct UGI_MedievalDynastyBase_HandleSessionInvite_Params {
		bool bWasSuccessful;			//Offset: 0 | ElementSize: 1
		int32_t LocalUserNum;			//Offset: 4 | ElementSize: 4
		struct FString UserUNiD;			//Offset: 8 | ElementSize: 16
		struct FBlueprintSessionResultCustom SessionToJoin;			//Offset: 24 | ElementSize: 264
	};
	UGI_MedievalDynastyBase_HandleSessionInvite_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserNum = LocalUserNum;
	params.UserUNiD = UserUNiD;
	params.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.IsLoggedInNative
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::IsLoggedInNative(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.IsLoggedInNative");

	struct UGI_MedievalDynastyBase_IsLoggedInNative_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_IsLoggedInNative_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFindSessionFinished
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Results	Type: TArray<struct FBlueprintSessionResultCustom>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::OnFindSessionFinished(const TArray<struct FBlueprintSessionResultCustom>& Results) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFindSessionFinished");

	struct UGI_MedievalDynastyBase_OnFindSessionFinished_Params {
		TArray<struct FBlueprintSessionResultCustom> Results;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_OnFindSessionFinished_Params params;
	params.Results = Results;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFocusGained
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::OnFocusGained() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFocusGained");

	struct UGI_MedievalDynastyBase_OnFocusGained_Params {
	};
	UGI_MedievalDynastyBase_OnFocusGained_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFocusLost
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::OnFocusLost() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.OnFocusLost");

	struct UGI_MedievalDynastyBase_OnFocusLost_Params {
	};
	UGI_MedievalDynastyBase_OnFocusLost_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.PrintDebugUser
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: AdditionalMessage	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocalPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::PrintDebugUser(struct FString AdditionalMessage, class APlayerController* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.PrintDebugUser");

	struct UGI_MedievalDynastyBase_PrintDebugUser_Params {
		struct FString AdditionalMessage;			//Offset: 0 | ElementSize: 16
		class APlayerController* LocalPlayer;			//Offset: 16 | ElementSize: 8
	};
	UGI_MedievalDynastyBase_PrintDebugUser_Params params;
	params.AdditionalMessage = AdditionalMessage;
	params.LocalPlayer = LocalPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ReSetController
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ControllerIndex	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::ReSetController(int32_t ControllerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ReSetController");

	struct UGI_MedievalDynastyBase_ReSetController_Params {
		int32_t ControllerIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_ReSetController_Params params;
	params.ControllerIndex = ControllerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SendReportMessage
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: ReportingPlayerID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReportingPlayerPlatform	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReportedPlayerID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReportedPlayerPlatform	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SendReportMessage(struct FString ReportingPlayerID, struct FString ReportingPlayerPlatform, struct FString ReportedPlayerID, struct FString ReportedPlayerPlatform, struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SendReportMessage");

	struct UGI_MedievalDynastyBase_SendReportMessage_Params {
		struct FString ReportingPlayerID;			//Offset: 0 | ElementSize: 16
		struct FString ReportingPlayerPlatform;			//Offset: 16 | ElementSize: 16
		struct FString ReportedPlayerID;			//Offset: 32 | ElementSize: 16
		struct FString ReportedPlayerPlatform;			//Offset: 48 | ElementSize: 16
		struct FString Message;			//Offset: 64 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_SendReportMessage_Params params;
	params.ReportingPlayerID = ReportingPlayerID;
	params.ReportingPlayerPlatform = ReportingPlayerPlatform;
	params.ReportedPlayerID = ReportedPlayerID;
	params.ReportedPlayerPlatform = ReportedPlayerPlatform;
	params.Message = Message;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetChatPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CanUseChat	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetChatPrivilegeState(bool CanUseChat) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetChatPrivilegeState");

	struct UGI_MedievalDynastyBase_SetChatPrivilegeState_Params {
		bool CanUseChat;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetChatPrivilegeState_Params params;
	params.CanUseChat = CanUseChat;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCrossplayInConfig
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetCrossplayInConfig(bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCrossplayInConfig");

	struct UGI_MedievalDynastyBase_SetCrossplayInConfig_Params {
		bool bEnable;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetCrossplayInConfig_Params params;
	params.bEnable = bEnable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCrossplayPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CanCrossplay	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetCrossplayPrivilegeState(bool CanCrossplay) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCrossplayPrivilegeState");

	struct UGI_MedievalDynastyBase_SetCrossplayPrivilegeState_Params {
		bool CanCrossplay;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetCrossplayPrivilegeState_Params params;
	params.CanCrossplay = CanCrossplay;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::SetCurrentPlayer(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayer");

	struct UGI_MedievalDynastyBase_SetCurrentPlayer_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetCurrentPlayer_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayerById
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: reassign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::SetCurrentPlayerById(int32_t ID, bool reassign) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayerById");

	struct UGI_MedievalDynastyBase_SetCurrentPlayerById_Params {
		int32_t ID;			//Offset: 0 | ElementSize: 4
		bool reassign;			//Offset: 4 | ElementSize: 1
		bool ReturnValue;			//Offset: 5 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetCurrentPlayerById_Params params;
	params.ID = ID;
	params.reassign = reassign;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentSessionName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SessionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetCurrentSessionName(struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentSessionName");

	struct UGI_MedievalDynastyBase_SetCurrentSessionName_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynastyBase_SetCurrentSessionName_Params params;
	params.SessionName = SessionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetGameInitializedForSession
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: gameInit	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isSuccess	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetGameInitializedForSession(bool gameInit, bool* isSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetGameInitializedForSession");

	struct UGI_MedievalDynastyBase_SetGameInitializedForSession_Params {
		bool gameInit;			//Offset: 0 | ElementSize: 1
		bool isSuccess;			//Offset: 1 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetGameInitializedForSession_Params params;
	params.gameInit = gameInit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (isSuccess != nullptr)
		*isSuccess = params.isSuccess;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetPlayerMultiplayerFeatures
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetPlayerMultiplayerFeatures(class APlayerController* PC, bool NewState) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetPlayerMultiplayerFeatures");

	struct UGI_MedievalDynastyBase_SetPlayerMultiplayerFeatures_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		bool NewState;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetPlayerMultiplayerFeatures_Params params;
	params.PC = PC;
	params.NewState = NewState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetPlayerSessionInConfig
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SessionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetPlayerSessionInConfig(struct FString SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetPlayerSessionInConfig");

	struct UGI_MedievalDynastyBase_SetPlayerSessionInConfig_Params {
		struct FString SessionName;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynastyBase_SetPlayerSessionInConfig_Params params;
	params.SessionName = SessionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetRHI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewRHI	Type: E_GraphicsRHI	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetRHI(E_GraphicsRHI NewRHI) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetRHI");

	struct UGI_MedievalDynastyBase_SetRHI_Params {
		E_GraphicsRHI NewRHI;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetRHI_Params params;
	params.NewRHI = NewRHI;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetUGCPrivilegeState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CanDisplayUGC	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::SetUGCPrivilegeState(bool CanDisplayUGC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetUGCPrivilegeState");

	struct UGI_MedievalDynastyBase_SetUGCPrivilegeState_Params {
		bool CanDisplayUGC;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetUGCPrivilegeState_Params params;
	params.CanDisplayUGC = CanDisplayUGC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowAccountUpgradeUI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::ShowAccountUpgradeUI(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowAccountUpgradeUI");

	struct UGI_MedievalDynastyBase_ShowAccountUpgradeUI_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_ShowAccountUpgradeUI_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowFriendsInviteUI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::ShowFriendsInviteUI() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowFriendsInviteUI");

	struct UGI_MedievalDynastyBase_ShowFriendsInviteUI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_ShowFriendsInviteUI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowSocialFeaturesRestrictedUI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::ShowSocialFeaturesRestrictedUI(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowSocialFeaturesRestrictedUI");

	struct UGI_MedievalDynastyBase_ShowSocialFeaturesRestrictedUI_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_ShowSocialFeaturesRestrictedUI_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowUserProfileUI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: UserProfileToShow	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserViewingProfile	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::ShowUserProfileUI(class APlayerState* UserProfileToShow, class APlayerState* UserViewingProfile) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.ShowUserProfileUI");

	struct UGI_MedievalDynastyBase_ShowUserProfileUI_Params {
		class APlayerState* UserProfileToShow;			//Offset: 0 | ElementSize: 8
		class APlayerState* UserViewingProfile;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_ShowUserProfileUI_Params params;
	params.UserProfileToShow = UserProfileToShow;
	params.UserViewingProfile = UserViewingProfile;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.TryToLoginLocalPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocalPlayer	Type: class ULocalPlayer*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::TryToLoginLocalPlayer(class ULocalPlayer* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.TryToLoginLocalPlayer");

	struct UGI_MedievalDynastyBase_TryToLoginLocalPlayer_Params {
		class ULocalPlayer* LocalPlayer;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_TryToLoginLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.TryToLogoutLocalPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocalPlayer	Type: class ULocalPlayer*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::TryToLogoutLocalPlayer(class ULocalPlayer* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.TryToLogoutLocalPlayer");

	struct UGI_MedievalDynastyBase_TryToLogoutLocalPlayer_Params {
		class ULocalPlayer* LocalPlayer;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_TryToLogoutLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.VerifyPlayerState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::VerifyPlayerState(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.VerifyPlayerState");

	struct UGI_MedievalDynastyBase_VerifyPlayerState_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_VerifyPlayerState_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.GI_MedievalDynastyBase.WasPlayerLoggedIn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CurrentLoggedInPlayer	Type: class ULocalPlayer*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::WasPlayerLoggedIn(class ULocalPlayer* CurrentLoggedInPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.WasPlayerLoggedIn");

	struct UGI_MedievalDynastyBase_WasPlayerLoggedIn_Params {
		class ULocalPlayer* CurrentLoggedInPlayer;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_WasPlayerLoggedIn_Params params;
	params.CurrentLoggedInPlayer = CurrentLoggedInPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}