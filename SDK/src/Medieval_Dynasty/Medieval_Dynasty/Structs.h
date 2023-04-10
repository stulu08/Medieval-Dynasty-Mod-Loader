#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum Medieval_Dynasty.E_MessageReason
/////////////////////////////////////////////
enum class E_MessageReason : uint8_t {
	ControllerDisconnect = 0,
	UserLogOut = 1,
	SkipMenuForActivity = 2,
	ContinueForActivity = 3,
	AppSus = 4,
	ControllerConnect = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.EBirdMovementMode
/////////////////////////////////////////////
enum class EBirdMovementMode : uint8_t {
	BMM_Grounded = 0,
	BMM_Flying = 1,
	BMM_MAX = 2,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.EAnimalRotationMode
/////////////////////////////////////////////
enum class EAnimalRotationMode : uint8_t {
	ARM_VelocityDirection = 0,
	ARM_LookingDirection = 1,
	ARM_MAX = 2,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.EAnimalMovementMode
/////////////////////////////////////////////
enum class EAnimalMovementMode : uint8_t {
	AMM_None = 0,
	AMM_Grounded = 1,
	AMM_Falling = 2,
	AMM_Ragdoll = 3,
	AMM_MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.ECharacterCardinalDirection
/////////////////////////////////////////////
enum class ECharacterCardinalDirection : uint8_t {
	CCD_North = 0,
	CCD_East = 1,
	CCD_West = 2,
	CCD_South = 3,
	CCD_MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.ECharacterGait
/////////////////////////////////////////////
enum class ECharacterGait : uint8_t {
	CG_Walking = 0,
	CG_Running = 1,
	CG_Sprinting = 2,
	CG_MAX = 3,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.ECharacterStance
/////////////////////////////////////////////
enum class ECharacterStance : uint8_t {
	CS_Standing = 0,
	CS_Crouching = 1,
	CS_Sitting = 2,
	CS_Sleeping = 3,
	CS_MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.ECharacterRotationMode
/////////////////////////////////////////////
enum class ECharacterRotationMode : uint8_t {
	CRM_VelocityDirection = 0,
	CRM_LookingDirection = 1,
	CRM_MAX = 2,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.ECharacterMovementMode
/////////////////////////////////////////////
enum class ECharacterMovementMode : uint8_t {
	CMM_None = 0,
	CMM_Grounded = 1,
	CMM_Falling = 2,
	CMM_Ragdoll = 3,
	CMM_MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.E_GraphicsRHI
/////////////////////////////////////////////
enum class E_GraphicsRHI : uint8_t {
	DX11 = 0,
	DX12 = 1,
	Vulkan = 2,
	NONE = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.MD_SpecificPlatform
/////////////////////////////////////////////
enum class EMD_SpecificPlatform : uint8_t {
	MD_SpecificPlatform__Windows = 0,
	MD_SpecificPlatform__Win_GDK = 1,
	MD_SpecificPlatform__XSX_Lockhart = 2,
	MD_SpecificPlatform__XSX_Anaconda = 3,
	MD_SpecificPlatform__PS5 = 4,
	MD_SpecificPlatform__XBO = 5,
	MD_SpecificPlatform__PS4 = 6,
	MD_SpecificPlatform__SteamDeck = 7,
	MD_SpecificPlatform__MD_MAX = 8,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.MD_GameState
/////////////////////////////////////////////
enum class EMD_GameState : uint8_t {
	MD_GameState__Init = 0,
	MD_GameState__InitialScreen = 1,
	MD_GameState__Menu = 2,
	MD_GameState__Loading = 3,
	MD_GameState__InGame = 4,
	MD_GameState__Paused = 5,
	MD_GameState__MD_MAX = 6,
};
#pragma endregion

#pragma region Structs
struct FST_DoubleActorArray;
struct FLagContraint;
/////////////////////////////////////////////
// ScriptStruct Medieval_Dynasty.ST_DoubleActorArray
// Size 32
/////////////////////////////////////////////
struct FST_DoubleActorArray {
	TArray<class AActor*>	Actors1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class AActor*>	Actors2;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Medieval_Dynasty.LagContraint
// Size 3
/////////////////////////////////////////////
struct FLagContraint {
	bool	X;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	Y;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	Z;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
#pragma endregion
}