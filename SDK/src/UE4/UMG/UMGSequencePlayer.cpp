#include "../SDK.h"
#include "UMGSequencePlayer.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Animation
// Declaration: class UWidgetAnimation* Animation
class UWidgetAnimation* UUMGSequencePlayer::M_GetAnimation() const {
	return Read<class UWidgetAnimation*>((byte*)this + 608);
}
class UWidgetAnimation** UUMGSequencePlayer::M_PtrGetAnimation() {
	return reinterpret_cast<class UWidgetAnimation**>((byte*)this + 608);
}
void UUMGSequencePlayer::M_SetAnimation(const class UWidgetAnimation*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of RootTemplateInstance
// Declaration: struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance UUMGSequencePlayer::M_GetRootTemplateInstance() const {
	return Read<struct FMovieSceneRootEvaluationTemplateInstance>((byte*)this + 624);
}
struct FMovieSceneRootEvaluationTemplateInstance* UUMGSequencePlayer::M_PtrGetRootTemplateInstance() {
	return reinterpret_cast<struct FMovieSceneRootEvaluationTemplateInstance*>((byte*)this + 624);
}
void UUMGSequencePlayer::M_SetRootTemplateInstance(const struct FMovieSceneRootEvaluationTemplateInstance& value) {
	Write((byte*)this + 624, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UMGSequencePlayer.GetUserTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UUMGSequencePlayer::GetUserTag()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	struct UUMGSequencePlayer_GetUserTag_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UUMGSequencePlayer_GetUserTag_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UMGSequencePlayer.SetUserTag
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InUserTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUMGSequencePlayer::SetUserTag(struct FName InUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	struct UUMGSequencePlayer_SetUserTag_Params {
		struct FName InUserTag;			//Offset: 0 | ElementSize: 8
	};
	UUMGSequencePlayer_SetUserTag_Params params;
	params.InUserTag = InUserTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}