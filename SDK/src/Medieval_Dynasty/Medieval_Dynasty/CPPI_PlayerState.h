#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CPPI_PlayerState
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UCPPI_PlayerState : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CPPI_PlayerState");
		return ptr;
	}

#pragma region Functions
	bool GetFastBuilding();

	bool GetFastCrafting();

	bool GetFastStorage();

	class APawn* GetPawnPrivate();

	bool GetPoisoning();

	bool GetTemperature();

	bool GetUnlimitedFood();

	bool GetUnlimitedHP();

	bool GetUnlimitedStamina();

	bool GetUnlimitedWater();

	bool GetUnlimitedWeight();

#pragma endregion
};
};