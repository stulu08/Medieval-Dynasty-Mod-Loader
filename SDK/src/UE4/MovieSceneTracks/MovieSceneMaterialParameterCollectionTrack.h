#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneMaterialTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Super: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 176
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {
public:
#pragma region Members
	//class UMaterialParameterCollection*	MPC;		//Offset: 168	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMaterialParameterCollection* M_GetMPC() const;
	class UMaterialParameterCollection** M_PtrGetMPC();
	void M_SetMPC(const class UMaterialParameterCollection*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};