#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSignedObject.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneTrack
// Super: Class MovieScene.MovieSceneSignedObject
// Size: 144
// Size inherited: 80
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneTrack : public UMovieSceneSignedObject {
public:
#pragma region Members
	//struct FMovieSceneTrackEvalOptions	EvalOptions;		//Offset: 80	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneTrackEvalOptions M_GetEvalOptions() const;
	struct FMovieSceneTrackEvalOptions* M_PtrGetEvalOptions();
	void M_SetEvalOptions(const struct FMovieSceneTrackEvalOptions& value);

	//bool	bIsEvalDisabled;		//Offset: 85	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsEvalDisabled() const;
	bool* M_PtrGetbIsEvalDisabled();
	void M_SetbIsEvalDisabled(const bool& value);

	//TArray<int32_t>	RowsDisabled;		//Offset: 88	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<int32_t> M_GetRowsDisabled() const;
	TArray<int32_t>* M_PtrGetRowsDisabled();
	void M_SetRowsDisabled(const TArray<int32_t>& value);

	//struct FGuid	EvaluationFieldGuid;		//Offset: 108	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetEvaluationFieldGuid() const;
	struct FGuid* M_PtrGetEvaluationFieldGuid();
	void M_SetEvaluationFieldGuid(const struct FGuid& value);

	//struct FMovieSceneTrackEvaluationField	EvaluationField;		//Offset: 128	Size: 16	Flags: ContainsInstancedReference, NativeAccessSpecifierPrivate
	struct FMovieSceneTrackEvaluationField M_GetEvaluationField() const;
	struct FMovieSceneTrackEvaluationField* M_PtrGetEvaluationField();
	void M_SetEvaluationField(const struct FMovieSceneTrackEvaluationField& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};