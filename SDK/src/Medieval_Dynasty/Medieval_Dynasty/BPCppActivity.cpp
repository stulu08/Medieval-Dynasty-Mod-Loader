#include "../SDK.h"
#include "BPCppActivity.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppActivity.FinishActivity
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivityId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivityCompletedSuccessfully	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HideFinishedActivity	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartNextActivity	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewActivityId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppActivity::FinishActivity(class APlayerController* PC, struct FString ActivityId, bool ActivityCompletedSuccessfully, bool HideFinishedActivity, bool StartNextActivity, struct FString NewActivityId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppActivity.FinishActivity");

	struct UBPCppActivity_FinishActivity_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		struct FString ActivityId;			//Offset: 8 | ElementSize: 16
		bool ActivityCompletedSuccessfully;			//Offset: 24 | ElementSize: 1
		bool HideFinishedActivity;			//Offset: 25 | ElementSize: 1
		bool StartNextActivity;			//Offset: 26 | ElementSize: 1
		struct FString NewActivityId;			//Offset: 32 | ElementSize: 16
	};
	UBPCppActivity_FinishActivity_Params params;
	params.PC = PC;
	params.ActivityId = ActivityId;
	params.ActivityCompletedSuccessfully = ActivityCompletedSuccessfully;
	params.HideFinishedActivity = HideFinishedActivity;
	params.StartNextActivity = StartNextActivity;
	params.NewActivityId = NewActivityId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppActivity.ResetAllActiveActivities
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppActivity::ResetAllActiveActivities(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppActivity.ResetAllActiveActivities");

	struct UBPCppActivity_ResetAllActiveActivities_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
	};
	UBPCppActivity_ResetAllActiveActivities_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppActivity.ResumeActivity
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivityId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CompletedTasks	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: InProgressTasks	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ToggleVisibility	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppActivity::ResumeActivity(class APlayerController* PC, struct FString ActivityId, TArray<struct FString> CompletedTasks, TArray<struct FString> InProgressTasks, bool ToggleVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppActivity.ResumeActivity");

	struct UBPCppActivity_ResumeActivity_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		struct FString ActivityId;			//Offset: 8 | ElementSize: 16
		TArray<struct FString> CompletedTasks;			//Offset: 24 | ElementSize: 16
		TArray<struct FString> InProgressTasks;			//Offset: 40 | ElementSize: 16
		bool ToggleVisibility;			//Offset: 56 | ElementSize: 1
	};
	UBPCppActivity_ResumeActivity_Params params;
	params.PC = PC;
	params.ActivityId = ActivityId;
	params.CompletedTasks = CompletedTasks;
	params.InProgressTasks = InProgressTasks;
	params.ToggleVisibility = ToggleVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppActivity.SetActivityAvailability
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivityId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ToggleVisibility	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppActivity::SetActivityAvailability(class APlayerController* PC, struct FString ActivityId, bool ToggleVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppActivity.SetActivityAvailability");

	struct UBPCppActivity_SetActivityAvailability_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		struct FString ActivityId;			//Offset: 8 | ElementSize: 16
		bool ToggleVisibility;			//Offset: 24 | ElementSize: 1
	};
	UBPCppActivity_SetActivityAvailability_Params params;
	params.PC = PC;
	params.ActivityId = ActivityId;
	params.ToggleVisibility = ToggleVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppActivity.StartActivity
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivityId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppActivity::StartActivity(class APlayerController* PC, struct FString ActivityId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppActivity.StartActivity");

	struct UBPCppActivity_StartActivity_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
		struct FString ActivityId;			//Offset: 8 | ElementSize: 16
	};
	UBPCppActivity_StartActivity_Params params;
	params.PC = PC;
	params.ActivityId = ActivityId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}