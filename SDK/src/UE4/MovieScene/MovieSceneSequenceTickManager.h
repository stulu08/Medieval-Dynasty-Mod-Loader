#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSequenceTickManager
// Super: Class CoreUObject.Object
// Size: 208
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSequenceTickManager : public UObject {
public:
#pragma region Members
	//TArray<struct FMovieSceneSequenceActorPointers>	SequenceActors;		//Offset: 40	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneSequenceActorPointers> M_GetSequenceActors() const;
	TArray<struct FMovieSceneSequenceActorPointers>* M_PtrGetSequenceActors();
	void M_SetSequenceActors(const TArray<struct FMovieSceneSequenceActorPointers>& value);

	//class UMovieSceneEntitySystemLinker*	Linker;		//Offset: 56	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneEntitySystemLinker* M_GetLinker() const;
	class UMovieSceneEntitySystemLinker** M_PtrGetLinker();
	void M_SetLinker(const class UMovieSceneEntitySystemLinker*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequenceTickManager");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};