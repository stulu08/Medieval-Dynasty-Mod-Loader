#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.BlueprintPlatformLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}

#pragma region Functions
	static void CancelLocalNotification(struct FString ActivationEvent);

	static void CancelLocalNotificationById(int32_t NotificationId);

	static void ClearAllLocalNotifications();

	static TEnumAsByte<EScreenOrientation> GetDeviceOrientation();

	static void GetLaunchNotification(bool* NotificationLaunchedApp, struct FString* ActivationEvent, int32_t* FireDate);

	static int32_t ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, struct FString ActivationEvent);

	static int32_t ScheduleLocalNotificationBadgeAtTime(const struct FDateTime& FireDateTime, bool LocalTime, struct FString ActivationEvent);

	static void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, struct FString ActivationEvent);

	static int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, struct FString ActivationEvent);

#pragma endregion
};
};