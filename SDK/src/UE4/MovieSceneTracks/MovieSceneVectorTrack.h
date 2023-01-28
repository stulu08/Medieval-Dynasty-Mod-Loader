#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneVectorTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
	//int32_t	NumChannelsUsed;		//Offset: 192	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetNumChannelsUsed() const;
	int32_t* M_PtrGetNumChannelsUsed();
	void M_SetNumChannelsUsed(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};