#include "../SDK.h"
#include "KismetSystemLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.AddFloatHistorySample
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FloatHistory	Type: struct FDebugFloatHistory	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FDebugFloatHistory	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FDebugFloatHistory UKismetSystemLibrary::AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.AddFloatHistorySample");

	struct UKismetSystemLibrary_AddFloatHistorySample_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		struct FDebugFloatHistory FloatHistory;			//Offset: 8 | ElementSize: 32
		struct FDebugFloatHistory ReturnValue;			//Offset: 40 | ElementSize: 32
	};
	UKismetSystemLibrary_AddFloatHistorySample_Params params;
	params.Value = Value;
	params.FloatHistory = FloatHistory;

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
// Function Engine.KismetSystemLibrary.BeginTransaction
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Context	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Description	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
// Name: PrimaryObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::BeginTransaction(struct FString Context, struct FText Description, class UObject* PrimaryObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BeginTransaction");

	struct UKismetSystemLibrary_BeginTransaction_Params {
		struct FString Context;			//Offset: 0 | ElementSize: 16
		struct FText Description;			//Offset: 16 | ElementSize: 24
		class UObject* PrimaryObject;			//Offset: 40 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 48 | ElementSize: 4
	};
	UKismetSystemLibrary_BeginTransaction_Params params;
	params.Context = Context;
	params.Description = Description;
	params.PrimaryObject = PrimaryObject;

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
// Function Engine.KismetSystemLibrary.BoxOverlapActors
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxPos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxExtent	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActorClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxOverlapActors(class UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxOverlapActors");

	struct UKismetSystemLibrary_BoxOverlapActors_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector BoxPos;			//Offset: 8 | ElementSize: 12
		struct FVector BoxExtent;			//Offset: 20 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		class UObject* ActorClassFilter;			//Offset: 48 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TArray<class AActor*> OutActors;			//Offset: 72 | ElementSize: 16
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxOverlapComponents
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxPos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Extent	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ComponentClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxOverlapComponents(class UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxOverlapComponents");

	struct UKismetSystemLibrary_BoxOverlapComponents_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector BoxPos;			//Offset: 8 | ElementSize: 12
		struct FVector Extent;			//Offset: 20 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		class UObject* ComponentClassFilter;			//Offset: 48 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TArray<class UPrimitiveComponent*> OutComponents;			//Offset: 72 | ElementSize: 16
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.Extent = Extent;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceMulti
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceMulti");

	struct UKismetSystemLibrary_BoxTraceMulti_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 56 | ElementSize: 1
		bool bTraceComplex;			//Offset: 57 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 88 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 104 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 108 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 124 | ElementSize: 16
		float DrawTime;			//Offset: 140 | ElementSize: 4
		bool ReturnValue;			//Offset: 144 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile");

	struct UKismetSystemLibrary_BoxTraceMultiByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		struct FName ProfileName;			//Offset: 56 | ElementSize: 8
		bool bTraceComplex;			//Offset: 64 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 72 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 88 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 96 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 112 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 116 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 132 | ElementSize: 16
		float DrawTime;			//Offset: 148 | ElementSize: 4
		bool ReturnValue;			//Offset: 152 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceMultiByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects");

	struct UKismetSystemLibrary_BoxTraceMultiForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 56 | ElementSize: 16
		bool bTraceComplex;			//Offset: 72 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 80 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 96 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 104 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 120 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 124 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 140 | ElementSize: 16
		float DrawTime;			//Offset: 156 | ElementSize: 4
		bool ReturnValue;			//Offset: 160 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceSingle
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceSingle");

	struct UKismetSystemLibrary_BoxTraceSingle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 56 | ElementSize: 1
		bool bTraceComplex;			//Offset: 57 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 84 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 220 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 224 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 240 | ElementSize: 16
		float DrawTime;			//Offset: 256 | ElementSize: 4
		bool ReturnValue;			//Offset: 260 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile");

	struct UKismetSystemLibrary_BoxTraceSingleByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		struct FName ProfileName;			//Offset: 56 | ElementSize: 8
		bool bTraceComplex;			//Offset: 64 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 72 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 88 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 92 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 228 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 232 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 248 | ElementSize: 16
		float DrawTime;			//Offset: 264 | ElementSize: 4
		bool ReturnValue;			//Offset: 268 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceSingleByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfSize	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Orientation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::BoxTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects");

	struct UKismetSystemLibrary_BoxTraceSingleForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FVector HalfSize;			//Offset: 32 | ElementSize: 12
		struct FRotator Orientation;			//Offset: 44 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 56 | ElementSize: 16
		bool bTraceComplex;			//Offset: 72 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 80 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 96 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 100 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 236 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 240 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 256 | ElementSize: 16
		float DrawTime;			//Offset: 272 | ElementSize: 4
		bool ReturnValue;			//Offset: 276 | ElementSize: 1
	};
	UKismetSystemLibrary_BoxTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BreakSoftClassPath
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InSoftClassPath	Type: struct FSoftClassPath	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PathString	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::BreakSoftClassPath(struct FSoftClassPath InSoftClassPath, struct FString* PathString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BreakSoftClassPath");

	struct UKismetSystemLibrary_BreakSoftClassPath_Params {
		struct FSoftClassPath InSoftClassPath;			//Offset: 0 | ElementSize: 24
		struct FString PathString;			//Offset: 24 | ElementSize: 16
	};
	UKismetSystemLibrary_BreakSoftClassPath_Params params;
	params.InSoftClassPath = InSoftClassPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PathString != nullptr)
		*PathString = params.PathString;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.BreakSoftObjectPath
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: InSoftObjectPath	Type: struct FSoftObjectPath	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PathString	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::BreakSoftObjectPath(struct FSoftObjectPath InSoftObjectPath, struct FString* PathString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.BreakSoftObjectPath");

	struct UKismetSystemLibrary_BreakSoftObjectPath_Params {
		struct FSoftObjectPath InSoftObjectPath;			//Offset: 0 | ElementSize: 24
		struct FString PathString;			//Offset: 24 | ElementSize: 16
	};
	UKismetSystemLibrary_BreakSoftObjectPath_Params params;
	params.InSoftObjectPath = InSoftObjectPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PathString != nullptr)
		*PathString = params.PathString;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CancelTransaction
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::CancelTransaction(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CancelTransaction");

	struct UKismetSystemLibrary_CancelTransaction_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_CancelTransaction_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CanLaunchURL
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CanLaunchURL(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CanLaunchURL");

	struct UKismetSystemLibrary_CanLaunchURL_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_CanLaunchURL_Params params;
	params.URL = URL;

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
// Function Engine.KismetSystemLibrary.CapsuleOverlapActors
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CapsulePos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActorClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleOverlapActors(class UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleOverlapActors");

	struct UKismetSystemLibrary_CapsuleOverlapActors_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector CapsulePos;			//Offset: 8 | ElementSize: 12
		float Radius;			//Offset: 20 | ElementSize: 4
		float HalfHeight;			//Offset: 24 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		class UObject* ActorClassFilter;			//Offset: 48 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TArray<class AActor*> OutActors;			//Offset: 72 | ElementSize: 16
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CapsulePos = CapsulePos;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleOverlapComponents
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CapsulePos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ComponentClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleOverlapComponents(class UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleOverlapComponents");

	struct UKismetSystemLibrary_CapsuleOverlapComponents_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector CapsulePos;			//Offset: 8 | ElementSize: 12
		float Radius;			//Offset: 20 | ElementSize: 4
		float HalfHeight;			//Offset: 24 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		class UObject* ComponentClassFilter;			//Offset: 48 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TArray<class UPrimitiveComponent*> OutComponents;			//Offset: 72 | ElementSize: 16
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CapsulePos = CapsulePos;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceMulti
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceMulti");

	struct UKismetSystemLibrary_CapsuleTraceMulti_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 40 | ElementSize: 1
		bool bTraceComplex;			//Offset: 41 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 72 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 88 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 92 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 108 | ElementSize: 16
		float DrawTime;			//Offset: 124 | ElementSize: 4
		bool ReturnValue;			//Offset: 128 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile");

	struct UKismetSystemLibrary_CapsuleTraceMultiByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		struct FName ProfileName;			//Offset: 40 | ElementSize: 8
		bool bTraceComplex;			//Offset: 48 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 72 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 80 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 96 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 100 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 116 | ElementSize: 16
		float DrawTime;			//Offset: 132 | ElementSize: 4
		bool ReturnValue;			//Offset: 136 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceMultiByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects");

	struct UKismetSystemLibrary_CapsuleTraceMultiForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 40 | ElementSize: 16
		bool bTraceComplex;			//Offset: 56 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 88 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 104 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 108 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 124 | ElementSize: 16
		float DrawTime;			//Offset: 140 | ElementSize: 4
		bool ReturnValue;			//Offset: 144 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceSingle
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceSingle");

	struct UKismetSystemLibrary_CapsuleTraceSingle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 40 | ElementSize: 1
		bool bTraceComplex;			//Offset: 41 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 68 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 204 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 208 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 224 | ElementSize: 16
		float DrawTime;			//Offset: 240 | ElementSize: 4
		bool ReturnValue;			//Offset: 244 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile");

	struct UKismetSystemLibrary_CapsuleTraceSingleByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		struct FName ProfileName;			//Offset: 40 | ElementSize: 8
		bool bTraceComplex;			//Offset: 48 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 72 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 76 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 212 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 216 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 232 | ElementSize: 16
		float DrawTime;			//Offset: 248 | ElementSize: 4
		bool ReturnValue;			//Offset: 252 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceSingleByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::CapsuleTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects");

	struct UKismetSystemLibrary_CapsuleTraceSingleForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		float HalfHeight;			//Offset: 36 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 40 | ElementSize: 16
		bool bTraceComplex;			//Offset: 56 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 84 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 220 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 224 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 240 | ElementSize: 16
		float DrawTime;			//Offset: 256 | ElementSize: 4
		bool ReturnValue;			//Offset: 260 | ElementSize: 1
	};
	UKismetSystemLibrary_CapsuleTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.CollectGarbage
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::CollectGarbage() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CollectGarbage");

	struct UKismetSystemLibrary_CollectGarbage_Params {
	};
	UKismetSystemLibrary_CollectGarbage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ComponentOverlapActors
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Component	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ComponentTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActorClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ComponentOverlapActors");

	struct UKismetSystemLibrary_ComponentOverlapActors_Params {
		class UPrimitiveComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FTransform ComponentTransform;			//Offset: 16 | ElementSize: 48
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 64 | ElementSize: 16
		class UObject* ActorClassFilter;			//Offset: 80 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 88 | ElementSize: 16
		TArray<class AActor*> OutActors;			//Offset: 104 | ElementSize: 16
		bool ReturnValue;			//Offset: 120 | ElementSize: 1
	};
	UKismetSystemLibrary_ComponentOverlapActors_Params params;
	params.Component = Component;
	params.ComponentTransform = ComponentTransform;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ComponentOverlapComponents
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Component	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ComponentTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ComponentClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ComponentOverlapComponents");

	struct UKismetSystemLibrary_ComponentOverlapComponents_Params {
		class UPrimitiveComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FTransform ComponentTransform;			//Offset: 16 | ElementSize: 48
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 64 | ElementSize: 16
		class UObject* ComponentClassFilter;			//Offset: 80 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 88 | ElementSize: 16
		TArray<class UPrimitiveComponent*> OutComponents;			//Offset: 104 | ElementSize: 16
		bool ReturnValue;			//Offset: 120 | ElementSize: 1
	};
	UKismetSystemLibrary_ComponentOverlapComponents_Params params;
	params.Component = Component;
	params.ComponentTransform = ComponentTransform;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ControlScreensaver
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: bAllowScreenSaver	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ControlScreensaver(bool bAllowScreenSaver) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ControlScreensaver");

	struct UKismetSystemLibrary_ControlScreensaver_Params {
		bool bAllowScreenSaver;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_ControlScreensaver_Params params;
	params.bAllowScreenSaver = bAllowScreenSaver;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.Conv_ClassToSoftClassReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UObject*	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UClass>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UClass> UKismetSystemLibrary::Conv_ClassToSoftClassReference(class UObject*& Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_ClassToSoftClassReference");

	struct UKismetSystemLibrary_Conv_ClassToSoftClassReference_Params {
		class UObject* Class;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UClass> ReturnValue;			//Offset: 8 | ElementSize: 40
	};
	UKismetSystemLibrary_Conv_ClassToSoftClassReference_Params params;
	params.Class = Class;

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
// Function Engine.KismetSystemLibrary.Conv_InterfaceToObject
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Interface	Type: TScriptInterface<class UInterface>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_InterfaceToObject");

	struct UKismetSystemLibrary_Conv_InterfaceToObject_Params {
		TScriptInterface<class UInterface> Interface;			//Offset: 0 | ElementSize: 16
		class UObject* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_Conv_InterfaceToObject_Params params;
	params.Interface = Interface;

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
// Function Engine.KismetSystemLibrary.Conv_ObjectToSoftObjectReference
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UObject>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UObject> UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_ObjectToSoftObjectReference");

	struct UKismetSystemLibrary_Conv_ObjectToSoftObjectReference_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UObject> ReturnValue;			//Offset: 8 | ElementSize: 40
	};
	UKismetSystemLibrary_Conv_ObjectToSoftObjectReference_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.Conv_PrimaryAssetIdToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::Conv_PrimaryAssetIdToString(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_PrimaryAssetIdToString");

	struct UKismetSystemLibrary_Conv_PrimaryAssetIdToString_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_Conv_PrimaryAssetIdToString_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.Conv_PrimaryAssetTypeToString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetType	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::Conv_PrimaryAssetTypeToString(struct FPrimaryAssetType PrimaryAssetType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_PrimaryAssetTypeToString");

	struct UKismetSystemLibrary_Conv_PrimaryAssetTypeToString_Params {
		struct FPrimaryAssetType PrimaryAssetType;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_Conv_PrimaryAssetTypeToString_Params params;
	params.PrimaryAssetType = PrimaryAssetType;

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
// Function Engine.KismetSystemLibrary.Conv_SoftClassPathToSoftClassRef
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftClassPath	Type: struct FSoftClassPath	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UClass>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UClass> UKismetSystemLibrary::Conv_SoftClassPathToSoftClassRef(const struct FSoftClassPath& SoftClassPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftClassPathToSoftClassRef");

	struct UKismetSystemLibrary_Conv_SoftClassPathToSoftClassRef_Params {
		struct FSoftClassPath SoftClassPath;			//Offset: 0 | ElementSize: 24
		TAssetPtr<class UClass> ReturnValue;			//Offset: 24 | ElementSize: 40
	};
	UKismetSystemLibrary_Conv_SoftClassPathToSoftClassRef_Params params;
	params.SoftClassPath = SoftClassPath;

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
// Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftClass	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::Conv_SoftClassReferenceToClass(const TAssetPtr<class UClass>& SoftClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass");

	struct UKismetSystemLibrary_Conv_SoftClassReferenceToClass_Params {
		TAssetPtr<class UClass> SoftClass;			//Offset: 0 | ElementSize: 40
		class UObject* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetSystemLibrary_Conv_SoftClassReferenceToClass_Params params;
	params.SoftClass = SoftClass;

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
// Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToString
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftClassReference	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::Conv_SoftClassReferenceToString(const TAssetPtr<class UClass>& SoftClassReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToString");

	struct UKismetSystemLibrary_Conv_SoftClassReferenceToString_Params {
		TAssetPtr<class UClass> SoftClassReference;			//Offset: 0 | ElementSize: 40
		struct FString ReturnValue;			//Offset: 40 | ElementSize: 16
	};
	UKismetSystemLibrary_Conv_SoftClassReferenceToString_Params params;
	params.SoftClassReference = SoftClassReference;

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
// Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToObject
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftObject	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(const TAssetPtr<class UObject>& SoftObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToObject");

	struct UKismetSystemLibrary_Conv_SoftObjectReferenceToObject_Params {
		TAssetPtr<class UObject> SoftObject;			//Offset: 0 | ElementSize: 40
		class UObject* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetSystemLibrary_Conv_SoftObjectReferenceToObject_Params params;
	params.SoftObject = SoftObject;

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
// Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToString
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftObjectReference	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::Conv_SoftObjectReferenceToString(const TAssetPtr<class UObject>& SoftObjectReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToString");

	struct UKismetSystemLibrary_Conv_SoftObjectReferenceToString_Params {
		TAssetPtr<class UObject> SoftObjectReference;			//Offset: 0 | ElementSize: 40
		struct FString ReturnValue;			//Offset: 40 | ElementSize: 16
	};
	UKismetSystemLibrary_Conv_SoftObjectReferenceToString_Params params;
	params.SoftObjectReference = SoftObjectReference;

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
// Function Engine.KismetSystemLibrary.Conv_SoftObjPathToSoftObjRef
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftObjectPath	Type: struct FSoftObjectPath	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UObject>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UObject> UKismetSystemLibrary::Conv_SoftObjPathToSoftObjRef(const struct FSoftObjectPath& SoftObjectPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftObjPathToSoftObjRef");

	struct UKismetSystemLibrary_Conv_SoftObjPathToSoftObjRef_Params {
		struct FSoftObjectPath SoftObjectPath;			//Offset: 0 | ElementSize: 24
		TAssetPtr<class UObject> ReturnValue;			//Offset: 24 | ElementSize: 40
	};
	UKismetSystemLibrary_Conv_SoftObjPathToSoftObjRef_Params params;
	params.SoftObjectPath = SoftObjectPath;

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
// Function Engine.KismetSystemLibrary.ConvertToAbsolutePath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::ConvertToAbsolutePath(struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ConvertToAbsolutePath");

	struct UKismetSystemLibrary_ConvertToAbsolutePath_Params {
		struct FString Filename;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_ConvertToAbsolutePath_Params params;
	params.Filename = Filename;

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
// Function Engine.KismetSystemLibrary.ConvertToRelativePath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::ConvertToRelativePath(struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ConvertToRelativePath");

	struct UKismetSystemLibrary_ConvertToRelativePath_Params {
		struct FString Filename;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_ConvertToRelativePath_Params params;
	params.Filename = Filename;

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
// Function Engine.KismetSystemLibrary.CreateCopyForUndoBuffer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ObjectToModify	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::CreateCopyForUndoBuffer(class UObject* ObjectToModify) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.CreateCopyForUndoBuffer");

	struct UKismetSystemLibrary_CreateCopyForUndoBuffer_Params {
		class UObject* ObjectToModify;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_CreateCopyForUndoBuffer_Params params;
	params.ObjectToModify = ObjectToModify;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.Delay
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::Delay(class UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Delay");

	struct UKismetSystemLibrary_Delay_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLatentActionInfo LatentInfo;			//Offset: 16 | ElementSize: 24
	};
	UKismetSystemLibrary_Delay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Duration = Duration;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DoesImplementInterface
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: TestObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Interface	Type: class UInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::DoesImplementInterface(class UObject* TestObject, class UInterface* Interface) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DoesImplementInterface");

	struct UKismetSystemLibrary_DoesImplementInterface_Params {
		class UObject* TestObject;			//Offset: 0 | ElementSize: 8
		class UInterface* Interface;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_DoesImplementInterface_Params params;
	params.TestObject = TestObject;
	params.Interface = Interface;

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
// Function Engine.KismetSystemLibrary.DrawDebugArrow
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineStart	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineEnd	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ArrowSize	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugArrow(class UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, float ArrowSize, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugArrow");

	struct UKismetSystemLibrary_DrawDebugArrow_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector LineStart;			//Offset: 8 | ElementSize: 12
		struct FVector LineEnd;			//Offset: 20 | ElementSize: 12
		float ArrowSize;			//Offset: 32 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 36 | ElementSize: 16
		float Duration;			//Offset: 52 | ElementSize: 4
		float Thickness;			//Offset: 56 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugArrow_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.ArrowSize = ArrowSize;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugBox
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Center	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Extent	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rotation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugBox(class UObject* WorldContextObject, struct FVector Center, struct FVector Extent, struct FLinearColor LineColor, struct FRotator Rotation, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugBox");

	struct UKismetSystemLibrary_DrawDebugBox_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Center;			//Offset: 8 | ElementSize: 12
		struct FVector Extent;			//Offset: 20 | ElementSize: 12
		struct FLinearColor LineColor;			//Offset: 32 | ElementSize: 16
		struct FRotator Rotation;			//Offset: 48 | ElementSize: 12
		float Duration;			//Offset: 60 | ElementSize: 4
		float Thickness;			//Offset: 64 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Extent = Extent;
	params.LineColor = LineColor;
	params.Rotation = Rotation;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCamera
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: CameraActor	Type: class ACameraActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CameraColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCamera(class ACameraActor* CameraActor, struct FLinearColor CameraColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCamera");

	struct UKismetSystemLibrary_DrawDebugCamera_Params {
		class ACameraActor* CameraActor;			//Offset: 0 | ElementSize: 8
		struct FLinearColor CameraColor;			//Offset: 8 | ElementSize: 16
		float Duration;			//Offset: 24 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugCamera_Params params;
	params.CameraActor = CameraActor;
	params.CameraColor = CameraColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCapsule
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Center	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rotation	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCapsule(class UObject* WorldContextObject, struct FVector Center, float HalfHeight, float Radius, struct FRotator Rotation, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCapsule");

	struct UKismetSystemLibrary_DrawDebugCapsule_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Center;			//Offset: 8 | ElementSize: 12
		float HalfHeight;			//Offset: 20 | ElementSize: 4
		float Radius;			//Offset: 24 | ElementSize: 4
		struct FRotator Rotation;			//Offset: 28 | ElementSize: 12
		struct FLinearColor LineColor;			//Offset: 40 | ElementSize: 16
		float Duration;			//Offset: 56 | ElementSize: 4
		float Thickness;			//Offset: 60 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugCapsule_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.HalfHeight = HalfHeight;
	params.Radius = Radius;
	params.Rotation = Rotation;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCircle
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Center	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumSegments	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: YAxis	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ZAxis	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bDrawAxis	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCircle(class UObject* WorldContextObject, struct FVector Center, float Radius, int32_t NumSegments, struct FLinearColor LineColor, float Duration, float Thickness, struct FVector YAxis, struct FVector ZAxis, bool bDrawAxis) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCircle");

	struct UKismetSystemLibrary_DrawDebugCircle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Center;			//Offset: 8 | ElementSize: 12
		float Radius;			//Offset: 20 | ElementSize: 4
		int32_t NumSegments;			//Offset: 24 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 28 | ElementSize: 16
		float Duration;			//Offset: 44 | ElementSize: 4
		float Thickness;			//Offset: 48 | ElementSize: 4
		struct FVector YAxis;			//Offset: 52 | ElementSize: 12
		struct FVector ZAxis;			//Offset: 64 | ElementSize: 12
		bool bDrawAxis;			//Offset: 76 | ElementSize: 1
	};
	UKismetSystemLibrary_DrawDebugCircle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.NumSegments = NumSegments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.YAxis = YAxis;
	params.ZAxis = ZAxis;
	params.bDrawAxis = bDrawAxis;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCone
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Direction	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Length	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AngleWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AngleHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumSides	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCone(class UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCone");

	struct UKismetSystemLibrary_DrawDebugCone_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Origin;			//Offset: 8 | ElementSize: 12
		struct FVector Direction;			//Offset: 20 | ElementSize: 12
		float Length;			//Offset: 32 | ElementSize: 4
		float AngleWidth;			//Offset: 36 | ElementSize: 4
		float AngleHeight;			//Offset: 40 | ElementSize: 4
		int32_t NumSides;			//Offset: 44 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 48 | ElementSize: 16
		float Duration;			//Offset: 64 | ElementSize: 4
		float Thickness;			//Offset: 68 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugCone_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Direction = Direction;
	params.Length = Length;
	params.AngleWidth = AngleWidth;
	params.AngleHeight = AngleHeight;
	params.NumSides = NumSides;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugConeInDegrees
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Direction	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Length	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AngleWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AngleHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumSides	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugConeInDegrees(class UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugConeInDegrees");

	struct UKismetSystemLibrary_DrawDebugConeInDegrees_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Origin;			//Offset: 8 | ElementSize: 12
		struct FVector Direction;			//Offset: 20 | ElementSize: 12
		float Length;			//Offset: 32 | ElementSize: 4
		float AngleWidth;			//Offset: 36 | ElementSize: 4
		float AngleHeight;			//Offset: 40 | ElementSize: 4
		int32_t NumSides;			//Offset: 44 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 48 | ElementSize: 16
		float Duration;			//Offset: 64 | ElementSize: 4
		float Thickness;			//Offset: 68 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugConeInDegrees_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Direction = Direction;
	params.Length = Length;
	params.AngleWidth = AngleWidth;
	params.AngleHeight = AngleHeight;
	params.NumSides = NumSides;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCoordinateSystem
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AxisLoc	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AxisRot	Type: struct FRotator	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCoordinateSystem(class UObject* WorldContextObject, struct FVector AxisLoc, struct FRotator AxisRot, float Scale, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCoordinateSystem");

	struct UKismetSystemLibrary_DrawDebugCoordinateSystem_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector AxisLoc;			//Offset: 8 | ElementSize: 12
		struct FRotator AxisRot;			//Offset: 20 | ElementSize: 12
		float Scale;			//Offset: 32 | ElementSize: 4
		float Duration;			//Offset: 36 | ElementSize: 4
		float Thickness;			//Offset: 40 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugCoordinateSystem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AxisLoc = AxisLoc;
	params.AxisRot = AxisRot;
	params.Scale = Scale;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugCylinder
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Segments	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugCylinder(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugCylinder");

	struct UKismetSystemLibrary_DrawDebugCylinder_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		int32_t Segments;			//Offset: 36 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 40 | ElementSize: 16
		float Duration;			//Offset: 56 | ElementSize: 4
		float Thickness;			//Offset: 60 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugCylinder_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FloatHistory	Type: struct FDebugFloatHistory	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawSize	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, struct FVector DrawLocation, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation");

	struct UKismetSystemLibrary_DrawDebugFloatHistoryLocation_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FDebugFloatHistory FloatHistory;			//Offset: 8 | ElementSize: 32
		struct FVector DrawLocation;			//Offset: 40 | ElementSize: 12
		struct FVector2D DrawSize;			//Offset: 52 | ElementSize: 8
		struct FLinearColor DrawColor;			//Offset: 60 | ElementSize: 16
		float Duration;			//Offset: 76 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugFloatHistoryLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FloatHistory = FloatHistory;
	params.DrawLocation = DrawLocation;
	params.DrawSize = DrawSize;
	params.DrawColor = DrawColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FloatHistory	Type: struct FDebugFloatHistory	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: DrawSize	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform");

	struct UKismetSystemLibrary_DrawDebugFloatHistoryTransform_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FDebugFloatHistory FloatHistory;			//Offset: 8 | ElementSize: 32
		struct FTransform DrawTransform;			//Offset: 48 | ElementSize: 48
		struct FVector2D DrawSize;			//Offset: 96 | ElementSize: 8
		struct FLinearColor DrawColor;			//Offset: 104 | ElementSize: 16
		float Duration;			//Offset: 120 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugFloatHistoryTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FloatHistory = FloatHistory;
	params.DrawTransform = DrawTransform;
	params.DrawSize = DrawSize;
	params.DrawColor = DrawColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugFrustum
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FrustumTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: FrustumColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, struct FLinearColor FrustumColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugFrustum");

	struct UKismetSystemLibrary_DrawDebugFrustum_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTransform FrustumTransform;			//Offset: 16 | ElementSize: 48
		struct FLinearColor FrustumColor;			//Offset: 64 | ElementSize: 16
		float Duration;			//Offset: 80 | ElementSize: 4
		float Thickness;			//Offset: 84 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugFrustum_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FrustumTransform = FrustumTransform;
	params.FrustumColor = FrustumColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugLine
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineStart	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineEnd	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugLine(class UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugLine");

	struct UKismetSystemLibrary_DrawDebugLine_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector LineStart;			//Offset: 8 | ElementSize: 12
		struct FVector LineEnd;			//Offset: 20 | ElementSize: 12
		struct FLinearColor LineColor;			//Offset: 32 | ElementSize: 16
		float Duration;			//Offset: 48 | ElementSize: 4
		float Thickness;			//Offset: 52 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugLine_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugPlane
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaneCoordinates	Type: struct FPlane	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Size	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaneColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, struct FVector Location, float Size, struct FLinearColor PlaneColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugPlane");

	struct UKismetSystemLibrary_DrawDebugPlane_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FPlane PlaneCoordinates;			//Offset: 16 | ElementSize: 16
		struct FVector Location;			//Offset: 32 | ElementSize: 12
		float Size;			//Offset: 44 | ElementSize: 4
		struct FLinearColor PlaneColor;			//Offset: 48 | ElementSize: 16
		float Duration;			//Offset: 64 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugPlane_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlaneCoordinates = PlaneCoordinates;
	params.Location = Location;
	params.Size = Size;
	params.PlaneColor = PlaneColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugPoint
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Position	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Size	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PointColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugPoint(class UObject* WorldContextObject, struct FVector Position, float Size, struct FLinearColor PointColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugPoint");

	struct UKismetSystemLibrary_DrawDebugPoint_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Position;			//Offset: 8 | ElementSize: 12
		float Size;			//Offset: 20 | ElementSize: 4
		struct FLinearColor PointColor;			//Offset: 24 | ElementSize: 16
		float Duration;			//Offset: 40 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Position = Position;
	params.Size = Size;
	params.PointColor = PointColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugSphere
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Center	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Segments	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LineColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugSphere(class UObject* WorldContextObject, struct FVector Center, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugSphere");

	struct UKismetSystemLibrary_DrawDebugSphere_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Center;			//Offset: 8 | ElementSize: 12
		float Radius;			//Offset: 20 | ElementSize: 4
		int32_t Segments;			//Offset: 24 | ElementSize: 4
		struct FLinearColor LineColor;			//Offset: 28 | ElementSize: 16
		float Duration;			//Offset: 44 | ElementSize: 4
		float Thickness;			//Offset: 48 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugSphere_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.DrawDebugString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextLocation	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Text	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TestBaseActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::DrawDebugString(class UObject* WorldContextObject, struct FVector TextLocation, struct FString Text, class AActor* TestBaseActor, struct FLinearColor TextColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.DrawDebugString");

	struct UKismetSystemLibrary_DrawDebugString_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector TextLocation;			//Offset: 8 | ElementSize: 12
		struct FString Text;			//Offset: 24 | ElementSize: 16
		class AActor* TestBaseActor;			//Offset: 40 | ElementSize: 8
		struct FLinearColor TextColor;			//Offset: 48 | ElementSize: 16
		float Duration;			//Offset: 64 | ElementSize: 4
	};
	UKismetSystemLibrary_DrawDebugString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextLocation = TextLocation;
	params.Text = Text;
	params.TestBaseActor = TestBaseActor;
	params.TextColor = TextColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.EndTransaction
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::EndTransaction() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.EndTransaction");

	struct UKismetSystemLibrary_EndTransaction_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_EndTransaction_Params params;

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
// Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::EqualEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetId");

	struct UKismetSystemLibrary_EqualEqual_PrimaryAssetId_Params {
		struct FPrimaryAssetId A;			//Offset: 0 | ElementSize: 16
		struct FPrimaryAssetId B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetSystemLibrary_EqualEqual_PrimaryAssetId_Params params;
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
// Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetType
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::EqualEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetType");

	struct UKismetSystemLibrary_EqualEqual_PrimaryAssetType_Params {
		struct FPrimaryAssetType A;			//Offset: 0 | ElementSize: 8
		struct FPrimaryAssetType B;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_EqualEqual_PrimaryAssetType_Params params;
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
// Function Engine.KismetSystemLibrary.EqualEqual_SoftClassReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::EqualEqual_SoftClassReference(const TAssetPtr<class UClass>& A, const TAssetPtr<class UClass>& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.EqualEqual_SoftClassReference");

	struct UKismetSystemLibrary_EqualEqual_SoftClassReference_Params {
		TAssetPtr<class UClass> A;			//Offset: 0 | ElementSize: 40
		TAssetPtr<class UClass> B;			//Offset: 40 | ElementSize: 40
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_EqualEqual_SoftClassReference_Params params;
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
// Function Engine.KismetSystemLibrary.EqualEqual_SoftObjectReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::EqualEqual_SoftObjectReference(const TAssetPtr<class UObject>& A, const TAssetPtr<class UObject>& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.EqualEqual_SoftObjectReference");

	struct UKismetSystemLibrary_EqualEqual_SoftObjectReference_Params {
		TAssetPtr<class UObject> A;			//Offset: 0 | ElementSize: 40
		TAssetPtr<class UObject> B;			//Offset: 40 | ElementSize: 40
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_EqualEqual_SoftObjectReference_Params params;
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
// Function Engine.KismetSystemLibrary.ExecuteConsoleCommand
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Command	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpecificPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ExecuteConsoleCommand(class UObject* WorldContextObject, struct FString Command, class APlayerController* SpecificPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ExecuteConsoleCommand");

	struct UKismetSystemLibrary_ExecuteConsoleCommand_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FString Command;			//Offset: 8 | ElementSize: 16
		class APlayerController* SpecificPlayer;			//Offset: 24 | ElementSize: 8
	};
	UKismetSystemLibrary_ExecuteConsoleCommand_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Command = Command;
	params.SpecificPlayer = SpecificPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.FlushDebugStrings
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::FlushDebugStrings(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.FlushDebugStrings");

	struct UKismetSystemLibrary_FlushDebugStrings_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_FlushDebugStrings_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.FlushPersistentDebugLines
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::FlushPersistentDebugLines(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.FlushPersistentDebugLines");

	struct UKismetSystemLibrary_FlushPersistentDebugLines_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_FlushPersistentDebugLines_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ForceCloseAdBanner
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::ForceCloseAdBanner() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ForceCloseAdBanner");

	struct UKismetSystemLibrary_ForceCloseAdBanner_Params {
	};
	UKismetSystemLibrary_ForceCloseAdBanner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetActorBounds
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxExtent	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetActorBounds");

	struct UKismetSystemLibrary_GetActorBounds_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FVector Origin;			//Offset: 8 | ElementSize: 12
		struct FVector BoxExtent;			//Offset: 20 | ElementSize: 12
	};
	UKismetSystemLibrary_GetActorBounds_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetActorListFromComponentList
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: ComponentList	Type: TArray<class UPrimitiveComponent*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ActorClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutActorList	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::GetActorListFromComponentList(const TArray<class UPrimitiveComponent*>& ComponentList, class UObject* ActorClassFilter, TArray<class AActor*>* OutActorList) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetActorListFromComponentList");

	struct UKismetSystemLibrary_GetActorListFromComponentList_Params {
		TArray<class UPrimitiveComponent*> ComponentList;			//Offset: 0 | ElementSize: 16
		class UObject* ActorClassFilter;			//Offset: 16 | ElementSize: 8
		TArray<class AActor*> OutActorList;			//Offset: 24 | ElementSize: 16
	};
	UKismetSystemLibrary_GetActorListFromComponentList_Params params;
	params.ComponentList = ComponentList;
	params.ActorClassFilter = ActorClassFilter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActorList != nullptr)
		*OutActorList = params.OutActorList;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetAdIDCount
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetAdIDCount() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetAdIDCount");

	struct UKismetSystemLibrary_GetAdIDCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_GetAdIDCount_Params params;

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
// Function Engine.KismetSystemLibrary.GetClassDisplayName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetClassDisplayName(class UObject* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetClassDisplayName");

	struct UKismetSystemLibrary_GetClassDisplayName_Params {
		class UObject* Class;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetClassDisplayName_Params params;
	params.Class = Class;

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
// Function Engine.KismetSystemLibrary.GetClassFromPrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::GetClassFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetClassFromPrimaryAssetId");

	struct UKismetSystemLibrary_GetClassFromPrimaryAssetId_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		class UObject* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_GetClassFromPrimaryAssetId_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.GetCommandLine
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetCommandLine() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetCommandLine");

	struct UKismetSystemLibrary_GetCommandLine_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetCommandLine_Params params;

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
// Function Engine.KismetSystemLibrary.GetComponentBounds
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Component	Type: class USceneComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxExtent	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SphereRadius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetComponentBounds");

	struct UKismetSystemLibrary_GetComponentBounds_Params {
		class USceneComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FVector Origin;			//Offset: 8 | ElementSize: 12
		struct FVector BoxExtent;			//Offset: 20 | ElementSize: 12
		float SphereRadius;			//Offset: 32 | ElementSize: 4
	};
	UKismetSystemLibrary_GetComponentBounds_Params params;
	params.Component = Component;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetConsoleVariableBoolValue
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: VariableName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::GetConsoleVariableBoolValue(struct FString VariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetConsoleVariableBoolValue");

	struct UKismetSystemLibrary_GetConsoleVariableBoolValue_Params {
		struct FString VariableName;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_GetConsoleVariableBoolValue_Params params;
	params.VariableName = VariableName;

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
// Function Engine.KismetSystemLibrary.GetConsoleVariableFloatValue
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: VariableName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::GetConsoleVariableFloatValue(struct FString VariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetConsoleVariableFloatValue");

	struct UKismetSystemLibrary_GetConsoleVariableFloatValue_Params {
		struct FString VariableName;			//Offset: 0 | ElementSize: 16
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_GetConsoleVariableFloatValue_Params params;
	params.VariableName = VariableName;

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
// Function Engine.KismetSystemLibrary.GetConsoleVariableIntValue
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: VariableName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetConsoleVariableIntValue(struct FString VariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetConsoleVariableIntValue");

	struct UKismetSystemLibrary_GetConsoleVariableIntValue_Params {
		struct FString VariableName;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_GetConsoleVariableIntValue_Params params;
	params.VariableName = VariableName;

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
// Function Engine.KismetSystemLibrary.GetConvenientWindowedResolutions
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Resolutions	Type: TArray<struct FIntPoint>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetConvenientWindowedResolutions");

	struct UKismetSystemLibrary_GetConvenientWindowedResolutions_Params {
		TArray<struct FIntPoint> Resolutions;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_GetConvenientWindowedResolutions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Resolutions != nullptr)
		*Resolutions = params.Resolutions;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetCurrentBundleState
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bForceCurrentState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutBundles	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::GetCurrentBundleState(struct FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<struct FName>* OutBundles) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetCurrentBundleState");

	struct UKismetSystemLibrary_GetCurrentBundleState_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		bool bForceCurrentState;			//Offset: 16 | ElementSize: 1
		TArray<struct FName> OutBundles;			//Offset: 24 | ElementSize: 16
		bool ReturnValue;			//Offset: 40 | ElementSize: 1
	};
	UKismetSystemLibrary_GetCurrentBundleState_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bForceCurrentState = bForceCurrentState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutBundles != nullptr)
		*OutBundles = params.OutBundles;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetDefaultLanguage
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetDefaultLanguage() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetDefaultLanguage");

	struct UKismetSystemLibrary_GetDefaultLanguage_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetDefaultLanguage_Params params;

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
// Function Engine.KismetSystemLibrary.GetDefaultLocale
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetDefaultLocale() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetDefaultLocale");

	struct UKismetSystemLibrary_GetDefaultLocale_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetDefaultLocale_Params params;

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
// Function Engine.KismetSystemLibrary.GetDeviceId
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetDeviceId() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetDeviceId");

	struct UKismetSystemLibrary_GetDeviceId_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetDeviceId_Params params;

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
// Function Engine.KismetSystemLibrary.GetDisplayName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetDisplayName(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetDisplayName");

	struct UKismetSystemLibrary_GetDisplayName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetDisplayName_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetEngineVersion
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetEngineVersion() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetEngineVersion");

	struct UKismetSystemLibrary_GetEngineVersion_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetEngineVersion_Params params;

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
// Function Engine.KismetSystemLibrary.GetFrameCount
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int64_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int64_t UKismetSystemLibrary::GetFrameCount() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetFrameCount");

	struct UKismetSystemLibrary_GetFrameCount_Params {
		int64_t ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_GetFrameCount_Params params;

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
// Function Engine.KismetSystemLibrary.GetGameBundleId
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetGameBundleId() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetGameBundleId");

	struct UKismetSystemLibrary_GetGameBundleId_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetGameBundleId_Params params;

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
// Function Engine.KismetSystemLibrary.GetGameName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetGameName() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetGameName");

	struct UKismetSystemLibrary_GetGameName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetGameName_Params params;

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
// Function Engine.KismetSystemLibrary.GetGamepadButtonGlyph
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ButtonKey	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ControllerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTexture2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTexture2D* UKismetSystemLibrary::GetGamepadButtonGlyph(struct FString ButtonKey, int32_t ControllerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetGamepadButtonGlyph");

	struct UKismetSystemLibrary_GetGamepadButtonGlyph_Params {
		struct FString ButtonKey;			//Offset: 0 | ElementSize: 16
		int32_t ControllerIndex;			//Offset: 16 | ElementSize: 4
		class UTexture2D* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UKismetSystemLibrary_GetGamepadButtonGlyph_Params params;
	params.ButtonKey = ButtonKey;
	params.ControllerIndex = ControllerIndex;

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
// Function Engine.KismetSystemLibrary.GetGamepadControllerName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetGamepadControllerName(int32_t ControllerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetGamepadControllerName");

	struct UKismetSystemLibrary_GetGamepadControllerName_Params {
		int32_t ControllerId;			//Offset: 0 | ElementSize: 4
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetGamepadControllerName_Params params;
	params.ControllerId = ControllerId;

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
// Function Engine.KismetSystemLibrary.GetGameTimeInSeconds
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::GetGameTimeInSeconds(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetGameTimeInSeconds");

	struct UKismetSystemLibrary_GetGameTimeInSeconds_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UKismetSystemLibrary_GetGameTimeInSeconds_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function Engine.KismetSystemLibrary.GetLocalCurrencyCode
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetLocalCurrencyCode() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetLocalCurrencyCode");

	struct UKismetSystemLibrary_GetLocalCurrencyCode_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetLocalCurrencyCode_Params params;

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
// Function Engine.KismetSystemLibrary.GetLocalCurrencySymbol
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetLocalCurrencySymbol() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetLocalCurrencySymbol");

	struct UKismetSystemLibrary_GetLocalCurrencySymbol_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetLocalCurrencySymbol_Params params;

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
// Function Engine.KismetSystemLibrary.GetMinYResolutionFor3DView
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetMinYResolutionFor3DView() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetMinYResolutionFor3DView");

	struct UKismetSystemLibrary_GetMinYResolutionFor3DView_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_GetMinYResolutionFor3DView_Params params;

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
// Function Engine.KismetSystemLibrary.GetMinYResolutionForUI
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetMinYResolutionForUI() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetMinYResolutionForUI");

	struct UKismetSystemLibrary_GetMinYResolutionForUI_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_GetMinYResolutionForUI_Params params;

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
// Function Engine.KismetSystemLibrary.GetObjectFromPrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::GetObjectFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetObjectFromPrimaryAssetId");

	struct UKismetSystemLibrary_GetObjectFromPrimaryAssetId_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		class UObject* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_GetObjectFromPrimaryAssetId_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.GetObjectName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetObjectName(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetObjectName");

	struct UKismetSystemLibrary_GetObjectName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetObjectName_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetOuterObject
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::GetOuterObject(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetOuterObject");

	struct UKismetSystemLibrary_GetOuterObject_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		class UObject* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_GetOuterObject_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetPathName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetPathName(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPathName");

	struct UKismetSystemLibrary_GetPathName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPathName_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetPlatformUserDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetPlatformUserDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPlatformUserDir");

	struct UKismetSystemLibrary_GetPlatformUserDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPlatformUserDir_Params params;

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
// Function Engine.KismetSystemLibrary.GetPlatformUserName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetPlatformUserName() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPlatformUserName");

	struct UKismetSystemLibrary_GetPlatformUserName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPlatformUserName_Params params;

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
// Function Engine.KismetSystemLibrary.GetPreferredLanguages
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UKismetSystemLibrary::GetPreferredLanguages() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPreferredLanguages");

	struct UKismetSystemLibrary_GetPreferredLanguages_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPreferredLanguages_Params params;

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
// Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromClass
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FPrimaryAssetId	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromClass(class UObject* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromClass");

	struct UKismetSystemLibrary_GetPrimaryAssetIdFromClass_Params {
		class UObject* Class;			//Offset: 0 | ElementSize: 8
		struct FPrimaryAssetId ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetIdFromClass_Params params;
	params.Class = Class;

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
// Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromObject
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FPrimaryAssetId	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromObject(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromObject");

	struct UKismetSystemLibrary_GetPrimaryAssetIdFromObject_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FPrimaryAssetId ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetIdFromObject_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftClassReference
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftClassReference	Type: TAssetPtr<class UClass>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FPrimaryAssetId	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(TAssetPtr<class UClass> SoftClassReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftClassReference");

	struct UKismetSystemLibrary_GetPrimaryAssetIdFromSoftClassReference_Params {
		TAssetPtr<class UClass> SoftClassReference;			//Offset: 0 | ElementSize: 40
		struct FPrimaryAssetId ReturnValue;			//Offset: 40 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetIdFromSoftClassReference_Params params;
	params.SoftClassReference = SoftClassReference;

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
// Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftObjectReference
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftObjectReference	Type: TAssetPtr<class UObject>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FPrimaryAssetId	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference(TAssetPtr<class UObject> SoftObjectReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftObjectReference");

	struct UKismetSystemLibrary_GetPrimaryAssetIdFromSoftObjectReference_Params {
		TAssetPtr<class UObject> SoftObjectReference;			//Offset: 0 | ElementSize: 40
		struct FPrimaryAssetId ReturnValue;			//Offset: 40 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetIdFromSoftObjectReference_Params params;
	params.SoftObjectReference = SoftObjectReference;

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
// Function Engine.KismetSystemLibrary.GetPrimaryAssetIdList
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: PrimaryAssetType	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPrimaryAssetIdList	Type: TArray<struct FPrimaryAssetId>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::GetPrimaryAssetIdList(struct FPrimaryAssetType PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetIdList");

	struct UKismetSystemLibrary_GetPrimaryAssetIdList_Params {
		struct FPrimaryAssetType PrimaryAssetType;			//Offset: 0 | ElementSize: 8
		TArray<struct FPrimaryAssetId> OutPrimaryAssetIdList;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetIdList_Params params;
	params.PrimaryAssetType = PrimaryAssetType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPrimaryAssetIdList != nullptr)
		*OutPrimaryAssetIdList = params.OutPrimaryAssetIdList;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetPrimaryAssetsWithBundleState
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: RequiredBundles	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ExcludedBundles	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ValidTypes	Type: TArray<struct FPrimaryAssetType>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bForceCurrentState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPrimaryAssetIdList	Type: TArray<struct FPrimaryAssetId>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::GetPrimaryAssetsWithBundleState(const TArray<struct FName>& RequiredBundles, const TArray<struct FName>& ExcludedBundles, const TArray<struct FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetPrimaryAssetsWithBundleState");

	struct UKismetSystemLibrary_GetPrimaryAssetsWithBundleState_Params {
		TArray<struct FName> RequiredBundles;			//Offset: 0 | ElementSize: 16
		TArray<struct FName> ExcludedBundles;			//Offset: 16 | ElementSize: 16
		TArray<struct FPrimaryAssetType> ValidTypes;			//Offset: 32 | ElementSize: 16
		bool bForceCurrentState;			//Offset: 48 | ElementSize: 1
		TArray<struct FPrimaryAssetId> OutPrimaryAssetIdList;			//Offset: 56 | ElementSize: 16
	};
	UKismetSystemLibrary_GetPrimaryAssetsWithBundleState_Params params;
	params.RequiredBundles = RequiredBundles;
	params.ExcludedBundles = ExcludedBundles;
	params.ValidTypes = ValidTypes;
	params.bForceCurrentState = bForceCurrentState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPrimaryAssetIdList != nullptr)
		*OutPrimaryAssetIdList = params.OutPrimaryAssetIdList;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetProjectContentDirectory
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetProjectContentDirectory() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetProjectContentDirectory");

	struct UKismetSystemLibrary_GetProjectContentDirectory_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetProjectContentDirectory_Params params;

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
// Function Engine.KismetSystemLibrary.GetProjectDirectory
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetProjectDirectory() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetProjectDirectory");

	struct UKismetSystemLibrary_GetProjectDirectory_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetProjectDirectory_Params params;

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
// Function Engine.KismetSystemLibrary.GetProjectSavedDirectory
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetProjectSavedDirectory() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetProjectSavedDirectory");

	struct UKismetSystemLibrary_GetProjectSavedDirectory_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetProjectSavedDirectory_Params params;

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
// Function Engine.KismetSystemLibrary.GetRenderingDetailMode
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetRenderingDetailMode() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetRenderingDetailMode");

	struct UKismetSystemLibrary_GetRenderingDetailMode_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_GetRenderingDetailMode_Params params;

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
// Function Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::GetRenderingMaterialQualityLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel");

	struct UKismetSystemLibrary_GetRenderingMaterialQualityLevel_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_GetRenderingMaterialQualityLevel_Params params;

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
// Function Engine.KismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UClass>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UClass> UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId");

	struct UKismetSystemLibrary_GetSoftClassReferenceFromPrimaryAssetId_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		TAssetPtr<class UClass> ReturnValue;			//Offset: 16 | ElementSize: 40
	};
	UKismetSystemLibrary_GetSoftClassReferenceFromPrimaryAssetId_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TAssetPtr<class UObject>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UObject> UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId");

	struct UKismetSystemLibrary_GetSoftObjectReferenceFromPrimaryAssetId_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		TAssetPtr<class UObject> ReturnValue;			//Offset: 16 | ElementSize: 40
	};
	UKismetSystemLibrary_GetSoftObjectReferenceFromPrimaryAssetId_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Resolutions	Type: TArray<struct FIntPoint>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions");

	struct UKismetSystemLibrary_GetSupportedFullscreenResolutions_Params {
		TArray<struct FIntPoint> Resolutions;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_GetSupportedFullscreenResolutions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Resolutions != nullptr)
		*Resolutions = params.Resolutions;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.GetSystemPath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetSystemPath(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetSystemPath");

	struct UKismetSystemLibrary_GetSystemPath_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_GetSystemPath_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.GetUniqueDeviceId
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::GetUniqueDeviceId() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetUniqueDeviceId");

	struct UKismetSystemLibrary_GetUniqueDeviceId_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_GetUniqueDeviceId_Params params;

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
// Function Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::GetVolumeButtonsHandledBySystem() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem");

	struct UKismetSystemLibrary_GetVolumeButtonsHandledBySystem_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_GetVolumeButtonsHandledBySystem_Params params;

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
// Function Engine.KismetSystemLibrary.HideAdBanner
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::HideAdBanner() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.HideAdBanner");

	struct UKismetSystemLibrary_HideAdBanner_Params {
	};
	UKismetSystemLibrary_HideAdBanner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.IsControllerAssignedToGamepad
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsControllerAssignedToGamepad(int32_t ControllerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsControllerAssignedToGamepad");

	struct UKismetSystemLibrary_IsControllerAssignedToGamepad_Params {
		int32_t ControllerId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UKismetSystemLibrary_IsControllerAssignedToGamepad_Params params;
	params.ControllerId = ControllerId;

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
// Function Engine.KismetSystemLibrary.IsDedicatedServer
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsDedicatedServer(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsDedicatedServer");

	struct UKismetSystemLibrary_IsDedicatedServer_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsDedicatedServer_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function Engine.KismetSystemLibrary.IsInterstitialAdAvailable
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsInterstitialAdAvailable() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsInterstitialAdAvailable");

	struct UKismetSystemLibrary_IsInterstitialAdAvailable_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_IsInterstitialAdAvailable_Params params;

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
// Function Engine.KismetSystemLibrary.IsInterstitialAdRequested
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsInterstitialAdRequested() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsInterstitialAdRequested");

	struct UKismetSystemLibrary_IsInterstitialAdRequested_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_IsInterstitialAdRequested_Params params;

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
// Function Engine.KismetSystemLibrary.IsLoggedIn
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: SpecificPlayer	Type: class APlayerController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsLoggedIn(class APlayerController* SpecificPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsLoggedIn");

	struct UKismetSystemLibrary_IsLoggedIn_Params {
		class APlayerController* SpecificPlayer;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsLoggedIn_Params params;
	params.SpecificPlayer = SpecificPlayer;

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
// Function Engine.KismetSystemLibrary.IsPackagedForDistribution
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsPackagedForDistribution() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsPackagedForDistribution");

	struct UKismetSystemLibrary_IsPackagedForDistribution_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_IsPackagedForDistribution_Params params;

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
// Function Engine.KismetSystemLibrary.IsScreensaverEnabled
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsScreensaverEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsScreensaverEnabled");

	struct UKismetSystemLibrary_IsScreensaverEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_IsScreensaverEnabled_Params params;

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
// Function Engine.KismetSystemLibrary.IsServer
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsServer(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsServer");

	struct UKismetSystemLibrary_IsServer_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsServer_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function Engine.KismetSystemLibrary.IsSplitScreen
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsSplitScreen(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsSplitScreen");

	struct UKismetSystemLibrary_IsSplitScreen_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsSplitScreen_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function Engine.KismetSystemLibrary.IsStandalone
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsStandalone(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsStandalone");

	struct UKismetSystemLibrary_IsStandalone_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsStandalone_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function Engine.KismetSystemLibrary.IsUnattended
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsUnattended() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsUnattended");

	struct UKismetSystemLibrary_IsUnattended_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_IsUnattended_Params params;

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
// Function Engine.KismetSystemLibrary.IsValid
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValid(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValid");

	struct UKismetSystemLibrary_IsValid_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValid_Params params;
	params.Object = Object;

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
// Function Engine.KismetSystemLibrary.IsValidClass
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Class	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValidClass(class UObject* Class) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValidClass");

	struct UKismetSystemLibrary_IsValidClass_Params {
		class UObject* Class;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValidClass_Params params;
	params.Class = Class;

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
// Function Engine.KismetSystemLibrary.IsValidPrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValidPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValidPrimaryAssetId");

	struct UKismetSystemLibrary_IsValidPrimaryAssetId_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValidPrimaryAssetId_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

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
// Function Engine.KismetSystemLibrary.IsValidPrimaryAssetType
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PrimaryAssetType	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValidPrimaryAssetType(struct FPrimaryAssetType PrimaryAssetType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValidPrimaryAssetType");

	struct UKismetSystemLibrary_IsValidPrimaryAssetType_Params {
		struct FPrimaryAssetType PrimaryAssetType;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValidPrimaryAssetType_Params params;
	params.PrimaryAssetType = PrimaryAssetType;

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
// Function Engine.KismetSystemLibrary.IsValidSoftClassReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftClassReference	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValidSoftClassReference(const TAssetPtr<class UClass>& SoftClassReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValidSoftClassReference");

	struct UKismetSystemLibrary_IsValidSoftClassReference_Params {
		TAssetPtr<class UClass> SoftClassReference;			//Offset: 0 | ElementSize: 40
		bool ReturnValue;			//Offset: 40 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValidSoftClassReference_Params params;
	params.SoftClassReference = SoftClassReference;

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
// Function Engine.KismetSystemLibrary.IsValidSoftObjectReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: SoftObjectReference	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::IsValidSoftObjectReference(const TAssetPtr<class UObject>& SoftObjectReference) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.IsValidSoftObjectReference");

	struct UKismetSystemLibrary_IsValidSoftObjectReference_Params {
		TAssetPtr<class UObject> SoftObjectReference;			//Offset: 0 | ElementSize: 40
		bool ReturnValue;			//Offset: 40 | ElementSize: 1
	};
	UKismetSystemLibrary_IsValidSoftObjectReference_Params params;
	params.SoftObjectReference = SoftObjectReference;

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
// Function Engine.KismetSystemLibrary.K2_ClearAndInvalidateTimerHandle
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_ClearAndInvalidateTimerHandle");

	struct UKismetSystemLibrary_K2_ClearAndInvalidateTimerHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_ClearAndInvalidateTimerHandle_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Handle != nullptr)
		*Handle = params.Handle;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_ClearTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_ClearTimer(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_ClearTimer");

	struct UKismetSystemLibrary_K2_ClearTimer_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_ClearTimer_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_ClearTimerDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_ClearTimerDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_ClearTimerDelegate");

	struct UKismetSystemLibrary_K2_ClearTimerDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_ClearTimerDelegate_Params params;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_ClearTimerHandle
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_ClearTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_ClearTimerHandle");

	struct UKismetSystemLibrary_K2_ClearTimerHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_ClearTimerHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTime
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerElapsedTime(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTime");

	struct UKismetSystemLibrary_K2_GetTimerElapsedTime_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerElapsedTime_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

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
// Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate");

	struct UKismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Params params;
	params.Delegate = Delegate;

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
// Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle");

	struct UKismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTime
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerRemainingTime(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTime");

	struct UKismetSystemLibrary_K2_GetTimerRemainingTime_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerRemainingTime_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

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
// Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate");

	struct UKismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Params params;
	params.Delegate = Delegate;

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
// Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle");

	struct UKismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_InvalidateTimerHandle
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTimerHandle	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTimerHandle UKismetSystemLibrary::K2_InvalidateTimerHandle(struct FTimerHandle* Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_InvalidateTimerHandle");

	struct UKismetSystemLibrary_K2_InvalidateTimerHandle_Params {
		struct FTimerHandle Handle;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_InvalidateTimerHandle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Handle != nullptr)
		*Handle = params.Handle;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_IsTimerActive
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerActive(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerActive");

	struct UKismetSystemLibrary_K2_IsTimerActive_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerActive_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

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
// Function Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerActiveDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate");

	struct UKismetSystemLibrary_K2_IsTimerActiveDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerActiveDelegate_Params params;
	params.Delegate = Delegate;

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
// Function Engine.KismetSystemLibrary.K2_IsTimerActiveHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerActiveHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerActiveHandle");

	struct UKismetSystemLibrary_K2_IsTimerActiveHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerActiveHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_IsTimerPaused
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerPaused(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerPaused");

	struct UKismetSystemLibrary_K2_IsTimerPaused_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerPaused_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

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
// Function Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerPausedDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate");

	struct UKismetSystemLibrary_K2_IsTimerPausedDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerPausedDelegate_Params params;
	params.Delegate = Delegate;

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
// Function Engine.KismetSystemLibrary.K2_IsTimerPausedHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsTimerPausedHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsTimerPausedHandle");

	struct UKismetSystemLibrary_K2_IsTimerPausedHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsTimerPausedHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_IsValidTimerHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_IsValidTimerHandle(struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_IsValidTimerHandle");

	struct UKismetSystemLibrary_K2_IsValidTimerHandle_Params {
		struct FTimerHandle Handle;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_IsValidTimerHandle_Params params;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_PauseTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_PauseTimer(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_PauseTimer");

	struct UKismetSystemLibrary_K2_PauseTimer_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_PauseTimer_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_PauseTimerDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_PauseTimerDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_PauseTimerDelegate");

	struct UKismetSystemLibrary_K2_PauseTimerDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_PauseTimerDelegate_Params params;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_PauseTimerHandle
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_PauseTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_PauseTimerHandle");

	struct UKismetSystemLibrary_K2_PauseTimerHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_PauseTimerHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_SetTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Time	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InitialStartDelay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InitialStartDelayVariance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTimerHandle	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTimerHandle UKismetSystemLibrary::K2_SetTimer(class UObject* Object, struct FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_SetTimer");

	struct UKismetSystemLibrary_K2_SetTimer_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		float Time;			//Offset: 24 | ElementSize: 4
		bool bLooping;			//Offset: 28 | ElementSize: 1
		float InitialStartDelay;			//Offset: 32 | ElementSize: 4
		float InitialStartDelayVariance;			//Offset: 36 | ElementSize: 4
		struct FTimerHandle ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_SetTimer_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.Time = Time;
	params.bLooping = bLooping;
	params.InitialStartDelay = InitialStartDelay;
	params.InitialStartDelayVariance = InitialStartDelayVariance;

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
// Function Engine.KismetSystemLibrary.K2_SetTimerDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: Time	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InitialStartDelay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InitialStartDelayVariance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTimerHandle	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTimerHandle UKismetSystemLibrary::K2_SetTimerDelegate(struct FScriptDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_SetTimerDelegate");

	struct UKismetSystemLibrary_K2_SetTimerDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		float Time;			//Offset: 16 | ElementSize: 4
		bool bLooping;			//Offset: 20 | ElementSize: 1
		float InitialStartDelay;			//Offset: 24 | ElementSize: 4
		float InitialStartDelayVariance;			//Offset: 28 | ElementSize: 4
		struct FTimerHandle ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_SetTimerDelegate_Params params;
	params.Delegate = Delegate;
	params.Time = Time;
	params.bLooping = bLooping;
	params.InitialStartDelay = InitialStartDelay;
	params.InitialStartDelayVariance = InitialStartDelayVariance;

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
// Function Engine.KismetSystemLibrary.K2_TimerExists
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_TimerExists(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_TimerExists");

	struct UKismetSystemLibrary_K2_TimerExists_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_TimerExists_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

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
// Function Engine.KismetSystemLibrary.K2_TimerExistsDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_TimerExistsDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_TimerExistsDelegate");

	struct UKismetSystemLibrary_K2_TimerExistsDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_TimerExistsDelegate_Params params;
	params.Delegate = Delegate;

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
// Function Engine.KismetSystemLibrary.K2_TimerExistsHandle
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::K2_TimerExistsHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_TimerExistsHandle");

	struct UKismetSystemLibrary_K2_TimerExistsHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_K2_TimerExistsHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

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
// Function Engine.KismetSystemLibrary.K2_UnPauseTimer
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_UnPauseTimer(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_UnPauseTimer");

	struct UKismetSystemLibrary_K2_UnPauseTimer_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_UnPauseTimer_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_UnPauseTimerDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate");

	struct UKismetSystemLibrary_K2_UnPauseTimerDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_K2_UnPauseTimerDelegate_Params params;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.K2_UnPauseTimerHandle
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Handle	Type: struct FTimerHandle	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::K2_UnPauseTimerHandle(class UObject* WorldContextObject, struct FTimerHandle Handle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.K2_UnPauseTimerHandle");

	struct UKismetSystemLibrary_K2_UnPauseTimerHandle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FTimerHandle Handle;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_K2_UnPauseTimerHandle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LaunchURL
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::LaunchURL(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LaunchURL");

	struct UKismetSystemLibrary_LaunchURL_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_LaunchURL_Params params;
	params.URL = URL;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceMulti
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceMulti");

	struct UKismetSystemLibrary_LineTraceMulti_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 32 | ElementSize: 1
		bool bTraceComplex;			//Offset: 33 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 40 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 56 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 64 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 80 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 84 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 100 | ElementSize: 16
		float DrawTime;			//Offset: 116 | ElementSize: 4
		bool ReturnValue;			//Offset: 120 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceMultiByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceMultiByProfile");

	struct UKismetSystemLibrary_LineTraceMultiByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FName ProfileName;			//Offset: 32 | ElementSize: 8
		bool bTraceComplex;			//Offset: 40 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 72 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 88 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 92 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 108 | ElementSize: 16
		float DrawTime;			//Offset: 124 | ElementSize: 4
		bool ReturnValue;			//Offset: 128 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceMultiByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceMultiForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceMultiForObjects");

	struct UKismetSystemLibrary_LineTraceMultiForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		bool bTraceComplex;			//Offset: 48 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 72 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 80 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 96 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 100 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 116 | ElementSize: 16
		float DrawTime;			//Offset: 132 | ElementSize: 4
		bool ReturnValue;			//Offset: 136 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceSingle
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceSingle");

	struct UKismetSystemLibrary_LineTraceSingle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 32 | ElementSize: 1
		bool bTraceComplex;			//Offset: 33 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 40 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 56 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 60 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 196 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 200 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 216 | ElementSize: 16
		float DrawTime;			//Offset: 232 | ElementSize: 4
		bool ReturnValue;			//Offset: 236 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceSingleByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceSingleByProfile");

	struct UKismetSystemLibrary_LineTraceSingleByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		struct FName ProfileName;			//Offset: 32 | ElementSize: 8
		bool bTraceComplex;			//Offset: 40 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 68 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 204 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 208 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 224 | ElementSize: 16
		float DrawTime;			//Offset: 240 | ElementSize: 4
		bool ReturnValue;			//Offset: 244 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceSingleByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LineTraceSingleForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::LineTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LineTraceSingleForObjects");

	struct UKismetSystemLibrary_LineTraceSingleForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 32 | ElementSize: 16
		bool bTraceComplex;			//Offset: 48 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 56 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 72 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 76 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 212 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 216 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 232 | ElementSize: 16
		float DrawTime;			//Offset: 248 | ElementSize: 4
		bool ReturnValue;			//Offset: 252 | ElementSize: 1
	};
	UKismetSystemLibrary_LineTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LoadAsset
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Asset	Type: TAssetPtr<class UObject>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OnLoaded	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::LoadAsset(class UObject* WorldContextObject, TAssetPtr<class UObject> Asset, struct FScriptDelegate OnLoaded, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LoadAsset");

	struct UKismetSystemLibrary_LoadAsset_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UObject> Asset;			//Offset: 8 | ElementSize: 40
		struct FScriptDelegate OnLoaded;			//Offset: 48 | ElementSize: 16
		struct FLatentActionInfo LatentInfo;			//Offset: 64 | ElementSize: 24
	};
	UKismetSystemLibrary_LoadAsset_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Asset = Asset;
	params.OnLoaded = OnLoaded;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: Loaded	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::OnAssetLoaded__DelegateSignature(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature");

	struct UKismetSystemLibrary_OnAssetLoaded__DelegateSignature_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_OnAssetLoaded__DelegateSignature_Params params;
	params.Loaded = Loaded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LoadAsset_Blocking
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Asset	Type: TAssetPtr<class UObject>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::LoadAsset_Blocking(TAssetPtr<class UObject> Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LoadAsset_Blocking");

	struct UKismetSystemLibrary_LoadAsset_Blocking_Params {
		TAssetPtr<class UObject> Asset;			//Offset: 0 | ElementSize: 40
		class UObject* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetSystemLibrary_LoadAsset_Blocking_Params params;
	params.Asset = Asset;

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
// Function Engine.KismetSystemLibrary.LoadAssetClass
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AssetClass	Type: TAssetPtr<class UClass>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OnLoaded	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::LoadAssetClass(class UObject* WorldContextObject, TAssetPtr<class UClass> AssetClass, struct FScriptDelegate OnLoaded, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LoadAssetClass");

	struct UKismetSystemLibrary_LoadAssetClass_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TAssetPtr<class UClass> AssetClass;			//Offset: 8 | ElementSize: 40
		struct FScriptDelegate OnLoaded;			//Offset: 48 | ElementSize: 16
		struct FLatentActionInfo LatentInfo;			//Offset: 64 | ElementSize: 24
	};
	UKismetSystemLibrary_LoadAssetClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AssetClass = AssetClass;
	params.OnLoaded = OnLoaded;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: Loaded	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::OnAssetClassLoaded__DelegateSignature(class UObject* Loaded) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature");

	struct UKismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Params {
		class UObject* Loaded;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Params params;
	params.Loaded = Loaded;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.LoadClassAsset_Blocking
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: AssetClass	Type: TAssetPtr<class UClass>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UKismetSystemLibrary::LoadClassAsset_Blocking(TAssetPtr<class UClass> AssetClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LoadClassAsset_Blocking");

	struct UKismetSystemLibrary_LoadClassAsset_Blocking_Params {
		TAssetPtr<class UClass> AssetClass;			//Offset: 0 | ElementSize: 40
		class UObject* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetSystemLibrary_LoadClassAsset_Blocking_Params params;
	params.AssetClass = AssetClass;

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
// Function Engine.KismetSystemLibrary.LoadInterstitialAd
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: AdIdIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::LoadInterstitialAd(int32_t AdIdIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.LoadInterstitialAd");

	struct UKismetSystemLibrary_LoadInterstitialAd_Params {
		int32_t AdIdIndex;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_LoadInterstitialAd_Params params;
	params.AdIdIndex = AdIdIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.MakeLiteralBool
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::MakeLiteralBool(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralBool");

	struct UKismetSystemLibrary_MakeLiteralBool_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UKismetSystemLibrary_MakeLiteralBool_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralByte
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
unsigned char UKismetSystemLibrary::MakeLiteralByte(unsigned char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralByte");

	struct UKismetSystemLibrary_MakeLiteralByte_Params {
		unsigned char Value;			//Offset: 0 | ElementSize: 1
		unsigned char ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UKismetSystemLibrary_MakeLiteralByte_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralFloat
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UKismetSystemLibrary::MakeLiteralFloat(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralFloat");

	struct UKismetSystemLibrary_MakeLiteralFloat_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UKismetSystemLibrary_MakeLiteralFloat_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralInt
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetSystemLibrary::MakeLiteralInt(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralInt");

	struct UKismetSystemLibrary_MakeLiteralInt_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UKismetSystemLibrary_MakeLiteralInt_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UKismetSystemLibrary::MakeLiteralName(struct FName Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralName");

	struct UKismetSystemLibrary_MakeLiteralName_Params {
		struct FName Value;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UKismetSystemLibrary_MakeLiteralName_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralString
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::MakeLiteralString(struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralString");

	struct UKismetSystemLibrary_MakeLiteralString_Params {
		struct FString Value;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_MakeLiteralString_Params params;
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
// Function Engine.KismetSystemLibrary.MakeLiteralText
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UKismetSystemLibrary::MakeLiteralText(struct FText Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeLiteralText");

	struct UKismetSystemLibrary_MakeLiteralText_Params {
		struct FText Value;			//Offset: 0 | ElementSize: 24
		struct FText ReturnValue;			//Offset: 24 | ElementSize: 24
	};
	UKismetSystemLibrary_MakeLiteralText_Params params;
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
// Function Engine.KismetSystemLibrary.MakeSoftClassPath
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PathString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSoftClassPath	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSoftClassPath UKismetSystemLibrary::MakeSoftClassPath(struct FString PathString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeSoftClassPath");

	struct UKismetSystemLibrary_MakeSoftClassPath_Params {
		struct FString PathString;			//Offset: 0 | ElementSize: 16
		struct FSoftClassPath ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetSystemLibrary_MakeSoftClassPath_Params params;
	params.PathString = PathString;

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
// Function Engine.KismetSystemLibrary.MakeSoftObjectPath
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PathString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSoftObjectPath	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSoftObjectPath UKismetSystemLibrary::MakeSoftObjectPath(struct FString PathString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MakeSoftObjectPath");

	struct UKismetSystemLibrary_MakeSoftObjectPath_Params {
		struct FString PathString;			//Offset: 0 | ElementSize: 16
		struct FSoftObjectPath ReturnValue;			//Offset: 16 | ElementSize: 24
	};
	UKismetSystemLibrary_MakeSoftObjectPath_Params params;
	params.PathString = PathString;

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
// Function Engine.KismetSystemLibrary.MoveComponentTo
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Component	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TargetRelativeLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TargetRelativeRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bEaseOut	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEaseIn	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OverTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bForceShortestRotationPath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MoveAction	Type: TEnumAsByte<EMoveComponentAction>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::MoveComponentTo(class USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.MoveComponentTo");

	struct UKismetSystemLibrary_MoveComponentTo_Params {
		class USceneComponent* Component;			//Offset: 0 | ElementSize: 8
		struct FVector TargetRelativeLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator TargetRelativeRotation;			//Offset: 20 | ElementSize: 12
		bool bEaseOut;			//Offset: 32 | ElementSize: 1
		bool bEaseIn;			//Offset: 33 | ElementSize: 1
		float OverTime;			//Offset: 36 | ElementSize: 4
		bool bForceShortestRotationPath;			//Offset: 40 | ElementSize: 1
		TEnumAsByte<EMoveComponentAction> MoveAction;			//Offset: 41 | ElementSize: 1
		struct FLatentActionInfo LatentInfo;			//Offset: 48 | ElementSize: 24
	};
	UKismetSystemLibrary_MoveComponentTo_Params params;
	params.Component = Component;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;
	params.bForceShortestRotationPath = bForceShortestRotationPath;
	params.MoveAction = MoveAction;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.NormalizeFilename
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InFilename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetSystemLibrary::NormalizeFilename(struct FString InFilename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.NormalizeFilename");

	struct UKismetSystemLibrary_NormalizeFilename_Params {
		struct FString InFilename;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_NormalizeFilename_Params params;
	params.InFilename = InFilename;

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
// Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetId
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::NotEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetId");

	struct UKismetSystemLibrary_NotEqual_PrimaryAssetId_Params {
		struct FPrimaryAssetId A;			//Offset: 0 | ElementSize: 16
		struct FPrimaryAssetId B;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetSystemLibrary_NotEqual_PrimaryAssetId_Params params;
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
// Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetType
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: struct FPrimaryAssetType	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::NotEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetType");

	struct UKismetSystemLibrary_NotEqual_PrimaryAssetType_Params {
		struct FPrimaryAssetType A;			//Offset: 0 | ElementSize: 8
		struct FPrimaryAssetType B;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_NotEqual_PrimaryAssetType_Params params;
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
// Function Engine.KismetSystemLibrary.NotEqual_SoftClassReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::NotEqual_SoftClassReference(const TAssetPtr<class UClass>& A, const TAssetPtr<class UClass>& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.NotEqual_SoftClassReference");

	struct UKismetSystemLibrary_NotEqual_SoftClassReference_Params {
		TAssetPtr<class UClass> A;			//Offset: 0 | ElementSize: 40
		TAssetPtr<class UClass> B;			//Offset: 40 | ElementSize: 40
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_NotEqual_SoftClassReference_Params params;
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
// Function Engine.KismetSystemLibrary.NotEqual_SoftObjectReference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: A	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::NotEqual_SoftObjectReference(const TAssetPtr<class UObject>& A, const TAssetPtr<class UObject>& B) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.NotEqual_SoftObjectReference");

	struct UKismetSystemLibrary_NotEqual_SoftObjectReference_Params {
		TAssetPtr<class UObject> A;			//Offset: 0 | ElementSize: 40
		TAssetPtr<class UObject> B;			//Offset: 40 | ElementSize: 40
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_NotEqual_SoftObjectReference_Params params;
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
// Function Engine.KismetSystemLibrary.ParseCommandLine
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InCmdLine	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutTokens	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: OutSwitches	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: OutParams	Type: TMap<struct FString, struct FString>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ParseCommandLine(struct FString InCmdLine, TArray<struct FString>* OutTokens, TArray<struct FString>* OutSwitches, TMap<struct FString, struct FString>* OutParams) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ParseCommandLine");

	struct UKismetSystemLibrary_ParseCommandLine_Params {
		struct FString InCmdLine;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> OutTokens;			//Offset: 16 | ElementSize: 16
		TArray<struct FString> OutSwitches;			//Offset: 32 | ElementSize: 16
		TMap<struct FString, struct FString> OutParams;			//Offset: 48 | ElementSize: 80
	};
	UKismetSystemLibrary_ParseCommandLine_Params params;
	params.InCmdLine = InCmdLine;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutTokens != nullptr)
		*OutTokens = params.OutTokens;
	if (OutSwitches != nullptr)
		*OutSwitches = params.OutSwitches;
	if (OutParams != nullptr)
		*OutParams = params.OutParams;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ParseParam
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InParam	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::ParseParam(struct FString inString, struct FString InParam) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ParseParam");

	struct UKismetSystemLibrary_ParseParam_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FString InParam;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetSystemLibrary_ParseParam_Params params;
	params.inString = inString;
	params.InParam = InParam;

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
// Function Engine.KismetSystemLibrary.ParseParamValue
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InParam	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::ParseParamValue(struct FString inString, struct FString InParam, struct FString* OutValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ParseParamValue");

	struct UKismetSystemLibrary_ParseParamValue_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FString InParam;			//Offset: 16 | ElementSize: 16
		struct FString OutValue;			//Offset: 32 | ElementSize: 16
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UKismetSystemLibrary_ParseParamValue_Params params;
	params.inString = inString;
	params.InParam = InParam;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.PrintString
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPrintToScreen	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPrintToLog	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::PrintString(class UObject* WorldContextObject, struct FString inString, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.PrintString");

	struct UKismetSystemLibrary_PrintString_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FString inString;			//Offset: 8 | ElementSize: 16
		bool bPrintToScreen;			//Offset: 24 | ElementSize: 1
		bool bPrintToLog;			//Offset: 25 | ElementSize: 1
		struct FLinearColor TextColor;			//Offset: 28 | ElementSize: 16
		float Duration;			//Offset: 44 | ElementSize: 4
	};
	UKismetSystemLibrary_PrintString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inString = inString;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToLog = bPrintToLog;
	params.TextColor = TextColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.PrintText
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InText	Type: struct FText	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
// Name: bPrintToScreen	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPrintToLog	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::PrintText(class UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.PrintText");

	struct UKismetSystemLibrary_PrintText_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FText InText;			//Offset: 8 | ElementSize: 24
		bool bPrintToScreen;			//Offset: 32 | ElementSize: 1
		bool bPrintToLog;			//Offset: 33 | ElementSize: 1
		struct FLinearColor TextColor;			//Offset: 36 | ElementSize: 16
		float Duration;			//Offset: 52 | ElementSize: 4
	};
	UKismetSystemLibrary_PrintText_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InText = InText;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToLog = bPrintToLog;
	params.TextColor = TextColor;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.PrintWarning
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::PrintWarning(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.PrintWarning");

	struct UKismetSystemLibrary_PrintWarning_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_PrintWarning_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.QuitGame
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpecificPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: QuitPreference	Type: TEnumAsByte<EQuitPreference>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIgnorePlatformRestrictions	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference, bool bIgnorePlatformRestrictions) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.QuitGame");

	struct UKismetSystemLibrary_QuitGame_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* SpecificPlayer;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<EQuitPreference> QuitPreference;			//Offset: 16 | ElementSize: 1
		bool bIgnorePlatformRestrictions;			//Offset: 17 | ElementSize: 1
	};
	UKismetSystemLibrary_QuitGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpecificPlayer = SpecificPlayer;
	params.QuitPreference = QuitPreference;
	params.bIgnorePlatformRestrictions = bIgnorePlatformRestrictions;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.RegisterForRemoteNotifications
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::RegisterForRemoteNotifications() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.RegisterForRemoteNotifications");

	struct UKismetSystemLibrary_RegisterForRemoteNotifications_Params {
	};
	UKismetSystemLibrary_RegisterForRemoteNotifications_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ResetGamepadAssignments
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::ResetGamepadAssignments() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ResetGamepadAssignments");

	struct UKismetSystemLibrary_ResetGamepadAssignments_Params {
	};
	UKismetSystemLibrary_ResetGamepadAssignments_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ResetGamepadAssignmentToController
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: ControllerId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ResetGamepadAssignmentToController(int32_t ControllerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ResetGamepadAssignmentToController");

	struct UKismetSystemLibrary_ResetGamepadAssignmentToController_Params {
		int32_t ControllerId;			//Offset: 0 | ElementSize: 4
	};
	UKismetSystemLibrary_ResetGamepadAssignmentToController_Params params;
	params.ControllerId = ControllerId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.RetriggerableDelay
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::RetriggerableDelay(class UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.RetriggerableDelay");

	struct UKismetSystemLibrary_RetriggerableDelay_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLatentActionInfo LatentInfo;			//Offset: 16 | ElementSize: 24
	};
	UKismetSystemLibrary_RetriggerableDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Duration = Duration;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetBoolPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetBoolPropertyByName(class UObject* Object, struct FName PropertyName, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetBoolPropertyByName");

	struct UKismetSystemLibrary_SetBoolPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		bool Value;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_SetBoolPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetBytePropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetBytePropertyByName(class UObject* Object, struct FName PropertyName, unsigned char Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetBytePropertyByName");

	struct UKismetSystemLibrary_SetBytePropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		unsigned char Value;			//Offset: 16 | ElementSize: 1
	};
	UKismetSystemLibrary_SetBytePropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetClassPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetClassPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetClassPropertyByName");

	struct UKismetSystemLibrary_SetClassPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		class UObject* Value;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_SetClassPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetCollisionProfileNameProperty
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FCollisionProfileName	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetCollisionProfileNameProperty(class UObject* Object, struct FName PropertyName, const struct FCollisionProfileName& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetCollisionProfileNameProperty");

	struct UKismetSystemLibrary_SetCollisionProfileNameProperty_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FCollisionProfileName Value;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_SetCollisionProfileNameProperty_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetColorPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetColorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FColor& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetColorPropertyByName");

	struct UKismetSystemLibrary_SetColorPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FColor Value;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_SetColorPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetFieldPathPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TAssetPtr<class FNone>	Flags: ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetFieldPathPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class FNone>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetFieldPathPropertyByName");

	struct UKismetSystemLibrary_SetFieldPathPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TAssetPtr<class FNone> Value;			//Offset: 16 | ElementSize: 32
	};
	UKismetSystemLibrary_SetFieldPathPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetFloatPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetFloatPropertyByName(class UObject* Object, struct FName PropertyName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetFloatPropertyByName");

	struct UKismetSystemLibrary_SetFloatPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		float Value;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_SetFloatPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetGamepadsBlockDeviceFeedback
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: bBlock	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetGamepadsBlockDeviceFeedback(bool bBlock) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetGamepadsBlockDeviceFeedback");

	struct UKismetSystemLibrary_SetGamepadsBlockDeviceFeedback_Params {
		bool bBlock;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_SetGamepadsBlockDeviceFeedback_Params params;
	params.bBlock = bBlock;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetInt64PropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: int64_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetInt64PropertyByName(class UObject* Object, struct FName PropertyName, int64_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetInt64PropertyByName");

	struct UKismetSystemLibrary_SetInt64PropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		int64_t Value;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_SetInt64PropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetInterfacePropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TScriptInterface<class UInterface>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetInterfacePropertyByName(class UObject* Object, struct FName PropertyName, const TScriptInterface<class UInterface>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetInterfacePropertyByName");

	struct UKismetSystemLibrary_SetInterfacePropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TScriptInterface<class UInterface> Value;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_SetInterfacePropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetIntPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetIntPropertyByName(class UObject* Object, struct FName PropertyName, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetIntPropertyByName");

	struct UKismetSystemLibrary_SetIntPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		int32_t Value;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_SetIntPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetLinearColorPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetLinearColorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FLinearColor& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetLinearColorPropertyByName");

	struct UKismetSystemLibrary_SetLinearColorPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FLinearColor Value;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_SetLinearColorPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetNamePropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetNamePropertyByName(class UObject* Object, struct FName PropertyName, const struct FName& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetNamePropertyByName");

	struct UKismetSystemLibrary_SetNamePropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FName Value;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_SetNamePropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetObjectPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetObjectPropertyByName(class UObject* Object, struct FName PropertyName, class UObject* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetObjectPropertyByName");

	struct UKismetSystemLibrary_SetObjectPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		class UObject* Value;			//Offset: 16 | ElementSize: 8
	};
	UKismetSystemLibrary_SetObjectPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetRotatorPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetRotatorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FRotator& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetRotatorPropertyByName");

	struct UKismetSystemLibrary_SetRotatorPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FRotator Value;			//Offset: 16 | ElementSize: 12
	};
	UKismetSystemLibrary_SetRotatorPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetSoftClassPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TAssetPtr<class UClass>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetSoftClassPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class UClass>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetSoftClassPropertyByName");

	struct UKismetSystemLibrary_SetSoftClassPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TAssetPtr<class UClass> Value;			//Offset: 16 | ElementSize: 40
	};
	UKismetSystemLibrary_SetSoftClassPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetSoftObjectPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TAssetPtr<class UObject>	Flags: ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetSoftObjectPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class UObject>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetSoftObjectPropertyByName");

	struct UKismetSystemLibrary_SetSoftObjectPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TAssetPtr<class UObject> Value;			//Offset: 16 | ElementSize: 40
	};
	UKismetSystemLibrary_SetSoftObjectPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetStringPropertyByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetStringPropertyByName(class UObject* Object, struct FName PropertyName, struct FString Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetStringPropertyByName");

	struct UKismetSystemLibrary_SetStringPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FString Value;			//Offset: 16 | ElementSize: 16
	};
	UKismetSystemLibrary_SetStringPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetStructurePropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FGenericStruct	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetStructurePropertyByName(class UObject* Object, struct FName PropertyName, const struct FGenericStruct& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetStructurePropertyByName");

	struct UKismetSystemLibrary_SetStructurePropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FGenericStruct Value;			//Offset: 16 | ElementSize: 4
	};
	UKismetSystemLibrary_SetStructurePropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage");

	struct UKismetSystemLibrary_SetSuppressViewportTransitionMessage_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		bool bState;			//Offset: 8 | ElementSize: 1
	};
	UKismetSystemLibrary_SetSuppressViewportTransitionMessage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bState = bState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetTextPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetTextPropertyByName(class UObject* Object, struct FName PropertyName, const struct FText& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetTextPropertyByName");

	struct UKismetSystemLibrary_SetTextPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FText Value;			//Offset: 16 | ElementSize: 24
	};
	UKismetSystemLibrary_SetTextPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetTransformPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetTransformPropertyByName(class UObject* Object, struct FName PropertyName, const struct FTransform& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetTransformPropertyByName");

	struct UKismetSystemLibrary_SetTransformPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FTransform Value;			//Offset: 16 | ElementSize: 48
	};
	UKismetSystemLibrary_SetTransformPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetUserActivity
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: UserActivity	Type: struct FUserActivity	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetUserActivity(const struct FUserActivity& UserActivity) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetUserActivity");

	struct UKismetSystemLibrary_SetUserActivity_Params {
		struct FUserActivity UserActivity;			//Offset: 0 | ElementSize: 24
	};
	UKismetSystemLibrary_SetUserActivity_Params params;
	params.UserActivity = UserActivity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetVectorPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetVectorPropertyByName(class UObject* Object, struct FName PropertyName, const struct FVector& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetVectorPropertyByName");

	struct UKismetSystemLibrary_SetVectorPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		struct FVector Value;			//Offset: 16 | ElementSize: 12
	};
	UKismetSystemLibrary_SetVectorPropertyByName_Params params;
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

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: bEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetVolumeButtonsHandledBySystem(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem");

	struct UKismetSystemLibrary_SetVolumeButtonsHandledBySystem_Params {
		bool bEnabled;			//Offset: 0 | ElementSize: 1
	};
	UKismetSystemLibrary_SetVolumeButtonsHandledBySystem_Params params;
	params.bEnabled = bEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SetWindowTitle
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Title	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SetWindowTitle(const struct FText& Title) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SetWindowTitle");

	struct UKismetSystemLibrary_SetWindowTitle_Params {
		struct FText Title;			//Offset: 0 | ElementSize: 24
	};
	UKismetSystemLibrary_SetWindowTitle_Params params;
	params.Title = Title;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ShowAdBanner
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: AdIdIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowOnBottomOfScreen	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ShowAdBanner");

	struct UKismetSystemLibrary_ShowAdBanner_Params {
		int32_t AdIdIndex;			//Offset: 0 | ElementSize: 4
		bool bShowOnBottomOfScreen;			//Offset: 4 | ElementSize: 1
	};
	UKismetSystemLibrary_ShowAdBanner_Params params;
	params.AdIdIndex = AdIdIndex;
	params.bShowOnBottomOfScreen = bShowOnBottomOfScreen;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ShowInterstitialAd
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::ShowInterstitialAd() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ShowInterstitialAd");

	struct UKismetSystemLibrary_ShowInterstitialAd_Params {
	};
	UKismetSystemLibrary_ShowInterstitialAd_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: SpecificPlayer	Type: class APlayerController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen");

	struct UKismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params {
		class APlayerController* SpecificPlayer;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params params;
	params.SpecificPlayer = SpecificPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: CategoryName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen");

	struct UKismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params {
		struct FString CategoryName;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params params;
	params.CategoryName = CategoryName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SnapshotObject
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::SnapshotObject(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SnapshotObject");

	struct UKismetSystemLibrary_SnapshotObject_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_SnapshotObject_Params params;
	params.Object = Object;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereOverlapActors
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpherePos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SphereRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ActorClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereOverlapActors(class UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereOverlapActors");

	struct UKismetSystemLibrary_SphereOverlapActors_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector SpherePos;			//Offset: 8 | ElementSize: 12
		float SphereRadius;			//Offset: 20 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 24 | ElementSize: 16
		class UObject* ActorClassFilter;			//Offset: 40 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TArray<class AActor*> OutActors;			//Offset: 64 | ElementSize: 16
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereOverlapComponents
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpherePos	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SphereRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ComponentClassFilter	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereOverlapComponents(class UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UObject* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereOverlapComponents");

	struct UKismetSystemLibrary_SphereOverlapComponents_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector SpherePos;			//Offset: 8 | ElementSize: 12
		float SphereRadius;			//Offset: 20 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 24 | ElementSize: 16
		class UObject* ComponentClassFilter;			//Offset: 40 | ElementSize: 8
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TArray<class UPrimitiveComponent*> OutComponents;			//Offset: 64 | ElementSize: 16
		bool ReturnValue;			//Offset: 80 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.ObjectTypes = ObjectTypes;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceMulti
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceMulti(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceMulti");

	struct UKismetSystemLibrary_SphereTraceMulti_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 36 | ElementSize: 1
		bool bTraceComplex;			//Offset: 37 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 40 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 56 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 64 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 80 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 84 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 100 | ElementSize: 16
		float DrawTime;			//Offset: 116 | ElementSize: 4
		bool ReturnValue;			//Offset: 120 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceMulti_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceMultiByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile");

	struct UKismetSystemLibrary_SphereTraceMultiByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		struct FName ProfileName;			//Offset: 36 | ElementSize: 8
		bool bTraceComplex;			//Offset: 44 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 72 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 88 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 92 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 108 | ElementSize: 16
		float DrawTime;			//Offset: 124 | ElementSize: 4
		bool ReturnValue;			//Offset: 128 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceMultiByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHits	Type: TArray<struct FHitResult>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceMultiForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects");

	struct UKismetSystemLibrary_SphereTraceMultiForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 40 | ElementSize: 16
		bool bTraceComplex;			//Offset: 56 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		TArray<struct FHitResult> OutHits;			//Offset: 88 | ElementSize: 16
		bool bIgnoreSelf;			//Offset: 104 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 108 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 124 | ElementSize: 16
		float DrawTime;			//Offset: 140 | ElementSize: 4
		bool ReturnValue;			//Offset: 144 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceMultiForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceSingle
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceSingle(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceSingle");

	struct UKismetSystemLibrary_SphereTraceSingle_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 36 | ElementSize: 1
		bool bTraceComplex;			//Offset: 37 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 40 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 56 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 60 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 196 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 200 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 216 | ElementSize: 16
		float DrawTime;			//Offset: 232 | ElementSize: 4
		bool ReturnValue;			//Offset: 236 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceSingleByProfile(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile");

	struct UKismetSystemLibrary_SphereTraceSingleByProfile_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		struct FName ProfileName;			//Offset: 36 | ElementSize: 8
		bool bTraceComplex;			//Offset: 44 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 48 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 64 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 68 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 204 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 208 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 224 | ElementSize: 16
		float DrawTime;			//Offset: 240 | ElementSize: 4
		bool ReturnValue;			//Offset: 244 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceSingleByProfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Start	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: End	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: DrawDebugType	Type: TEnumAsByte<EDrawDebugTrace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bIgnoreSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceHitColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DrawTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetSystemLibrary::SphereTraceSingleForObjects(class UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects");

	struct UKismetSystemLibrary_SphereTraceSingleForObjects_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector Start;			//Offset: 8 | ElementSize: 12
		struct FVector End;			//Offset: 20 | ElementSize: 12
		float Radius;			//Offset: 32 | ElementSize: 4
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 40 | ElementSize: 16
		bool bTraceComplex;			//Offset: 56 | ElementSize: 1
		TArray<class AActor*> ActorsToIgnore;			//Offset: 64 | ElementSize: 16
		TEnumAsByte<EDrawDebugTrace> DrawDebugType;			//Offset: 80 | ElementSize: 1
		struct FHitResult OutHit;			//Offset: 84 | ElementSize: 136
		bool bIgnoreSelf;			//Offset: 220 | ElementSize: 1
		struct FLinearColor TraceColor;			//Offset: 224 | ElementSize: 16
		struct FLinearColor TraceHitColor;			//Offset: 240 | ElementSize: 16
		float DrawTime;			//Offset: 256 | ElementSize: 4
		bool ReturnValue;			//Offset: 260 | ElementSize: 1
	};
	UKismetSystemLibrary_SphereTraceSingleForObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.StackTrace
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::StackTrace() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.StackTrace");

	struct UKismetSystemLibrary_StackTrace_Params {
	};
	UKismetSystemLibrary_StackTrace_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.TransactObject
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::TransactObject(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.TransactObject");

	struct UKismetSystemLibrary_TransactObject_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
	};
	UKismetSystemLibrary_TransactObject_Params params;
	params.Object = Object;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.UnloadPrimaryAsset
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: PrimaryAssetId	Type: struct FPrimaryAssetId	Flags: Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::UnloadPrimaryAsset(struct FPrimaryAssetId PrimaryAssetId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.UnloadPrimaryAsset");

	struct UKismetSystemLibrary_UnloadPrimaryAsset_Params {
		struct FPrimaryAssetId PrimaryAssetId;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_UnloadPrimaryAsset_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.UnloadPrimaryAssetList
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: PrimaryAssetIdList	Type: TArray<struct FPrimaryAssetId>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetSystemLibrary::UnloadPrimaryAssetList(const TArray<struct FPrimaryAssetId>& PrimaryAssetIdList) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.UnloadPrimaryAssetList");

	struct UKismetSystemLibrary_UnloadPrimaryAssetList_Params {
		TArray<struct FPrimaryAssetId> PrimaryAssetIdList;			//Offset: 0 | ElementSize: 16
	};
	UKismetSystemLibrary_UnloadPrimaryAssetList_Params params;
	params.PrimaryAssetIdList = PrimaryAssetIdList;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetSystemLibrary.UnregisterForRemoteNotifications
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UKismetSystemLibrary::UnregisterForRemoteNotifications() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.UnregisterForRemoteNotifications");

	struct UKismetSystemLibrary_UnregisterForRemoteNotifications_Params {
	};
	UKismetSystemLibrary_UnregisterForRemoteNotifications_Params params;

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