#include "../SDK.h"
#include "HitInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.HitInterface.Hit
// Flags: Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitForce	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UHitInterface::Hit(const struct FVector& HitLocation, const struct FVector& hitForce) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.HitInterface.Hit");

	struct UHitInterface_Hit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector hitForce;			//Offset: 12 | ElementSize: 12
	};
	UHitInterface_Hit_Params params;
	params.HitLocation = HitLocation;
	params.hitForce = hitForce;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}