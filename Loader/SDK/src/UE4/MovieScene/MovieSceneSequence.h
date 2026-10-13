#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSignedObject.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSequence
// Super: Class MovieScene.MovieSceneSignedObject
// Size: 96
// Size inherited: 80
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSequence : public UMovieSceneSignedObject {
public:
#pragma region Members
	//class UMovieSceneCompiledData*	CompiledData;		//Offset: 80	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneCompiledData* M_GetCompiledData() const;
	class UMovieSceneCompiledData** M_PtrGetCompiledData();
	void M_SetCompiledData(const class UMovieSceneCompiledData*& value);

	//EMovieSceneCompletionMode	DefaultCompletionMode;		//Offset: 88	Size: 1	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieSceneCompletionMode M_GetDefaultCompletionMode() const;
	EMovieSceneCompletionMode* M_PtrGetDefaultCompletionMode();
	void M_SetDefaultCompletionMode(const EMovieSceneCompletionMode& value);

	//bool	bParentContextsAreSignificant;		//Offset: 89	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbParentContextsAreSignificant() const;
	bool* M_PtrGetbParentContextsAreSignificant();
	void M_SetbParentContextsAreSignificant(const bool& value);

	//bool	bPlayableDirectly;		//Offset: 90	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbPlayableDirectly() const;
	bool* M_PtrGetbPlayableDirectly();
	void M_SetbPlayableDirectly(const bool& value);

	//EMovieSceneSequenceFlags	SequenceFlags;		//Offset: 91	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EMovieSceneSequenceFlags M_GetSequenceFlags() const;
	EMovieSceneSequenceFlags* M_PtrGetSequenceFlags();
	void M_SetSequenceFlags(const EMovieSceneSequenceFlags& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

#pragma region Functions
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName)/* const*/;

	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName)/* const*/;

#pragma endregion
};
};