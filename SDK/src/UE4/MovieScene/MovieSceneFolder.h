#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneFolder
// Super: Class CoreUObject.Object
// Size: 112
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneFolder : public UObject {
public:
#pragma region Members
	//struct FName	FolderName;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FName M_GetFolderName() const;
	struct FName* M_PtrGetFolderName();
	void M_SetFolderName(const struct FName& value);

	//TArray<class UMovieSceneFolder*>	ChildFolders;		//Offset: 48	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneFolder*> M_GetChildFolders() const;
	TArray<class UMovieSceneFolder*>* M_PtrGetChildFolders();
	void M_SetChildFolders(const TArray<class UMovieSceneFolder*>& value);

	//TArray<class UMovieSceneTrack*>	ChildMasterTracks;		//Offset: 64	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneTrack*> M_GetChildMasterTracks() const;
	TArray<class UMovieSceneTrack*>* M_PtrGetChildMasterTracks();
	void M_SetChildMasterTracks(const TArray<class UMovieSceneTrack*>& value);

	//TArray<struct FString>	ChildObjectBindingStrings;		//Offset: 80	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FString> M_GetChildObjectBindingStrings() const;
	TArray<struct FString>* M_PtrGetChildObjectBindingStrings();
	void M_SetChildObjectBindingStrings(const TArray<struct FString>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};