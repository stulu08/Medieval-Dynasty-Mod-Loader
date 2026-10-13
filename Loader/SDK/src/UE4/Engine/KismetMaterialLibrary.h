#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetMaterialLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}

#pragma region Functions
	static class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, struct FName OptionalName, EMIDCreationFlags CreationFlags);

	static float GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName);

	static struct FLinearColor GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName);

	static void SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName, float ParameterValue);

	static void SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName, const struct FLinearColor& ParameterValue);

#pragma endregion
};
};