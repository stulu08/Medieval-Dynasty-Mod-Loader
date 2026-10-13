#include "../SDK.h"
#include "PerceptionSubsystem.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.GetPerceptionComponents
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UPerceptionComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UPerceptionComponent*> UPerceptionSubsystem::GetPerceptionComponents()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.GetPerceptionComponents");

	struct UPerceptionSubsystem_GetPerceptionComponents_Params {
		TArray<class UPerceptionComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPerceptionSubsystem_GetPerceptionComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.GetStimuliSourceComponents
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UPerceptionStimuliSourceComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UPerceptionStimuliSourceComponent*> UPerceptionSubsystem::GetStimuliSourceComponents()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.GetStimuliSourceComponents");

	struct UPerceptionSubsystem_GetStimuliSourceComponents_Params {
		TArray<class UPerceptionStimuliSourceComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPerceptionSubsystem_GetStimuliSourceComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.RegisterPerceptionComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PerceptionComponent	Type: class UPerceptionComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSubsystem::RegisterPerceptionComponent(class UPerceptionComponent* PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.RegisterPerceptionComponent");

	struct UPerceptionSubsystem_RegisterPerceptionComponent_Params {
		class UPerceptionComponent* PerceptionComponent;			//Offset: 0 | ElementSize: 8
	};
	UPerceptionSubsystem_RegisterPerceptionComponent_Params params;
	params.PerceptionComponent = PerceptionComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.RegisterStimuliSourceComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: stimuliSourceComponent	Type: class UPerceptionStimuliSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSubsystem::RegisterStimuliSourceComponent(class UPerceptionStimuliSourceComponent* stimuliSourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.RegisterStimuliSourceComponent");

	struct UPerceptionSubsystem_RegisterStimuliSourceComponent_Params {
		class UPerceptionStimuliSourceComponent* stimuliSourceComponent;			//Offset: 0 | ElementSize: 8
	};
	UPerceptionSubsystem_RegisterStimuliSourceComponent_Params params;
	params.stimuliSourceComponent = stimuliSourceComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.UnregisterPerceptionComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PerceptionComponent	Type: class UPerceptionComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSubsystem::UnregisterPerceptionComponent(class UPerceptionComponent* PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.UnregisterPerceptionComponent");

	struct UPerceptionSubsystem_UnregisterPerceptionComponent_Params {
		class UPerceptionComponent* PerceptionComponent;			//Offset: 0 | ElementSize: 8
	};
	UPerceptionSubsystem_UnregisterPerceptionComponent_Params params;
	params.PerceptionComponent = PerceptionComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSubsystem.UnregisterStimuliSourceComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: stimuliSourceComponent	Type: class UPerceptionStimuliSourceComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSubsystem::UnregisterStimuliSourceComponent(class UPerceptionStimuliSourceComponent* stimuliSourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSubsystem.UnregisterStimuliSourceComponent");

	struct UPerceptionSubsystem_UnregisterStimuliSourceComponent_Params {
		class UPerceptionStimuliSourceComponent* stimuliSourceComponent;			//Offset: 0 | ElementSize: 8
	};
	UPerceptionSubsystem_UnregisterStimuliSourceComponent_Params params;
	params.stimuliSourceComponent = stimuliSourceComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}