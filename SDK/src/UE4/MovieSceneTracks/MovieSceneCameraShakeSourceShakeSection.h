#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Super: Class MovieScene.MovieSceneSection
// Size: 264
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneCameraShakeSectionData	ShakeData;		//Offset: 232	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneCameraShakeSectionData M_GetShakeData() const;
	struct FMovieSceneCameraShakeSectionData* M_PtrGetShakeData();
	void M_SetShakeData(const struct FMovieSceneCameraShakeSectionData& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};