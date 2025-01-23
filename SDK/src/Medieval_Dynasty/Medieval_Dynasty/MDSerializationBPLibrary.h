#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MDSerializationBPLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMDSerializationBPLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MDSerializationBPLibrary");
		return ptr;
	}

#pragma region Functions
	static bool ApplySerialization(const TArray<unsigned char>& SerializedData, class UObject* InObject);

	static bool SerializeObject(TArray<unsigned char>* OutSerializedData, class UObject* InObject);

#pragma endregion
};
};