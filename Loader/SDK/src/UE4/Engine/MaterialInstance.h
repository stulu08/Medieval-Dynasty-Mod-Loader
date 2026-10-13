#pragma once
#include "Structs.h"
#include "Engine/MaterialInterface.h"
/////////////////////////////////////////////
// Class Engine.MaterialInstance
// Super: Class Engine.MaterialInterface
// Size: 784
// Size inherited: 136
/////////////////////////////////////////////
namespace UE4 {
class UMaterialInstance : public UMaterialInterface {
public:
#pragma region Members
	//class UPhysicalMaterial*	PhysMaterial;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterial* M_GetPhysMaterial() const;
	class UPhysicalMaterial** M_PtrGetPhysMaterial();
	void M_SetPhysMaterial(const class UPhysicalMaterial*& value);

	//class UPhysicalMaterial*	PhysicalMaterialMap[8];		//Offset: 144	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterial* M_GetPhysicalMaterialMap() const;
	class UPhysicalMaterial** M_PtrGetPhysicalMaterialMap();
	void M_SetPhysicalMaterialMap(const class UPhysicalMaterial*& value);

	//class UMaterialInterface*	Parent;		//Offset: 208	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMaterialInterface* M_GetParent() const;
	class UMaterialInterface** M_PtrGetParent();
	void M_SetParent(const class UMaterialInterface*& value);

	//unsigned char	bHasStaticPermutationResource : 1;		//Offset: 216	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasStaticPermutationResource() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasStaticPermutationResource();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasStaticPermutationResource(const unsigned char& value);

	//unsigned char	bOverrideSubsurfaceProfile : 1;		//Offset: 216	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideSubsurfaceProfile() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideSubsurfaceProfile();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideSubsurfaceProfile(const unsigned char& value);

	//TArray<struct FScalarParameterValue>	ScalarParameterValues;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FScalarParameterValue> M_GetScalarParameterValues() const;
	TArray<struct FScalarParameterValue>* M_PtrGetScalarParameterValues();
	void M_SetScalarParameterValues(const TArray<struct FScalarParameterValue>& value);

	//TArray<struct FVectorParameterValue>	VectorParameterValues;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FVectorParameterValue> M_GetVectorParameterValues() const;
	TArray<struct FVectorParameterValue>* M_PtrGetVectorParameterValues();
	void M_SetVectorParameterValues(const TArray<struct FVectorParameterValue>& value);

	//TArray<struct FTextureParameterValue>	TextureParameterValues;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FTextureParameterValue> M_GetTextureParameterValues() const;
	TArray<struct FTextureParameterValue>* M_PtrGetTextureParameterValues();
	void M_SetTextureParameterValues(const TArray<struct FTextureParameterValue>& value);

	//TArray<struct FRuntimeVirtualTextureParameterValue>	RuntimeVirtualTextureParameterValues;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FRuntimeVirtualTextureParameterValue> M_GetRuntimeVirtualTextureParameterValues() const;
	TArray<struct FRuntimeVirtualTextureParameterValue>* M_PtrGetRuntimeVirtualTextureParameterValues();
	void M_SetRuntimeVirtualTextureParameterValues(const TArray<struct FRuntimeVirtualTextureParameterValue>& value);

	//TArray<struct FFontParameterValue>	FontParameterValues;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FFontParameterValue> M_GetFontParameterValues() const;
	TArray<struct FFontParameterValue>* M_PtrGetFontParameterValues();
	void M_SetFontParameterValues(const TArray<struct FFontParameterValue>& value);

	//struct FMaterialInstanceBasePropertyOverrides	BasePropertyOverrides;		//Offset: 304	Size: 8	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMaterialInstanceBasePropertyOverrides M_GetBasePropertyOverrides() const;
	struct FMaterialInstanceBasePropertyOverrides* M_PtrGetBasePropertyOverrides();
	void M_SetBasePropertyOverrides(const struct FMaterialInstanceBasePropertyOverrides& value);

	//struct FStaticParameterSet	StaticParameters;		//Offset: 328	Size: 64	Flags: NativeAccessSpecifierPrivate
	struct FStaticParameterSet M_GetStaticParameters() const;
	struct FStaticParameterSet* M_PtrGetStaticParameters();
	void M_SetStaticParameters(const struct FStaticParameterSet& value);

	//struct FMaterialCachedParameters	CachedLayerParameters;		//Offset: 392	Size: 336	Flags: NativeAccessSpecifierPrivate
	struct FMaterialCachedParameters M_GetCachedLayerParameters() const;
	struct FMaterialCachedParameters* M_PtrGetCachedLayerParameters();
	void M_SetCachedLayerParameters(const struct FMaterialCachedParameters& value);

	//TArray<class UObject*>	CachedReferencedTextures;		//Offset: 728	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<class UObject*> M_GetCachedReferencedTextures() const;
	TArray<class UObject*>* M_PtrGetCachedReferencedTextures();
	void M_SetCachedReferencedTextures(const TArray<class UObject*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};