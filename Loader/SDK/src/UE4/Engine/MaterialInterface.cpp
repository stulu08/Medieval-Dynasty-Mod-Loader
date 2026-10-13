#include "../SDK.h"
#include "MaterialInterface.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SubsurfaceProfile
// Declaration: class USubsurfaceProfile* SubsurfaceProfile
class USubsurfaceProfile* UMaterialInterface::M_GetSubsurfaceProfile() const {
	return Read<class USubsurfaceProfile*>((byte*)this + 56);
}
class USubsurfaceProfile** UMaterialInterface::M_PtrGetSubsurfaceProfile() {
	return reinterpret_cast<class USubsurfaceProfile**>((byte*)this + 56);
}
void UMaterialInterface::M_SetSubsurfaceProfile(const class USubsurfaceProfile*& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of LightmassSettings
// Declaration: struct FLightmassMaterialInterfaceSettings LightmassSettings
struct FLightmassMaterialInterfaceSettings UMaterialInterface::M_GetLightmassSettings() const {
	return Read<struct FLightmassMaterialInterfaceSettings>((byte*)this + 80);
}
struct FLightmassMaterialInterfaceSettings* UMaterialInterface::M_PtrGetLightmassSettings() {
	return reinterpret_cast<struct FLightmassMaterialInterfaceSettings*>((byte*)this + 80);
}
void UMaterialInterface::M_SetLightmassSettings(const struct FLightmassMaterialInterfaceSettings& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of TextureStreamingData
// Declaration: TArray<struct FMaterialTextureInfo> TextureStreamingData
TArray<struct FMaterialTextureInfo> UMaterialInterface::M_GetTextureStreamingData() const {
	return Read<TArray<struct FMaterialTextureInfo>>((byte*)this + 96);
}
TArray<struct FMaterialTextureInfo>* UMaterialInterface::M_PtrGetTextureStreamingData() {
	return reinterpret_cast<TArray<struct FMaterialTextureInfo>*>((byte*)this + 96);
}
void UMaterialInterface::M_SetTextureStreamingData(const TArray<struct FMaterialTextureInfo>& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of AssetUserData
// Declaration: TArray<class UAssetUserData*> AssetUserData
TArray<class UAssetUserData*> UMaterialInterface::M_GetAssetUserData() const {
	return Read<TArray<class UAssetUserData*>>((byte*)this + 112);
}
TArray<class UAssetUserData*>* UMaterialInterface::M_PtrGetAssetUserData() {
	return reinterpret_cast<TArray<class UAssetUserData*>*>((byte*)this + 112);
}
void UMaterialInterface::M_SetAssetUserData(const TArray<class UAssetUserData*>& value) {
	Write((byte*)this + 112, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.MaterialInterface.GetBaseMaterial
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UMaterial*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterial* UMaterialInterface::GetBaseMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.GetBaseMaterial");

	struct UMaterialInterface_GetBaseMaterial_Params {
		class UMaterial* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMaterialInterface_GetBaseMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MaterialInterface.GetParameterInfo
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Association	Type: TEnumAsByte<EMaterialParameterAssociation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LayerFunction	Type: class UMaterialFunctionInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FMaterialParameterInfo	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMaterialParameterInfo UMaterialInterface::GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, struct FName ParameterName, class UMaterialFunctionInterface* LayerFunction)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.GetParameterInfo");

	struct UMaterialInterface_GetParameterInfo_Params {
		TEnumAsByte<EMaterialParameterAssociation> Association;			//Offset: 0 | ElementSize: 1
		struct FName ParameterName;			//Offset: 4 | ElementSize: 8
		class UMaterialFunctionInterface* LayerFunction;			//Offset: 16 | ElementSize: 8
		struct FMaterialParameterInfo ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UMaterialInterface_GetParameterInfo_Params params;
	params.Association = Association;
	params.ParameterName = ParameterName;
	params.LayerFunction = LayerFunction;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MaterialInterface.GetPhysicalMaterial
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPhysicalMaterial*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.GetPhysicalMaterial");

	struct UMaterialInterface_GetPhysicalMaterial_Params {
		class UPhysicalMaterial* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMaterialInterface_GetPhysicalMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MaterialInterface.GetPhysicalMaterialFromMap
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UPhysicalMaterial*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterialFromMap(int32_t Index)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.GetPhysicalMaterialFromMap");

	struct UMaterialInterface_GetPhysicalMaterialFromMap_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		class UPhysicalMaterial* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UMaterialInterface_GetPhysicalMaterialFromMap_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MaterialInterface.GetPhysicalMaterialMask
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPhysicalMaterialMask*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicalMaterialMask* UMaterialInterface::GetPhysicalMaterialMask()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.GetPhysicalMaterialMask");

	struct UMaterialInterface_GetPhysicalMaterialMask_Params {
		class UPhysicalMaterialMask* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMaterialInterface_GetPhysicalMaterialMask_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MaterialInterface.SetForceMipLevelsToBeResident
// Flags: RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: OverrideForceMiplevelsToBeResident	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bForceMiplevelsToBeResidentValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ForceDuration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CinematicTextureGroups	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bFastResponse	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialInterface.SetForceMipLevelsToBeResident");

	struct UMaterialInterface_SetForceMipLevelsToBeResident_Params {
		bool OverrideForceMiplevelsToBeResident;			//Offset: 0 | ElementSize: 1
		bool bForceMiplevelsToBeResidentValue;			//Offset: 1 | ElementSize: 1
		float ForceDuration;			//Offset: 4 | ElementSize: 4
		int32_t CinematicTextureGroups;			//Offset: 8 | ElementSize: 4
		bool bFastResponse;			//Offset: 12 | ElementSize: 1
	};
	UMaterialInterface_SetForceMipLevelsToBeResident_Params params;
	params.OverrideForceMiplevelsToBeResident = OverrideForceMiplevelsToBeResident;
	params.bForceMiplevelsToBeResidentValue = bForceMiplevelsToBeResidentValue;
	params.ForceDuration = ForceDuration;
	params.CinematicTextureGroups = CinematicTextureGroups;
	params.bFastResponse = bFastResponse;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}