#pragma once
#include "Structs.h"
#include "Engine/DamageType.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.DamageTypePoison
// Super: Class Engine.DamageType
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UDamageTypePoison : public UDamageType {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.DamageTypePoison");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};