#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.WidgetAnimationPlayCallbackProxy
// Super: Class CoreUObject.Object
// Size: 72
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetAnimationPlayCallbackProxy : public UObject {
public:
#pragma region Members
	//TAssetPtr<class FWidgetAnimationResult__DelegateSignature>	finished;		//Offset: 40	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FWidgetAnimationResult__DelegateSignature> M_Getfinished() const;
	TAssetPtr<class FWidgetAnimationResult__DelegateSignature>* M_PtrGetfinished();
	void M_Setfinished(const TAssetPtr<class FWidgetAnimationResult__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);

	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);

#pragma endregion
};
};