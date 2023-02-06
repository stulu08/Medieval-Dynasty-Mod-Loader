#pragma once
#include "Structs.h"
#include "Engine/Info.h"
/////////////////////////////////////////////
// Class Engine.GameStateBase
// Super: Class Engine.Info
// Size: 624
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AGameStateBase : public AInfo {
public:
#pragma region Members
	//class AGameModeBase*	GameModeClass;		//Offset: 544	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameModeBase* M_GetGameModeClass() const;
	class AGameModeBase** M_PtrGetGameModeClass();
	void M_SetGameModeClass(const class AGameModeBase*& value);

	//class AGameModeBase*	AuthorityGameMode;		//Offset: 552	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameModeBase* M_GetAuthorityGameMode() const;
	class AGameModeBase** M_PtrGetAuthorityGameMode();
	void M_SetAuthorityGameMode(const class AGameModeBase*& value);

	//class ASpectatorPawn*	SpectatorClass;		//Offset: 560	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ASpectatorPawn* M_GetSpectatorClass() const;
	class ASpectatorPawn** M_PtrGetSpectatorClass();
	void M_SetSpectatorClass(const class ASpectatorPawn*& value);

	//TArray<class APlayerState*>	PlayerArray;		//Offset: 568	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<class APlayerState*> M_GetPlayerArray() const;
	TArray<class APlayerState*>* M_PtrGetPlayerArray();
	void M_SetPlayerArray(const TArray<class APlayerState*>& value);

	//bool	bReplicatedHasBegunPlay;		//Offset: 584	Size: 1	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbReplicatedHasBegunPlay() const;
	bool* M_PtrGetbReplicatedHasBegunPlay();
	void M_SetbReplicatedHasBegunPlay(const bool& value);

	//float	ReplicatedWorldTimeSeconds;		//Offset: 588	Size: 4	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetReplicatedWorldTimeSeconds() const;
	float* M_PtrGetReplicatedWorldTimeSeconds();
	void M_SetReplicatedWorldTimeSeconds(const float& value);

	//float	ServerWorldTimeSecondsDelta;		//Offset: 592	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetServerWorldTimeSecondsDelta() const;
	float* M_PtrGetServerWorldTimeSecondsDelta();
	void M_SetServerWorldTimeSecondsDelta(const float& value);

	//float	ServerWorldTimeSecondsUpdateFrequency;		//Offset: 596	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetServerWorldTimeSecondsUpdateFrequency() const;
	float* M_PtrGetServerWorldTimeSecondsUpdateFrequency();
	void M_SetServerWorldTimeSecondsUpdateFrequency(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}

#pragma region Functions
	float GetPlayerRespawnDelay(class AController* Controller)/* const*/;

	float GetPlayerStartTime(class AController* Controller)/* const*/;

	float GetServerWorldTimeSeconds()/* const*/;

	bool HasBegunPlay()/* const*/;

	bool HasMatchEnded()/* const*/;

	bool HasMatchStarted()/* const*/;

	void OnRep_GameModeClass();

	void OnRep_ReplicatedHasBegunPlay();

	void OnRep_ReplicatedWorldTimeSeconds();

	void OnRep_SpectatorClass();

#pragma endregion
};
};