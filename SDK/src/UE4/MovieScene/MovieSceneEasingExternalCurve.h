#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneEasingExternalCurve
// Super: Class CoreUObject.Object
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEasingExternalCurve : public UObject {
public:
#pragma region Members
	//class UCurveFloat*	Curve;		//Offset: 48	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat* M_GetCurve() const;
	class UCurveFloat** M_PtrGetCurve();
	void M_SetCurve(const class UCurveFloat*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};