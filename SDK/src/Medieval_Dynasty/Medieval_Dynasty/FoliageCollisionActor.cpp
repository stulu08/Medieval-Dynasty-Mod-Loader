#include "../SDK.h"
#include "FoliageCollisionActor.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.FoliageCollisionActor.ClearAssignedFoliageInstanceIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AFoliageCollisionActor::ClearAssignedFoliageInstanceIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FoliageCollisionActor.ClearAssignedFoliageInstanceIndex");

	struct AFoliageCollisionActor_ClearAssignedFoliageInstanceIndex_Params {
	};
	AFoliageCollisionActor_ClearAssignedFoliageInstanceIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FoliageCollisionActor.GetAssignedFoliageInstanceIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AFoliageCollisionActor::GetAssignedFoliageInstanceIndex()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FoliageCollisionActor.GetAssignedFoliageInstanceIndex");

	struct AFoliageCollisionActor_GetAssignedFoliageInstanceIndex_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AFoliageCollisionActor_GetAssignedFoliageInstanceIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FoliageCollisionActor.HasAssignedFoliageInstanceIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AFoliageCollisionActor::HasAssignedFoliageInstanceIndex()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FoliageCollisionActor.HasAssignedFoliageInstanceIndex");

	struct AFoliageCollisionActor_HasAssignedFoliageInstanceIndex_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AFoliageCollisionActor_HasAssignedFoliageInstanceIndex_Params params;

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