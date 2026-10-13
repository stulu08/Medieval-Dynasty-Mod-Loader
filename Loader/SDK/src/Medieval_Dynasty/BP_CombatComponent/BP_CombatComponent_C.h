#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_CombatComponent.BP_CombatComponent_C
// Super: Class Engine.ActorComponent
// Size: 416
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBP_CombatComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//TAssetPtr<class FOnEnteredCombat__DelegateSignature>	OnEnteredCombat;		//Offset: 184	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnEnteredCombat__DelegateSignature> M_GetOnEnteredCombat() const;
	TAssetPtr<class FOnEnteredCombat__DelegateSignature>* M_PtrGetOnEnteredCombat();
	void M_SetOnEnteredCombat(const TAssetPtr<class FOnEnteredCombat__DelegateSignature>& value);

	//TAssetPtr<class FOnLeaveCombat__DelegateSignature>	OnLeaveCombat;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnLeaveCombat__DelegateSignature> M_GetOnLeaveCombat() const;
	TAssetPtr<class FOnLeaveCombat__DelegateSignature>* M_PtrGetOnLeaveCombat();
	void M_SetOnLeaveCombat(const TAssetPtr<class FOnLeaveCombat__DelegateSignature>& value);

	//bool	isDebugEnabled;		//Offset: 216	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//TArray<struct FName>	IgnoreActorTags;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly
	TArray<struct FName> M_GetIgnoreActorTags() const;
	TArray<struct FName>* M_PtrGetIgnoreActorTags();
	void M_SetIgnoreActorTags(const TArray<struct FName>& value);

	//TArray<class AActor*>	CombatCausers;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
	TArray<class AActor*> M_GetCombatCausers() const;
	TArray<class AActor*>* M_PtrGetCombatCausers();
	void M_SetCombatCausers(const TArray<class AActor*>& value);

	//TAssetPtr<class FOnCombatCheck__DelegateSignature>	OnCombatCheck;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCombatCheck__DelegateSignature> M_GetOnCombatCheck() const;
	TAssetPtr<class FOnCombatCheck__DelegateSignature>* M_PtrGetOnCombatCheck();
	void M_SetOnCombatCheck(const TAssetPtr<class FOnCombatCheck__DelegateSignature>& value);

	//TArray<class AActor*>	PreviousCombatCausers;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetPreviousCombatCausers() const;
	TArray<class AActor*>* M_PtrGetPreviousCombatCausers();
	void M_SetPreviousCombatCausers(const TArray<class AActor*>& value);

	//struct FTimerHandle	CombatCausersCheckTimer;		//Offset: 288	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetCombatCausersCheckTimer() const;
	struct FTimerHandle* M_PtrGetCombatCausersCheckTimer();
	void M_SetCombatCausersCheckTimer(const struct FTimerHandle& value);

	//TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>	OnCombatCauserEntered;		//Offset: 296	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCombatCauserEntered__DelegateSignature> M_GetOnCombatCauserEntered() const;
	TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>* M_PtrGetOnCombatCauserEntered();
	void M_SetOnCombatCauserEntered(const TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>& value);

	//TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>	OnCombatCauserLeft;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCombatCauserLeft__DelegateSignature> M_GetOnCombatCauserLeft() const;
	TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>* M_PtrGetOnCombatCauserLeft();
	void M_SetOnCombatCauserLeft(const TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>& value);

	//TMap<class AActor*, unsigned char>	Players;		//Offset: 328	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, unsigned char> M_GetPlayers() const;
	TMap<class AActor*, unsigned char>* M_PtrGetPlayers();
	void M_SetPlayers(const TMap<class AActor*, unsigned char>& value);

	//struct FTimerHandle	PlayerCombatCheckTimer;		//Offset: 408	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPlayerCombatCheckTimer() const;
	struct FTimerHandle* M_PtrGetPlayerCombatCheckTimer();
	void M_SetPlayerCombatCheckTimer(const struct FTimerHandle& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CombatComponent.BP_CombatComponent_C");
		return ptr;
	}

#pragma region Functions
	void OnEnteredCombat__DelegateSignature();

	void OnLeaveCombat__DelegateSignature();

	void OnCombatCheck__DelegateSignature();

	void OnCombatCauserEntered__DelegateSignature(class AActor* CombatCauser);

	void OnCombatCauserLeft__DelegateSignature(class AActor* CombatCauser);

	void ExecuteUbergraph_BP_CombatComponent(int32_t EntryPoint);

	void AddPlayerToCheck_BPI(class AActor* Player);

	void ForceEndCombat_BPI();

	void EndCombat_BPI(class AActor* CombatCauser);

	void StartCombat_BPI(class AActor* CombatCauser);

	void PlayerCheck(class AActor* Causer);

	void GetCombatCausers(TArray<class AActor*>* CombatCausers)/* const*/;

	void CombatCausersCheck();

	void PlayerCombatCheck();

	void OnRep_CombatCausers();

	void IsInCombat_BPI(bool* InCombat)/* const*/;

	void GetCombatCausersBPI(TArray<class AActor*>* CombatCausers)/* const*/;

#pragma endregion
};
};