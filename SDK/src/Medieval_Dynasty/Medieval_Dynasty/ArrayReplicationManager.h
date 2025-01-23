#pragma once
#include "Structs.h"
#include "Engine/Info.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.ArrayReplicationManager
// Super: Class Engine.Info
// Size: 664
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AArrayReplicationManager : public AInfo {
public:
#pragma region Members
	//bool	bFinishedLoading;		//Offset: 544	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFinishedLoading() const;
	bool* M_PtrGetbFinishedLoading();
	void M_SetbFinishedLoading(const bool& value);

	//bool	bShowDebugs;		//Offset: 545	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbShowDebugs() const;
	bool* M_PtrGetbShowDebugs();
	void M_SetbShowDebugs(const bool& value);

	//TMap<struct FName, int32_t>	ArraysNames;		//Offset: 552	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	TMap<struct FName, int32_t> M_GetArraysNames() const;
	TMap<struct FName, int32_t>* M_PtrGetArraysNames();
	void M_SetArraysNames(const TMap<struct FName, int32_t>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.ArrayReplicationManager");
		return ptr;
	}

#pragma region Functions
	static bool Array_HasSpace(const TArray<int32_t>& TargetArray);

	bool CanBeDespawned(struct FName InStructProperty);

	int32_t FindArraySizeLimitPerManager();

#pragma endregion
};
};