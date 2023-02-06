#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.BrushBinding
// Super: Class UMG.PropertyBinding
// Size: 104
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UBrushBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}

#pragma region Functions
	struct FSlateBrush GetValue()/* const*/;

#pragma endregion
};
};