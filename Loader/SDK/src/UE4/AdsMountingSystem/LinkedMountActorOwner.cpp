#include "../SDK.h"
#include "LinkedMountActorOwner.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* ULinkedMountActorOwner::GetLinkedActor(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActor");

	struct ULinkedMountActorOwner_GetLinkedActor_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ULinkedMountActorOwner_GetLinkedActor_Params params;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActors
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class AActor*> ULinkedMountActorOwner::GetLinkedActors()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActors");

	struct ULinkedMountActorOwner_GetLinkedActors_Params {
		TArray<class AActor*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ULinkedMountActorOwner_GetLinkedActors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActorOwner.SetLinkedActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* ULinkedMountActorOwner::SetLinkedActor(class AActor* newLinkedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.SetLinkedActor");

	struct ULinkedMountActorOwner_SetLinkedActor_Params {
		class AActor* newLinkedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		class AActor* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	ULinkedMountActorOwner_SetLinkedActor_Params params;
	params.newLinkedActor = newLinkedActor;
	params.seatId = seatId;

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