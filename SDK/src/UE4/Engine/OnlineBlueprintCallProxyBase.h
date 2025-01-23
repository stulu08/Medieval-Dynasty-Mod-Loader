#pragma once
#include "Structs.h"
#include "Engine/BlueprintAsyncActionBase.h"
/////////////////////////////////////////////
// Class Engine.OnlineBlueprintCallProxyBase
// Super: Class Engine.BlueprintAsyncActionBase
// Size: 48
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UOnlineBlueprintCallProxyBase : public UBlueprintAsyncActionBase {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};