#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePreAnimatedStateSystemInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePreAnimatedStateSystemInterface");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};