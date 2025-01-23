#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.CheatManager
// Super: Class CoreUObject.Object
// Size: 136
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UCheatManager : public UObject {
public:
#pragma region Members
	//class ADebugCameraController*	DebugCameraControllerRef;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ADebugCameraController* M_GetDebugCameraControllerRef() const;
	class ADebugCameraController** M_PtrGetDebugCameraControllerRef();
	void M_SetDebugCameraControllerRef(const class ADebugCameraController*& value);

	//class ADebugCameraController*	DebugCameraControllerClass;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ADebugCameraController* M_GetDebugCameraControllerClass() const;
	class ADebugCameraController** M_PtrGetDebugCameraControllerClass();
	void M_SetDebugCameraControllerClass(const class ADebugCameraController*& value);

	//TArray<class UCheatManagerExtension*>	CheatManagerExtensions;		//Offset: 120	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class UCheatManagerExtension*> M_GetCheatManagerExtensions() const;
	TArray<class UCheatManagerExtension*>* M_PtrGetCheatManagerExtensions();
	void M_SetCheatManagerExtensions(const TArray<class UCheatManagerExtension*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}

#pragma region Functions
	void BugIt(struct FString ScreenShotDescription);

	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);

	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString* GoString, struct FString* LocString);

	void ChangeSize(float F);

	void CheatScript(struct FString ScriptName);

	void DamageTarget(float DamageAmount);

	void DebugCapsuleSweep();

	void DebugCapsuleSweepCapture();

	void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);

	void DebugCapsuleSweepClear();

	void DebugCapsuleSweepComplex(bool bTraceComplex);

	void DebugCapsuleSweepPawn();

	void DebugCapsuleSweepSize(float HalfHeight, float Radius);

	void DestroyAll(class AActor* aClass);

	void DestroyAllPawnsExceptTarget();

	void DestroyPawns(class APawn* aClass);

	void DestroyServerStatReplicator();

	void DestroyTarget();

	void DisableDebugCamera();

	void DumpChatState();

	void DumpOnlineSessionState();

	void DumpPartyState();

	void DumpVoiceMutingState();

	void EnableDebugCamera();

	void FlushLog();

	void Fly();

	void FreezeFrame(float Delay);

	void Ghost();

	void God();

	void InvertMouse();

	void LogLoc();

	void OnlyLoadLevel(struct FName PackageName);

	void PlayersOnly();

	void ReceiveEndPlay();

	void ReceiveInitCheatManager();

	void ServerToggleAILogging();

	void SetMouseSensitivityToDefault();

	void SetWorldOrigin();

	void Slomo(float NewTimeDilation);

	void SpawnServerStatReplicator();

	void StreamLevelIn(struct FName PackageName);

	void StreamLevelOut(struct FName PackageName);

	void Summon(struct FString ClassName);

	void Teleport();

	void TestCollisionDistance();

	void ToggleAILogging();

	void ToggleDebugCamera();

	void ToggleServerStatReplicatorClientOverwrite();

	void ToggleServerStatReplicatorUpdateStatNet();

	void UpdateSafeArea();

	void ViewActor(struct FName ActorName);

	void ViewClass(class AActor* DesiredClass);

	void ViewPlayer(struct FString S);

	void ViewSelf();

	void Walk();

#pragma endregion
};
};