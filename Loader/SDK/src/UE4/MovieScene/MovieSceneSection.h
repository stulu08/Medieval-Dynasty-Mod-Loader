#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSignedObject.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSection
// Super: Class MovieScene.MovieSceneSignedObject
// Size: 232
// Size inherited: 80
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSection : public UMovieSceneSignedObject {
public:
#pragma region Members
	//struct FMovieSceneSectionEvalOptions	EvalOptions;		//Offset: 80	Size: 2	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneSectionEvalOptions M_GetEvalOptions() const;
	struct FMovieSceneSectionEvalOptions* M_PtrGetEvalOptions();
	void M_SetEvalOptions(const struct FMovieSceneSectionEvalOptions& value);

	//struct FMovieSceneEasingSettings	Easing;		//Offset: 88	Size: 56	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneEasingSettings M_GetEasing() const;
	struct FMovieSceneEasingSettings* M_PtrGetEasing();
	void M_SetEasing(const struct FMovieSceneEasingSettings& value);

	//struct FMovieSceneFrameRange	SectionRange;		//Offset: 144	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange M_GetSectionRange() const;
	struct FMovieSceneFrameRange* M_PtrGetSectionRange();
	void M_SetSectionRange(const struct FMovieSceneFrameRange& value);

	//struct FFrameNumber	PreRollFrames;		//Offset: 160	Size: 4	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameNumber M_GetPreRollFrames() const;
	struct FFrameNumber* M_PtrGetPreRollFrames();
	void M_SetPreRollFrames(const struct FFrameNumber& value);

	//struct FFrameNumber	PostRollFrames;		//Offset: 164	Size: 4	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameNumber M_GetPostRollFrames() const;
	struct FFrameNumber* M_PtrGetPostRollFrames();
	void M_SetPostRollFrames(const struct FFrameNumber& value);

	//int32_t	RowIndex;		//Offset: 168	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetRowIndex() const;
	int32_t* M_PtrGetRowIndex();
	void M_SetRowIndex(const int32_t& value);

	//int32_t	OverlapPriority;		//Offset: 172	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetOverlapPriority() const;
	int32_t* M_PtrGetOverlapPriority();
	void M_SetOverlapPriority(const int32_t& value);

	//unsigned char	bIsActive : 1;		//Offset: 176	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsActive() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsActive();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsActive(const unsigned char& value);

	//unsigned char	bIsLocked : 1;		//Offset: 176	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsLocked() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsLocked();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsLocked(const unsigned char& value);

	//float	StartTime;		//Offset: 180	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetStartTime() const;
	float* M_PtrGetStartTime();
	void M_SetStartTime(const float& value);

	//float	EndTime;		//Offset: 184	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetEndTime() const;
	float* M_PtrGetEndTime();
	void M_SetEndTime(const float& value);

	//float	PrerollTime;		//Offset: 188	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetPrerollTime() const;
	float* M_PtrGetPrerollTime();
	void M_SetPrerollTime(const float& value);

	//float	PostrollTime;		//Offset: 192	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetPostrollTime() const;
	float* M_PtrGetPostrollTime();
	void M_SetPostrollTime(const float& value);

	//unsigned char	bIsInfinite : 1;		//Offset: 196	Size: 1	Flags: Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsInfinite() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsInfinite();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsInfinite(const unsigned char& value);

	//bool	bSupportsInfiniteRange;		//Offset: 200	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbSupportsInfiniteRange() const;
	bool* M_PtrGetbSupportsInfiniteRange();
	void M_SetbSupportsInfiniteRange(const bool& value);

	//struct FOptionalMovieSceneBlendType	BlendType;		//Offset: 201	Size: 2	Flags: NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FOptionalMovieSceneBlendType M_GetBlendType() const;
	struct FOptionalMovieSceneBlendType* M_PtrGetBlendType();
	void M_SetBlendType(const struct FOptionalMovieSceneBlendType& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

#pragma region Functions
	struct FOptionalMovieSceneBlendType GetBlendType()/* const*/;

	EMovieSceneCompletionMode GetCompletionMode()/* const*/;

	int32_t GetOverlapPriority()/* const*/;

	int32_t GetPostRollFrames()/* const*/;

	int32_t GetPreRollFrames()/* const*/;

	int32_t GetRowIndex()/* const*/;

	bool IsActive()/* const*/;

	bool IsLocked()/* const*/;

	void SetBlendType(EMovieSceneBlendType InBlendType);

	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);

	void SetIsActive(bool bInIsActive);

	void SetIsLocked(bool bInIsLocked);

	void SetOverlapPriority(int32_t NewPriority);

	void SetPostRollFrames(int32_t InPostRollFrames);

	void SetPreRollFrames(int32_t InPreRollFrames);

	void SetRowIndex(int32_t NewRowIndex);

#pragma endregion
};
};