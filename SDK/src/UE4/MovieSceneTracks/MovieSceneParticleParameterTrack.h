#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 168
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 152	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};