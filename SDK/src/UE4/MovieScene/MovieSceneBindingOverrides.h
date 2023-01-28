#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneBindingOverrides
// Super: Class CoreUObject.Object
// Size: 144
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneBindingOverrides : public UObject {
public:
#pragma region Members
	//TArray<struct FMovieSceneBindingOverrideData>	BindingData;		//Offset: 40	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneBindingOverrideData> M_GetBindingData() const;
	TArray<struct FMovieSceneBindingOverrideData>* M_PtrGetBindingData();
	void M_SetBindingData(const TArray<struct FMovieSceneBindingOverrideData>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};