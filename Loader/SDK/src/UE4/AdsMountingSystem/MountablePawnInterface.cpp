#include "../SDK.h"
#include "MountablePawnInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.CanMountActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: newRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::CanMountActor(class AActor* newRider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.CanMountActor");

	struct UMountablePawnInterface_CanMountActor_Params {
		class AActor* newRider;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountablePawnInterface_CanMountActor_Params params;
	params.newRider = newRider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.CanMountAtPosition
// Flags: Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: riderLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: desiredMountingPosition	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::CanMountAtPosition(struct FVector riderLocation, EMountingDirection desiredMountingPosition)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.CanMountAtPosition");

	struct UMountablePawnInterface_CanMountAtPosition_Params {
		struct FVector riderLocation;			//Offset: 0 | ElementSize: 12
		EMountingDirection desiredMountingPosition;			//Offset: 12 | ElementSize: 1
		bool ReturnValue;			//Offset: 13 | ElementSize: 1
	};
	UMountablePawnInterface_CanMountAtPosition_Params params;
	params.riderLocation = riderLocation;
	params.desiredMountingPosition = desiredMountingPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.ClearSeatAtIndex
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::ClearSeatAtIndex(int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.ClearSeatAtIndex");

	struct UMountablePawnInterface_ClearSeatAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnInterface_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.ClearSeatById
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::ClearSeatById(int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.ClearSeatById");

	struct UMountablePawnInterface_ClearSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnInterface_ClearSeatById_Params params;
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
// Function AdsMountingSystem.MountablePawnInterface.FindAvailableMountingPosition
// Flags: Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Position	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: riderLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: outSeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: outSeatIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.FindAvailableMountingPosition");

	struct UMountablePawnInterface_FindAvailableMountingPosition_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		struct FVector riderLocation;			//Offset: 4 | ElementSize: 12
		struct FSeatData outSeatData;			//Offset: 16 | ElementSize: 48
		int32_t outSeatIndex;			//Offset: 64 | ElementSize: 4
		bool ReturnValue;			//Offset: 68 | ElementSize: 1
	};
	UMountablePawnInterface_FindAvailableMountingPosition_Params params;
	params.Position = Position;
	params.riderLocation = riderLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (outSeatData != nullptr)
		*outSeatData = params.outSeatData;
	if (outSeatIndex != nullptr)
		*outSeatIndex = params.outSeatIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetCurrentRiderCount
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountablePawnInterface::GetCurrentRiderCount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetCurrentRiderCount");

	struct UMountablePawnInterface_GetCurrentRiderCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountablePawnInterface_GetCurrentRiderCount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetDriver
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountablePawnInterface::GetDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetDriver");

	struct UMountablePawnInterface_GetDriver_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountablePawnInterface_GetDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetMaxRiders
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountablePawnInterface::GetMaxRiders()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMaxRiders");

	struct UMountablePawnInterface_GetMaxRiders_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountablePawnInterface_GetMaxRiders_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetMountablePawnComponent
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMountablePawnComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMountablePawnComponent* UMountablePawnInterface::GetMountablePawnComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMountablePawnComponent");

	struct UMountablePawnInterface_GetMountablePawnComponent_Params {
		class UMountablePawnComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountablePawnInterface_GetMountablePawnComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetMountBody
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMeshComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMeshComponent* UMountablePawnInterface::GetMountBody(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMountBody");

	struct UMountablePawnInterface_GetMountBody_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class UMeshComponent* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UMountablePawnInterface_GetMountBody_Params params;
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
// Function AdsMountingSystem.MountablePawnInterface.GetRelativeDismountDirection
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMountingDirection UMountablePawnInterface::GetRelativeDismountDirection(class APawn* rider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetRelativeDismountDirection");

	struct UMountablePawnInterface_GetRelativeDismountDirection_Params {
		class APawn* rider;			//Offset: 0 | ElementSize: 8
		EMountingDirection ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountablePawnInterface_GetRelativeDismountDirection_Params params;
	params.rider = rider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetRelativeMountDirection
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMountingDirection UMountablePawnInterface::GetRelativeMountDirection(class APawn* rider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetRelativeMountDirection");

	struct UMountablePawnInterface_GetRelativeMountDirection_Params {
		class APawn* rider;			//Offset: 0 | ElementSize: 8
		EMountingDirection ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountablePawnInterface_GetRelativeMountDirection_Params params;
	params.rider = rider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataAtIndex
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetSeatDataAtIndex");

	struct UMountablePawnInterface_GetSeatDataAtIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UMountablePawnInterface_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataById
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetSeatDataById");

	struct UMountablePawnInterface_GetSeatDataById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UMountablePawnInterface_GetSeatDataById_Params params;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.HasDriver
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::HasDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.HasDriver");

	struct UMountablePawnInterface_HasDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_HasDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.HasPassangers
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::HasPassangers()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.HasPassangers");

	struct UMountablePawnInterface_HasPassangers_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_HasPassangers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.HasPassengers
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::HasPassengers()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.HasPassengers");

	struct UMountablePawnInterface_HasPassengers_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_HasPassengers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsDriverReady
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsDriverReady()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsDriverReady");

	struct UMountablePawnInterface_IsDriverReady_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_IsDriverReady_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsDriverSeat
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: SeatData	Type: struct FSeatData	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsDriverSeat(const struct FSeatData& SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsDriverSeat");

	struct UMountablePawnInterface_IsDriverSeat_Params {
		struct FSeatData SeatData;			//Offset: 0 | ElementSize: 48
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UMountablePawnInterface_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsMountableActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsMountableActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsMountableActor");

	struct UMountablePawnInterface_IsMountableActor_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_IsMountableActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsMountableByPawn
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: newRider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsMountableByPawn(class APawn* newRider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsMountableByPawn");

	struct UMountablePawnInterface_IsMountableByPawn_Params {
		class APawn* newRider;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountablePawnInterface_IsMountableByPawn_Params params;
	params.newRider = newRider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedAtIndex
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedAtIndex");

	struct UMountablePawnInterface_IsSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnInterface_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedById
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::IsSeatOccupiedById(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedById");

	struct UMountablePawnInterface_IsSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnInterface_IsSeatOccupiedById_Params params;
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
// Function AdsMountingSystem.MountablePawnInterface.MustHaveDriver
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::MustHaveDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.MustHaveDriver");

	struct UMountablePawnInterface_MustHaveDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnInterface_MustHaveDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedChangingSeats
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: rider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: oldSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::OnRiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedChangingSeats");

	struct UMountablePawnInterface_OnRiderFinishedChangingSeats_Params {
		class AActor* rider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnInterface_OnRiderFinishedChangingSeats_Params params;
	params.rider = rider;
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
// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedDismounting
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: dismountedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::OnRiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedDismounting");

	struct UMountablePawnInterface_OnRiderFinishedDismounting_Params {
		class AActor* dismountedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	UMountablePawnInterface_OnRiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
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
// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedMounting
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::OnRiderFinishedMounting(class AActor* mountedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedMounting");

	struct UMountablePawnInterface_OnRiderFinishedMounting_Params {
		class AActor* mountedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	UMountablePawnInterface_OnRiderFinishedMounting_Params params;
	params.mountedActor = mountedActor;
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
// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedAtIndex
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedAtIndex");

	struct UMountablePawnInterface_SetSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnInterface_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedById
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnInterface::SetSeatOccupiedById(int32_t seatId, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedById");

	struct UMountablePawnInterface_SetSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnInterface_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

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