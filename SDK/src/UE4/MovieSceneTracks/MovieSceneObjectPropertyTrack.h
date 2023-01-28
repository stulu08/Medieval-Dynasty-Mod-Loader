#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 208
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
	//class UObject*	PropertyClass;		//Offset: 200	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetPropertyClass() const;
	class UObject** M_PtrGetPropertyClass();
	void M_SetPropertyClass(const class UObject*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};