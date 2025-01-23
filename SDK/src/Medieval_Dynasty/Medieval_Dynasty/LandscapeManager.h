#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.LandscapeManager
// Super: Class Engine.Actor
// Size: 1584
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ALandscapeManager : public AActor {
public:
#pragma region Members
	//TMap<struct FName, struct FFoliageParticleSystemData>	foliageParticleSystemsDataMap;		//Offset: 624	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
	TMap<struct FName, struct FFoliageParticleSystemData> M_GetfoliageParticleSystemsDataMap() const;
	TMap<struct FName, struct FFoliageParticleSystemData>* M_PtrGetfoliageParticleSystemsDataMap();
	void M_SetfoliageParticleSystemsDataMap(const TMap<struct FName, struct FFoliageParticleSystemData>& value);

	//bool	showFoliageParticlesDebug;		//Offset: 704	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetshowFoliageParticlesDebug() const;
	bool* M_PtrGetshowFoliageParticlesDebug();
	void M_SetshowFoliageParticlesDebug(const bool& value);

	//float	debugDuration;		//Offset: 708	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetdebugDuration() const;
	float* M_PtrGetdebugDuration();
	void M_SetdebugDuration(const float& value);

	//bool	bFinishedLoading;		//Offset: 712	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFinishedLoading() const;
	bool* M_PtrGetbFinishedLoading();
	void M_SetbFinishedLoading(const bool& value);

	//bool	bShowDebugs;		//Offset: 713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbShowDebugs() const;
	bool* M_PtrGetbShowDebugs();
	void M_SetbShowDebugs(const bool& value);

	//struct FST_FoliageDataArray	FoliageDataCollision;		//Offset: 720	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FST_FoliageDataArray M_GetFoliageDataCollision() const;
	struct FST_FoliageDataArray* M_PtrGetFoliageDataCollision();
	void M_SetFoliageDataCollision(const struct FST_FoliageDataArray& value);

	//struct FST_FoliageDataArray	FoliageDataNoCollision;		//Offset: 1000	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FST_FoliageDataArray M_GetFoliageDataNoCollision() const;
	struct FST_FoliageDataArray* M_PtrGetFoliageDataNoCollision();
	void M_SetFoliageDataNoCollision(const struct FST_FoliageDataArray& value);

	//struct FST_FoliageDepletedDataArray	FoliageDepletedData;		//Offset: 1280	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FST_FoliageDepletedDataArray M_GetFoliageDepletedData() const;
	struct FST_FoliageDepletedDataArray* M_PtrGetFoliageDepletedData();
	void M_SetFoliageDepletedData(const struct FST_FoliageDepletedDataArray& value);

	//TArray<class ALandscapeSubManager*>	LandscapeSubManagers;		//Offset: 1560	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
	TArray<class ALandscapeSubManager*> M_GetLandscapeSubManagers() const;
	TArray<class ALandscapeSubManager*>* M_PtrGetLandscapeSubManagers();
	void M_SetLandscapeSubManagers(const TArray<class ALandscapeSubManager*>& value);

	//class UObject*	LandscapeSubManagerClass;		//Offset: 1576	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetLandscapeSubManagerClass() const;
	class UObject** M_PtrGetLandscapeSubManagerClass();
	void M_SetLandscapeSubManagerClass(const class UObject*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.LandscapeManager");
		return ptr;
	}

#pragma region Functions
	void AddFoliageCollision(struct FST_FoliageData NewFoliageCollision);

	void AddFoliageDepleted(struct FST_FoliageDepletedData NewFoliageDepleted);

	void AddFoliageNoCollision(struct FST_FoliageData NewFoliageNoCollision);

	void ChangeElementFoliageCollision(int32_t ItemId, struct FST_FoliageData NewFoliageCollision);

	void ChangeElementFoliageDepleted(int32_t ItemId, struct FST_FoliageDepletedData NewFoliageDepleted);

	void ChangeElementFoliageNoCollision(int32_t ItemId, struct FST_FoliageData NewFoliageNoCollision);

	void CheckIfCanCombineManagers(class ALandscapeSubManager* SrcManager, class ALandscapeSubManager* TargetManager);

	void ClearFoliageCollision();

	void ClearFoliageDepleted();

	void ClearFoliageNoCollision();

	int32_t FindFoliage(int32_t InstanceIndex, unsigned char ResourceID, unsigned char ResourceSubID, bool bHasCollision, class ALandscapeSubManager** FoundManager);

	TArray<struct FName> GetSpawnedFoliageParticleSystemTags();

	void OnRep_FoliageDataCollision();

	void OnRep_FoliageDataNoCollision();

	void OnRep_FoliageDepletedData();

	void OnRep_LandscapeSubManagers();

	void RemoveFoliageCollision(int32_t ItemId);

	void RemoveFoliageDepleted(int32_t ItemId);

	void RemoveFoliageNoCollision(int32_t ItemId);

	TArray<class UFoliageInstancedStaticMeshComponent*> RetrieveFoliageInstancedStaticMeshComponents();

	struct FVector RetrieveFoliageParticleEmitterLocalLocationOffset(class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent);

	float RetrieveFoliageParticleEmitterRadius(class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent);

	void SpawnFoliageParticles();

	void UpdateAllFoliageParticles(struct FVector Location);

	void UpdateFoliageParticles(struct FVector Location, struct FName Tag);

#pragma endregion
};
};