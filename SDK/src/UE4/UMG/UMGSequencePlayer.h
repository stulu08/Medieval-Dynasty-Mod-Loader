#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.UMGSequencePlayer
// Super: Class CoreUObject.Object
// Size: 968
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUMGSequencePlayer : public UObject {
public:
#pragma region Members
	//class UWidgetAnimation*	Animation;		//Offset: 608	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UWidgetAnimation* M_GetAnimation() const;
	class UWidgetAnimation** M_PtrGetAnimation();
	void M_SetAnimation(const class UWidgetAnimation*& value);

	//struct FMovieSceneRootEvaluationTemplateInstance	RootTemplateInstance;		//Offset: 624	Size: 232	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneRootEvaluationTemplateInstance M_GetRootTemplateInstance() const;
	struct FMovieSceneRootEvaluationTemplateInstance* M_PtrGetRootTemplateInstance();
	void M_SetRootTemplateInstance(const struct FMovieSceneRootEvaluationTemplateInstance& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

#pragma region Functions
	struct FName GetUserTag() const;

	void SetUserTag(struct FName InUserTag);

#pragma endregion
};
};