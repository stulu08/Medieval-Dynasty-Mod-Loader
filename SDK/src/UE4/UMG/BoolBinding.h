#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.BoolBinding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UBoolBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}

#pragma region Functions
	bool GetValue()/* const*/;

#pragma endregion
};
};