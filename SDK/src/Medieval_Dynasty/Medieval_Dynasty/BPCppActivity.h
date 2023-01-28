#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BPCppActivity
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPCppActivity : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppActivity");
		return ptr;
	}

#pragma region Functions
	static void FinishActivity(class APlayerController* PC, struct FString ActivityId, bool ActivityCompletedSuccessfully, bool HideFinishedActivity, bool StartNextActivity, struct FString NewActivityId);

	static void ResetAllActiveActivities(class APlayerController* PC);

	static void ResumeActivity(class APlayerController* PC, struct FString ActivityId, TArray<struct FString> CompletedTasks, TArray<struct FString> InProgressTasks, bool ToggleVisibility);

	static void SetActivityAvailability(class APlayerController* PC, struct FString ActivityId, bool ToggleVisibility);

	static void StartActivity(class APlayerController* PC, struct FString ActivityId);

#pragma endregion
};
};