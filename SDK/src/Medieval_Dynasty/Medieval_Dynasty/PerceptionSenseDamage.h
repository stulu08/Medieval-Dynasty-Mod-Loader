#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/PerceptionSense.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSenseDamage
// Super: Class Medieval_Dynasty.PerceptionSense
// Size: 168
// Size inherited: 168
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSenseDamage : public UPerceptionSense {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSenseDamage");
		return ptr;
	}

#pragma region Functions
	void OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

#pragma endregion
};
};