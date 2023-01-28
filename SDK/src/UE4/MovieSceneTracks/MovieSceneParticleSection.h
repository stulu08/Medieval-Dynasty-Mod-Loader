#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneParticleSection
// Super: Class MovieScene.MovieSceneSection
// Size: 384
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneParticleSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneParticleChannel	ParticleKeys;		//Offset: 232	Size: 152	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneParticleChannel M_GetParticleKeys() const;
	struct FMovieSceneParticleChannel* M_PtrGetParticleKeys();
	void M_SetParticleKeys(const struct FMovieSceneParticleChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};