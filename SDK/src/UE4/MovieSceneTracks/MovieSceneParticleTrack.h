#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneParticleTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 168
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	ParticleSections;		//Offset: 152	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneSection*> M_GetParticleSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetParticleSections();
	void M_SetParticleSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};