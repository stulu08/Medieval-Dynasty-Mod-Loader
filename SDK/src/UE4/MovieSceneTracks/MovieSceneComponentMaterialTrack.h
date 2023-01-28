#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneMaterialTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Super: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 176
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
public:
#pragma region Members
	//int32_t	MaterialIndex;		//Offset: 168	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetMaterialIndex() const;
	int32_t* M_PtrGetMaterialIndex();
	void M_SetMaterialIndex(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};