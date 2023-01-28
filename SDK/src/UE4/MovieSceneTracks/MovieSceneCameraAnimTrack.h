#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 168
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	CameraAnimSections;		//Offset: 152	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneSection*> M_GetCameraAnimSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetCameraAnimSections();
	void M_SetCameraAnimSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};