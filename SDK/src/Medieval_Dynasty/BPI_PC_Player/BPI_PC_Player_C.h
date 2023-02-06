#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_PC_Player_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C");
		return ptr;
	}

#pragma region Functions
	void BPI_UpdateControlsSensitivity();

	void BPI_OnHeadbobbingChanged();

	void BPI_OnCameraShakesChanged();

	void BPI_OnBreathingChanged();

	void BPI_RefreshSetSteering();

#pragma endregion
};
};