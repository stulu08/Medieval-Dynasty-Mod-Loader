#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.HealthInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UHealthInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.HealthInterface");
		return ptr;
	}

#pragma region Functions
	float GetHealth()/* const*/;

	float GetHealthNormalized()/* const*/;

	float GetMaxHealth()/* const*/;

	bool HasFullHealth()/* const*/;

	void Heal();

	bool IsAlive()/* const*/;

	void Kill();

	void SetHealth(float newHealth);

	void SetHealthNormalized(float newHealthNormalized);

	void SetMaxHealth(float newMaxHealth);

#pragma endregion
};
};