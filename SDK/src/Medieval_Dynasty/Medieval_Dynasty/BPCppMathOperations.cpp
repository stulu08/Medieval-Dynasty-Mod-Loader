#include "../SDK.h"
#include "BPCppMathOperations.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.BitwiseShiftLeft_IntInt
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBPCppMathOperations::BitwiseShiftLeft_IntInt(int32_t A, int32_t B) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.BitwiseShiftLeft_IntInt");

	struct UBPCppMathOperations_BitwiseShiftLeft_IntInt_Params {
		int32_t A;			//Offset: 0 | ElementSize: 4
		int32_t B;			//Offset: 4 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UBPCppMathOperations_BitwiseShiftLeft_IntInt_Params params;
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
// Function Medieval_Dynasty.BPCppMathOperations.BitwiseShiftRight_IntInt
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBPCppMathOperations::BitwiseShiftRight_IntInt(int32_t A, int32_t B) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.BitwiseShiftRight_IntInt");

	struct UBPCppMathOperations_BitwiseShiftRight_IntInt_Params {
		int32_t A;			//Offset: 0 | ElementSize: 4
		int32_t B;			//Offset: 4 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UBPCppMathOperations_BitwiseShiftRight_IntInt_Params params;
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
// Function Medieval_Dynasty.BPCppMathOperations.CompressRotatorToBytes
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Rotator	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: X	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::CompressRotatorToBytes(const struct FRotator& Rotator, unsigned char* X, unsigned char* Y, unsigned char* Z) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.CompressRotatorToBytes");

	struct UBPCppMathOperations_CompressRotatorToBytes_Params {
		struct FRotator Rotator;			//Offset: 0 | ElementSize: 12
		unsigned char X;			//Offset: 12 | ElementSize: 1
		unsigned char Y;			//Offset: 13 | ElementSize: 1
		unsigned char Z;			//Offset: 14 | ElementSize: 1
	};
	UBPCppMathOperations_CompressRotatorToBytes_Params params;
	params.Rotator = Rotator;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.CompressVectorToBytes
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Vector	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsScale	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: X	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::CompressVectorToBytes(const struct FVector& Vector, bool IsScale, int32_t* X, int32_t* Y, int32_t* Z) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.CompressVectorToBytes");

	struct UBPCppMathOperations_CompressVectorToBytes_Params {
		struct FVector Vector;			//Offset: 0 | ElementSize: 12
		bool IsScale;			//Offset: 12 | ElementSize: 1
		int32_t X;			//Offset: 16 | ElementSize: 4
		int32_t Y;			//Offset: 20 | ElementSize: 4
		int32_t Z;			//Offset: 24 | ElementSize: 4
	};
	UBPCppMathOperations_CompressVectorToBytes_Params params;
	params.Vector = Vector;
	params.IsScale = IsScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.Conv_EnumToByte
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: InEnum	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
unsigned char UBPCppMathOperations::Conv_EnumToByte(unsigned char InEnum) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.Conv_EnumToByte");

	struct UBPCppMathOperations_Conv_EnumToByte_Params {
		unsigned char InEnum;			//Offset: 0 | ElementSize: 1
		unsigned char ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UBPCppMathOperations_Conv_EnumToByte_Params params;
	params.InEnum = InEnum;

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
// Function Medieval_Dynasty.BPCppMathOperations.Conv_TransformToTransformNetQuantize
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InTransform	Type: struct FTransform	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTransform_NetQuantize	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform_NetQuantize UBPCppMathOperations::Conv_TransformToTransformNetQuantize(struct FTransform InTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.Conv_TransformToTransformNetQuantize");

	struct UBPCppMathOperations_Conv_TransformToTransformNetQuantize_Params {
		struct FTransform InTransform;			//Offset: 0 | ElementSize: 48
		struct FTransform_NetQuantize ReturnValue;			//Offset: 48 | ElementSize: 36
	};
	UBPCppMathOperations_Conv_TransformToTransformNetQuantize_Params params;
	params.InTransform = InTransform;

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
// Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector_NetQuantize	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector_NetQuantize UBPCppMathOperations::Conv_VectorToVectorNetQuantize(struct FVector InVector) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize");

	struct UBPCppMathOperations_Conv_VectorToVectorNetQuantize_Params {
		struct FVector InVector;			//Offset: 0 | ElementSize: 12
		struct FVector_NetQuantize ReturnValue;			//Offset: 12 | ElementSize: 12
	};
	UBPCppMathOperations_Conv_VectorToVectorNetQuantize_Params params;
	params.InVector = InVector;

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
// Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize10
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector_NetQuantize10	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector_NetQuantize10 UBPCppMathOperations::Conv_VectorToVectorNetQuantize10(struct FVector InVector) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize10");

	struct UBPCppMathOperations_Conv_VectorToVectorNetQuantize10_Params {
		struct FVector InVector;			//Offset: 0 | ElementSize: 12
		struct FVector_NetQuantize10 ReturnValue;			//Offset: 12 | ElementSize: 12
	};
	UBPCppMathOperations_Conv_VectorToVectorNetQuantize10_Params params;
	params.InVector = InVector;

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
// Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize100
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector_NetQuantize100	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector_NetQuantize100 UBPCppMathOperations::Conv_VectorToVectorNetQuantize100(struct FVector InVector) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.Conv_VectorToVectorNetQuantize100");

	struct UBPCppMathOperations_Conv_VectorToVectorNetQuantize100_Params {
		struct FVector InVector;			//Offset: 0 | ElementSize: 12
		struct FVector_NetQuantize100 ReturnValue;			//Offset: 12 | ElementSize: 12
	};
	UBPCppMathOperations_Conv_VectorToVectorNetQuantize100_Params params;
	params.InVector = InVector;

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
// Function Medieval_Dynasty.BPCppMathOperations.GetDistanceToClosestPlayer
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClosestActor	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppMathOperations::GetDistanceToClosestPlayer(class UObject* WorldContextObject, class AActor** ClosestActor, class AActor* targetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.GetDistanceToClosestPlayer");

	struct UBPCppMathOperations_GetDistanceToClosestPlayer_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class AActor* ClosestActor;			//Offset: 8 | ElementSize: 8
		class AActor* targetActor;			//Offset: 16 | ElementSize: 8
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UBPCppMathOperations_GetDistanceToClosestPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.targetActor = targetActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.GetSquaredDistanceToClosestPlayer
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClosestActor	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppMathOperations::GetSquaredDistanceToClosestPlayer(class UObject* WorldContextObject, class AActor** ClosestActor, class AActor* targetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.GetSquaredDistanceToClosestPlayer");

	struct UBPCppMathOperations_GetSquaredDistanceToClosestPlayer_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class AActor* ClosestActor;			//Offset: 8 | ElementSize: 8
		class AActor* targetActor;			//Offset: 16 | ElementSize: 8
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UBPCppMathOperations_GetSquaredDistanceToClosestPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.targetActor = targetActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.IsPointInsidePolygon
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PolygonVertices	Type: TArray<struct FVector>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Point	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppMathOperations::IsPointInsidePolygon(TArray<struct FVector> PolygonVertices, struct FVector Point) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.IsPointInsidePolygon");

	struct UBPCppMathOperations_IsPointInsidePolygon_Params {
		TArray<struct FVector> PolygonVertices;			//Offset: 0 | ElementSize: 16
		struct FVector Point;			//Offset: 16 | ElementSize: 12
		bool ReturnValue;			//Offset: 28 | ElementSize: 1
	};
	UBPCppMathOperations_IsPointInsidePolygon_Params params;
	params.PolygonVertices = PolygonVertices;
	params.Point = Point;

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
// Function Medieval_Dynasty.BPCppMathOperations.MakeRotatorFromBytes
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: X	Type: unsigned char	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: unsigned char	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: unsigned char	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator UBPCppMathOperations::MakeRotatorFromBytes(const unsigned char& X, const unsigned char& Y, const unsigned char& Z) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.MakeRotatorFromBytes");

	struct UBPCppMathOperations_MakeRotatorFromBytes_Params {
		unsigned char X;			//Offset: 0 | ElementSize: 1
		unsigned char Y;			//Offset: 1 | ElementSize: 1
		unsigned char Z;			//Offset: 2 | ElementSize: 1
		struct FRotator ReturnValue;			//Offset: 4 | ElementSize: 12
	};
	UBPCppMathOperations_MakeRotatorFromBytes_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

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
// Function Medieval_Dynasty.BPCppMathOperations.MakeVectorFromBytes
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: X	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsScale	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UBPCppMathOperations::MakeVectorFromBytes(const int32_t& X, const int32_t& Y, const int32_t& Z, bool IsScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.MakeVectorFromBytes");

	struct UBPCppMathOperations_MakeVectorFromBytes_Params {
		int32_t X;			//Offset: 0 | ElementSize: 4
		int32_t Y;			//Offset: 4 | ElementSize: 4
		int32_t Z;			//Offset: 8 | ElementSize: 4
		bool IsScale;			//Offset: 12 | ElementSize: 1
		struct FVector ReturnValue;			//Offset: 16 | ElementSize: 12
	};
	UBPCppMathOperations_MakeVectorFromBytes_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.IsScale = IsScale;

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
// Function Medieval_Dynasty.BPCppMathOperations.SortByFloat
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Floats	Type: TArray<float>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByFloat(TArray<int32_t>* SortedIndices, TArray<float>* Floats, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByFloat");

	struct UBPCppMathOperations_SortByFloat_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<float> Floats;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByFloat_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Floats != nullptr)
		*Floats = params.Floats;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.SortByInt
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Ints	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByInt(TArray<int32_t>* SortedIndices, TArray<int32_t>* Ints, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByInt");

	struct UBPCppMathOperations_SortByInt_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> Ints;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByInt_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Ints != nullptr)
		*Ints = params.Ints;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.SortByString
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Texts	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByString(TArray<int32_t>* SortedIndices, TArray<struct FString>* Texts, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByString");

	struct UBPCppMathOperations_SortByString_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> Texts;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByString_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Texts != nullptr)
		*Texts = params.Texts;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.SplineDjikstra
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Roads	Type: TArray<class AActor*>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: StartingSpline	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndingSpline	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartingSplineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndingSplineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ConnectionPoints	Type: TArray<struct FST_DoubleActorArray>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<int32_t> UBPCppMathOperations::SplineDjikstra(TArray<class AActor*> Roads, class AActor* StartingSpline, class AActor* EndingSpline, int32_t StartingSplineIndex, int32_t EndingSplineIndex, TArray<struct FST_DoubleActorArray> ConnectionPoints) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SplineDjikstra");

	struct UBPCppMathOperations_SplineDjikstra_Params {
		TArray<class AActor*> Roads;			//Offset: 0 | ElementSize: 16
		class AActor* StartingSpline;			//Offset: 16 | ElementSize: 8
		class AActor* EndingSpline;			//Offset: 24 | ElementSize: 8
		int32_t StartingSplineIndex;			//Offset: 32 | ElementSize: 4
		int32_t EndingSplineIndex;			//Offset: 36 | ElementSize: 4
		TArray<struct FST_DoubleActorArray> ConnectionPoints;			//Offset: 40 | ElementSize: 16
		TArray<int32_t> ReturnValue;			//Offset: 56 | ElementSize: 16
	};
	UBPCppMathOperations_SplineDjikstra_Params params;
	params.Roads = Roads;
	params.StartingSpline = StartingSpline;
	params.EndingSpline = EndingSpline;
	params.StartingSplineIndex = StartingSplineIndex;
	params.EndingSplineIndex = EndingSplineIndex;
	params.ConnectionPoints = ConnectionPoints;

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