#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.LandscapeManager
// Super: Class Engine.Actor
// Size: 672
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ALandscapeManager : public AActor {
public:
#pragma region Members
	//bool	areFoliageCollisionActorsEnabled;		//Offset: 576	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetareFoliageCollisionActorsEnabled() const;
	bool* M_PtrGetareFoliageCollisionActorsEnabled();
	void M_SetareFoliageCollisionActorsEnabled(const bool& value);

	//bool	spawnAdditionalCollisionActors;		//Offset: 577	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetspawnAdditionalCollisionActors() const;
	bool* M_PtrGetspawnAdditionalCollisionActors();
	void M_SetspawnAdditionalCollisionActors(const bool& value);

	//TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>	masterResourceComponentFoliageCollisionActors;		//Offset: 584	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*> M_GetmasterResourceComponentFoliageCollisionActors() const;
	TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>* M_PtrGetmasterResourceComponentFoliageCollisionActors();
	void M_SetmasterResourceComponentFoliageCollisionActors(const TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>& value);

	//int32_t	initialFoliageCollisionActorsPerTypeCount;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetinitialFoliageCollisionActorsPerTypeCount() const;
	int32_t* M_PtrGetinitialFoliageCollisionActorsPerTypeCount();
	void M_SetinitialFoliageCollisionActorsPerTypeCount(const int32_t& value);

	//float	foliageCollisionActorsActivationRange;		//Offset: 668	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfoliageCollisionActorsActivationRange() const;
	float* M_PtrGetfoliageCollisionActorsActivationRange();
	void M_SetfoliageCollisionActorsActivationRange(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.LandscapeManager");
		return ptr;
	}

#pragma region Functions
	void AddCollisionActivator(class AActor* Actor);

	class UFoliageInstancedResource* GetFoliageInstancedResource(class AFoliageCollisionActor* FoliageCollisionActor);

	void RemoveCollisionActivator(class AActor* Actor);

	class UFoliageInstancedResource* RetrieveFoliageInstancedResource(class UFoliageInstancedResource* FoliageInstancedResource);

#pragma endregion
};
};