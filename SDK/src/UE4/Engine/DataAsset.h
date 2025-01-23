#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.DataAsset
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UDataAsset : public UObject {
public:
#pragma region Members
	//class UDataAsset*	NativeClass;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UDataAsset* M_GetNativeClass() const;
	class UDataAsset** M_PtrGetNativeClass();
	void M_SetNativeClass(const class UDataAsset*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};