#pragma once
#include "Structs.h"
#include "Engine/InstancedStaticMeshComponent.h"
/////////////////////////////////////////////
// Class Engine.HierarchicalInstancedStaticMeshComponent
// Super: Class Engine.InstancedStaticMeshComponent
// Size: 1664
// Size inherited: 1424
/////////////////////////////////////////////
namespace UE4 {
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
public:
#pragma region Members
	//TArray<int32_t>	SortedInstances;		//Offset: 1432	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<int32_t> M_GetSortedInstances() const;
	TArray<int32_t>* M_PtrGetSortedInstances();
	void M_SetSortedInstances(const TArray<int32_t>& value);

	//int32_t	NumBuiltInstances;		//Offset: 1448	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumBuiltInstances() const;
	int32_t* M_PtrGetNumBuiltInstances();
	void M_SetNumBuiltInstances(const int32_t& value);

	//struct FBox	BuiltInstanceBounds;		//Offset: 1456	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBox M_GetBuiltInstanceBounds() const;
	struct FBox* M_PtrGetBuiltInstanceBounds();
	void M_SetBuiltInstanceBounds(const struct FBox& value);

	//struct FBox	UnbuiltInstanceBounds;		//Offset: 1484	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBox M_GetUnbuiltInstanceBounds() const;
	struct FBox* M_PtrGetUnbuiltInstanceBounds();
	void M_SetUnbuiltInstanceBounds(const struct FBox& value);

	//TArray<struct FBox>	UnbuiltInstanceBoundsList;		//Offset: 1512	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FBox> M_GetUnbuiltInstanceBoundsList() const;
	TArray<struct FBox>* M_PtrGetUnbuiltInstanceBoundsList();
	void M_SetUnbuiltInstanceBoundsList(const TArray<struct FBox>& value);

	//unsigned char	bEnableDensityScaling : 1;		//Offset: 1528	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableDensityScaling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableDensityScaling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableDensityScaling(const unsigned char& value);

	//int32_t	OcclusionLayerNumNodes;		//Offset: 1536	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetOcclusionLayerNumNodes() const;
	int32_t* M_PtrGetOcclusionLayerNumNodes();
	void M_SetOcclusionLayerNumNodes(const int32_t& value);

	//struct FBoxSphereBounds	CacheMeshExtendedBounds;		//Offset: 1540	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBoxSphereBounds M_GetCacheMeshExtendedBounds() const;
	struct FBoxSphereBounds* M_PtrGetCacheMeshExtendedBounds();
	void M_SetCacheMeshExtendedBounds(const struct FBoxSphereBounds& value);

	//bool	bDisableCollision;		//Offset: 1568	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbDisableCollision() const;
	bool* M_PtrGetbDisableCollision();
	void M_SetbDisableCollision(const bool& value);

	//int32_t	InstanceCountToRender;		//Offset: 1572	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetInstanceCountToRender() const;
	int32_t* M_PtrGetInstanceCountToRender();
	void M_SetInstanceCountToRender(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}

#pragma region Functions
	bool RemoveInstances(const TArray<int32_t>& InstancesToRemove);

#pragma endregion
};
};