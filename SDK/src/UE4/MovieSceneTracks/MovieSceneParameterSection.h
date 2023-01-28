#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneParameterSection
// Super: Class MovieScene.MovieSceneSection
// Size: 328
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneParameterSection : public UMovieSceneSection {
public:
#pragma region Members
	//TArray<struct FBoolParameterNameAndCurve>	BoolParameterNamesAndCurves;		//Offset: 232	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FBoolParameterNameAndCurve> M_GetBoolParameterNamesAndCurves() const;
	TArray<struct FBoolParameterNameAndCurve>* M_PtrGetBoolParameterNamesAndCurves();
	void M_SetBoolParameterNamesAndCurves(const TArray<struct FBoolParameterNameAndCurve>& value);

	//TArray<struct FScalarParameterNameAndCurve>	ScalarParameterNamesAndCurves;		//Offset: 248	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FScalarParameterNameAndCurve> M_GetScalarParameterNamesAndCurves() const;
	TArray<struct FScalarParameterNameAndCurve>* M_PtrGetScalarParameterNamesAndCurves();
	void M_SetScalarParameterNamesAndCurves(const TArray<struct FScalarParameterNameAndCurve>& value);

	//TArray<struct FVector2DParameterNameAndCurves>	Vector2DParameterNamesAndCurves;		//Offset: 264	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVector2DParameterNameAndCurves> M_GetVector2DParameterNamesAndCurves() const;
	TArray<struct FVector2DParameterNameAndCurves>* M_PtrGetVector2DParameterNamesAndCurves();
	void M_SetVector2DParameterNamesAndCurves(const TArray<struct FVector2DParameterNameAndCurves>& value);

	//TArray<struct FVectorParameterNameAndCurves>	VectorParameterNamesAndCurves;		//Offset: 280	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVectorParameterNameAndCurves> M_GetVectorParameterNamesAndCurves() const;
	TArray<struct FVectorParameterNameAndCurves>* M_PtrGetVectorParameterNamesAndCurves();
	void M_SetVectorParameterNamesAndCurves(const TArray<struct FVectorParameterNameAndCurves>& value);

	//TArray<struct FColorParameterNameAndCurves>	ColorParameterNamesAndCurves;		//Offset: 296	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FColorParameterNameAndCurves> M_GetColorParameterNamesAndCurves() const;
	TArray<struct FColorParameterNameAndCurves>* M_PtrGetColorParameterNamesAndCurves();
	void M_SetColorParameterNamesAndCurves(const TArray<struct FColorParameterNameAndCurves>& value);

	//TArray<struct FTransformParameterNameAndCurves>	TransformParameterNamesAndCurves;		//Offset: 312	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FTransformParameterNameAndCurves> M_GetTransformParameterNamesAndCurves() const;
	TArray<struct FTransformParameterNameAndCurves>* M_PtrGetTransformParameterNamesAndCurves();
	void M_SetTransformParameterNamesAndCurves(const TArray<struct FTransformParameterNameAndCurves>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

#pragma region Functions
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue);

	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue);

	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue);

	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, const struct FTransform& InValue);

	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue);

	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue);

	void GetParameterNames(TAssetPtr<class FNone_67>* ParameterNames)/* const*/;

	bool RemoveBoolParameter(struct FName InParameterName);

	bool RemoveColorParameter(struct FName InParameterName);

	bool RemoveScalarParameter(struct FName InParameterName);

	bool RemoveTransformParameter(struct FName InParameterName);

	bool RemoveVector2DParameter(struct FName InParameterName);

	bool RemoveVectorParameter(struct FName InParameterName);

#pragma endregion
};
};