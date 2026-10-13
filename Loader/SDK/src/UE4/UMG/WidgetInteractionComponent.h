#pragma once
#include "Structs.h"
#include "Engine/SceneComponent.h"
/////////////////////////////////////////////
// Class UMG.WidgetInteractionComponent
// Super: Class Engine.SceneComponent
// Size: 1008
// Size inherited: 512
/////////////////////////////////////////////
namespace UE4 {
class UWidgetInteractionComponent : public USceneComponent {
public:
#pragma region Members
	//TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>	OnHoveredWidgetChanged;		//Offset: 504	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature> M_GetOnHoveredWidgetChanged() const;
	TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>* M_PtrGetOnHoveredWidgetChanged();
	void M_SetOnHoveredWidgetChanged(const TAssetPtr<class FOnHoveredWidgetChanged__DelegateSignature>& value);

	//int32_t	VirtualUserIndex;		//Offset: 536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetVirtualUserIndex() const;
	int32_t* M_PtrGetVirtualUserIndex();
	void M_SetVirtualUserIndex(const int32_t& value);

	//int32_t	PointerIndex;		//Offset: 540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPointerIndex() const;
	int32_t* M_PtrGetPointerIndex();
	void M_SetPointerIndex(const int32_t& value);

	//TEnumAsByte<ECollisionChannel>	TraceChannel;		//Offset: 544	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel> M_GetTraceChannel() const;
	TEnumAsByte<ECollisionChannel>* M_PtrGetTraceChannel();
	void M_SetTraceChannel(const TEnumAsByte<ECollisionChannel>& value);

	//float	InteractionDistance;		//Offset: 548	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInteractionDistance() const;
	float* M_PtrGetInteractionDistance();
	void M_SetInteractionDistance(const float& value);

	//EWidgetInteractionSource	InteractionSource;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EWidgetInteractionSource M_GetInteractionSource() const;
	EWidgetInteractionSource* M_PtrGetInteractionSource();
	void M_SetInteractionSource(const EWidgetInteractionSource& value);

	//bool	bEnableHitTesting;		//Offset: 553	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbEnableHitTesting() const;
	bool* M_PtrGetbEnableHitTesting();
	void M_SetbEnableHitTesting(const bool& value);

	//bool	bShowDebug;		//Offset: 554	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbShowDebug() const;
	bool* M_PtrGetbShowDebug();
	void M_SetbShowDebug(const bool& value);

	//float	DebugSphereLineThickness;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDebugSphereLineThickness() const;
	float* M_PtrGetDebugSphereLineThickness();
	void M_SetDebugSphereLineThickness(const float& value);

	//float	DebugLineThickness;		//Offset: 560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDebugLineThickness() const;
	float* M_PtrGetDebugLineThickness();
	void M_SetDebugLineThickness(const float& value);

	//struct FLinearColor	DebugColor;		//Offset: 564	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetDebugColor() const;
	struct FLinearColor* M_PtrGetDebugColor();
	void M_SetDebugColor(const struct FLinearColor& value);

	//struct FHitResult	CustomHitResult;		//Offset: 704	Size: 136	Flags: Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	struct FHitResult M_GetCustomHitResult() const;
	struct FHitResult* M_PtrGetCustomHitResult();
	void M_SetCustomHitResult(const struct FHitResult& value);

	//struct FVector2D	LocalHitLocation;		//Offset: 840	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector2D M_GetLocalHitLocation() const;
	struct FVector2D* M_PtrGetLocalHitLocation();
	void M_SetLocalHitLocation(const struct FVector2D& value);

	//struct FVector2D	LastLocalHitLocation;		//Offset: 848	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector2D M_GetLastLocalHitLocation() const;
	struct FVector2D* M_PtrGetLastLocalHitLocation();
	void M_SetLastLocalHitLocation(const struct FVector2D& value);

	//class UWidgetComponent*	HoveredWidgetComponent;		//Offset: 856	Size: 8	Flags: ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UWidgetComponent* M_GetHoveredWidgetComponent() const;
	class UWidgetComponent** M_PtrGetHoveredWidgetComponent();
	void M_SetHoveredWidgetComponent(const class UWidgetComponent*& value);

	//struct FHitResult	LastHitResult;		//Offset: 864	Size: 136	Flags: Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	struct FHitResult M_GetLastHitResult() const;
	struct FHitResult* M_PtrGetLastHitResult();
	void M_SetLastHitResult(const struct FHitResult& value);

	//bool	bIsHoveredWidgetInteractable;		//Offset: 1000	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsHoveredWidgetInteractable() const;
	bool* M_PtrGetbIsHoveredWidgetInteractable();
	void M_SetbIsHoveredWidgetInteractable(const bool& value);

	//bool	bIsHoveredWidgetFocusable;		//Offset: 1001	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsHoveredWidgetFocusable() const;
	bool* M_PtrGetbIsHoveredWidgetFocusable();
	void M_SetbIsHoveredWidgetFocusable(const bool& value);

	//bool	bIsHoveredWidgetHitTestVisible;		//Offset: 1002	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsHoveredWidgetHitTestVisible() const;
	bool* M_PtrGetbIsHoveredWidgetHitTestVisible();
	void M_SetbIsHoveredWidgetHitTestVisible(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}

#pragma region Functions
	struct FVector2D Get2DHitLocation()/* const*/;

	class UWidgetComponent* GetHoveredWidgetComponent()/* const*/;

	struct FHitResult GetLastHitResult()/* const*/;

	bool IsOverFocusableWidget()/* const*/;

	bool IsOverHitTestVisibleWidget()/* const*/;

	bool IsOverInteractableWidget()/* const*/;

	bool PressAndReleaseKey(struct FKey Key);

	bool PressKey(struct FKey Key, bool bRepeat);

	void PressPointerKey(struct FKey Key);

	bool ReleaseKey(struct FKey Key);

	void ReleasePointerKey(struct FKey Key);

	void ScrollWheel(float ScrollDelta);

	bool SendKeyChar(struct FString Characters, bool bRepeat);

	void SetCustomHitResult(const struct FHitResult& HitResult);

	void SetFocus(class UWidget* FocusWidget);

#pragma endregion
};
};