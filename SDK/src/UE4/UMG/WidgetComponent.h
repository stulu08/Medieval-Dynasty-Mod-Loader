#pragma once
#include "Structs.h"
#include "Engine/MeshComponent.h"
/////////////////////////////////////////////
// Class UMG.WidgetComponent
// Super: Class Engine.MeshComponent
// Size: 1440
// Size inherited: 1152
/////////////////////////////////////////////
namespace UE4 {
class UWidgetComponent : public UMeshComponent {
public:
#pragma region Members
	//EWidgetSpace	Space;		//Offset: 1144	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EWidgetSpace M_GetSpace() const;
	EWidgetSpace* M_PtrGetSpace();
	void M_SetSpace(const EWidgetSpace& value);

	//EWidgetTimingPolicy	TimingPolicy;		//Offset: 1145	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EWidgetTimingPolicy M_GetTimingPolicy() const;
	EWidgetTimingPolicy* M_PtrGetTimingPolicy();
	void M_SetTimingPolicy(const EWidgetTimingPolicy& value);

	//class UUserWidget*	WidgetClass;		//Offset: 1152	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UUserWidget* M_GetWidgetClass() const;
	class UUserWidget** M_PtrGetWidgetClass();
	void M_SetWidgetClass(const class UUserWidget*& value);

	//struct FIntPoint	DrawSize;		//Offset: 1160	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FIntPoint M_GetDrawSize() const;
	struct FIntPoint* M_PtrGetDrawSize();
	void M_SetDrawSize(const struct FIntPoint& value);

	//bool	bManuallyRedraw;		//Offset: 1168	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbManuallyRedraw() const;
	bool* M_PtrGetbManuallyRedraw();
	void M_SetbManuallyRedraw(const bool& value);

	//bool	bRedrawRequested;		//Offset: 1169	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbRedrawRequested() const;
	bool* M_PtrGetbRedrawRequested();
	void M_SetbRedrawRequested(const bool& value);

	//float	RedrawTime;		//Offset: 1172	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetRedrawTime() const;
	float* M_PtrGetRedrawTime();
	void M_SetRedrawTime(const float& value);

	//struct FIntPoint	CurrentDrawSize;		//Offset: 1184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FIntPoint M_GetCurrentDrawSize() const;
	struct FIntPoint* M_PtrGetCurrentDrawSize();
	void M_SetCurrentDrawSize(const struct FIntPoint& value);

	//bool	bDrawAtDesiredSize;		//Offset: 1192	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbDrawAtDesiredSize() const;
	bool* M_PtrGetbDrawAtDesiredSize();
	void M_SetbDrawAtDesiredSize(const bool& value);

	//struct FVector2D	Pivot;		//Offset: 1196	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector2D M_GetPivot() const;
	struct FVector2D* M_PtrGetPivot();
	void M_SetPivot(const struct FVector2D& value);

	//bool	bReceiveHardwareInput;		//Offset: 1204	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbReceiveHardwareInput() const;
	bool* M_PtrGetbReceiveHardwareInput();
	void M_SetbReceiveHardwareInput(const bool& value);

	//bool	bWindowFocusable;		//Offset: 1205	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbWindowFocusable() const;
	bool* M_PtrGetbWindowFocusable();
	void M_SetbWindowFocusable(const bool& value);

	//EWindowVisibility	WindowVisibility;		//Offset: 1206	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EWindowVisibility M_GetWindowVisibility() const;
	EWindowVisibility* M_PtrGetWindowVisibility();
	void M_SetWindowVisibility(const EWindowVisibility& value);

	//bool	bApplyGammaCorrection;		//Offset: 1207	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbApplyGammaCorrection() const;
	bool* M_PtrGetbApplyGammaCorrection();
	void M_SetbApplyGammaCorrection(const bool& value);

	//class ULocalPlayer*	OwnerPlayer;		//Offset: 1208	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class ULocalPlayer* M_GetOwnerPlayer() const;
	class ULocalPlayer** M_PtrGetOwnerPlayer();
	void M_SetOwnerPlayer(const class ULocalPlayer*& value);

	//struct FLinearColor	BackgroundColor;		//Offset: 1216	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FLinearColor M_GetBackgroundColor() const;
	struct FLinearColor* M_PtrGetBackgroundColor();
	void M_SetBackgroundColor(const struct FLinearColor& value);

	//struct FLinearColor	TintColorAndOpacity;		//Offset: 1232	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FLinearColor M_GetTintColorAndOpacity() const;
	struct FLinearColor* M_PtrGetTintColorAndOpacity();
	void M_SetTintColorAndOpacity(const struct FLinearColor& value);

	//float	OpacityFromTexture;		//Offset: 1248	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetOpacityFromTexture() const;
	float* M_PtrGetOpacityFromTexture();
	void M_SetOpacityFromTexture(const float& value);

	//EWidgetBlendMode	BlendMode;		//Offset: 1252	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EWidgetBlendMode M_GetBlendMode() const;
	EWidgetBlendMode* M_PtrGetBlendMode();
	void M_SetBlendMode(const EWidgetBlendMode& value);

	//bool	bIsTwoSided;		//Offset: 1253	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsTwoSided() const;
	bool* M_PtrGetbIsTwoSided();
	void M_SetbIsTwoSided(const bool& value);

	//bool	TickWhenOffscreen;		//Offset: 1254	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetTickWhenOffscreen() const;
	bool* M_PtrGetTickWhenOffscreen();
	void M_SetTickWhenOffscreen(const bool& value);

	//class UBodySetup*	BodySetup;		//Offset: 1256	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UBodySetup* M_GetBodySetup() const;
	class UBodySetup** M_PtrGetBodySetup();
	void M_SetBodySetup(const class UBodySetup*& value);

	//class UMaterialInterface*	TranslucentMaterial;		//Offset: 1264	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetTranslucentMaterial() const;
	class UMaterialInterface** M_PtrGetTranslucentMaterial();
	void M_SetTranslucentMaterial(const class UMaterialInterface*& value);

	//class UMaterialInterface*	TranslucentMaterial_OneSided;		//Offset: 1272	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetTranslucentMaterial_OneSided() const;
	class UMaterialInterface** M_PtrGetTranslucentMaterial_OneSided();
	void M_SetTranslucentMaterial_OneSided(const class UMaterialInterface*& value);

	//class UMaterialInterface*	OpaqueMaterial;		//Offset: 1280	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetOpaqueMaterial() const;
	class UMaterialInterface** M_PtrGetOpaqueMaterial();
	void M_SetOpaqueMaterial(const class UMaterialInterface*& value);

	//class UMaterialInterface*	OpaqueMaterial_OneSided;		//Offset: 1288	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetOpaqueMaterial_OneSided() const;
	class UMaterialInterface** M_PtrGetOpaqueMaterial_OneSided();
	void M_SetOpaqueMaterial_OneSided(const class UMaterialInterface*& value);

	//class UMaterialInterface*	MaskedMaterial;		//Offset: 1296	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetMaskedMaterial() const;
	class UMaterialInterface** M_PtrGetMaskedMaterial();
	void M_SetMaskedMaterial(const class UMaterialInterface*& value);

	//class UMaterialInterface*	MaskedMaterial_OneSided;		//Offset: 1304	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetMaskedMaterial_OneSided() const;
	class UMaterialInterface** M_PtrGetMaskedMaterial_OneSided();
	void M_SetMaskedMaterial_OneSided(const class UMaterialInterface*& value);

	//class UTextureRenderTarget2D*	RenderTarget;		//Offset: 1312	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UTextureRenderTarget2D* M_GetRenderTarget() const;
	class UTextureRenderTarget2D** M_PtrGetRenderTarget();
	void M_SetRenderTarget(const class UTextureRenderTarget2D*& value);

	//class UMaterialInstanceDynamic*	MaterialInstance;		//Offset: 1320	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInstanceDynamic* M_GetMaterialInstance() const;
	class UMaterialInstanceDynamic** M_PtrGetMaterialInstance();
	void M_SetMaterialInstance(const class UMaterialInstanceDynamic*& value);

	//bool	bAddedToScreen;		//Offset: 1328	Size: 1	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbAddedToScreen() const;
	bool* M_PtrGetbAddedToScreen();
	void M_SetbAddedToScreen(const bool& value);

	//bool	bEditTimeUsable;		//Offset: 1329	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbEditTimeUsable() const;
	bool* M_PtrGetbEditTimeUsable();
	void M_SetbEditTimeUsable(const bool& value);

	//struct FName	SharedLayerName;		//Offset: 1332	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetSharedLayerName() const;
	struct FName* M_PtrGetSharedLayerName();
	void M_SetSharedLayerName(const struct FName& value);

	//int32_t	LayerZOrder;		//Offset: 1340	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetLayerZOrder() const;
	int32_t* M_PtrGetLayerZOrder();
	void M_SetLayerZOrder(const int32_t& value);

	//EWidgetGeometryMode	GeometryMode;		//Offset: 1344	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EWidgetGeometryMode M_GetGeometryMode() const;
	EWidgetGeometryMode* M_PtrGetGeometryMode();
	void M_SetGeometryMode(const EWidgetGeometryMode& value);

	//float	CylinderArcAngle;		//Offset: 1348	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetCylinderArcAngle() const;
	float* M_PtrGetCylinderArcAngle();
	void M_SetCylinderArcAngle(const float& value);

	//ETickMode	TickMode;		//Offset: 1352	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ETickMode M_GetTickMode() const;
	ETickMode* M_PtrGetTickMode();
	void M_SetTickMode(const ETickMode& value);

	//class UUserWidget*	Widget;		//Offset: 1392	Size: 8	Flags: ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UUserWidget* M_GetWidget() const;
	class UUserWidget** M_PtrGetWidget();
	void M_SetWidget(const class UUserWidget*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}

#pragma region Functions
	struct FVector2D GetCurrentDrawSize()/* const*/;

	float GetCylinderArcAngle()/* const*/;

	bool GetDrawAtDesiredSize()/* const*/;

	struct FVector2D GetDrawSize()/* const*/;

	EWidgetGeometryMode GetGeometryMode()/* const*/;

	bool GetManuallyRedraw()/* const*/;

	class UMaterialInstanceDynamic* GetMaterialInstance()/* const*/;

	class ULocalPlayer* GetOwnerPlayer()/* const*/;

	struct FVector2D GetPivot()/* const*/;

	float GetRedrawTime()/* const*/;

	class UTextureRenderTarget2D* GetRenderTarget()/* const*/;

	bool GetTickWhenOffscreen()/* const*/;

	bool GetTwoSided()/* const*/;

	class UUserWidget* GetUserWidgetObject()/* const*/;

	class UUserWidget* GetWidget()/* const*/;

	EWidgetSpace GetWidgetSpace()/* const*/;

	bool GetWindowFocusable()/* const*/;

	EWindowVisibility GetWindowVisiblility()/* const*/;

	bool IsWidgetVisible()/* const*/;

	void RequestRedraw();

	void RequestRenderUpdate();

	void SetBackgroundColor(struct FLinearColor NewBackgroundColor);

	void SetCylinderArcAngle(float InCylinderArcAngle);

	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);

	void SetDrawSize(struct FVector2D Size);

	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);

	void SetManuallyRedraw(bool bUseManualRedraw);

	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);

	void SetPivot(const struct FVector2D& InPivot);

	void SetRedrawTime(float InRedrawTime);

	void SetTickMode(ETickMode InTickMode);

	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);

	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity);

	void SetTwoSided(bool bWantTwoSided);

	void SetWidget(class UUserWidget* Widget);

	void SetWidgetSpace(EWidgetSpace NewSpace);

	void SetWindowFocusable(bool bInWindowFocusable);

	void SetWindowVisibility(EWindowVisibility InVisibility);

#pragma endregion
};
};