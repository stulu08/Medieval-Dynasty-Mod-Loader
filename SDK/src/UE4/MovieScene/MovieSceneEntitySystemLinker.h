#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneEntitySystemLinker
// Super: Class CoreUObject.Object
// Size: 1264
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEntitySystemLinker : public UObject {
public:
#pragma region Members
	//struct FMovieSceneEntitySystemGraph	SystemGraph;		//Offset: 664	Size: 312	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneEntitySystemGraph M_GetSystemGraph() const;
	struct FMovieSceneEntitySystemGraph* M_PtrGetSystemGraph();
	void M_SetSystemGraph(const struct FMovieSceneEntitySystemGraph& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystemLinker");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};