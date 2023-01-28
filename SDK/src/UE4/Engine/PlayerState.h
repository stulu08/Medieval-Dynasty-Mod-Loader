#pragma once
#include "Structs.h"
#include "Engine/Info.h"
/////////////////////////////////////////////
// Class Engine.PlayerState
// Super: Class Engine.Info
// Size: 800
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class APlayerState : public AInfo {
public:
#pragma region Members
	//float	Score;		//Offset: 544	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetScore() const;
	float* M_PtrGetScore();
	void M_SetScore(const float& value);

	//int32_t	PlayerId;		//Offset: 548	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPlayerId() const;
	int32_t* M_PtrGetPlayerId();
	void M_SetPlayerId(const int32_t& value);

	//unsigned char	Ping;		//Offset: 552	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char M_GetPing() const;
	unsigned char* M_PtrGetPing();
	void M_SetPing(const unsigned char& value);

	//unsigned char	bShouldUpdateReplicatedPing : 1;		//Offset: 554	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldUpdateReplicatedPing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldUpdateReplicatedPing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldUpdateReplicatedPing(const unsigned char& value);

	//unsigned char	bIsSpectator : 1;		//Offset: 554	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsSpectator() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsSpectator();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsSpectator(const unsigned char& value);

	//unsigned char	bOnlySpectator : 1;		//Offset: 554	Size: 1	Flags: Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOnlySpectator() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOnlySpectator();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOnlySpectator(const unsigned char& value);

	//unsigned char	bIsABot : 1;		//Offset: 554	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsABot() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsABot();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsABot(const unsigned char& value);

	//unsigned char	bIsInactive : 1;		//Offset: 554	Size: 1	Flags: Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsInactive() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsInactive();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsInactive(const unsigned char& value);

	//unsigned char	bFromPreviousLevel : 1;		//Offset: 554	Size: 1	Flags: Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFromPreviousLevel() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFromPreviousLevel();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFromPreviousLevel(const unsigned char& value);

	//int32_t	StartTime;		//Offset: 556	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetStartTime() const;
	int32_t* M_PtrGetStartTime();
	void M_SetStartTime(const int32_t& value);

	//class ULocalMessage*	EngineMessageClass;		//Offset: 560	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ULocalMessage* M_GetEngineMessageClass() const;
	class ULocalMessage** M_PtrGetEngineMessageClass();
	void M_SetEngineMessageClass(const class ULocalMessage*& value);

	//struct FString	SavedNetworkAddress;		//Offset: 576	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetSavedNetworkAddress() const;
	struct FString* M_PtrGetSavedNetworkAddress();
	void M_SetSavedNetworkAddress(const struct FString& value);

	//struct FUniqueNetIdRepl	UniqueId;		//Offset: 592	Size: 40	Flags: Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FUniqueNetIdRepl M_GetUniqueId() const;
	struct FUniqueNetIdRepl* M_PtrGetUniqueId();
	void M_SetUniqueId(const struct FUniqueNetIdRepl& value);

	//class APawn*	PawnPrivate;		//Offset: 640	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class APawn* M_GetPawnPrivate() const;
	class APawn** M_PtrGetPawnPrivate();
	void M_SetPawnPrivate(const class APawn*& value);

	//struct FString	PlayerNamePrivate;		//Offset: 768	Size: 16	Flags: Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString M_GetPlayerNamePrivate() const;
	struct FString* M_PtrGetPlayerNamePrivate();
	void M_SetPlayerNamePrivate(const struct FString& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}

#pragma region Functions
	struct FString GetPlayerName()/* const*/;

	bool IsOnlyASpectator()/* const*/;

	void OnRep_bIsInactive();

	void OnRep_PlayerId();

	void OnRep_PlayerName();

	void OnRep_Score();

	void OnRep_UniqueId();

	void ReceiveCopyProperties(class APlayerState* NewPlayerState);

	void ReceiveOverrideWith(class APlayerState* OldPlayerState);

#pragma endregion
};
};