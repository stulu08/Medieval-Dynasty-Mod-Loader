#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Slate.SlateSettings
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateSettings : public UObject {
public:
#pragma region Members
	//bool	bExplicitCanvasChildZOrder;		//Offset: 40	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbExplicitCanvasChildZOrder() const;
	bool* M_PtrGetbExplicitCanvasChildZOrder();
	void M_SetbExplicitCanvasChildZOrder(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};