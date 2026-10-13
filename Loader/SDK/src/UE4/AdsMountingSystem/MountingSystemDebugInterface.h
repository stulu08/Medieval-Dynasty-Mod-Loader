#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.MountingSystemDebugInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMountingSystemDebugInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountingSystemDebugInterface");
		return ptr;
	}

#pragma region Functions
	int32_t GetPlayerDebugId()/* const*/;

	int32_t SetPlayerDebugId(int32_t newDebugId);

#pragma endregion
};
};