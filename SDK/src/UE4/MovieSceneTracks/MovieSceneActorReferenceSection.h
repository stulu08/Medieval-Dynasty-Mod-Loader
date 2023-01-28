#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Super: Class MovieScene.MovieSceneSection
// Size: 552
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneActorReferenceData	ActorReferenceData;		//Offset: 232	Size: 176	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneActorReferenceData M_GetActorReferenceData() const;
	struct FMovieSceneActorReferenceData* M_PtrGetActorReferenceData();
	void M_SetActorReferenceData(const struct FMovieSceneActorReferenceData& value);

	//struct FIntegralCurve	ActorGuidIndexCurve;		//Offset: 408	Size: 128	Flags: Deprecated, NativeAccessSpecifierPrivate
	struct FIntegralCurve M_GetActorGuidIndexCurve() const;
	struct FIntegralCurve* M_PtrGetActorGuidIndexCurve();
	void M_SetActorGuidIndexCurve(const struct FIntegralCurve& value);

	//TArray<struct FString>	ActorGuidStrings;		//Offset: 536	Size: 16	Flags: ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
	TArray<struct FString> M_GetActorGuidStrings() const;
	TArray<struct FString>* M_PtrGetActorGuidStrings();
	void M_SetActorGuidStrings(const TArray<struct FString>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};