#include "../SDK.h"
#include "AttackInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.AttackInterface.Attack
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAttackInterface::Attack(float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AttackInterface.Attack");

	struct UAttackInterface_Attack_Params {
		float Duration;			//Offset: 0 | ElementSize: 4
	};
	UAttackInterface_Attack_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Duration != nullptr)
		*Duration = params.Duration;
}

#pragma endregion
}