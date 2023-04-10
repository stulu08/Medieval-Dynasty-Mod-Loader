#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.ObjectLibrary
// Super: Class CoreUObject.Object
// Size: 168
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UObjectLibrary : public UObject {
public:
#pragma region Members
	//class UObject*	ObjectBaseClass;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetObjectBaseClass() const;
	class UObject** M_PtrGetObjectBaseClass();
	void M_SetObjectBaseClass(const class UObject*& value);

	//bool	bHasBlueprintClasses;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbHasBlueprintClasses() const;
	bool* M_PtrGetbHasBlueprintClasses();
	void M_SetbHasBlueprintClasses(const bool& value);

	//TArray<class UObject*>	Objects;		//Offset: 56	Size: 16	Flags: Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<class UObject*> M_GetObjects() const;
	TArray<class UObject*>* M_PtrGetObjects();
	void M_SetObjects(const TArray<class UObject*>& value);

	//TArray<TWeakObjectPtr<class UObject>>	WeakObjects;		//Offset: 72	Size: 16	Flags: ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	TArray<TWeakObjectPtr<class UObject>> M_GetWeakObjects() const;
	TArray<TWeakObjectPtr<class UObject>>* M_PtrGetWeakObjects();
	void M_SetWeakObjects(const TArray<TWeakObjectPtr<class UObject>>& value);

	//bool	bUseWeakReferences;		//Offset: 88	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbUseWeakReferences() const;
	bool* M_PtrGetbUseWeakReferences();
	void M_SetbUseWeakReferences(const bool& value);

	//bool	bIsFullyLoaded;		//Offset: 89	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsFullyLoaded() const;
	bool* M_PtrGetbIsFullyLoaded();
	void M_SetbIsFullyLoaded(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};