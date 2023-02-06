#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneEntitySystem
// Super: Class CoreUObject.Object
// Size: 64
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEntitySystem : public UObject {
public:
#pragma region Members
	//class UMovieSceneEntitySystemLinker*	Linker;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMovieSceneEntitySystemLinker* M_GetLinker() const;
	class UMovieSceneEntitySystemLinker** M_PtrGetLinker();
	void M_SetLinker(const class UMovieSceneEntitySystemLinker*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};