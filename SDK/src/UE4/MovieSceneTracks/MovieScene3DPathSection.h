#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScene3DConstraintSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DPathSection
// Super: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 440
// Size inherited: 272
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	TimingCurve;		//Offset: 272	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetTimingCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetTimingCurve();
	void M_SetTimingCurve(const struct FMovieSceneFloatChannel& value);

	//EMovieScene3DPathSection_Axis	FrontAxisEnum;		//Offset: 432	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieScene3DPathSection_Axis M_GetFrontAxisEnum() const;
	EMovieScene3DPathSection_Axis* M_PtrGetFrontAxisEnum();
	void M_SetFrontAxisEnum(const EMovieScene3DPathSection_Axis& value);

	//EMovieScene3DPathSection_Axis	UpAxisEnum;		//Offset: 433	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieScene3DPathSection_Axis M_GetUpAxisEnum() const;
	EMovieScene3DPathSection_Axis* M_PtrGetUpAxisEnum();
	void M_SetUpAxisEnum(const EMovieScene3DPathSection_Axis& value);

	//unsigned char	bFollow : 1;		//Offset: 436	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFollow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFollow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFollow(const unsigned char& value);

	//unsigned char	bReverse : 1;		//Offset: 436	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReverse() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReverse();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReverse(const unsigned char& value);

	//unsigned char	bForceUpright : 1;		//Offset: 436	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceUpright() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceUpright();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceUpright(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};