#include "../SDK.h"
#include "MovieSceneEasingFunction.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// Flags: Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Interp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UMovieSceneEasingFunction::OnEvaluate(float Interp)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	struct UMovieSceneEasingFunction_OnEvaluate_Params {
		float Interp;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UMovieSceneEasingFunction_OnEvaluate_Params params;
	params.Interp = Interp;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}