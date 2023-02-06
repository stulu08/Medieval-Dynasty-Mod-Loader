#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.TextBinding
// Super: Class UMG.PropertyBinding
// Size: 104
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UTextBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}

#pragma region Functions
	struct FString GetStringValue()/* const*/;

	struct FText GetTextValue()/* const*/;

#pragma endregion
};
};