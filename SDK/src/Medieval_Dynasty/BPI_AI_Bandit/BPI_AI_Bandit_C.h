#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_AI_Bandit.BPI_AI_Bandit_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_AI_Bandit_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AI_Bandit.BPI_AI_Bandit_C");
		return ptr;
	}

#pragma region Functions
	void AI_GetCanAvoid(bool* CanAvoid);

	void AI_SetCanAvoid(bool CanAvoid);

	void AI_SetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection> AvoidDirection, TEnumAsByte<E_AnimMovement> AvoidMovement);

	void AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement);

#pragma endregion
};
};