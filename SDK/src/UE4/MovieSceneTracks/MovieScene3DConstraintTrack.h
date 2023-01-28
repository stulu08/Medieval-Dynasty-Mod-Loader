#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 160
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	ConstraintSections;		//Offset: 144	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<class UMovieSceneSection*> M_GetConstraintSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetConstraintSections();
	void M_SetConstraintSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};