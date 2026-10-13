#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AdsMountingSystem.EMountingActionType
/////////////////////////////////////////////
enum class EMountingActionType : uint8_t {
	NoAction = 0,
	Mounted = 1,
	Mounting = 2,
	Dismounting = 3,
	ChangingSeat = 4,
	ChangingToDriverSeat = 5,
	ChangingToPassangerSeat = 6,
	ChangeToLinkedActor = 7,
	ChangeToNewLinkedActor = 8,
	Unmounted = 9,
	MAX = 10,
};
/////////////////////////////////////////////
// Enum AdsMountingSystem.EDismountingBehaviorType
/////////////////////////////////////////////
enum class EDismountingBehaviorType : uint8_t {
	Manual = 0,
	Immediately = 1,
	RiderFinishedDismounting = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AdsMountingSystem.EMountingBehaviorType
/////////////////////////////////////////////
enum class EMountingBehaviorType : uint8_t {
	Manual = 0,
	RiderFinishedMoving = 1,
	RiderFinishedMounting = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AdsMountingSystem.EMountActionStatusType
/////////////////////////////////////////////
enum class EMountActionStatusType : uint8_t {
	None = 0,
	InvalidController = 1,
	InvalidPawn = 2,
	InvalidMount = 3,
	InvalidSeat = 4,
	NotAuthority = 5,
	InvalidOwningController = 6,
	RiderControllerInterfaceNotImplemented = 7,
	MountRiderInterfaceNotImplemented = 8,
	MountablePawnInterfaceNotImplemented = 9,
	UnifiedControllerPawnInterfaceNotImplemented = 10,
	LinkedMountActorOwnerInterfaceNotImplemented = 11,
	LinkedMountActorInterfaceNotImplemented = 12,
	MountingFailedForMountablePawn = 13,
	MountingFailedForOwnedPawn = 14,
	MountingFailedToFindAssociatedLinkedActor = 15,
	DismountingPawnMissMatch = 16,
	DismountingFailedForMountablePawn = 17,
	DismountingFailedForOwnedPawn = 18,
	FailedToRetrieveRiderController = 19,
	FailedRetrieveRiderControllerComponent = 20,
	SeatOccupied = 21,
	IsNotMounted = 22,
	CustomStatus = 23,
	MAX = 24,
};
/////////////////////////////////////////////
// Enum AdsMountingSystem.EMountingDirection
/////////////////////////////////////////////
enum class EMountingDirection : uint8_t {
	InvalidSide = 0,
	MountAnySide = 1,
	MountRightSide = 2,
	MountLeftSide = 3,
	MountFrontSide = 4,
	MountBackSide = 5,
	MountTopSide = 6,
	MountBottomSide = 7,
	MAX = 8,
};
#pragma endregion

#pragma region Structs
struct FMountingAction;
struct FMountActionResponse;
struct FSeatManager;
struct FSeatData;
struct FSeatMountingData;
struct FSeatDataMemento;
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.MountingAction
// Size 12
/////////////////////////////////////////////
struct FMountingAction {
	EMountingActionType	MountingAction;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMountingActionType	LastActionType;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	int32_t	seatId;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	ActionId;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	Direction;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsValid;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[1];		//Offset: 11	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.MountActionResponse
// Size 3
/////////////////////////////////////////////
struct FMountActionResponse {
	EMountActionStatusType	ActionStatus;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	CustomStatus;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bSuccess;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.SeatManager
// Size 32
/////////////////////////////////////////////
struct FSeatManager {
	TArray<struct FSeatData>	Seats;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	float	MaxValidMountingDistanceSquared;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	DriverSeatIndex;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	DriverSeatId;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bForceDriverSeat;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsPossessableMount;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 30	Size: 2
};
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.SeatData
// Size 48
/////////////////////////////////////////////
struct FSeatData {
	int32_t	seatId;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FSeatMountingData>	MountingData;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	struct FName	SeatSocketName;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	IsOccupied;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	IsLinkedActor;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 34	Size: 2
	TWeakObjectPtr<class AActor>	OccupyingActor;		//Offset: 36	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[4];		//Offset: 44	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.SeatMountingData
// Size 32
/////////////////////////////////////////////
struct FSeatMountingData {
	EMountingDirection	MountPosition;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	struct FVector	RelativeMountingOffset;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	RelativeDismountingOffset;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bUseCustomDismountingOffset;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 29	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AdsMountingSystem.SeatDataMemento
// Size 16
/////////////////////////////////////////////
struct FSeatDataMemento {
	int32_t	seatId;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	SeatSocketName;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	IsOccupied;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
};
#pragma endregion
}