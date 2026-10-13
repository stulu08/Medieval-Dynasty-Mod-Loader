#include "../SDK.h"
#include "ADMUnifiedControllerPawn.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterController
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AController* UADMUnifiedControllerPawn::GetCharacterController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterController");

	struct UADMUnifiedControllerPawn_GetCharacterController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UADMUnifiedControllerPawn_GetCharacterController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterMount
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UADMUnifiedControllerPawn::GetCharacterMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterMount");

	struct UADMUnifiedControllerPawn_GetCharacterMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UADMUnifiedControllerPawn_GetCharacterMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterPawn
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UADMUnifiedControllerPawn::GetCharacterPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterPawn");

	struct UADMUnifiedControllerPawn_GetCharacterPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UADMUnifiedControllerPawn_GetCharacterPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.IsMounted
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UADMUnifiedControllerPawn::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.IsMounted");

	struct UADMUnifiedControllerPawn_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UADMUnifiedControllerPawn_IsMounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToDismount
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UADMUnifiedControllerPawn::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToDismount");

	struct UADMUnifiedControllerPawn_PrepareToDismount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	UADMUnifiedControllerPawn_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToMount
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: linkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UADMUnifiedControllerPawn::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToMount");

	struct UADMUnifiedControllerPawn_PrepareToMount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	UADMUnifiedControllerPawn_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

#pragma endregion
}