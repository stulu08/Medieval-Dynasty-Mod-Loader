#include "../SDK.h"
#include "AnimNotifyState.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.AnimNotifyState.GetNotifyName
// Flags: Native, Event, Public, BlueprintEvent, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UAnimNotifyState::GetNotifyName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotifyState.GetNotifyName");

	struct UAnimNotifyState_GetNotifyName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UAnimNotifyState_GetNotifyName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimNotifyState.Received_NotifyBegin
// Flags: Event, Public, BlueprintEvent, Const
// Params:
// Name: MeshComp	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Animation	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TotalDuration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimNotifyState::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotifyState.Received_NotifyBegin");

	struct UAnimNotifyState_Received_NotifyBegin_Params {
		class USkeletalMeshComponent* MeshComp;			//Offset: 0 | ElementSize: 8
		class UAnimSequenceBase* Animation;			//Offset: 8 | ElementSize: 8
		float TotalDuration;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UAnimNotifyState_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimNotifyState.Received_NotifyEnd
// Flags: Event, Public, BlueprintEvent, Const
// Params:
// Name: MeshComp	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Animation	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimNotifyState::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotifyState.Received_NotifyEnd");

	struct UAnimNotifyState_Received_NotifyEnd_Params {
		class USkeletalMeshComponent* MeshComp;			//Offset: 0 | ElementSize: 8
		class UAnimSequenceBase* Animation;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UAnimNotifyState_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimNotifyState.Received_NotifyTick
// Flags: Event, Public, BlueprintEvent, Const
// Params:
// Name: MeshComp	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Animation	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FrameDeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimNotifyState::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotifyState.Received_NotifyTick");

	struct UAnimNotifyState_Received_NotifyTick_Params {
		class USkeletalMeshComponent* MeshComp;			//Offset: 0 | ElementSize: 8
		class UAnimSequenceBase* Animation;			//Offset: 8 | ElementSize: 8
		float FrameDeltaTime;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UAnimNotifyState_Received_NotifyTick_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

#pragma endregion
}