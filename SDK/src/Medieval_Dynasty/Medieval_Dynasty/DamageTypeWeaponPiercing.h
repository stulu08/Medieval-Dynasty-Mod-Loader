#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/DamageTypeWeapon.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.DamageTypeWeaponPiercing
// Super: Class Medieval_Dynasty.DamageTypeWeapon
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UDamageTypeWeaponPiercing : public UDamageTypeWeapon {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.DamageTypeWeaponPiercing");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};