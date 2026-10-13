#include "../SDK.h"
#include "KismetInputLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetInputLibrary.CalibrateTilt
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetInputLibrary::CalibrateTilt() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.CalibrateTilt");

	struct UKismetInputLibrary_CalibrateTilt_Params {
	};
	UKismetInputLibrary_CalibrateTilt_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetInputLibrary.EqualEqual_InputChordInputChord
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FInputChord	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FInputChord	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::EqualEqual_InputChordInputChord(struct FInputChord A, struct FInputChord B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.EqualEqual_InputChordInputChord");

	struct UKismetInputLibrary_EqualEqual_InputChordInputChord_Params {
		struct FInputChord A;			//Offset: 0 | ElementSize: 32
		struct FInputChord B;			//Offset: 32 | ElementSize: 32
		bool ReturnValue;			//Offset: 64 | ElementSize: 1
	};
	UKismetInputLibrary_EqualEqual_InputChordInputChord_Params params;
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
// Function Engine.KismetInputLibrary.EqualEqual_KeyKey
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::EqualEqual_KeyKey(struct FKey A, struct FKey B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.EqualEqual_KeyKey");

	struct UKismetInputLibrary_EqualEqual_KeyKey_Params {
		struct FKey A;			//Offset: 0 | ElementSize: 24
		struct FKey B;			//Offset: 24 | ElementSize: 24
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetInputLibrary_EqualEqual_KeyKey_Params params;
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
// Function Engine.KismetInputLibrary.GetAnalogValue
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FAnalogInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetInputLibrary::GetAnalogValue(const struct FAnalogInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.GetAnalogValue");

	struct UKismetInputLibrary_GetAnalogValue_Params {
		struct FAnalogInputEvent Input;			//Offset: 0 | ElementSize: 64
		float ReturnValue;			//Offset: 64 | ElementSize: 4
	};
	UKismetInputLibrary_GetAnalogValue_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.GetKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FKeyEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FKey	Flags: Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FKey UKismetInputLibrary::GetKey(const struct FKeyEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.GetKey");

	struct UKismetInputLibrary_GetKey_Params {
		struct FKeyEvent Input;			//Offset: 0 | ElementSize: 56
		struct FKey ReturnValue;			//Offset: 56 | ElementSize: 24
	};
	UKismetInputLibrary_GetKey_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.GetUserIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FKeyEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetInputLibrary::GetUserIndex(const struct FKeyEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.GetUserIndex");

	struct UKismetInputLibrary_GetUserIndex_Params {
		struct FKeyEvent Input;			//Offset: 0 | ElementSize: 56
		int32_t ReturnValue;			//Offset: 56 | ElementSize: 4
	};
	UKismetInputLibrary_GetUserIndex_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputChord_GetDisplayName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FInputChord	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetInputLibrary::InputChord_GetDisplayName(const struct FInputChord& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputChord_GetDisplayName");

	struct UKismetInputLibrary_InputChord_GetDisplayName_Params {
		struct FInputChord Key;			//Offset: 0 | ElementSize: 32
		struct FText ReturnValue;			//Offset: 32 | ElementSize: 24
	};
	UKismetInputLibrary_InputChord_GetDisplayName_Params params;
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
// Function Engine.KismetInputLibrary.InputEvent_IsAltDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsAltDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsAltDown");

	struct UKismetInputLibrary_InputEvent_IsAltDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsAltDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsCommandDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsCommandDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsCommandDown");

	struct UKismetInputLibrary_InputEvent_IsCommandDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsCommandDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsControlDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsControlDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsControlDown");

	struct UKismetInputLibrary_InputEvent_IsControlDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsControlDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsLeftAltDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsLeftAltDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsLeftAltDown");

	struct UKismetInputLibrary_InputEvent_IsLeftAltDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsLeftAltDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsLeftCommandDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown");

	struct UKismetInputLibrary_InputEvent_IsLeftCommandDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsLeftCommandDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsLeftControlDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsLeftControlDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsLeftControlDown");

	struct UKismetInputLibrary_InputEvent_IsLeftControlDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsLeftControlDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsLeftShiftDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown");

	struct UKismetInputLibrary_InputEvent_IsLeftShiftDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsLeftShiftDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsRepeat
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsRepeat(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsRepeat");

	struct UKismetInputLibrary_InputEvent_IsRepeat_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsRepeat_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsRightAltDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsRightAltDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsRightAltDown");

	struct UKismetInputLibrary_InputEvent_IsRightAltDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsRightAltDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsRightCommandDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsRightCommandDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsRightCommandDown");

	struct UKismetInputLibrary_InputEvent_IsRightCommandDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsRightCommandDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsRightControlDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsRightControlDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsRightControlDown");

	struct UKismetInputLibrary_InputEvent_IsRightControlDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsRightControlDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsRightShiftDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsRightShiftDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsRightShiftDown");

	struct UKismetInputLibrary_InputEvent_IsRightShiftDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsRightShiftDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.InputEvent_IsShiftDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::InputEvent_IsShiftDown(const struct FInputEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.InputEvent_IsShiftDown");

	struct UKismetInputLibrary_InputEvent_IsShiftDown_Params {
		struct FInputEvent Input;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_InputEvent_IsShiftDown_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.Key_GetDisplayName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetInputLibrary::Key_GetDisplayName(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_GetDisplayName");

	struct UKismetInputLibrary_Key_GetDisplayName_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetInputLibrary_Key_GetDisplayName_Params params;
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
// Function Engine.KismetInputLibrary.Key_GetNavigationAction
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InKey	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EUINavigationAction	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EUINavigationAction UKismetInputLibrary::Key_GetNavigationAction(const struct FKey& InKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_GetNavigationAction");

	struct UKismetInputLibrary_Key_GetNavigationAction_Params {
		struct FKey InKey;			//Offset: 0 | ElementSize: 24
		EUINavigationAction ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_GetNavigationAction_Params params;
	params.InKey = InKey;

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
// Function Engine.KismetInputLibrary.Key_GetNavigationActionFromKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EUINavigationAction	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EUINavigationAction UKismetInputLibrary::Key_GetNavigationActionFromKey(const struct FKeyEvent& InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_GetNavigationActionFromKey");

	struct UKismetInputLibrary_Key_GetNavigationActionFromKey_Params {
		struct FKeyEvent InKeyEvent;			//Offset: 0 | ElementSize: 56
		EUINavigationAction ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UKismetInputLibrary_Key_GetNavigationActionFromKey_Params params;
	params.InKeyEvent = InKeyEvent;

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
// Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromAnalog
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InAnalogEvent	Type: struct FAnalogInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EUINavigation	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(const struct FAnalogInputEvent& InAnalogEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromAnalog");

	struct UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Params {
		struct FAnalogInputEvent InAnalogEvent;			//Offset: 0 | ElementSize: 64
		EUINavigation ReturnValue;			//Offset: 64 | ElementSize: 1
	};
	UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Params params;
	params.InAnalogEvent = InAnalogEvent;

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
// Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: EUINavigation	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromKey(const struct FKeyEvent& InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromKey");

	struct UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Params {
		struct FKeyEvent InKeyEvent;			//Offset: 0 | ElementSize: 56
		EUINavigation ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Params params;
	params.InKeyEvent = InKeyEvent;

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
// Function Engine.KismetInputLibrary.Key_IsAnalog
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsAnalog(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsAnalog");

	struct UKismetInputLibrary_Key_IsAnalog_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsAnalog_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsAxis1D
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsAxis1D(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsAxis1D");

	struct UKismetInputLibrary_Key_IsAxis1D_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsAxis1D_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsAxis2D
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsAxis2D(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsAxis2D");

	struct UKismetInputLibrary_Key_IsAxis2D_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsAxis2D_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsAxis3D
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsAxis3D(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsAxis3D");

	struct UKismetInputLibrary_Key_IsAxis3D_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsAxis3D_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsButtonAxis
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsButtonAxis(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsButtonAxis");

	struct UKismetInputLibrary_Key_IsButtonAxis_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsButtonAxis_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsDigital
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsDigital(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsDigital");

	struct UKismetInputLibrary_Key_IsDigital_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsDigital_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsGamepadKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsGamepadKey(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsGamepadKey");

	struct UKismetInputLibrary_Key_IsGamepadKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsGamepadKey_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsKeyboardKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsKeyboardKey(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsKeyboardKey");

	struct UKismetInputLibrary_Key_IsKeyboardKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsKeyboardKey_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsModifierKey
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsModifierKey(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsModifierKey");

	struct UKismetInputLibrary_Key_IsModifierKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsModifierKey_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsMouseButton
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsMouseButton(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsMouseButton");

	struct UKismetInputLibrary_Key_IsMouseButton_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsMouseButton_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsValid
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsValid(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsValid");

	struct UKismetInputLibrary_Key_IsValid_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsValid_Params params;
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
// Function Engine.KismetInputLibrary.Key_IsVectorAxis
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Key	Type: struct FKey	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::Key_IsVectorAxis(const struct FKey& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.Key_IsVectorAxis");

	struct UKismetInputLibrary_Key_IsVectorAxis_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetInputLibrary_Key_IsVectorAxis_Params params;
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
// Function Engine.KismetInputLibrary.PointerEvent_GetCursorDelta
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UKismetInputLibrary::PointerEvent_GetCursorDelta(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetCursorDelta");

	struct UKismetInputLibrary_PointerEvent_GetCursorDelta_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FVector2D ReturnValue;			//Offset: 112 | ElementSize: 8
	};
	UKismetInputLibrary_PointerEvent_GetCursorDelta_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetEffectingButton
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FKey	Flags: Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FKey UKismetInputLibrary::PointerEvent_GetEffectingButton(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetEffectingButton");

	struct UKismetInputLibrary_PointerEvent_GetEffectingButton_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FKey ReturnValue;			//Offset: 112 | ElementSize: 24
	};
	UKismetInputLibrary_PointerEvent_GetEffectingButton_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetGestureDelta
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UKismetInputLibrary::PointerEvent_GetGestureDelta(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetGestureDelta");

	struct UKismetInputLibrary_PointerEvent_GetGestureDelta_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FVector2D ReturnValue;			//Offset: 112 | ElementSize: 8
	};
	UKismetInputLibrary_PointerEvent_GetGestureDelta_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetGestureType
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: ESlateGesture	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ESlateGesture UKismetInputLibrary::PointerEvent_GetGestureType(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetGestureType");

	struct UKismetInputLibrary_PointerEvent_GetGestureType_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		ESlateGesture ReturnValue;			//Offset: 112 | ElementSize: 1
	};
	UKismetInputLibrary_PointerEvent_GetGestureType_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition");

	struct UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FVector2D ReturnValue;			//Offset: 112 | ElementSize: 8
	};
	UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetPointerIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetInputLibrary::PointerEvent_GetPointerIndex(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetPointerIndex");

	struct UKismetInputLibrary_PointerEvent_GetPointerIndex_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		int32_t ReturnValue;			//Offset: 112 | ElementSize: 4
	};
	UKismetInputLibrary_PointerEvent_GetPointerIndex_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition");

	struct UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FVector2D ReturnValue;			//Offset: 112 | ElementSize: 8
	};
	UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetInputLibrary::PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex");

	struct UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		int32_t ReturnValue;			//Offset: 112 | ElementSize: 4
	};
	UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetUserIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetInputLibrary::PointerEvent_GetUserIndex(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetUserIndex");

	struct UKismetInputLibrary_PointerEvent_GetUserIndex_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		int32_t ReturnValue;			//Offset: 112 | ElementSize: 4
	};
	UKismetInputLibrary_PointerEvent_GetUserIndex_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_GetWheelDelta
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetInputLibrary::PointerEvent_GetWheelDelta(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_GetWheelDelta");

	struct UKismetInputLibrary_PointerEvent_GetWheelDelta_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		float ReturnValue;			//Offset: 112 | ElementSize: 4
	};
	UKismetInputLibrary_PointerEvent_GetWheelDelta_Params params;
	params.Input = Input;

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
// Function Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: MouseButton	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, struct FKey MouseButton) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown");

	struct UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		struct FKey MouseButton;			//Offset: 112 | ElementSize: 24
		bool ReturnValue;			//Offset: 136 | ElementSize: 1
	};
	UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Params params;
	params.Input = Input;
	params.MouseButton = MouseButton;

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
// Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Input	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInputLibrary::PointerEvent_IsTouchEvent(const struct FPointerEvent& Input) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent");

	struct UKismetInputLibrary_PointerEvent_IsTouchEvent_Params {
		struct FPointerEvent Input;			//Offset: 0 | ElementSize: 112
		bool ReturnValue;			//Offset: 112 | ElementSize: 1
	};
	UKismetInputLibrary_PointerEvent_IsTouchEvent_Params params;
	params.Input = Input;

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