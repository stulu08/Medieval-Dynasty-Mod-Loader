#include "../SDK.h"
#include "AnimNotify.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.AnimNotify.GetNotifyName
// Flags: Native, Event, Public, BlueprintEvent, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UAnimNotify::GetNotifyName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotify.GetNotifyName");

	struct UAnimNotify_GetNotifyName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UAnimNotify_GetNotifyName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimNotify.Received_Notify
// Flags: Event, Public, BlueprintEvent, Const
// Params:
// Name: MeshComp	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Animation	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimNotify::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotify.Received_Notify");

	struct UAnimNotify_Received_Notify_Params {
		class USkeletalMeshComponent* MeshComp;			//Offset: 0 | ElementSize: 8
		class UAnimSequenceBase* Animation;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UAnimNotify_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

#pragma endregion
}