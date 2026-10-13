#include "../SDK.h"
#include "MD_CheatManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of playerObjectID
// Declaration: int32_t playerObjectID
int32_t UMD_CheatManager::M_GetplayerObjectID() const {
	return Read<int32_t>((byte*)this + 136);
}
int32_t* UMD_CheatManager::M_PtrGetplayerObjectID() {
	return reinterpret_cast<int32_t*>((byte*)this + 136);
}
void UMD_CheatManager::M_SetplayerObjectID(const int32_t& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of isAuthorized
// Declaration: bool isAuthorized
bool UMD_CheatManager::M_GetisAuthorized() const {
	return Read<bool>((byte*)this + 140);
}
bool* UMD_CheatManager::M_PtrGetisAuthorized() {
	return reinterpret_cast<bool*>((byte*)this + 140);
}
void UMD_CheatManager::M_SetisAuthorized(const bool& value) {
	Write((byte*)this + 140, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.AddPlayerID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: objectID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMD_CheatManager::AddPlayerID(int32_t objectID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.AddPlayerID");

	struct UMD_CheatManager_AddPlayerID_Params {
		int32_t objectID;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMD_CheatManager_AddPlayerID_Params params;
	params.objectID = objectID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.CheatFlow
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Branches	Type: ECheatEvaluationType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CanLaunchCheat	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: desiredControllerID	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::CheatFlow(int32_t ControllerId, ECheatEvaluationType* Branches, bool* CanLaunchCheat, int32_t* desiredControllerID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.CheatFlow");

	struct UMD_CheatManager_CheatFlow_Params {
		int32_t ControllerId;			//Offset: 0 | ElementSize: 4
		ECheatEvaluationType Branches;			//Offset: 4 | ElementSize: 1
		bool CanLaunchCheat;			//Offset: 5 | ElementSize: 1
		int32_t desiredControllerID;			//Offset: 8 | ElementSize: 4
	};
	UMD_CheatManager_CheatFlow_Params params;
	params.ControllerId = ControllerId;

	UObject::ProcessEvent(fn, &params);
	if (Branches != nullptr)
		*Branches = params.Branches;
	if (CanLaunchCheat != nullptr)
		*CanLaunchCheat = params.CanLaunchCheat;
	if (desiredControllerID != nullptr)
		*desiredControllerID = params.desiredControllerID;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.log.steamdeck
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_log_steamdeck() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.log.steamdeck");

	struct UMD_CheatManager_md_log_steamdeck_Params {
	};
	UMD_CheatManager_md_log_steamdeck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.log.platform
// Flags: BlueprintAuthorityOnly, Exec, Event, Public, BlueprintEvent
// Params:
// Name: PlayerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_log_platform(int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.log.platform");

	struct UMD_CheatManager_md_log_platform_Params {
		int32_t PlayerId;			//Offset: 0 | ElementSize: 4
	};
	UMD_CheatManager_md_log_platform_Params params;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.util.cuttrees
// Flags: BlueprintAuthorityOnly, Exec, Event, Public, BlueprintEvent
// Params:
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_util_cuttrees(float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.util.cuttrees");

	struct UMD_CheatManager_md_util_cuttrees_Params {
		float Radius;			//Offset: 0 | ElementSize: 4
	};
	UMD_CheatManager_md_util_cuttrees_Params params;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.online.destroySession
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_online_destroySession() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.online.destroySession");

	struct UMD_CheatManager_md_online_destroySession_Params {
	};
	UMD_CheatManager_md_online_destroySession_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.GetControllerID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: objectID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMD_CheatManager::GetControllerID(int32_t objectID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.GetControllerID");

	struct UMD_CheatManager_GetControllerID_Params {
		int32_t objectID;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UMD_CheatManager_GetControllerID_Params params;
	params.objectID = objectID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.online.login
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_online_login() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.online.login");

	struct UMD_CheatManager_md_online_login_Params {
	};
	UMD_CheatManager_md_online_login_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.online.nativeLogin
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_online_nativeLogin() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.online.nativeLogin");

	struct UMD_CheatManager_md_online_nativeLogin_Params {
	};
	UMD_CheatManager_md_online_nativeLogin_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.online.logout
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_online_logout() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.online.logout");

	struct UMD_CheatManager_md_online_logout_Params {
	};
	UMD_CheatManager_md_online_logout_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.log.saveids
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_log_saveids() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.log.saveids");

	struct UMD_CheatManager_md_log_saveids_Params {
	};
	UMD_CheatManager_md_log_saveids_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.log.userinfo
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
// Name: Message	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_log_userinfo(struct FString Message) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.log.userinfo");

	struct UMD_CheatManager_md_log_userinfo_Params {
		struct FString Message;			//Offset: 0 | ElementSize: 16
	};
	UMD_CheatManager_md_log_userinfo_Params params;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.log.privileges
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UMD_CheatManager::md_log_privileges() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.log.privileges");

	struct UMD_CheatManager_md_log_privileges_Params {
	};
	UMD_CheatManager_md_log_privileges_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.RemovePlayerID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: objectID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMD_CheatManager::RemovePlayerID(int32_t objectID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.RemovePlayerID");

	struct UMD_CheatManager_RemovePlayerID_Params {
		int32_t objectID;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UMD_CheatManager_RemovePlayerID_Params params;
	params.objectID = objectID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.stat.health
// Flags: BlueprintAuthorityOnly, Exec, Event, Public, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_stat_health(float health, int32_t PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.stat.health");

	struct UMD_CheatManager_md_stat_health_Params {
		float health;			//Offset: 0 | ElementSize: 4
		int32_t PlayerId;			//Offset: 4 | ElementSize: 4
	};
	UMD_CheatManager_md_stat_health_Params params;
	params.health = health;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.teleport.npc
// Flags: BlueprintAuthorityOnly, Exec, Event, Public, BlueprintEvent
// Params:
// Name: NPCName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_teleport_npc(struct FString NPCName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.teleport.npc");

	struct UMD_CheatManager_md_teleport_npc_Params {
		struct FString NPCName;			//Offset: 0 | ElementSize: 16
	};
	UMD_CheatManager_md_teleport_npc_Params params;
	params.NPCName = NPCName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_CheatManager.md.online.unlockAchievement
// Flags: Exec, Event, Public, BlueprintEvent
// Params:
// Name: AchievementID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMD_CheatManager::md_online_unlockAchievement(struct FString AchievementID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_CheatManager.md.online.unlockAchievement");

	struct UMD_CheatManager_md_online_unlockAchievement_Params {
		struct FString AchievementID;			//Offset: 0 | ElementSize: 16
	};
	UMD_CheatManager_md_online_unlockAchievement_Params params;
	params.AchievementID = AchievementID;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}