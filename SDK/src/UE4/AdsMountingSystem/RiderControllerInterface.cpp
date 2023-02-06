#include "../SDK.h"
#include "RiderControllerInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.BeginChangingSeatById
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::BeginChangingSeatById(int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.BeginChangingSeatById");

	struct URiderControllerInterface_BeginChangingSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	URiderControllerInterface_BeginChangingSeatById_Params params;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.BeginChangingSeatToIndex
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::BeginChangingSeatToIndex(int32_t seatIndex, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.BeginChangingSeatToIndex");

	struct URiderControllerInterface_BeginChangingSeatToIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	URiderControllerInterface_BeginChangingSeatToIndex_Params params;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.BeginDismountingActor
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::BeginDismountingActor(struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.BeginDismountingActor");

	struct URiderControllerInterface_BeginDismountingActor_Params {
		struct FMountActionResponse Response;			//Offset: 0 | ElementSize: 3
		bool ReturnValue;			//Offset: 3 | ElementSize: 1
	};
	URiderControllerInterface_BeginDismountingActor_Params params;

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
// Function AdsMountingSystem.RiderControllerInterface.BeginMountingActor
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: linkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::BeginMountingActor(class AActor* newMount, class AActor* linkedActor, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.BeginMountingActor");

	struct URiderControllerInterface_BeginMountingActor_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	URiderControllerInterface_BeginMountingActor_Params params;
	params.newMount = newMount;
	params.linkedActor = linkedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.BeginMountingActorToSeat
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: linkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::BeginMountingActorToSeat(class AActor* newMount, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.BeginMountingActorToSeat");

	struct URiderControllerInterface_BeginMountingActorToSeat_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	URiderControllerInterface_BeginMountingActorToSeat_Params params;
	params.newMount = newMount;
	params.linkedActor = linkedActor;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.GetRiderControllerComponent
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class URiderControllerComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class URiderControllerComponent* URiderControllerInterface::GetRiderControllerComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.GetRiderControllerComponent");

	struct URiderControllerInterface_GetRiderControllerComponent_Params {
		class URiderControllerComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerInterface_GetRiderControllerComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.OnChangeSeatActionFailed
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnChangeSeatActionFailed(struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnChangeSeatActionFailed");

	struct URiderControllerInterface_OnChangeSeatActionFailed_Params {
		struct FMountActionResponse Response;			//Offset: 0 | ElementSize: 3
		bool ReturnValue;			//Offset: 3 | ElementSize: 1
	};
	URiderControllerInterface_OnChangeSeatActionFailed_Params params;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.OnDismountActionFailed
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: currentMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnDismountActionFailed(class AActor* currentMount, struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnDismountActionFailed");

	struct URiderControllerInterface_OnDismountActionFailed_Params {
		class AActor* currentMount;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	URiderControllerInterface_OnDismountActionFailed_Params params;
	params.currentMount = currentMount;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.OnMountActionFailed
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnMountActionFailed");

	struct URiderControllerInterface_OnMountActionFailed_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	URiderControllerInterface_OnMountActionFailed_Params params;
	params.newMount = newMount;
	params.newLinkedActor = newLinkedActor;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.OnOtherRiderChangedSeats
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: otherRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: oldSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnOtherRiderChangedSeats(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnOtherRiderChangedSeats");

	struct URiderControllerInterface_OnOtherRiderChangedSeats_Params {
		class AActor* otherRider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	URiderControllerInterface_OnOtherRiderChangedSeats_Params params;
	params.otherRider = otherRider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.OnRiderAdded
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnRiderAdded(class AActor* newRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnRiderAdded");

	struct URiderControllerInterface_OnRiderAdded_Params {
		class AActor* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	URiderControllerInterface_OnRiderAdded_Params params;
	params.newRider = newRider;
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
// Function AdsMountingSystem.RiderControllerInterface.OnRiderRemoved
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: removedRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::OnRiderRemoved(class AActor* removedRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnRiderRemoved");

	struct URiderControllerInterface_OnRiderRemoved_Params {
		class AActor* removedRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	URiderControllerInterface_OnRiderRemoved_Params params;
	params.removedRider = removedRider;
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
// Function AdsMountingSystem.RiderControllerInterface.PNMS_PossessPawn
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: pawnToPossess	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::PNMS_PossessPawn(class APawn* pawnToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.PNMS_PossessPawn");

	struct URiderControllerInterface_PNMS_PossessPawn_Params {
		class APawn* pawnToPossess;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	URiderControllerInterface_PNMS_PossessPawn_Params params;
	params.pawnToPossess = pawnToPossess;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerInterface.PossessCharacter
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: characterToPossess	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerInterface::PossessCharacter(class APawn* characterToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.PossessCharacter");

	struct URiderControllerInterface_PossessCharacter_Params {
		class APawn* characterToPossess;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	URiderControllerInterface_PossessCharacter_Params params;
	params.characterToPossess = characterToPossess;

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