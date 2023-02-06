#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.MouseCursorBinding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UMouseCursorBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}

#pragma region Functions
	TEnumAsByte<EMouseCursor> GetValue()/* const*/;

#pragma endregion
};
};