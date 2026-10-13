#pragma once
#include "Structs.h"
#include "Engine/PlayerState.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MD_PlayerState
// Super: Class Engine.PlayerState
// Size: 840
// Size inherited: 800
/////////////////////////////////////////////
namespace UE4 {
class AMD_PlayerState : public APlayerState {
public:
#pragma region Members
	//bool	bUnlimitedHP;		//Offset: 808	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUnlimitedHP() const;
	bool* M_PtrGetbUnlimitedHP();
	void M_SetbUnlimitedHP(const bool& value);

	//bool	bUnlimitedStamina;		//Offset: 809	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUnlimitedStamina() const;
	bool* M_PtrGetbUnlimitedStamina();
	void M_SetbUnlimitedStamina(const bool& value);

	//bool	bUnlimitedFood;		//Offset: 810	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUnlimitedFood() const;
	bool* M_PtrGetbUnlimitedFood();
	void M_SetbUnlimitedFood(const bool& value);

	//bool	bUnlimitedWater;		//Offset: 811	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUnlimitedWater() const;
	bool* M_PtrGetbUnlimitedWater();
	void M_SetbUnlimitedWater(const bool& value);

	//bool	bUnlimitedWeight;		//Offset: 812	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUnlimitedWeight() const;
	bool* M_PtrGetbUnlimitedWeight();
	void M_SetbUnlimitedWeight(const bool& value);

	//bool	bPoisoning;		//Offset: 813	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbPoisoning() const;
	bool* M_PtrGetbPoisoning();
	void M_SetbPoisoning(const bool& value);

	//bool	bTemperature;		//Offset: 814	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbTemperature() const;
	bool* M_PtrGetbTemperature();
	void M_SetbTemperature(const bool& value);

	//bool	bFastCrafting;		//Offset: 815	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFastCrafting() const;
	bool* M_PtrGetbFastCrafting();
	void M_SetbFastCrafting(const bool& value);

	//bool	bFastBuilding;		//Offset: 816	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFastBuilding() const;
	bool* M_PtrGetbFastBuilding();
	void M_SetbFastBuilding(const bool& value);

	//bool	bFastStorage;		//Offset: 817	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFastStorage() const;
	bool* M_PtrGetbFastStorage();
	void M_SetbFastStorage(const bool& value);

	//TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>	OnUnlimitedWeightChanged;		//Offset: 824	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature> M_GetOnUnlimitedWeightChanged() const;
	TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>* M_PtrGetOnUnlimitedWeightChanged();
	void M_SetOnUnlimitedWeightChanged(const TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MD_PlayerState");
		return ptr;
	}

#pragma region Functions
	void OnRep_UnlimitedWeight();

	void SetFastBuilding(bool NewFastBuilding);

	void SetFastBuilding_Server(bool FastBuilding);

	void SetFastCrafting(bool NewFastCrafting);

	void SetFastCrafting_Server(bool FastCrafting);

	void SetFastStorage(bool NewFastStorage);

	void SetFastStorage_Server(bool FastStorage);

	void SetPoisoning(bool NewPoisoning);

	void SetPoisoning_Server(bool Poisoning);

	void SetTemperature(bool NewTemperature);

	void SetTemperature_Server(bool Temperature);

	void SetUnlimitedFood(bool NewUnlimitedFood);

	void SetUnlimitedFood_Server(bool UnlimitedFood);

	void SetUnlimitedHP(bool NewUnlimitedHP);

	void SetUnlimitedHP_Server(bool UnlimitedHP);

	void SetUnlimitedStamina(bool NewUnlimitedStamina);

	void SetUnlimitedStamina_Server(bool UnlimitedStamina);

	void SetUnlimitedWater(bool NewUnlimitedWater);

	void SetUnlimitedWater_Server(bool UnlimitedWater);

	void SetUnlimitedWeight(bool NewUnlimitedWeight);

	void SetUnlimitedWeight_Server(bool UnlimitedWeight);

#pragma endregion
};
};