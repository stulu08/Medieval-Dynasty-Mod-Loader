#include "../SDK.h"
#include "CustomEventCondition.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventCondition.IsConditionMet
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCustomEventCondition::IsConditionMet(class AActor* Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventCondition.IsConditionMet");

	struct UCustomEventCondition_IsConditionMet_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UCustomEventCondition_IsConditionMet_Params params;
	params.Instigator = Instigator;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventCondition.IsConditionMet_Internal
// Flags: Native, Public
// Params:
// Name: Instigator	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCustomEventCondition::IsConditionMet_Internal(class AActor* Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventCondition.IsConditionMet_Internal");

	struct UCustomEventCondition_IsConditionMet_Internal_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UCustomEventCondition_IsConditionMet_Internal_Params params;
	params.Instigator = Instigator;

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