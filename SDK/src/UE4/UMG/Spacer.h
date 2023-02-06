#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.Spacer
// Super: Class UMG.Widget
// Size: 288
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class USpacer : public UWidget {
public:
#pragma region Members
	//struct FVector2D	Size;		//Offset: 264	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetSize() const;
	struct FVector2D* M_PtrGetSize();
	void M_SetSize(const struct FVector2D& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}

#pragma region Functions
	void SetSize(struct FVector2D InSize);

#pragma endregion
};
};