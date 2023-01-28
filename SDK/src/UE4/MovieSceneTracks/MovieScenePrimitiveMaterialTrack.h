#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 208
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
	//int32_t	MaterialIndex;		//Offset: 200	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetMaterialIndex() const;
	int32_t* M_PtrGetMaterialIndex();
	void M_SetMaterialIndex(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};