#pragma once
#include "CoreUObject/Object.h"

namespace UE4 {
	class UInterface : public UObject {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
			return ptr;
		}
	};
};