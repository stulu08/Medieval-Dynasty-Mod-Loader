#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.NativeWidgetHost
// Super: Class UMG.Widget
// Size: 280
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UNativeWidgetHost : public UWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};