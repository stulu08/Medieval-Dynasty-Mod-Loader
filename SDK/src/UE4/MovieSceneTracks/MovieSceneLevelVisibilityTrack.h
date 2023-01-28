#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 160
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 144	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};