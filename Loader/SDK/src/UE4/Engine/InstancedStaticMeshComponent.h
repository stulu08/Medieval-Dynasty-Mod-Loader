#pragma once
#include "Structs.h"
#include "Engine/StaticMeshComponent.h"
/////////////////////////////////////////////
// Class Engine.InstancedStaticMeshComponent
// Super: Class Engine.StaticMeshComponent
// Size: 1424
// Size inherited: 1248
/////////////////////////////////////////////
namespace UE4 {
class UInstancedStaticMeshComponent : public UStaticMeshComponent {
public:
#pragma region Members
	//TArray<struct FInstancedStaticMeshInstanceData>	PerInstanceSMData;		//Offset: 1248	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FInstancedStaticMeshInstanceData> M_GetPerInstanceSMData() const;
	TArray<struct FInstancedStaticMeshInstanceData>* M_PtrGetPerInstanceSMData();
	void M_SetPerInstanceSMData(const TArray<struct FInstancedStaticMeshInstanceData>& value);

	//int32_t	NumCustomDataFloats;		//Offset: 1264	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumCustomDataFloats() const;
	int32_t* M_PtrGetNumCustomDataFloats();
	void M_SetNumCustomDataFloats(const int32_t& value);

	//TArray<float>	PerInstanceSMCustomData;		//Offset: 1272	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<float> M_GetPerInstanceSMCustomData() const;
	TArray<float>* M_PtrGetPerInstanceSMCustomData();
	void M_SetPerInstanceSMCustomData(const TArray<float>& value);

	//int32_t	InstancingRandomSeed;		//Offset: 1288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetInstancingRandomSeed() const;
	int32_t* M_PtrGetInstancingRandomSeed();
	void M_SetInstancingRandomSeed(const int32_t& value);

	//int32_t	InstanceStartCullDistance;		//Offset: 1292	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetInstanceStartCullDistance() const;
	int32_t* M_PtrGetInstanceStartCullDistance();
	void M_SetInstanceStartCullDistance(const int32_t& value);

	//int32_t	InstanceEndCullDistance;		//Offset: 1296	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetInstanceEndCullDistance() const;
	int32_t* M_PtrGetInstanceEndCullDistance();
	void M_SetInstanceEndCullDistance(const int32_t& value);

	//TArray<int32_t>	InstanceReorderTable;		//Offset: 1304	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<int32_t> M_GetInstanceReorderTable() const;
	TArray<int32_t>* M_PtrGetInstanceReorderTable();
	void M_SetInstanceReorderTable(const TArray<int32_t>& value);

	//int32_t	NumPendingLightmaps;		//Offset: 1392	Size: 4	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetNumPendingLightmaps() const;
	int32_t* M_PtrGetNumPendingLightmaps();
	void M_SetNumPendingLightmaps(const int32_t& value);

	//TArray<struct FInstancedStaticMeshMappingInfo>	CachedMappings;		//Offset: 1400	Size: 16	Flags: ZeroConstructor, Transient, DuplicateTransient, Protected, TextExportTransient, NativeAccessSpecifierProtected
	TArray<struct FInstancedStaticMeshMappingInfo> M_GetCachedMappings() const;
	TArray<struct FInstancedStaticMeshMappingInfo>* M_PtrGetCachedMappings();
	void M_SetCachedMappings(const TArray<struct FInstancedStaticMeshMappingInfo>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}

#pragma region Functions
	int32_t AddInstance(const struct FTransform& InstanceTransform);

	TArray<int32_t> AddInstances(const TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices);

	int32_t AddInstanceWorldSpace(const struct FTransform& WorldTransform);

	bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, const struct FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

	bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, const TArray<struct FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

	void ClearInstances();

	int32_t GetInstanceCount()/* const*/;

	TArray<int32_t> GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace)/* const*/;

	TArray<int32_t> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace)/* const*/;

	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)/* const*/;

	bool RemoveInstance(int32_t InstanceIndex);

	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);

	bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);

	bool UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

#pragma endregion
};
};