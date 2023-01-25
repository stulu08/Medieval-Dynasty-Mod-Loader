#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.VisibilityBinding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UVisibilityBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}

#pragma region Functions
	ESlateVisibility GetValue() const;

#pragma endregion
};
};