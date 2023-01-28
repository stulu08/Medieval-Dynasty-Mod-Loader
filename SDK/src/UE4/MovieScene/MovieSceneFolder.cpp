#include "../SDK.h"
#include "MovieSceneFolder.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FolderName
// Declaration: struct FName FolderName
struct FName UMovieSceneFolder::M_GetFolderName() const {
	return Read<struct FName>((byte*)this + 40);
}
struct FName* UMovieSceneFolder::M_PtrGetFolderName() {
	return reinterpret_cast<struct FName*>((byte*)this + 40);
}
void UMovieSceneFolder::M_SetFolderName(const struct FName& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of ChildFolders
// Declaration: TArray<class UMovieSceneFolder*> ChildFolders
TArray<class UMovieSceneFolder*> UMovieSceneFolder::M_GetChildFolders() const {
	return Read<TArray<class UMovieSceneFolder*>>((byte*)this + 48);
}
TArray<class UMovieSceneFolder*>* UMovieSceneFolder::M_PtrGetChildFolders() {
	return reinterpret_cast<TArray<class UMovieSceneFolder*>*>((byte*)this + 48);
}
void UMovieSceneFolder::M_SetChildFolders(const TArray<class UMovieSceneFolder*>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of ChildMasterTracks
// Declaration: TArray<class UMovieSceneTrack*> ChildMasterTracks
TArray<class UMovieSceneTrack*> UMovieSceneFolder::M_GetChildMasterTracks() const {
	return Read<TArray<class UMovieSceneTrack*>>((byte*)this + 64);
}
TArray<class UMovieSceneTrack*>* UMovieSceneFolder::M_PtrGetChildMasterTracks() {
	return reinterpret_cast<TArray<class UMovieSceneTrack*>*>((byte*)this + 64);
}
void UMovieSceneFolder::M_SetChildMasterTracks(const TArray<class UMovieSceneTrack*>& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of ChildObjectBindingStrings
// Declaration: TArray<struct FString> ChildObjectBindingStrings
TArray<struct FString> UMovieSceneFolder::M_GetChildObjectBindingStrings() const {
	return Read<TArray<struct FString>>((byte*)this + 80);
}
TArray<struct FString>* UMovieSceneFolder::M_PtrGetChildObjectBindingStrings() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 80);
}
void UMovieSceneFolder::M_SetChildObjectBindingStrings(const TArray<struct FString>& value) {
	Write((byte*)this + 80, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}