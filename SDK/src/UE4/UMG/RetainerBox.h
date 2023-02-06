#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.RetainerBox
// Super: Class UMG.ContentWidget
// Size: 336
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class URetainerBox : public UContentWidget {
public:
#pragma region Members
	//bool	bRetainRender;		//Offset: 288	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbRetainRender() const;
	bool* M_PtrGetbRetainRender();
	void M_SetbRetainRender(const bool& value);

	//bool	RenderOnInvalidation;		//Offset: 289	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRenderOnInvalidation() const;
	bool* M_PtrGetRenderOnInvalidation();
	void M_SetRenderOnInvalidation(const bool& value);

	//bool	RenderOnPhase;		//Offset: 290	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetRenderOnPhase() const;
	bool* M_PtrGetRenderOnPhase();
	void M_SetRenderOnPhase(const bool& value);

	//int32_t	Phase;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPhase() const;
	int32_t* M_PtrGetPhase();
	void M_SetPhase(const int32_t& value);

	//int32_t	PhaseCount;		//Offset: 296	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPhaseCount() const;
	int32_t* M_PtrGetPhaseCount();
	void M_SetPhaseCount(const int32_t& value);

	//class UMaterialInterface*	EffectMaterial;		//Offset: 304	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMaterialInterface* M_GetEffectMaterial() const;
	class UMaterialInterface** M_PtrGetEffectMaterial();
	void M_SetEffectMaterial(const class UMaterialInterface*& value);

	//struct FName	TextureParameter;		//Offset: 312	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetTextureParameter() const;
	struct FName* M_PtrGetTextureParameter();
	void M_SetTextureParameter(const struct FName& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}

#pragma region Functions
	class UMaterialInstanceDynamic* GetEffectMaterial()/* const*/;

	void RequestRender();

	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);

	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);

	void SetRetainRendering(bool bInRetainRendering);

	void SetTextureParameter(struct FName TextureParameter);

#pragma endregion
};
};