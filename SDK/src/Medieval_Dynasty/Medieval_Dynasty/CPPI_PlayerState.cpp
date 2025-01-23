#include "../SDK.h"
#include "CPPI_PlayerState.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetFastBuilding
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetFastBuilding() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetFastBuilding");

	struct UCPPI_PlayerState_GetFastBuilding_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetFastBuilding_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetFastCrafting
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetFastCrafting() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetFastCrafting");

	struct UCPPI_PlayerState_GetFastCrafting_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetFastCrafting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetFastStorage
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetFastStorage() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetFastStorage");

	struct UCPPI_PlayerState_GetFastStorage_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetFastStorage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetPawnPrivate
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UCPPI_PlayerState::GetPawnPrivate() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetPawnPrivate");

	struct UCPPI_PlayerState_GetPawnPrivate_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UCPPI_PlayerState_GetPawnPrivate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetPoisoning
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetPoisoning() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetPoisoning");

	struct UCPPI_PlayerState_GetPoisoning_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetPoisoning_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetTemperature
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetTemperature() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetTemperature");

	struct UCPPI_PlayerState_GetTemperature_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetTemperature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedFood
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetUnlimitedFood() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedFood");

	struct UCPPI_PlayerState_GetUnlimitedFood_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetUnlimitedFood_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedHP
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetUnlimitedHP() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedHP");

	struct UCPPI_PlayerState_GetUnlimitedHP_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetUnlimitedHP_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedStamina
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetUnlimitedStamina() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedStamina");

	struct UCPPI_PlayerState_GetUnlimitedStamina_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetUnlimitedStamina_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedWater
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetUnlimitedWater() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedWater");

	struct UCPPI_PlayerState_GetUnlimitedWater_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetUnlimitedWater_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedWeight
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCPPI_PlayerState::GetUnlimitedWeight() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CPPI_PlayerState.GetUnlimitedWeight");

	struct UCPPI_PlayerState_GetUnlimitedWeight_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCPPI_PlayerState_GetUnlimitedWeight_Params params;

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