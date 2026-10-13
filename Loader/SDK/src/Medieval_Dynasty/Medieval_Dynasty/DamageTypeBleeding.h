#pragma once
#include "Structs.h"
#include "Engine/DamageType.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.DamageTypeBleeding
// Super: Class Engine.DamageType
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UDamageTypeBleeding : public UDamageType {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.DamageTypeBleeding");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};