#pragma once
#include "Structs.h"
#include "Engine/AnimInstance.h"
/////////////////////////////////////////////
// Class AnimGraphRuntime.AnimSequencerInstance
// Super: Class Engine.AnimInstance
// Size: 704
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class UAnimSequencerInstance : public UAnimInstance {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};