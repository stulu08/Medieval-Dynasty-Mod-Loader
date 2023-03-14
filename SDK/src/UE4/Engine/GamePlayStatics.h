#pragma once
#include "Structs.h"
#include "World.h"
#include "BlueprintFunctionLibrary.h"


namespace UE4 {
	class UGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:

		static class AActor* BeginDeferredActorSpawnFromClass(class AActor* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner) { return BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), ActorClass, SpawnTransform, CollisionHandlingOverride, Owner); }

		static class FString GetCurrentLevelName(bool bRemovePrefixString) { return GetCurrentLevelName(UWorld::GetWorld(), bRemovePrefixString); }

		static class AGameStateBase* GetGameState() { return GetGameState(UWorld::GetWorld()); }
		static class AGameModeBase* GetGameMode() { return GetGameMode(UWorld::GetWorld()); }
		static class UGameInstance* GetGameInstance() { return GetGameInstance(UWorld::GetWorld()); }
		static class APawn* GetPlayerPawn(int PlayerIndex) { return GetPlayerPawn(UWorld::GetWorld(), PlayerIndex); }
		static class APlayerController* GetPlayerController(int PlayerIndex) { return GetPlayerController(UWorld::GetWorld(), PlayerIndex); }

		static void ExecuteConsoleCommand(const class FString& Command, class APlayerController* SpecificPlayer);

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
			return ptr;
		}

		static void ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime);

		static void AnnounceAccessibleString(struct FString AnnouncementString);

		static float ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

		static float ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

		static bool ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UDamageType* DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);

		static bool ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UDamageType* DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);

		static bool AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);

		static bool AreSubtitlesEnabled();

		static class AActor* BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class AActor* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);

		static class AActor* BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);

		static class AActor* BeginSpawningActorFromClass(class UObject* WorldContextObject, class AActor* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);

		static bool Blueprint_PredictProjectilePath_Advanced(class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult);

		static bool Blueprint_PredictProjectilePath_ByObjectType(class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);

		static bool Blueprint_PredictProjectilePath_ByTraceChannel(class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);

		static bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, struct FVector* TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);

		static void BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int32_t* HitItem, int32_t* ElementIndex, int32_t* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd);

		static void CancelAsyncLoading();

		static void ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);

		static void ClearSoundMixModifiers(class UObject* WorldContextObject);

		static class APlayerController* CreatePlayer(class UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController);

		static class USaveGame* CreateSaveGameObject(class USaveGame* SaveGameClass);

		static class UAudioComponent* CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);

		static void DeactivateReverbEffect(class UObject* WorldContextObject, struct FName TagName);

		static bool DeleteGameInSlot(struct FString SlotName, int32_t UserIndex);

		static bool DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);

		static bool DoesSaveGameExist(struct FString SlotName, int32_t UserIndex);

		static void EnableLiveStreaming(bool enable);

		static bool FindCollisionUV(const struct FHitResult& Hit, int32_t UVChannel, struct FVector2D* UV);

		static class AActor* FindNearestActor(struct FVector Origin, const TArray<class AActor*>& ActorsToCheck, float* Distance);

		static class AActor* FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);

		static void FlushLevelStreaming(class UObject* WorldContextObject);

		static void GetAccurateRealTime(int32_t* Seconds, float* PartialSeconds);

		static struct FVector GetActorArrayAverageLocation(const TArray<class AActor*>& Actors);

		static void GetActorArrayBounds(const TArray<class AActor*>& Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);

		static class AActor* GetActorOfClass(class UObject* WorldContextObject, class AActor* ActorClass);

		static void GetAllActorsOfClass(class UObject* WorldContextObject, class AActor* ActorClass, TArray<class AActor*>* OutActors);

		static void GetAllActorsOfClassWithTag(class UObject* WorldContextObject, class AActor* ActorClass, struct FName Tag, TArray<class AActor*>* OutActors);

		static void GetAllActorsWithInterface(class UObject* WorldContextObject, class UInterface* Interface, TArray<class AActor*>* OutActors);

		static void GetAllActorsWithTag(class UObject* WorldContextObject, struct FName Tag, TArray<class AActor*>* OutActors);

		static float GetAudioTimeSeconds(class UObject* WorldContextObject);

		static bool GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, struct FVector* ListenerPosition);

		static struct FString GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);

		static class UReverbEffect* GetCurrentReverbEffect(class UObject* WorldContextObject);

		static bool GetEnableWorldRendering(class UObject* WorldContextObject);

		static class UGameInstance* GetGameInstance(class UObject* WorldContextObject);

		static class AGameModeBase* GetGameMode(class UObject* WorldContextObject);

		static class AGameStateBase* GetGameState(class UObject* WorldContextObject);

		static float GetGlobalTimeDilation(class UObject* WorldContextObject);

		static int32_t GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue);

		static void GetKeyValue(struct FString Pair, struct FString* Key, struct FString* Value);

		static int32_t GetMaxAudioChannelCount(class UObject* WorldContextObject);

		static class UObject* GetObjectClass(class UObject* Object);

		static struct FString GetPlatformName();

		static class APlayerCameraManager* GetPlayerCameraManager(class UObject* WorldContextObject, int32_t PlayerIndex);

		static class ACharacter* GetPlayerCharacter(class UObject* WorldContextObject, int32_t PlayerIndex);

		static class APlayerController* GetPlayerController(class UObject* WorldContextObject, int32_t PlayerIndex);

		static class APlayerController* GetPlayerControllerFromID(class UObject* WorldContextObject, int32_t ControllerId);

		static int32_t GetPlayerControllerID(class APlayerController* Player);

		static class APawn* GetPlayerPawn(class UObject* WorldContextObject, int32_t PlayerIndex);

		static float GetRealTimeSeconds(class UObject* WorldContextObject);

		static class ULevelStreaming* GetStreamingLevel(class UObject* WorldContextObject, struct FName PackageName);

		static TEnumAsByte<EPhysicalSurface> GetSurfaceType(const struct FHitResult& Hit);

		static float GetTimeSeconds(class UObject* WorldContextObject);

		static float GetUnpausedTimeSeconds(class UObject* WorldContextObject);

		static EMouseCaptureMode GetViewportMouseCaptureMode(class UObject* WorldContextObject);

		static void GetViewProjectionMatrix(struct FMinimalViewInfo DesiredView, struct FMatrix* ViewMatrix, struct FMatrix* ProjectionMatrix, struct FMatrix* ViewProjectionMatrix);

		static float GetWorldDeltaSeconds(class UObject* WorldContextObject);

		static struct FIntVector GetWorldOriginLocation(class UObject* WorldContextObject);

		static int32_t GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius);

		static bool HasLaunchOption(struct FString OptionToCheck);

		static bool HasOption(struct FString Options, struct FString InKey);

		static bool IsGamePaused(class UObject* WorldContextObject);

		static bool IsSplitscreenForceDisabled(class UObject* WorldContextObject);

		static class USaveGame* LoadGameFromSlot(struct FString SlotName, int32_t UserIndex);

		static void LoadStreamLevel(class UObject* WorldContextObject, struct FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo);

		static void LoadStreamLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo);

		static struct FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, struct FVector Location, struct FVector ImpactPoint, struct FVector Normal, struct FVector ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, struct FVector TraceStart, struct FVector TraceEnd);

		static void OpenLevel(class UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString Options);

		static void OpenLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, bool bAbsolute, struct FString Options);

		static struct FString ParseOption(struct FString Options, struct FString Key);

		static void PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);

		static void PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);

		static void PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor, bool bIsUISound);

		static void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);

		static void PlayWorldCameraShake(class UObject* WorldContextObject, class UCameraShakeBase* Shake, struct FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);

		static void PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);

		static void PrimeAllSoundsInSoundClass(class USoundClass* InSoundClass);

		static void PrimeSound(class USoundBase* InSound);

		static bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);

		static void PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);

		static struct FVector RebaseLocalOriginOntoZero(class UObject* WorldContextObject, struct FVector WorldLocation);

		static struct FVector RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, struct FVector WorldLocation);

		static void RemovePlayer(class APlayerController* Player, bool bDestroyPawn);

		static bool SaveGameToSlot(class USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex);

		static void SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix);

		static void SetEnableWorldRendering(class UObject* WorldContextObject, bool bEnable);

		static void SetForceDisableSplitscreen(class UObject* WorldContextObject, bool bDisable);

		static bool SetGamePaused(class UObject* WorldContextObject, bool bPaused);

		static void SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);

		static void SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec);

		static void SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);

		static void SetMaxAudioChannelsScaled(class UObject* WorldContextObject, float MaxChannelCountScale);

		static void SetPlayerControllerID(class APlayerController* Player, int32_t ControllerId);

		static void SetSoundClassDistanceScale(class UObject* WorldContextObject, class USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);

		static void SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);

		static void SetSubtitlesEnabled(bool bEnabled);

		static void SetViewportMouseCaptureMode(class UObject* WorldContextObject, EMouseCaptureMode MouseCaptureMode);

		static void SetWorldOriginLocation(class UObject* WorldContextObject, struct FIntVector NewLocation);

		static class UDecalComponent* SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan);

		static class UDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, struct FVector DecalSize, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);

		static class UAudioComponent* SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);

		static class UAudioComponent* SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);

		static class UAudioComponent* SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);

		static class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);

		static class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, struct FVector Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);

		static class UForceFeedbackComponent* SpawnForceFeedbackAtLocation(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, struct FVector Location, struct FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);

		static class UForceFeedbackComponent* SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);

		static class UObject* SpawnObject(class UObject* ObjectClass, class UObject* Outer);

		static class UAudioComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);

		static class UAudioComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

		static class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

		static bool SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, struct FVector* OutLaunchVelocity, struct FVector StartPos, struct FVector EndPos, float OverrideGravityZ, float ArcParam);

		static void UnloadStreamLevel(class UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);

		static void UnloadStreamLevelBySoftObjectPtr(class UObject* WorldContextObject, TAssetPtr<class UWorld> Level, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);

		static void UnRetainAllSoundsInSoundClass(class USoundClass* InSoundClass);

#pragma endregion
	};
}