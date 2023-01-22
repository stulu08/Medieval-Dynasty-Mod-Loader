#include "Actor.h"
#include "UObject/Class.h"

namespace UE4 {
	FTransform AActor::GetTransform()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");
		struct
		{
			FTransform ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FRotator AActor::GetActorRotation()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");
		struct
		{
			FRotator ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorLocation()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorScale3D()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	FVector AActor::GetActorForwardVector() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorUpVector() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorRightVector() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	void AActor::SetActorScale3D(const FVector& NewScale3D) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");
		struct
		{
			FRotator NewScale3D;
		}params;
		params.NewScale3D = NewScale3D;
		UObject::ProcessEvent(fn, &params);
		return;
	}
	bool AActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");
		struct {
			struct FTransform         NewTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
			bool                      bSweep;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			struct FHitResult         SweepHitResult;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
			bool                      bTeleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			bool                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		}params;
		params.NewTransform = NewTransform;
		params.bSweep = bSweep;
		params.bTeleport = bTeleport;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		
		fn->SetFunctionFlags((EFunctionFlags)newFlags);
		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (SweepHitResult != nullptr)
			*SweepHitResult = params.SweepHitResult;

		return params.ReturnValue;
	}
	bool AActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");
		struct {
			struct FVector            NewLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			bool                      bSweep;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			struct FHitResult         SweepHitResult;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
			bool                      bTeleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			bool                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		}params;
		params.NewLocation = NewLocation;
		params.bSweep = bSweep;
		params.bTeleport = bTeleport;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;

		fn->SetFunctionFlags((EFunctionFlags)newFlags);
		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		if (SweepHitResult != nullptr)
			*SweepHitResult = params.SweepHitResult;

		return params.ReturnValue;
	}
	bool AActor::K2_SetActorRotation(const FRotator& NewRotation, bool bTeleportPhysics) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");
		struct
		{
			FRotator NewRotation;
			bool bTeleportPhysics;
			bool ReturnValue = false;
		}params;
		params.NewRotation = NewRotation;
		params.bTeleportPhysics = bTeleportPhysics;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
}