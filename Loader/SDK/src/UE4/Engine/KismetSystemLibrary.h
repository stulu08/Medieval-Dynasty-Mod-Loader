#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetSystemLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetSystemLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FDebugFloatHistory AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);

	static int32_t BeginTransaction(struct FString Context, struct FText Description, class UObject* PrimaryObject);

	static bool BoxOverlapActors(class UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);

	static bool BoxOverlapComponents(class UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);

	static bool BoxTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool BoxTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool BoxTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool BoxTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool BoxTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool BoxTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static void BreakSoftClassPath(struct FSoftClassPath InSoftClassPath, struct FString* PathString);

	static void BreakSoftObjectPath(struct FSoftObjectPath InSoftObjectPath, struct FString* PathString);

	static void CancelTransaction(int32_t Index);

	static bool CanLaunchURL(struct FString URL);

	static bool CapsuleOverlapActors(class UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);

	static bool CapsuleOverlapComponents(class UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);

	static bool CapsuleTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool CapsuleTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool CapsuleTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool CapsuleTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static void CollectGarbage();

	static bool ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);

	static bool ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);

	static void ControlScreensaver(bool bAllowScreenSaver);

	static TAssetPtr<class UClass> Conv_ClassToSoftClassReference(class UObject*& Class);

	static class UObject* Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);

	static TAssetPtr<class UObject> Conv_ObjectToSoftObjectReference(class UObject* Object);

	static struct FString Conv_PrimaryAssetIdToString(struct FPrimaryAssetId PrimaryAssetId);

	static struct FString Conv_PrimaryAssetTypeToString(struct FPrimaryAssetType PrimaryAssetType);

	static TAssetPtr<class UClass> Conv_SoftClassPathToSoftClassRef(const struct FSoftClassPath& SoftClassPath);

	static class UObject* Conv_SoftClassReferenceToClass(const TAssetPtr<class UClass>& SoftClass);

	static struct FString Conv_SoftClassReferenceToString(const TAssetPtr<class UClass>& SoftClassReference);

	static class UObject* Conv_SoftObjectReferenceToObject(const TAssetPtr<class UObject>& SoftObject);

	static struct FString Conv_SoftObjectReferenceToString(const TAssetPtr<class UObject>& SoftObjectReference);

	static TAssetPtr<class UObject> Conv_SoftObjPathToSoftObjRef(const struct FSoftObjectPath& SoftObjectPath);

	static struct FString ConvertToAbsolutePath(struct FString Filename);

	static struct FString ConvertToRelativePath(struct FString Filename);

	static void CreateCopyForUndoBuffer(class UObject* ObjectToModify);

	static void Delay(class UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo);

	static bool DoesImplementInterface(class UObject* TestObject, class UInterface* Interface);

	static void DrawDebugArrow(class UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, float ArrowSize, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugBox(class UObject* WorldContextObject, struct FVector Center, struct FVector Extent, struct FLinearColor LineColor, struct FRotator Rotation, float Duration, float Thickness);

	static void DrawDebugCamera(class ACameraActor* CameraActor, struct FLinearColor CameraColor, float Duration);

	static void DrawDebugCapsule(class UObject* WorldContextObject, struct FVector Center, float HalfHeight, float Radius, struct FRotator Rotation, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugCircle(class UObject* WorldContextObject, struct FVector Center, float Radius, int32_t NumSegments, struct FLinearColor LineColor, float Duration, float Thickness, struct FVector YAxis, struct FVector ZAxis, bool bDrawAxis);

	static void DrawDebugCone(class UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugConeInDegrees(class UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugCoordinateSystem(class UObject* WorldContextObject, struct FVector AxisLoc, struct FRotator AxisRot, float Scale, float Duration, float Thickness);

	static void DrawDebugCylinder(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, struct FVector DrawLocation, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration);

	static void DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration);

	static void DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, struct FLinearColor FrustumColor, float Duration, float Thickness);

	static void DrawDebugLine(class UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, struct FVector Location, float Size, struct FLinearColor PlaneColor, float Duration);

	static void DrawDebugPoint(class UObject* WorldContextObject, struct FVector Position, float Size, struct FLinearColor PointColor, float Duration);

	static void DrawDebugSphere(class UObject* WorldContextObject, struct FVector Center, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness);

	static void DrawDebugString(class UObject* WorldContextObject, struct FVector TextLocation, struct FString Text, class AActor* TestBaseActor, struct FLinearColor TextColor, float Duration);

	static int32_t EndTransaction();

	static bool EqualEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B);

	static bool EqualEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B);

	static bool EqualEqual_SoftClassReference(const TAssetPtr<class UClass>& A, const TAssetPtr<class UClass>& B);

	static bool EqualEqual_SoftObjectReference(const TAssetPtr<class UObject>& A, const TAssetPtr<class UObject>& B);

	static void ExecuteConsoleCommand(class UObject* WorldContextObject, struct FString Command, class APlayerController* SpecificPlayer);

	static void FlushDebugStrings(class UObject* WorldContextObject);

	static void FlushPersistentDebugLines(class UObject* WorldContextObject);

	static void ForceCloseAdBanner();

	static void GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);

	static void GetActorListFromComponentList(const TArray<class UPrimitiveComponent*>& ComponentList, class UObject* ActorClassFilter, TArray<class AActor*>* OutActorList);

	static int32_t GetAdIDCount();

	static struct FString GetClassDisplayName(class UObject* Class);

	static class UObject* GetClassFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId);

	static struct FString GetCommandLine();

	static void GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);

	static bool GetConsoleVariableBoolValue(struct FString VariableName);

	static float GetConsoleVariableFloatValue(struct FString VariableName);

	static int32_t GetConsoleVariableIntValue(struct FString VariableName);

	static bool GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions);

	static bool GetCurrentBundleState(struct FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<struct FName>* OutBundles);

	static struct FString GetDefaultLanguage();

	static struct FString GetDefaultLocale();

	static struct FString GetDeviceId();

	static struct FString GetDisplayName(class UObject* Object);

	static struct FString GetEngineVersion();

	static int64_t GetFrameCount();

	static struct FString GetGameBundleId();

	static struct FString GetGameName();

	static class UTexture2D* GetGamepadButtonGlyph(struct FString ButtonKey, int32_t ControllerIndex);

	static struct FString GetGamepadControllerName(int32_t ControllerId);

	static float GetGameTimeInSeconds(class UObject* WorldContextObject);

	static struct FString GetLocalCurrencyCode();

	static struct FString GetLocalCurrencySymbol();

	static int32_t GetMinYResolutionFor3DView();

	static int32_t GetMinYResolutionForUI();

	static class UObject* GetObjectFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId);

	static struct FString GetObjectName(class UObject* Object);

	static class UObject* GetOuterObject(class UObject* Object);

	static struct FString GetPathName(class UObject* Object);

	static struct FString GetPlatformUserDir();

	static struct FString GetPlatformUserName();

	static TArray<struct FString> GetPreferredLanguages();

	static struct FPrimaryAssetId GetPrimaryAssetIdFromClass(class UObject* Class);

	static struct FPrimaryAssetId GetPrimaryAssetIdFromObject(class UObject* Object);

	static struct FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TAssetPtr<class UClass> SoftClassReference);

	static struct FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TAssetPtr<class UObject> SoftObjectReference);

	static void GetPrimaryAssetIdList(struct FPrimaryAssetType PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);

	static void GetPrimaryAssetsWithBundleState(const TArray<struct FName>& RequiredBundles, const TArray<struct FName>& ExcludedBundles, const TArray<struct FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);

	static struct FString GetProjectContentDirectory();

	static struct FString GetProjectDirectory();

	static struct FString GetProjectSavedDirectory();

	static int32_t GetRenderingDetailMode();

	static int32_t GetRenderingMaterialQualityLevel();

	static TAssetPtr<class UClass> GetSoftClassReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId);

	static TAssetPtr<class UObject> GetSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId);

	static bool GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);

	static struct FString GetSystemPath(class UObject* Object);

	static struct FString GetUniqueDeviceId();

	static bool GetVolumeButtonsHandledBySystem();

	static void HideAdBanner();

	static bool IsControllerAssignedToGamepad(int32_t ControllerId);

	static bool IsDedicatedServer(class UObject* WorldContextObject);

	static bool IsInterstitialAdAvailable();

	static bool IsInterstitialAdRequested();

	static bool IsLoggedIn(class APlayerController* SpecificPlayer);

	static bool IsPackagedForDistribution();

	static bool IsScreensaverEnabled();

	static bool IsServer(class UObject* WorldContextObject);

	static bool IsSplitScreen(class UObject* WorldContextObject);

	static bool IsStandalone(class UObject* WorldContextObject);

	static bool IsUnattended();

	static bool IsValid(class UObject* Object);

	static bool IsValidClass(class UObject* Class);

	static bool IsValidPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId);

	static bool IsValidPrimaryAssetType(struct FPrimaryAssetType PrimaryAssetType);

	static bool IsValidSoftClassReference(const TAssetPtr<class UClass>& SoftClassReference);

	static bool IsValidSoftObjectReference(const TAssetPtr<class UObject>& SoftObjectReference);

	static void K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle);

	static void K2_ClearTimer(class UObject* Object, struct FString FunctionName);

	static void K2_ClearTimerDelegate(struct FScriptDelegate Delegate);

	static void K2_ClearTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static float K2_GetTimerElapsedTime(class UObject* Object, struct FString FunctionName);

	static float K2_GetTimerElapsedTimeDelegate(struct FScriptDelegate Delegate);

	static float K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static float K2_GetTimerRemainingTime(class UObject* Object, struct FString FunctionName);

	static float K2_GetTimerRemainingTimeDelegate(struct FScriptDelegate Delegate);

	static float K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle* Handle);

	static bool K2_IsTimerActive(class UObject* Object, struct FString FunctionName);

	static bool K2_IsTimerActiveDelegate(struct FScriptDelegate Delegate);

	static bool K2_IsTimerActiveHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static bool K2_IsTimerPaused(class UObject* Object, struct FString FunctionName);

	static bool K2_IsTimerPausedDelegate(struct FScriptDelegate Delegate);

	static bool K2_IsTimerPausedHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static bool K2_IsValidTimerHandle(struct FTimerHandle Handle);

	static void K2_PauseTimer(class UObject* Object, struct FString FunctionName);

	static void K2_PauseTimerDelegate(struct FScriptDelegate Delegate);

	static void K2_PauseTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static struct FTimerHandle K2_SetTimer(class UObject* Object, struct FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);

	static struct FTimerHandle K2_SetTimerDelegate(struct FScriptDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);

	static bool K2_TimerExists(class UObject* Object, struct FString FunctionName);

	static bool K2_TimerExistsDelegate(struct FScriptDelegate Delegate);

	static bool K2_TimerExistsHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static void K2_UnPauseTimer(class UObject* Object, struct FString FunctionName);

	static void K2_UnPauseTimerDelegate(struct FScriptDelegate Delegate);

	static void K2_UnPauseTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle);

	static void LaunchURL(struct FString URL);

	static bool LineTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool LineTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool LineTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool LineTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool LineTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool LineTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static void LoadAsset(class UObject* WorldContextObject, TAssetPtr<class UObject> Asset, struct FScriptDelegate OnLoaded, struct FLatentActionInfo LatentInfo);

	void OnAssetLoaded__DelegateSignature(class UObject* Loaded);

	static class UObject* LoadAsset_Blocking(TAssetPtr<class UObject> Asset);

	static void LoadAssetClass(class UObject* WorldContextObject, TAssetPtr<class UClass> AssetClass, struct FScriptDelegate OnLoaded, struct FLatentActionInfo LatentInfo);

	void OnAssetClassLoaded__DelegateSignature(class UObject* Loaded);

	static class UObject* LoadClassAsset_Blocking(TAssetPtr<class UClass> AssetClass);

	static void LoadInterstitialAd(int32_t AdIdIndex);

	static bool MakeLiteralBool(bool Value);

	static unsigned char MakeLiteralByte(unsigned char Value);

	static float MakeLiteralFloat(float Value);

	static int32_t MakeLiteralInt(int32_t Value);

	static struct FName MakeLiteralName(struct FName Value);

	static struct FString MakeLiteralString(struct FString Value);

	static struct FText MakeLiteralText(struct FText Value);

	static struct FSoftClassPath MakeSoftClassPath(struct FString PathString);

	static struct FSoftObjectPath MakeSoftObjectPath(struct FString PathString);

	static void MoveComponentTo(class USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, struct FLatentActionInfo LatentInfo);

	static struct FString NormalizeFilename(struct FString InFilename);

	static bool NotEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B);

	static bool NotEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B);

	static bool NotEqual_SoftClassReference(const TAssetPtr<class UClass>& A, const TAssetPtr<class UClass>& B);

	static bool NotEqual_SoftObjectReference(const TAssetPtr<class UObject>& A, const TAssetPtr<class UObject>& B);

	static void ParseCommandLine(struct FString InCmdLine, TArray<struct FString>* OutTokens, TArray<struct FString>* OutSwitches, TMap<struct FString, struct FString>* OutParams);

	static bool ParseParam(struct FString inString, struct FString InParam);

	static bool ParseParamValue(struct FString inString, struct FString InParam, struct FString* OutValue);

	static void PrintString(class UObject* WorldContextObject, struct FString inString, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration);

	static void PrintText(class UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration);

	static void PrintWarning(struct FString inString);

	static void QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference, bool bIgnorePlatformRestrictions);

	static void RegisterForRemoteNotifications();

	static void ResetGamepadAssignments();

	static void ResetGamepadAssignmentToController(int32_t ControllerId);

	static void RetriggerableDelay(class UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo);

	static void SetBoolPropertyByName(class UObject* Object, struct FName PropertyName, bool Value);

	static void SetBytePropertyByName(class UObject* Object, struct FName PropertyName, unsigned char Value);

	static void SetClassPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value);

	static void SetCollisionProfileNameProperty(class UObject* Object, struct FName PropertyName, const struct FCollisionProfileName& Value);

	static void SetColorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FColor& Value);

	static void SetFieldPathPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class FNone>& Value);

	static void SetFloatPropertyByName(class UObject* Object, struct FName PropertyName, float Value);

	static void SetGamepadsBlockDeviceFeedback(bool bBlock);

	static void SetInt64PropertyByName(class UObject* Object, struct FName PropertyName, int64_t Value);

	static void SetInterfacePropertyByName(class UObject* Object, struct FName PropertyName, const TScriptInterface<class UInterface>& Value);

	static void SetIntPropertyByName(class UObject* Object, struct FName PropertyName, int32_t Value);

	static void SetLinearColorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FLinearColor& Value);

	static void SetNamePropertyByName(class UObject* Object, struct FName PropertyName, const struct FName& Value);

	static void SetObjectPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value);

	static void SetRotatorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FRotator& Value);

	static void SetSoftClassPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class UClass>& Value);

	static void SetSoftObjectPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class UObject>& Value);

	static void SetStringPropertyByName(class UObject* Object, struct FName PropertyName, struct FString Value);

	static void SetStructurePropertyByName(class UObject* Object, struct FName PropertyName, const struct FGenericStruct& Value);

	static void SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);

	static void SetTextPropertyByName(class UObject* Object, struct FName PropertyName, const struct FText& Value);

	static void SetTransformPropertyByName(class UObject* Object, struct FName PropertyName, const struct FTransform& Value);

	static void SetUserActivity(const struct FUserActivity& UserActivity);

	static void SetVectorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FVector& Value);

	static void SetVolumeButtonsHandledBySystem(bool bEnabled);

	static void SetWindowTitle(const struct FText& Title);

	static void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen);

	static void ShowInterstitialAd();

	static void ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);

	static void ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName);

	static void SnapshotObject(class UObject* Object);

	static bool SphereOverlapActors(class UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);

	static bool SphereOverlapComponents(class UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);

	static bool SphereTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool SphereTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool SphereTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool SphereTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool SphereTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static bool SphereTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	static void StackTrace();

	static void TransactObject(class UObject* Object);

	static void UnloadPrimaryAsset(struct FPrimaryAssetId PrimaryAssetId);

	static void UnloadPrimaryAssetList(const TArray<struct FPrimaryAssetId>& PrimaryAssetIdList);

	static void UnregisterForRemoteNotifications();

#pragma endregion
};
};