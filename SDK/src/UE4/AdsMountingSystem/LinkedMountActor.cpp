#include "../SDK.h"
#include "LinkedMountActor.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActor.GetLinkedActorMesh
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMeshComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMeshComponent* ULinkedMountActor::GetLinkedActorMesh()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetLinkedActorMesh");

	struct ULinkedMountActor_GetLinkedActorMesh_Params {
		class UMeshComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ULinkedMountActor_GetLinkedActorMesh_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActor.GetLinkedSeatId
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ULinkedMountActor::GetLinkedSeatId()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetLinkedSeatId");

	struct ULinkedMountActor_GetLinkedSeatId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ULinkedMountActor_GetLinkedSeatId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActor.GetMasterActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* ULinkedMountActor::GetMasterActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetMasterActor");

	struct ULinkedMountActor_GetMasterActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ULinkedMountActor_GetMasterActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.LinkedMountActor.SetLinkedSeatId
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ULinkedMountActor::SetLinkedSeatId(int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.SetLinkedSeatId");

	struct ULinkedMountActor_SetLinkedSeatId_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	ULinkedMountActor_SetLinkedSeatId_Params params;
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
// Function AdsMountingSystem.LinkedMountActor.SetMasterActor
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: masterActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* ULinkedMountActor::SetMasterActor(class AActor* masterActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.SetMasterActor");

	struct ULinkedMountActor_SetMasterActor_Params {
		class AActor* masterActor;			//Offset: 0 | ElementSize: 8
		class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ULinkedMountActor_SetMasterActor_Params params;
	params.masterActor = masterActor;

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