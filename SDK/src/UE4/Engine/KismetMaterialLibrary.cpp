#include "../SDK.h"
#include "KismetMaterialLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Parent	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OptionalName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CreationFlags	Type: EMIDCreationFlags	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UKismetMaterialLibrary::CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, struct FName OptionalName, EMIDCreationFlags CreationFlags) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance");

	struct UKismetMaterialLibrary_CreateDynamicMaterialInstance_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UMaterialInterface* Parent;			//Offset: 8 | ElementSize: 8
		struct FName OptionalName;			//Offset: 16 | ElementSize: 8
		EMIDCreationFlags CreationFlags;			//Offset: 24 | ElementSize: 1
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UKismetMaterialLibrary_CreateDynamicMaterialInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Parent = Parent;
	params.OptionalName = OptionalName;
	params.CreationFlags = CreationFlags;

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
// Function Engine.KismetMaterialLibrary.GetScalarParameterValue
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Collection	Type: class UMaterialParameterCollection*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetMaterialLibrary::GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetMaterialLibrary.GetScalarParameterValue");

	struct UKismetMaterialLibrary_GetScalarParameterValue_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UMaterialParameterCollection* Collection;			//Offset: 8 | ElementSize: 8
		struct FName ParameterName;			//Offset: 16 | ElementSize: 8
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetMaterialLibrary_GetScalarParameterValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;
	params.ParameterName = ParameterName;

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
// Function Engine.KismetMaterialLibrary.GetVectorParameterValue
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Collection	Type: class UMaterialParameterCollection*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FLinearColor UKismetMaterialLibrary::GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetMaterialLibrary.GetVectorParameterValue");

	struct UKismetMaterialLibrary_GetVectorParameterValue_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UMaterialParameterCollection* Collection;			//Offset: 8 | ElementSize: 8
		struct FName ParameterName;			//Offset: 16 | ElementSize: 8
		struct FLinearColor ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetMaterialLibrary_GetVectorParameterValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;
	params.ParameterName = ParameterName;

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
// Function Engine.KismetMaterialLibrary.SetScalarParameterValue
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Collection	Type: class UMaterialParameterCollection*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetMaterialLibrary::SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName, float ParameterValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetMaterialLibrary.SetScalarParameterValue");

	struct UKismetMaterialLibrary_SetScalarParameterValue_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UMaterialParameterCollection* Collection;			//Offset: 8 | ElementSize: 8
		struct FName ParameterName;			//Offset: 16 | ElementSize: 8
		float ParameterValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetMaterialLibrary_SetScalarParameterValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetMaterialLibrary.SetVectorParameterValue
// Flags: Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Collection	Type: class UMaterialParameterCollection*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterValue	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetMaterialLibrary::SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, struct FName ParameterName, const struct FLinearColor& ParameterValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetMaterialLibrary.SetVectorParameterValue");

	struct UKismetMaterialLibrary_SetVectorParameterValue_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UMaterialParameterCollection* Collection;			//Offset: 8 | ElementSize: 8
		struct FName ParameterName;			//Offset: 16 | ElementSize: 8
		struct FLinearColor ParameterValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetMaterialLibrary_SetVectorParameterValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

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