#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEnumTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
	//class UEnum*	Enum;		//Offset: 192	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UEnum* M_GetEnum() const;
	class UEnum** M_PtrGetEnum();
	void M_SetEnum(const class UEnum*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};