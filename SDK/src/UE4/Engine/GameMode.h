#pragma once
#include "Structs.h"
#include "Engine/GameModeBase.h"
/////////////////////////////////////////////
// Class Engine.GameMode
// Super: Class Engine.GameModeBase
// Size: 776
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class AGameMode : public AGameModeBase {
public:
#pragma region Members
	//struct FName	MatchState;		//Offset: 704	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetMatchState() const;
	struct FName* M_PtrGetMatchState();
	void M_SetMatchState(const struct FName& value);

	//unsigned char	bDelayedStart : 1;		//Offset: 712	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDelayedStart() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDelayedStart();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDelayedStart(const unsigned char& value);

	//int32_t	NumSpectators;		//Offset: 716	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumSpectators() const;
	int32_t* M_PtrGetNumSpectators();
	void M_SetNumSpectators(const int32_t& value);

	//int32_t	NumPlayers;		//Offset: 720	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumPlayers() const;
	int32_t* M_PtrGetNumPlayers();
	void M_SetNumPlayers(const int32_t& value);

	//int32_t	NumBots;		//Offset: 724	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumBots() const;
	int32_t* M_PtrGetNumBots();
	void M_SetNumBots(const int32_t& value);

	//float	MinRespawnDelay;		//Offset: 728	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinRespawnDelay() const;
	float* M_PtrGetMinRespawnDelay();
	void M_SetMinRespawnDelay(const float& value);

	//int32_t	NumTravellingPlayers;		//Offset: 732	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumTravellingPlayers() const;
	int32_t* M_PtrGetNumTravellingPlayers();
	void M_SetNumTravellingPlayers(const int32_t& value);

	//class ULocalMessage*	EngineMessageClass;		//Offset: 736	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ULocalMessage* M_GetEngineMessageClass() const;
	class ULocalMessage** M_PtrGetEngineMessageClass();
	void M_SetEngineMessageClass(const class ULocalMessage*& value);

	//TArray<class APlayerState*>	InactivePlayerArray;		//Offset: 744	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class APlayerState*> M_GetInactivePlayerArray() const;
	TArray<class APlayerState*>* M_PtrGetInactivePlayerArray();
	void M_SetInactivePlayerArray(const TArray<class APlayerState*>& value);

	//float	InactivePlayerStateLifeSpan;		//Offset: 760	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetInactivePlayerStateLifeSpan() const;
	float* M_PtrGetInactivePlayerStateLifeSpan();
	void M_SetInactivePlayerStateLifeSpan(const float& value);

	//int32_t	MaxInactivePlayers;		//Offset: 764	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetMaxInactivePlayers() const;
	int32_t* M_PtrGetMaxInactivePlayers();
	void M_SetMaxInactivePlayers(const int32_t& value);

	//bool	bHandleDedicatedServerReplays;		//Offset: 768	Size: 1	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbHandleDedicatedServerReplays() const;
	bool* M_PtrGetbHandleDedicatedServerReplays();
	void M_SetbHandleDedicatedServerReplays(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}

#pragma region Functions
	void AbortMatch();

	void EndMatch();

	struct FName GetMatchState()/* const*/;

	bool IsMatchInProgress()/* const*/;

	void K2_OnSetMatchState(struct FName NewState);

	bool ReadyToEndMatch();

	bool ReadyToStartMatch();

	void RestartGame();

	void Say(struct FString Msg);

	void SetBandwidthLimit(float AsyncIOBandwidthLimit);

	void StartMatch();

#pragma endregion
};
};