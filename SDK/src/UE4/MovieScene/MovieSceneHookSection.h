#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneHookSection
// Super: Class MovieScene.MovieSceneSection
// Size: 256
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneHookSection : public UMovieSceneSection {
public:
#pragma region Members
	//unsigned char	bRequiresRangedHook : 1;		//Offset: 248	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRequiresRangedHook() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRequiresRangedHook();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRequiresRangedHook(const unsigned char& value);

	//unsigned char	bRequiresTriggerHooks : 1;		//Offset: 248	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRequiresTriggerHooks() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRequiresTriggerHooks();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRequiresTriggerHooks(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneHookSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};