#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePropertyTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 192
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//class UMovieSceneSection*	SectionToKey;		//Offset: 144	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneSection* M_GetSectionToKey() const;
	class UMovieSceneSection** M_PtrGetSectionToKey();
	void M_SetSectionToKey(const class UMovieSceneSection*& value);

	//struct FMovieScenePropertyBinding	PropertyBinding;		//Offset: 152	Size: 20	Flags: NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMovieScenePropertyBinding M_GetPropertyBinding() const;
	struct FMovieScenePropertyBinding* M_PtrGetPropertyBinding();
	void M_SetPropertyBinding(const struct FMovieScenePropertyBinding& value);

	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 176	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};