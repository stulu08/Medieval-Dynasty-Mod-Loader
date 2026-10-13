#include "../SDK.h"
#include "SubsystemBlueprintLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SubsystemBlueprintLibrary.GetEngineSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UEngineSubsystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UEngineSubsystem*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UEngineSubsystem* USubsystemBlueprintLibrary::GetEngineSubsystem(class UEngineSubsystem* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SubsystemBlueprintLibrary.GetEngineSubsystem");

	struct USubsystemBlueprintLibrary_GetEngineSubsystem_Params {
		class UEngineSubsystem* Class;			//Offset: 0 | ElementSize: 8
		class UEngineSubsystem* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USubsystemBlueprintLibrary_GetEngineSubsystem_Params params;
	params.Class = Class;

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
// Function Engine.SubsystemBlueprintLibrary.GetGameInstanceSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Class	Type: class UGameInstanceSubsystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UGameInstanceSubsystem*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UGameInstanceSubsystem* USubsystemBlueprintLibrary::GetGameInstanceSubsystem(class UObject* ContextObject, class UGameInstanceSubsystem* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SubsystemBlueprintLibrary.GetGameInstanceSubsystem");

	struct USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Params {
		class UObject* ContextObject;			//Offset: 0 | ElementSize: 8
		class UGameInstanceSubsystem* Class;			//Offset: 8 | ElementSize: 8
		class UGameInstanceSubsystem* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Params params;
	params.ContextObject = ContextObject;
	params.Class = Class;

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
// Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Class	Type: class ULocalPlayerSubsystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class ULocalPlayerSubsystem*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(class UObject* ContextObject, class ULocalPlayerSubsystem* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubsystem");

	struct USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Params {
		class UObject* ContextObject;			//Offset: 0 | ElementSize: 8
		class ULocalPlayerSubsystem* Class;			//Offset: 8 | ElementSize: 8
		class ULocalPlayerSubsystem* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Params params;
	params.ContextObject = ContextObject;
	params.Class = Class;

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
// Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Class	Type: class ULocalPlayerSubsystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class ULocalPlayerSubsystem*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(class APlayerController* PlayerController, class ULocalPlayerSubsystem* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController");

	struct USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		class ULocalPlayerSubsystem* Class;			//Offset: 8 | ElementSize: 8
		class ULocalPlayerSubsystem* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Params params;
	params.PlayerController = PlayerController;
	params.Class = Class;

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
// Function Engine.SubsystemBlueprintLibrary.GetWorldSubsystem
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Class	Type: class UWorldSubsystem*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWorldSubsystem*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWorldSubsystem* USubsystemBlueprintLibrary::GetWorldSubsystem(class UObject* ContextObject, class UWorldSubsystem* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SubsystemBlueprintLibrary.GetWorldSubsystem");

	struct USubsystemBlueprintLibrary_GetWorldSubsystem_Params {
		class UObject* ContextObject;			//Offset: 0 | ElementSize: 8
		class UWorldSubsystem* Class;			//Offset: 8 | ElementSize: 8
		class UWorldSubsystem* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	USubsystemBlueprintLibrary_GetWorldSubsystem_Params params;
	params.ContextObject = ContextObject;
	params.Class = Class;

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