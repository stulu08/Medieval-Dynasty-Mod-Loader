#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.ColorBinding
// Super: Class UMG.PropertyBinding
// Size: 104
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UColorBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}

#pragma region Functions
	struct FLinearColor GetLinearValue()/* const*/;

	struct FSlateColor GetSlateValue()/* const*/;

#pragma endregion
};
};