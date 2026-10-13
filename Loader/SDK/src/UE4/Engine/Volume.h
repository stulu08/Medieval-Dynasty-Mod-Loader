#pragma once
#include "Structs.h"
#include "Engine/Brush.h"
/////////////////////////////////////////////
// Class Engine.Volume
// Super: Class Engine.Brush
// Size: 600
// Size inherited: 600
/////////////////////////////////////////////
namespace UE4 {
class AVolume : public ABrush {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};