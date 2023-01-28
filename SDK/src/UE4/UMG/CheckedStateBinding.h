#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.CheckedStateBinding
// Super: Class UMG.PropertyBinding
// Size: 104
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UCheckedStateBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}

#pragma region Functions
	ECheckBoxState GetValue()/* const*/;

#pragma endregion
};
};