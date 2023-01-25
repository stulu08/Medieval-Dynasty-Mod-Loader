#include "../SDK.h"
#include "Viewport.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BackgroundColor
// Declaration: struct FLinearColor BackgroundColor
struct FLinearColor UViewport::M_GetBackgroundColor() const {
	return Read<struct FLinearColor>((byte*)this + 288);
}
struct FLinearColor* UViewport::M_PtrGetBackgroundColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 288);
}
void UViewport::M_SetBackgroundColor(const struct FLinearColor& value) {
	Write((byte*)this + 288, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Viewport.GetViewLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UViewport::GetViewLocation() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	struct UViewport_GetViewLocation_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	UViewport_GetViewLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Viewport.GetViewportWorld
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UWorld*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWorld* UViewport::GetViewportWorld() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	struct UViewport_GetViewportWorld_Params {
		class UWorld* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UViewport_GetViewportWorld_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Viewport.GetViewRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator UViewport::GetViewRotation() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	struct UViewport_GetViewRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	UViewport_GetViewRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Viewport.SetViewLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UViewport::SetViewLocation(struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	struct UViewport_SetViewLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	UViewport_SetViewLocation_Params params;
	params.Location = Location;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Viewport.SetViewRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UViewport::SetViewRotation(struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	struct UViewport_SetViewRotation_Params {
		struct FRotator Rotation;			//Offset: 0 | ElementSize: 12
	};
	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Viewport.Spawn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ActorClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UViewport::Spawn(class AActor* ActorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	struct UViewport_Spawn_Params {
		class AActor* ActorClass;			//Offset: 0 | ElementSize: 8
		class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;

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