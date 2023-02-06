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
// Enum Medieval_Dynasty.ECardinalDirection
/////////////////////////////////////////////
enum class ECardinalDirection : uint8_t {
	North = 0,
	East = 1,
	West = 2,
	South = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.EGait
/////////////////////////////////////////////
enum class EGait : uint8_t {
	Walking = 0,
	Running = 1,
	Sprinting = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Medieval_Dynasty.EStance
/////////////////////////////////////////////
enum class EStance : uint8_t {
	Standing = 0,
	Crouching = 1,
	Sitting = 2,
	Sleeping = 3,
	MAX = 4,
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
struct FLagContraint;
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