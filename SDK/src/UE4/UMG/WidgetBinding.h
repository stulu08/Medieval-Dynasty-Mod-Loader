#pragma once
#include "Structs.h"
#include "UMG/PropertyBinding.h"
/////////////////////////////////////////////
// Class UMG.WidgetBinding
// Super: Class UMG.PropertyBinding
// Size: 96
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UWidgetBinding : public UPropertyBinding {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}

#pragma region Functions
	class UWidget* GetValue()/* const*/;

#pragma endregion
};
};