#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CLeaderboardBlueprintLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UCLeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CLeaderboardBlueprintLibrary");
		return ptr;
	}

#pragma region Functions
	static bool WriteLeaderboardInteger(class APlayerController* PlayerController, struct FName StatName, int32_t StatValue);

#pragma endregion
};
};