#include "../SDK.h"
#include "HealthInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.GetHealth
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UHealthInterface::GetHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.GetHealth");

	struct UHealthInterface_GetHealth_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_GetHealth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.GetHealthNormalized
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UHealthInterface::GetHealthNormalized()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.GetHealthNormalized");

	struct UHealthInterface_GetHealthNormalized_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_GetHealthNormalized_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.GetMaxHealth
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UHealthInterface::GetMaxHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.GetMaxHealth");

	struct UHealthInterface_GetMaxHealth_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_GetMaxHealth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.HasFullHealth
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UHealthInterface::HasFullHealth()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.HasFullHealth");

	struct UHealthInterface_HasFullHealth_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UHealthInterface_HasFullHealth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.Heal
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UHealthInterface::Heal() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.Heal");

	struct UHealthInterface_Heal_Params {
	};
	UHealthInterface_Heal_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.IsAlive
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UHealthInterface::IsAlive()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.IsAlive");

	struct UHealthInterface_IsAlive_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UHealthInterface_IsAlive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.Kill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UHealthInterface::Kill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.Kill");

	struct UHealthInterface_Kill_Params {
	};
	UHealthInterface_Kill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.SetHealth
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newHealth	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UHealthInterface::SetHealth(float newHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.SetHealth");

	struct UHealthInterface_SetHealth_Params {
		float newHealth;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_SetHealth_Params params;
	params.newHealth = newHealth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.SetHealthNormalized
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newHealthNormalized	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UHealthInterface::SetHealthNormalized(float newHealthNormalized) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.SetHealthNormalized");

	struct UHealthInterface_SetHealthNormalized_Params {
		float newHealthNormalized;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_SetHealthNormalized_Params params;
	params.newHealthNormalized = newHealthNormalized;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.HealthInterface.SetMaxHealth
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMaxHealth	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UHealthInterface::SetMaxHealth(float newMaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HealthInterface.SetMaxHealth");

	struct UHealthInterface_SetMaxHealth_Params {
		float newMaxHealth;			//Offset: 0 | ElementSize: 4
	};
	UHealthInterface_SetMaxHealth_Params params;
	params.newMaxHealth = newMaxHealth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}