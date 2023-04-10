#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.PlayerCameraManager
// Super: Class Engine.Actor
// Size: 10256
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class APlayerCameraManager : public AActor {
public:
#pragma region Members
	//class APlayerController*	PCOwner;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerController* M_GetPCOwner() const;
	class APlayerController** M_PtrGetPCOwner();
	void M_SetPCOwner(const class APlayerController*& value);

	//class USceneComponent*	TransformComponent;		//Offset: 552	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USceneComponent* M_GetTransformComponent() const;
	class USceneComponent** M_PtrGetTransformComponent();
	void M_SetTransformComponent(const class USceneComponent*& value);

	//float	DefaultFOV;		//Offset: 568	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultFOV() const;
	float* M_PtrGetDefaultFOV();
	void M_SetDefaultFOV(const float& value);

	//float	DefaultOrthoWidth;		//Offset: 576	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultOrthoWidth() const;
	float* M_PtrGetDefaultOrthoWidth();
	void M_SetDefaultOrthoWidth(const float& value);

	//float	DefaultAspectRatio;		//Offset: 584	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultAspectRatio() const;
	float* M_PtrGetDefaultAspectRatio();
	void M_SetDefaultAspectRatio(const float& value);

	//struct FCameraCacheEntry	CameraCache;		//Offset: 656	Size: 1536	Flags: Transient, NativeAccessSpecifierPublic
	struct FCameraCacheEntry M_GetCameraCache() const;
	struct FCameraCacheEntry* M_PtrGetCameraCache();
	void M_SetCameraCache(const struct FCameraCacheEntry& value);

	//struct FCameraCacheEntry	LastFrameCameraCache;		//Offset: 2192	Size: 1536	Flags: Transient, NativeAccessSpecifierPublic
	struct FCameraCacheEntry M_GetLastFrameCameraCache() const;
	struct FCameraCacheEntry* M_PtrGetLastFrameCameraCache();
	void M_SetLastFrameCameraCache(const struct FCameraCacheEntry& value);

	//struct FTViewTarget	ViewTarget;		//Offset: 3728	Size: 1552	Flags: Transient, NativeAccessSpecifierPublic
	struct FTViewTarget M_GetViewTarget() const;
	struct FTViewTarget* M_PtrGetViewTarget();
	void M_SetViewTarget(const struct FTViewTarget& value);

	//struct FTViewTarget	PendingViewTarget;		//Offset: 5280	Size: 1552	Flags: Transient, NativeAccessSpecifierPublic
	struct FTViewTarget M_GetPendingViewTarget() const;
	struct FTViewTarget* M_PtrGetPendingViewTarget();
	void M_SetPendingViewTarget(const struct FTViewTarget& value);

	//struct FCameraCacheEntry	CameraCachePrivate;		//Offset: 6880	Size: 1536	Flags: Transient, NativeAccessSpecifierPrivate
	struct FCameraCacheEntry M_GetCameraCachePrivate() const;
	struct FCameraCacheEntry* M_PtrGetCameraCachePrivate();
	void M_SetCameraCachePrivate(const struct FCameraCacheEntry& value);

	//struct FCameraCacheEntry	LastFrameCameraCachePrivate;		//Offset: 8416	Size: 1536	Flags: Transient, NativeAccessSpecifierPrivate
	struct FCameraCacheEntry M_GetLastFrameCameraCachePrivate() const;
	struct FCameraCacheEntry* M_PtrGetLastFrameCameraCachePrivate();
	void M_SetLastFrameCameraCachePrivate(const struct FCameraCacheEntry& value);

	//TArray<class UCameraModifier*>	ModifierList;		//Offset: 9952	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class UCameraModifier*> M_GetModifierList() const;
	TArray<class UCameraModifier*>* M_PtrGetModifierList();
	void M_SetModifierList(const TArray<class UCameraModifier*>& value);

	//TArray<class UCameraModifier*>	DefaultModifiers;		//Offset: 9968	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	TArray<class UCameraModifier*> M_GetDefaultModifiers() const;
	TArray<class UCameraModifier*>* M_PtrGetDefaultModifiers();
	void M_SetDefaultModifiers(const TArray<class UCameraModifier*>& value);

	//float	FreeCamDistance;		//Offset: 9984	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFreeCamDistance() const;
	float* M_PtrGetFreeCamDistance();
	void M_SetFreeCamDistance(const float& value);

	//struct FVector	FreeCamOffset;		//Offset: 9988	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetFreeCamOffset() const;
	struct FVector* M_PtrGetFreeCamOffset();
	void M_SetFreeCamOffset(const struct FVector& value);

	//struct FVector	ViewTargetOffset;		//Offset: 10000	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetViewTargetOffset() const;
	struct FVector* M_PtrGetViewTargetOffset();
	void M_SetViewTargetOffset(const struct FVector& value);

	//TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>	OnAudioFadeChangeEvent;		//Offset: 10016	Size: 16	Flags: ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature> M_GetOnAudioFadeChangeEvent() const;
	TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>* M_PtrGetOnAudioFadeChangeEvent();
	void M_SetOnAudioFadeChangeEvent(const TAssetPtr<class FOnAudioFadeChangeSignature__DelegateSignature>& value);

	//TArray<class AEmitterCameraLensEffectBase*>	CameraLensEffects;		//Offset: 10048	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class AEmitterCameraLensEffectBase*> M_GetCameraLensEffects() const;
	TArray<class AEmitterCameraLensEffectBase*>* M_PtrGetCameraLensEffects();
	void M_SetCameraLensEffects(const TArray<class AEmitterCameraLensEffectBase*>& value);

	//class UCameraModifier_CameraShake*	CachedCameraShakeMod;		//Offset: 10064	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UCameraModifier_CameraShake* M_GetCachedCameraShakeMod() const;
	class UCameraModifier_CameraShake** M_PtrGetCachedCameraShakeMod();
	void M_SetCachedCameraShakeMod(const class UCameraModifier_CameraShake*& value);

	//class UCameraAnimInst*	AnimInstPool[8];		//Offset: 10072	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UCameraAnimInst* M_GetAnimInstPool() const;
	class UCameraAnimInst** M_PtrGetAnimInstPool();
	void M_SetAnimInstPool(const class UCameraAnimInst*& value);

	//TArray<struct FPostProcessSettings>	PostProcessBlendCache;		//Offset: 10136	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<struct FPostProcessSettings> M_GetPostProcessBlendCache() const;
	TArray<struct FPostProcessSettings>* M_PtrGetPostProcessBlendCache();
	void M_SetPostProcessBlendCache(const TArray<struct FPostProcessSettings>& value);

	//TArray<class UCameraAnimInst*>	ActiveAnims;		//Offset: 10168	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<class UCameraAnimInst*> M_GetActiveAnims() const;
	TArray<class UCameraAnimInst*>* M_PtrGetActiveAnims();
	void M_SetActiveAnims(const TArray<class UCameraAnimInst*>& value);

	//TArray<class UCameraAnimInst*>	FreeAnims;		//Offset: 10184	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class UCameraAnimInst*> M_GetFreeAnims() const;
	TArray<class UCameraAnimInst*>* M_PtrGetFreeAnims();
	void M_SetFreeAnims(const TArray<class UCameraAnimInst*>& value);

	//class ACameraActor*	AnimCameraActor;		//Offset: 10200	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class ACameraActor* M_GetAnimCameraActor() const;
	class ACameraActor** M_PtrGetAnimCameraActor();
	void M_SetAnimCameraActor(const class ACameraActor*& value);

	//unsigned char	bIsOrthographic : 1;		//Offset: 10208	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsOrthographic() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsOrthographic();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsOrthographic(const unsigned char& value);

	//unsigned char	bDefaultConstrainAspectRatio : 1;		//Offset: 10208	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDefaultConstrainAspectRatio() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDefaultConstrainAspectRatio();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDefaultConstrainAspectRatio(const unsigned char& value);

	//unsigned char	bClientSimulatingViewTarget : 1;		//Offset: 10208	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientSimulatingViewTarget() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientSimulatingViewTarget();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientSimulatingViewTarget(const unsigned char& value);

	//unsigned char	bUseClientSideCameraUpdates : 1;		//Offset: 10208	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseClientSideCameraUpdates() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseClientSideCameraUpdates();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseClientSideCameraUpdates(const unsigned char& value);

	//unsigned char	bGameCameraCutThisFrame : 1;		//Offset: 10209	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGameCameraCutThisFrame() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGameCameraCutThisFrame();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGameCameraCutThisFrame(const unsigned char& value);

	//float	ViewPitchMin;		//Offset: 10212	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewPitchMin() const;
	float* M_PtrGetViewPitchMin();
	void M_SetViewPitchMin(const float& value);

	//float	ViewPitchMax;		//Offset: 10216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewPitchMax() const;
	float* M_PtrGetViewPitchMax();
	void M_SetViewPitchMax(const float& value);

	//float	ViewYawMin;		//Offset: 10220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewYawMin() const;
	float* M_PtrGetViewYawMin();
	void M_SetViewYawMin(const float& value);

	//float	ViewYawMax;		//Offset: 10224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewYawMax() const;
	float* M_PtrGetViewYawMax();
	void M_SetViewYawMax(const float& value);

	//float	ViewRollMin;		//Offset: 10228	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewRollMin() const;
	float* M_PtrGetViewRollMin();
	void M_SetViewRollMin(const float& value);

	//float	ViewRollMax;		//Offset: 10232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetViewRollMax() const;
	float* M_PtrGetViewRollMax();
	void M_SetViewRollMax(const float& value);

	//float	ServerUpdateCameraTimeout;		//Offset: 10240	Size: 4	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetServerUpdateCameraTimeout() const;
	float* M_PtrGetServerUpdateCameraTimeout();
	void M_SetServerUpdateCameraTimeout(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}

#pragma region Functions
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class AEmitterCameraLensEffectBase* LensEffectEmitterClass);

	class UCameraModifier* AddNewCameraModifier(class UCameraModifier* ModifierClass);

	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);

	void ClearCameraLensEffects();

	class UCameraModifier* FindCameraModifierByClass(class UCameraModifier* ModifierClass);

	struct FVector GetCameraLocation()/* const*/;

	struct FRotator GetCameraRotation()/* const*/;

	float GetFOVAngle()/* const*/;

	class APlayerController* GetOwningPlayerController()/* const*/;

	void OnPhotographyMultiPartCaptureEnd();

	void OnPhotographyMultiPartCaptureStart();

	void OnPhotographySessionEnd();

	void OnPhotographySessionStart();

	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector* ResultCameraLocation);

	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot);

	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);

	bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);

	void SetGameCameraCutThisFrame();

	void SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio);

	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);

	class UCameraShakeBase* StartCameraShake(class UCameraShakeBase* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot);

	class UCameraShakeBase* StartCameraShakeFromSource(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot);

	void StopAllCameraAnims(bool bImmediate);

	void StopAllCameraShakes(bool bImmediately);

	void StopAllCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);

	void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);

	void StopAllInstancesOfCameraShake(class UCameraShakeBase* Shake, bool bImmediately);

	void StopAllInstancesOfCameraShakeFromSource(class UCameraShakeBase* Shake, class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);

	void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);

	void StopCameraFade();

	void StopCameraShake(class UCameraShakeBase* ShakeInstance, bool bImmediately);

	void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();

#pragma endregion
};
};