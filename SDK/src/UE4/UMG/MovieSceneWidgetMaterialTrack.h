#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneMaterialTrack.h"
/////////////////////////////////////////////
// Class UMG.MovieSceneWidgetMaterialTrack
// Super: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 192
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {
public:
#pragma region Members
	//TArray<struct FName>	BrushPropertyNamePath;		//Offset: 168	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FName> M_GetBrushPropertyNamePath() const;
	TArray<struct FName>* M_PtrGetBrushPropertyNamePath();
	void M_SetBrushPropertyNamePath(const TArray<struct FName>& value);

	//struct FName	TrackName;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FName M_GetTrackName() const;
	struct FName* M_PtrGetTrackName();
	void M_SetTrackName(const struct FName& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};