#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Super: Class MovieScene.MovieSceneSection
// Size: 624
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneSkeletalAnimationParams	Params;		//Offset: 232	Size: 216	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMovieSceneSkeletalAnimationParams M_GetParams() const;
	struct FMovieSceneSkeletalAnimationParams* M_PtrGetParams();
	void M_SetParams(const struct FMovieSceneSkeletalAnimationParams& value);

	//class UAnimSequence*	AnimSequence;		//Offset: 448	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UAnimSequence* M_GetAnimSequence() const;
	class UAnimSequence** M_PtrGetAnimSequence();
	void M_SetAnimSequence(const class UAnimSequence*& value);

	//class UAnimSequenceBase*	Animation;		//Offset: 456	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UAnimSequenceBase* M_GetAnimation() const;
	class UAnimSequenceBase** M_PtrGetAnimation();
	void M_SetAnimation(const class UAnimSequenceBase*& value);

	//float	StartOffset;		//Offset: 464	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetStartOffset() const;
	float* M_PtrGetStartOffset();
	void M_SetStartOffset(const float& value);

	//float	EndOffset;		//Offset: 468	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetEndOffset() const;
	float* M_PtrGetEndOffset();
	void M_SetEndOffset(const float& value);

	//float	PlayRate;		//Offset: 472	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetPlayRate() const;
	float* M_PtrGetPlayRate();
	void M_SetPlayRate(const float& value);

	//unsigned char	bReverse : 1;		//Offset: 476	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReverse() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReverse();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReverse(const unsigned char& value);

	//struct FName	SlotName;		//Offset: 480	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FName M_GetSlotName() const;
	struct FName* M_PtrGetSlotName();
	void M_SetSlotName(const struct FName& value);

	//struct FVector	StartLocationOffset;		//Offset: 488	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetStartLocationOffset() const;
	struct FVector* M_PtrGetStartLocationOffset();
	void M_SetStartLocationOffset(const struct FVector& value);

	//struct FRotator	StartRotationOffset;		//Offset: 500	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetStartRotationOffset() const;
	struct FRotator* M_PtrGetStartRotationOffset();
	void M_SetStartRotationOffset(const struct FRotator& value);

	//bool	bMatchWithPrevious;		//Offset: 512	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchWithPrevious() const;
	bool* M_PtrGetbMatchWithPrevious();
	void M_SetbMatchWithPrevious(const bool& value);

	//struct FName	MatchedBoneName;		//Offset: 516	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetMatchedBoneName() const;
	struct FName* M_PtrGetMatchedBoneName();
	void M_SetMatchedBoneName(const struct FName& value);

	//struct FVector	MatchedLocationOffset;		//Offset: 524	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetMatchedLocationOffset() const;
	struct FVector* M_PtrGetMatchedLocationOffset();
	void M_SetMatchedLocationOffset(const struct FVector& value);

	//struct FRotator	MatchedRotationOffset;		//Offset: 536	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetMatchedRotationOffset() const;
	struct FRotator* M_PtrGetMatchedRotationOffset();
	void M_SetMatchedRotationOffset(const struct FRotator& value);

	//bool	bMatchTranslation;		//Offset: 548	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchTranslation() const;
	bool* M_PtrGetbMatchTranslation();
	void M_SetbMatchTranslation(const bool& value);

	//bool	bMatchIncludeZHeight;		//Offset: 549	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchIncludeZHeight() const;
	bool* M_PtrGetbMatchIncludeZHeight();
	void M_SetbMatchIncludeZHeight(const bool& value);

	//bool	bMatchRotationYaw;		//Offset: 550	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchRotationYaw() const;
	bool* M_PtrGetbMatchRotationYaw();
	void M_SetbMatchRotationYaw(const bool& value);

	//bool	bMatchRotationPitch;		//Offset: 551	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchRotationPitch() const;
	bool* M_PtrGetbMatchRotationPitch();
	void M_SetbMatchRotationPitch(const bool& value);

	//bool	bMatchRotationRoll;		//Offset: 552	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbMatchRotationRoll() const;
	bool* M_PtrGetbMatchRotationRoll();
	void M_SetbMatchRotationRoll(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};