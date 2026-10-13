#include "../SDK.h"
#include "MD_PlayerState.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bUnlimitedHP
// Declaration: bool bUnlimitedHP
bool AMD_PlayerState::M_GetbUnlimitedHP() const {
	return Read<bool>((byte*)this + 808);
}
bool* AMD_PlayerState::M_PtrGetbUnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 808);
}
void AMD_PlayerState::M_SetbUnlimitedHP(const bool& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of bUnlimitedStamina
// Declaration: bool bUnlimitedStamina
bool AMD_PlayerState::M_GetbUnlimitedStamina() const {
	return Read<bool>((byte*)this + 809);
}
bool* AMD_PlayerState::M_PtrGetbUnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 809);
}
void AMD_PlayerState::M_SetbUnlimitedStamina(const bool& value) {
	Write((byte*)this + 809, value);
}
// Member Getter and Setter of bUnlimitedFood
// Declaration: bool bUnlimitedFood
bool AMD_PlayerState::M_GetbUnlimitedFood() const {
	return Read<bool>((byte*)this + 810);
}
bool* AMD_PlayerState::M_PtrGetbUnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 810);
}
void AMD_PlayerState::M_SetbUnlimitedFood(const bool& value) {
	Write((byte*)this + 810, value);
}
// Member Getter and Setter of bUnlimitedWater
// Declaration: bool bUnlimitedWater
bool AMD_PlayerState::M_GetbUnlimitedWater() const {
	return Read<bool>((byte*)this + 811);
}
bool* AMD_PlayerState::M_PtrGetbUnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 811);
}
void AMD_PlayerState::M_SetbUnlimitedWater(const bool& value) {
	Write((byte*)this + 811, value);
}
// Member Getter and Setter of bUnlimitedWeight
// Declaration: bool bUnlimitedWeight
bool AMD_PlayerState::M_GetbUnlimitedWeight() const {
	return Read<bool>((byte*)this + 812);
}
bool* AMD_PlayerState::M_PtrGetbUnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 812);
}
void AMD_PlayerState::M_SetbUnlimitedWeight(const bool& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of bPoisoning
// Declaration: bool bPoisoning
bool AMD_PlayerState::M_GetbPoisoning() const {
	return Read<bool>((byte*)this + 813);
}
bool* AMD_PlayerState::M_PtrGetbPoisoning() {
	return reinterpret_cast<bool*>((byte*)this + 813);
}
void AMD_PlayerState::M_SetbPoisoning(const bool& value) {
	Write((byte*)this + 813, value);
}
// Member Getter and Setter of bTemperature
// Declaration: bool bTemperature
bool AMD_PlayerState::M_GetbTemperature() const {
	return Read<bool>((byte*)this + 814);
}
bool* AMD_PlayerState::M_PtrGetbTemperature() {
	return reinterpret_cast<bool*>((byte*)this + 814);
}
void AMD_PlayerState::M_SetbTemperature(const bool& value) {
	Write((byte*)this + 814, value);
}
// Member Getter and Setter of bFastCrafting
// Declaration: bool bFastCrafting
bool AMD_PlayerState::M_GetbFastCrafting() const {
	return Read<bool>((byte*)this + 815);
}
bool* AMD_PlayerState::M_PtrGetbFastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 815);
}
void AMD_PlayerState::M_SetbFastCrafting(const bool& value) {
	Write((byte*)this + 815, value);
}
// Member Getter and Setter of bFastBuilding
// Declaration: bool bFastBuilding
bool AMD_PlayerState::M_GetbFastBuilding() const {
	return Read<bool>((byte*)this + 816);
}
bool* AMD_PlayerState::M_PtrGetbFastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 816);
}
void AMD_PlayerState::M_SetbFastBuilding(const bool& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bFastStorage
// Declaration: bool bFastStorage
bool AMD_PlayerState::M_GetbFastStorage() const {
	return Read<bool>((byte*)this + 817);
}
bool* AMD_PlayerState::M_PtrGetbFastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 817);
}
void AMD_PlayerState::M_SetbFastStorage(const bool& value) {
	Write((byte*)this + 817, value);
}
// Member Getter and Setter of OnUnlimitedWeightChanged
// Declaration: TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature> OnUnlimitedWeightChanged
TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature> AMD_PlayerState::M_GetOnUnlimitedWeightChanged() const {
	return Read<TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>>((byte*)this + 824);
}
TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>* AMD_PlayerState::M_PtrGetOnUnlimitedWeightChanged() {
	return reinterpret_cast<TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>*>((byte*)this + 824);
}
void AMD_PlayerState::M_SetOnUnlimitedWeightChanged(const TAssetPtr<class FUnlimitedWeightSignature__DelegateSignature>& value) {
	Write((byte*)this + 824, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.OnRep_UnlimitedWeight
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AMD_PlayerState::OnRep_UnlimitedWeight() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.OnRep_UnlimitedWeight");

	struct AMD_PlayerState_OnRep_UnlimitedWeight_Params {
	};
	AMD_PlayerState_OnRep_UnlimitedWeight_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastBuilding
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFastBuilding	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastBuilding(bool NewFastBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastBuilding");

	struct AMD_PlayerState_SetFastBuilding_Params {
		bool NewFastBuilding;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastBuilding_Params params;
	params.NewFastBuilding = NewFastBuilding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastBuilding_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: FastBuilding	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastBuilding_Server(bool FastBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastBuilding_Server");

	struct AMD_PlayerState_SetFastBuilding_Server_Params {
		bool FastBuilding;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastBuilding_Server_Params params;
	params.FastBuilding = FastBuilding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastCrafting
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFastCrafting	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastCrafting(bool NewFastCrafting) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastCrafting");

	struct AMD_PlayerState_SetFastCrafting_Params {
		bool NewFastCrafting;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastCrafting_Params params;
	params.NewFastCrafting = NewFastCrafting;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastCrafting_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: FastCrafting	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastCrafting_Server(bool FastCrafting) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastCrafting_Server");

	struct AMD_PlayerState_SetFastCrafting_Server_Params {
		bool FastCrafting;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastCrafting_Server_Params params;
	params.FastCrafting = FastCrafting;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastStorage
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFastStorage	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastStorage(bool NewFastStorage) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastStorage");

	struct AMD_PlayerState_SetFastStorage_Params {
		bool NewFastStorage;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastStorage_Params params;
	params.NewFastStorage = NewFastStorage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetFastStorage_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: FastStorage	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetFastStorage_Server(bool FastStorage) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetFastStorage_Server");

	struct AMD_PlayerState_SetFastStorage_Server_Params {
		bool FastStorage;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetFastStorage_Server_Params params;
	params.FastStorage = FastStorage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetPoisoning
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPoisoning	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetPoisoning(bool NewPoisoning) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetPoisoning");

	struct AMD_PlayerState_SetPoisoning_Params {
		bool NewPoisoning;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetPoisoning_Params params;
	params.NewPoisoning = NewPoisoning;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetPoisoning_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Poisoning	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetPoisoning_Server(bool Poisoning) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetPoisoning_Server");

	struct AMD_PlayerState_SetPoisoning_Server_Params {
		bool Poisoning;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetPoisoning_Server_Params params;
	params.Poisoning = Poisoning;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetTemperature
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTemperature	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetTemperature(bool NewTemperature) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetTemperature");

	struct AMD_PlayerState_SetTemperature_Params {
		bool NewTemperature;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetTemperature_Params params;
	params.NewTemperature = NewTemperature;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetTemperature_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Temperature	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetTemperature_Server(bool Temperature) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetTemperature_Server");

	struct AMD_PlayerState_SetTemperature_Server_Params {
		bool Temperature;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetTemperature_Server_Params params;
	params.Temperature = Temperature;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedFood
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUnlimitedFood	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedFood(bool NewUnlimitedFood) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedFood");

	struct AMD_PlayerState_SetUnlimitedFood_Params {
		bool NewUnlimitedFood;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedFood_Params params;
	params.NewUnlimitedFood = NewUnlimitedFood;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedFood_Server
// Flags: Net, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: UnlimitedFood	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedFood_Server(bool UnlimitedFood) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedFood_Server");

	struct AMD_PlayerState_SetUnlimitedFood_Server_Params {
		bool UnlimitedFood;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedFood_Server_Params params;
	params.UnlimitedFood = UnlimitedFood;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedHP
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUnlimitedHP	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedHP(bool NewUnlimitedHP) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedHP");

	struct AMD_PlayerState_SetUnlimitedHP_Params {
		bool NewUnlimitedHP;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedHP_Params params;
	params.NewUnlimitedHP = NewUnlimitedHP;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedHP_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: UnlimitedHP	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedHP_Server(bool UnlimitedHP) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedHP_Server");

	struct AMD_PlayerState_SetUnlimitedHP_Server_Params {
		bool UnlimitedHP;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedHP_Server_Params params;
	params.UnlimitedHP = UnlimitedHP;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedStamina
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUnlimitedStamina	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedStamina(bool NewUnlimitedStamina) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedStamina");

	struct AMD_PlayerState_SetUnlimitedStamina_Params {
		bool NewUnlimitedStamina;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedStamina_Params params;
	params.NewUnlimitedStamina = NewUnlimitedStamina;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedStamina_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: UnlimitedStamina	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedStamina_Server(bool UnlimitedStamina) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedStamina_Server");

	struct AMD_PlayerState_SetUnlimitedStamina_Server_Params {
		bool UnlimitedStamina;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedStamina_Server_Params params;
	params.UnlimitedStamina = UnlimitedStamina;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWater
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUnlimitedWater	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedWater(bool NewUnlimitedWater) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWater");

	struct AMD_PlayerState_SetUnlimitedWater_Params {
		bool NewUnlimitedWater;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedWater_Params params;
	params.NewUnlimitedWater = NewUnlimitedWater;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWater_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: UnlimitedWater	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedWater_Server(bool UnlimitedWater) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWater_Server");

	struct AMD_PlayerState_SetUnlimitedWater_Server_Params {
		bool UnlimitedWater;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedWater_Server_Params params;
	params.UnlimitedWater = UnlimitedWater;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUnlimitedWeight	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedWeight(bool NewUnlimitedWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWeight");

	struct AMD_PlayerState_SetUnlimitedWeight_Params {
		bool NewUnlimitedWeight;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedWeight_Params params;
	params.NewUnlimitedWeight = NewUnlimitedWeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWeight_Server
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: UnlimitedWeight	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerState::SetUnlimitedWeight_Server(bool UnlimitedWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerState.SetUnlimitedWeight_Server");

	struct AMD_PlayerState_SetUnlimitedWeight_Server_Params {
		bool UnlimitedWeight;			//Offset: 0 | ElementSize: 1
	};
	AMD_PlayerState_SetUnlimitedWeight_Server_Params params;
	params.UnlimitedWeight = UnlimitedWeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}