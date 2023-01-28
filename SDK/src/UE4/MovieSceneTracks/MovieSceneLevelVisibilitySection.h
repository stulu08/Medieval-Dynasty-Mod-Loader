#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Super: Class MovieScene.MovieSceneSection
// Size: 264
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {
public:
#pragma region Members
	//ELevelVisibility	Visibility;		//Offset: 240	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	ELevelVisibility M_GetVisibility() const;
	ELevelVisibility* M_PtrGetVisibility();
	void M_SetVisibility(const ELevelVisibility& value);

	//TArray<struct FName>	LevelNames;		//Offset: 248	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FName> M_GetLevelNames() const;
	TArray<struct FName>* M_PtrGetLevelNames();
	void M_SetLevelNames(const TArray<struct FName>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}

#pragma region Functions
	TArray<struct FName> GetLevelNames()/* const*/;

	ELevelVisibility GetVisibility()/* const*/;

	void SetLevelNames(const TArray<struct FName>& InLevelNames);

	void SetVisibility(ELevelVisibility InVisibility);

#pragma endregion
};
};