#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneTrackInstance
// Super: Class CoreUObject.Object
// Size: 80
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneTrackInstance : public UObject {
public:
#pragma region Members
	//class UObject*	AnimatedObject;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UObject* M_GetAnimatedObject() const;
	class UObject** M_PtrGetAnimatedObject();
	void M_SetAnimatedObject(const class UObject*& value);

	//bool	bIsMasterTrackInstance;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbIsMasterTrackInstance() const;
	bool* M_PtrGetbIsMasterTrackInstance();
	void M_SetbIsMasterTrackInstance(const bool& value);

	//class UMovieSceneEntitySystemLinker*	Linker;		//Offset: 56	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneEntitySystemLinker* M_GetLinker() const;
	class UMovieSceneEntitySystemLinker** M_PtrGetLinker();
	void M_SetLinker(const class UMovieSceneEntitySystemLinker*& value);

	//TArray<struct FMovieSceneTrackInstanceInput>	Inputs;		//Offset: 64	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneTrackInstanceInput> M_GetInputs() const;
	TArray<struct FMovieSceneTrackInstanceInput>* M_PtrGetInputs();
	void M_SetInputs(const TArray<struct FMovieSceneTrackInstanceInput>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstance");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};