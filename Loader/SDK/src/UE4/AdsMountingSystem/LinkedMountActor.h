#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.LinkedMountActor
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class ULinkedMountActor : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.LinkedMountActor");
		return ptr;
	}

#pragma region Functions
	class UMeshComponent* GetLinkedActorMesh()/* const*/;

	int32_t GetLinkedSeatId()/* const*/;

	class AActor* GetMasterActor()/* const*/;

	int32_t SetLinkedSeatId(int32_t seatId);

	class AActor* SetMasterActor(class AActor* masterActor);

#pragma endregion
};
};