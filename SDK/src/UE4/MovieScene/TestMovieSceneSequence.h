#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSequence.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneSequence
// Super: Class MovieScene.MovieSceneSequence
// Size: 104
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneSequence : public UMovieSceneSequence {
public:
#pragma region Members
	//class UMovieScene*	MovieScene;		//Offset: 96	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMovieScene* M_GetMovieScene() const;
	class UMovieScene** M_PtrGetMovieScene();
	void M_SetMovieScene(const class UMovieScene*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};