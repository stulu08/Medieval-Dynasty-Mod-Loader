#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneCompiledData
// Super: Class CoreUObject.Object
// Size: 1016
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCompiledData : public UObject {
public:
#pragma region Members
	//struct FMovieSceneEvaluationTemplate	EvaluationTemplate;		//Offset: 40	Size: 352	Flags: ContainsInstancedReference, NativeAccessSpecifierPrivate
	struct FMovieSceneEvaluationTemplate M_GetEvaluationTemplate() const;
	struct FMovieSceneEvaluationTemplate* M_PtrGetEvaluationTemplate();
	void M_SetEvaluationTemplate(const struct FMovieSceneEvaluationTemplate& value);

	//struct FMovieSceneSequenceHierarchy	Hierarchy;		//Offset: 392	Size: 280	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneSequenceHierarchy M_GetHierarchy() const;
	struct FMovieSceneSequenceHierarchy* M_PtrGetHierarchy();
	void M_SetHierarchy(const struct FMovieSceneSequenceHierarchy& value);

	//struct FMovieSceneEntityComponentField	EntityComponentField;		//Offset: 672	Size: 240	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneEntityComponentField M_GetEntityComponentField() const;
	struct FMovieSceneEntityComponentField* M_PtrGetEntityComponentField();
	void M_SetEntityComponentField(const struct FMovieSceneEntityComponentField& value);

	//struct FMovieSceneEvaluationField	TrackTemplateField;		//Offset: 912	Size: 48	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneEvaluationField M_GetTrackTemplateField() const;
	struct FMovieSceneEvaluationField* M_PtrGetTrackTemplateField();
	void M_SetTrackTemplateField(const struct FMovieSceneEvaluationField& value);

	//TArray<struct FFrameTime>	DeterminismFences;		//Offset: 960	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FFrameTime> M_GetDeterminismFences() const;
	TArray<struct FFrameTime>* M_PtrGetDeterminismFences();
	void M_SetDeterminismFences(const TArray<struct FFrameTime>& value);

	//struct FGuid	CompiledSignature;		//Offset: 976	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetCompiledSignature() const;
	struct FGuid* M_PtrGetCompiledSignature();
	void M_SetCompiledSignature(const struct FGuid& value);

	//struct FGuid	CompilerVersion;		//Offset: 992	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetCompilerVersion() const;
	struct FGuid* M_PtrGetCompilerVersion();
	void M_SetCompilerVersion(const struct FGuid& value);

	//struct FMovieSceneSequenceCompilerMaskStruct	AccumulatedMask;		//Offset: 1008	Size: 1	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FMovieSceneSequenceCompilerMaskStruct M_GetAccumulatedMask() const;
	struct FMovieSceneSequenceCompilerMaskStruct* M_PtrGetAccumulatedMask();
	void M_SetAccumulatedMask(const struct FMovieSceneSequenceCompilerMaskStruct& value);

	//struct FMovieSceneSequenceCompilerMaskStruct	AllocatedMask;		//Offset: 1009	Size: 1	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FMovieSceneSequenceCompilerMaskStruct M_GetAllocatedMask() const;
	struct FMovieSceneSequenceCompilerMaskStruct* M_PtrGetAllocatedMask();
	void M_SetAllocatedMask(const struct FMovieSceneSequenceCompilerMaskStruct& value);

	//EMovieSceneSequenceFlags	AccumulatedFlags;		//Offset: 1010	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EMovieSceneSequenceFlags M_GetAccumulatedFlags() const;
	EMovieSceneSequenceFlags* M_PtrGetAccumulatedFlags();
	void M_SetAccumulatedFlags(const EMovieSceneSequenceFlags& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledData");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};