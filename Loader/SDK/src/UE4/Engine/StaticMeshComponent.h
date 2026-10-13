#pragma once
#include "Structs.h"
#include "Engine/MeshComponent.h"
/////////////////////////////////////////////
// Class Engine.StaticMeshComponent
// Super: Class Engine.MeshComponent
// Size: 1248
// Size inherited: 1152
/////////////////////////////////////////////
namespace UE4 {
class UStaticMeshComponent : public UMeshComponent {
public:
#pragma region Members
	//int32_t	ForcedLodModel;		//Offset: 1144	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetForcedLodModel() const;
	int32_t* M_PtrGetForcedLodModel();
	void M_SetForcedLodModel(const int32_t& value);

	//int32_t	PreviousLODLevel;		//Offset: 1148	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPreviousLODLevel() const;
	int32_t* M_PtrGetPreviousLODLevel();
	void M_SetPreviousLODLevel(const int32_t& value);

	//int32_t	MinLOD;		//Offset: 1152	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetMinLOD() const;
	int32_t* M_PtrGetMinLOD();
	void M_SetMinLOD(const int32_t& value);

	//int32_t	SubDivisionStepSize;		//Offset: 1156	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetSubDivisionStepSize() const;
	int32_t* M_PtrGetSubDivisionStepSize();
	void M_SetSubDivisionStepSize(const int32_t& value);

	//class UStaticMesh*	StaticMesh;		//Offset: 1160	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UStaticMesh* M_GetStaticMesh() const;
	class UStaticMesh** M_PtrGetStaticMesh();
	void M_SetStaticMesh(const class UStaticMesh*& value);

	//struct FColor	WireframeColorOverride;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FColor M_GetWireframeColorOverride() const;
	struct FColor* M_PtrGetWireframeColorOverride();
	void M_SetWireframeColorOverride(const struct FColor& value);

	//unsigned char	bEvaluateWorldPositionOffset : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEvaluateWorldPositionOffset() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEvaluateWorldPositionOffset();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEvaluateWorldPositionOffset(const unsigned char& value);

	//unsigned char	bOverrideWireframeColor : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideWireframeColor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideWireframeColor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideWireframeColor(const unsigned char& value);

	//unsigned char	bOverrideMinLod : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideMinLod() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideMinLod();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideMinLod(const unsigned char& value);

	//unsigned char	bOverrideNavigationExport : 1;		//Offset: 1172	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideNavigationExport() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideNavigationExport();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideNavigationExport(const unsigned char& value);

	//unsigned char	bForceNavigationObstacle : 1;		//Offset: 1172	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceNavigationObstacle() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceNavigationObstacle();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceNavigationObstacle(const unsigned char& value);

	//unsigned char	bDisallowMeshPaintPerInstance : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisallowMeshPaintPerInstance() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisallowMeshPaintPerInstance();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisallowMeshPaintPerInstance(const unsigned char& value);

	//unsigned char	bIgnoreInstanceForTextureStreaming : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoreInstanceForTextureStreaming() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoreInstanceForTextureStreaming();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoreInstanceForTextureStreaming(const unsigned char& value);

	//unsigned char	bOverrideLightMapRes : 1;		//Offset: 1172	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideLightMapRes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideLightMapRes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideLightMapRes(const unsigned char& value);

	//unsigned char	bCastDistanceFieldIndirectShadow : 1;		//Offset: 1173	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastDistanceFieldIndirectShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastDistanceFieldIndirectShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastDistanceFieldIndirectShadow(const unsigned char& value);

	//unsigned char	bOverrideDistanceFieldSelfShadowBias : 1;		//Offset: 1173	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideDistanceFieldSelfShadowBias() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideDistanceFieldSelfShadowBias();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideDistanceFieldSelfShadowBias(const unsigned char& value);

	//unsigned char	bUseSubDivisions : 1;		//Offset: 1173	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseSubDivisions() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseSubDivisions();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseSubDivisions(const unsigned char& value);

	//unsigned char	bUseDefaultCollision : 1;		//Offset: 1173	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseDefaultCollision() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseDefaultCollision();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseDefaultCollision(const unsigned char& value);

	//unsigned char	bReverseCulling : 1;		//Offset: 1173	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReverseCulling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReverseCulling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReverseCulling(const unsigned char& value);

	//int32_t	OverriddenLightMapRes;		//Offset: 1176	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetOverriddenLightMapRes() const;
	int32_t* M_PtrGetOverriddenLightMapRes();
	void M_SetOverriddenLightMapRes(const int32_t& value);

	//float	DistanceFieldIndirectShadowMinVisibility;		//Offset: 1180	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDistanceFieldIndirectShadowMinVisibility() const;
	float* M_PtrGetDistanceFieldIndirectShadowMinVisibility();
	void M_SetDistanceFieldIndirectShadowMinVisibility(const float& value);

	//float	DistanceFieldSelfShadowBias;		//Offset: 1184	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDistanceFieldSelfShadowBias() const;
	float* M_PtrGetDistanceFieldSelfShadowBias();
	void M_SetDistanceFieldSelfShadowBias(const float& value);

	//float	StreamingDistanceMultiplier;		//Offset: 1188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetStreamingDistanceMultiplier() const;
	float* M_PtrGetStreamingDistanceMultiplier();
	void M_SetStreamingDistanceMultiplier(const float& value);

	//TArray<struct FStaticMeshComponentLODInfo>	LODData;		//Offset: 1192	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<struct FStaticMeshComponentLODInfo> M_GetLODData() const;
	TArray<struct FStaticMeshComponentLODInfo>* M_PtrGetLODData();
	void M_SetLODData(const TArray<struct FStaticMeshComponentLODInfo>& value);

	//TArray<struct FStreamingTextureBuildInfo>	StreamingTextureData;		//Offset: 1208	Size: 16	Flags: ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
	TArray<struct FStreamingTextureBuildInfo> M_GetStreamingTextureData() const;
	TArray<struct FStreamingTextureBuildInfo>* M_PtrGetStreamingTextureData();
	void M_SetStreamingTextureData(const TArray<struct FStreamingTextureBuildInfo>& value);

	//struct FLightmassPrimitiveSettings	LightmassSettings;		//Offset: 1224	Size: 24	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FLightmassPrimitiveSettings M_GetLightmassSettings() const;
	struct FLightmassPrimitiveSettings* M_PtrGetLightmassSettings();
	void M_SetLightmassSettings(const struct FLightmassPrimitiveSettings& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}

#pragma region Functions
	void GetLocalBounds(struct FVector* Min, struct FVector* Max)/* const*/;

	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);

	void SetDistanceFieldSelfShadowBias(float NewValue);

	void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue);

	void SetForcedLodModel(int32_t NewForcedLodModel);

	void SetReverseCulling(bool ReverseCulling);

	bool SetStaticMesh(class UStaticMesh* NewMesh);

#pragma endregion
};
};