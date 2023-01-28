#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DConstraintSection
// Super: Class MovieScene.MovieSceneSection
// Size: 272
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DConstraintSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FGuid	ConstraintId;		//Offset: 232	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FGuid M_GetConstraintId() const;
	struct FGuid* M_PtrGetConstraintId();
	void M_SetConstraintId(const struct FGuid& value);

	//struct FMovieSceneObjectBindingID	ConstraintBindingID;		//Offset: 248	Size: 24	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FMovieSceneObjectBindingID M_GetConstraintBindingID() const;
	struct FMovieSceneObjectBindingID* M_PtrGetConstraintBindingID();
	void M_SetConstraintBindingID(const struct FMovieSceneObjectBindingID& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

#pragma region Functions
	struct FMovieSceneObjectBindingID GetConstraintBindingID()/* const*/;

	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);

#pragma endregion
};
};