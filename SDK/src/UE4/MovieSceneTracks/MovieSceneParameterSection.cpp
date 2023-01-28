#include "../SDK.h"
#include "MovieSceneParameterSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BoolParameterNamesAndCurves
// Declaration: TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves
TArray<struct FBoolParameterNameAndCurve> UMovieSceneParameterSection::M_GetBoolParameterNamesAndCurves() const {
	return Read<TArray<struct FBoolParameterNameAndCurve>>((byte*)this + 232);
}
TArray<struct FBoolParameterNameAndCurve>* UMovieSceneParameterSection::M_PtrGetBoolParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FBoolParameterNameAndCurve>*>((byte*)this + 232);
}
void UMovieSceneParameterSection::M_SetBoolParameterNamesAndCurves(const TArray<struct FBoolParameterNameAndCurve>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of ScalarParameterNamesAndCurves
// Declaration: TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves
TArray<struct FScalarParameterNameAndCurve> UMovieSceneParameterSection::M_GetScalarParameterNamesAndCurves() const {
	return Read<TArray<struct FScalarParameterNameAndCurve>>((byte*)this + 248);
}
TArray<struct FScalarParameterNameAndCurve>* UMovieSceneParameterSection::M_PtrGetScalarParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FScalarParameterNameAndCurve>*>((byte*)this + 248);
}
void UMovieSceneParameterSection::M_SetScalarParameterNamesAndCurves(const TArray<struct FScalarParameterNameAndCurve>& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of Vector2DParameterNamesAndCurves
// Declaration: TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves
TArray<struct FVector2DParameterNameAndCurves> UMovieSceneParameterSection::M_GetVector2DParameterNamesAndCurves() const {
	return Read<TArray<struct FVector2DParameterNameAndCurves>>((byte*)this + 264);
}
TArray<struct FVector2DParameterNameAndCurves>* UMovieSceneParameterSection::M_PtrGetVector2DParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FVector2DParameterNameAndCurves>*>((byte*)this + 264);
}
void UMovieSceneParameterSection::M_SetVector2DParameterNamesAndCurves(const TArray<struct FVector2DParameterNameAndCurves>& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of VectorParameterNamesAndCurves
// Declaration: TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves
TArray<struct FVectorParameterNameAndCurves> UMovieSceneParameterSection::M_GetVectorParameterNamesAndCurves() const {
	return Read<TArray<struct FVectorParameterNameAndCurves>>((byte*)this + 280);
}
TArray<struct FVectorParameterNameAndCurves>* UMovieSceneParameterSection::M_PtrGetVectorParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FVectorParameterNameAndCurves>*>((byte*)this + 280);
}
void UMovieSceneParameterSection::M_SetVectorParameterNamesAndCurves(const TArray<struct FVectorParameterNameAndCurves>& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of ColorParameterNamesAndCurves
// Declaration: TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves
TArray<struct FColorParameterNameAndCurves> UMovieSceneParameterSection::M_GetColorParameterNamesAndCurves() const {
	return Read<TArray<struct FColorParameterNameAndCurves>>((byte*)this + 296);
}
TArray<struct FColorParameterNameAndCurves>* UMovieSceneParameterSection::M_PtrGetColorParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FColorParameterNameAndCurves>*>((byte*)this + 296);
}
void UMovieSceneParameterSection::M_SetColorParameterNamesAndCurves(const TArray<struct FColorParameterNameAndCurves>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of TransformParameterNamesAndCurves
// Declaration: TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves
TArray<struct FTransformParameterNameAndCurves> UMovieSceneParameterSection::M_GetTransformParameterNamesAndCurves() const {
	return Read<TArray<struct FTransformParameterNameAndCurves>>((byte*)this + 312);
}
TArray<struct FTransformParameterNameAndCurves>* UMovieSceneParameterSection::M_PtrGetTransformParameterNamesAndCurves() {
	return reinterpret_cast<TArray<struct FTransformParameterNameAndCurves>*>((byte*)this + 312);
}
void UMovieSceneParameterSection::M_SetTransformParameterNamesAndCurves(const TArray<struct FTransformParameterNameAndCurves>& value) {
	Write((byte*)this + 312, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey");

	struct UMovieSceneParameterSection_AddBoolParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		bool InValue;			//Offset: 12 | ElementSize: 1
	};
	UMovieSceneParameterSection_AddBoolParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey");

	struct UMovieSceneParameterSection_AddColorParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		struct FLinearColor InValue;			//Offset: 12 | ElementSize: 16
	};
	UMovieSceneParameterSection_AddColorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey");

	struct UMovieSceneParameterSection_AddScalarParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		float InValue;			//Offset: 12 | ElementSize: 4
	};
	UMovieSceneParameterSection_AddScalarParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, const struct FTransform& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey");

	struct UMovieSceneParameterSection_AddTransformParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		struct FTransform InValue;			//Offset: 16 | ElementSize: 48
	};
	UMovieSceneParameterSection_AddTransformParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey");

	struct UMovieSceneParameterSection_AddVector2DParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		struct FVector2D InValue;			//Offset: 12 | ElementSize: 8
	};
	UMovieSceneParameterSection_AddVector2DParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InValue	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey");

	struct UMovieSceneParameterSection_AddVectorParameterKey_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		struct FFrameNumber InTime;			//Offset: 8 | ElementSize: 4
		struct FVector InValue;			//Offset: 12 | ElementSize: 12
	};
	UMovieSceneParameterSection_AddVectorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ParameterNames	Type: TAssetPtr<class FNone_67>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneParameterSection::GetParameterNames(TAssetPtr<class FNone_67>* ParameterNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames");

	struct UMovieSceneParameterSection_GetParameterNames_Params {
		TAssetPtr<class FNone_67> ParameterNames;			//Offset: 0 | ElementSize: 80
	};
	UMovieSceneParameterSection_GetParameterNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ParameterNames != nullptr)
		*ParameterNames = params.ParameterNames;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveBoolParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter");

	struct UMovieSceneParameterSection_RemoveBoolParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveBoolParameter_Params params;
	params.InParameterName = InParameterName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveColorParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter");

	struct UMovieSceneParameterSection_RemoveColorParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveColorParameter_Params params;
	params.InParameterName = InParameterName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveScalarParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter");

	struct UMovieSceneParameterSection_RemoveScalarParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveScalarParameter_Params params;
	params.InParameterName = InParameterName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveTransformParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter");

	struct UMovieSceneParameterSection_RemoveTransformParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveTransformParameter_Params params;
	params.InParameterName = InParameterName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveVector2DParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter");

	struct UMovieSceneParameterSection_RemoveVector2DParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveVector2DParameter_Params params;
	params.InParameterName = InParameterName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParameterName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneParameterSection::RemoveVectorParameter(struct FName InParameterName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter");

	struct UMovieSceneParameterSection_RemoveVectorParameter_Params {
		struct FName InParameterName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMovieSceneParameterSection_RemoveVectorParameter_Params params;
	params.InParameterName = InParameterName;

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