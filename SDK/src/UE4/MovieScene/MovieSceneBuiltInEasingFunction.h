#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneBuiltInEasingFunction
// Super: Class CoreUObject.Object
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneBuiltInEasingFunction : public UObject {
public:
#pragma region Members
	//EMovieSceneBuiltInEasing	Type;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieSceneBuiltInEasing M_GetType() const;
	EMovieSceneBuiltInEasing* M_PtrGetType();
	void M_SetType(const EMovieSceneBuiltInEasing& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};