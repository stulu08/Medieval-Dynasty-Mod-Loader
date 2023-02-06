#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class SlateCore.FontBulkData
// Super: Class CoreUObject.Object
// Size: 120
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UFontBulkData : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};