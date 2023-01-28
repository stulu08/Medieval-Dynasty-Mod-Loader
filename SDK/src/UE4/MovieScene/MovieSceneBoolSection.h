#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneBoolSection
// Super: Class MovieScene.MovieSceneSection
// Size: 384
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneBoolSection : public UMovieSceneSection {
public:
#pragma region Members
	//bool	DefaultValue;		//Offset: 232	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetDefaultValue() const;
	bool* M_PtrGetDefaultValue();
	void M_SetDefaultValue(const bool& value);

	//struct FMovieSceneBoolChannel	BoolCurve;		//Offset: 240	Size: 144	Flags: Protected, NativeAccessSpecifierProtected
	struct FMovieSceneBoolChannel M_GetBoolCurve() const;
	struct FMovieSceneBoolChannel* M_PtrGetBoolCurve();
	void M_SetBoolCurve(const struct FMovieSceneBoolChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBoolSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};