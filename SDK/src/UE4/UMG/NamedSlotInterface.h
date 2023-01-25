#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class UMG.NamedSlotInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UNamedSlotInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};