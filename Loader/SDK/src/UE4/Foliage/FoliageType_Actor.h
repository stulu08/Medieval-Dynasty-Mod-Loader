#pragma once
#include "Structs.h"
#include "Foliage/FoliageType.h"
/////////////////////////////////////////////
// Class Foliage.FoliageType_Actor
// Super: Class Foliage.FoliageType
// Size: 960
// Size inherited: 944
/////////////////////////////////////////////
namespace UE4 {
class UFoliageType_Actor : public UFoliageType {
public:
#pragma region Members
	//class AActor*	ActorClass;		//Offset: 944	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor* M_GetActorClass() const;
	class AActor** M_PtrGetActorClass();
	void M_SetActorClass(const class AActor*& value);

	//bool	bShouldAttachToBaseComponent;		//Offset: 952	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbShouldAttachToBaseComponent() const;
	bool* M_PtrGetbShouldAttachToBaseComponent();
	void M_SetbShouldAttachToBaseComponent(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};