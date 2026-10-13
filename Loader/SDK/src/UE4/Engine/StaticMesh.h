#pragma once
#include "Structs.h"
#include "Engine/StreamableRenderAsset.h"
/////////////////////////////////////////////
// Class Engine.StaticMesh
// Super: Class Engine.StreamableRenderAsset
// Size: 336
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UStaticMesh : public UStreamableRenderAsset {
public:
#pragma region Members
	//struct FPerPlatformInt	MinLOD;		//Offset: 128	Size: 4	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FPerPlatformInt M_GetMinLOD() const;
	struct FPerPlatformInt* M_PtrGetMinLOD();
	void M_SetMinLOD(const struct FPerPlatformInt& value);

	//float	LpvBiasMultiplier;		//Offset: 132	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLpvBiasMultiplier() const;
	float* M_PtrGetLpvBiasMultiplier();
	void M_SetLpvBiasMultiplier(const float& value);

	//TArray<struct FStaticMaterial>	StaticMaterials;		//Offset: 136	Size: 16	Flags: BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FStaticMaterial> M_GetStaticMaterials() const;
	TArray<struct FStaticMaterial>* M_PtrGetStaticMaterials();
	void M_SetStaticMaterials(const TArray<struct FStaticMaterial>& value);

	//float	LightmapUVDensity;		//Offset: 152	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLightmapUVDensity() const;
	float* M_PtrGetLightmapUVDensity();
	void M_SetLightmapUVDensity(const float& value);

	//int32_t	LightMapResolution;		//Offset: 156	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetLightMapResolution() const;
	int32_t* M_PtrGetLightMapResolution();
	void M_SetLightMapResolution(const int32_t& value);

	//int32_t	LightMapCoordinateIndex;		//Offset: 160	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetLightMapCoordinateIndex() const;
	int32_t* M_PtrGetLightMapCoordinateIndex();
	void M_SetLightMapCoordinateIndex(const int32_t& value);

	//float	DistanceFieldSelfShadowBias;		//Offset: 164	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDistanceFieldSelfShadowBias() const;
	float* M_PtrGetDistanceFieldSelfShadowBias();
	void M_SetDistanceFieldSelfShadowBias(const float& value);

	//class UBodySetup*	BodySetup;		//Offset: 168	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBodySetup* M_GetBodySetup() const;
	class UBodySetup** M_PtrGetBodySetup();
	void M_SetBodySetup(const class UBodySetup*& value);

	//int32_t	LODForCollision;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetLODForCollision() const;
	int32_t* M_PtrGetLODForCollision();
	void M_SetLODForCollision(const int32_t& value);

	//unsigned char	bGenerateMeshDistanceField : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGenerateMeshDistanceField() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGenerateMeshDistanceField();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGenerateMeshDistanceField(const unsigned char& value);

	//unsigned char	bStripComplexCollisionForConsole : 1;		//Offset: 180	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbStripComplexCollisionForConsole() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbStripComplexCollisionForConsole();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbStripComplexCollisionForConsole(const unsigned char& value);

	//unsigned char	bHasNavigationData : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasNavigationData() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasNavigationData();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasNavigationData(const unsigned char& value);

	//unsigned char	bSupportUniformlyDistributedSampling : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportUniformlyDistributedSampling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportUniformlyDistributedSampling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportUniformlyDistributedSampling(const unsigned char& value);

	//unsigned char	bSupportPhysicalMaterialMasks : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportPhysicalMaterialMasks() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportPhysicalMaterialMasks();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportPhysicalMaterialMasks(const unsigned char& value);

	//unsigned char	bSupportRayTracing : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportRayTracing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportRayTracing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportRayTracing(const unsigned char& value);

	//unsigned char	bIsBuiltAtRuntime : 1;		//Offset: 180	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsBuiltAtRuntime() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsBuiltAtRuntime();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsBuiltAtRuntime(const unsigned char& value);

	//unsigned char	bAllowCPUAccess : 1;		//Offset: 181	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowCPUAccess() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowCPUAccess();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowCPUAccess(const unsigned char& value);

	//unsigned char	bSupportGpuUniformlyDistributedSampling : 1;		//Offset: 181	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportGpuUniformlyDistributedSampling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportGpuUniformlyDistributedSampling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportGpuUniformlyDistributedSampling(const unsigned char& value);

	//TArray<class UStaticMeshSocket*>	Sockets;		//Offset: 216	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UStaticMeshSocket*> M_GetSockets() const;
	TArray<class UStaticMeshSocket*>* M_PtrGetSockets();
	void M_SetSockets(const TArray<class UStaticMeshSocket*>& value);

	//struct FVector	PositiveBoundsExtension;		//Offset: 248	Size: 12	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetPositiveBoundsExtension() const;
	struct FVector* M_PtrGetPositiveBoundsExtension();
	void M_SetPositiveBoundsExtension(const struct FVector& value);

	//struct FVector	NegativeBoundsExtension;		//Offset: 260	Size: 12	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetNegativeBoundsExtension() const;
	struct FVector* M_PtrGetNegativeBoundsExtension();
	void M_SetNegativeBoundsExtension(const struct FVector& value);

	//struct FBoxSphereBounds	ExtendedBounds;		//Offset: 272	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBoxSphereBounds M_GetExtendedBounds() const;
	struct FBoxSphereBounds* M_PtrGetExtendedBounds();
	void M_SetExtendedBounds(const struct FBoxSphereBounds& value);

	//int32_t	ElementToIgnoreForTexFactor;		//Offset: 300	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetElementToIgnoreForTexFactor() const;
	int32_t* M_PtrGetElementToIgnoreForTexFactor();
	void M_SetElementToIgnoreForTexFactor(const int32_t& value);

	//TArray<class UAssetUserData*>	AssetUserData;		//Offset: 304	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	TArray<class UAssetUserData*> M_GetAssetUserData() const;
	TArray<class UAssetUserData*>* M_PtrGetAssetUserData();
	void M_SetAssetUserData(const TArray<class UAssetUserData*>& value);

	//class UObject*	EditableMesh;		//Offset: 320	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetEditableMesh() const;
	class UObject** M_PtrGetEditableMesh();
	void M_SetEditableMesh(const class UObject*& value);

	//class UNavCollisionBase*	NavCollision;		//Offset: 328	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UNavCollisionBase* M_GetNavCollision() const;
	class UNavCollisionBase** M_PtrGetNavCollision();
	void M_SetNavCollision(const class UNavCollisionBase*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

#pragma region Functions
	struct FName AddMaterial(class UMaterialInterface* Material);

	void AddSocket(class UStaticMeshSocket* Socket);

	void BuildFromStaticMeshDescriptions(const TArray<class UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);

	static class UStaticMeshDescription* CreateStaticMeshDescription(class UObject* Outer);

	class UStaticMeshSocket* FindSocket(struct FName InSocketName)/* const*/;

	struct FBox GetBoundingBox()/* const*/;

	struct FBoxSphereBounds GetBounds()/* const*/;

	class UMaterialInterface* GetMaterial(int32_t MaterialIndex)/* const*/;

	int32_t GetMaterialIndex(struct FName MaterialSlotName)/* const*/;

	int32_t GetMinimumLODForPlatform(const struct FName& PlatformName)/* const*/;

	void GetMinimumLODForPlatforms(TMap<struct FName, int32_t>* PlatformMinimumLODs)/* const*/;

	int32_t GetNumLODs()/* const*/;

	int32_t GetNumSections(int32_t InLOD)/* const*/;

	TArray<struct FStaticMaterial> GetStaticMaterials()/* const*/;

	void RemoveSocket(class UStaticMeshSocket* Socket);

	void SetStaticMaterials(const TArray<struct FStaticMaterial>& InStaticMaterials);

#pragma endregion
};
};