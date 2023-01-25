#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/MaterialExpression.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MaterialPlatformSwitch
// Super: Class Engine.MaterialExpression
// Size: 224
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMaterialPlatformSwitch : public UMaterialExpression {
public:
#pragma region Members
	//struct FExpressionInput	Default;		//Offset: 80	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FExpressionInput M_GetDefault() const;
	struct FExpressionInput* M_PtrGetDefault();
	void M_SetDefault(const struct FExpressionInput& value);

	//struct FExpressionInput	Inputs[6];		//Offset: 100	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FExpressionInput M_GetInputs() const;
	struct FExpressionInput* M_PtrGetInputs();
	void M_SetInputs(const struct FExpressionInput& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MaterialPlatformSwitch");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};