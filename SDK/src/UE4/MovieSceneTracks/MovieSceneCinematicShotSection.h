#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSubSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Super: Class MovieScene.MovieSceneSubSection
// Size: 400
// Size inherited: 360
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
public:
#pragma region Members
	//struct FString	ShotDisplayName;		//Offset: 360	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString M_GetShotDisplayName() const;
	struct FString* M_PtrGetShotDisplayName();
	void M_SetShotDisplayName(const struct FString& value);

	//struct FText	DisplayName;		//Offset: 376	Size: 24	Flags: Deprecated, NativeAccessSpecifierPrivate
	struct FText M_GetDisplayName() const;
	struct FText* M_PtrGetDisplayName();
	void M_SetDisplayName(const struct FText& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}

#pragma region Functions
	struct FString GetShotDisplayName()/* const*/;

	void SetShotDisplayName(struct FString InShotDisplayName);

#pragma endregion
};
};