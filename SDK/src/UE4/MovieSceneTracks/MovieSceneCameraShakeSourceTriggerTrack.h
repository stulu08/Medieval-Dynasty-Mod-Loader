#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 168
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 152	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};