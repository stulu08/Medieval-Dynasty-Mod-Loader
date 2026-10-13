#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/ArrayReplicationManager.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.LandscapeSubManager
// Super: Class Medieval_Dynasty.ArrayReplicationManager
// Size: 1504
// Size inherited: 664
/////////////////////////////////////////////
namespace UE4 {
class ALandscapeSubManager : public AArrayReplicationManager {
public:
#pragma region Members
	//struct FST_FoliageDataArray	FoliageDataCollision;		//Offset: 664	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_FoliageDataArray M_GetFoliageDataCollision() const;
	struct FST_FoliageDataArray* M_PtrGetFoliageDataCollision();
	void M_SetFoliageDataCollision(const struct FST_FoliageDataArray& value);

	//struct FST_FoliageDataArray	FoliageDataNoCollision;		//Offset: 944	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_FoliageDataArray M_GetFoliageDataNoCollision() const;
	struct FST_FoliageDataArray* M_PtrGetFoliageDataNoCollision();
	void M_SetFoliageDataNoCollision(const struct FST_FoliageDataArray& value);

	//struct FST_FoliageDepletedDataArray	FoliageDepletedData;		//Offset: 1224	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_FoliageDepletedDataArray M_GetFoliageDepletedData() const;
	struct FST_FoliageDepletedDataArray* M_PtrGetFoliageDepletedData();
	void M_SetFoliageDepletedData(const struct FST_FoliageDepletedDataArray& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.LandscapeSubManager");
		return ptr;
	}

#pragma region Functions
	void AddFoliageCollision(struct FST_FoliageData NewFoliageCollision);

	void AddFoliageDepleted(struct FST_FoliageDepletedData NewFoliageDepleted);

	void AddFoliageNoCollision(struct FST_FoliageData NewFoliageNoCollision);

	void ChangeElementFoliageCollision(int32_t ItemId, struct FST_FoliageData NewFoliageCollision);

	void ChangeElementFoliageDepleted(int32_t ItemId, struct FST_FoliageDepletedData NewFoliageDepleted);

	void ChangeElementFoliageNoCollision(int32_t ItemId, struct FST_FoliageData NewFoliageNoCollision);

	void ClearFoliageCollision();

	void ClearFoliageDepleted();

	void ClearFoliageNoCollision();

	int32_t FindFoliage(int32_t InstanceIndex, unsigned char ResourceID, unsigned char ResourceSubID, bool bHasCollision);

	void OnRep_FoliageDataCollision();

	void OnRep_FoliageDataNoCollision();

	void OnRep_FoliageDepletedData();

	void RemoveFoliageCollision(int32_t ItemId);

	void RemoveFoliageDepleted(int32_t ItemId);

	void RemoveFoliageNoCollision(int32_t ItemId);

#pragma endregion
};
};