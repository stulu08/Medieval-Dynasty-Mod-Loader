#include "../SDK.h"
#include "PlayerCameraManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PCOwner
// Declaration: class APlayerController* PCOwner
class APlayerController* APlayerCameraManager::M_GetPCOwner() const {
	return Read<class APlayerController*>((byte*)this + 544);
}
class APlayerController** APlayerCameraManager::M_PtrGetPCOwner() {
	return reinterpret_cast<class APlayerController**>((byte*)this + 544);
}
void APlayerCameraManager::M_SetPCOwner(const class APlayerController*& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of TransformComponent
// Declaration: class USceneComponent* TransformComponent
class USceneComponent* APlayerCameraManager::M_GetTransformComponent() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** APlayerCameraManager::M_PtrGetTransformComponent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void APlayerCameraManager::M_SetTransformComponent(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of DefaultFOV
// Declaration: float DefaultFOV
float APlayerCameraManager::M_GetDefaultFOV() const {
	return Read<float>((byte*)this + 568);
}
float* APlayerCameraManager::M_PtrGetDefaultFOV() {
	return reinterpret_cast<float*>((byte*)this + 568);
}
void APlayerCameraManager::M_SetDefaultFOV(const float& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of DefaultOrthoWidth
// Declaration: float DefaultOrthoWidth
float APlayerCameraManager::M_GetDefaultOrthoWidth() const {
	return Read<float>((byte*)this + 576);
}
float* APlayerCameraManager::M_PtrGetDefaultOrthoWidth() {
	return reinterpret_cast<float*>((byte*)this + 576);
}
void APlayerCameraManager::M_SetDefaultOrthoWidth(const float& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DefaultAspectRatio
// Declaration: float DefaultAspectRatio
float APlayerCameraManager::M_GetDefaultAspectRatio() const {
	return Read<float>((byte*)this + 584);
}
float* APlayerCameraManager::M_PtrGetDefaultAspectRatio() {
	return reinterpret_cast<float*>((byte*)this + 584);
}
void APlayerCameraManager::M_SetDefaultAspectRatio(const float& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of CameraCache
// Declaration: struct FCameraCacheEntry CameraCache
struct FCameraCacheEntry APlayerCameraManager::M_GetCameraCache() const {
	return Read<struct FCameraCacheEntry>((byte*)this + 656);
}
struct FCameraCacheEntry* APlayerCameraManager::M_PtrGetCameraCache() {
	return reinterpret_cast<struct FCameraCacheEntry*>((byte*)this + 656);
}
void APlayerCameraManager::M_SetCameraCache(const struct FCameraCacheEntry& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of LastFrameCameraCache
// Declaration: struct FCameraCacheEntry LastFrameCameraCache
struct FCameraCacheEntry APlayerCameraManager::M_GetLastFrameCameraCache() const {
	return Read<struct FCameraCacheEntry>((byte*)this + 2192);
}
struct FCameraCacheEntry* APlayerCameraManager::M_PtrGetLastFrameCameraCache() {
	return reinterpret_cast<struct FCameraCacheEntry*>((byte*)this + 2192);
}
void APlayerCameraManager::M_SetLastFrameCameraCache(const struct FCameraCacheEntry& value) {
	Write((byte*)this + 2192, value);
}
// Member Getter and Setter of ViewTarget
// Declaration: struct FTViewTarget ViewTarget
struct FTViewTarget APlayerCameraManager::M_GetViewTarget() const {
	return Read<struct FTViewTarget>((byte*)this + 3728);
}
struct FTViewTarget* APlayerCameraManager::M_PtrGetViewTarget() {
	return reinterpret_cast<struct FTViewTarget*>((byte*)this + 3728);
}
void APlayerCameraManager::M_SetViewTarget(const struct FTViewTarget& value) {
	Write((byte*)this + 3728, value);
}
// Member Getter and Setter of PendingViewTarget
// Declaration: struct FTViewTarget PendingViewTarget
struct FTViewTarget APlayerCameraManager::M_GetPendingViewTarget() const {
	return Read<struct FTViewTarget>((byte*)this + 5280);
}
struct FTViewTarget* APlayerCameraManager::M_PtrGetPendingViewTarget() {
	return reinterpret_cast<struct FTViewTarget*>((byte*)this + 5280);
}
void APlayerCameraManager::M_SetPendingViewTarget(const struct FTViewTarget& value) {
	Write((byte*)this + 5280, value);
}
// Member Getter and Setter of CameraCachePrivate
// Declaration: struct FCameraCacheEntry CameraCachePrivate
struct FCameraCacheEntry APlayerCameraManager::M_GetCameraCachePrivate() const {
	return Read<struct FCameraCacheEntry>((byte*)this + 6880);
}
struct FCameraCacheEntry* APlayerCameraManager::M_PtrGetCameraCachePrivate() {
	return reinterpret_cast<struct FCameraCacheEntry*>((byte*)this + 6880);
}
void APlayerCameraManager::M_SetCameraCachePrivate(const struct FCameraCacheEntry& value) {
	Write((byte*)this + 6880, value);
}
// Member Getter and Setter of LastFrameCameraCachePrivate
// Declaration: struct FCameraCacheEntry LastFrameCameraCachePrivate
struct FCameraCacheEntry APlayerCameraManager::M_GetLastFrameCameraCachePrivate() const {
	return Read<struct FCameraCacheEntry>((byte*)this + 8416);
}
struct FCameraCacheEntry* APlayerCameraManager::M_PtrGetLastFrameCameraCachePrivate() {
	return reinterpret_cast<struct FCameraCacheEntry*>((byte*)this + 8416);
}
void APlayerCameraManager::M_SetLastFrameCameraCachePrivate(const struct FCameraCacheEntry& value) {
	Write((byte*)this + 8416, value);
}
// Member Getter and Setter of ModifierList
// Declaration: TArray<class UCameraModifier*> ModifierList
TArray<class UCameraModifier*> APlayerCameraManager::M_GetModifierList() const {
	return Read<TArray<class UCameraModifier*>>((byte*)this + 9952);
}
TArray<class UCameraModifier*>* APlayerCameraManager::M_PtrGetModifierList() {
	return reinterpret_cast<TArray<class UCameraModifier*>*>((byte*)this + 9952);
}
void APlayerCameraManager::M_SetModifierList(const TArray<class UCameraModifier*>& value) {
	Write((byte*)this + 9952, value);
}
// Member Getter and Setter of DefaultModifiers
// Declaration: TArray<class UCameraModifier*> DefaultModifiers
TArray<class UCameraModifier*> APlayerCameraManager::M_GetDefaultModifiers() const {
	return Read<TArray<class UCameraModifier*>>((byte*)this + 9968);
}
TArray<class UCameraModifier*>* APlayerCameraManager::M_PtrGetDefaultModifiers() {
	return reinterpret_cast<TArray<class UCameraModifier*>*>((byte*)this + 9968);
}
void APlayerCameraManager::M_SetDefaultModifiers(const TArray<class UCameraModifier*>& value) {
	Write((byte*)this + 9968, value);
}
// Member Getter and Setter of FreeCamDistance
// Declaration: float FreeCamDistance
float APlayerCameraManager::M_GetFreeCamDistance() const {
	return Read<float>((byte*)this + 9984);
}
float* APlayerCameraManager::M_PtrGetFreeCamDistance() {
	return reinterpret_cast<float*>((byte*)this + 9984);
}
void APlayerCameraManager::M_SetFreeCamDistance(const float& value) {
	Write((byte*)this + 9984, value);
}
// Member Getter and Setter of FreeCamOffset
// Declaration: struct FVector FreeCamOffset
struct FVector APlayerCameraManager::M_GetFreeCamOffset() const {
	return Read<struct FVector>((byte*)this + 9988);
}
struct FVector* APlayerCameraManager::M_PtrGetFreeCamOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 9988);
}
void APlayerCameraManager::M_SetFreeCamOffset(const struct FVector& value) {
	Write((byte*)this + 9988, value);
}
// Member Getter and Setter of ViewTargetOffset
// Declaration: struct FVector ViewTargetOffset
struct FVector APlayerCameraManager::M_GetViewTargetOffset() const {
	return Read<struct FVector>((byte*)this + 10000);
}
struct FVector* APlayerCameraManager::M_PtrGetViewTargetOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 10000);
}
void APlayerCameraManager::M_SetViewTargetOffset(const struct FVector& value) {
	Write((byte*)this + 10000, value);
}
// Member Getter and Setter of OnAudioFadeChangeEvent
// Declaration: TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature> OnAudioFadeChangeEvent
TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature> APlayerCameraManager::M_GetOnAudioFadeChangeEvent() const {
	return Read<TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>>((byte*)this + 10016);
}
TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>* APlayerCameraManager::M_PtrGetOnAudioFadeChangeEvent() {
	return reinterpret_cast<TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>*>((byte*)this + 10016);
}
void APlayerCameraManager::M_SetOnAudioFadeChangeEvent(const TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>& value) {
	Write((byte*)this + 10016, value);
}
// Member Getter and Setter of CameraLensEffects
// Declaration: TArray<class AEmitterCameraLensEffectBase*> CameraLensEffects
TArray<class AEmitterCameraLensEffectBase*> APlayerCameraManager::M_GetCameraLensEffects() const {
	return Read<TArray<class AEmitterCameraLensEffectBase*>>((byte*)this + 10048);
}
TArray<class AEmitterCameraLensEffectBase*>* APlayerCameraManager::M_PtrGetCameraLensEffects() {
	return reinterpret_cast<TArray<class AEmitterCameraLensEffectBase*>*>((byte*)this + 10048);
}
void APlayerCameraManager::M_SetCameraLensEffects(const TArray<class AEmitterCameraLensEffectBase*>& value) {
	Write((byte*)this + 10048, value);
}
// Member Getter and Setter of CachedCameraShakeMod
// Declaration: class UCameraModifier_CameraShake* CachedCameraShakeMod
class UCameraModifier_CameraShake* APlayerCameraManager::M_GetCachedCameraShakeMod() const {
	return Read<class UCameraModifier_CameraShake*>((byte*)this + 10064);
}
class UCameraModifier_CameraShake** APlayerCameraManager::M_PtrGetCachedCameraShakeMod() {
	return reinterpret_cast<class UCameraModifier_CameraShake**>((byte*)this + 10064);
}
void APlayerCameraManager::M_SetCachedCameraShakeMod(const class UCameraModifier_CameraShake*& value) {
	Write((byte*)this + 10064, value);
}
// Member Getter and Setter of AnimInstPool
// Declaration: class UCameraAnimInst* AnimInstPool[8]
class UCameraAnimInst* APlayerCameraManager::M_GetAnimInstPool() const {
	return Read<class UCameraAnimInst*>((byte*)this + 10072);
}
class UCameraAnimInst** APlayerCameraManager::M_PtrGetAnimInstPool() {
	return reinterpret_cast<class UCameraAnimInst**>((byte*)this + 10072);
}
void APlayerCameraManager::M_SetAnimInstPool(const class UCameraAnimInst*& value) {
	Write((byte*)this + 10072, value);
}
// Member Getter and Setter of PostProcessBlendCache
// Declaration: TArray<struct FPostProcessSettings> PostProcessBlendCache
TArray<struct FPostProcessSettings> APlayerCameraManager::M_GetPostProcessBlendCache() const {
	return Read<TArray<struct FPostProcessSettings>>((byte*)this + 10136);
}
TArray<struct FPostProcessSettings>* APlayerCameraManager::M_PtrGetPostProcessBlendCache() {
	return reinterpret_cast<TArray<struct FPostProcessSettings>*>((byte*)this + 10136);
}
void APlayerCameraManager::M_SetPostProcessBlendCache(const TArray<struct FPostProcessSettings>& value) {
	Write((byte*)this + 10136, value);
}
// Member Getter and Setter of ActiveAnims
// Declaration: TArray<class UCameraAnimInst*> ActiveAnims
TArray<class UCameraAnimInst*> APlayerCameraManager::M_GetActiveAnims() const {
	return Read<TArray<class UCameraAnimInst*>>((byte*)this + 10168);
}
TArray<class UCameraAnimInst*>* APlayerCameraManager::M_PtrGetActiveAnims() {
	return reinterpret_cast<TArray<class UCameraAnimInst*>*>((byte*)this + 10168);
}
void APlayerCameraManager::M_SetActiveAnims(const TArray<class UCameraAnimInst*>& value) {
	Write((byte*)this + 10168, value);
}
// Member Getter and Setter of FreeAnims
// Declaration: TArray<class UCameraAnimInst*> FreeAnims
TArray<class UCameraAnimInst*> APlayerCameraManager::M_GetFreeAnims() const {
	return Read<TArray<class UCameraAnimInst*>>((byte*)this + 10184);
}
TArray<class UCameraAnimInst*>* APlayerCameraManager::M_PtrGetFreeAnims() {
	return reinterpret_cast<TArray<class UCameraAnimInst*>*>((byte*)this + 10184);
}
void APlayerCameraManager::M_SetFreeAnims(const TArray<class UCameraAnimInst*>& value) {
	Write((byte*)this + 10184, value);
}
// Member Getter and Setter of AnimCameraActor
// Declaration: class ACameraActor* AnimCameraActor
class ACameraActor* APlayerCameraManager::M_GetAnimCameraActor() const {
	return Read<class ACameraActor*>((byte*)this + 10200);
}
class ACameraActor** APlayerCameraManager::M_PtrGetAnimCameraActor() {
	return reinterpret_cast<class ACameraActor**>((byte*)this + 10200);
}
void APlayerCameraManager::M_SetAnimCameraActor(const class ACameraActor*& value) {
	Write((byte*)this + 10200, value);
}
// Member Getter and Setter of bIsOrthographic
// Declaration: unsigned char bIsOrthographic : 1
unsigned char APlayerCameraManager::M_GetbIsOrthographic() const {
	return Read<unsigned char>((byte*)this + 10208);
}
unsigned char* APlayerCameraManager::M_PtrGetbIsOrthographic() {
	return reinterpret_cast<unsigned char*>((byte*)this + 10208);
}
void APlayerCameraManager::M_SetbIsOrthographic(const unsigned char& value) {
	Write((byte*)this + 10208, value);
}
// Member Getter and Setter of bDefaultConstrainAspectRatio
// Declaration: unsigned char bDefaultConstrainAspectRatio : 1
unsigned char APlayerCameraManager::M_GetbDefaultConstrainAspectRatio() const {
	return Read<unsigned char>((byte*)this + 10208);
}
unsigned char* APlayerCameraManager::M_PtrGetbDefaultConstrainAspectRatio() {
	return reinterpret_cast<unsigned char*>((byte*)this + 10208);
}
void APlayerCameraManager::M_SetbDefaultConstrainAspectRatio(const unsigned char& value) {
	Write((byte*)this + 10208, value);
}
// Member Getter and Setter of bClientSimulatingViewTarget
// Declaration: unsigned char bClientSimulatingViewTarget : 1
unsigned char APlayerCameraManager::M_GetbClientSimulatingViewTarget() const {
	return Read<unsigned char>((byte*)this + 10208);
}
unsigned char* APlayerCameraManager::M_PtrGetbClientSimulatingViewTarget() {
	return reinterpret_cast<unsigned char*>((byte*)this + 10208);
}
void APlayerCameraManager::M_SetbClientSimulatingViewTarget(const unsigned char& value) {
	Write((byte*)this + 10208, value);
}
// Member Getter and Setter of bUseClientSideCameraUpdates
// Declaration: unsigned char bUseClientSideCameraUpdates : 1
unsigned char APlayerCameraManager::M_GetbUseClientSideCameraUpdates() const {
	return Read<unsigned char>((byte*)this + 10208);
}
unsigned char* APlayerCameraManager::M_PtrGetbUseClientSideCameraUpdates() {
	return reinterpret_cast<unsigned char*>((byte*)this + 10208);
}
void APlayerCameraManager::M_SetbUseClientSideCameraUpdates(const unsigned char& value) {
	Write((byte*)this + 10208, value);
}
// Member Getter and Setter of bGameCameraCutThisFrame
// Declaration: unsigned char bGameCameraCutThisFrame : 1
unsigned char APlayerCameraManager::M_GetbGameCameraCutThisFrame() const {
	return Read<unsigned char>((byte*)this + 10209);
}
unsigned char* APlayerCameraManager::M_PtrGetbGameCameraCutThisFrame() {
	return reinterpret_cast<unsigned char*>((byte*)this + 10209);
}
void APlayerCameraManager::M_SetbGameCameraCutThisFrame(const unsigned char& value) {
	Write((byte*)this + 10209, value);
}
// Member Getter and Setter of ViewPitchMin
// Declaration: float ViewPitchMin
float APlayerCameraManager::M_GetViewPitchMin() const {
	return Read<float>((byte*)this + 10212);
}
float* APlayerCameraManager::M_PtrGetViewPitchMin() {
	return reinterpret_cast<float*>((byte*)this + 10212);
}
void APlayerCameraManager::M_SetViewPitchMin(const float& value) {
	Write((byte*)this + 10212, value);
}
// Member Getter and Setter of ViewPitchMax
// Declaration: float ViewPitchMax
float APlayerCameraManager::M_GetViewPitchMax() const {
	return Read<float>((byte*)this + 10216);
}
float* APlayerCameraManager::M_PtrGetViewPitchMax() {
	return reinterpret_cast<float*>((byte*)this + 10216);
}
void APlayerCameraManager::M_SetViewPitchMax(const float& value) {
	Write((byte*)this + 10216, value);
}
// Member Getter and Setter of ViewYawMin
// Declaration: float ViewYawMin
float APlayerCameraManager::M_GetViewYawMin() const {
	return Read<float>((byte*)this + 10220);
}
float* APlayerCameraManager::M_PtrGetViewYawMin() {
	return reinterpret_cast<float*>((byte*)this + 10220);
}
void APlayerCameraManager::M_SetViewYawMin(const float& value) {
	Write((byte*)this + 10220, value);
}
// Member Getter and Setter of ViewYawMax
// Declaration: float ViewYawMax
float APlayerCameraManager::M_GetViewYawMax() const {
	return Read<float>((byte*)this + 10224);
}
float* APlayerCameraManager::M_PtrGetViewYawMax() {
	return reinterpret_cast<float*>((byte*)this + 10224);
}
void APlayerCameraManager::M_SetViewYawMax(const float& value) {
	Write((byte*)this + 10224, value);
}
// Member Getter and Setter of ViewRollMin
// Declaration: float ViewRollMin
float APlayerCameraManager::M_GetViewRollMin() const {
	return Read<float>((byte*)this + 10228);
}
float* APlayerCameraManager::M_PtrGetViewRollMin() {
	return reinterpret_cast<float*>((byte*)this + 10228);
}
void APlayerCameraManager::M_SetViewRollMin(const float& value) {
	Write((byte*)this + 10228, value);
}
// Member Getter and Setter of ViewRollMax
// Declaration: float ViewRollMax
float APlayerCameraManager::M_GetViewRollMax() const {
	return Read<float>((byte*)this + 10232);
}
float* APlayerCameraManager::M_PtrGetViewRollMax() {
	return reinterpret_cast<float*>((byte*)this + 10232);
}
void APlayerCameraManager::M_SetViewRollMax(const float& value) {
	Write((byte*)this + 10232, value);
}
// Member Getter and Setter of ServerUpdateCameraTimeout
// Declaration: float ServerUpdateCameraTimeout
float APlayerCameraManager::M_GetServerUpdateCameraTimeout() const {
	return Read<float>((byte*)this + 10240);
}
float* APlayerCameraManager::M_PtrGetServerUpdateCameraTimeout() {
	return reinterpret_cast<float*>((byte*)this + 10240);
}
void APlayerCameraManager::M_SetServerUpdateCameraTimeout(const float& value) {
	Write((byte*)this + 10240, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.AddCameraLensEffect
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: LensEffectEmitterClass	Type: class AEmitterCameraLensEffectBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AEmitterCameraLensEffectBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(class AEmitterCameraLensEffectBase* LensEffectEmitterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.AddCameraLensEffect");

	struct APlayerCameraManager_AddCameraLensEffect_Params {
		class AEmitterCameraLensEffectBase* LensEffectEmitterClass;			//Offset: 0 | ElementSize: 8
		class AEmitterCameraLensEffectBase* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	APlayerCameraManager_AddCameraLensEffect_Params params;
	params.LensEffectEmitterClass = LensEffectEmitterClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.AddNewCameraModifier
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ModifierClass	Type: class UCameraModifier*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCameraModifier*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCameraModifier* APlayerCameraManager::AddNewCameraModifier(class UCameraModifier* ModifierClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.AddNewCameraModifier");

	struct APlayerCameraManager_AddNewCameraModifier_Params {
		class UCameraModifier* ModifierClass;			//Offset: 0 | ElementSize: 8
		class UCameraModifier* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	APlayerCameraManager_AddNewCameraModifier_Params params;
	params.ModifierClass = ModifierClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.BlueprintUpdateCamera
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: CameraTarget	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewCameraLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewCameraRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: NewCameraFOV	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerCameraManager::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.BlueprintUpdateCamera");

	struct APlayerCameraManager_BlueprintUpdateCamera_Params {
		class AActor* CameraTarget;			//Offset: 0 | ElementSize: 8
		struct FVector NewCameraLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator NewCameraRotation;			//Offset: 20 | ElementSize: 12
		float NewCameraFOV;			//Offset: 32 | ElementSize: 4
		bool ReturnValue;			//Offset: 36 | ElementSize: 1
	};
	APlayerCameraManager_BlueprintUpdateCamera_Params params;
	params.CameraTarget = CameraTarget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = params.NewCameraLocation;
	if (NewCameraRotation != nullptr)
		*NewCameraRotation = params.NewCameraRotation;
	if (NewCameraFOV != nullptr)
		*NewCameraFOV = params.NewCameraFOV;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.ClearCameraLensEffects
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::ClearCameraLensEffects() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.ClearCameraLensEffects");

	struct APlayerCameraManager_ClearCameraLensEffects_Params {
	};
	APlayerCameraManager_ClearCameraLensEffects_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.FindCameraModifierByClass
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ModifierClass	Type: class UCameraModifier*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCameraModifier*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(class UCameraModifier* ModifierClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.FindCameraModifierByClass");

	struct APlayerCameraManager_FindCameraModifierByClass_Params {
		class UCameraModifier* ModifierClass;			//Offset: 0 | ElementSize: 8
		class UCameraModifier* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	APlayerCameraManager_FindCameraModifierByClass_Params params;
	params.ModifierClass = ModifierClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.GetCameraLocation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector APlayerCameraManager::GetCameraLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.GetCameraLocation");

	struct APlayerCameraManager_GetCameraLocation_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	APlayerCameraManager_GetCameraLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.GetCameraRotation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator APlayerCameraManager::GetCameraRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.GetCameraRotation");

	struct APlayerCameraManager_GetCameraRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	APlayerCameraManager_GetCameraRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.GetFOVAngle
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float APlayerCameraManager::GetFOVAngle()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.GetFOVAngle");

	struct APlayerCameraManager_GetFOVAngle_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	APlayerCameraManager_GetFOVAngle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.GetOwningPlayerController
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerController* APlayerCameraManager::GetOwningPlayerController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.GetOwningPlayerController");

	struct APlayerCameraManager_GetOwningPlayerController_Params {
		class APlayerController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APlayerCameraManager_GetOwningPlayerController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd
// Flags: BlueprintCosmetic, Native, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd");

	struct APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Params {
	};
	APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart
// Flags: BlueprintCosmetic, Native, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::OnPhotographyMultiPartCaptureStart() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart");

	struct APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Params {
	};
	APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.OnPhotographySessionEnd
// Flags: BlueprintCosmetic, Native, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::OnPhotographySessionEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.OnPhotographySessionEnd");

	struct APlayerCameraManager_OnPhotographySessionEnd_Params {
	};
	APlayerCameraManager_OnPhotographySessionEnd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.OnPhotographySessionStart
// Flags: BlueprintCosmetic, Native, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::OnPhotographySessionStart() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.OnPhotographySessionStart");

	struct APlayerCameraManager_OnPhotographySessionStart_Params {
	};
	APlayerCameraManager_OnPhotographySessionStart_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.PhotographyCameraModify
// Flags: BlueprintCosmetic, Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: NewCameraLocation	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PreviousCameraLocation	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OriginalCameraLocation	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ResultCameraLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector* ResultCameraLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.PhotographyCameraModify");

	struct APlayerCameraManager_PhotographyCameraModify_Params {
		struct FVector NewCameraLocation;			//Offset: 0 | ElementSize: 12
		struct FVector PreviousCameraLocation;			//Offset: 12 | ElementSize: 12
		struct FVector OriginalCameraLocation;			//Offset: 24 | ElementSize: 12
		struct FVector ResultCameraLocation;			//Offset: 36 | ElementSize: 12
	};
	APlayerCameraManager_PhotographyCameraModify_Params params;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.PlayCameraAnim
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Anim	Type: class UCameraAnim*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendInTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLoop	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRandomStartTime	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaySpace	Type: ECameraShakePlaySpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserPlaySpaceRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCameraAnimInst*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.PlayCameraAnim");

	struct APlayerCameraManager_PlayCameraAnim_Params {
		class UCameraAnim* Anim;			//Offset: 0 | ElementSize: 8
		float Rate;			//Offset: 8 | ElementSize: 4
		float Scale;			//Offset: 12 | ElementSize: 4
		float BlendInTime;			//Offset: 16 | ElementSize: 4
		float BlendOutTime;			//Offset: 20 | ElementSize: 4
		bool bLoop;			//Offset: 24 | ElementSize: 1
		bool bRandomStartTime;			//Offset: 25 | ElementSize: 1
		float Duration;			//Offset: 28 | ElementSize: 4
		ECameraShakePlaySpace PlaySpace;			//Offset: 32 | ElementSize: 1
		struct FRotator UserPlaySpaceRot;			//Offset: 36 | ElementSize: 12
		class UCameraAnimInst* ReturnValue;			//Offset: 48 | ElementSize: 8
	};
	APlayerCameraManager_PlayCameraAnim_Params params;
	params.Anim = Anim;
	params.Rate = Rate;
	params.Scale = Scale;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLoop = bLoop;
	params.bRandomStartTime = bRandomStartTime;
	params.Duration = Duration;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.RemoveCameraLensEffect
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Emitter	Type: class AEmitterCameraLensEffectBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.RemoveCameraLensEffect");

	struct APlayerCameraManager_RemoveCameraLensEffect_Params {
		class AEmitterCameraLensEffectBase* Emitter;			//Offset: 0 | ElementSize: 8
	};
	APlayerCameraManager_RemoveCameraLensEffect_Params params;
	params.Emitter = Emitter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.RemoveCameraModifier
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ModifierToRemove	Type: class UCameraModifier*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerCameraManager::RemoveCameraModifier(class UCameraModifier* ModifierToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.RemoveCameraModifier");

	struct APlayerCameraManager_RemoveCameraModifier_Params {
		class UCameraModifier* ModifierToRemove;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_RemoveCameraModifier_Params params;
	params.ModifierToRemove = ModifierToRemove;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.SetGameCameraCutThisFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::SetGameCameraCutThisFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.SetGameCameraCutThisFrame");

	struct APlayerCameraManager_SetGameCameraCutThisFrame_Params {
	};
	APlayerCameraManager_SetGameCameraCutThisFrame_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.SetManualCameraFade
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InFadeAmount	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Color	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bInFadeAudio	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.SetManualCameraFade");

	struct APlayerCameraManager_SetManualCameraFade_Params {
		float InFadeAmount;			//Offset: 0 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 4 | ElementSize: 16
		bool bInFadeAudio;			//Offset: 20 | ElementSize: 1
	};
	APlayerCameraManager_SetManualCameraFade_Params params;
	params.InFadeAmount = InFadeAmount;
	params.Color = Color;
	params.bInFadeAudio = bInFadeAudio;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StartCameraFade
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: FromAlpha	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ToAlpha	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Color	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShouldFadeAudio	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHoldWhenFinished	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StartCameraFade");

	struct APlayerCameraManager_StartCameraFade_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
	};
	APlayerCameraManager_StartCameraFade_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StartCameraShake
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaySpace	Type: ECameraShakePlaySpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserPlaySpaceRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCameraShakeBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCameraShakeBase* APlayerCameraManager::StartCameraShake(class UCameraShakeBase* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StartCameraShake");

	struct APlayerCameraManager_StartCameraShake_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
		ECameraShakePlaySpace PlaySpace;			//Offset: 12 | ElementSize: 1
		struct FRotator UserPlaySpaceRot;			//Offset: 16 | ElementSize: 12
		class UCameraShakeBase* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	APlayerCameraManager_StartCameraShake_Params params;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StartCameraShakeFromSource
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ShakeClass	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaySpace	Type: ECameraShakePlaySpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserPlaySpaceRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCameraShakeBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCameraShakeBase* APlayerCameraManager::StartCameraShakeFromSource(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StartCameraShakeFromSource");

	struct APlayerCameraManager_StartCameraShakeFromSource_Params {
		class UCameraShakeBase* ShakeClass;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
		float Scale;			//Offset: 16 | ElementSize: 4
		ECameraShakePlaySpace PlaySpace;			//Offset: 20 | ElementSize: 1
		struct FRotator UserPlaySpaceRot;			//Offset: 24 | ElementSize: 12
		class UCameraShakeBase* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	APlayerCameraManager_StartCameraShakeFromSource_Params params;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllCameraAnims
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bImmediate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllCameraAnims");

	struct APlayerCameraManager_StopAllCameraAnims_Params {
		bool bImmediate;			//Offset: 0 | ElementSize: 1
	};
	APlayerCameraManager_StopAllCameraAnims_Params params;
	params.bImmediate = bImmediate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllCameraShakes
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllCameraShakes");

	struct APlayerCameraManager_StopAllCameraShakes_Params {
		bool bImmediately;			//Offset: 0 | ElementSize: 1
	};
	APlayerCameraManager_StopAllCameraShakes_Params params;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllCameraShakesFromSource
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllCameraShakesFromSource");

	struct APlayerCameraManager_StopAllCameraShakesFromSource_Params {
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 0 | ElementSize: 8
		bool bImmediately;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_StopAllCameraShakesFromSource_Params params;
	params.SourceComponent = SourceComponent;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Anim	Type: class UCameraAnim*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim");

	struct APlayerCameraManager_StopAllInstancesOfCameraAnim_Params {
		class UCameraAnim* Anim;			//Offset: 0 | ElementSize: 8
		bool bImmediate;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_StopAllInstancesOfCameraAnim_Params params;
	params.Anim = Anim;
	params.bImmediate = bImmediate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllInstancesOfCameraShake(class UCameraShakeBase* Shake, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake");

	struct APlayerCameraManager_StopAllInstancesOfCameraShake_Params {
		class UCameraShakeBase* Shake;			//Offset: 0 | ElementSize: 8
		bool bImmediately;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_StopAllInstancesOfCameraShake_Params params;
	params.Shake = Shake;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource(class UCameraShakeBase* Shake, class UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource");

	struct APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Params {
		class UCameraShakeBase* Shake;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
		bool bImmediately;			//Offset: 16 | ElementSize: 1
	};
	APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Params params;
	params.Shake = Shake;
	params.SourceComponent = SourceComponent;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopCameraAnimInst
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: AnimInst	Type: class UCameraAnimInst*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopCameraAnimInst");

	struct APlayerCameraManager_StopCameraAnimInst_Params {
		class UCameraAnimInst* AnimInst;			//Offset: 0 | ElementSize: 8
		bool bImmediate;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_StopCameraAnimInst_Params params;
	params.AnimInst = AnimInst;
	params.bImmediate = bImmediate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopCameraFade
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::StopCameraFade() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopCameraFade");

	struct APlayerCameraManager_StopCameraFade_Params {
	};
	APlayerCameraManager_StopCameraFade_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.StopCameraShake
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ShakeInstance	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerCameraManager::StopCameraShake(class UCameraShakeBase* ShakeInstance, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.StopCameraShake");

	struct APlayerCameraManager_StopCameraShake_Params {
		class UCameraShakeBase* ShakeInstance;			//Offset: 0 | ElementSize: 8
		bool bImmediately;			//Offset: 8 | ElementSize: 1
	};
	APlayerCameraManager_StopCameraShake_Params params;
	params.ShakeInstance = ShakeInstance;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates
// Flags: Final, Native, Protected
// Params:
/////////////////////////////////////////////
void APlayerCameraManager::SwapPendingViewTargetWhenUsingClientSideCameraUpdates() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates");

	struct APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Params {
	};
	APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}