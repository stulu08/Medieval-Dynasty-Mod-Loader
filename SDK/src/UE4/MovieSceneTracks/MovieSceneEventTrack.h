#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 184
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//unsigned char	bFireEventsWhenForwards : 1;		//Offset: 160	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFireEventsWhenForwards() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFireEventsWhenForwards();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFireEventsWhenForwards(const unsigned char& value);

	//unsigned char	bFireEventsWhenBackwards : 1;		//Offset: 160	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFireEventsWhenBackwards() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFireEventsWhenBackwards();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFireEventsWhenBackwards(const unsigned char& value);

	//EFireEventsAtPosition	EventPosition;		//Offset: 164	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EFireEventsAtPosition M_GetEventPosition() const;
	EFireEventsAtPosition* M_PtrGetEventPosition();
	void M_SetEventPosition(const EFireEventsAtPosition& value);

	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 168	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};