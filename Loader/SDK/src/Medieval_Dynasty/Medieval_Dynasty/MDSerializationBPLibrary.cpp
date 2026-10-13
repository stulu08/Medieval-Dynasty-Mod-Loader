#include "../SDK.h"
#include "MDSerializationBPLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.MDSerializationBPLibrary.ApplySerialization
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: SerializedData	Type: TArray<unsigned char>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: InObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMDSerializationBPLibrary::ApplySerialization(const TArray<unsigned char>& SerializedData, class UObject* InObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MDSerializationBPLibrary.ApplySerialization");

	struct UMDSerializationBPLibrary_ApplySerialization_Params {
		TArray<unsigned char> SerializedData;			//Offset: 0 | ElementSize: 16
		class UObject* InObject;			//Offset: 16 | ElementSize: 8
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UMDSerializationBPLibrary_ApplySerialization_Params params;
	params.SerializedData = SerializedData;
	params.InObject = InObject;

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
// Function Medieval_Dynasty.MDSerializationBPLibrary.SerializeObject
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: OutSerializedData	Type: TArray<unsigned char>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: InObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMDSerializationBPLibrary::SerializeObject(TArray<unsigned char>* OutSerializedData, class UObject* InObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MDSerializationBPLibrary.SerializeObject");

	struct UMDSerializationBPLibrary_SerializeObject_Params {
		TArray<unsigned char> OutSerializedData;			//Offset: 0 | ElementSize: 16
		class UObject* InObject;			//Offset: 16 | ElementSize: 8
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UMDSerializationBPLibrary_SerializeObject_Params params;
	params.InObject = InObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutSerializedData != nullptr)
		*OutSerializedData = params.OutSerializedData;
	return params.ReturnValue;
}

#pragma endregion
}