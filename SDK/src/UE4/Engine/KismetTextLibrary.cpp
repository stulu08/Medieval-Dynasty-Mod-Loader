#include "../SDK.h"
#include "KismetTextLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetTextLibrary.AsCurrency_Float
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RoundingMode	Type: TEnumAsByte<ERoundingMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CurrencyCode	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsCurrency_Float");

	struct UKismetTextLibrary_AsCurrency_Float_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<ERoundingMode> RoundingMode;			//Offset: 4 | ElementSize: 1
		bool bAlwaysSign;			//Offset: 5 | ElementSize: 1
		bool bUseGrouping;			//Offset: 6 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 8 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 12 | ElementSize: 4
		int32_t MinimumFractionalDigits;			//Offset: 16 | ElementSize: 4
		int32_t MaximumFractionalDigits;			//Offset: 20 | ElementSize: 4
		struct FString CurrencyCode;			//Offset: 24 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 40 | ElementSize: 24
	};
	UKismetTextLibrary_AsCurrency_Float_Params params;
	params.Value = Value;
	params.RoundingMode = RoundingMode;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;
	params.MinimumFractionalDigits = MinimumFractionalDigits;
	params.MaximumFractionalDigits = MaximumFractionalDigits;
	params.CurrencyCode = CurrencyCode;

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
// Function Engine.KismetTextLibrary.AsCurrency_Integer
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RoundingMode	Type: TEnumAsByte<ERoundingMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CurrencyCode	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsCurrency_Integer(int32_t Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsCurrency_Integer");

	struct UKismetTextLibrary_AsCurrency_Integer_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<ERoundingMode> RoundingMode;			//Offset: 4 | ElementSize: 1
		bool bAlwaysSign;			//Offset: 5 | ElementSize: 1
		bool bUseGrouping;			//Offset: 6 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 8 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 12 | ElementSize: 4
		int32_t MinimumFractionalDigits;			//Offset: 16 | ElementSize: 4
		int32_t MaximumFractionalDigits;			//Offset: 20 | ElementSize: 4
		struct FString CurrencyCode;			//Offset: 24 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 40 | ElementSize: 24
	};
	UKismetTextLibrary_AsCurrency_Integer_Params params;
	params.Value = Value;
	params.RoundingMode = RoundingMode;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;
	params.MinimumFractionalDigits = MinimumFractionalDigits;
	params.MaximumFractionalDigits = MaximumFractionalDigits;
	params.CurrencyCode = CurrencyCode;

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
// Function Engine.KismetTextLibrary.AsCurrencyBase
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: BaseValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CurrencyCode	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsCurrencyBase(int32_t BaseValue, struct FString CurrencyCode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsCurrencyBase");

	struct UKismetTextLibrary_AsCurrencyBase_Params {
		int32_t BaseValue;			//Offset: 0 | ElementSize: 4
		struct FString CurrencyCode;			//Offset: 8 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_AsCurrencyBase_Params params;
	params.BaseValue = BaseValue;
	params.CurrencyCode = CurrencyCode;

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
// Function Engine.KismetTextLibrary.AsDate_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsDate_DateTime(const struct FDateTime& InDateTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsDate_DateTime");

	struct UKismetTextLibrary_AsDate_DateTime_Params {
		struct FDateTime InDateTime;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_AsDate_DateTime_Params params;
	params.InDateTime = InDateTime;

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
// Function Engine.KismetTextLibrary.AsDateTime_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: In	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsDateTime_DateTime(const struct FDateTime& In) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsDateTime_DateTime");

	struct UKismetTextLibrary_AsDateTime_DateTime_Params {
		struct FDateTime In;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_AsDateTime_DateTime_Params params;
	params.In = In;

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
// Function Engine.KismetTextLibrary.AsPercent_Float
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RoundingMode	Type: TEnumAsByte<ERoundingMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsPercent_Float");

	struct UKismetTextLibrary_AsPercent_Float_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<ERoundingMode> RoundingMode;			//Offset: 4 | ElementSize: 1
		bool bAlwaysSign;			//Offset: 5 | ElementSize: 1
		bool bUseGrouping;			//Offset: 6 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 8 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 12 | ElementSize: 4
		int32_t MinimumFractionalDigits;			//Offset: 16 | ElementSize: 4
		int32_t MaximumFractionalDigits;			//Offset: 20 | ElementSize: 4
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_AsPercent_Float_Params params;
	params.Value = Value;
	params.RoundingMode = RoundingMode;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;
	params.MinimumFractionalDigits = MinimumFractionalDigits;
	params.MaximumFractionalDigits = MaximumFractionalDigits;

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
// Function Engine.KismetTextLibrary.AsTime_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: In	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsTime_DateTime(const struct FDateTime& In) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsTime_DateTime");

	struct UKismetTextLibrary_AsTime_DateTime_Params {
		struct FDateTime In;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_AsTime_DateTime_Params params;
	params.In = In;

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
// Function Engine.KismetTextLibrary.AsTimespan_Timespan
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InTimespan	Type: struct FTimespan	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsTimespan_Timespan(const struct FTimespan& InTimespan) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsTimespan_Timespan");

	struct UKismetTextLibrary_AsTimespan_Timespan_Params {
		struct FTimespan InTimespan;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_AsTimespan_Timespan_Params params;
	params.InTimespan = InTimespan;

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
// Function Engine.KismetTextLibrary.AsTimeZoneDate_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTimeZone	Type: struct FString	Flags: Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsTimeZoneDate_DateTime");

	struct UKismetTextLibrary_AsTimeZoneDate_DateTime_Params {
		struct FDateTime InDateTime;			//Offset: 0 | ElementSize: 8
		struct FString InTimeZone;			//Offset: 8 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_AsTimeZoneDate_DateTime_Params params;
	params.InDateTime = InDateTime;
	params.InTimeZone = InTimeZone;

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
// Function Engine.KismetTextLibrary.AsTimeZoneDateTime_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTimeZone	Type: struct FString	Flags: Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsTimeZoneDateTime_DateTime");

	struct UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Params {
		struct FDateTime InDateTime;			//Offset: 0 | ElementSize: 8
		struct FString InTimeZone;			//Offset: 8 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Params params;
	params.InDateTime = InDateTime;
	params.InTimeZone = InTimeZone;

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
// Function Engine.KismetTextLibrary.AsTimeZoneTime_DateTime
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InDateTime	Type: struct FDateTime	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTimeZone	Type: struct FString	Flags: Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.AsTimeZoneTime_DateTime");

	struct UKismetTextLibrary_AsTimeZoneTime_DateTime_Params {
		struct FDateTime InDateTime;			//Offset: 0 | ElementSize: 8
		struct FString InTimeZone;			//Offset: 8 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_AsTimeZoneTime_DateTime_Params params;
	params.InDateTime = InDateTime;
	params.InTimeZone = InTimeZone;

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
// Function Engine.KismetTextLibrary.Conv_BoolToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InBool	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_BoolToText(bool InBool) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_BoolToText");

	struct UKismetTextLibrary_Conv_BoolToText_Params {
		bool InBool;			//Offset: 0 | ElementSize: 1
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_BoolToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_ByteToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_ByteToText(unsigned char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_ByteToText");

	struct UKismetTextLibrary_Conv_ByteToText_Params {
		unsigned char Value;			//Offset: 0 | ElementSize: 1
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_ByteToText_Params params;
	params.Value = Value;

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
// Function Engine.KismetTextLibrary.Conv_ColorToText
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_ColorToText(struct FLinearColor InColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_ColorToText");

	struct UKismetTextLibrary_Conv_ColorToText_Params {
		struct FLinearColor InColor;			//Offset: 0 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_ColorToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_FloatToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RoundingMode	Type: TEnumAsByte<ERoundingMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumFractionalDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_FloatToText");

	struct UKismetTextLibrary_Conv_FloatToText_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<ERoundingMode> RoundingMode;			//Offset: 4 | ElementSize: 1
		bool bAlwaysSign;			//Offset: 5 | ElementSize: 1
		bool bUseGrouping;			//Offset: 6 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 8 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 12 | ElementSize: 4
		int32_t MinimumFractionalDigits;			//Offset: 16 | ElementSize: 4
		int32_t MaximumFractionalDigits;			//Offset: 20 | ElementSize: 4
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_FloatToText_Params params;
	params.Value = Value;
	params.RoundingMode = RoundingMode;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;
	params.MinimumFractionalDigits = MinimumFractionalDigits;
	params.MaximumFractionalDigits = MaximumFractionalDigits;

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
// Function Engine.KismetTextLibrary.Conv_Int64ToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int64_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_Int64ToText");

	struct UKismetTextLibrary_Conv_Int64ToText_Params {
		int64_t Value;			//Offset: 0 | ElementSize: 8
		bool bAlwaysSign;			//Offset: 8 | ElementSize: 1
		bool bUseGrouping;			//Offset: 9 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 12 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 16 | ElementSize: 4
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_Int64ToText_Params params;
	params.Value = Value;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;

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
// Function Engine.KismetTextLibrary.Conv_IntToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlwaysSign	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseGrouping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MinimumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaximumIntegralDigits	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_IntToText");

	struct UKismetTextLibrary_Conv_IntToText_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
		bool bAlwaysSign;			//Offset: 4 | ElementSize: 1
		bool bUseGrouping;			//Offset: 5 | ElementSize: 1
		int32_t MinimumIntegralDigits;			//Offset: 8 | ElementSize: 4
		int32_t MaximumIntegralDigits;			//Offset: 12 | ElementSize: 4
		struct FText ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_IntToText_Params params;
	params.Value = Value;
	params.bAlwaysSign = bAlwaysSign;
	params.bUseGrouping = bUseGrouping;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;

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
// Function Engine.KismetTextLibrary.Conv_NameToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_NameToText(struct FName InName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_NameToText");

	struct UKismetTextLibrary_Conv_NameToText_Params {
		struct FName InName;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_NameToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_ObjectToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InObj	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_ObjectToText(class UObject* InObj) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_ObjectToText");

	struct UKismetTextLibrary_Conv_ObjectToText_Params {
		class UObject* InObj;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_ObjectToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_RotatorToText
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_RotatorToText(struct FRotator InRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_RotatorToText");

	struct UKismetTextLibrary_Conv_RotatorToText_Params {
		struct FRotator InRot;			//Offset: 0 | ElementSize: 12
		struct FText ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_RotatorToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_StringToText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_StringToText(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_StringToText");

	struct UKismetTextLibrary_Conv_StringToText_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_StringToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_TextToString
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetTextLibrary::Conv_TextToString(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_TextToString");

	struct UKismetTextLibrary_Conv_TextToString_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetTextLibrary_Conv_TextToString_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.Conv_TransformToText
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InTrans	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_TransformToText(const struct FTransform& InTrans) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_TransformToText");

	struct UKismetTextLibrary_Conv_TransformToText_Params {
		struct FTransform InTrans;			//Offset: 0 | ElementSize: 48
		struct FText ReturnValue;			//Offset: 48 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_TransformToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_Vector2dToText
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVec	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_Vector2dToText(struct FVector2D InVec) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_Vector2dToText");

	struct UKismetTextLibrary_Conv_Vector2dToText_Params {
		struct FVector2D InVec;			//Offset: 0 | ElementSize: 8
		struct FText ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_Vector2dToText_Params params;
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
// Function Engine.KismetTextLibrary.Conv_VectorToText
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVec	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Conv_VectorToText(struct FVector InVec) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Conv_VectorToText");

	struct UKismetTextLibrary_Conv_VectorToText_Params {
		struct FVector InVec;			//Offset: 0 | ElementSize: 12
		struct FText ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetTextLibrary_Conv_VectorToText_Params params;
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
// Function Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText");

	struct UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params {
		struct FText A;			//Offset: 0 | ElementSize: 24
		struct FText B;			//Offset: 24 | ElementSize: 24
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params params;
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
// Function Engine.KismetTextLibrary.EqualEqual_TextText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::EqualEqual_TextText(const struct FText& A, const struct FText& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.EqualEqual_TextText");

	struct UKismetTextLibrary_EqualEqual_TextText_Params {
		struct FText A;			//Offset: 0 | ElementSize: 24
		struct FText B;			//Offset: 24 | ElementSize: 24
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetTextLibrary_EqualEqual_TextText_Params params;
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
// Function Engine.KismetTextLibrary.FindTextInLocalizationTable
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Namespace	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutText	Type: struct FText	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText* OutText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.FindTextInLocalizationTable");

	struct UKismetTextLibrary_FindTextInLocalizationTable_Params {
		struct FString Namespace;			//Offset: 0 | ElementSize: 16
		struct FString Key;			//Offset: 16 | ElementSize: 16
		struct FText OutText;			//Offset: 32 | ElementSize: 24
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	UKismetTextLibrary_FindTextInLocalizationTable_Params params;
	params.Namespace = Namespace;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutText != nullptr)
		*OutText = params.OutText;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetTextLibrary.Format
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPattern	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
// Name: InArgs	Type: TArray<struct FFormatArgumentData>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::Format(struct FText InPattern, TArray<struct FFormatArgumentData> InArgs) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.Format");

	struct UKismetTextLibrary_Format_Params {
		struct FText InPattern;			//Offset: 0 | ElementSize: 24
		TArray<struct FFormatArgumentData> InArgs;			//Offset: 24 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 40 | ElementSize: 24
	};
	UKismetTextLibrary_Format_Params params;
	params.InPattern = InPattern;
	params.InArgs = InArgs;

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
// Function Engine.KismetTextLibrary.GetEmptyText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::GetEmptyText() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.GetEmptyText");

	struct UKismetTextLibrary_GetEmptyText_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UKismetTextLibrary_GetEmptyText_Params params;

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
// Function Engine.KismetTextLibrary.IsPolyglotDataValid
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: PolyglotData	Type: struct FPolyglotTextData	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ErrorMessage	Type: struct FText	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetTextLibrary::IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, struct FText* ErrorMessage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.IsPolyglotDataValid");

	struct UKismetTextLibrary_IsPolyglotDataValid_Params {
		struct FPolyglotTextData PolyglotData;			//Offset: 0 | ElementSize: 184
		bool IsValid;			//Offset: 184 | ElementSize: 1
		struct FText ErrorMessage;			//Offset: 192 | ElementSize: 24
	};
	UKismetTextLibrary_IsPolyglotDataValid_Params params;
	params.PolyglotData = PolyglotData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}

/////////////////////////////////////////////
// Function Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText");

	struct UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Params {
		struct FText A;			//Offset: 0 | ElementSize: 24
		struct FText B;			//Offset: 24 | ElementSize: 24
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Params params;
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
// Function Engine.KismetTextLibrary.NotEqual_TextText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::NotEqual_TextText(const struct FText& A, const struct FText& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.NotEqual_TextText");

	struct UKismetTextLibrary_NotEqual_TextText_Params {
		struct FText A;			//Offset: 0 | ElementSize: 24
		struct FText B;			//Offset: 24 | ElementSize: 24
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetTextLibrary_NotEqual_TextText_Params params;
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
// Function Engine.KismetTextLibrary.PolyglotDataToText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: PolyglotData	Type: struct FPolyglotTextData	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::PolyglotDataToText(const struct FPolyglotTextData& PolyglotData) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.PolyglotDataToText");

	struct UKismetTextLibrary_PolyglotDataToText_Params {
		struct FPolyglotTextData PolyglotData;			//Offset: 0 | ElementSize: 184
		struct FText ReturnValue;			//Offset: 184 | ElementSize: 24
	};
	UKismetTextLibrary_PolyglotDataToText_Params params;
	params.PolyglotData = PolyglotData;

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
// Function Engine.KismetTextLibrary.StringTableIdAndKeyFromText
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Text	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
// Name: OutTableId	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutKey	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::StringTableIdAndKeyFromText(struct FText Text, struct FName* OutTableId, struct FString* OutKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.StringTableIdAndKeyFromText");

	struct UKismetTextLibrary_StringTableIdAndKeyFromText_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		struct FName OutTableId;			//Offset: 24 | ElementSize: 8
		struct FString OutKey;			//Offset: 32 | ElementSize: 16
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetTextLibrary_StringTableIdAndKeyFromText_Params params;
	params.Text = Text;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutTableId != nullptr)
		*OutTableId = params.OutTableId;
	if (OutKey != nullptr)
		*OutKey = params.OutKey;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetTextLibrary.TextFromStringTable
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextFromStringTable(struct FName TableId, struct FString Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextFromStringTable");

	struct UKismetTextLibrary_TextFromStringTable_Params {
		struct FName TableId;			//Offset: 0 | ElementSize: 8
		struct FString Key;			//Offset: 8 | ElementSize: 16
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextFromStringTable_Params params;
	params.TableId = TableId;
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
// Function Engine.KismetTextLibrary.TextIsCultureInvariant
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::TextIsCultureInvariant(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextIsCultureInvariant");

	struct UKismetTextLibrary_TextIsCultureInvariant_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetTextLibrary_TextIsCultureInvariant_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextIsEmpty
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::TextIsEmpty(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextIsEmpty");

	struct UKismetTextLibrary_TextIsEmpty_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetTextLibrary_TextIsEmpty_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextIsFromStringTable
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::TextIsFromStringTable(const struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextIsFromStringTable");

	struct UKismetTextLibrary_TextIsFromStringTable_Params {
		struct FText Text;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetTextLibrary_TextIsFromStringTable_Params params;
	params.Text = Text;

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
// Function Engine.KismetTextLibrary.TextIsTransient
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetTextLibrary::TextIsTransient(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextIsTransient");

	struct UKismetTextLibrary_TextIsTransient_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetTextLibrary_TextIsTransient_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextToLower
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextToLower(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextToLower");

	struct UKismetTextLibrary_TextToLower_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextToLower_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextToUpper
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextToUpper(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextToUpper");

	struct UKismetTextLibrary_TextToUpper_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextToUpper_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextTrimPreceding
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextTrimPreceding(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextTrimPreceding");

	struct UKismetTextLibrary_TextTrimPreceding_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextTrimPreceding_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextTrimPrecedingAndTrailing(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing");

	struct UKismetTextLibrary_TextTrimPrecedingAndTrailing_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextTrimPrecedingAndTrailing_Params params;
	params.InText = InText;

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
// Function Engine.KismetTextLibrary.TextTrimTrailing
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetTextLibrary::TextTrimTrailing(const struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetTextLibrary.TextTrimTrailing");

	struct UKismetTextLibrary_TextTrimTrailing_Params {
		struct FText InText;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetTextLibrary_TextTrimTrailing_Params params;
	params.InText = InText;

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