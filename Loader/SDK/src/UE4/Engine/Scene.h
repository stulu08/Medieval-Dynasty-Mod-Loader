#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.Scene
// Super: Class CoreUObject.Object
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
	class UScene : public UObject {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.Scene");
			return ptr;
		}

	};
};