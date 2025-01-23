#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class AnimationCore.AnimationDataSourceRegistry
// Super: Class CoreUObject.Object
// Size: 120
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UAnimationDataSourceRegistry : public UObject {
public:
#pragma region Members
	//TMap<struct FName, TWeakObjectPtr<class UObject>>	DataSources;		//Offset: 40	Size: 80	Flags: Transient, UObjectWrapper, NativeAccessSpecifierPrivate
	TMap<struct FName, TWeakObjectPtr<class UObject>> M_GetDataSources() const;
	TMap<struct FName, TWeakObjectPtr<class UObject>>* M_PtrGetDataSources();
	void M_SetDataSources(const TMap<struct FName, TWeakObjectPtr<class UObject>>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};