#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterManager.BP_MasterManager_C
// Super: Class Engine.Actor
// Size: 552
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterManager_C : public AActor {
public:
#pragma region Members
	//class USceneComponent*	DefaultSceneRoot;		//Offset: 544	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterManager.BP_MasterManager_C");
		return ptr;
	}

#pragma region Functions
	void SaveData(class USAVE_Game_C* SaveReference, bool* Success);

	void LoadData(class USAVE_Game_C* SaveReference, bool* Success);

#pragma endregion
};
};