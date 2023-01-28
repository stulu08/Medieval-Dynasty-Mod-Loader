#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSignedObject
// Super: Class CoreUObject.Object
// Size: 80
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSignedObject : public UObject {
public:
#pragma region Members
	//struct FGuid	Signature;		//Offset: 40	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetSignature() const;
	struct FGuid* M_PtrGetSignature();
	void M_SetSignature(const struct FGuid& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};