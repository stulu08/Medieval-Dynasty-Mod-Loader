#include "../SDK.h"
#include "FoliageInstancedResource.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.FoliageInstancedResource.GetFoliageCollisionActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: foliageInstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AFoliageCollisionActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AFoliageCollisionActor* UFoliageInstancedResource::GetFoliageCollisionActor(int32_t foliageInstanceIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FoliageInstancedResource.GetFoliageCollisionActor");

	struct UFoliageInstancedResource_GetFoliageCollisionActor_Params {
		int32_t foliageInstanceIndex;			//Offset: 0 | ElementSize: 4
		class AFoliageCollisionActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UFoliageInstancedResource_GetFoliageCollisionActor_Params params;
	params.foliageInstanceIndex = foliageInstanceIndex;

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