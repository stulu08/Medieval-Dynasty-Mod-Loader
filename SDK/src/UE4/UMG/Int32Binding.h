#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.Int32Binding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UInt32Binding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}

#pragma region Functions
	int32_t GetValue() const;

#pragma endregion
};
};