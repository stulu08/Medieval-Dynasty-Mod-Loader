#include "../SDK.h"
#include "MovieSceneTransformOrigin.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// Flags: Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params {
		struct FTransform ReturnValue;			//Offset: 0 | ElementSize: 48
	};
	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}