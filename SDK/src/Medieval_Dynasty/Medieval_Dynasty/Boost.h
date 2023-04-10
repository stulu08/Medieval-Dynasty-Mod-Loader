#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.Boost
// Super: Class Engine.ActorComponent
// Size: 216
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBoost : public UActorComponent {
public:
#pragma region Members
	//bool	isActivated;		//Offset: 180	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisActivated() const;
	bool* M_PtrGetisActivated();
	void M_SetisActivated(const bool& value);

	//bool	ignoreRenderVisibility;		//Offset: 181	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetignoreRenderVisibility() const;
	bool* M_PtrGetignoreRenderVisibility();
	void M_SetignoreRenderVisibility(const bool& value);

	//int32_t	optimizationStage;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetoptimizationStage() const;
	int32_t* M_PtrGetoptimizationStage();
	void M_SetoptimizationStage(const int32_t& value);

	//int32_t	activeStage;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetactiveStage() const;
	int32_t* M_PtrGetactiveStage();
	void M_SetactiveStage(const int32_t& value);

	//float	Distance;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetDistance() const;
	float* M_PtrGetDistance();
	void M_SetDistance(const float& value);

	//float	closeRadiusForDisplay;		//Offset: 196	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcloseRadiusForDisplay() const;
	float* M_PtrGetcloseRadiusForDisplay();
	void M_SetcloseRadiusForDisplay(const float& value);

	//float	mediumRadiusForDisplay;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmediumRadiusForDisplay() const;
	float* M_PtrGetmediumRadiusForDisplay();
	void M_SetmediumRadiusForDisplay(const float& value);

	//float	farRadiusForDisplay;		//Offset: 204	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfarRadiusForDisplay() const;
	float* M_PtrGetfarRadiusForDisplay();
	void M_SetfarRadiusForDisplay(const float& value);

	//float	activeRadius;		//Offset: 208	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetactiveRadius() const;
	float* M_PtrGetactiveRadius();
	void M_SetactiveRadius(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.Boost");
		return ptr;
	}

#pragma region Functions
	void ActivateStage0();

	void ActivateStage1();

	void ActivateStage2();

	void ActivateStage3();

	void ActivateStage4();

	void AfterActivation();

	void AfterDeactivation();

	void AfterInitialActivation();

	void AfterInitialDeactivation();

	void CalculateDistanceForDisplay();

	void DistanceCheckForDisplayNPC();

	int32_t GetCurrentViewDistanceScaleLevel();

	void InitialDistanceCheckForDisplayNPC();

#pragma endregion
};
};