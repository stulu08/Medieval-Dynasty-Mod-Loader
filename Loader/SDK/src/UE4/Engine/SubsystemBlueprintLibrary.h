#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.SubsystemBlueprintLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SubsystemBlueprintLibrary");
		return ptr;
	}

#pragma region Functions
	static class UEngineSubsystem* GetEngineSubsystem(class UEngineSubsystem* Class);

	static class UGameInstanceSubsystem* GetGameInstanceSubsystem(class UObject* ContextObject, class UGameInstanceSubsystem* Class);

	static class ULocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject* ContextObject, class ULocalPlayerSubsystem* Class);

	static class ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(class APlayerController* PlayerController, class ULocalPlayerSubsystem* Class);

	static class UWorldSubsystem* GetWorldSubsystem(class UObject* ContextObject, class UWorldSubsystem* Class);

#pragma endregion
};
};