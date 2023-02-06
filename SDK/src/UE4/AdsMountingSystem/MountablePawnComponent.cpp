#include "../SDK.h"
#include "MountablePawnComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bIsMountable
// Declaration: bool bIsMountable
bool UMountablePawnComponent::M_GetbIsMountable() const {
	return Read<bool>((byte*)this + 176);
}
bool* UMountablePawnComponent::M_PtrGetbIsMountable() {
	return reinterpret_cast<bool*>((byte*)this + 176);
}
void UMountablePawnComponent::M_SetbIsMountable(const bool& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of SeatManager
// Declaration: struct FSeatManager SeatManager
struct FSeatManager UMountablePawnComponent::M_GetSeatManager() const {
	return Read<struct FSeatManager>((byte*)this + 184);
}
struct FSeatManager* UMountablePawnComponent::M_PtrGetSeatManager() {
	return reinterpret_cast<struct FSeatManager*>((byte*)this + 184);
}
void UMountablePawnComponent::M_SetSeatManager(const struct FSeatManager& value) {
	Write((byte*)this + 184, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.CanMount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::CanMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.CanMount");

	struct UMountablePawnComponent_CanMount_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_CanMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.ClearSeatAtIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::ClearSeatAtIndex(int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatAtIndex");

	struct UMountablePawnComponent_ClearSeatAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_ClearSeatAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.ClearSeatById
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::ClearSeatById(int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatById");

	struct UMountablePawnComponent_ClearSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_ClearSeatById_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.ClearSeatByIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::ClearSeatByIndex(int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatByIndex");

	struct UMountablePawnComponent_ClearSeatByIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_ClearSeatByIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.FindAvailableMountingPosition
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Position	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: riderLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: outSeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: outSeatIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.FindAvailableMountingPosition");

	struct UMountablePawnComponent_FindAvailableMountingPosition_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		struct FVector riderLocation;			//Offset: 4 | ElementSize: 12
		struct FSeatData outSeatData;			//Offset: 16 | ElementSize: 48
		int32_t outSeatIndex;			//Offset: 64 | ElementSize: 4
		bool ReturnValue;			//Offset: 68 | ElementSize: 1
	};
	UMountablePawnComponent_FindAvailableMountingPosition_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatAtIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMountingDirection UMountablePawnComponent::GetDefaultPositionForSeatAtIndex(int32_t seatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatAtIndex");

	struct UMountablePawnComponent_GetDefaultPositionForSeatAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		EMountingDirection ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_GetDefaultPositionForSeatAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatById
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMountingDirection UMountablePawnComponent::GetDefaultPositionForSeatById(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatById");

	struct UMountablePawnComponent_GetDefaultPositionForSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		EMountingDirection ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_GetDefaultPositionForSeatById_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetDriver
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountablePawnComponent::GetDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDriver");

	struct UMountablePawnComponent_GetDriver_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountablePawnComponent_GetDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.GetNumRiders
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountablePawnComponent::GetNumRiders()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetNumRiders");

	struct UMountablePawnComponent_GetNumRiders_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountablePawnComponent_GetNumRiders_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.GetNumSeats
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountablePawnComponent::GetNumSeats()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetNumSeats");

	struct UMountablePawnComponent_GetNumSeats_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountablePawnComponent_GetNumSeats_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.GetRider
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountablePawnComponent::GetRider(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRider");

	struct UMountablePawnComponent_GetRider_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class APawn* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UMountablePawnComponent_GetRider_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetRiderAtIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountablePawnComponent::GetRiderAtIndex(int32_t seatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRiderAtIndex");

	struct UMountablePawnComponent_GetRiderAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		class APawn* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UMountablePawnComponent_GetRiderAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetRiderBySeatId
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountablePawnComponent::GetRiderBySeatId(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRiderBySeatId");

	struct UMountablePawnComponent_GetRiderBySeatId_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class APawn* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UMountablePawnComponent_GetRiderBySeatId_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataAtIndex
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetSeatDataAtIndex");

	struct UMountablePawnComponent_GetSeatDataAtIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UMountablePawnComponent_GetSeatDataAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataById
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetSeatDataById");

	struct UMountablePawnComponent_GetSeatDataById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UMountablePawnComponent_GetSeatDataById_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.HasDriver
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::HasDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.HasDriver");

	struct UMountablePawnComponent_HasDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_HasDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeat
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SeatData	Type: struct FSeatData	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsDriverSeat(const struct FSeatData& SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsDriverSeat");

	struct UMountablePawnComponent_IsDriverSeat_Params {
		struct FSeatData SeatData;			//Offset: 0 | ElementSize: 48
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UMountablePawnComponent_IsDriverSeat_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeatId
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsDriverSeatId(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsDriverSeatId");

	struct UMountablePawnComponent_IsDriverSeatId_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_IsDriverSeatId_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.IsMountable
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsMountable()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsMountable");

	struct UMountablePawnComponent_IsMountable_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_IsMountable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.IsMounted
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsMounted");

	struct UMountablePawnComponent_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_IsMounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.IsPossessableMount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsPossessableMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsPossessableMount");

	struct UMountablePawnComponent_IsPossessableMount_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_IsPossessableMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedAtIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedAtIndex");

	struct UMountablePawnComponent_IsSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_IsSeatOccupiedAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedById
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::IsSeatOccupiedById(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedById");

	struct UMountablePawnComponent_IsSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMountablePawnComponent_IsSeatOccupiedById_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.MustHaveDriver
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::MustHaveDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.MustHaveDriver");

	struct UMountablePawnComponent_MustHaveDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountablePawnComponent_MustHaveDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedChangingSeats
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: rider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: oldSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountablePawnComponent::RiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedChangingSeats");

	struct UMountablePawnComponent_RiderFinishedChangingSeats_Params {
		class AActor* rider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
	};
	UMountablePawnComponent_RiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedDismounting
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: dismountedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountablePawnComponent::RiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedDismounting");

	struct UMountablePawnComponent_RiderFinishedDismounting_Params {
		class AActor* dismountedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
	};
	UMountablePawnComponent_RiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedMounting
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountablePawnComponent::RiderFinishedMounting(class AActor* Actor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedMounting");

	struct UMountablePawnComponent_RiderFinishedMounting_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
	};
	UMountablePawnComponent_RiderFinishedMounting_Params params;
	params.Actor = Actor;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.SetIsMountable
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IsMountable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetIsMountable(bool IsMountable) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetIsMountable");

	struct UMountablePawnComponent_SetIsMountable_Params {
		bool IsMountable;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountablePawnComponent_SetIsMountable_Params params;
	params.IsMountable = IsMountable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountablePawnComponent.SetRider
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newRider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetRider(class APawn* newRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRider");

	struct UMountablePawnComponent_SetRider_Params {
		class APawn* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	UMountablePawnComponent_SetRider_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.SetRiderAtSeatIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newRider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetRiderAtSeatIndex(class APawn* newRider, int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRiderAtSeatIndex");

	struct UMountablePawnComponent_SetRiderAtSeatIndex_Params {
		class APawn* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatIndex;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	UMountablePawnComponent_SetRiderAtSeatIndex_Params params;
	params.newRider = newRider;
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
// Function AdsMountingSystem.MountablePawnComponent.SetRiderBySeatId
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newRider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetRiderBySeatId(class APawn* newRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRiderBySeatId");

	struct UMountablePawnComponent_SetRiderBySeatId_Params {
		class APawn* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	UMountablePawnComponent_SetRiderBySeatId_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupied
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetSeatOccupied(int32_t seatIndex, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupied");

	struct UMountablePawnComponent_SetSeatOccupied_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnComponent_SetSeatOccupied_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedAtIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedAtIndex");

	struct UMountablePawnComponent_SetSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnComponent_SetSeatOccupiedAtIndex_Params params;
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
// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedById
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rider	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountablePawnComponent::SetSeatOccupiedById(int32_t seatId, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedById");

	struct UMountablePawnComponent_SetSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMountablePawnComponent_SetSeatOccupiedById_Params params;
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