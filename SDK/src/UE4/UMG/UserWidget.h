#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.UserWidget
// Super: Class UMG.Widget
// Size: 608
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UUserWidget : public UWidget {
public:
#pragma region Members
	//struct FLinearColor	ColorAndOpacity;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetColorAndOpacity() const;
	struct FLinearColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FLinearColor& value);

	//struct FScriptDelegate	ColorAndOpacityDelegate;		//Offset: 288	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetColorAndOpacityDelegate();
	void M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value);

	//struct FSlateColor	ForegroundColor;		//Offset: 304	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateColor M_GetForegroundColor() const;
	struct FSlateColor* M_PtrGetForegroundColor();
	void M_SetForegroundColor(const struct FSlateColor& value);

	//struct FScriptDelegate	ForegroundColorDelegate;		//Offset: 344	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetForegroundColorDelegate() const;
	struct FScriptDelegate* M_PtrGetForegroundColorDelegate();
	void M_SetForegroundColorDelegate(const struct FScriptDelegate& value);

	//TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>	OnVisibilityChanged;		//Offset: 360	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature> M_GetOnVisibilityChanged() const;
	TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>* M_PtrGetOnVisibilityChanged();
	void M_SetOnVisibilityChanged(const TAssetPtr<class FOnVisibilityChangedEvent__DelegateSignature>& value);

	//struct FMargin	Padding;		//Offset: 400	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//TArray<class UUMGSequencePlayer*>	ActiveSequencePlayers;		//Offset: 416	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<class UUMGSequencePlayer*> M_GetActiveSequencePlayers() const;
	TArray<class UUMGSequencePlayer*>* M_PtrGetActiveSequencePlayers();
	void M_SetActiveSequencePlayers(const TArray<class UUMGSequencePlayer*>& value);

	//class UUMGSequenceTickManager*	AnimationTickManager;		//Offset: 432	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UUMGSequenceTickManager* M_GetAnimationTickManager() const;
	class UUMGSequenceTickManager** M_PtrGetAnimationTickManager();
	void M_SetAnimationTickManager(const class UUMGSequenceTickManager*& value);

	//TArray<class UUMGSequencePlayer*>	StoppedSequencePlayers;		//Offset: 440	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<class UUMGSequencePlayer*> M_GetStoppedSequencePlayers() const;
	TArray<class UUMGSequencePlayer*>* M_PtrGetStoppedSequencePlayers();
	void M_SetStoppedSequencePlayers(const TArray<class UUMGSequencePlayer*>& value);

	//TArray<struct FNamedSlotBinding>	NamedSlotBindings;		//Offset: 456	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<struct FNamedSlotBinding> M_GetNamedSlotBindings() const;
	TArray<struct FNamedSlotBinding>* M_PtrGetNamedSlotBindings();
	void M_SetNamedSlotBindings(const TArray<struct FNamedSlotBinding>& value);

	//class UWidgetTree*	WidgetTree;		//Offset: 472	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidgetTree* M_GetWidgetTree() const;
	class UWidgetTree** M_PtrGetWidgetTree();
	void M_SetWidgetTree(const class UWidgetTree*& value);

	//int32_t	Priority;		//Offset: 480	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPriority() const;
	int32_t* M_PtrGetPriority();
	void M_SetPriority(const int32_t& value);

	//unsigned char	bSupportsKeyboardFocus : 1;		//Offset: 484	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportsKeyboardFocus() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportsKeyboardFocus();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportsKeyboardFocus(const unsigned char& value);

	//unsigned char	bIsFocusable : 1;		//Offset: 484	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsFocusable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsFocusable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsFocusable(const unsigned char& value);

	//unsigned char	bStopAction : 1;		//Offset: 484	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbStopAction() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbStopAction();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbStopAction(const unsigned char& value);

	//unsigned char	bHasScriptImplementedTick : 1;		//Offset: 484	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasScriptImplementedTick() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasScriptImplementedTick();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasScriptImplementedTick(const unsigned char& value);

	//unsigned char	bHasScriptImplementedPaint : 1;		//Offset: 484	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasScriptImplementedPaint() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasScriptImplementedPaint();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasScriptImplementedPaint(const unsigned char& value);

	//EWidgetTickFrequency	TickFrequency;		//Offset: 496	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EWidgetTickFrequency M_GetTickFrequency() const;
	EWidgetTickFrequency* M_PtrGetTickFrequency();
	void M_SetTickFrequency(const EWidgetTickFrequency& value);

	//class UInputComponent*	InputComponent;		//Offset: 504	Size: 8	Flags: ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UInputComponent* M_GetInputComponent() const;
	class UInputComponent** M_PtrGetInputComponent();
	void M_SetInputComponent(const class UInputComponent*& value);

	//TArray<struct FAnimationEventBinding>	AnimationCallbacks;		//Offset: 512	Size: 16	Flags: ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<struct FAnimationEventBinding> M_GetAnimationCallbacks() const;
	TArray<struct FAnimationEventBinding>* M_PtrGetAnimationCallbacks();
	void M_SetAnimationCallbacks(const TArray<struct FAnimationEventBinding>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}

#pragma region Functions
	bool AddToPlayerScreen(int32_t ZOrder);

	void AddToViewport(int32_t ZOrder);

	void BindToAnimationEvent(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate, EWidgetAnimationEvent AnimationEvent, struct FName UserTag);

	void BindToAnimationFinished(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate);

	void BindToAnimationStarted(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate);

	void CancelLatentActions();

	void Construct();

	void Destruct();

	void FlushAnimations();

	struct FVector2D GetAlignmentInViewport() const;

	struct FAnchors GetAnchorsInViewport() const;

	float GetAnimationCurrentTime(const class UWidgetAnimation* InAnimation) const;

	bool GetIsVisible() const;

	class APlayerCameraManager* GetOwningPlayerCameraManager() const;

	class APawn* GetOwningPlayerPawn() const;

	bool IsAnimationPlaying(const class UWidgetAnimation* InAnimation) const;

	bool IsAnimationPlayingForward(const class UWidgetAnimation* InAnimation);

	bool IsAnyAnimationPlaying() const;

	bool IsInteractable() const;

	bool IsInViewport() const;

	bool IsListeningForInputAction(struct FName ActionName) const;

	bool IsPlayingAnimation() const;

	void ListenForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, struct FScriptDelegate Callback);

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent);

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent);

	void OnAnimationFinished(const class UWidgetAnimation* Animation);

	void OnAnimationStarted(const class UWidgetAnimation* Animation);

	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);

	void OnDragDetected(struct FGeometry MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);

	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);

	void OnDragLeave(struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);

	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);

	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);

	void OnFocusLost(struct FFocusEvent InFocusEvent);

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);

	void OnInitialized();

	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent);

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent);

	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, const struct FPointerEvent& InMouseEvent);

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	void OnMouseCaptureLost();

	void OnMouseEnter(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	void OnPaint(struct FPaintContext* Context) const;

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);

	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, const struct FPointerEvent& GestureEvent);

	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent);

	float PauseAnimation(const class UWidgetAnimation* InAnimation);

	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);

	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);

	void PlaySound(class USoundBase* SoundToPlay);

	void PreConstruct(bool IsDesignTime);

	void RegisterInputComponent();

	void RemoveFromViewport();

	void ReverseAnimation(const class UWidgetAnimation* InAnimation);

	void SetAlignmentInViewport(struct FVector2D Alignment);

	void SetAnchorsInViewport(struct FAnchors Anchors);

	void SetAnimationCurrentTime(const class UWidgetAnimation* InAnimation, float InTime);

	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	void SetDesiredSizeInViewport(struct FVector2D Size);

	void SetForegroundColor(struct FSlateColor InForegroundColor);

	void SetInputActionBlocking(bool bShouldBlock);

	void SetInputActionPriority(int32_t NewPriority);

	void SetNumLoopsToPlay(const class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);

	void SetOwningPlayer(class APlayerController* LocalPlayerController);

	void SetPadding(struct FMargin InPadding);

	void SetPlaybackSpeed(const class UWidgetAnimation* InAnimation, float PlaybackSpeed);

	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale);

	void StopAllAnimations();

	void StopAnimation(const class UWidgetAnimation* InAnimation);

	void StopAnimationsAndLatentActions();

	void StopListeningForAllInputActions();

	void StopListeningForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType);

	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);

	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);

	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate);

	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, struct FScriptDelegate Delegate);

	void UnregisterInputComponent();

#pragma endregion
};
};