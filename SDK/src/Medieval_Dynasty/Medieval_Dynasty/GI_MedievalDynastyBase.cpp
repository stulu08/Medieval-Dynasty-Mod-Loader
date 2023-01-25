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
// Member Getter and Setter of MessageDelegate
// Declaration: TAssetPtr<class FNewMessageDelegate__DelegateSignature> MessageDelegate
TAssetPtr<class FNewMessageDelegate__DelegateSignature> UGI_MedievalDynastyBase::M_GetMessageDelegate() const {
	return Read<TAssetPtr<class FNewMessageDelegate__DelegateSignature>>((byte*)this + 480);
}
TAssetPtr<class FNewMessageDelegate__DelegateSignature>* UGI_MedievalDynastyBase::M_PtrGetMessageDelegate() {
	return reinterpret_cast<TAssetPtr<class FNewMessageDelegate__DelegateSignature>*>((byte*)this + 480);
}
void UGI_MedievalDynastyBase::M_SetMessageDelegate(const TAssetPtr<class FNewMessageDelegate__DelegateSignature>& value) {
	Write((byte*)this + 480, value);
}
#pragma endregion
#pragma region Functions
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
// Function Medieval_Dynasty.GI_MedievalDynastyBase.GetCurrentRHI
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: GetFromFile	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: E_GraphicsRHI	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
E_GraphicsRHI UGI_MedievalDynastyBase::GetCurrentRHI(const bool GetFromFile) {
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
// Name: LocalPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UGI_MedievalDynastyBase::PrintDebugUser(class APlayerController* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.PrintDebugUser");

	struct UGI_MedievalDynastyBase_PrintDebugUser_Params {
		class APlayerController* LocalPlayer;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynastyBase_PrintDebugUser_Params params;
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
bool UGI_MedievalDynastyBase::ReSetController(const int32_t ControllerIndex) {
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
// Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayer
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocalPlayer	Type: class ULocalPlayer*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UGI_MedievalDynastyBase::SetCurrentPlayer(class ULocalPlayer* LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GI_MedievalDynastyBase.SetCurrentPlayer");

	struct UGI_MedievalDynastyBase_SetCurrentPlayer_Params {
		class ULocalPlayer* LocalPlayer;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UGI_MedievalDynastyBase_SetCurrentPlayer_Params params;
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