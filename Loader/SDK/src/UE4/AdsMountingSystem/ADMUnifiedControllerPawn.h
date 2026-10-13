#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.ADMUnifiedControllerPawn
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UADMUnifiedControllerPawn : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.ADMUnifiedControllerPawn");
		return ptr;
	}

#pragma region Functions
	class AController* GetCharacterController()/* const*/;

	class AActor* GetCharacterMount()/* const*/;

	class APawn* GetCharacterPawn()/* const*/;

	bool IsMounted()/* const*/;

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

#pragma endregion
};
};