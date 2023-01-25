#include "../SDK.h"
#include "WidgetAnimationPlayCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of finished
// Declaration: TAssetPtr<class FWidgetAnimationResult__DelegateSignature> finished
TAssetPtr<class FWidgetAnimationResult__DelegateSignature> UWidgetAnimationPlayCallbackProxy::M_Getfinished() const {
	return Read<TAssetPtr<class FWidgetAnimationResult__DelegateSignature>>((byte*)this + 40);
}
TAssetPtr<class FWidgetAnimationResult__DelegateSignature>* UWidgetAnimationPlayCallbackProxy::M_PtrGetfinished() {
	return reinterpret_cast<TAssetPtr<class FWidgetAnimationResult__DelegateSignature>*>((byte*)this + 40);
}
void UWidgetAnimationPlayCallbackProxy::M_Setfinished(const TAssetPtr<class FWidgetAnimationResult__DelegateSignature>& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Result	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumLoopsToPlay	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayMode	Type: TEnumAsByte<EUMGSequencePlayMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidgetAnimationPlayCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params {
		class UUMGSequencePlayer* Result;			//Offset: 0 | ElementSize: 8
		class UUserWidget* Widget;			//Offset: 8 | ElementSize: 8
		class UWidgetAnimation* InAnimation;			//Offset: 16 | ElementSize: 8
		float StartAtTime;			//Offset: 24 | ElementSize: 4
		int32_t NumLoopsToPlay;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;			//Offset: 32 | ElementSize: 1
		float PlaybackSpeed;			//Offset: 36 | ElementSize: 4
		class UWidgetAnimationPlayCallbackProxy* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Result	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Widget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumLoopsToPlay	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayMode	Type: TEnumAsByte<EUMGSequencePlayMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidgetAnimationPlayCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params {
		class UUMGSequencePlayer* Result;			//Offset: 0 | ElementSize: 8
		class UUserWidget* Widget;			//Offset: 8 | ElementSize: 8
		class UWidgetAnimation* InAnimation;			//Offset: 16 | ElementSize: 8
		float StartAtTime;			//Offset: 24 | ElementSize: 4
		float EndAtTime;			//Offset: 28 | ElementSize: 4
		int32_t NumLoopsToPlay;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;			//Offset: 36 | ElementSize: 1
		float PlaybackSpeed;			//Offset: 40 | ElementSize: 4
		class UWidgetAnimationPlayCallbackProxy* ReturnValue;			//Offset: 48 | ElementSize: 8
	};
	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
	return params.ReturnValue;
}

#pragma endregion
}