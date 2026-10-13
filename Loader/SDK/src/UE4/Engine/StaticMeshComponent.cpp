#include "../SDK.h"
#include "StaticMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ForcedLodModel
// Declaration: int32_t ForcedLodModel
int32_t UStaticMeshComponent::M_GetForcedLodModel() const {
	return Read<int32_t>((byte*)this + 1144);
}
int32_t* UStaticMeshComponent::M_PtrGetForcedLodModel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1144);
}
void UStaticMeshComponent::M_SetForcedLodModel(const int32_t& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of PreviousLODLevel
// Declaration: int32_t PreviousLODLevel
int32_t UStaticMeshComponent::M_GetPreviousLODLevel() const {
	return Read<int32_t>((byte*)this + 1148);
}
int32_t* UStaticMeshComponent::M_PtrGetPreviousLODLevel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1148);
}
void UStaticMeshComponent::M_SetPreviousLODLevel(const int32_t& value) {
	Write((byte*)this + 1148, value);
}
// Member Getter and Setter of MinLOD
// Declaration: int32_t MinLOD
int32_t UStaticMeshComponent::M_GetMinLOD() const {
	return Read<int32_t>((byte*)this + 1152);
}
int32_t* UStaticMeshComponent::M_PtrGetMinLOD() {
	return reinterpret_cast<int32_t*>((byte*)this + 1152);
}
void UStaticMeshComponent::M_SetMinLOD(const int32_t& value) {
	Write((byte*)this + 1152, value);
}
// Member Getter and Setter of SubDivisionStepSize
// Declaration: int32_t SubDivisionStepSize
int32_t UStaticMeshComponent::M_GetSubDivisionStepSize() const {
	return Read<int32_t>((byte*)this + 1156);
}
int32_t* UStaticMeshComponent::M_PtrGetSubDivisionStepSize() {
	return reinterpret_cast<int32_t*>((byte*)this + 1156);
}
void UStaticMeshComponent::M_SetSubDivisionStepSize(const int32_t& value) {
	Write((byte*)this + 1156, value);
}
// Member Getter and Setter of StaticMesh
// Declaration: class UStaticMesh* StaticMesh
class UStaticMesh* UStaticMeshComponent::M_GetStaticMesh() const {
	return Read<class UStaticMesh*>((byte*)this + 1160);
}
class UStaticMesh** UStaticMeshComponent::M_PtrGetStaticMesh() {
	return reinterpret_cast<class UStaticMesh**>((byte*)this + 1160);
}
void UStaticMeshComponent::M_SetStaticMesh(const class UStaticMesh*& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of WireframeColorOverride
// Declaration: struct FColor WireframeColorOverride
struct FColor UStaticMeshComponent::M_GetWireframeColorOverride() const {
	return Read<struct FColor>((byte*)this + 1168);
}
struct FColor* UStaticMeshComponent::M_PtrGetWireframeColorOverride() {
	return reinterpret_cast<struct FColor*>((byte*)this + 1168);
}
void UStaticMeshComponent::M_SetWireframeColorOverride(const struct FColor& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of bEvaluateWorldPositionOffset
// Declaration: unsigned char bEvaluateWorldPositionOffset : 1
unsigned char UStaticMeshComponent::M_GetbEvaluateWorldPositionOffset() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbEvaluateWorldPositionOffset() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbEvaluateWorldPositionOffset(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bOverrideWireframeColor
// Declaration: unsigned char bOverrideWireframeColor : 1
unsigned char UStaticMeshComponent::M_GetbOverrideWireframeColor() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbOverrideWireframeColor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbOverrideWireframeColor(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bOverrideMinLod
// Declaration: unsigned char bOverrideMinLod : 1
unsigned char UStaticMeshComponent::M_GetbOverrideMinLod() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbOverrideMinLod() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbOverrideMinLod(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bOverrideNavigationExport
// Declaration: unsigned char bOverrideNavigationExport : 1
unsigned char UStaticMeshComponent::M_GetbOverrideNavigationExport() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbOverrideNavigationExport() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbOverrideNavigationExport(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bForceNavigationObstacle
// Declaration: unsigned char bForceNavigationObstacle : 1
unsigned char UStaticMeshComponent::M_GetbForceNavigationObstacle() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbForceNavigationObstacle() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbForceNavigationObstacle(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bDisallowMeshPaintPerInstance
// Declaration: unsigned char bDisallowMeshPaintPerInstance : 1
unsigned char UStaticMeshComponent::M_GetbDisallowMeshPaintPerInstance() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbDisallowMeshPaintPerInstance() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbDisallowMeshPaintPerInstance(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bIgnoreInstanceForTextureStreaming
// Declaration: unsigned char bIgnoreInstanceForTextureStreaming : 1
unsigned char UStaticMeshComponent::M_GetbIgnoreInstanceForTextureStreaming() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbIgnoreInstanceForTextureStreaming() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbIgnoreInstanceForTextureStreaming(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bOverrideLightMapRes
// Declaration: unsigned char bOverrideLightMapRes : 1
unsigned char UStaticMeshComponent::M_GetbOverrideLightMapRes() const {
	return Read<unsigned char>((byte*)this + 1172);
}
unsigned char* UStaticMeshComponent::M_PtrGetbOverrideLightMapRes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1172);
}
void UStaticMeshComponent::M_SetbOverrideLightMapRes(const unsigned char& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of bCastDistanceFieldIndirectShadow
// Declaration: unsigned char bCastDistanceFieldIndirectShadow : 1
unsigned char UStaticMeshComponent::M_GetbCastDistanceFieldIndirectShadow() const {
	return Read<unsigned char>((byte*)this + 1173);
}
unsigned char* UStaticMeshComponent::M_PtrGetbCastDistanceFieldIndirectShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1173);
}
void UStaticMeshComponent::M_SetbCastDistanceFieldIndirectShadow(const unsigned char& value) {
	Write((byte*)this + 1173, value);
}
// Member Getter and Setter of bOverrideDistanceFieldSelfShadowBias
// Declaration: unsigned char bOverrideDistanceFieldSelfShadowBias : 1
unsigned char UStaticMeshComponent::M_GetbOverrideDistanceFieldSelfShadowBias() const {
	return Read<unsigned char>((byte*)this + 1173);
}
unsigned char* UStaticMeshComponent::M_PtrGetbOverrideDistanceFieldSelfShadowBias() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1173);
}
void UStaticMeshComponent::M_SetbOverrideDistanceFieldSelfShadowBias(const unsigned char& value) {
	Write((byte*)this + 1173, value);
}
// Member Getter and Setter of bUseSubDivisions
// Declaration: unsigned char bUseSubDivisions : 1
unsigned char UStaticMeshComponent::M_GetbUseSubDivisions() const {
	return Read<unsigned char>((byte*)this + 1173);
}
unsigned char* UStaticMeshComponent::M_PtrGetbUseSubDivisions() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1173);
}
void UStaticMeshComponent::M_SetbUseSubDivisions(const unsigned char& value) {
	Write((byte*)this + 1173, value);
}
// Member Getter and Setter of bUseDefaultCollision
// Declaration: unsigned char bUseDefaultCollision : 1
unsigned char UStaticMeshComponent::M_GetbUseDefaultCollision() const {
	return Read<unsigned char>((byte*)this + 1173);
}
unsigned char* UStaticMeshComponent::M_PtrGetbUseDefaultCollision() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1173);
}
void UStaticMeshComponent::M_SetbUseDefaultCollision(const unsigned char& value) {
	Write((byte*)this + 1173, value);
}
// Member Getter and Setter of bReverseCulling
// Declaration: unsigned char bReverseCulling : 1
unsigned char UStaticMeshComponent::M_GetbReverseCulling() const {
	return Read<unsigned char>((byte*)this + 1173);
}
unsigned char* UStaticMeshComponent::M_PtrGetbReverseCulling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1173);
}
void UStaticMeshComponent::M_SetbReverseCulling(const unsigned char& value) {
	Write((byte*)this + 1173, value);
}
// Member Getter and Setter of OverriddenLightMapRes
// Declaration: int32_t OverriddenLightMapRes
int32_t UStaticMeshComponent::M_GetOverriddenLightMapRes() const {
	return Read<int32_t>((byte*)this + 1176);
}
int32_t* UStaticMeshComponent::M_PtrGetOverriddenLightMapRes() {
	return reinterpret_cast<int32_t*>((byte*)this + 1176);
}
void UStaticMeshComponent::M_SetOverriddenLightMapRes(const int32_t& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of DistanceFieldIndirectShadowMinVisibility
// Declaration: float DistanceFieldIndirectShadowMinVisibility
float UStaticMeshComponent::M_GetDistanceFieldIndirectShadowMinVisibility() const {
	return Read<float>((byte*)this + 1180);
}
float* UStaticMeshComponent::M_PtrGetDistanceFieldIndirectShadowMinVisibility() {
	return reinterpret_cast<float*>((byte*)this + 1180);
}
void UStaticMeshComponent::M_SetDistanceFieldIndirectShadowMinVisibility(const float& value) {
	Write((byte*)this + 1180, value);
}
// Member Getter and Setter of DistanceFieldSelfShadowBias
// Declaration: float DistanceFieldSelfShadowBias
float UStaticMeshComponent::M_GetDistanceFieldSelfShadowBias() const {
	return Read<float>((byte*)this + 1184);
}
float* UStaticMeshComponent::M_PtrGetDistanceFieldSelfShadowBias() {
	return reinterpret_cast<float*>((byte*)this + 1184);
}
void UStaticMeshComponent::M_SetDistanceFieldSelfShadowBias(const float& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of StreamingDistanceMultiplier
// Declaration: float StreamingDistanceMultiplier
float UStaticMeshComponent::M_GetStreamingDistanceMultiplier() const {
	return Read<float>((byte*)this + 1188);
}
float* UStaticMeshComponent::M_PtrGetStreamingDistanceMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1188);
}
void UStaticMeshComponent::M_SetStreamingDistanceMultiplier(const float& value) {
	Write((byte*)this + 1188, value);
}
// Member Getter and Setter of LODData
// Declaration: TArray<struct FStaticMeshComponentLODInfo> LODData
TArray<struct FStaticMeshComponentLODInfo> UStaticMeshComponent::M_GetLODData() const {
	return Read<TArray<struct FStaticMeshComponentLODInfo>>((byte*)this + 1192);
}
TArray<struct FStaticMeshComponentLODInfo>* UStaticMeshComponent::M_PtrGetLODData() {
	return reinterpret_cast<TArray<struct FStaticMeshComponentLODInfo>*>((byte*)this + 1192);
}
void UStaticMeshComponent::M_SetLODData(const TArray<struct FStaticMeshComponentLODInfo>& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of StreamingTextureData
// Declaration: TArray<struct FStreamingTextureBuildInfo> StreamingTextureData
TArray<struct FStreamingTextureBuildInfo> UStaticMeshComponent::M_GetStreamingTextureData() const {
	return Read<TArray<struct FStreamingTextureBuildInfo>>((byte*)this + 1208);
}
TArray<struct FStreamingTextureBuildInfo>* UStaticMeshComponent::M_PtrGetStreamingTextureData() {
	return reinterpret_cast<TArray<struct FStreamingTextureBuildInfo>*>((byte*)this + 1208);
}
void UStaticMeshComponent::M_SetStreamingTextureData(const TArray<struct FStreamingTextureBuildInfo>& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of LightmassSettings
// Declaration: struct FLightmassPrimitiveSettings LightmassSettings
struct FLightmassPrimitiveSettings UStaticMeshComponent::M_GetLightmassSettings() const {
	return Read<struct FLightmassPrimitiveSettings>((byte*)this + 1224);
}
struct FLightmassPrimitiveSettings* UStaticMeshComponent::M_PtrGetLightmassSettings() {
	return reinterpret_cast<struct FLightmassPrimitiveSettings*>((byte*)this + 1224);
}
void UStaticMeshComponent::M_SetLightmassSettings(const struct FLightmassPrimitiveSettings& value) {
	Write((byte*)this + 1224, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.GetLocalBounds
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Min	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Max	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.GetLocalBounds");

	struct UStaticMeshComponent_GetLocalBounds_Params {
		struct FVector Min;			//Offset: 0 | ElementSize: 12
		struct FVector Max;			//Offset: 12 | ElementSize: 12
	};
	UStaticMeshComponent_GetLocalBounds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// Flags: Final, Native, Public
// Params:
// Name: OldStaticMesh	Type: class UStaticMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::OnRep_StaticMesh(class UStaticMesh* OldStaticMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.OnRep_StaticMesh");

	struct UStaticMeshComponent_OnRep_StaticMesh_Params {
		class UStaticMesh* OldStaticMesh;			//Offset: 0 | ElementSize: 8
	};
	UStaticMeshComponent_OnRep_StaticMesh_Params params;
	params.OldStaticMesh = OldStaticMesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::SetDistanceFieldSelfShadowBias(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias");

	struct UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.SetEvaluateWorldPositionOffsetInRayTracing
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetEvaluateWorldPositionOffsetInRayTracing");

	struct UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.SetForcedLodModel
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewForcedLodModel	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::SetForcedLodModel(int32_t NewForcedLodModel) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetForcedLodModel");

	struct UStaticMeshComponent_SetForcedLodModel_Params {
		int32_t NewForcedLodModel;			//Offset: 0 | ElementSize: 4
	};
	UStaticMeshComponent_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.SetReverseCulling
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReverseCulling	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMeshComponent::SetReverseCulling(bool ReverseCulling) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetReverseCulling");

	struct UStaticMeshComponent_SetReverseCulling_Params {
		bool ReverseCulling;			//Offset: 0 | ElementSize: 1
	};
	UStaticMeshComponent_SetReverseCulling_Params params;
	params.ReverseCulling = ReverseCulling;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMeshComponent.SetStaticMesh
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewMesh	Type: class UStaticMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UStaticMeshComponent::SetStaticMesh(class UStaticMesh* NewMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetStaticMesh");

	struct UStaticMeshComponent_SetStaticMesh_Params {
		class UStaticMesh* NewMesh;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UStaticMeshComponent_SetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}