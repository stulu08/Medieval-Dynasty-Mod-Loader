#include "../SDK.h"
#include "KismetGuidLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetGuidLibrary.Conv_GuidToString
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InGuid	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetGuidLibrary::Conv_GuidToString(const struct FGuid& InGuid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.Conv_GuidToString");

	struct UKismetGuidLibrary_Conv_GuidToString_Params {
		struct FGuid InGuid;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetGuidLibrary_Conv_GuidToString_Params params;
	params.InGuid = InGuid;

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
// Function Engine.KismetGuidLibrary.EqualEqual_GuidGuid
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetGuidLibrary::EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.EqualEqual_GuidGuid");

	struct UKismetGuidLibrary_EqualEqual_GuidGuid_Params {
		struct FGuid A;			//Offset: 0 | ElementSize: 16
		struct FGuid B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetGuidLibrary_EqualEqual_GuidGuid_Params params;
	params.A = A;
	params.B = B;

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
// Function Engine.KismetGuidLibrary.Invalidate_Guid
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InGuid	Type: struct FGuid	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetGuidLibrary::Invalidate_Guid(struct FGuid* InGuid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.Invalidate_Guid");

	struct UKismetGuidLibrary_Invalidate_Guid_Params {
		struct FGuid InGuid;			//Offset: 0 | ElementSize: 16
	};
	UKismetGuidLibrary_Invalidate_Guid_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InGuid != nullptr)
		*InGuid = params.InGuid;
}

/////////////////////////////////////////////
// Function Engine.KismetGuidLibrary.IsValid_Guid
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InGuid	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetGuidLibrary::IsValid_Guid(const struct FGuid& InGuid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.IsValid_Guid");

	struct UKismetGuidLibrary_IsValid_Guid_Params {
		struct FGuid InGuid;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetGuidLibrary_IsValid_Guid_Params params;
	params.InGuid = InGuid;

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
// Function Engine.KismetGuidLibrary.NewGuid
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FGuid	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGuid UKismetGuidLibrary::NewGuid() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.NewGuid");

	struct UKismetGuidLibrary_NewGuid_Params {
		struct FGuid ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetGuidLibrary_NewGuid_Params params;

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
// Function Engine.KismetGuidLibrary.NotEqual_GuidGuid
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FGuid	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetGuidLibrary::NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.NotEqual_GuidGuid");

	struct UKismetGuidLibrary_NotEqual_GuidGuid_Params {
		struct FGuid A;			//Offset: 0 | ElementSize: 16
		struct FGuid B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetGuidLibrary_NotEqual_GuidGuid_Params params;
	params.A = A;
	params.B = B;

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
// Function Engine.KismetGuidLibrary.Parse_StringToGuid
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: GuidString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutGuid	Type: struct FGuid	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetGuidLibrary::Parse_StringToGuid(struct FString GuidString, struct FGuid* OutGuid, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetGuidLibrary.Parse_StringToGuid");

	struct UKismetGuidLibrary_Parse_StringToGuid_Params {
		struct FString GuidString;			//Offset: 0 | ElementSize: 16
		struct FGuid OutGuid;			//Offset: 16 | ElementSize: 16
		bool Success;			//Offset: 32 | ElementSize: 1
	};
	UKismetGuidLibrary_Parse_StringToGuid_Params params;
	params.GuidString = GuidString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutGuid != nullptr)
		*OutGuid = params.OutGuid;
	if (Success != nullptr)
		*Success = params.Success;
}

#pragma endregion
}