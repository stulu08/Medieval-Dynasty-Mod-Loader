#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.PropertyBinding
// Super: Class CoreUObject.Object
// Size: 96
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPropertyBinding : public UObject {
public:
#pragma region Members
	//TWeakObjectPtr<class UObject>	SourceObject;		//Offset: 40	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TWeakObjectPtr<class UObject> M_GetSourceObject() const;
	TWeakObjectPtr<class UObject>* M_PtrGetSourceObject();
	void M_SetSourceObject(const TWeakObjectPtr<class UObject>& value);

	//struct FDynamicPropertyPath	SourcePath;		//Offset: 48	Size: 40	Flags: NativeAccessSpecifierPublic
	struct FDynamicPropertyPath M_GetSourcePath() const;
	struct FDynamicPropertyPath* M_PtrGetSourcePath();
	void M_SetSourcePath(const struct FDynamicPropertyPath& value);

	//struct FName	DestinationProperty;		//Offset: 88	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetDestinationProperty() const;
	struct FName* M_PtrGetDestinationProperty();
	void M_SetDestinationProperty(const struct FName& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};