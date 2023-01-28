#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.FloatBinding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UFloatBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}

#pragma region Functions
	float GetValue()/* const*/;

#pragma endregion
};
};