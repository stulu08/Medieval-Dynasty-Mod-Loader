#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Medieval_Dynasty/GI_MedievalDynastyBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C
// Super: Class Medieval_Dynasty.GI_MedievalDynastyBase
// Size: 1848
// Size inherited: 496
/////////////////////////////////////////////
namespace UE4 {
class UGI_MedievalDynasty_C : public UGI_MedievalDynastyBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 496	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//float	DefaultMasterVolumeValue;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultMasterVolumeValue() const;
	float* M_PtrGetDefaultMasterVolumeValue();
	void M_SetDefaultMasterVolumeValue(const float& value);

	//float	MasterVolumeValue;		//Offset: 508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMasterVolumeValue() const;
	float* M_PtrGetMasterVolumeValue();
	void M_SetMasterVolumeValue(const float& value);

	//float	DefaultSoundEffectVolumeValue;		//Offset: 512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultSoundEffectVolumeValue() const;
	float* M_PtrGetDefaultSoundEffectVolumeValue();
	void M_SetDefaultSoundEffectVolumeValue(const float& value);

	//float	SoundEffectVolumeValue;		//Offset: 516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSoundEffectVolumeValue() const;
	float* M_PtrGetSoundEffectVolumeValue();
	void M_SetSoundEffectVolumeValue(const float& value);

	//float	DefaultVoiceVolumeValue;		//Offset: 520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultVoiceVolumeValue() const;
	float* M_PtrGetDefaultVoiceVolumeValue();
	void M_SetDefaultVoiceVolumeValue(const float& value);

	//float	VoiceVolumeValue;		//Offset: 524	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetVoiceVolumeValue() const;
	float* M_PtrGetVoiceVolumeValue();
	void M_SetVoiceVolumeValue(const float& value);

	//float	DefaultMusicVolumeValue;		//Offset: 528	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultMusicVolumeValue() const;
	float* M_PtrGetDefaultMusicVolumeValue();
	void M_SetDefaultMusicVolumeValue(const float& value);

	//float	MusicVolumeValue;		//Offset: 532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMusicVolumeValue() const;
	float* M_PtrGetMusicVolumeValue();
	void M_SetMusicVolumeValue(const float& value);

	//int32_t	viewDistanceScale;		//Offset: 536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetviewDistanceScale() const;
	int32_t* M_PtrGetviewDistanceScale();
	void M_SetviewDistanceScale(const int32_t& value);

	//int32_t	PostProcessAAQuality;		//Offset: 540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessAAQuality() const;
	int32_t* M_PtrGetPostProcessAAQuality();
	void M_SetPostProcessAAQuality(const int32_t& value);

	//int32_t	PostProcessQuality;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessQuality() const;
	int32_t* M_PtrGetPostProcessQuality();
	void M_SetPostProcessQuality(const int32_t& value);

	//int32_t	ShadowQuality;		//Offset: 548	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadowQuality() const;
	int32_t* M_PtrGetShadowQuality();
	void M_SetShadowQuality(const int32_t& value);

	//int32_t	TextureQuality;		//Offset: 552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTextureQuality() const;
	int32_t* M_PtrGetTextureQuality();
	void M_SetTextureQuality(const int32_t& value);

	//int32_t	EffectsQuality;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetEffectsQuality() const;
	int32_t* M_PtrGetEffectsQuality();
	void M_SetEffectsQuality(const int32_t& value);

	//int32_t	FoliageQuality;		//Offset: 560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFoliageQuality() const;
	int32_t* M_PtrGetFoliageQuality();
	void M_SetFoliageQuality(const int32_t& value);

	//int32_t	Vsync;		//Offset: 564	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetVsync() const;
	int32_t* M_PtrGetVsync();
	void M_SetVsync(const int32_t& value);

	//int32_t	FrameRateLimit;		//Offset: 568	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFrameRateLimit() const;
	int32_t* M_PtrGetFrameRateLimit();
	void M_SetFrameRateLimit(const int32_t& value);

	//int32_t	FramerateLimitID;		//Offset: 572	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFramerateLimitID() const;
	int32_t* M_PtrGetFramerateLimitID();
	void M_SetFramerateLimitID(const int32_t& value);

	//TArray<int32_t>	ViewDistances;		//Offset: 576	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetViewDistances() const;
	TArray<int32_t>* M_PtrGetViewDistances();
	void M_SetViewDistances(const TArray<int32_t>& value);

	//int32_t	DefaultButtonViewDistanceID;		//Offset: 592	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonViewDistanceID() const;
	int32_t* M_PtrGetDefaultButtonViewDistanceID();
	void M_SetDefaultButtonViewDistanceID(const int32_t& value);

	//TArray<int32_t>	AntiAliasing;		//Offset: 600	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetAntiAliasing() const;
	TArray<int32_t>* M_PtrGetAntiAliasing();
	void M_SetAntiAliasing(const TArray<int32_t>& value);

	//int32_t	DefaultButtonAntiAliasingID;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAntiAliasingID() const;
	int32_t* M_PtrGetDefaultButtonAntiAliasingID();
	void M_SetDefaultButtonAntiAliasingID(const int32_t& value);

	//TArray<int32_t>	PostProcessings;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetPostProcessings() const;
	TArray<int32_t>* M_PtrGetPostProcessings();
	void M_SetPostProcessings(const TArray<int32_t>& value);

	//int32_t	DefaultButtonPostProcessingID;		//Offset: 640	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonPostProcessingID() const;
	int32_t* M_PtrGetDefaultButtonPostProcessingID();
	void M_SetDefaultButtonPostProcessingID(const int32_t& value);

	//TArray<int32_t>	Shadows;		//Offset: 648	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetShadows() const;
	TArray<int32_t>* M_PtrGetShadows();
	void M_SetShadows(const TArray<int32_t>& value);

	//int32_t	DefaultButtonShadowsID;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonShadowsID() const;
	int32_t* M_PtrGetDefaultButtonShadowsID();
	void M_SetDefaultButtonShadowsID(const int32_t& value);

	//TArray<int32_t>	Textures;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetTextures() const;
	TArray<int32_t>* M_PtrGetTextures();
	void M_SetTextures(const TArray<int32_t>& value);

	//int32_t	DefaultButtonTexturesID;		//Offset: 688	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonTexturesID() const;
	int32_t* M_PtrGetDefaultButtonTexturesID();
	void M_SetDefaultButtonTexturesID(const int32_t& value);

	//TArray<int32_t>	Effects;		//Offset: 696	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetEffects() const;
	TArray<int32_t>* M_PtrGetEffects();
	void M_SetEffects(const TArray<int32_t>& value);

	//int32_t	DefaultButtonEffectsID;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonEffectsID() const;
	int32_t* M_PtrGetDefaultButtonEffectsID();
	void M_SetDefaultButtonEffectsID(const int32_t& value);

	//TArray<int32_t>	Foliage;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetFoliage() const;
	TArray<int32_t>* M_PtrGetFoliage();
	void M_SetFoliage(const TArray<int32_t>& value);

	//int32_t	DefaultButtonFoliageID;		//Offset: 736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonFoliageID() const;
	int32_t* M_PtrGetDefaultButtonFoliageID();
	void M_SetDefaultButtonFoliageID(const int32_t& value);

	//int32_t	WindowMode;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWindowMode() const;
	int32_t* M_PtrGetWindowMode();
	void M_SetWindowMode(const int32_t& value);

	//TArray<int32_t>	WindowModes;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetWindowModes() const;
	TArray<int32_t>* M_PtrGetWindowModes();
	void M_SetWindowModes(const TArray<int32_t>& value);

	//struct FString	Resolution;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetResolution() const;
	struct FString* M_PtrGetResolution();
	void M_SetResolution(const struct FString& value);

	//TArray<struct FString>	Resolutions4_3;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions4_3() const;
	TArray<struct FString>* M_PtrGetResolutions4_3();
	void M_SetResolutions4_3(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions16_9;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions16_9() const;
	TArray<struct FString>* M_PtrGetResolutions16_9();
	void M_SetResolutions16_9(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions16_10;		//Offset: 808	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions16_10() const;
	TArray<struct FString>* M_PtrGetResolutions16_10();
	void M_SetResolutions16_10(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions21_9;		//Offset: 824	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions21_9() const;
	TArray<struct FString>* M_PtrGetResolutions21_9();
	void M_SetResolutions21_9(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions32_9;		//Offset: 840	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions32_9() const;
	TArray<struct FString>* M_PtrGetResolutions32_9();
	void M_SetResolutions32_9(const TArray<struct FString>& value);

	//int32_t	DefaultButtonResolutionID;		//Offset: 856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonResolutionID() const;
	int32_t* M_PtrGetDefaultButtonResolutionID();
	void M_SetDefaultButtonResolutionID(const int32_t& value);

	//struct FVector2D	AspectRatio;		//Offset: 860	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetAspectRatio() const;
	struct FVector2D* M_PtrGetAspectRatio();
	void M_SetAspectRatio(const struct FVector2D& value);

	//int32_t	DefaultButtonAspectRatioID;		//Offset: 868	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAspectRatioID() const;
	int32_t* M_PtrGetDefaultButtonAspectRatioID();
	void M_SetDefaultButtonAspectRatioID(const int32_t& value);

	//TArray<int32_t>	Vsyncs;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetVsyncs() const;
	TArray<int32_t>* M_PtrGetVsyncs();
	void M_SetVsyncs(const TArray<int32_t>& value);

	//int32_t	DefaultButtonVsyncID;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonVsyncID() const;
	int32_t* M_PtrGetDefaultButtonVsyncID();
	void M_SetDefaultButtonVsyncID(const int32_t& value);

	//int32_t	DefaultButtonWindowModeID;		//Offset: 892	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonWindowModeID() const;
	int32_t* M_PtrGetDefaultButtonWindowModeID();
	void M_SetDefaultButtonWindowModeID(const int32_t& value);

	//int32_t	DefaultFramerateID;		//Offset: 896	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultFramerateID() const;
	int32_t* M_PtrGetDefaultFramerateID();
	void M_SetDefaultFramerateID(const int32_t& value);

	//int32_t	ViewDistanceScaleID;		//Offset: 900	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetViewDistanceScaleID() const;
	int32_t* M_PtrGetViewDistanceScaleID();
	void M_SetViewDistanceScaleID(const int32_t& value);

	//int32_t	PostProcessAAQualityID;		//Offset: 904	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessAAQualityID() const;
	int32_t* M_PtrGetPostProcessAAQualityID();
	void M_SetPostProcessAAQualityID(const int32_t& value);

	//int32_t	PostProcessQualityID;		//Offset: 908	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessQualityID() const;
	int32_t* M_PtrGetPostProcessQualityID();
	void M_SetPostProcessQualityID(const int32_t& value);

	//int32_t	ShadowQualityID;		//Offset: 912	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadowQualityID() const;
	int32_t* M_PtrGetShadowQualityID();
	void M_SetShadowQualityID(const int32_t& value);

	//int32_t	TextureQualityID;		//Offset: 916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTextureQualityID() const;
	int32_t* M_PtrGetTextureQualityID();
	void M_SetTextureQualityID(const int32_t& value);

	//int32_t	EffectsQualityID;		//Offset: 920	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetEffectsQualityID() const;
	int32_t* M_PtrGetEffectsQualityID();
	void M_SetEffectsQualityID(const int32_t& value);

	//int32_t	FoliageQualityID;		//Offset: 924	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFoliageQualityID() const;
	int32_t* M_PtrGetFoliageQualityID();
	void M_SetFoliageQualityID(const int32_t& value);

	//int32_t	ResolutionID;		//Offset: 928	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetResolutionID() const;
	int32_t* M_PtrGetResolutionID();
	void M_SetResolutionID(const int32_t& value);

	//int32_t	AspectRatioID;		//Offset: 932	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAspectRatioID() const;
	int32_t* M_PtrGetAspectRatioID();
	void M_SetAspectRatioID(const int32_t& value);

	//int32_t	VsyncID;		//Offset: 936	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetVsyncID() const;
	int32_t* M_PtrGetVsyncID();
	void M_SetVsyncID(const int32_t& value);

	//int32_t	WindowModeID;		//Offset: 940	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWindowModeID() const;
	int32_t* M_PtrGetWindowModeID();
	void M_SetWindowModeID(const int32_t& value);

	//TArray<int32_t>	FramerateLimits;		//Offset: 944	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetFramerateLimits() const;
	TArray<int32_t>* M_PtrGetFramerateLimits();
	void M_SetFramerateLimits(const TArray<int32_t>& value);

	//float	TonemapperSharpenValue;		//Offset: 960	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTonemapperSharpenValue() const;
	float* M_PtrGetTonemapperSharpenValue();
	void M_SetTonemapperSharpenValue(const float& value);

	//float	DefaultTonemapperSharpenValue;		//Offset: 964	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultTonemapperSharpenValue() const;
	float* M_PtrGetDefaultTonemapperSharpenValue();
	void M_SetDefaultTonemapperSharpenValue(const float& value);

	//TArray<int32_t>	TempGraphicArray;		//Offset: 968	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetTempGraphicArray() const;
	TArray<int32_t>* M_PtrGetTempGraphicArray();
	void M_SetTempGraphicArray(const TArray<int32_t>& value);

	//bool	DFAO;		//Offset: 984	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDFAO() const;
	bool* M_PtrGetDFAO();
	void M_SetDFAO(const bool& value);

	//bool	DefaultDFAO;		//Offset: 985	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultDFAO() const;
	bool* M_PtrGetDefaultDFAO();
	void M_SetDefaultDFAO(const bool& value);

	//int32_t	DLSSQualityID;		//Offset: 988	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDLSSQualityID() const;
	int32_t* M_PtrGetDLSSQualityID();
	void M_SetDLSSQualityID(const int32_t& value);

	//int32_t	DLSSFallbackQualityID;		//Offset: 992	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDLSSFallbackQualityID() const;
	int32_t* M_PtrGetDLSSFallbackQualityID();
	void M_SetDLSSFallbackQualityID(const int32_t& value);

	//float	DLSSSharpness;		//Offset: 996	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDLSSSharpness() const;
	float* M_PtrGetDLSSSharpness();
	void M_SetDLSSSharpness(const float& value);

	//int32_t	DLSSFallbackAAMethod;		//Offset: 1000	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDLSSFallbackAAMethod() const;
	int32_t* M_PtrGetDLSSFallbackAAMethod();
	void M_SetDLSSFallbackAAMethod(const int32_t& value);

	//bool	DLSS;		//Offset: 1004	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDLSS() const;
	bool* M_PtrGetDLSS();
	void M_SetDLSS(const bool& value);

	//float	DefaultDLSSSharpness;		//Offset: 1008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultDLSSSharpness() const;
	float* M_PtrGetDefaultDLSSSharpness();
	void M_SetDefaultDLSSSharpness(const float& value);

	//int32_t	DefaultDLSSQualityID;		//Offset: 1012	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultDLSSQualityID() const;
	int32_t* M_PtrGetDefaultDLSSQualityID();
	void M_SetDefaultDLSSQualityID(const int32_t& value);

	//int32_t	DefaultDLSSFallbackQualityID;		//Offset: 1016	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultDLSSFallbackQualityID() const;
	int32_t* M_PtrGetDefaultDLSSFallbackQualityID();
	void M_SetDefaultDLSSFallbackQualityID(const int32_t& value);

	//int32_t	DefaultDLSSFallbackAAMethod;		//Offset: 1020	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultDLSSFallbackAAMethod() const;
	int32_t* M_PtrGetDefaultDLSSFallbackAAMethod();
	void M_SetDefaultDLSSFallbackAAMethod(const int32_t& value);

	//bool	DefaultDLSS;		//Offset: 1024	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultDLSS() const;
	bool* M_PtrGetDefaultDLSS();
	void M_SetDefaultDLSS(const bool& value);

	//bool	ContactShadows;		//Offset: 1025	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetContactShadows() const;
	bool* M_PtrGetContactShadows();
	void M_SetContactShadows(const bool& value);

	//bool	DefaultContactShadows;		//Offset: 1026	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultContactShadows() const;
	bool* M_PtrGetDefaultContactShadows();
	void M_SetDefaultContactShadows(const bool& value);

	//TArray<float>	TempSoundArray;		//Offset: 1032	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetTempSoundArray() const;
	TArray<float>* M_PtrGetTempSoundArray();
	void M_SetTempSoundArray(const TArray<float>& value);

	//float	DefaultUIVolumeValue;		//Offset: 1048	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultUIVolumeValue() const;
	float* M_PtrGetDefaultUIVolumeValue();
	void M_SetDefaultUIVolumeValue(const float& value);

	//float	UIVolumeValue;		//Offset: 1052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUIVolumeValue() const;
	float* M_PtrGetUIVolumeValue();
	void M_SetUIVolumeValue(const float& value);

	//float	DefaultEnvironmentVolumeValue;		//Offset: 1056	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultEnvironmentVolumeValue() const;
	float* M_PtrGetDefaultEnvironmentVolumeValue();
	void M_SetDefaultEnvironmentVolumeValue(const float& value);

	//float	EnvironmentVolumeValue;		//Offset: 1060	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEnvironmentVolumeValue() const;
	float* M_PtrGetEnvironmentVolumeValue();
	void M_SetEnvironmentVolumeValue(const float& value);

	//bool	SkipMainMenu;		//Offset: 1064	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipMainMenu() const;
	bool* M_PtrGetSkipMainMenu();
	void M_SetSkipMainMenu(const bool& value);

	//bool	SkipIntro;		//Offset: 1065	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipIntro() const;
	bool* M_PtrGetSkipIntro();
	void M_SetSkipIntro(const bool& value);

	//float	DefaultHorizontalSensitivity;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultHorizontalSensitivity() const;
	float* M_PtrGetDefaultHorizontalSensitivity();
	void M_SetDefaultHorizontalSensitivity(const float& value);

	//float	DefaultConsolesHorizontalSensitivity;		//Offset: 1072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultConsolesHorizontalSensitivity() const;
	float* M_PtrGetDefaultConsolesHorizontalSensitivity();
	void M_SetDefaultConsolesHorizontalSensitivity(const float& value);

	//float	HorizontalSensitivity;		//Offset: 1076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHorizontalSensitivity() const;
	float* M_PtrGetHorizontalSensitivity();
	void M_SetHorizontalSensitivity(const float& value);

	//float	DefaultVerticalSensitivity;		//Offset: 1080	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultVerticalSensitivity() const;
	float* M_PtrGetDefaultVerticalSensitivity();
	void M_SetDefaultVerticalSensitivity(const float& value);

	//float	DefaultConsolesVerticalSensitivity;		//Offset: 1084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultConsolesVerticalSensitivity() const;
	float* M_PtrGetDefaultConsolesVerticalSensitivity();
	void M_SetDefaultConsolesVerticalSensitivity(const float& value);

	//float	VerticalSensitivity;		//Offset: 1088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetVerticalSensitivity() const;
	float* M_PtrGetVerticalSensitivity();
	void M_SetVerticalSensitivity(const float& value);

	//bool	DefaultInvertYAxis;		//Offset: 1092	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultInvertYAxis() const;
	bool* M_PtrGetDefaultInvertYAxis();
	void M_SetDefaultInvertYAxis(const bool& value);

	//bool	InvertYAxis;		//Offset: 1093	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInvertYAxis() const;
	bool* M_PtrGetInvertYAxis();
	void M_SetInvertYAxis(const bool& value);

	//bool	DefaultInvertXAxis;		//Offset: 1094	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultInvertXAxis() const;
	bool* M_PtrGetDefaultInvertXAxis();
	void M_SetDefaultInvertXAxis(const bool& value);

	//TArray<float>	TempGameplayArray;		//Offset: 1096	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetTempGameplayArray() const;
	TArray<float>* M_PtrGetTempGameplayArray();
	void M_SetTempGameplayArray(const TArray<float>& value);

	//struct FString	SelectedLanguage;		//Offset: 1112	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSelectedLanguage() const;
	struct FString* M_PtrGetSelectedLanguage();
	void M_SetSelectedLanguage(const struct FString& value);

	//TMap<struct FString, struct FName>	AcceptableLanguages;		//Offset: 1128	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, struct FName> M_GetAcceptableLanguages() const;
	TMap<struct FString, struct FName>* M_PtrGetAcceptableLanguages();
	void M_SetAcceptableLanguages(const TMap<struct FString, struct FName>& value);

	//bool	WasLanguageFound;		//Offset: 1208	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasLanguageFound() const;
	bool* M_PtrGetWasLanguageFound();
	void M_SetWasLanguageFound(const bool& value);

	//int32_t	LanguageID;		//Offset: 1212	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLanguageID() const;
	int32_t* M_PtrGetLanguageID();
	void M_SetLanguageID(const int32_t& value);

	//float	FOV;		//Offset: 1216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFOV() const;
	float* M_PtrGetFOV();
	void M_SetFOV(const float& value);

	//float	DefaultFOV;		//Offset: 1220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultFOV() const;
	float* M_PtrGetDefaultFOV();
	void M_SetDefaultFOV(const float& value);

	//bool	DefaultHeadbobbing;		//Offset: 1224	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultHeadbobbing() const;
	bool* M_PtrGetDefaultHeadbobbing();
	void M_SetDefaultHeadbobbing(const bool& value);

	//bool	Headbobbing;		//Offset: 1225	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeadbobbing() const;
	bool* M_PtrGetHeadbobbing();
	void M_SetHeadbobbing(const bool& value);

	//bool	DefaultBlood;		//Offset: 1226	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultBlood() const;
	bool* M_PtrGetDefaultBlood();
	void M_SetDefaultBlood(const bool& value);

	//bool	Blood;		//Offset: 1227	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlood() const;
	bool* M_PtrGetBlood();
	void M_SetBlood(const bool& value);

	//bool	Cheats;		//Offset: 1228	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetCheats() const;
	bool* M_PtrGetCheats();
	void M_SetCheats(const bool& value);

	//bool	TestVersion;		//Offset: 1229	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetTestVersion() const;
	bool* M_PtrGetTestVersion();
	void M_SetTestVersion(const bool& value);

	//bool	InitialLaunch;		//Offset: 1230	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInitialLaunch() const;
	bool* M_PtrGetInitialLaunch();
	void M_SetInitialLaunch(const bool& value);

	//bool	InvertXAxis;		//Offset: 1231	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInvertXAxis() const;
	bool* M_PtrGetInvertXAxis();
	void M_SetInvertXAxis(const bool& value);

	//bool	DefaultSprintOnHold;		//Offset: 1232	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultSprintOnHold() const;
	bool* M_PtrGetDefaultSprintOnHold();
	void M_SetDefaultSprintOnHold(const bool& value);

	//bool	DefaultConsolesSprintOnHold;		//Offset: 1233	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultConsolesSprintOnHold() const;
	bool* M_PtrGetDefaultConsolesSprintOnHold();
	void M_SetDefaultConsolesSprintOnHold(const bool& value);

	//bool	SprintOnHold;		//Offset: 1234	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSprintOnHold() const;
	bool* M_PtrGetSprintOnHold();
	void M_SetSprintOnHold(const bool& value);

	//bool	DefaultCrouchOnHold;		//Offset: 1235	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCrouchOnHold() const;
	bool* M_PtrGetDefaultCrouchOnHold();
	void M_SetDefaultCrouchOnHold(const bool& value);

	//bool	DefaultConsolesCrouchOnHold;		//Offset: 1236	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultConsolesCrouchOnHold() const;
	bool* M_PtrGetDefaultConsolesCrouchOnHold();
	void M_SetDefaultConsolesCrouchOnHold(const bool& value);

	//bool	CrouchOnHold;		//Offset: 1237	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCrouchOnHold() const;
	bool* M_PtrGetCrouchOnHold();
	void M_SetCrouchOnHold(const bool& value);

	//bool	DefaultControllerVibrations;		//Offset: 1238	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultControllerVibrations() const;
	bool* M_PtrGetDefaultControllerVibrations();
	void M_SetDefaultControllerVibrations(const bool& value);

	//bool	ControllerVibrations;		//Offset: 1239	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetControllerVibrations() const;
	bool* M_PtrGetControllerVibrations();
	void M_SetControllerVibrations(const bool& value);

	//bool	DefaultControllerAimAssist;		//Offset: 1240	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultControllerAimAssist() const;
	bool* M_PtrGetDefaultControllerAimAssist();
	void M_SetDefaultControllerAimAssist(const bool& value);

	//bool	ControllerAimAssist;		//Offset: 1241	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetControllerAimAssist() const;
	bool* M_PtrGetControllerAimAssist();
	void M_SetControllerAimAssist(const bool& value);

	//TArray<struct FString>	QuickslotTypes;		//Offset: 1248	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetQuickslotTypes() const;
	TArray<struct FString>* M_PtrGetQuickslotTypes();
	void M_SetQuickslotTypes(const TArray<struct FString>& value);

	//int32_t	SelectedQuickslotsType;		//Offset: 1264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedQuickslotsType() const;
	int32_t* M_PtrGetSelectedQuickslotsType();
	void M_SetSelectedQuickslotsType(const int32_t& value);

	//TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>	OnGraphicsSettingsChanged;		//Offset: 1272	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> M_GetOnGraphicsSettingsChanged() const;
	TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>* M_PtrGetOnGraphicsSettingsChanged();
	void M_SetOnGraphicsSettingsChanged(const TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>& value);

	//class USAVE_Settings_C*	Settings;		//Offset: 1288	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Settings_C* M_GetSettings() const;
	class USAVE_Settings_C** M_PtrGetSettings();
	void M_SetSettings(const class USAVE_Settings_C*& value);

	//class USAVE_Data_C*	SaveGameDataReference;		//Offset: 1296	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Data_C* M_GetSaveGameDataReference() const;
	class USAVE_Data_C** M_PtrGetSaveGameDataReference();
	void M_SetSaveGameDataReference(const class USAVE_Data_C*& value);

	//TAssetPtr<class USAVE_Game_C>	SaveGameGameReference;		//Offset: 1304	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class USAVE_Game_C> M_GetSaveGameGameReference() const;
	TAssetPtr<class USAVE_Game_C>* M_PtrGetSaveGameGameReference();
	void M_SetSaveGameGameReference(const TAssetPtr<class USAVE_Game_C>& value);

	//int32_t	BackgroundIndex;		//Offset: 1344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBackgroundIndex() const;
	int32_t* M_PtrGetBackgroundIndex();
	void M_SetBackgroundIndex(const int32_t& value);

	//TArray<struct FIntPoint>	Resolutions4_3_Point;		//Offset: 1352	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions4_3_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions4_3_Point();
	void M_SetResolutions4_3_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions16_9_Point;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions16_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions16_9_Point();
	void M_SetResolutions16_9_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions16_10_Point;		//Offset: 1384	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions16_10_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions16_10_Point();
	void M_SetResolutions16_10_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions21_9_Point;		//Offset: 1400	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions21_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions21_9_Point();
	void M_SetResolutions21_9_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions32_9_Point;		//Offset: 1416	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions32_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions32_9_Point();
	void M_SetResolutions32_9_Point(const TArray<struct FIntPoint>& value);

	//struct FIntPoint	Resolution_Point;		//Offset: 1432	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FIntPoint M_GetResolution_Point() const;
	struct FIntPoint* M_PtrGetResolution_Point();
	void M_SetResolution_Point(const struct FIntPoint& value);

	//int32_t	ShadingQuality;		//Offset: 1440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadingQuality() const;
	int32_t* M_PtrGetShadingQuality();
	void M_SetShadingQuality(const int32_t& value);

	//TArray<int32_t>	ShadingQualities;		//Offset: 1448	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetShadingQualities() const;
	TArray<int32_t>* M_PtrGetShadingQualities();
	void M_SetShadingQualities(const TArray<int32_t>& value);

	//int32_t	ShadingQualityID;		//Offset: 1464	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadingQualityID() const;
	int32_t* M_PtrGetShadingQualityID();
	void M_SetShadingQualityID(const int32_t& value);

	//int32_t	DefaultShadingQualityID;		//Offset: 1468	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultShadingQualityID() const;
	int32_t* M_PtrGetDefaultShadingQualityID();
	void M_SetDefaultShadingQualityID(const int32_t& value);

	//TArray<struct FST_GraphicsSettingsPreset>	GraphicsSettingsPresets;		//Offset: 1472	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_GraphicsSettingsPreset> M_GetGraphicsSettingsPresets() const;
	TArray<struct FST_GraphicsSettingsPreset>* M_PtrGetGraphicsSettingsPresets();
	void M_SetGraphicsSettingsPresets(const TArray<struct FST_GraphicsSettingsPreset>& value);

	//bool	RazerChroma;		//Offset: 1488	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRazerChroma() const;
	bool* M_PtrGetRazerChroma();
	void M_SetRazerChroma(const bool& value);

	//bool	DefaultRazerChroma;		//Offset: 1489	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultRazerChroma() const;
	bool* M_PtrGetDefaultRazerChroma();
	void M_SetDefaultRazerChroma(const bool& value);

	//TMap<TEnumAsByte<E_TimeToSave>, struct FText>	TimeToSave;		//Offset: 1496	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_TimeToSave>, struct FText> M_GetTimeToSave() const;
	TMap<TEnumAsByte<E_TimeToSave>, struct FText>* M_PtrGetTimeToSave();
	void M_SetTimeToSave(const TMap<TEnumAsByte<E_TimeToSave>, struct FText>& value);

	//TEnumAsByte<E_TimeToSave>	SelectedTimeToSave;		//Offset: 1576	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TimeToSave> M_GetSelectedTimeToSave() const;
	TEnumAsByte<E_TimeToSave>* M_PtrGetSelectedTimeToSave();
	void M_SetSelectedTimeToSave(const TEnumAsByte<E_TimeToSave>& value);

	//bool	AutosaveOnQuestEnd;		//Offset: 1577	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAutosaveOnQuestEnd() const;
	bool* M_PtrGetAutosaveOnQuestEnd();
	void M_SetAutosaveOnQuestEnd(const bool& value);

	//bool	DefaultAutosaveOnQuestEnd;		//Offset: 1578	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultAutosaveOnQuestEnd() const;
	bool* M_PtrGetDefaultAutosaveOnQuestEnd();
	void M_SetDefaultAutosaveOnQuestEnd(const bool& value);

	//int32_t	GraphicsSettingsPresetID;		//Offset: 1580	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetGraphicsSettingsPresetID() const;
	int32_t* M_PtrGetGraphicsSettingsPresetID();
	void M_SetGraphicsSettingsPresetID(const int32_t& value);

	//int32_t	DLSSID;		//Offset: 1584	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDLSSID() const;
	int32_t* M_PtrGetDLSSID();
	void M_SetDLSSID(const int32_t& value);

	//bool	DisableAllScreenMessages;		//Offset: 1588	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDisableAllScreenMessages() const;
	bool* M_PtrGetDisableAllScreenMessages();
	void M_SetDisableAllScreenMessages(const bool& value);

	//int32_t	Brightness;		//Offset: 1592	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBrightness() const;
	int32_t* M_PtrGetBrightness();
	void M_SetBrightness(const int32_t& value);

	//int32_t	DefaultBrightness;		//Offset: 1596	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultBrightness() const;
	int32_t* M_PtrGetDefaultBrightness();
	void M_SetDefaultBrightness(const int32_t& value);

	//bool	DefaultCameraShakes;		//Offset: 1600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCameraShakes() const;
	bool* M_PtrGetDefaultCameraShakes();
	void M_SetDefaultCameraShakes(const bool& value);

	//bool	CameraShakes;		//Offset: 1601	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCameraShakes() const;
	bool* M_PtrGetCameraShakes();
	void M_SetCameraShakes(const bool& value);

	//bool	DefaultBreathing;		//Offset: 1602	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultBreathing() const;
	bool* M_PtrGetDefaultBreathing();
	void M_SetDefaultBreathing(const bool& value);

	//bool	Breathing;		//Offset: 1603	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBreathing() const;
	bool* M_PtrGetBreathing();
	void M_SetBreathing(const bool& value);

	//int32_t	SelectedMouseScrollFunction;		//Offset: 1604	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedMouseScrollFunction() const;
	int32_t* M_PtrGetSelectedMouseScrollFunction();
	void M_SetSelectedMouseScrollFunction(const int32_t& value);

	//bool	SSGI;		//Offset: 1608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSSGI() const;
	bool* M_PtrGetSSGI();
	void M_SetSSGI(const bool& value);

	//bool	DefaultSSGI;		//Offset: 1609	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultSSGI() const;
	bool* M_PtrGetDefaultSSGI();
	void M_SetDefaultSSGI(const bool& value);

	//TMap<TEnumAsByte<E_GamepadType>, struct FString>	GamepadType;		//Offset: 1616	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_GamepadType>, struct FString> M_GetGamepadType() const;
	TMap<TEnumAsByte<E_GamepadType>, struct FString>* M_PtrGetGamepadType();
	void M_SetGamepadType(const TMap<TEnumAsByte<E_GamepadType>, struct FString>& value);

	//TEnumAsByte<E_GamepadType>	SelectedGamepadType;		//Offset: 1696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_GamepadType> M_GetSelectedGamepadType() const;
	TEnumAsByte<E_GamepadType>* M_PtrGetSelectedGamepadType();
	void M_SetSelectedGamepadType(const TEnumAsByte<E_GamepadType>& value);

	//TEnumAsByte<E_GamepadControlType>	SelectedGamepadControlType;		//Offset: 1697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_GamepadControlType> M_GetSelectedGamepadControlType() const;
	TEnumAsByte<E_GamepadControlType>* M_PtrGetSelectedGamepadControlType();
	void M_SetSelectedGamepadControlType(const TEnumAsByte<E_GamepadControlType>& value);

	//TMap<TEnumAsByte<E_GamepadControlType>, struct FText>	GamepadControlType;		//Offset: 1704	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_GamepadControlType>, struct FText> M_GetGamepadControlType() const;
	TMap<TEnumAsByte<E_GamepadControlType>, struct FText>* M_PtrGetGamepadControlType();
	void M_SetGamepadControlType(const TMap<TEnumAsByte<E_GamepadControlType>, struct FText>& value);

	//TArray<class UMultiTaskBase*>	TasksArray;		//Offset: 1784	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UMultiTaskBase*> M_GetTasksArray() const;
	TArray<class UMultiTaskBase*>* M_PtrGetTasksArray();
	void M_SetTasksArray(const TArray<class UMultiTaskBase*>& value);

	//bool	ReturningFromDisconnect;		//Offset: 1800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetReturningFromDisconnect() const;
	bool* M_PtrGetReturningFromDisconnect();
	void M_SetReturningFromDisconnect(const bool& value);

	//bool	LoggedOutDuringLoading;		//Offset: 1801	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLoggedOutDuringLoading() const;
	bool* M_PtrGetLoggedOutDuringLoading();
	void M_SetLoggedOutDuringLoading(const bool& value);

	//int32_t	ConsoleFramerateMode;		//Offset: 1804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetConsoleFramerateMode() const;
	int32_t* M_PtrGetConsoleFramerateMode();
	void M_SetConsoleFramerateMode(const int32_t& value);

	//int32_t	ConsoleFramerateModeID;		//Offset: 1808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetConsoleFramerateModeID() const;
	int32_t* M_PtrGetConsoleFramerateModeID();
	void M_SetConsoleFramerateModeID(const int32_t& value);

	//TArray<int32_t>	ConsoleFramerateModels;		//Offset: 1816	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetConsoleFramerateModels() const;
	TArray<int32_t>* M_PtrGetConsoleFramerateModels();
	void M_SetConsoleFramerateModels(const TArray<int32_t>& value);

	//int32_t	DefaultConsoleFramerateModeID;		//Offset: 1832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultConsoleFramerateModeID() const;
	int32_t* M_PtrGetDefaultConsoleFramerateModeID();
	void M_SetDefaultConsoleFramerateModeID(const int32_t& value);

	//bool	DefaultPlayInBackground;		//Offset: 1836	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultPlayInBackground() const;
	bool* M_PtrGetDefaultPlayInBackground();
	void M_SetDefaultPlayInBackground(const bool& value);

	//bool	PlayInBackground;		//Offset: 1837	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayInBackground() const;
	bool* M_PtrGetPlayInBackground();
	void M_SetPlayInBackground(const bool& value);

	//EMD_SpecificPlatform	Platform;		//Offset: 1838	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	EMD_SpecificPlatform M_GetPlatform() const;
	EMD_SpecificPlatform* M_PtrGetPlatform();
	void M_SetPlatform(const EMD_SpecificPlatform& value);

	//int32_t	DefaultButtonResolutionID_SteamDeck;		//Offset: 1840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonResolutionID_SteamDeck() const;
	int32_t* M_PtrGetDefaultButtonResolutionID_SteamDeck();
	void M_SetDefaultButtonResolutionID_SteamDeck(const int32_t& value);

	//int32_t	DefaultButtonAspectRatioID_SteamDeck;		//Offset: 1844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAspectRatioID_SteamDeck() const;
	int32_t* M_PtrGetDefaultButtonAspectRatioID_SteamDeck();
	void M_SetDefaultButtonAspectRatioID_SteamDeck(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C");
		return ptr;
	}

#pragma region Functions
	void OnGraphicsSettingsChanged__DelegateSignature();

	void ExecuteUbergraph_GI_MedievalDynasty(int32_t EntryPoint);

	void CacheAchievements();

	void ReceiveShutdown();

	void SetGameSettings();

	void GetGameSettingsFromFile();

	void SetGraphicsSettings();

	void SetSoundSettings();

	void GetGraphicsSettingsFromFile();

	void GetSoundSettingsFromFile();

	void UpdateSoundsVolumes();

	void CreateDefaultSave();

	void GetSettingsFromFile();

	void GetDefaultSettings();

	void SetSettings();

	void ReceiveInit();

	void HandleUserSwapping(E_MessageReason messageReason);

	void OSSUninit();

	void OSSInit();

	void SetGameState(EMD_GameState GameState);

	void SetInitialLaunch(bool SetInitialLaunch);

	void AddTask(class UMultiTaskBase* Task);

	void SetSkipMainMenu(bool SkipMainMenu);

	void SetSkipIntro(bool SetSkipIntro);

	void OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A();

	void OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A();

	void OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController);

	void OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController);

	void OnSuccess_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController);

	void OnFailure_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController);

	void SetDefaultResolutionAndAspectRatioIndex();

	void RestoreDefaultKeybinds();

	void FixForMissingKeybinds();

	void InitSaveGameData();

	void UpdateGamepadKeybinds();

	void SetPerformanceMode(bool PerformanceModeActive);

	void GameSettings();

	void GetBackgroundIndex(int32_t* BackgroundIndex);

	void RandomizeBackgroundIndex(int32_t* BackgroundIndex);

	void GetTasks(TArray<class UMultiTaskBase*>* Tasks);

	void GetCurrentPlatform(EMD_SpecificPlatform* Platform);

	void IsConsole(bool* Value);

	void IsConsoleOldGen(bool* Value);

	void IsXbox(bool* Value);

	void IsPlaystation(bool* Value);

	void IsWindows(bool* Value);

	void GetCurrentViewDistanceScale(int32_t* Value);

	void GetCurrentGamepadType(TEnumAsByte<E_GamepadType>* Gamepad);

	void IsCheatVersion(bool* Value);

	void GetCurrent_UserID(int32_t* Value);

	void GetCurrentDFAO(bool* Value);

	void GetCurrentContactShadows(bool* Value);

	void GetCurrentShadowQuality(int32_t* Value);

	void IsTestVersion(bool* Value);

	void IsInitialLaunch(bool* Value);

	void GetPlatform_UserID(int32_t* Value);

	void GetGameState(EMD_GameState* GameState);

	void IsSteamDeck(bool* Value);

#pragma endregion
};
};