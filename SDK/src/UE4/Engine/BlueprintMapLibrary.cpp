#include "../SDK.h"
#include "BlueprintMapLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.Map_Add
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Key	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintMapLibrary::Map_Add(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key, const int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Add");

	struct UBlueprintMapLibrary_Map_Add_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		int32_t Key;			//Offset: 80 | ElementSize: 4
		int32_t Value;			//Offset: 84 | ElementSize: 4
	};
	UBlueprintMapLibrary_Map_Add_Params params;
	params.TargetMap = TargetMap;
	params.Key = Key;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.Map_Clear
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintMapLibrary::Map_Clear(const TMap<int32_t, int32_t>& TargetMap) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Clear");

	struct UBlueprintMapLibrary_Map_Clear_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
	};
	UBlueprintMapLibrary_Map_Clear_Params params;
	params.TargetMap = TargetMap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.Map_Contains
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Key	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintMapLibrary::Map_Contains(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Contains");

	struct UBlueprintMapLibrary_Map_Contains_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		int32_t Key;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBlueprintMapLibrary_Map_Contains_Params params;
	params.TargetMap = TargetMap;
	params.Key = Key;

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
// Function Engine.BlueprintMapLibrary.Map_Find
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Key	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintMapLibrary::Map_Find(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key, int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Find");

	struct UBlueprintMapLibrary_Map_Find_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		int32_t Key;			//Offset: 80 | ElementSize: 4
		int32_t Value;			//Offset: 84 | ElementSize: 4
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBlueprintMapLibrary_Map_Find_Params params;
	params.TargetMap = TargetMap;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Value != nullptr)
		*Value = params.Value;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.Map_Keys
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Keys	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintMapLibrary::Map_Keys(const TMap<int32_t, int32_t>& TargetMap, TArray<int32_t>* Keys) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Keys");

	struct UBlueprintMapLibrary_Map_Keys_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		TArray<int32_t> Keys;			//Offset: 80 | ElementSize: 16
	};
	UBlueprintMapLibrary_Map_Keys_Params params;
	params.TargetMap = TargetMap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Keys != nullptr)
		*Keys = params.Keys;
}

/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.Map_Length
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBlueprintMapLibrary::Map_Length(const TMap<int32_t, int32_t>& TargetMap) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Length");

	struct UBlueprintMapLibrary_Map_Length_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		int32_t ReturnValue;			//Offset: 80 | ElementSize: 4
	};
	UBlueprintMapLibrary_Map_Length_Params params;
	params.TargetMap = TargetMap;

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
// Function Engine.BlueprintMapLibrary.Map_Remove
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Key	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintMapLibrary::Map_Remove(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Remove");

	struct UBlueprintMapLibrary_Map_Remove_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		int32_t Key;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBlueprintMapLibrary_Map_Remove_Params params;
	params.TargetMap = TargetMap;
	params.Key = Key;

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
// Function Engine.BlueprintMapLibrary.Map_Values
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetMap	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Values	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintMapLibrary::Map_Values(const TMap<int32_t, int32_t>& TargetMap, TArray<int32_t>* Values) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.Map_Values");

	struct UBlueprintMapLibrary_Map_Values_Params {
		TMap<int32_t, int32_t> TargetMap;			//Offset: 0 | ElementSize: 80
		TArray<int32_t> Values;			//Offset: 80 | ElementSize: 16
	};
	UBlueprintMapLibrary_Map_Values_Params params;
	params.TargetMap = TargetMap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Values != nullptr)
		*Values = params.Values;
}

/////////////////////////////////////////////
// Function Engine.BlueprintMapLibrary.SetMapPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintMapLibrary::SetMapPropertyByName(class UObject* Object, struct FName PropertyName, const TMap<int32_t, int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintMapLibrary.SetMapPropertyByName");

	struct UBlueprintMapLibrary_SetMapPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TMap<int32_t, int32_t> Value;			//Offset: 16 | ElementSize: 80
	};
	UBlueprintMapLibrary_SetMapPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

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