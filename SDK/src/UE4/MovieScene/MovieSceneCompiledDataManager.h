#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneCompiledDataManager
// Super: Class CoreUObject.Object
// Size: 560
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCompiledDataManager : public UObject {
public:
#pragma region Members
	//TMap<int32_t, struct FMovieSceneSequenceHierarchy>	Hierarchies;		//Offset: 216	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<int32_t, struct FMovieSceneSequenceHierarchy> M_GetHierarchies() const;
	TMap<int32_t, struct FMovieSceneSequenceHierarchy>* M_PtrGetHierarchies();
	void M_SetHierarchies(const TMap<int32_t, struct FMovieSceneSequenceHierarchy>& value);

	//TMap<int32_t, struct FMovieSceneEvaluationTemplate>	TrackTemplates;		//Offset: 296	Size: 80	Flags: ContainsInstancedReference, NativeAccessSpecifierPrivate
	TMap<int32_t, struct FMovieSceneEvaluationTemplate> M_GetTrackTemplates() const;
	TMap<int32_t, struct FMovieSceneEvaluationTemplate>* M_PtrGetTrackTemplates();
	void M_SetTrackTemplates(const TMap<int32_t, struct FMovieSceneEvaluationTemplate>& value);

	//TMap<int32_t, struct FMovieSceneEvaluationField>	TrackTemplateFields;		//Offset: 376	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<int32_t, struct FMovieSceneEvaluationField> M_GetTrackTemplateFields() const;
	TMap<int32_t, struct FMovieSceneEvaluationField>* M_PtrGetTrackTemplateFields();
	void M_SetTrackTemplateFields(const TMap<int32_t, struct FMovieSceneEvaluationField>& value);

	//TMap<int32_t, struct FMovieSceneEntityComponentField>	EntityComponentFields;		//Offset: 456	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<int32_t, struct FMovieSceneEntityComponentField> M_GetEntityComponentFields() const;
	TMap<int32_t, struct FMovieSceneEntityComponentField>* M_PtrGetEntityComponentFields();
	void M_SetEntityComponentFields(const TMap<int32_t, struct FMovieSceneEntityComponentField>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledDataManager");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};