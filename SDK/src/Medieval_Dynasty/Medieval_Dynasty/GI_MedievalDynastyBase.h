#pragma once
#include "Structs.h"
#include "Engine/GameInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.GI_MedievalDynastyBase
// Super: Class Engine.GameInstance
// Size: 496
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

	//TAssetPtr<class FNewMessageDelegate__DelegateSignature>	MessageDelegate;		//Offset: 480	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FNewMessageDelegate__DelegateSignature> M_GetMessageDelegate() const;
	TAssetPtr<class FNewMessageDelegate__DelegateSignature>* M_PtrGetMessageDelegate();
	void M_SetMessageDelegate(const TAssetPtr<class FNewMessageDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.GI_MedievalDynastyBase");
		return ptr;
	}

#pragma region Functions
	void CheckForDX12Support();

	void ClearPreviousPlayer();

	TArray<struct FString> GetAccountInfo();

	E_GraphicsRHI GetCurrentRHI(bool GetFromFile);

	int32_t GetCurrentUserIndex();

	int32_t GetPlatformUserID();

	void OnFocusGained();

	void OnFocusLost();

	void PrintDebugUser(class APlayerController* LocalPlayer);

	bool ReSetController(int32_t ControllerIndex);

	bool SetCurrentPlayer(class ULocalPlayer* LocalPlayer);

	void SetRHI(E_GraphicsRHI NewRHI);

	bool WasPlayerLoggedIn(class ULocalPlayer* CurrentLoggedInPlayer);

#pragma endregion
};
};