#include "../SDK.h"
#include "KismetStringLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.BuildString_Bool
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InBool	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Bool");

	struct UKismetStringLibrary_BuildString_Bool_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		bool InBool;			//Offset: 32 | ElementSize: 1
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Bool_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InBool = InBool;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Color
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Color(struct FString AppendTo, struct FString Prefix, struct FLinearColor InColor, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Color");

	struct UKismetStringLibrary_BuildString_Color_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FLinearColor InColor;			//Offset: 32 | ElementSize: 16
		struct FString Suffix;			//Offset: 48 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 64 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Color_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InColor = InColor;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Float
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InFloat	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Float");

	struct UKismetStringLibrary_BuildString_Float_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		float InFloat;			//Offset: 32 | ElementSize: 4
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Float_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InFloat = InFloat;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Int
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inInt	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t inInt, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Int");

	struct UKismetStringLibrary_BuildString_Int_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		int32_t inInt;			//Offset: 32 | ElementSize: 4
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Int_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.inInt = inInt;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_IntVector
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InIntVector	Type: struct FIntVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_IntVector(struct FString AppendTo, struct FString Prefix, struct FIntVector InIntVector, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_IntVector");

	struct UKismetStringLibrary_BuildString_IntVector_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FIntVector InIntVector;			//Offset: 32 | ElementSize: 12
		struct FString Suffix;			//Offset: 48 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 64 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_IntVector_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InIntVector = InIntVector;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Name
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Name");

	struct UKismetStringLibrary_BuildString_Name_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FName InName;			//Offset: 32 | ElementSize: 8
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Name_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InName = InName;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Object
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InObj	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Object(struct FString AppendTo, struct FString Prefix, class UObject* InObj, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Object");

	struct UKismetStringLibrary_BuildString_Object_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		class UObject* InObj;			//Offset: 32 | ElementSize: 8
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Object_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InObj = InObj;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Rotator
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Rotator(struct FString AppendTo, struct FString Prefix, struct FRotator InRot, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Rotator");

	struct UKismetStringLibrary_BuildString_Rotator_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FRotator InRot;			//Offset: 32 | ElementSize: 12
		struct FString Suffix;			//Offset: 48 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 64 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Rotator_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InRot = InRot;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Vector
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Vector(struct FString AppendTo, struct FString Prefix, struct FVector InVector, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Vector");

	struct UKismetStringLibrary_BuildString_Vector_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FVector InVector;			//Offset: 32 | ElementSize: 12
		struct FString Suffix;			//Offset: 48 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 64 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Vector_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InVector = InVector;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.BuildString_Vector2d
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: AppendTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InVector2D	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Suffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, struct FVector2D InVector2D, struct FString Suffix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.BuildString_Vector2d");

	struct UKismetStringLibrary_BuildString_Vector2d_Params {
		struct FString AppendTo;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FVector2D InVector2D;			//Offset: 32 | ElementSize: 8
		struct FString Suffix;			//Offset: 40 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_BuildString_Vector2d_Params params;
	params.AppendTo = AppendTo;
	params.Prefix = Prefix;
	params.InVector2D = InVector2D;
	params.Suffix = Suffix;

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
// Function Engine.KismetStringLibrary.Concat_StrStr
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Concat_StrStr(struct FString A, struct FString B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Concat_StrStr");

	struct UKismetStringLibrary_Concat_StrStr_Params {
		struct FString A;			//Offset: 0 | ElementSize: 16
		struct FString B;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UKismetStringLibrary_Concat_StrStr_Params params;
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
// Function Engine.KismetStringLibrary.Contains
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SearchIn	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Substring	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseCase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSearchFromEnd	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::Contains(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Contains");

	struct UKismetStringLibrary_Contains_Params {
		struct FString SearchIn;			//Offset: 0 | ElementSize: 16
		struct FString Substring;			//Offset: 16 | ElementSize: 16
		bool bUseCase;			//Offset: 32 | ElementSize: 1
		bool bSearchFromEnd;			//Offset: 33 | ElementSize: 1
		bool ReturnValue;			//Offset: 34 | ElementSize: 1
	};
	UKismetStringLibrary_Contains_Params params;
	params.SearchIn = SearchIn;
	params.Substring = Substring;
	params.bUseCase = bUseCase;
	params.bSearchFromEnd = bSearchFromEnd;

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
// Function Engine.KismetStringLibrary.Conv_BoolToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InBool	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_BoolToString(bool InBool) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_BoolToString");

	struct UKismetStringLibrary_Conv_BoolToString_Params {
		bool InBool;			//Offset: 0 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_BoolToString_Params params;
	params.InBool = InBool;

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
// Function Engine.KismetStringLibrary.Conv_ByteToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InByte	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_ByteToString(unsigned char InByte) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_ByteToString");

	struct UKismetStringLibrary_Conv_ByteToString_Params {
		unsigned char InByte;			//Offset: 0 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_ByteToString_Params params;
	params.InByte = InByte;

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
// Function Engine.KismetStringLibrary.Conv_ColorToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_ColorToString(struct FLinearColor InColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_ColorToString");

	struct UKismetStringLibrary_Conv_ColorToString_Params {
		struct FLinearColor InColor;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_ColorToString_Params params;
	params.InColor = InColor;

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
// Function Engine.KismetStringLibrary.Conv_FloatToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InFloat	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_FloatToString(float InFloat) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_FloatToString");

	struct UKismetStringLibrary_Conv_FloatToString_Params {
		float InFloat;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_FloatToString_Params params;
	params.InFloat = InFloat;

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
// Function Engine.KismetStringLibrary.Conv_IntPointToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InIntPoint	Type: struct FIntPoint	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_IntPointToString(struct FIntPoint InIntPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_IntPointToString");

	struct UKismetStringLibrary_Conv_IntPointToString_Params {
		struct FIntPoint InIntPoint;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_IntPointToString_Params params;
	params.InIntPoint = InIntPoint;

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
// Function Engine.KismetStringLibrary.Conv_IntToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inInt	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_IntToString(int32_t inInt) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_IntToString");

	struct UKismetStringLibrary_Conv_IntToString_Params {
		int32_t inInt;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_IntToString_Params params;
	params.inInt = inInt;

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
// Function Engine.KismetStringLibrary.Conv_IntVectorToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InIntVec	Type: struct FIntVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_IntVectorToString(struct FIntVector InIntVec) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_IntVectorToString");

	struct UKismetStringLibrary_Conv_IntVectorToString_Params {
		struct FIntVector InIntVec;			//Offset: 0 | ElementSize: 12
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_IntVectorToString_Params params;
	params.InIntVec = InIntVec;

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
// Function Engine.KismetStringLibrary.Conv_MatrixToString
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InMatrix	Type: struct FMatrix	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_MatrixToString(const struct FMatrix& InMatrix) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_MatrixToString");

	struct UKismetStringLibrary_Conv_MatrixToString_Params {
		struct FMatrix InMatrix;			//Offset: 0 | ElementSize: 64
		struct FString ReturnValue;			//Offset: 64 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_MatrixToString_Params params;
	params.InMatrix = InMatrix;

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
// Function Engine.KismetStringLibrary.Conv_NameToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_NameToString(struct FName InName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_NameToString");

	struct UKismetStringLibrary_Conv_NameToString_Params {
		struct FName InName;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_NameToString_Params params;
	params.InName = InName;

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
// Function Engine.KismetStringLibrary.Conv_ObjectToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InObj	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_ObjectToString(class UObject* InObj) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_ObjectToString");

	struct UKismetStringLibrary_Conv_ObjectToString_Params {
		class UObject* InObj;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_ObjectToString_Params params;
	params.InObj = InObj;

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
// Function Engine.KismetStringLibrary.Conv_RotatorToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_RotatorToString(struct FRotator InRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_RotatorToString");

	struct UKismetStringLibrary_Conv_RotatorToString_Params {
		struct FRotator InRot;			//Offset: 0 | ElementSize: 12
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_RotatorToString_Params params;
	params.InRot = InRot;

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
// Function Engine.KismetStringLibrary.Conv_StringToColor
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutConvertedColor	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetStringLibrary::Conv_StringToColor(struct FString inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToColor");

	struct UKismetStringLibrary_Conv_StringToColor_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FLinearColor OutConvertedColor;			//Offset: 16 | ElementSize: 16
		bool OutIsValid;			//Offset: 32 | ElementSize: 1
	};
	UKismetStringLibrary_Conv_StringToColor_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutConvertedColor != nullptr)
		*OutConvertedColor = params.OutConvertedColor;
	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.Conv_StringToFloat
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetStringLibrary::Conv_StringToFloat(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToFloat");

	struct UKismetStringLibrary_Conv_StringToFloat_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetStringLibrary_Conv_StringToFloat_Params params;
	params.inString = inString;

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
// Function Engine.KismetStringLibrary.Conv_StringToInt
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::Conv_StringToInt(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToInt");

	struct UKismetStringLibrary_Conv_StringToInt_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetStringLibrary_Conv_StringToInt_Params params;
	params.inString = inString;

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
// Function Engine.KismetStringLibrary.Conv_StringToName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UKismetStringLibrary::Conv_StringToName(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToName");

	struct UKismetStringLibrary_Conv_StringToName_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FName ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UKismetStringLibrary_Conv_StringToName_Params params;
	params.inString = inString;

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
// Function Engine.KismetStringLibrary.Conv_StringToRotator
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutConvertedRotator	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: OutIsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetStringLibrary::Conv_StringToRotator(struct FString inString, struct FRotator* OutConvertedRotator, bool* OutIsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToRotator");

	struct UKismetStringLibrary_Conv_StringToRotator_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FRotator OutConvertedRotator;			//Offset: 16 | ElementSize: 12
		bool OutIsValid;			//Offset: 28 | ElementSize: 1
	};
	UKismetStringLibrary_Conv_StringToRotator_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutConvertedRotator != nullptr)
		*OutConvertedRotator = params.OutConvertedRotator;
	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.Conv_StringToVector
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutConvertedVector	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetStringLibrary::Conv_StringToVector(struct FString inString, struct FVector* OutConvertedVector, bool* OutIsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToVector");

	struct UKismetStringLibrary_Conv_StringToVector_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FVector OutConvertedVector;			//Offset: 16 | ElementSize: 12
		bool OutIsValid;			//Offset: 28 | ElementSize: 1
	};
	UKismetStringLibrary_Conv_StringToVector_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutConvertedVector != nullptr)
		*OutConvertedVector = params.OutConvertedVector;
	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.Conv_StringToVector2D
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutConvertedVector2D	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetStringLibrary::Conv_StringToVector2D(struct FString inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_StringToVector2D");

	struct UKismetStringLibrary_Conv_StringToVector2D_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FVector2D OutConvertedVector2D;			//Offset: 16 | ElementSize: 8
		bool OutIsValid;			//Offset: 24 | ElementSize: 1
	};
	UKismetStringLibrary_Conv_StringToVector2D_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutConvertedVector2D != nullptr)
		*OutConvertedVector2D = params.OutConvertedVector2D;
	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.Conv_TransformToString
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InTrans	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_TransformToString(const struct FTransform& InTrans) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_TransformToString");

	struct UKismetStringLibrary_Conv_TransformToString_Params {
		struct FTransform InTrans;			//Offset: 0 | ElementSize: 48
		struct FString ReturnValue;			//Offset: 48 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_TransformToString_Params params;
	params.InTrans = InTrans;

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
// Function Engine.KismetStringLibrary.Conv_Vector2dToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVec	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_Vector2dToString(struct FVector2D InVec) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_Vector2dToString");

	struct UKismetStringLibrary_Conv_Vector2dToString_Params {
		struct FVector2D InVec;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_Vector2dToString_Params params;
	params.InVec = InVec;

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
// Function Engine.KismetStringLibrary.Conv_VectorToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVec	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Conv_VectorToString(struct FVector InVec) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Conv_VectorToString");

	struct UKismetStringLibrary_Conv_VectorToString_Params {
		struct FVector InVec;			//Offset: 0 | ElementSize: 12
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Conv_VectorToString_Params params;
	params.InVec = InVec;

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
// Function Engine.KismetStringLibrary.CullArray
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inArray	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::CullArray(struct FString SourceString, TArray<struct FString>* inArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.CullArray");

	struct UKismetStringLibrary_CullArray_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> inArray;			//Offset: 16 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UKismetStringLibrary_CullArray_Params params;
	params.SourceString = SourceString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (inArray != nullptr)
		*inArray = params.inArray;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.EndsWith
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSuffix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::EndsWith(struct FString SourceString, struct FString InSuffix, TEnumAsByte<ESearchCase> SearchCase) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.EndsWith");

	struct UKismetStringLibrary_EndsWith_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString InSuffix;			//Offset: 16 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 32 | ElementSize: 1
		bool ReturnValue;			//Offset: 33 | ElementSize: 1
	};
	UKismetStringLibrary_EndsWith_Params params;
	params.SourceString = SourceString;
	params.InSuffix = InSuffix;
	params.SearchCase = SearchCase;

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
// Function Engine.KismetStringLibrary.EqualEqual_StriStri
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::EqualEqual_StriStri(struct FString A, struct FString B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.EqualEqual_StriStri");

	struct UKismetStringLibrary_EqualEqual_StriStri_Params {
		struct FString A;			//Offset: 0 | ElementSize: 16
		struct FString B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetStringLibrary_EqualEqual_StriStri_Params params;
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
// Function Engine.KismetStringLibrary.EqualEqual_StrStr
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::EqualEqual_StrStr(struct FString A, struct FString B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.EqualEqual_StrStr");

	struct UKismetStringLibrary_EqualEqual_StrStr_Params {
		struct FString A;			//Offset: 0 | ElementSize: 16
		struct FString B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetStringLibrary_EqualEqual_StrStr_Params params;
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
// Function Engine.KismetStringLibrary.FindSubstring
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SearchIn	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Substring	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseCase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSearchFromEnd	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartPosition	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.FindSubstring");

	struct UKismetStringLibrary_FindSubstring_Params {
		struct FString SearchIn;			//Offset: 0 | ElementSize: 16
		struct FString Substring;			//Offset: 16 | ElementSize: 16
		bool bUseCase;			//Offset: 32 | ElementSize: 1
		bool bSearchFromEnd;			//Offset: 33 | ElementSize: 1
		int32_t StartPosition;			//Offset: 36 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 40 | ElementSize: 4
	};
	UKismetStringLibrary_FindSubstring_Params params;
	params.SearchIn = SearchIn;
	params.Substring = Substring;
	params.bUseCase = bUseCase;
	params.bSearchFromEnd = bSearchFromEnd;
	params.StartPosition = StartPosition;

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
// Function Engine.KismetStringLibrary.GetCharacterArrayFromString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UKismetStringLibrary::GetCharacterArrayFromString(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.GetCharacterArrayFromString");

	struct UKismetStringLibrary_GetCharacterArrayFromString_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_GetCharacterArrayFromString_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.GetCharacterAsNumber
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::GetCharacterAsNumber(struct FString SourceString, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.GetCharacterAsNumber");

	struct UKismetStringLibrary_GetCharacterAsNumber_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	UKismetStringLibrary_GetCharacterAsNumber_Params params;
	params.SourceString = SourceString;
	params.Index = Index;

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
// Function Engine.KismetStringLibrary.GetSubstring
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Length	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.GetSubstring");

	struct UKismetStringLibrary_GetSubstring_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t StartIndex;			//Offset: 16 | ElementSize: 4
		int32_t Length;			//Offset: 20 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_GetSubstring_Params params;
	params.SourceString = SourceString;
	params.StartIndex = StartIndex;
	params.Length = Length;

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
// Function Engine.KismetStringLibrary.IsEmpty
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::IsEmpty(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.IsEmpty");

	struct UKismetStringLibrary_IsEmpty_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetStringLibrary_IsEmpty_Params params;
	params.inString = inString;

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
// Function Engine.KismetStringLibrary.IsNumeric
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::IsNumeric(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.IsNumeric");

	struct UKismetStringLibrary_IsNumeric_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetStringLibrary_IsNumeric_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.JoinStringArray
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceArray	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Separator	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::JoinStringArray(const TArray<struct FString>& SourceArray, struct FString Separator) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.JoinStringArray");

	struct UKismetStringLibrary_JoinStringArray_Params {
		TArray<struct FString> SourceArray;			//Offset: 0 | ElementSize: 16
		struct FString Separator;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UKismetStringLibrary_JoinStringArray_Params params;
	params.SourceArray = SourceArray;
	params.Separator = Separator;

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
// Function Engine.KismetStringLibrary.Left
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Count	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Left(struct FString SourceString, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Left");

	struct UKismetStringLibrary_Left_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Count;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_Left_Params params;
	params.SourceString = SourceString;
	params.Count = Count;

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
// Function Engine.KismetStringLibrary.LeftChop
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Count	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::LeftChop(struct FString SourceString, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.LeftChop");

	struct UKismetStringLibrary_LeftChop_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Count;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_LeftChop_Params params;
	params.SourceString = SourceString;
	params.Count = Count;

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
// Function Engine.KismetStringLibrary.LeftPad
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChCount	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::LeftPad(struct FString SourceString, int32_t ChCount) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.LeftPad");

	struct UKismetStringLibrary_LeftPad_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t ChCount;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_LeftPad_Params params;
	params.SourceString = SourceString;
	params.ChCount = ChCount;

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
// Function Engine.KismetStringLibrary.Len
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::Len(struct FString S) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Len");

	struct UKismetStringLibrary_Len_Params {
		struct FString S;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetStringLibrary_Len_Params params;
	params.S = S;

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
// Function Engine.KismetStringLibrary.MatchesWildcard
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Wildcard	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::MatchesWildcard(struct FString SourceString, struct FString Wildcard, TEnumAsByte<ESearchCase> SearchCase) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.MatchesWildcard");

	struct UKismetStringLibrary_MatchesWildcard_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString Wildcard;			//Offset: 16 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 32 | ElementSize: 1
		bool ReturnValue;			//Offset: 33 | ElementSize: 1
	};
	UKismetStringLibrary_MatchesWildcard_Params params;
	params.SourceString = SourceString;
	params.Wildcard = Wildcard;
	params.SearchCase = SearchCase;

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
// Function Engine.KismetStringLibrary.Mid
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Count	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Mid(struct FString SourceString, int32_t Start, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Mid");

	struct UKismetStringLibrary_Mid_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Start;			//Offset: 16 | ElementSize: 4
		int32_t Count;			//Offset: 20 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_Mid_Params params;
	params.SourceString = SourceString;
	params.Start = Start;
	params.Count = Count;

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
// Function Engine.KismetStringLibrary.NotEqual_StriStri
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::NotEqual_StriStri(struct FString A, struct FString B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.NotEqual_StriStri");

	struct UKismetStringLibrary_NotEqual_StriStri_Params {
		struct FString A;			//Offset: 0 | ElementSize: 16
		struct FString B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetStringLibrary_NotEqual_StriStri_Params params;
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
// Function Engine.KismetStringLibrary.NotEqual_StrStr
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::NotEqual_StrStr(struct FString A, struct FString B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.NotEqual_StrStr");

	struct UKismetStringLibrary_NotEqual_StrStr_Params {
		struct FString A;			//Offset: 0 | ElementSize: 16
		struct FString B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetStringLibrary_NotEqual_StrStr_Params params;
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
// Function Engine.KismetStringLibrary.ParseIntoArray
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delimiter	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CullEmptyStrings	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UKismetStringLibrary::ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.ParseIntoArray");

	struct UKismetStringLibrary_ParseIntoArray_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString Delimiter;			//Offset: 16 | ElementSize: 16
		bool CullEmptyStrings;			//Offset: 32 | ElementSize: 1
		TArray<struct FString> ReturnValue;			//Offset: 40 | ElementSize: 16
	};
	UKismetStringLibrary_ParseIntoArray_Params params;
	params.SourceString = SourceString;
	params.Delimiter = Delimiter;
	params.CullEmptyStrings = CullEmptyStrings;

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
// Function Engine.KismetStringLibrary.Replace
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: from	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: to	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Replace(struct FString SourceString, struct FString from, struct FString to, TEnumAsByte<ESearchCase> SearchCase) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Replace");

	struct UKismetStringLibrary_Replace_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString from;			//Offset: 16 | ElementSize: 16
		struct FString to;			//Offset: 32 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 48 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UKismetStringLibrary_Replace_Params params;
	params.SourceString = SourceString;
	params.from = from;
	params.to = to;
	params.SearchCase = SearchCase;

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
// Function Engine.KismetStringLibrary.ReplaceInline
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchText	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReplacementText	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetStringLibrary::ReplaceInline(struct FString* SourceString, struct FString SearchText, struct FString ReplacementText, TEnumAsByte<ESearchCase> SearchCase) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.ReplaceInline");

	struct UKismetStringLibrary_ReplaceInline_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString SearchText;			//Offset: 16 | ElementSize: 16
		struct FString ReplacementText;			//Offset: 32 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 48 | ElementSize: 1
		int32_t ReturnValue;			//Offset: 52 | ElementSize: 4
	};
	UKismetStringLibrary_ReplaceInline_Params params;
	params.SearchText = SearchText;
	params.ReplacementText = ReplacementText;
	params.SearchCase = SearchCase;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SourceString != nullptr)
		*SourceString = params.SourceString;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.Reverse
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Reverse(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Reverse");

	struct UKismetStringLibrary_Reverse_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Reverse_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.Right
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Count	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Right(struct FString SourceString, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Right");

	struct UKismetStringLibrary_Right_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Count;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_Right_Params params;
	params.SourceString = SourceString;
	params.Count = Count;

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
// Function Engine.KismetStringLibrary.RightChop
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Count	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::RightChop(struct FString SourceString, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.RightChop");

	struct UKismetStringLibrary_RightChop_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t Count;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_RightChop_Params params;
	params.SourceString = SourceString;
	params.Count = Count;

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
// Function Engine.KismetStringLibrary.RightPad
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChCount	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::RightPad(struct FString SourceString, int32_t ChCount) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.RightPad");

	struct UKismetStringLibrary_RightPad_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		int32_t ChCount;			//Offset: 16 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetStringLibrary_RightPad_Params params;
	params.SourceString = SourceString;
	params.ChCount = ChCount;

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
// Function Engine.KismetStringLibrary.Split
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InStr	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LeftS	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RightS	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchDir	Type: TEnumAsByte<ESearchDir>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::Split(struct FString SourceString, struct FString InStr, struct FString* LeftS, struct FString* RightS, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Split");

	struct UKismetStringLibrary_Split_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString InStr;			//Offset: 16 | ElementSize: 16
		struct FString LeftS;			//Offset: 32 | ElementSize: 16
		struct FString RightS;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 64 | ElementSize: 1
		TEnumAsByte<ESearchDir> SearchDir;			//Offset: 65 | ElementSize: 1
		bool ReturnValue;			//Offset: 66 | ElementSize: 1
	};
	UKismetStringLibrary_Split_Params params;
	params.SourceString = SourceString;
	params.InStr = InStr;
	params.SearchCase = SearchCase;
	params.SearchDir = SearchDir;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (LeftS != nullptr)
		*LeftS = params.LeftS;
	if (RightS != nullptr)
		*RightS = params.RightS;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetStringLibrary.StartsWith
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPrefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchCase	Type: TEnumAsByte<ESearchCase>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetStringLibrary::StartsWith(struct FString SourceString, struct FString InPrefix, TEnumAsByte<ESearchCase> SearchCase) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.StartsWith");

	struct UKismetStringLibrary_StartsWith_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString InPrefix;			//Offset: 16 | ElementSize: 16
		TEnumAsByte<ESearchCase> SearchCase;			//Offset: 32 | ElementSize: 1
		bool ReturnValue;			//Offset: 33 | ElementSize: 1
	};
	UKismetStringLibrary_StartsWith_Params params;
	params.SourceString = SourceString;
	params.InPrefix = InPrefix;
	params.SearchCase = SearchCase;

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
// Function Engine.KismetStringLibrary.TimeSecondsToString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::TimeSecondsToString(float InSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.TimeSecondsToString");

	struct UKismetStringLibrary_TimeSecondsToString_Params {
		float InSeconds;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetStringLibrary_TimeSecondsToString_Params params;
	params.InSeconds = InSeconds;

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
// Function Engine.KismetStringLibrary.ToLower
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::ToLower(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.ToLower");

	struct UKismetStringLibrary_ToLower_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_ToLower_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.ToUpper
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::ToUpper(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.ToUpper");

	struct UKismetStringLibrary_ToUpper_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_ToUpper_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.Trim
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::Trim(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.Trim");

	struct UKismetStringLibrary_Trim_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_Trim_Params params;
	params.SourceString = SourceString;

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
// Function Engine.KismetStringLibrary.TrimTrailing
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SourceString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetStringLibrary::TrimTrailing(struct FString SourceString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringLibrary.TrimTrailing");

	struct UKismetStringLibrary_TrimTrailing_Params {
		struct FString SourceString;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetStringLibrary_TrimTrailing_Params params;
	params.SourceString = SourceString;

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