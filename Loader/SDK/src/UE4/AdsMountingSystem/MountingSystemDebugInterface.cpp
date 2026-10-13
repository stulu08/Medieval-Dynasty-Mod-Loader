#include "../SDK.h"
#include "MountingSystemDebugInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.MountingSystemDebugInterface.GetPlayerDebugId
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountingSystemDebugInterface::GetPlayerDebugId()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountingSystemDebugInterface.GetPlayerDebugId");

	struct UMountingSystemDebugInterface_GetPlayerDebugId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountingSystemDebugInterface_GetPlayerDebugId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountingSystemDebugInterface.SetPlayerDebugId
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newDebugId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountingSystemDebugInterface::SetPlayerDebugId(int32_t newDebugId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountingSystemDebugInterface.SetPlayerDebugId");

	struct UMountingSystemDebugInterface_SetPlayerDebugId_Params {
		int32_t newDebugId;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UMountingSystemDebugInterface_SetPlayerDebugId_Params params;
	params.newDebugId = newDebugId;

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