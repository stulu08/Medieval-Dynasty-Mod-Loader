#include "../SDK.h"
#include "MovieScene.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Spawnables
// Declaration: TArray<struct FMovieSceneSpawnable> Spawnables
TArray<struct FMovieSceneSpawnable> UMovieScene::M_GetSpawnables() const {
	return Read<TArray<struct FMovieSceneSpawnable>>((byte*)this + 80);
}
TArray<struct FMovieSceneSpawnable>* UMovieScene::M_PtrGetSpawnables() {
	return reinterpret_cast<TArray<struct FMovieSceneSpawnable>*>((byte*)this + 80);
}
void UMovieScene::M_SetSpawnables(const TArray<struct FMovieSceneSpawnable>& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of Possessables
// Declaration: TArray<struct FMovieScenePossessable> Possessables
TArray<struct FMovieScenePossessable> UMovieScene::M_GetPossessables() const {
	return Read<TArray<struct FMovieScenePossessable>>((byte*)this + 96);
}
TArray<struct FMovieScenePossessable>* UMovieScene::M_PtrGetPossessables() {
	return reinterpret_cast<TArray<struct FMovieScenePossessable>*>((byte*)this + 96);
}
void UMovieScene::M_SetPossessables(const TArray<struct FMovieScenePossessable>& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of ObjectBindings
// Declaration: TArray<struct FMovieSceneBinding> ObjectBindings
TArray<struct FMovieSceneBinding> UMovieScene::M_GetObjectBindings() const {
	return Read<TArray<struct FMovieSceneBinding>>((byte*)this + 112);
}
TArray<struct FMovieSceneBinding>* UMovieScene::M_PtrGetObjectBindings() {
	return reinterpret_cast<TArray<struct FMovieSceneBinding>*>((byte*)this + 112);
}
void UMovieScene::M_SetObjectBindings(const TArray<struct FMovieSceneBinding>& value) {
	Write((byte*)this + 112, value);
}
// Member Getter and Setter of BindingGroups
// Declaration: TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups
TMap<struct FName, struct FMovieSceneObjectBindingIDs> UMovieScene::M_GetBindingGroups() const {
	return Read<TMap<struct FName, struct FMovieSceneObjectBindingIDs>>((byte*)this + 128);
}
TMap<struct FName, struct FMovieSceneObjectBindingIDs>* UMovieScene::M_PtrGetBindingGroups() {
	return reinterpret_cast<TMap<struct FName, struct FMovieSceneObjectBindingIDs>*>((byte*)this + 128);
}
void UMovieScene::M_SetBindingGroups(const TMap<struct FName, struct FMovieSceneObjectBindingIDs>& value) {
	Write((byte*)this + 128, value);
}
// Member Getter and Setter of MasterTracks
// Declaration: TArray<class UMovieSceneTrack*> MasterTracks
TArray<class UMovieSceneTrack*> UMovieScene::M_GetMasterTracks() const {
	return Read<TArray<class UMovieSceneTrack*>>((byte*)this + 208);
}
TArray<class UMovieSceneTrack*>* UMovieScene::M_PtrGetMasterTracks() {
	return reinterpret_cast<TArray<class UMovieSceneTrack*>*>((byte*)this + 208);
}
void UMovieScene::M_SetMasterTracks(const TArray<class UMovieSceneTrack*>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of CameraCutTrack
// Declaration: class UMovieSceneTrack* CameraCutTrack
class UMovieSceneTrack* UMovieScene::M_GetCameraCutTrack() const {
	return Read<class UMovieSceneTrack*>((byte*)this + 224);
}
class UMovieSceneTrack** UMovieScene::M_PtrGetCameraCutTrack() {
	return reinterpret_cast<class UMovieSceneTrack**>((byte*)this + 224);
}
void UMovieScene::M_SetCameraCutTrack(const class UMovieSceneTrack*& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of SelectionRange
// Declaration: struct FMovieSceneFrameRange SelectionRange
struct FMovieSceneFrameRange UMovieScene::M_GetSelectionRange() const {
	return Read<struct FMovieSceneFrameRange>((byte*)this + 232);
}
struct FMovieSceneFrameRange* UMovieScene::M_PtrGetSelectionRange() {
	return reinterpret_cast<struct FMovieSceneFrameRange*>((byte*)this + 232);
}
void UMovieScene::M_SetSelectionRange(const struct FMovieSceneFrameRange& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of PlaybackRange
// Declaration: struct FMovieSceneFrameRange PlaybackRange
struct FMovieSceneFrameRange UMovieScene::M_GetPlaybackRange() const {
	return Read<struct FMovieSceneFrameRange>((byte*)this + 248);
}
struct FMovieSceneFrameRange* UMovieScene::M_PtrGetPlaybackRange() {
	return reinterpret_cast<struct FMovieSceneFrameRange*>((byte*)this + 248);
}
void UMovieScene::M_SetPlaybackRange(const struct FMovieSceneFrameRange& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of TickResolution
// Declaration: struct FFrameRate TickResolution
struct FFrameRate UMovieScene::M_GetTickResolution() const {
	return Read<struct FFrameRate>((byte*)this + 264);
}
struct FFrameRate* UMovieScene::M_PtrGetTickResolution() {
	return reinterpret_cast<struct FFrameRate*>((byte*)this + 264);
}
void UMovieScene::M_SetTickResolution(const struct FFrameRate& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of DisplayRate
// Declaration: struct FFrameRate DisplayRate
struct FFrameRate UMovieScene::M_GetDisplayRate() const {
	return Read<struct FFrameRate>((byte*)this + 272);
}
struct FFrameRate* UMovieScene::M_PtrGetDisplayRate() {
	return reinterpret_cast<struct FFrameRate*>((byte*)this + 272);
}
void UMovieScene::M_SetDisplayRate(const struct FFrameRate& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of EvaluationType
// Declaration: EMovieSceneEvaluationType EvaluationType
EMovieSceneEvaluationType UMovieScene::M_GetEvaluationType() const {
	return Read<EMovieSceneEvaluationType>((byte*)this + 280);
}
EMovieSceneEvaluationType* UMovieScene::M_PtrGetEvaluationType() {
	return reinterpret_cast<EMovieSceneEvaluationType*>((byte*)this + 280);
}
void UMovieScene::M_SetEvaluationType(const EMovieSceneEvaluationType& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of ClockSource
// Declaration: EUpdateClockSource ClockSource
EUpdateClockSource UMovieScene::M_GetClockSource() const {
	return Read<EUpdateClockSource>((byte*)this + 281);
}
EUpdateClockSource* UMovieScene::M_PtrGetClockSource() {
	return reinterpret_cast<EUpdateClockSource*>((byte*)this + 281);
}
void UMovieScene::M_SetClockSource(const EUpdateClockSource& value) {
	Write((byte*)this + 281, value);
}
// Member Getter and Setter of CustomClockSourcePath
// Declaration: struct FSoftObjectPath CustomClockSourcePath
struct FSoftObjectPath UMovieScene::M_GetCustomClockSourcePath() const {
	return Read<struct FSoftObjectPath>((byte*)this + 288);
}
struct FSoftObjectPath* UMovieScene::M_PtrGetCustomClockSourcePath() {
	return reinterpret_cast<struct FSoftObjectPath*>((byte*)this + 288);
}
void UMovieScene::M_SetCustomClockSourcePath(const struct FSoftObjectPath& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of MarkedFrames
// Declaration: TArray<struct FMovieSceneMarkedFrame> MarkedFrames
TArray<struct FMovieSceneMarkedFrame> UMovieScene::M_GetMarkedFrames() const {
	return Read<TArray<struct FMovieSceneMarkedFrame>>((byte*)this + 312);
}
TArray<struct FMovieSceneMarkedFrame>* UMovieScene::M_PtrGetMarkedFrames() {
	return reinterpret_cast<TArray<struct FMovieSceneMarkedFrame>*>((byte*)this + 312);
}
void UMovieScene::M_SetMarkedFrames(const TArray<struct FMovieSceneMarkedFrame>& value) {
	Write((byte*)this + 312, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}