#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.NamedSlot
// Super: Class UMG.ContentWidget
// Size: 304
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UNamedSlot : public UContentWidget {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};