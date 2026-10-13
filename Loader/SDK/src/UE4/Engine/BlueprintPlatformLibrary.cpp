#include "../SDK.h"
#include "BlueprintPlatformLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.CancelLocalNotification
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ActivationEvent	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPlatformLibrary::CancelLocalNotification(struct FString ActivationEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.CancelLocalNotification");

	struct UBlueprintPlatformLibrary_CancelLocalNotification_Params {
		struct FString ActivationEvent;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPlatformLibrary_CancelLocalNotification_Params params;
	params.ActivationEvent = ActivationEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.CancelLocalNotificationById
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: NotificationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPlatformLibrary::CancelLocalNotificationById(int32_t NotificationId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.CancelLocalNotificationById");

	struct UBlueprintPlatformLibrary_CancelLocalNotificationById_Params {
		int32_t NotificationId;			//Offset: 0 | ElementSize: 4
	};
	UBlueprintPlatformLibrary_CancelLocalNotificationById_Params params;
	params.NotificationId = NotificationId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBlueprintPlatformLibrary::ClearAllLocalNotifications() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications");

	struct UBlueprintPlatformLibrary_ClearAllLocalNotifications_Params {
	};
	UBlueprintPlatformLibrary_ClearAllLocalNotifications_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.GetDeviceOrientation
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TEnumAsByte<EScreenOrientation>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EScreenOrientation> UBlueprintPlatformLibrary::GetDeviceOrientation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.GetDeviceOrientation");

	struct UBlueprintPlatformLibrary_GetDeviceOrientation_Params {
		TEnumAsByte<EScreenOrientation> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBlueprintPlatformLibrary_GetDeviceOrientation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.GetLaunchNotification
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: NotificationLaunchedApp	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivationEvent	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FireDate	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPlatformLibrary::GetLaunchNotification(bool* NotificationLaunchedApp, struct FString* ActivationEvent, int32_t* FireDate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.GetLaunchNotification");

	struct UBlueprintPlatformLibrary_GetLaunchNotification_Params {
		bool NotificationLaunchedApp;			//Offset: 0 | ElementSize: 1
		struct FString ActivationEvent;			//Offset: 8 | ElementSize: 16
		int32_t FireDate;			//Offset: 24 | ElementSize: 4
	};
	UBlueprintPlatformLibrary_GetLaunchNotification_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (NotificationLaunchedApp != nullptr)
		*NotificationLaunchedApp = params.NotificationLaunchedApp;
	if (ActivationEvent != nullptr)
		*ActivationEvent = params.ActivationEvent;
	if (FireDate != nullptr)
		*FireDate = params.FireDate;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationAtTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: FireDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocalTime	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Title	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Body	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Action	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActivationEvent	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, struct FString ActivationEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationAtTime");

	struct UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Params {
		struct FDateTime FireDateTime;			//Offset: 0 | ElementSize: 8
		bool LocalTime;			//Offset: 8 | ElementSize: 1
		struct FText Title;			//Offset: 16 | ElementSize: 24
		struct FText Body;			//Offset: 40 | ElementSize: 24
		struct FText Action;			//Offset: 64 | ElementSize: 24
		struct FString ActivationEvent;			//Offset: 88 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 104 | ElementSize: 4
	};
	UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Params params;
	params.FireDateTime = FireDateTime;
	params.LocalTime = LocalTime;
	params.Title = Title;
	params.Body = Body;
	params.Action = Action;
	params.ActivationEvent = ActivationEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: FireDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocalTime	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivationEvent	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime(const struct FDateTime& FireDateTime, bool LocalTime, struct FString ActivationEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime");

	struct UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Params {
		struct FDateTime FireDateTime;			//Offset: 0 | ElementSize: 8
		bool LocalTime;			//Offset: 8 | ElementSize: 1
		struct FString ActivationEvent;			//Offset: 16 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Params params;
	params.FireDateTime = FireDateTime;
	params.LocalTime = LocalTime;
	params.ActivationEvent = ActivationEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: inSecondsFromNow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActivationEvent	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, struct FString ActivationEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow");

	struct UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Params {
		int32_t inSecondsFromNow;			//Offset: 0 | ElementSize: 4
		struct FString ActivationEvent;			//Offset: 8 | ElementSize: 16
	};
	UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Params params;
	params.inSecondsFromNow = inSecondsFromNow;
	params.ActivationEvent = ActivationEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: inSecondsFromNow	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Title	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Body	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Action	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActivationEvent	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, struct FString ActivationEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow");

	struct UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Params {
		int32_t inSecondsFromNow;			//Offset: 0 | ElementSize: 4
		struct FText Title;			//Offset: 8 | ElementSize: 24
		struct FText Body;			//Offset: 32 | ElementSize: 24
		struct FText Action;			//Offset: 56 | ElementSize: 24
		struct FString ActivationEvent;			//Offset: 80 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 96 | ElementSize: 4
	};
	UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Params params;
	params.inSecondsFromNow = inSecondsFromNow;
	params.Title = Title;
	params.Body = Body;
	params.Action = Action;
	params.ActivationEvent = ActivationEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}