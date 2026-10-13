#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.BlueprintAsyncActionBase
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
	class UBlueprintAsyncActionBase : public UObject {
	public:
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
			return ptr;
		}

		void Activate();
	};
};