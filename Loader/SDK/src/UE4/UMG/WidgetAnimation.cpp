#include "../SDK.h"
#include "WidgetAnimation.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MovieScene
// Declaration: class UMovieScene* MovieScene
class UMovieScene* UWidgetAnimation::M_GetMovieScene() const {
	return Read<class UMovieScene*>((byte*)this + 96);
}
class UMovieScene** UWidgetAnimation::M_PtrGetMovieScene() {
	return reinterpret_cast<class UMovieScene**>((byte*)this + 96);
}
void UWidgetAnimation::M_SetMovieScene(const class UMovieScene*& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of AnimationBindings
// Declaration: TArray<struct FWidgetAnimationBinding> AnimationBindings
TArray<struct FWidgetAnimationBinding> UWidgetAnimation::M_GetAnimationBindings() const {
	return Read<TArray<struct FWidgetAnimationBinding>>((byte*)this + 104);
}
TArray<struct FWidgetAnimationBinding>* UWidgetAnimation::M_PtrGetAnimationBindings() {
	return reinterpret_cast<TArray<struct FWidgetAnimationBinding>*>((byte*)this + 104);
}
void UWidgetAnimation::M_SetAnimationBindings(const TArray<struct FWidgetAnimationBinding>& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of bLegacyFinishOnStop
// Declaration: bool bLegacyFinishOnStop
bool UWidgetAnimation::M_GetbLegacyFinishOnStop() const {
	return Read<bool>((byte*)this + 120);
}
bool* UWidgetAnimation::M_PtrGetbLegacyFinishOnStop() {
	return reinterpret_cast<bool*>((byte*)this + 120);
}
void UWidgetAnimation::M_SetbLegacyFinishOnStop(const bool& value) {
	Write((byte*)this + 120, value);
}
// Member Getter and Setter of DisplayLabel
// Declaration: struct FString DisplayLabel
struct FString UWidgetAnimation::M_GetDisplayLabel() const {
	return Read<struct FString>((byte*)this + 128);
}
struct FString* UWidgetAnimation::M_PtrGetDisplayLabel() {
	return reinterpret_cast<struct FString*>((byte*)this + 128);
}
void UWidgetAnimation::M_SetDisplayLabel(const struct FString& value) {
	Write((byte*)this + 128, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetAnimation.BindToAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	struct UWidgetAnimation_BindToAnimationFinished_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UWidgetAnimation_BindToAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.BindToAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	struct UWidgetAnimation_BindToAnimationStarted_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UWidgetAnimation_BindToAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.GetEndTime
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidgetAnimation::GetEndTime()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	struct UWidgetAnimation_GetEndTime_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetAnimation_GetEndTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.GetStartTime
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidgetAnimation::GetStartTime()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	struct UWidgetAnimation_GetStartTime_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UWidgetAnimation_GetStartTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	struct UWidgetAnimation_UnbindAllFromAnimationFinished_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
	};
	UWidgetAnimation_UnbindAllFromAnimationFinished_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	struct UWidgetAnimation_UnbindAllFromAnimationStarted_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
	};
	UWidgetAnimation_UnbindAllFromAnimationStarted_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	struct UWidgetAnimation_UnbindFromAnimationFinished_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UWidgetAnimation_UnbindFromAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	struct UWidgetAnimation_UnbindFromAnimationStarted_Params {
		class UUserWidget* Widget;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UWidgetAnimation_UnbindFromAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}