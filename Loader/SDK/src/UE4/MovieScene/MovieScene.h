#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSignedObject.h"
/////////////////////////////////////////////
// Class MovieScene.MovieScene
// Super: Class MovieScene.MovieSceneSignedObject
// Size: 328
// Size inherited: 80
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene : public UMovieSceneSignedObject {
public:
#pragma region Members
	//TArray<struct FMovieSceneSpawnable>	Spawnables;		//Offset: 80	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneSpawnable> M_GetSpawnables() const;
	TArray<struct FMovieSceneSpawnable>* M_PtrGetSpawnables();
	void M_SetSpawnables(const TArray<struct FMovieSceneSpawnable>& value);

	//TArray<struct FMovieScenePossessable>	Possessables;		//Offset: 96	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieScenePossessable> M_GetPossessables() const;
	TArray<struct FMovieScenePossessable>* M_PtrGetPossessables();
	void M_SetPossessables(const TArray<struct FMovieScenePossessable>& value);

	//TArray<struct FMovieSceneBinding>	ObjectBindings;		//Offset: 112	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneBinding> M_GetObjectBindings() const;
	TArray<struct FMovieSceneBinding>* M_PtrGetObjectBindings();
	void M_SetObjectBindings(const TArray<struct FMovieSceneBinding>& value);

	//TMap<struct FName, struct FMovieSceneObjectBindingIDs>	BindingGroups;		//Offset: 128	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> M_GetBindingGroups() const;
	TMap<struct FName, struct FMovieSceneObjectBindingIDs>* M_PtrGetBindingGroups();
	void M_SetBindingGroups(const TMap<struct FName, struct FMovieSceneObjectBindingIDs>& value);

	//TArray<class UMovieSceneTrack*>	MasterTracks;		//Offset: 208	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneTrack*> M_GetMasterTracks() const;
	TArray<class UMovieSceneTrack*>* M_PtrGetMasterTracks();
	void M_SetMasterTracks(const TArray<class UMovieSceneTrack*>& value);

	//class UMovieSceneTrack*	CameraCutTrack;		//Offset: 224	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneTrack* M_GetCameraCutTrack() const;
	class UMovieSceneTrack** M_PtrGetCameraCutTrack();
	void M_SetCameraCutTrack(const class UMovieSceneTrack*& value);

	//struct FMovieSceneFrameRange	SelectionRange;		//Offset: 232	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FMovieSceneFrameRange M_GetSelectionRange() const;
	struct FMovieSceneFrameRange* M_PtrGetSelectionRange();
	void M_SetSelectionRange(const struct FMovieSceneFrameRange& value);

	//struct FMovieSceneFrameRange	PlaybackRange;		//Offset: 248	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FMovieSceneFrameRange M_GetPlaybackRange() const;
	struct FMovieSceneFrameRange* M_PtrGetPlaybackRange();
	void M_SetPlaybackRange(const struct FMovieSceneFrameRange& value);

	//struct FFrameRate	TickResolution;		//Offset: 264	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameRate M_GetTickResolution() const;
	struct FFrameRate* M_PtrGetTickResolution();
	void M_SetTickResolution(const struct FFrameRate& value);

	//struct FFrameRate	DisplayRate;		//Offset: 272	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameRate M_GetDisplayRate() const;
	struct FFrameRate* M_PtrGetDisplayRate();
	void M_SetDisplayRate(const struct FFrameRate& value);

	//EMovieSceneEvaluationType	EvaluationType;		//Offset: 280	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EMovieSceneEvaluationType M_GetEvaluationType() const;
	EMovieSceneEvaluationType* M_PtrGetEvaluationType();
	void M_SetEvaluationType(const EMovieSceneEvaluationType& value);

	//EUpdateClockSource	ClockSource;		//Offset: 281	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EUpdateClockSource M_GetClockSource() const;
	EUpdateClockSource* M_PtrGetClockSource();
	void M_SetClockSource(const EUpdateClockSource& value);

	//struct FSoftObjectPath	CustomClockSourcePath;		//Offset: 288	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FSoftObjectPath M_GetCustomClockSourcePath() const;
	struct FSoftObjectPath* M_PtrGetCustomClockSourcePath();
	void M_SetCustomClockSourcePath(const struct FSoftObjectPath& value);

	//TArray<struct FMovieSceneMarkedFrame>	MarkedFrames;		//Offset: 312	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneMarkedFrame> M_GetMarkedFrames() const;
	TArray<struct FMovieSceneMarkedFrame>* M_PtrGetMarkedFrames();
	void M_SetMarkedFrames(const TArray<struct FMovieSceneMarkedFrame>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};