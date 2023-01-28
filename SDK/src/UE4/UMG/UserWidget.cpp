#include "../SDK.h"
#include "UserWidget.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FLinearColor ColorAndOpacity
struct FLinearColor UUserWidget::M_GetColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 272);
}
struct FLinearColor* UUserWidget::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 272);
}
void UUserWidget::M_SetColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of ColorAndOpacityDelegate
// Declaration: struct FScriptDelegate ColorAndOpacityDelegate
struct FScriptDelegate UUserWidget::M_GetColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 288);
}
struct FScriptDelegate* UUserWidget::M_PtrGetColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 288);
}
void UUserWidget::M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of ForegroundColor
// Declaration: struct FSlateColor ForegroundColor
struct FSlateColor UUserWidget::M_GetForegroundColor() const {
	return Read<struct FSlateColor>((byte*)this + 304);
}
struct FSlateColor* UUserWidget::M_PtrGetForegroundColor() {
	return reinterpret_cast<struct FSlateColor*>((byte*)this + 304);
}
void UUserWidget::M_SetForegroundColor(const struct FSlateColor& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of ForegroundColorDelegate
// Declaration: struct FScriptDelegate ForegroundColorDelegate
struct FScriptDelegate UUserWidget::M_GetForegroundColorDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 344);
}
struct FScriptDelegate* UUserWidget::M_PtrGetForegroundColorDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 344);
}
void UUserWidget::M_SetForegroundColorDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of OnVisibilityChanged
// Declaration: TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature> OnVisibilityChanged
TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature> UUserWidget::M_GetOnVisibilityChanged() const {
	return Read<TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>>((byte*)this + 360);
}
TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>* UUserWidget::M_PtrGetOnVisibilityChanged() {
	return reinterpret_cast<TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>*>((byte*)this + 360);
}
void UUserWidget::M_SetOnVisibilityChanged(const TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin UUserWidget::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 400);
}
struct FMargin* UUserWidget::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 400);
}
void UUserWidget::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of ActiveSequencePlayers
// Declaration: TArray<class UUMGSequencePlayer*> ActiveSequencePlayers
TArray<class UUMGSequencePlayer*> UUserWidget::M_GetActiveSequencePlayers() const {
	return Read<TArray<class UUMGSequencePlayer*>>((byte*)this + 416);
}
TArray<class UUMGSequencePlayer*>* UUserWidget::M_PtrGetActiveSequencePlayers() {
	return reinterpret_cast<TArray<class UUMGSequencePlayer*>*>((byte*)this + 416);
}
void UUserWidget::M_SetActiveSequencePlayers(const TArray<class UUMGSequencePlayer*>& value) {
	Write((byte*)this + 416, value);
}
// Member Getter and Setter of AnimationTickManager
// Declaration: class UUMGSequenceTickManager* AnimationTickManager
class UUMGSequenceTickManager* UUserWidget::M_GetAnimationTickManager() const {
	return Read<class UUMGSequenceTickManager*>((byte*)this + 432);
}
class UUMGSequenceTickManager** UUserWidget::M_PtrGetAnimationTickManager() {
	return reinterpret_cast<class UUMGSequenceTickManager**>((byte*)this + 432);
}
void UUserWidget::M_SetAnimationTickManager(const class UUMGSequenceTickManager*& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of StoppedSequencePlayers
// Declaration: TArray<class UUMGSequencePlayer*> StoppedSequencePlayers
TArray<class UUMGSequencePlayer*> UUserWidget::M_GetStoppedSequencePlayers() const {
	return Read<TArray<class UUMGSequencePlayer*>>((byte*)this + 440);
}
TArray<class UUMGSequencePlayer*>* UUserWidget::M_PtrGetStoppedSequencePlayers() {
	return reinterpret_cast<TArray<class UUMGSequencePlayer*>*>((byte*)this + 440);
}
void UUserWidget::M_SetStoppedSequencePlayers(const TArray<class UUMGSequencePlayer*>& value) {
	Write((byte*)this + 440, value);
}
// Member Getter and Setter of NamedSlotBindings
// Declaration: TArray<struct FNamedSlotBinding> NamedSlotBindings
TArray<struct FNamedSlotBinding> UUserWidget::M_GetNamedSlotBindings() const {
	return Read<TArray<struct FNamedSlotBinding>>((byte*)this + 456);
}
TArray<struct FNamedSlotBinding>* UUserWidget::M_PtrGetNamedSlotBindings() {
	return reinterpret_cast<TArray<struct FNamedSlotBinding>*>((byte*)this + 456);
}
void UUserWidget::M_SetNamedSlotBindings(const TArray<struct FNamedSlotBinding>& value) {
	Write((byte*)this + 456, value);
}
// Member Getter and Setter of WidgetTree
// Declaration: class UWidgetTree* WidgetTree
class UWidgetTree* UUserWidget::M_GetWidgetTree() const {
	return Read<class UWidgetTree*>((byte*)this + 472);
}
class UWidgetTree** UUserWidget::M_PtrGetWidgetTree() {
	return reinterpret_cast<class UWidgetTree**>((byte*)this + 472);
}
void UUserWidget::M_SetWidgetTree(const class UWidgetTree*& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of Priority
// Declaration: int32_t Priority
int32_t UUserWidget::M_GetPriority() const {
	return Read<int32_t>((byte*)this + 480);
}
int32_t* UUserWidget::M_PtrGetPriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 480);
}
void UUserWidget::M_SetPriority(const int32_t& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of bSupportsKeyboardFocus
// Declaration: unsigned char bSupportsKeyboardFocus : 1
unsigned char UUserWidget::M_GetbSupportsKeyboardFocus() const {
	return Read<unsigned char>((byte*)this + 484);
}
unsigned char* UUserWidget::M_PtrGetbSupportsKeyboardFocus() {
	return reinterpret_cast<unsigned char*>((byte*)this + 484);
}
void UUserWidget::M_SetbSupportsKeyboardFocus(const unsigned char& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of bIsFocusable
// Declaration: unsigned char bIsFocusable : 1
unsigned char UUserWidget::M_GetbIsFocusable() const {
	return Read<unsigned char>((byte*)this + 484);
}
unsigned char* UUserWidget::M_PtrGetbIsFocusable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 484);
}
void UUserWidget::M_SetbIsFocusable(const unsigned char& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of bStopAction
// Declaration: unsigned char bStopAction : 1
unsigned char UUserWidget::M_GetbStopAction() const {
	return Read<unsigned char>((byte*)this + 484);
}
unsigned char* UUserWidget::M_PtrGetbStopAction() {
	return reinterpret_cast<unsigned char*>((byte*)this + 484);
}
void UUserWidget::M_SetbStopAction(const unsigned char& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of bHasScriptImplementedTick
// Declaration: unsigned char bHasScriptImplementedTick : 1
unsigned char UUserWidget::M_GetbHasScriptImplementedTick() const {
	return Read<unsigned char>((byte*)this + 484);
}
unsigned char* UUserWidget::M_PtrGetbHasScriptImplementedTick() {
	return reinterpret_cast<unsigned char*>((byte*)this + 484);
}
void UUserWidget::M_SetbHasScriptImplementedTick(const unsigned char& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of bHasScriptImplementedPaint
// Declaration: unsigned char bHasScriptImplementedPaint : 1
unsigned char UUserWidget::M_GetbHasScriptImplementedPaint() const {
	return Read<unsigned char>((byte*)this + 484);
}
unsigned char* UUserWidget::M_PtrGetbHasScriptImplementedPaint() {
	return reinterpret_cast<unsigned char*>((byte*)this + 484);
}
void UUserWidget::M_SetbHasScriptImplementedPaint(const unsigned char& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of TickFrequency
// Declaration: EWidgetTickFrequency TickFrequency
EWidgetTickFrequency UUserWidget::M_GetTickFrequency() const {
	return Read<EWidgetTickFrequency>((byte*)this + 496);
}
EWidgetTickFrequency* UUserWidget::M_PtrGetTickFrequency() {
	return reinterpret_cast<EWidgetTickFrequency*>((byte*)this + 496);
}
void UUserWidget::M_SetTickFrequency(const EWidgetTickFrequency& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of InputComponent
// Declaration: class UInputComponent* InputComponent
class UInputComponent* UUserWidget::M_GetInputComponent() const {
	return Read<class UInputComponent*>((byte*)this + 504);
}
class UInputComponent** UUserWidget::M_PtrGetInputComponent() {
	return reinterpret_cast<class UInputComponent**>((byte*)this + 504);
}
void UUserWidget::M_SetInputComponent(const class UInputComponent*& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of AnimationCallbacks
// Declaration: TArray<struct FAnimationEventBinding> AnimationCallbacks
TArray<struct FAnimationEventBinding> UUserWidget::M_GetAnimationCallbacks() const {
	return Read<TArray<struct FAnimationEventBinding>>((byte*)this + 512);
}
TArray<struct FAnimationEventBinding>* UUserWidget::M_PtrGetAnimationCallbacks() {
	return reinterpret_cast<TArray<struct FAnimationEventBinding>*>((byte*)this + 512);
}
void UUserWidget::M_SetAnimationCallbacks(const TArray<struct FAnimationEventBinding>& value) {
	Write((byte*)this + 512, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.UserWidget.AddToPlayerScreen
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: ZOrder	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::AddToPlayerScreen(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	struct UUserWidget_AddToPlayerScreen_Params {
		int32_t ZOrder;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.AddToViewport
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: ZOrder	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::AddToViewport(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	struct UUserWidget_AddToViewport_Params {
		int32_t ZOrder;			//Offset: 0 | ElementSize: 4
	};
	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.BindToAnimationEvent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
// Name: AnimationEvent	Type: EWidgetAnimationEvent	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate, EWidgetAnimationEvent AnimationEvent, struct FName UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	struct UUserWidget_BindToAnimationEvent_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
		EWidgetAnimationEvent AnimationEvent;			//Offset: 24 | ElementSize: 1
		struct FName UserTag;			//Offset: 28 | ElementSize: 8
	};
	UUserWidget_BindToAnimationEvent_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;
	params.AnimationEvent = AnimationEvent;
	params.UserTag = UserTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.BindToAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	struct UUserWidget_BindToAnimationFinished_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UUserWidget_BindToAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.BindToAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	struct UUserWidget_BindToAnimationStarted_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UUserWidget_BindToAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.CancelLatentActions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::CancelLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	struct UUserWidget_CancelLatentActions_Params {
	};
	UUserWidget_CancelLatentActions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.Construct
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUserWidget::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	struct UUserWidget_Construct_Params {
	};
	UUserWidget_Construct_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.Destruct
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUserWidget::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	struct UUserWidget_Destruct_Params {
	};
	UUserWidget_Destruct_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.FlushAnimations
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::FlushAnimations() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.FlushAnimations");

	struct UUserWidget_FlushAnimations_Params {
	};
	UUserWidget_FlushAnimations_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetAlignmentInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UUserWidget::GetAlignmentInViewport()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	struct UUserWidget_GetAlignmentInViewport_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_GetAlignmentInViewport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetAnchorsInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FAnchors	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FAnchors UUserWidget::GetAnchorsInViewport()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	struct UUserWidget_GetAnchorsInViewport_Params {
		struct FAnchors ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UUserWidget_GetAnchorsInViewport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetAnimationCurrentTime
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	struct UUserWidget_GetAnimationCurrentTime_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetIsVisible
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::GetIsVisible()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	struct UUserWidget_GetIsVisible_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_GetIsVisible_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetOwningPlayerCameraManager
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APlayerCameraManager*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerCameraManager");

	struct UUserWidget_GetOwningPlayerCameraManager_Params {
		class APlayerCameraManager* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_GetOwningPlayerCameraManager_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.GetOwningPlayerPawn
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UUserWidget::GetOwningPlayerPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	struct UUserWidget_GetOwningPlayerPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_GetOwningPlayerPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsAnimationPlaying
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	struct UUserWidget_IsAnimationPlaying_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsAnimationPlayingForward
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	struct UUserWidget_IsAnimationPlayingForward_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UUserWidget_IsAnimationPlayingForward_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsAnyAnimationPlaying
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsAnyAnimationPlaying()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	struct UUserWidget_IsAnyAnimationPlaying_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_IsAnyAnimationPlaying_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsInteractable
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsInteractable()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	struct UUserWidget_IsInteractable_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_IsInteractable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsInViewport()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	struct UUserWidget_IsInViewport_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_IsInViewport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsListeningForInputAction
// Flags: Final, Native, Protected, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ActionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsListeningForInputAction(struct FName ActionName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	struct UUserWidget_IsListeningForInputAction_Params {
		struct FName ActionName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.IsPlayingAnimation
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::IsPlayingAnimation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	struct UUserWidget_IsPlayingAnimation_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_IsPlayingAnimation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.ListenForInputAction
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
// Name: ActionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EventType	Type: TEnumAsByte<EInputEvent>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bConsume	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Callback	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::ListenForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, struct FScriptDelegate Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	struct UUserWidget_ListenForInputAction_Params {
		struct FName ActionName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EInputEvent> EventType;			//Offset: 8 | ElementSize: 1
		bool bConsume;			//Offset: 9 | ElementSize: 1
		struct FScriptDelegate Callback;			//Offset: 12 | ElementSize: 16
	};
	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnAddedToFocusPath
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: InFocusEvent	Type: struct FFocusEvent	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnAddedToFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	struct UUserWidget_OnAddedToFocusPath_Params {
		struct FFocusEvent InFocusEvent;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnAnalogValueChanged
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InAnalogInputEvent	Type: struct FAnalogInputEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	struct UUserWidget_OnAnalogValueChanged_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FAnalogInputEvent InAnalogInputEvent;			//Offset: 56 | ElementSize: 64
		struct FEventReply ReturnValue;			//Offset: 120 | ElementSize: 184
	};
	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnAnimationFinished
// Flags: BlueprintCosmetic, Native, Event, Protected, BlueprintEvent
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	struct UUserWidget_OnAnimationFinished_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnAnimationStarted
// Flags: BlueprintCosmetic, Native, Event, Protected, BlueprintEvent
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	struct UUserWidget_OnAnimationStarted_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDragCancelled
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	struct UUserWidget_OnDragCancelled_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 112 | ElementSize: 8
	};
	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDragDetected
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnDragDetected(struct FGeometry MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	struct UUserWidget_OnDragDetected_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent PointerEvent;			//Offset: 56 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 168 | ElementSize: 8
	};
	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Operation != nullptr)
		*Operation = params.Operation;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDragEnter
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: PointerEvent	Type: struct FPointerEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	struct UUserWidget_OnDragEnter_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent PointerEvent;			//Offset: 56 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 168 | ElementSize: 8
	};
	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDragLeave
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnDragLeave(struct FPointerEvent PointerEvent, class UDragDropOperation* Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	struct UUserWidget_OnDragLeave_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 112 | ElementSize: 8
	};
	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDragOver
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: PointerEvent	Type: struct FPointerEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	struct UUserWidget_OnDragOver_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent PointerEvent;			//Offset: 56 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 168 | ElementSize: 8
		bool ReturnValue;			//Offset: 176 | ElementSize: 1
	};
	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnDrop
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: PointerEvent	Type: struct FPointerEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: Operation	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UUserWidget::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	struct UUserWidget_OnDrop_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent PointerEvent;			//Offset: 56 | ElementSize: 112
		class UDragDropOperation* Operation;			//Offset: 168 | ElementSize: 8
		bool ReturnValue;			//Offset: 176 | ElementSize: 1
	};
	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnFocusLost
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: InFocusEvent	Type: struct FFocusEvent	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnFocusLost(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	struct UUserWidget_OnFocusLost_Params {
		struct FFocusEvent InFocusEvent;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnFocusReceived
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InFocusEvent	Type: struct FFocusEvent	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	struct UUserWidget_OnFocusReceived_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FFocusEvent InFocusEvent;			//Offset: 56 | ElementSize: 8
		struct FEventReply ReturnValue;			//Offset: 64 | ElementSize: 184
	};
	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnInitialized
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUserWidget::OnInitialized() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	struct UUserWidget_OnInitialized_Params {
	};
	UUserWidget_OnInitialized_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnKeyChar
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InCharacterEvent	Type: struct FCharacterEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	struct UUserWidget_OnKeyChar_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FCharacterEvent InCharacterEvent;			//Offset: 56 | ElementSize: 32
		struct FEventReply ReturnValue;			//Offset: 88 | ElementSize: 184
	};
	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnKeyDown
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	struct UUserWidget_OnKeyDown_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FKeyEvent InKeyEvent;			//Offset: 56 | ElementSize: 56
		struct FEventReply ReturnValue;			//Offset: 112 | ElementSize: 184
	};
	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnKeyUp
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	struct UUserWidget_OnKeyUp_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FKeyEvent InKeyEvent;			//Offset: 56 | ElementSize: 56
		struct FEventReply ReturnValue;			//Offset: 112 | ElementSize: 184
	};
	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMotionDetected
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InMotionEvent	Type: struct FMotionEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	struct UUserWidget_OnMotionDetected_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FMotionEvent InMotionEvent;			//Offset: 56 | ElementSize: 72
		struct FEventReply ReturnValue;			//Offset: 128 | ElementSize: 184
	};
	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseButtonDoubleClick
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: InMyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InMouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, const struct FPointerEvent& InMouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	struct UUserWidget_OnMouseButtonDoubleClick_Params {
		struct FGeometry InMyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent InMouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseButtonDown
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	struct UUserWidget_OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseButtonUp
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	struct UUserWidget_OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseCaptureLost
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUserWidget::OnMouseCaptureLost() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	struct UUserWidget_OnMouseCaptureLost_Params {
	};
	UUserWidget_OnMouseCaptureLost_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseEnter
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnMouseEnter(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	struct UUserWidget_OnMouseEnter_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
	};
	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseLeave
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	struct UUserWidget_OnMouseLeave_Params {
		struct FPointerEvent MouseEvent;			//Offset: 0 | ElementSize: 112
	};
	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseMove
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMouseMove(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	struct UUserWidget_OnMouseMove_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnMouseWheel
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	struct UUserWidget_OnMouseWheel_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnPaint
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnPaint(struct FPaintContext* Context)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	struct UUserWidget_OnPaint_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
	};
	UUserWidget_OnPaint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnPreviewKeyDown
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	struct UUserWidget_OnPreviewKeyDown_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FKeyEvent InKeyEvent;			//Offset: 56 | ElementSize: 56
		struct FEventReply ReturnValue;			//Offset: 112 | ElementSize: 184
	};
	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnPreviewMouseButtonDown
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: MouseEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	struct UUserWidget_OnPreviewMouseButtonDown_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent MouseEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnRemovedFromFocusPath
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: InFocusEvent	Type: struct FFocusEvent	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	struct UUserWidget_OnRemovedFromFocusPath_Params {
		struct FFocusEvent InFocusEvent;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnTouchEnded
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InTouchEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	struct UUserWidget_OnTouchEnded_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent InTouchEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnTouchForceChanged
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InTouchEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	struct UUserWidget_OnTouchForceChanged_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent InTouchEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnTouchForceChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnTouchGesture
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: GestureEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry MyGeometry, const struct FPointerEvent& GestureEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	struct UUserWidget_OnTouchGesture_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent GestureEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnTouchMoved
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InTouchEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	struct UUserWidget_OnTouchMoved_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent InTouchEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.OnTouchStarted
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InTouchEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	struct UUserWidget_OnTouchStarted_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FPointerEvent InTouchEvent;			//Offset: 56 | ElementSize: 112
		struct FEventReply ReturnValue;			//Offset: 168 | ElementSize: 184
	};
	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PauseAnimation
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	struct UUserWidget_PauseAnimation_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PlayAnimation
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumLoopsToPlay	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayMode	Type: TEnumAsByte<EUMGSequencePlayMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRestoreState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	struct UUserWidget_PlayAnimation_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float StartAtTime;			//Offset: 8 | ElementSize: 4
		int32_t NumLoopsToPlay;			//Offset: 12 | ElementSize: 4
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;			//Offset: 16 | ElementSize: 1
		float PlaybackSpeed;			//Offset: 20 | ElementSize: 4
		bool bRestoreState;			//Offset: 24 | ElementSize: 1
		class UUMGSequencePlayer* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PlayAnimationForward
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRestoreState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	struct UUserWidget_PlayAnimationForward_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float PlaybackSpeed;			//Offset: 8 | ElementSize: 4
		bool bRestoreState;			//Offset: 12 | ElementSize: 1
		class UUMGSequencePlayer* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UUserWidget_PlayAnimationForward_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PlayAnimationReverse
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRestoreState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	struct UUserWidget_PlayAnimationReverse_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float PlaybackSpeed;			//Offset: 8 | ElementSize: 4
		bool bRestoreState;			//Offset: 12 | ElementSize: 1
		class UUMGSequencePlayer* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UUserWidget_PlayAnimationReverse_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PlayAnimationTimeRange
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndAtTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumLoopsToPlay	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayMode	Type: TEnumAsByte<EUMGSequencePlayMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRestoreState	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUMGSequencePlayer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	struct UUserWidget_PlayAnimationTimeRange_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float StartAtTime;			//Offset: 8 | ElementSize: 4
		float EndAtTime;			//Offset: 12 | ElementSize: 4
		int32_t NumLoopsToPlay;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;			//Offset: 20 | ElementSize: 1
		float PlaybackSpeed;			//Offset: 24 | ElementSize: 4
		bool bRestoreState;			//Offset: 28 | ElementSize: 1
		class UUMGSequencePlayer* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UUserWidget_PlayAnimationTimeRange_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.UserWidget.PlaySound
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: SoundToPlay	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::PlaySound(class USoundBase* SoundToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	struct UUserWidget_PlaySound_Params {
		class USoundBase* SoundToPlay;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.PreConstruct
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: IsDesignTime	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	struct UUserWidget_PreConstruct_Params {
		bool IsDesignTime;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.RegisterInputComponent
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::RegisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	struct UUserWidget_RegisterInputComponent_Params {
	};
	UUserWidget_RegisterInputComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.RemoveFromViewport
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::RemoveFromViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	struct UUserWidget_RemoveFromViewport_Params {
	};
	UUserWidget_RemoveFromViewport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.ReverseAnimation
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	struct UUserWidget_ReverseAnimation_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetAlignmentInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Alignment	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetAlignmentInViewport(struct FVector2D Alignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	struct UUserWidget_SetAlignmentInViewport_Params {
		struct FVector2D Alignment;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetAnchorsInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: Anchors	Type: struct FAnchors	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetAnchorsInViewport(struct FAnchors Anchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	struct UUserWidget_SetAnchorsInViewport_Params {
		struct FAnchors Anchors;			//Offset: 0 | ElementSize: 16
	};
	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetAnimationCurrentTime
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnimationCurrentTime");

	struct UUserWidget_SetAnimationCurrentTime_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float InTime;			//Offset: 8 | ElementSize: 4
	};
	UUserWidget_SetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;
	params.InTime = InTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetColorAndOpacity
// Flags: Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	struct UUserWidget_SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetDesiredSizeInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Size	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetDesiredSizeInViewport(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	struct UUserWidget_SetDesiredSizeInViewport_Params {
		struct FVector2D Size;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetForegroundColor
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InForegroundColor	Type: struct FSlateColor	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	struct UUserWidget_SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;			//Offset: 0 | ElementSize: 40
	};
	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetInputActionBlocking
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
// Name: bShouldBlock	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetInputActionBlocking(bool bShouldBlock) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	struct UUserWidget_SetInputActionBlocking_Params {
		bool bShouldBlock;			//Offset: 0 | ElementSize: 1
	};
	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetInputActionPriority
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
// Name: NewPriority	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetInputActionPriority(int32_t NewPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	struct UUserWidget_SetInputActionPriority_Params {
		int32_t NewPriority;			//Offset: 0 | ElementSize: 4
	};
	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetNumLoopsToPlay
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumLoopsToPlay	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	struct UUserWidget_SetNumLoopsToPlay_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		int32_t NumLoopsToPlay;			//Offset: 8 | ElementSize: 4
	};
	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetOwningPlayer
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: LocalPlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	struct UUserWidget_SetOwningPlayer_Params {
		class APlayerController* LocalPlayerController;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetPadding
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InPadding	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	struct UUserWidget_SetPadding_Params {
		struct FMargin InPadding;			//Offset: 0 | ElementSize: 16
	};
	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetPlaybackSpeed
// Flags: Final, BlueprintCosmetic, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaybackSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	struct UUserWidget_SetPlaybackSpeed_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
		float PlaybackSpeed;			//Offset: 8 | ElementSize: 4
	};
	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.SetPositionInViewport
// Flags: Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Position	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRemoveDPIScale	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	struct UUserWidget_SetPositionInViewport_Params {
		struct FVector2D Position;			//Offset: 0 | ElementSize: 8
		bool bRemoveDPIScale;			//Offset: 8 | ElementSize: 1
	};
	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.StopAllAnimations
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::StopAllAnimations() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	struct UUserWidget_StopAllAnimations_Params {
	};
	UUserWidget_StopAllAnimations_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.StopAnimation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAnimation	Type: class UWidgetAnimation*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	struct UUserWidget_StopAnimation_Params {
		class UWidgetAnimation* InAnimation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.StopAnimationsAndLatentActions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::StopAnimationsAndLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	struct UUserWidget_StopAnimationsAndLatentActions_Params {
	};
	UUserWidget_StopAnimationsAndLatentActions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.StopListeningForAllInputActions
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::StopListeningForAllInputActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	struct UUserWidget_StopListeningForAllInputActions_Params {
	};
	UUserWidget_StopListeningForAllInputActions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.StopListeningForInputAction
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
// Name: ActionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EventType	Type: TEnumAsByte<EInputEvent>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::StopListeningForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	struct UUserWidget_StopListeningForInputAction_Params {
		struct FName ActionName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EInputEvent> EventType;			//Offset: 8 | ElementSize: 1
	};
	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.Tick
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: InDeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	struct UUserWidget_Tick_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		float InDeltaTime;			//Offset: 56 | ElementSize: 4
	};
	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	struct UUserWidget_UnbindAllFromAnimationFinished_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_UnbindAllFromAnimationFinished_Params params;
	params.Animation = Animation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	struct UUserWidget_UnbindAllFromAnimationStarted_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
	};
	UUserWidget_UnbindAllFromAnimationStarted_Params params;
	params.Animation = Animation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.UnbindFromAnimationFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	struct UUserWidget_UnbindFromAnimationFinished_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UUserWidget_UnbindFromAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.UnbindFromAnimationStarted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Animation	Type: class UWidgetAnimation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	struct UUserWidget_UnbindFromAnimationStarted_Params {
		class UWidgetAnimation* Animation;			//Offset: 0 | ElementSize: 8
		struct FScriptDelegate Delegate;			//Offset: 8 | ElementSize: 16
	};
	UUserWidget_UnbindFromAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.UserWidget.UnregisterInputComponent
// Flags: Final, Native, Protected, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UUserWidget::UnregisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	struct UUserWidget_UnregisterInputComponent_Params {
	};
	UUserWidget_UnregisterInputComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}