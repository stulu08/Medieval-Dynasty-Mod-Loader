#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.LinkedMountActorOwner
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class ULinkedMountActorOwner : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.LinkedMountActorOwner");
		return ptr;
	}

#pragma region Functions
	class AActor* GetLinkedActor(int32_t seatId)/* const*/;

	TArray<class AActor*> GetLinkedActors()/* const*/;

	class AActor* SetLinkedActor(class AActor* newLinkedActor, int32_t seatId);

#pragma endregion
};
};