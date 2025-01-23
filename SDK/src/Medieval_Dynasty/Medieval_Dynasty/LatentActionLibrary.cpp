#include "../SDK.h"
#include "LatentActionLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.LatentActionLibrary.WaitForLoading
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: WaitForReplicationToSettle	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ULatentActionLibrary::WaitForLoading(class UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, bool WaitForReplicationToSettle) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LatentActionLibrary.WaitForLoading");

	struct ULatentActionLibrary_WaitForLoading_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FLatentActionInfo LatentInfo;			//Offset: 8 | ElementSize: 24
		bool WaitForReplicationToSettle;			//Offset: 32 | ElementSize: 1
	};
	ULatentActionLibrary_WaitForLoading_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.WaitForReplicationToSettle = WaitForReplicationToSettle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}