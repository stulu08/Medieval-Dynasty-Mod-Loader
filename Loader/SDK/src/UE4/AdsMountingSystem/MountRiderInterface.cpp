#include "../SDK.h"
#include "MountRiderInterface.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.GetAllRiderSkeletalMeshes
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class USkeletalMeshComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class USkeletalMeshComponent*> UMountRiderInterface::GetAllRiderSkeletalMeshes()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetAllRiderSkeletalMeshes");

	struct UMountRiderInterface_GetAllRiderSkeletalMeshes_Params {
		TArray<class USkeletalMeshComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMountRiderInterface_GetAllRiderSkeletalMeshes_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.GetMountRiderComponent
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMountRiderComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMountRiderComponent* UMountRiderInterface::GetMountRiderComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetMountRiderComponent");

	struct UMountRiderInterface_GetMountRiderComponent_Params {
		class UMountRiderComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderInterface_GetMountRiderComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.GetRiderMesh
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMeshComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMeshComponent* UMountRiderInterface::GetRiderMesh()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetRiderMesh");

	struct UMountRiderInterface_GetRiderMesh_Params {
		class UMeshComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderInterface_GetRiderMesh_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.GetSeatId
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountRiderInterface::GetSeatId()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetSeatId");

	struct UMountRiderInterface_GetSeatId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountRiderInterface_GetSeatId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.IsDriver
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::IsDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.IsDriver");

	struct UMountRiderInterface_IsDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderInterface_IsDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.IsSeatedOnMount
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::IsSeatedOnMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.IsSeatedOnMount");

	struct UMountRiderInterface_IsSeatedOnMount_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderInterface_IsSeatedOnMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.MoveToMountingLocation
// Flags: Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.MoveToMountingLocation");

	struct UMountRiderInterface_MoveToMountingLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 12 | ElementSize: 12
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UMountRiderInterface_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.OnChangeToNewSeatCompleted
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::OnChangeToNewSeatCompleted() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnChangeToNewSeatCompleted");

	struct UMountRiderInterface_OnChangeToNewSeatCompleted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderInterface_OnChangeToNewSeatCompleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.OnDismountingPawnFinished
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: oldPawnMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::OnDismountingPawnFinished(class AActor* oldPawnMount) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnDismountingPawnFinished");

	struct UMountRiderInterface_OnDismountingPawnFinished_Params {
		class AActor* oldPawnMount;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountRiderInterface_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.OnMountingPawnFinished
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::OnMountingPawnFinished(class AActor* newMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnMountingPawnFinished");

	struct UMountRiderInterface_OnMountingPawnFinished_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountRiderInterface_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.OnMoveToMountingLocationCompleted
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::OnMoveToMountingLocationCompleted() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnMoveToMountingLocationCompleted");

	struct UMountRiderInterface_OnMoveToMountingLocationCompleted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderInterface_OnMoveToMountingLocationCompleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.PlayDismountingAnimation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::PlayDismountingAnimation(EMountingDirection Position) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayDismountingAnimation");

	struct UMountRiderInterface_PlayDismountingAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderInterface_PlayDismountingAnimation_Params params;
	params.Position = Position;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.PlayMountingAnimation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::PlayMountingAnimation(EMountingDirection Position) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayMountingAnimation");

	struct UMountRiderInterface_PlayMountingAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderInterface_PlayMountingAnimation_Params params;
	params.Position = Position;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.PlayMoveToSeatAnimation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: currentSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: oldSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::PlayMoveToSeatAnimation(int32_t currentSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayMoveToSeatAnimation");

	struct UMountRiderInterface_PlayMoveToSeatAnimation_Params {
		int32_t currentSeatId;			//Offset: 0 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 4 | ElementSize: 4
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMountRiderInterface_PlayMoveToSeatAnimation_Params params;
	params.currentSeatId = currentSeatId;
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
// Function AdsMountingSystem.MountRiderInterface.SetRiderCollisionEnabled
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: shouldEnable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::SetRiderCollisionEnabled(bool shouldEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.SetRiderCollisionEnabled");

	struct UMountRiderInterface_SetRiderCollisionEnabled_Params {
		bool shouldEnable;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderInterface_SetRiderCollisionEnabled_Params params;
	params.shouldEnable = shouldEnable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderInterface.StartPawnDismounting
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: oldPawnMount	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.StartPawnDismounting");

	struct UMountRiderInterface_StartPawnDismounting_Params {
		class AActor* oldPawnMount;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	UMountRiderInterface_StartPawnDismounting_Params params;
	params.oldPawnMount = oldPawnMount;

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
// Function AdsMountingSystem.MountRiderInterface.StartPawnMounting
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: linkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.StartPawnMounting");

	struct UMountRiderInterface_StartPawnMounting_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	UMountRiderInterface_StartPawnMounting_Params params;
	params.newMountActor = newMountActor;
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
// Function AdsMountingSystem.MountRiderInterface.StartPawnMountingToSeat
// Flags: Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: linkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderInterface::StartPawnMountingToSeat(class AActor* newMountActor, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.StartPawnMountingToSeat");

	struct UMountRiderInterface_StartPawnMountingToSeat_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	UMountRiderInterface_StartPawnMountingToSeat_Params params;
	params.newMountActor = newMountActor;
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

#pragma endregion
}