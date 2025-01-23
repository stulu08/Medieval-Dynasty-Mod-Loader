#include "../SDK.h"
#include "CLeaderboardBlueprintLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CLeaderboardBlueprintLibrary.WriteLeaderboardInteger
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StatName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StatValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCLeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, struct FName StatName, int32_t StatValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CLeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	struct UCLeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		struct FName StatName;			//Offset: 8 | ElementSize: 8
		int32_t StatValue;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UCLeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

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