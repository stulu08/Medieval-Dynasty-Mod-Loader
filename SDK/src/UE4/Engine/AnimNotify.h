#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.AnimNotify
// Super: Class CoreUObject.Object
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UAnimNotify : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}

#pragma region Functions
	struct FString GetNotifyName()/* const*/;

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)/* const*/;

#pragma endregion
};
};