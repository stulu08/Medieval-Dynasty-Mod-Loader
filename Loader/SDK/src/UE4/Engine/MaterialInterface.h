#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.MaterialInterface
// Super: Class CoreUObject.Object
// Size: 136
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMaterialInterface : public UObject {
public:
#pragma region Members
	//class USubsurfaceProfile*	SubsurfaceProfile;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USubsurfaceProfile* M_GetSubsurfaceProfile() const;
	class USubsurfaceProfile** M_PtrGetSubsurfaceProfile();
	void M_SetSubsurfaceProfile(const class USubsurfaceProfile*& value);

	//struct FLightmassMaterialInterfaceSettings	LightmassSettings;		//Offset: 80	Size: 16	Flags: Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FLightmassMaterialInterfaceSettings M_GetLightmassSettings() const;
	struct FLightmassMaterialInterfaceSettings* M_PtrGetLightmassSettings();
	void M_SetLightmassSettings(const struct FLightmassMaterialInterfaceSettings& value);

	//TArray<struct FMaterialTextureInfo>	TextureStreamingData;		//Offset: 96	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FMaterialTextureInfo> M_GetTextureStreamingData() const;
	TArray<struct FMaterialTextureInfo>* M_PtrGetTextureStreamingData();
	void M_SetTextureStreamingData(const TArray<struct FMaterialTextureInfo>& value);

	//TArray<class UAssetUserData*>	AssetUserData;		//Offset: 112	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	TArray<class UAssetUserData*> M_GetAssetUserData() const;
	TArray<class UAssetUserData*>* M_PtrGetAssetUserData();
	void M_SetAssetUserData(const TArray<class UAssetUserData*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}

#pragma region Functions
	class UMaterial* GetBaseMaterial();

	struct FMaterialParameterInfo GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, struct FName ParameterName, class UMaterialFunctionInterface* LayerFunction)/* const*/;

	class UPhysicalMaterial* GetPhysicalMaterial()/* const*/;

	class UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index)/* const*/;

	class UPhysicalMaterialMask* GetPhysicalMaterialMask()/* const*/;

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse);

#pragma endregion
};
};