#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSubSection
// Super: Class MovieScene.MovieSceneSection
// Size: 360
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSubSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneSectionParameters	Parameters;		//Offset: 232	Size: 36	Flags: Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneSectionParameters M_GetParameters() const;
	struct FMovieSceneSectionParameters* M_PtrGetParameters();
	void M_SetParameters(const struct FMovieSceneSectionParameters& value);

	//float	StartOffset;		//Offset: 268	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetStartOffset() const;
	float* M_PtrGetStartOffset();
	void M_SetStartOffset(const float& value);

	//float	TimeScale;		//Offset: 272	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetTimeScale() const;
	float* M_PtrGetTimeScale();
	void M_SetTimeScale(const float& value);

	//float	PrerollTime;		//Offset: 276	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetPrerollTime() const;
	float* M_PtrGetPrerollTime();
	void M_SetPrerollTime(const float& value);

	//unsigned char	NetworkMask;		//Offset: 280	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char M_GetNetworkMask() const;
	unsigned char* M_PtrGetNetworkMask();
	void M_SetNetworkMask(const unsigned char& value);

	//class UMovieSceneSequence*	SubSequence;		//Offset: 288	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMovieSceneSequence* M_GetSubSequence() const;
	class UMovieSceneSequence** M_PtrGetSubSequence();
	void M_SetSubSequence(const class UMovieSceneSequence*& value);

	//TLazyObjectPtr<class AActor>	ActorToRecord;		//Offset: 296	Size: 28	Flags: Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TLazyObjectPtr<class AActor> M_GetActorToRecord() const;
	TLazyObjectPtr<class AActor>* M_PtrGetActorToRecord();
	void M_SetActorToRecord(const TLazyObjectPtr<class AActor>& value);

	//struct FString	TargetSequenceName;		//Offset: 328	Size: 16	Flags: Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FString M_GetTargetSequenceName() const;
	struct FString* M_PtrGetTargetSequenceName();
	void M_SetTargetSequenceName(const struct FString& value);

	//struct FDirectoryPath	TargetPathToRecordTo;		//Offset: 344	Size: 16	Flags: Edit, Protected, NativeAccessSpecifierProtected
	struct FDirectoryPath M_GetTargetPathToRecordTo() const;
	struct FDirectoryPath* M_PtrGetTargetPathToRecordTo();
	void M_SetTargetPathToRecordTo(const struct FDirectoryPath& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}

#pragma region Functions
	class UMovieSceneSequence* GetSequence()/* const*/;

	void SetSequence(class UMovieSceneSequence* Sequence);

#pragma endregion
};
};