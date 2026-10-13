#include "../SDK.h"
#include "ArrayReplicationManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bFinishedLoading
// Declaration: bool bFinishedLoading
bool AArrayReplicationManager::M_GetbFinishedLoading() const {
	return Read<bool>((byte*)this + 544);
}
bool* AArrayReplicationManager::M_PtrGetbFinishedLoading() {
	return reinterpret_cast<bool*>((byte*)this + 544);
}
void AArrayReplicationManager::M_SetbFinishedLoading(const bool& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of bShowDebugs
// Declaration: bool bShowDebugs
bool AArrayReplicationManager::M_GetbShowDebugs() const {
	return Read<bool>((byte*)this + 545);
}
bool* AArrayReplicationManager::M_PtrGetbShowDebugs() {
	return reinterpret_cast<bool*>((byte*)this + 545);
}
void AArrayReplicationManager::M_SetbShowDebugs(const bool& value) {
	Write((byte*)this + 545, value);
}
// Member Getter and Setter of ArraysNames
// Declaration: TMap<struct FName, int32_t> ArraysNames
TMap<struct FName, int32_t> AArrayReplicationManager::M_GetArraysNames() const {
	return Read<TMap<struct FName, int32_t>>((byte*)this + 552);
}
TMap<struct FName, int32_t>* AArrayReplicationManager::M_PtrGetArraysNames() {
	return reinterpret_cast<TMap<struct FName, int32_t>*>((byte*)this + 552);
}
void AArrayReplicationManager::M_SetArraysNames(const TMap<struct FName, int32_t>& value) {
	Write((byte*)this + 552, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.ArrayReplicationManager.Array_HasSpace
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AArrayReplicationManager::Array_HasSpace(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ArrayReplicationManager.Array_HasSpace");

	struct AArrayReplicationManager_Array_HasSpace_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	AArrayReplicationManager_Array_HasSpace_Params params;
	params.TargetArray = TargetArray;

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
// Function Medieval_Dynasty.ArrayReplicationManager.CanBeDespawned
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InStructProperty	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AArrayReplicationManager::CanBeDespawned(struct FName InStructProperty) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ArrayReplicationManager.CanBeDespawned");

	struct AArrayReplicationManager_CanBeDespawned_Params {
		struct FName InStructProperty;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AArrayReplicationManager_CanBeDespawned_Params params;
	params.InStructProperty = InStructProperty;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ArrayReplicationManager.FindArraySizeLimitPerManager
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AArrayReplicationManager::FindArraySizeLimitPerManager() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ArrayReplicationManager.FindArraySizeLimitPerManager");

	struct AArrayReplicationManager_FindArraySizeLimitPerManager_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AArrayReplicationManager_FindArraySizeLimitPerManager_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}