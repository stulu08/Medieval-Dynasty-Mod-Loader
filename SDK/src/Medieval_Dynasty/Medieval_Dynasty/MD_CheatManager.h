#pragma once
#include "Structs.h"
#include "Engine/CheatManager.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MD_CheatManager
// Super: Class Engine.CheatManager
// Size: 160
// Size inherited: 136
/////////////////////////////////////////////
namespace UE4 {
class UMD_CheatManager : public UCheatManager {
public:
#pragma region Members
	//int32_t	playerObjectID;		//Offset: 136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetplayerObjectID() const;
	int32_t* M_PtrGetplayerObjectID();
	void M_SetplayerObjectID(const int32_t& value);

	//bool	isAuthorized;		//Offset: 140	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetisAuthorized() const;
	bool* M_PtrGetisAuthorized();
	void M_SetisAuthorized(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MD_CheatManager");
		return ptr;
	}

#pragma region Functions
	bool AddPlayerID(int32_t objectID);

	void CheatFlow(int32_t ControllerId, ECheatEvaluationType* Branches, bool* CanLaunchCheat, int32_t* desiredControllerID);

	void md_log_steamdeck();

	void md_log_platform(int32_t PlayerId);

	void md_util_cuttrees(float Radius);

	void md_online_destroySession();

	int32_t GetControllerID(int32_t objectID);

	void md_online_login();

	void md_online_nativeLogin();

	void md_online_logout();

	void md_log_saveids();

	void md_log_userinfo(struct FString Message);

	void md_log_privileges();

	bool RemovePlayerID(int32_t objectID);

	void md_stat_health(float health, int32_t PlayerId);

	void md_teleport_npc(struct FString NPCName);

	void md_online_unlockAchievement(struct FString AchievementID);

#pragma endregion
};
};