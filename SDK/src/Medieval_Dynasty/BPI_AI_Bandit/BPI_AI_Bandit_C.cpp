#include "../SDK.h"
#include "BPI_AI_Bandit_C.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_GetCanAvoid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_Bandit_C::AI_GetCanAvoid(bool* CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_GetCanAvoid");

	struct UBPI_AI_Bandit_C_AI_GetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_Bandit_C_AI_GetCanAvoid_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAvoid != nullptr)
		*CanAvoid = params.CanAvoid;
}

/////////////////////////////////////////////
// Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_SetCanAvoid
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_Bandit_C::AI_SetCanAvoid(bool CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_SetCanAvoid");

	struct UBPI_AI_Bandit_C_AI_SetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_Bandit_C_AI_SetCanAvoid_Params params;
	params.CanAvoid = CanAvoid;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_SetAvoidDirection&Movement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_Bandit_C::AI_SetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection> AvoidDirection, TEnumAsByte<E_AnimMovement> AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_SetAvoidDirection&Movement");

	struct UBPI_AI_Bandit_C_AI_SetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_Bandit_C_AI_SetAvoidDirection_Movement_Params params;
	params.AvoidDirection = AvoidDirection;
	params.AvoidMovement = AvoidMovement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_GetAvoidDirection&Movement
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_Bandit_C::AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI_Bandit.BPI_AI_Bandit_C.AI_GetAvoidDirection&Movement");

	struct UBPI_AI_Bandit_C_AI_GetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_Bandit_C_AI_GetAvoidDirection_Movement_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AvoidDirection != nullptr)
		*AvoidDirection = params.AvoidDirection;
	if (AvoidMovement != nullptr)
		*AvoidMovement = params.AvoidMovement;
}

#pragma endregion
}