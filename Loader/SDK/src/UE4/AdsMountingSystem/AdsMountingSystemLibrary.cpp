#include "../SDK.h"
#include "AdsMountingSystemLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromForwardBetweenActors
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: mainActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAdsMountingSystemLibrary::GetAngleFromForwardBetweenActors(class AActor* mainActor, class AActor* targetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromForwardBetweenActors");

	struct UAdsMountingSystemLibrary_GetAngleFromForwardBetweenActors_Params {
		class AActor* mainActor;			//Offset: 0 | ElementSize: 8
		class AActor* targetActor;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_GetAngleFromForwardBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromRightBetweenActors
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: mainActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAdsMountingSystemLibrary::GetAngleFromRightBetweenActors(class AActor* mainActor, class AActor* targetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromRightBetweenActors");

	struct UAdsMountingSystemLibrary_GetAngleFromRightBetweenActors_Params {
		class AActor* mainActor;			//Offset: 0 | ElementSize: 8
		class AActor* targetActor;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_GetAngleFromRightBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromUpBetweenActors
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: mainActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAdsMountingSystemLibrary::GetAngleFromUpBetweenActors(class AActor* mainActor, class AActor* targetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromUpBetweenActors");

	struct UAdsMountingSystemLibrary_GetAngleFromUpBetweenActors_Params {
		class AActor* mainActor;			//Offset: 0 | ElementSize: 8
		class AActor* targetActor;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_GetAngleFromUpBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.GetRelativeMountingPosition
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: mountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: riderActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ignoreForwared	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ignoreRight	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ignoreUp	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMountingDirection UAdsMountingSystemLibrary::GetRelativeMountingPosition(class AActor* mountActor, class AActor* riderActor, bool ignoreForwared, bool ignoreRight, bool ignoreUp) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetRelativeMountingPosition");

	struct UAdsMountingSystemLibrary_GetRelativeMountingPosition_Params {
		class AActor* mountActor;			//Offset: 0 | ElementSize: 8
		class AActor* riderActor;			//Offset: 8 | ElementSize: 8
		bool ignoreForwared;			//Offset: 16 | ElementSize: 1
		bool ignoreRight;			//Offset: 17 | ElementSize: 1
		bool ignoreUp;			//Offset: 18 | ElementSize: 1
		EMountingDirection ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_GetRelativeMountingPosition_Params params;
	params.mountActor = mountActor;
	params.riderActor = riderActor;
	params.ignoreForwared = ignoreForwared;
	params.ignoreRight = ignoreRight;
	params.ignoreUp = ignoreUp;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.PNMS_BoundAngleTo180
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inAngle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAdsMountingSystemLibrary::PNMS_BoundAngleTo180(float inAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.PNMS_BoundAngleTo180");

	struct UAdsMountingSystemLibrary_PNMS_BoundAngleTo180_Params {
		float inAngle;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_PNMS_BoundAngleTo180_Params params;
	params.inAngle = inAngle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.PNMS_BoundAngleTo360
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inAngle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAdsMountingSystemLibrary::PNMS_BoundAngleTo360(float inAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.PNMS_BoundAngleTo360");

	struct UAdsMountingSystemLibrary_PNMS_BoundAngleTo360_Params {
		float inAngle;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_PNMS_BoundAngleTo360_Params params;
	params.inAngle = inAngle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierAtIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_ClearOccupierAtIndex(struct FSeatManager* inSeatManager, int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierAtIndex");

	struct UAdsMountingSystemLibrary_SeatManager_ClearOccupierAtIndex_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatIndex;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_ClearOccupierAtIndex_Params params;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierById
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_ClearOccupierById(struct FSeatManager* inSeatManager, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierById");

	struct UAdsMountingSystemLibrary_SeatManager_ClearOccupierById_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatId;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_ClearOccupierById_Params params;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_FindAvailableMountingPosition
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Position	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: riderLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MountPosition	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: outSeatDataIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_FindAvailableMountingPosition(const struct FSeatManager& inSeatManager, EMountingDirection Position, struct FVector riderLocation, const struct FTransform& MountPosition, int32_t* outSeatDataIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_FindAvailableMountingPosition");

	struct UAdsMountingSystemLibrary_SeatManager_FindAvailableMountingPosition_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		EMountingDirection Position;			//Offset: 32 | ElementSize: 1
		struct FVector riderLocation;			//Offset: 36 | ElementSize: 12
		struct FTransform MountPosition;			//Offset: 48 | ElementSize: 48
		int32_t outSeatDataIndex;			//Offset: 96 | ElementSize: 4
		bool ReturnValue;			//Offset: 100 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_FindAvailableMountingPosition_Params params;
	params.inSeatManager = inSeatManager;
	params.Position = Position;
	params.riderLocation = riderLocation;
	params.MountPosition = MountPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (outSeatDataIndex != nullptr)
		*outSeatDataIndex = params.outSeatDataIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetDriverSeat
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: outDriverSeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_GetDriverSeat(const struct FSeatManager& inSeatManager, struct FSeatData* outDriverSeatData) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetDriverSeat");

	struct UAdsMountingSystemLibrary_SeatManager_GetDriverSeat_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		struct FSeatData outDriverSeatData;			//Offset: 32 | ElementSize: 48
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_GetDriverSeat_Params params;
	params.inSeatManager = inSeatManager;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (outDriverSeatData != nullptr)
		*outDriverSeatData = params.outDriverSeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumRiders
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UAdsMountingSystemLibrary::SeatManager_GetNumRiders(const struct FSeatManager& inSeatManager) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumRiders");

	struct UAdsMountingSystemLibrary_SeatManager_GetNumRiders_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_SeatManager_GetNumRiders_Params params;
	params.inSeatManager = inSeatManager;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumSeats
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UAdsMountingSystemLibrary::SeatManager_GetNumSeats(const struct FSeatManager& inSeatManager) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumSeats");

	struct UAdsMountingSystemLibrary_SeatManager_GetNumSeats_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UAdsMountingSystemLibrary_SeatManager_GetNumSeats_Params params;
	params.inSeatManager = inSeatManager;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataAtIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatDataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_GetSeatDataAtIndex(const struct FSeatManager& inSeatManager, int32_t seatDataIndex, struct FSeatData* SeatData) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataAtIndex");

	struct UAdsMountingSystemLibrary_SeatManager_GetSeatDataAtIndex_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatDataIndex;			//Offset: 32 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 40 | ElementSize: 48
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_GetSeatDataAtIndex_Params params;
	params.inSeatManager = inSeatManager;
	params.seatDataIndex = seatDataIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataById
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_GetSeatDataById(const struct FSeatManager& inSeatManager, int32_t seatId, struct FSeatData* SeatData) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataById");

	struct UAdsMountingSystemLibrary_SeatManager_GetSeatDataById_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatId;			//Offset: 32 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 40 | ElementSize: 48
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_GetSeatDataById_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_HasAvailableSeats
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_HasAvailableSeats(const struct FSeatManager& inSeatManager) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_HasAvailableSeats");

	struct UAdsMountingSystemLibrary_SeatManager_HasAvailableSeats_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_HasAvailableSeats_Params params;
	params.inSeatManager = inSeatManager;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsDriverSeatId
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_IsDriverSeatId(const struct FSeatManager& inSeatManager, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsDriverSeatId");

	struct UAdsMountingSystemLibrary_SeatManager_IsDriverSeatId_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatId;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_IsDriverSeatId_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedAtIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_IsSeatOccupiedAtIndex(const struct FSeatManager& inSeatManager, int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedAtIndex");

	struct UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedAtIndex_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatIndex;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedAtIndex_Params params;
	params.inSeatManager = inSeatManager;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedById
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_IsSeatOccupiedById(const struct FSeatManager& inSeatManager, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedById");

	struct UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedById_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatId;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedById_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedAtIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: occupyingPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_SetSeatOccupiedAtIndex(struct FSeatManager* inSeatManager, int32_t seatIndex, class APawn* occupyingPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedAtIndex");

	struct UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedAtIndex_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatIndex;			//Offset: 32 | ElementSize: 4
		class APawn* occupyingPawn;			//Offset: 40 | ElementSize: 8
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.occupyingPawn = occupyingPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedById
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: inSeatManager	Type: struct FSeatManager	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: occupyingPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAdsMountingSystemLibrary::SeatManager_SetSeatOccupiedById(struct FSeatManager* inSeatManager, int32_t seatId, class APawn* occupyingPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedById");

	struct UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedById_Params {
		struct FSeatManager inSeatManager;			//Offset: 0 | ElementSize: 32
		int32_t seatId;			//Offset: 32 | ElementSize: 4
		class APawn* occupyingPawn;			//Offset: 40 | ElementSize: 8
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.occupyingPawn = occupyingPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.AdsMountingSystemLibrary.TranslateVectorRelative
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Transform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: offsetValue	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: outVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAdsMountingSystemLibrary::TranslateVectorRelative(const struct FTransform& Transform, struct FVector offsetValue, struct FVector* outVector) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.TranslateVectorRelative");

	struct UAdsMountingSystemLibrary_TranslateVectorRelative_Params {
		struct FTransform Transform;			//Offset: 0 | ElementSize: 48
		struct FVector offsetValue;			//Offset: 48 | ElementSize: 12
		struct FVector outVector;			//Offset: 60 | ElementSize: 12
	};
	UAdsMountingSystemLibrary_TranslateVectorRelative_Params params;
	params.Transform = Transform;
	params.offsetValue = offsetValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (outVector != nullptr)
		*outVector = params.outVector;
}

#pragma endregion
}