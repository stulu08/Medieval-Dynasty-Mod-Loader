#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.LatentActionLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class ULatentActionLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.LatentActionLibrary");
		return ptr;
	}

#pragma region Functions
	static void WaitForLoading(class UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, bool WaitForReplicationToSettle);

#pragma endregion
};
};