#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/GI_MedievalDynastyBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C
// Super: Class Medieval_Dynasty.GI_MedievalDynastyBase
// Size: 2887
// Size inherited: 648
/////////////////////////////////////////////
namespace UE4 {
class UGI_MedievalDynasty_C : public UGI_MedievalDynastyBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 648	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//float	DefaultMasterVolumeValue;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultMasterVolumeValue() const;
	float* M_PtrGetDefaultMasterVolumeValue();
	void M_SetDefaultMasterVolumeValue(const float& value);

	//float	MasterVolumeValue;		//Offset: 660	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMasterVolumeValue() const;
	float* M_PtrGetMasterVolumeValue();
	void M_SetMasterVolumeValue(const float& value);

	//float	DefaultSoundEffectVolumeValue;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultSoundEffectVolumeValue() const;
	float* M_PtrGetDefaultSoundEffectVolumeValue();
	void M_SetDefaultSoundEffectVolumeValue(const float& value);

	//float	SoundEffectVolumeValue;		//Offset: 668	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSoundEffectVolumeValue() const;
	float* M_PtrGetSoundEffectVolumeValue();
	void M_SetSoundEffectVolumeValue(const float& value);

	//float	DefaultVoiceVolumeValue;		//Offset: 672	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultVoiceVolumeValue() const;
	float* M_PtrGetDefaultVoiceVolumeValue();
	void M_SetDefaultVoiceVolumeValue(const float& value);

	//float	VoiceVolumeValue;		//Offset: 676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetVoiceVolumeValue() const;
	float* M_PtrGetVoiceVolumeValue();
	void M_SetVoiceVolumeValue(const float& value);

	//float	DefaultMusicVolumeValue;		//Offset: 680	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultMusicVolumeValue() const;
	float* M_PtrGetDefaultMusicVolumeValue();
	void M_SetDefaultMusicVolumeValue(const float& value);

	//float	MusicVolumeValue;		//Offset: 684	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMusicVolumeValue() const;
	float* M_PtrGetMusicVolumeValue();
	void M_SetMusicVolumeValue(const float& value);

	//int32_t	viewDistanceScale;		//Offset: 688	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetviewDistanceScale() const;
	int32_t* M_PtrGetviewDistanceScale();
	void M_SetviewDistanceScale(const int32_t& value);

	//int32_t	AntiAliasingMethod;		//Offset: 692	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAntiAliasingMethod() const;
	int32_t* M_PtrGetAntiAliasingMethod();
	void M_SetAntiAliasingMethod(const int32_t& value);

	//int32_t	PostProcessQuality;		//Offset: 696	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessQuality() const;
	int32_t* M_PtrGetPostProcessQuality();
	void M_SetPostProcessQuality(const int32_t& value);

	//int32_t	ShadowQuality;		//Offset: 700	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadowQuality() const;
	int32_t* M_PtrGetShadowQuality();
	void M_SetShadowQuality(const int32_t& value);

	//int32_t	TextureQuality;		//Offset: 704	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTextureQuality() const;
	int32_t* M_PtrGetTextureQuality();
	void M_SetTextureQuality(const int32_t& value);

	//int32_t	EffectsQuality;		//Offset: 708	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetEffectsQuality() const;
	int32_t* M_PtrGetEffectsQuality();
	void M_SetEffectsQuality(const int32_t& value);

	//int32_t	FoliageQuality;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFoliageQuality() const;
	int32_t* M_PtrGetFoliageQuality();
	void M_SetFoliageQuality(const int32_t& value);

	//int32_t	Vsync;		//Offset: 716	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetVsync() const;
	int32_t* M_PtrGetVsync();
	void M_SetVsync(const int32_t& value);

	//int32_t	FrameRateLimit;		//Offset: 720	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFrameRateLimit() const;
	int32_t* M_PtrGetFrameRateLimit();
	void M_SetFrameRateLimit(const int32_t& value);

	//TArray<int32_t>	FramerateLimits;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetFramerateLimits() const;
	TArray<int32_t>* M_PtrGetFramerateLimits();
	void M_SetFramerateLimits(const TArray<int32_t>& value);

	//int32_t	DefaultFramerateID;		//Offset: 744	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultFramerateID() const;
	int32_t* M_PtrGetDefaultFramerateID();
	void M_SetDefaultFramerateID(const int32_t& value);

	//int32_t	FramerateLimitID;		//Offset: 748	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFramerateLimitID() const;
	int32_t* M_PtrGetFramerateLimitID();
	void M_SetFramerateLimitID(const int32_t& value);

	//TArray<int32_t>	ViewDistances;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetViewDistances() const;
	TArray<int32_t>* M_PtrGetViewDistances();
	void M_SetViewDistances(const TArray<int32_t>& value);

	//int32_t	DefaultButtonViewDistanceID;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonViewDistanceID() const;
	int32_t* M_PtrGetDefaultButtonViewDistanceID();
	void M_SetDefaultButtonViewDistanceID(const int32_t& value);

	//TArray<int32_t>	AntiAliasing;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetAntiAliasing() const;
	TArray<int32_t>* M_PtrGetAntiAliasing();
	void M_SetAntiAliasing(const TArray<int32_t>& value);

	//int32_t	DefaultButtonAntiAliasingID;		//Offset: 792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAntiAliasingID() const;
	int32_t* M_PtrGetDefaultButtonAntiAliasingID();
	void M_SetDefaultButtonAntiAliasingID(const int32_t& value);

	//TArray<int32_t>	PostProcessings;		//Offset: 800	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetPostProcessings() const;
	TArray<int32_t>* M_PtrGetPostProcessings();
	void M_SetPostProcessings(const TArray<int32_t>& value);

	//int32_t	DefaultButtonPostProcessingID;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonPostProcessingID() const;
	int32_t* M_PtrGetDefaultButtonPostProcessingID();
	void M_SetDefaultButtonPostProcessingID(const int32_t& value);

	//TArray<int32_t>	Shadows;		//Offset: 824	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetShadows() const;
	TArray<int32_t>* M_PtrGetShadows();
	void M_SetShadows(const TArray<int32_t>& value);

	//int32_t	DefaultButtonShadowsID;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonShadowsID() const;
	int32_t* M_PtrGetDefaultButtonShadowsID();
	void M_SetDefaultButtonShadowsID(const int32_t& value);

	//TArray<int32_t>	Textures;		//Offset: 848	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetTextures() const;
	TArray<int32_t>* M_PtrGetTextures();
	void M_SetTextures(const TArray<int32_t>& value);

	//int32_t	DefaultButtonTexturesID;		//Offset: 864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonTexturesID() const;
	int32_t* M_PtrGetDefaultButtonTexturesID();
	void M_SetDefaultButtonTexturesID(const int32_t& value);

	//TArray<int32_t>	Effects;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetEffects() const;
	TArray<int32_t>* M_PtrGetEffects();
	void M_SetEffects(const TArray<int32_t>& value);

	//int32_t	DefaultButtonEffectsID;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonEffectsID() const;
	int32_t* M_PtrGetDefaultButtonEffectsID();
	void M_SetDefaultButtonEffectsID(const int32_t& value);

	//TArray<int32_t>	Foliage;		//Offset: 896	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetFoliage() const;
	TArray<int32_t>* M_PtrGetFoliage();
	void M_SetFoliage(const TArray<int32_t>& value);

	//int32_t	DefaultButtonFoliageID;		//Offset: 912	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonFoliageID() const;
	int32_t* M_PtrGetDefaultButtonFoliageID();
	void M_SetDefaultButtonFoliageID(const int32_t& value);

	//int32_t	WindowMode;		//Offset: 916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWindowMode() const;
	int32_t* M_PtrGetWindowMode();
	void M_SetWindowMode(const int32_t& value);

	//TArray<int32_t>	WindowModes;		//Offset: 920	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetWindowModes() const;
	TArray<int32_t>* M_PtrGetWindowModes();
	void M_SetWindowModes(const TArray<int32_t>& value);

	//struct FString	Resolution;		//Offset: 936	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetResolution() const;
	struct FString* M_PtrGetResolution();
	void M_SetResolution(const struct FString& value);

	//TArray<struct FString>	Resolutions4_3;		//Offset: 952	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions4_3() const;
	TArray<struct FString>* M_PtrGetResolutions4_3();
	void M_SetResolutions4_3(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions16_9;		//Offset: 968	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions16_9() const;
	TArray<struct FString>* M_PtrGetResolutions16_9();
	void M_SetResolutions16_9(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions16_10;		//Offset: 984	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions16_10() const;
	TArray<struct FString>* M_PtrGetResolutions16_10();
	void M_SetResolutions16_10(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions21_9;		//Offset: 1000	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions21_9() const;
	TArray<struct FString>* M_PtrGetResolutions21_9();
	void M_SetResolutions21_9(const TArray<struct FString>& value);

	//TArray<struct FString>	Resolutions32_9;		//Offset: 1016	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetResolutions32_9() const;
	TArray<struct FString>* M_PtrGetResolutions32_9();
	void M_SetResolutions32_9(const TArray<struct FString>& value);

	//int32_t	DefaultButtonResolutionID;		//Offset: 1032	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonResolutionID() const;
	int32_t* M_PtrGetDefaultButtonResolutionID();
	void M_SetDefaultButtonResolutionID(const int32_t& value);

	//struct FVector2D	AspectRatio;		//Offset: 1036	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetAspectRatio() const;
	struct FVector2D* M_PtrGetAspectRatio();
	void M_SetAspectRatio(const struct FVector2D& value);

	//int32_t	DefaultButtonAspectRatioID;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAspectRatioID() const;
	int32_t* M_PtrGetDefaultButtonAspectRatioID();
	void M_SetDefaultButtonAspectRatioID(const int32_t& value);

	//TArray<int32_t>	Vsyncs;		//Offset: 1048	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetVsyncs() const;
	TArray<int32_t>* M_PtrGetVsyncs();
	void M_SetVsyncs(const TArray<int32_t>& value);

	//int32_t	DefaultButtonVsyncID;		//Offset: 1064	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonVsyncID() const;
	int32_t* M_PtrGetDefaultButtonVsyncID();
	void M_SetDefaultButtonVsyncID(const int32_t& value);

	//int32_t	DefaultButtonWindowModeID;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonWindowModeID() const;
	int32_t* M_PtrGetDefaultButtonWindowModeID();
	void M_SetDefaultButtonWindowModeID(const int32_t& value);

	//int32_t	ViewDistanceScaleID;		//Offset: 1072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetViewDistanceScaleID() const;
	int32_t* M_PtrGetViewDistanceScaleID();
	void M_SetViewDistanceScaleID(const int32_t& value);

	//int32_t	AntiAliasingMethodID;		//Offset: 1076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAntiAliasingMethodID() const;
	int32_t* M_PtrGetAntiAliasingMethodID();
	void M_SetAntiAliasingMethodID(const int32_t& value);

	//int32_t	PostProcessQualityID;		//Offset: 1080	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPostProcessQualityID() const;
	int32_t* M_PtrGetPostProcessQualityID();
	void M_SetPostProcessQualityID(const int32_t& value);

	//int32_t	ShadowQualityID;		//Offset: 1084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadowQualityID() const;
	int32_t* M_PtrGetShadowQualityID();
	void M_SetShadowQualityID(const int32_t& value);

	//int32_t	TextureQualityID;		//Offset: 1088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTextureQualityID() const;
	int32_t* M_PtrGetTextureQualityID();
	void M_SetTextureQualityID(const int32_t& value);

	//int32_t	EffectsQualityID;		//Offset: 1092	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetEffectsQualityID() const;
	int32_t* M_PtrGetEffectsQualityID();
	void M_SetEffectsQualityID(const int32_t& value);

	//int32_t	FoliageQualityID;		//Offset: 1096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFoliageQualityID() const;
	int32_t* M_PtrGetFoliageQualityID();
	void M_SetFoliageQualityID(const int32_t& value);

	//int32_t	ResolutionID;		//Offset: 1100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetResolutionID() const;
	int32_t* M_PtrGetResolutionID();
	void M_SetResolutionID(const int32_t& value);

	//int32_t	AspectRatioID;		//Offset: 1104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAspectRatioID() const;
	int32_t* M_PtrGetAspectRatioID();
	void M_SetAspectRatioID(const int32_t& value);

	//int32_t	VsyncID;		//Offset: 1108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetVsyncID() const;
	int32_t* M_PtrGetVsyncID();
	void M_SetVsyncID(const int32_t& value);

	//int32_t	WindowModeID;		//Offset: 1112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWindowModeID() const;
	int32_t* M_PtrGetWindowModeID();
	void M_SetWindowModeID(const int32_t& value);

	//TArray<int32_t>	TempGraphicArray;		//Offset: 1120	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetTempGraphicArray() const;
	TArray<int32_t>* M_PtrGetTempGraphicArray();
	void M_SetTempGraphicArray(const TArray<int32_t>& value);

	//bool	DFAO;		//Offset: 1136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDFAO() const;
	bool* M_PtrGetDFAO();
	void M_SetDFAO(const bool& value);

	//bool	DefaultDFAO;		//Offset: 1137	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultDFAO() const;
	bool* M_PtrGetDefaultDFAO();
	void M_SetDefaultDFAO(const bool& value);

	//TArray<float>	TempSoundArray;		//Offset: 1144	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetTempSoundArray() const;
	TArray<float>* M_PtrGetTempSoundArray();
	void M_SetTempSoundArray(const TArray<float>& value);

	//float	DefaultUIVolumeValue;		//Offset: 1160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultUIVolumeValue() const;
	float* M_PtrGetDefaultUIVolumeValue();
	void M_SetDefaultUIVolumeValue(const float& value);

	//float	UIVolumeValue;		//Offset: 1164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUIVolumeValue() const;
	float* M_PtrGetUIVolumeValue();
	void M_SetUIVolumeValue(const float& value);

	//float	DefaultEnvironmentVolumeValue;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultEnvironmentVolumeValue() const;
	float* M_PtrGetDefaultEnvironmentVolumeValue();
	void M_SetDefaultEnvironmentVolumeValue(const float& value);

	//float	EnvironmentVolumeValue;		//Offset: 1172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEnvironmentVolumeValue() const;
	float* M_PtrGetEnvironmentVolumeValue();
	void M_SetEnvironmentVolumeValue(const float& value);

	//bool	SkipMainMenu;		//Offset: 1176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipMainMenu() const;
	bool* M_PtrGetSkipMainMenu();
	void M_SetSkipMainMenu(const bool& value);

	//bool	SkipIntro;		//Offset: 1177	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipIntro() const;
	bool* M_PtrGetSkipIntro();
	void M_SetSkipIntro(const bool& value);

	//float	DefaultHorizontalSensitivity;		//Offset: 1180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultHorizontalSensitivity() const;
	float* M_PtrGetDefaultHorizontalSensitivity();
	void M_SetDefaultHorizontalSensitivity(const float& value);

	//float	DefaultConsolesHorizontalSensitivity;		//Offset: 1184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultConsolesHorizontalSensitivity() const;
	float* M_PtrGetDefaultConsolesHorizontalSensitivity();
	void M_SetDefaultConsolesHorizontalSensitivity(const float& value);

	//float	HorizontalSensitivity;		//Offset: 1188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHorizontalSensitivity() const;
	float* M_PtrGetHorizontalSensitivity();
	void M_SetHorizontalSensitivity(const float& value);

	//float	DefaultVerticalSensitivity;		//Offset: 1192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultVerticalSensitivity() const;
	float* M_PtrGetDefaultVerticalSensitivity();
	void M_SetDefaultVerticalSensitivity(const float& value);

	//float	DefaultConsolesVerticalSensitivity;		//Offset: 1196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultConsolesVerticalSensitivity() const;
	float* M_PtrGetDefaultConsolesVerticalSensitivity();
	void M_SetDefaultConsolesVerticalSensitivity(const float& value);

	//float	VerticalSensitivity;		//Offset: 1200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetVerticalSensitivity() const;
	float* M_PtrGetVerticalSensitivity();
	void M_SetVerticalSensitivity(const float& value);

	//bool	DefaultInvertYAxis;		//Offset: 1204	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultInvertYAxis() const;
	bool* M_PtrGetDefaultInvertYAxis();
	void M_SetDefaultInvertYAxis(const bool& value);

	//bool	InvertYAxis;		//Offset: 1205	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInvertYAxis() const;
	bool* M_PtrGetInvertYAxis();
	void M_SetInvertYAxis(const bool& value);

	//bool	DefaultInvertXAxis;		//Offset: 1206	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultInvertXAxis() const;
	bool* M_PtrGetDefaultInvertXAxis();
	void M_SetDefaultInvertXAxis(const bool& value);

	//TArray<float>	TempGameplayArray;		//Offset: 1208	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetTempGameplayArray() const;
	TArray<float>* M_PtrGetTempGameplayArray();
	void M_SetTempGameplayArray(const TArray<float>& value);

	//struct FString	SelectedLanguage;		//Offset: 1224	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSelectedLanguage() const;
	struct FString* M_PtrGetSelectedLanguage();
	void M_SetSelectedLanguage(const struct FString& value);

	//TMap<struct FString, struct FName>	AcceptableLanguages;		//Offset: 1240	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, struct FName> M_GetAcceptableLanguages() const;
	TMap<struct FString, struct FName>* M_PtrGetAcceptableLanguages();
	void M_SetAcceptableLanguages(const TMap<struct FString, struct FName>& value);

	//bool	WasLanguageFound;		//Offset: 1320	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasLanguageFound() const;
	bool* M_PtrGetWasLanguageFound();
	void M_SetWasLanguageFound(const bool& value);

	//int32_t	LanguageID;		//Offset: 1324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLanguageID() const;
	int32_t* M_PtrGetLanguageID();
	void M_SetLanguageID(const int32_t& value);

	//float	FOV;		//Offset: 1328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFOV() const;
	float* M_PtrGetFOV();
	void M_SetFOV(const float& value);

	//float	DefaultFOV;		//Offset: 1332	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultFOV() const;
	float* M_PtrGetDefaultFOV();
	void M_SetDefaultFOV(const float& value);

	//bool	DefaultHeadbobbing;		//Offset: 1336	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultHeadbobbing() const;
	bool* M_PtrGetDefaultHeadbobbing();
	void M_SetDefaultHeadbobbing(const bool& value);

	//bool	Headbobbing;		//Offset: 1337	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeadbobbing() const;
	bool* M_PtrGetHeadbobbing();
	void M_SetHeadbobbing(const bool& value);

	//bool	DefaultBlood;		//Offset: 1338	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultBlood() const;
	bool* M_PtrGetDefaultBlood();
	void M_SetDefaultBlood(const bool& value);

	//bool	Blood;		//Offset: 1339	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlood() const;
	bool* M_PtrGetBlood();
	void M_SetBlood(const bool& value);

	//bool	Cheats;		//Offset: 1340	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetCheats() const;
	bool* M_PtrGetCheats();
	void M_SetCheats(const bool& value);

	//bool	TestVersion;		//Offset: 1341	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetTestVersion() const;
	bool* M_PtrGetTestVersion();
	void M_SetTestVersion(const bool& value);

	//bool	MultiplayerBeta;		//Offset: 1342	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetMultiplayerBeta() const;
	bool* M_PtrGetMultiplayerBeta();
	void M_SetMultiplayerBeta(const bool& value);

	//bool	InitialLaunch;		//Offset: 1343	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInitialLaunch() const;
	bool* M_PtrGetInitialLaunch();
	void M_SetInitialLaunch(const bool& value);

	//bool	DisableAllScreenMessages;		//Offset: 1344	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDisableAllScreenMessages() const;
	bool* M_PtrGetDisableAllScreenMessages();
	void M_SetDisableAllScreenMessages(const bool& value);

	//bool	InvertXAxis;		//Offset: 1345	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInvertXAxis() const;
	bool* M_PtrGetInvertXAxis();
	void M_SetInvertXAxis(const bool& value);

	//bool	DefaultSprintOnHold;		//Offset: 1346	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultSprintOnHold() const;
	bool* M_PtrGetDefaultSprintOnHold();
	void M_SetDefaultSprintOnHold(const bool& value);

	//bool	DefaultConsolesSprintOnHold;		//Offset: 1347	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDefaultConsolesSprintOnHold() const;
	bool* M_PtrGetDefaultConsolesSprintOnHold();
	void M_SetDefaultConsolesSprintOnHold(const bool& value);

	//bool	SprintOnHold;		//Offset: 1348	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSprintOnHold() const;
	bool* M_PtrGetSprintOnHold();
	void M_SetSprintOnHold(const bool& value);

	//bool	DefaultCrouchOnHold;		//Offset: 1349	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCrouchOnHold() const;
	bool* M_PtrGetDefaultCrouchOnHold();
	void M_SetDefaultCrouchOnHold(const bool& value);

	//bool	DefaultConsolesCrouchOnHold;		//Offset: 1350	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultConsolesCrouchOnHold() const;
	bool* M_PtrGetDefaultConsolesCrouchOnHold();
	void M_SetDefaultConsolesCrouchOnHold(const bool& value);

	//bool	CrouchOnHold;		//Offset: 1351	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCrouchOnHold() const;
	bool* M_PtrGetCrouchOnHold();
	void M_SetCrouchOnHold(const bool& value);

	//float	DefaultControllerVibrationsIntensity;		//Offset: 1352	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultControllerVibrationsIntensity() const;
	float* M_PtrGetDefaultControllerVibrationsIntensity();
	void M_SetDefaultControllerVibrationsIntensity(const float& value);

	//float	ControllerVibrationsIntensity;		//Offset: 1356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetControllerVibrationsIntensity() const;
	float* M_PtrGetControllerVibrationsIntensity();
	void M_SetControllerVibrationsIntensity(const float& value);

	//bool	DefaultControllerAimAssist;		//Offset: 1360	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultControllerAimAssist() const;
	bool* M_PtrGetDefaultControllerAimAssist();
	void M_SetDefaultControllerAimAssist(const bool& value);

	//bool	ControllerAimAssist;		//Offset: 1361	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetControllerAimAssist() const;
	bool* M_PtrGetControllerAimAssist();
	void M_SetControllerAimAssist(const bool& value);

	//TArray<struct FString>	QuickslotTypes;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetQuickslotTypes() const;
	TArray<struct FString>* M_PtrGetQuickslotTypes();
	void M_SetQuickslotTypes(const TArray<struct FString>& value);

	//int32_t	SelectedQuickslotsType;		//Offset: 1384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedQuickslotsType() const;
	int32_t* M_PtrGetSelectedQuickslotsType();
	void M_SetSelectedQuickslotsType(const int32_t& value);

	//TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>	OnGraphicsSettingsChanged;		//Offset: 1392	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> M_GetOnGraphicsSettingsChanged() const;
	TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>* M_PtrGetOnGraphicsSettingsChanged();
	void M_SetOnGraphicsSettingsChanged(const TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>& value);

	//class USAVE_Settings_C*	Settings;		//Offset: 1408	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Settings_C* M_GetSettings() const;
	class USAVE_Settings_C** M_PtrGetSettings();
	void M_SetSettings(const class USAVE_Settings_C*& value);

	//class USAVE_Data_C*	SaveGameDataReference;		//Offset: 1416	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Data_C* M_GetSaveGameDataReference() const;
	class USAVE_Data_C** M_PtrGetSaveGameDataReference();
	void M_SetSaveGameDataReference(const class USAVE_Data_C*& value);

	//TAssetPtr<class USAVE_Game_C>	SaveGameGameReference;		//Offset: 1424	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class USAVE_Game_C> M_GetSaveGameGameReference() const;
	TAssetPtr<class USAVE_Game_C>* M_PtrGetSaveGameGameReference();
	void M_SetSaveGameGameReference(const TAssetPtr<class USAVE_Game_C>& value);

	//int32_t	BackgroundIndex;		//Offset: 1464	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBackgroundIndex() const;
	int32_t* M_PtrGetBackgroundIndex();
	void M_SetBackgroundIndex(const int32_t& value);

	//TArray<struct FIntPoint>	Resolutions4_3_Point;		//Offset: 1472	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions4_3_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions4_3_Point();
	void M_SetResolutions4_3_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions16_9_Point;		//Offset: 1488	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions16_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions16_9_Point();
	void M_SetResolutions16_9_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions16_10_Point;		//Offset: 1504	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions16_10_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions16_10_Point();
	void M_SetResolutions16_10_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions21_9_Point;		//Offset: 1520	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions21_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions21_9_Point();
	void M_SetResolutions21_9_Point(const TArray<struct FIntPoint>& value);

	//TArray<struct FIntPoint>	Resolutions32_9_Point;		//Offset: 1536	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FIntPoint> M_GetResolutions32_9_Point() const;
	TArray<struct FIntPoint>* M_PtrGetResolutions32_9_Point();
	void M_SetResolutions32_9_Point(const TArray<struct FIntPoint>& value);

	//struct FIntPoint	Resolution_Point;		//Offset: 1552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FIntPoint M_GetResolution_Point() const;
	struct FIntPoint* M_PtrGetResolution_Point();
	void M_SetResolution_Point(const struct FIntPoint& value);

	//int32_t	ShadingQuality;		//Offset: 1560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadingQuality() const;
	int32_t* M_PtrGetShadingQuality();
	void M_SetShadingQuality(const int32_t& value);

	//TArray<int32_t>	ShadingQualities;		//Offset: 1568	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetShadingQualities() const;
	TArray<int32_t>* M_PtrGetShadingQualities();
	void M_SetShadingQualities(const TArray<int32_t>& value);

	//int32_t	DefaultShadingQualityID;		//Offset: 1584	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultShadingQualityID() const;
	int32_t* M_PtrGetDefaultShadingQualityID();
	void M_SetDefaultShadingQualityID(const int32_t& value);

	//int32_t	ShadingQualityID;		//Offset: 1588	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetShadingQualityID() const;
	int32_t* M_PtrGetShadingQualityID();
	void M_SetShadingQualityID(const int32_t& value);

	//TArray<struct FST_GraphicsSettingsPreset>	GraphicsSettingsPresets;		//Offset: 1592	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_GraphicsSettingsPreset> M_GetGraphicsSettingsPresets() const;
	TArray<struct FST_GraphicsSettingsPreset>* M_PtrGetGraphicsSettingsPresets();
	void M_SetGraphicsSettingsPresets(const TArray<struct FST_GraphicsSettingsPreset>& value);

	//bool	RazerChroma;		//Offset: 1608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRazerChroma() const;
	bool* M_PtrGetRazerChroma();
	void M_SetRazerChroma(const bool& value);

	//bool	DefaultRazerChroma;		//Offset: 1609	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultRazerChroma() const;
	bool* M_PtrGetDefaultRazerChroma();
	void M_SetDefaultRazerChroma(const bool& value);

	//TMap<TEnumAsByte<E_TimeToSave>, struct FText>	TimeToSave;		//Offset: 1616	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_TimeToSave>, struct FText> M_GetTimeToSave() const;
	TMap<TEnumAsByte<E_TimeToSave>, struct FText>* M_PtrGetTimeToSave();
	void M_SetTimeToSave(const TMap<TEnumAsByte<E_TimeToSave>, struct FText>& value);

	//TEnumAsByte<E_TimeToSave>	SelectedTimeToSave;		//Offset: 1696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TimeToSave> M_GetSelectedTimeToSave() const;
	TEnumAsByte<E_TimeToSave>* M_PtrGetSelectedTimeToSave();
	void M_SetSelectedTimeToSave(const TEnumAsByte<E_TimeToSave>& value);

	//bool	AutosaveOnQuestEnd;		//Offset: 1697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAutosaveOnQuestEnd() const;
	bool* M_PtrGetAutosaveOnQuestEnd();
	void M_SetAutosaveOnQuestEnd(const bool& value);

	//bool	DefaultAutosaveOnQuestEnd;		//Offset: 1698	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultAutosaveOnQuestEnd() const;
	bool* M_PtrGetDefaultAutosaveOnQuestEnd();
	void M_SetDefaultAutosaveOnQuestEnd(const bool& value);

	//int32_t	GraphicsSettingsPresetID;		//Offset: 1700	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetGraphicsSettingsPresetID() const;
	int32_t* M_PtrGetGraphicsSettingsPresetID();
	void M_SetGraphicsSettingsPresetID(const int32_t& value);

	//int32_t	Brightness;		//Offset: 1704	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBrightness() const;
	int32_t* M_PtrGetBrightness();
	void M_SetBrightness(const int32_t& value);

	//int32_t	DefaultBrightness;		//Offset: 1708	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultBrightness() const;
	int32_t* M_PtrGetDefaultBrightness();
	void M_SetDefaultBrightness(const int32_t& value);

	//bool	DefaultCameraShakes;		//Offset: 1712	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCameraShakes() const;
	bool* M_PtrGetDefaultCameraShakes();
	void M_SetDefaultCameraShakes(const bool& value);

	//bool	CameraShakes;		//Offset: 1713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCameraShakes() const;
	bool* M_PtrGetCameraShakes();
	void M_SetCameraShakes(const bool& value);

	//bool	DefaultBreathing;		//Offset: 1714	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultBreathing() const;
	bool* M_PtrGetDefaultBreathing();
	void M_SetDefaultBreathing(const bool& value);

	//bool	Breathing;		//Offset: 1715	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBreathing() const;
	bool* M_PtrGetBreathing();
	void M_SetBreathing(const bool& value);

	//int32_t	SelectedMouseScrollFunction;		//Offset: 1716	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedMouseScrollFunction() const;
	int32_t* M_PtrGetSelectedMouseScrollFunction();
	void M_SetSelectedMouseScrollFunction(const int32_t& value);

	//bool	SSGI;		//Offset: 1720	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSSGI() const;
	bool* M_PtrGetSSGI();
	void M_SetSSGI(const bool& value);

	//bool	DefaultSSGI;		//Offset: 1721	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultSSGI() const;
	bool* M_PtrGetDefaultSSGI();
	void M_SetDefaultSSGI(const bool& value);

	//TMap<TEnumAsByte<E_GamepadType>, struct FString>	GamepadType;		//Offset: 1728	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_GamepadType>, struct FString> M_GetGamepadType() const;
	TMap<TEnumAsByte<E_GamepadType>, struct FString>* M_PtrGetGamepadType();
	void M_SetGamepadType(const TMap<TEnumAsByte<E_GamepadType>, struct FString>& value);

	//TEnumAsByte<E_GamepadType>	SelectedGamepadType;		//Offset: 1808	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_GamepadType> M_GetSelectedGamepadType() const;
	TEnumAsByte<E_GamepadType>* M_PtrGetSelectedGamepadType();
	void M_SetSelectedGamepadType(const TEnumAsByte<E_GamepadType>& value);

	//TEnumAsByte<E_GamepadControlType>	SelectedGamepadControlType;		//Offset: 1809	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_GamepadControlType> M_GetSelectedGamepadControlType() const;
	TEnumAsByte<E_GamepadControlType>* M_PtrGetSelectedGamepadControlType();
	void M_SetSelectedGamepadControlType(const TEnumAsByte<E_GamepadControlType>& value);

	//TMap<TEnumAsByte<E_GamepadControlType>, struct FText>	GamepadControlType;		//Offset: 1816	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_GamepadControlType>, struct FText> M_GetGamepadControlType() const;
	TMap<TEnumAsByte<E_GamepadControlType>, struct FText>* M_PtrGetGamepadControlType();
	void M_SetGamepadControlType(const TMap<TEnumAsByte<E_GamepadControlType>, struct FText>& value);

	//TArray<class UMultiTaskBase*>	TasksArray;		//Offset: 1896	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UMultiTaskBase*> M_GetTasksArray() const;
	TArray<class UMultiTaskBase*>* M_PtrGetTasksArray();
	void M_SetTasksArray(const TArray<class UMultiTaskBase*>& value);

	//bool	LaunchMultiplayer;		//Offset: 1912	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLaunchMultiplayer() const;
	bool* M_PtrGetLaunchMultiplayer();
	void M_SetLaunchMultiplayer(const bool& value);

	//bool	ReturningFromDisconnect;		//Offset: 1913	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetReturningFromDisconnect() const;
	bool* M_PtrGetReturningFromDisconnect();
	void M_SetReturningFromDisconnect(const bool& value);

	//bool	LoggedOutDuringLoading;		//Offset: 1914	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLoggedOutDuringLoading() const;
	bool* M_PtrGetLoggedOutDuringLoading();
	void M_SetLoggedOutDuringLoading(const bool& value);

	//int32_t	ConsoleFramerateMode;		//Offset: 1916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetConsoleFramerateMode() const;
	int32_t* M_PtrGetConsoleFramerateMode();
	void M_SetConsoleFramerateMode(const int32_t& value);

	//TArray<int32_t>	ConsoleFramerateModels;		//Offset: 1920	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetConsoleFramerateModels() const;
	TArray<int32_t>* M_PtrGetConsoleFramerateModels();
	void M_SetConsoleFramerateModels(const TArray<int32_t>& value);

	//int32_t	DefaultConsoleFramerateModeID;		//Offset: 1936	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultConsoleFramerateModeID() const;
	int32_t* M_PtrGetDefaultConsoleFramerateModeID();
	void M_SetDefaultConsoleFramerateModeID(const int32_t& value);

	//int32_t	ConsoleFramerateModeID;		//Offset: 1940	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetConsoleFramerateModeID() const;
	int32_t* M_PtrGetConsoleFramerateModeID();
	void M_SetConsoleFramerateModeID(const int32_t& value);

	//bool	DefaultPlayInBackground;		//Offset: 1944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultPlayInBackground() const;
	bool* M_PtrGetDefaultPlayInBackground();
	void M_SetDefaultPlayInBackground(const bool& value);

	//bool	PlayInBackground;		//Offset: 1945	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayInBackground() const;
	bool* M_PtrGetPlayInBackground();
	void M_SetPlayInBackground(const bool& value);

	//EMD_SpecificPlatform	Platform;		//Offset: 1946	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	EMD_SpecificPlatform M_GetPlatform() const;
	EMD_SpecificPlatform* M_PtrGetPlatform();
	void M_SetPlatform(const EMD_SpecificPlatform& value);

	//int32_t	DefaultButtonResolutionID_SteamDeck;		//Offset: 1948	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonResolutionID_SteamDeck() const;
	int32_t* M_PtrGetDefaultButtonResolutionID_SteamDeck();
	void M_SetDefaultButtonResolutionID_SteamDeck(const int32_t& value);

	//int32_t	DefaultButtonAspectRatioID_SteamDeck;		//Offset: 1952	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultButtonAspectRatioID_SteamDeck() const;
	int32_t* M_PtrGetDefaultButtonAspectRatioID_SteamDeck();
	void M_SetDefaultButtonAspectRatioID_SteamDeck(const int32_t& value);

	//TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>	OnCreateSessionSuccess;		//Offset: 1960	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature> M_GetOnCreateSessionSuccess() const;
	TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>* M_PtrGetOnCreateSessionSuccess();
	void M_SetOnCreateSessionSuccess(const TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>& value);

	//TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>	OnCreateSessionFailed;		//Offset: 1976	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCreateSessionFailed__DelegateSignature> M_GetOnCreateSessionFailed() const;
	TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>* M_PtrGetOnCreateSessionFailed();
	void M_SetOnCreateSessionFailed(const TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>& value);

	//TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>	OnJoinSessionSuccess;		//Offset: 1992	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature> M_GetOnJoinSessionSuccess() const;
	TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>* M_PtrGetOnJoinSessionSuccess();
	void M_SetOnJoinSessionSuccess(const TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>& value);

	//TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>	OnJoinSessionFailed;		//Offset: 2008	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnJoinSessionFailed__DelegateSignature> M_GetOnJoinSessionFailed() const;
	TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>* M_PtrGetOnJoinSessionFailed();
	void M_SetOnJoinSessionFailed(const TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>& value);

	//TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>	OnDestroySessionSuccess;		//Offset: 2024	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature> M_GetOnDestroySessionSuccess() const;
	TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>* M_PtrGetOnDestroySessionSuccess();
	void M_SetOnDestroySessionSuccess(const TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>& value);

	//TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>	OnDestroySessionFailed;		//Offset: 2040	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDestroySessionFailed__DelegateSignature> M_GetOnDestroySessionFailed() const;
	TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>* M_PtrGetOnDestroySessionFailed();
	void M_SetOnDestroySessionFailed(const TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>& value);

	//TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>	OnFindSessionsSuccess;		//Offset: 2056	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature> M_GetOnFindSessionsSuccess() const;
	TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>* M_PtrGetOnFindSessionsSuccess();
	void M_SetOnFindSessionsSuccess(const TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>& value);

	//TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>	OnFindSessionsFailed;		//Offset: 2072	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFindSessionsFailed__DelegateSignature> M_GetOnFindSessionsFailed() const;
	TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>* M_PtrGetOnFindSessionsFailed();
	void M_SetOnFindSessionsFailed(const TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>& value);

	//TAssetPtr<class FOnTasksEnded__DelegateSignature>	OnTasksEnded;		//Offset: 2088	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTasksEnded__DelegateSignature> M_GetOnTasksEnded() const;
	TAssetPtr<class FOnTasksEnded__DelegateSignature>* M_PtrGetOnTasksEnded();
	void M_SetOnTasksEnded(const TAssetPtr<class FOnTasksEnded__DelegateSignature>& value);

	//bool	ShowCharacterCreatorOnMultiStart;		//Offset: 2104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowCharacterCreatorOnMultiStart() const;
	bool* M_PtrGetShowCharacterCreatorOnMultiStart();
	void M_SetShowCharacterCreatorOnMultiStart(const bool& value);

	//int32_t	NotificationLength;		//Offset: 2108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNotificationLength() const;
	int32_t* M_PtrGetNotificationLength();
	void M_SetNotificationLength(const int32_t& value);

	//bool	NotificationSounds;		//Offset: 2112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNotificationSounds() const;
	bool* M_PtrGetNotificationSounds();
	void M_SetNotificationSounds(const bool& value);

	//bool	CompassVisibility;		//Offset: 2113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCompassVisibility() const;
	bool* M_PtrGetCompassVisibility();
	void M_SetCompassVisibility(const bool& value);

	//bool	TutorialsVisibility;		//Offset: 2114	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTutorialsVisibility() const;
	bool* M_PtrGetTutorialsVisibility();
	void M_SetTutorialsVisibility(const bool& value);

	//bool	QuestTrackerVisibility;		//Offset: 2115	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetQuestTrackerVisibility() const;
	bool* M_PtrGetQuestTrackerVisibility();
	void M_SetQuestTrackerVisibility(const bool& value);

	//bool	CrosshairVisibility;		//Offset: 2116	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCrosshairVisibility() const;
	bool* M_PtrGetCrosshairVisibility();
	void M_SetCrosshairVisibility(const bool& value);

	//bool	TimestampsInChat;		//Offset: 2117	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimestampsInChat() const;
	bool* M_PtrGetTimestampsInChat();
	void M_SetTimestampsInChat(const bool& value);

	//bool	BanditsHealthBarVisibility;		//Offset: 2118	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBanditsHealthBarVisibility() const;
	bool* M_PtrGetBanditsHealthBarVisibility();
	void M_SetBanditsHealthBarVisibility(const bool& value);

	//bool	AnimalHealthBarVisibility;		//Offset: 2119	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAnimalHealthBarVisibility() const;
	bool* M_PtrGetAnimalHealthBarVisibility();
	void M_SetAnimalHealthBarVisibility(const bool& value);

	//bool	PlayersHealthBarVisibility;		//Offset: 2120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayersHealthBarVisibility() const;
	bool* M_PtrGetPlayersHealthBarVisibility();
	void M_SetPlayersHealthBarVisibility(const bool& value);

	//bool	VillageStatusVisibility;		//Offset: 2121	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetVillageStatusVisibility() const;
	bool* M_PtrGetVillageStatusVisibility();
	void M_SetVillageStatusVisibility(const bool& value);

	//int32_t	DefaultNotificationLength;		//Offset: 2124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefaultNotificationLength() const;
	int32_t* M_PtrGetDefaultNotificationLength();
	void M_SetDefaultNotificationLength(const int32_t& value);

	//bool	DefaultNotificationSounds;		//Offset: 2128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultNotificationSounds() const;
	bool* M_PtrGetDefaultNotificationSounds();
	void M_SetDefaultNotificationSounds(const bool& value);

	//bool	DefaultCornerTutorialsVisibility;		//Offset: 2129	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCornerTutorialsVisibility() const;
	bool* M_PtrGetDefaultCornerTutorialsVisibility();
	void M_SetDefaultCornerTutorialsVisibility(const bool& value);

	//bool	DefaultCompassVisibility;		//Offset: 2130	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
	bool M_GetDefaultCompassVisibility() const;
	bool* M_PtrGetDefaultCompassVisibility();
	void M_SetDefaultCompassVisibility(const bool& value);

	//bool	DefaultQuestTrackerVisibility;		//Offset: 2131	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultQuestTrackerVisibility() const;
	bool* M_PtrGetDefaultQuestTrackerVisibility();
	void M_SetDefaultQuestTrackerVisibility(const bool& value);

	//bool	DefaultCrosshairVisibility;		//Offset: 2132	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCrosshairVisibility() const;
	bool* M_PtrGetDefaultCrosshairVisibility();
	void M_SetDefaultCrosshairVisibility(const bool& value);

	//bool	DefaultTimestampsInChat;		//Offset: 2133	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultTimestampsInChat() const;
	bool* M_PtrGetDefaultTimestampsInChat();
	void M_SetDefaultTimestampsInChat(const bool& value);

	//bool	DefaultVillageStatusVisibility;		//Offset: 2134	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultVillageStatusVisibility() const;
	bool* M_PtrGetDefaultVillageStatusVisibility();
	void M_SetDefaultVillageStatusVisibility(const bool& value);

	//bool	HeldItemInputVisibility;		//Offset: 2135	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeldItemInputVisibility() const;
	bool* M_PtrGetHeldItemInputVisibility();
	void M_SetHeldItemInputVisibility(const bool& value);

	//bool	HeldItemInformationVisibility;		//Offset: 2136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeldItemInformationVisibility() const;
	bool* M_PtrGetHeldItemInformationVisibility();
	void M_SetHeldItemInformationVisibility(const bool& value);

	//bool	DefaultHeldItemInputVisibility;		//Offset: 2137	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultHeldItemInputVisibility() const;
	bool* M_PtrGetDefaultHeldItemInputVisibility();
	void M_SetDefaultHeldItemInputVisibility(const bool& value);

	//bool	DefaultHeldItemInformationVisibility;		//Offset: 2138	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultHeldItemInformationVisibility() const;
	bool* M_PtrGetDefaultHeldItemInformationVisibility();
	void M_SetDefaultHeldItemInformationVisibility(const bool& value);

	//bool	OverrideCrossplay;		//Offset: 2139	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOverrideCrossplay() const;
	bool* M_PtrGetOverrideCrossplay();
	void M_SetOverrideCrossplay(const bool& value);

	//struct FName	SessionPassword;		//Offset: 2140	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetSessionPassword() const;
	struct FName* M_PtrGetSessionPassword();
	void M_SetSessionPassword(const struct FName& value);

	//TArray<struct FLinearColor>	PlayerColors;		//Offset: 2152	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FLinearColor> M_GetPlayerColors() const;
	TArray<struct FLinearColor>* M_PtrGetPlayerColors();
	void M_SetPlayerColors(const TArray<struct FLinearColor>& value);

	//class UBinkMediaPlayer*	BinkMediaPlayer;		//Offset: 2168	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBinkMediaPlayer* M_GetBinkMediaPlayer() const;
	class UBinkMediaPlayer** M_PtrGetBinkMediaPlayer();
	void M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value);

	//bool	IsCutscenePlaying;		//Offset: 2176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCutscenePlaying() const;
	bool* M_PtrGetIsCutscenePlaying();
	void M_SetIsCutscenePlaying(const bool& value);

	//TArray<struct FName>	LeaderboardStatsList;		//Offset: 2184	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetLeaderboardStatsList() const;
	TArray<struct FName>* M_PtrGetLeaderboardStatsList();
	void M_SetLeaderboardStatsList(const TArray<struct FName>& value);

	//TMap<struct FName, int32_t>	LeaderboardStatValues;		//Offset: 2200	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FName, int32_t> M_GetLeaderboardStatValues() const;
	TMap<struct FName, int32_t>* M_PtrGetLeaderboardStatValues();
	void M_SetLeaderboardStatValues(const TMap<struct FName, int32_t>& value);

	//TArray<struct FName>	AchievementBuffer;		//Offset: 2280	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAchievementBuffer() const;
	TArray<struct FName>* M_PtrGetAchievementBuffer();
	void M_SetAchievementBuffer(const TArray<struct FName>& value);

	//bool	StatsCached;		//Offset: 2296	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStatsCached() const;
	bool* M_PtrGetStatsCached();
	void M_SetStatsCached(const bool& value);

	//int32_t	AchiStatTries;		//Offset: 2300	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAchiStatTries() const;
	int32_t* M_PtrGetAchiStatTries();
	void M_SetAchiStatTries(const int32_t& value);

	//struct FTimerHandle	AchiStatTimer;		//Offset: 2304	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAchiStatTimer() const;
	struct FTimerHandle* M_PtrGetAchiStatTimer();
	void M_SetAchiStatTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	AchiTimer;		//Offset: 2312	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAchiTimer() const;
	struct FTimerHandle* M_PtrGetAchiTimer();
	void M_SetAchiTimer(const struct FTimerHandle& value);

	//bool	FinishedGivingAchievement;		//Offset: 2320	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFinishedGivingAchievement() const;
	bool* M_PtrGetFinishedGivingAchievement();
	void M_SetFinishedGivingAchievement(const bool& value);

	//TAssetPtr<class FNone_513>	AlreadyWrittenAchievements;		//Offset: 2328	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetAlreadyWrittenAchievements() const;
	TAssetPtr<class FNone_513>* M_PtrGetAlreadyWrittenAchievements();
	void M_SetAlreadyWrittenAchievements(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FOnLoginSuccessful__DelegateSignature>	OnLoginSuccessful;		//Offset: 2408	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnLoginSuccessful__DelegateSignature> M_GetOnLoginSuccessful() const;
	TAssetPtr<class FOnLoginSuccessful__DelegateSignature>* M_PtrGetOnLoginSuccessful();
	void M_SetOnLoginSuccessful(const TAssetPtr<class FOnLoginSuccessful__DelegateSignature>& value);

	//TAssetPtr<class FOnLoginFailed__DelegateSignature>	OnLoginFailed;		//Offset: 2424	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnLoginFailed__DelegateSignature> M_GetOnLoginFailed() const;
	TAssetPtr<class FOnLoginFailed__DelegateSignature>* M_PtrGetOnLoginFailed();
	void M_SetOnLoginFailed(const TAssetPtr<class FOnLoginFailed__DelegateSignature>& value);

	//TArray<TEnumAsByte<E_NetworkingErrorsCodes>>	NetworkingErrors;		//Offset: 2440	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_NetworkingErrorsCodes>> M_GetNetworkingErrors() const;
	TArray<TEnumAsByte<E_NetworkingErrorsCodes>>* M_PtrGetNetworkingErrors();
	void M_SetNetworkingErrors(const TArray<TEnumAsByte<E_NetworkingErrorsCodes>>& value);

	//TAssetPtr<class FOnError__DelegateSignature>	OnError;		//Offset: 2456	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnError__DelegateSignature> M_GetOnError() const;
	TAssetPtr<class FOnError__DelegateSignature>* M_PtrGetOnError();
	void M_SetOnError(const TAssetPtr<class FOnError__DelegateSignature>& value);

	//bool	ShouldTakeValuesOnGameModeBegin;		//Offset: 2472	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldTakeValuesOnGameModeBegin() const;
	bool* M_PtrGetShouldTakeValuesOnGameModeBegin();
	void M_SetShouldTakeValuesOnGameModeBegin(const bool& value);

	//int32_t	DaysPerSeason;		//Offset: 2476	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason() const;
	int32_t* M_PtrGetDaysPerSeason();
	void M_SetDaysPerSeason(const int32_t& value);

	//float	TaxMultiplier;		//Offset: 2480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTaxMultiplier() const;
	float* M_PtrGetTaxMultiplier();
	void M_SetTaxMultiplier(const float& value);

	//bool	Events;		//Offset: 2484	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEvents() const;
	bool* M_PtrGetEvents();
	void M_SetEvents(const bool& value);

	//bool	UnlimitedHP;		//Offset: 2485	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedHP() const;
	bool* M_PtrGetUnlimitedHP();
	void M_SetUnlimitedHP(const bool& value);

	//bool	UnlimitedStamina;		//Offset: 2486	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedStamina() const;
	bool* M_PtrGetUnlimitedStamina();
	void M_SetUnlimitedStamina(const bool& value);

	//bool	UnlimitedFood;		//Offset: 2487	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedFood() const;
	bool* M_PtrGetUnlimitedFood();
	void M_SetUnlimitedFood(const bool& value);

	//bool	UnlimitedWater;		//Offset: 2488	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWater() const;
	bool* M_PtrGetUnlimitedWater();
	void M_SetUnlimitedWater(const bool& value);

	//float	NPCNeeds_FoodMultiplier;		//Offset: 2492	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier();
	void M_SetNPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier;		//Offset: 2496	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier();
	void M_SetNPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WoodMultiplier;		//Offset: 2500	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier();
	void M_SetNPCNeeds_WoodMultiplier(const float& value);

	//float	BanditsHPMultiplier;		//Offset: 2504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsHPMultiplier() const;
	float* M_PtrGetBanditsHPMultiplier();
	void M_SetBanditsHPMultiplier(const float& value);

	//float	BanditsDamageMultiplier;		//Offset: 2508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsDamageMultiplier() const;
	float* M_PtrGetBanditsDamageMultiplier();
	void M_SetBanditsDamageMultiplier(const float& value);

	//float	AnimalsHPMultiplier;		//Offset: 2512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier() const;
	float* M_PtrGetAnimalsHPMultiplier();
	void M_SetAnimalsHPMultiplier(const float& value);

	//float	AnimalsDamageMultiplier;		//Offset: 2516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier() const;
	float* M_PtrGetAnimalsDamageMultiplier();
	void M_SetAnimalsDamageMultiplier(const float& value);

	//bool	UnlimitedWeight;		//Offset: 2520	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWeight() const;
	bool* M_PtrGetUnlimitedWeight();
	void M_SetUnlimitedWeight(const bool& value);

	//bool	Poisoning;		//Offset: 2521	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPoisoning() const;
	bool* M_PtrGetPoisoning();
	void M_SetPoisoning(const bool& value);

	//bool	Temperature;		//Offset: 2522	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTemperature() const;
	bool* M_PtrGetTemperature();
	void M_SetTemperature(const bool& value);

	//float	BuildingsLimitMultiplier;		//Offset: 2524	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingsLimitMultiplier() const;
	float* M_PtrGetBuildingsLimitMultiplier();
	void M_SetBuildingsLimitMultiplier(const float& value);

	//bool	FastCrafting;		//Offset: 2528	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastCrafting() const;
	bool* M_PtrGetFastCrafting();
	void M_SetFastCrafting(const bool& value);

	//bool	FastBuilding;		//Offset: 2529	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastBuilding() const;
	bool* M_PtrGetFastBuilding();
	void M_SetFastBuilding(const bool& value);

	//bool	FastStorage;		//Offset: 2530	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastStorage() const;
	bool* M_PtrGetFastStorage();
	void M_SetFastStorage(const bool& value);

	//float	XPGainMultiplier;		//Offset: 2532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetXPGainMultiplier() const;
	float* M_PtrGetXPGainMultiplier();
	void M_SetXPGainMultiplier(const float& value);

	//float	TechnologyGainMultiplier;		//Offset: 2536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTechnologyGainMultiplier() const;
	float* M_PtrGetTechnologyGainMultiplier();
	void M_SetTechnologyGainMultiplier(const float& value);

	//float	DynastyReputationGainMultiplier;		//Offset: 2540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDynastyReputationGainMultiplier() const;
	float* M_PtrGetDynastyReputationGainMultiplier();
	void M_SetDynastyReputationGainMultiplier(const float& value);

	//bool	StopSpoilForDroppedItems;		//Offset: 2544	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopSpoilForDroppedItems() const;
	bool* M_PtrGetStopSpoilForDroppedItems();
	void M_SetStopSpoilForDroppedItems(const bool& value);

	//bool	PointLightShadows;		//Offset: 2545	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPointLightShadows() const;
	bool* M_PtrGetPointLightShadows();
	void M_SetPointLightShadows(const bool& value);

	//bool	DefaultPointLightShadows;		//Offset: 2546	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultPointLightShadows() const;
	bool* M_PtrGetDefaultPointLightShadows();
	void M_SetDefaultPointLightShadows(const bool& value);

	//bool	DynamicCharacterViewInInventory;		//Offset: 2547	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDynamicCharacterViewInInventory() const;
	bool* M_PtrGetDynamicCharacterViewInInventory();
	void M_SetDynamicCharacterViewInInventory(const bool& value);

	//bool	DefaultDynamicCharacterViewInInventory;		//Offset: 2548	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultDynamicCharacterViewInInventory() const;
	bool* M_PtrGetDefaultDynamicCharacterViewInInventory();
	void M_SetDefaultDynamicCharacterViewInInventory(const bool& value);

	//bool	Crossplay;		//Offset: 2549	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCrossplay() const;
	bool* M_PtrGetCrossplay();
	void M_SetCrossplay(const bool& value);

	//bool	DefaultCrossplay;		//Offset: 2550	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultCrossplay() const;
	bool* M_PtrGetDefaultCrossplay();
	void M_SetDefaultCrossplay(const bool& value);

	//class UProfanityFilter*	ProfanityFilter;		//Offset: 2552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UProfanityFilter* M_GetProfanityFilter() const;
	class UProfanityFilter** M_PtrGetProfanityFilter();
	void M_SetProfanityFilter(const class UProfanityFilter*& value);

	//bool	EnableProfanityFilter;		//Offset: 2560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEnableProfanityFilter() const;
	bool* M_PtrGetEnableProfanityFilter();
	void M_SetEnableProfanityFilter(const bool& value);

	//bool	DefaultEnableProfanityFilter;		//Offset: 2561	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultEnableProfanityFilter() const;
	bool* M_PtrGetDefaultEnableProfanityFilter();
	void M_SetDefaultEnableProfanityFilter(const bool& value);

	//class USAVE_MutedPlayers_C*	SaveMutedPlayers;		//Offset: 2568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_MutedPlayers_C* M_GetSaveMutedPlayers() const;
	class USAVE_MutedPlayers_C** M_PtrGetSaveMutedPlayers();
	void M_SetSaveMutedPlayers(const class USAVE_MutedPlayers_C*& value);

	//TAssetPtr<class FOnInviteReceived__DelegateSignature>	OnInviteReceived;		//Offset: 2576	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInviteReceived__DelegateSignature> M_GetOnInviteReceived() const;
	TAssetPtr<class FOnInviteReceived__DelegateSignature>* M_PtrGetOnInviteReceived();
	void M_SetOnInviteReceived(const TAssetPtr<class FOnInviteReceived__DelegateSignature>& value);

	//struct FBlueprintSessionResultCustom	InviteSessionHandler;		//Offset: 2592	Size: 264	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FBlueprintSessionResultCustom M_GetInviteSessionHandler() const;
	struct FBlueprintSessionResultCustom* M_PtrGetInviteSessionHandler();
	void M_SetInviteSessionHandler(const struct FBlueprintSessionResultCustom& value);

	//struct FString	InvitedUser;		//Offset: 2856	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetInvitedUser() const;
	struct FString* M_PtrGetInvitedUser();
	void M_SetInvitedUser(const struct FString& value);

	//bool	DefaultBanditsHealthBarVisibility;		//Offset: 2872	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultBanditsHealthBarVisibility() const;
	bool* M_PtrGetDefaultBanditsHealthBarVisibility();
	void M_SetDefaultBanditsHealthBarVisibility(const bool& value);

	//bool	DefaultAnimalHealthBarVisibility;		//Offset: 2873	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultAnimalHealthBarVisibility() const;
	bool* M_PtrGetDefaultAnimalHealthBarVisibility();
	void M_SetDefaultAnimalHealthBarVisibility(const bool& value);

	//bool	DefaultPlayersHealthBarVisibility;		//Offset: 2874	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultPlayersHealthBarVisibility() const;
	bool* M_PtrGetDefaultPlayersHealthBarVisibility();
	void M_SetDefaultPlayersHealthBarVisibility(const bool& value);

	//float	WeaponDurabilityMultiplier;		//Offset: 2876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWeaponDurabilityMultiplier() const;
	float* M_PtrGetWeaponDurabilityMultiplier();
	void M_SetWeaponDurabilityMultiplier(const float& value);

	//float	ArmorDurabilityMultiplier;		//Offset: 2880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetArmorDurabilityMultiplier() const;
	float* M_PtrGetArmorDurabilityMultiplier();
	void M_SetArmorDurabilityMultiplier(const float& value);

	//bool	InspectorOnHold;		//Offset: 2884	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInspectorOnHold() const;
	bool* M_PtrGetInspectorOnHold();
	void M_SetInspectorOnHold(const bool& value);

	//bool	DefaultInspectorOnHold;		//Offset: 2885	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultInspectorOnHold() const;
	bool* M_PtrGetDefaultInspectorOnHold();
	void M_SetDefaultInspectorOnHold(const bool& value);

	//bool	DefaultConsolsInspectorOnHold;		//Offset: 2886	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultConsolsInspectorOnHold() const;
	bool* M_PtrGetDefaultConsolsInspectorOnHold();
	void M_SetDefaultConsolsInspectorOnHold(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C");
		return ptr;
	}

#pragma region Functions
	void OnGraphicsSettingsChanged__DelegateSignature();

	void OnCreateSessionSuccess__DelegateSignature();

	void OnCreateSessionFailed__DelegateSignature(E_JoinFailureResult FailureResult);

	void OnJoinSessionSuccess__DelegateSignature();

	void OnJoinSessionFailed__DelegateSignature(E_JoinFailureResult FailureResult);

	void OnDestroySessionSuccess__DelegateSignature();

	void OnDestroySessionFailed__DelegateSignature();

	void OnTasksEnded__DelegateSignature();

	void OnFindSessionsSuccess__DelegateSignature(TArray<struct FBlueprintSessionResultCustom>* Results);

	void OnFindSessionsFailed__DelegateSignature(E_JoinFailureResult FailureResult);

	void OnLoginSuccessful__DelegateSignature();

	void OnLoginFailed__DelegateSignature();

	void OnError__DelegateSignature();

	void OnInviteReceived__DelegateSignature(TEnumAsByte<E_InviteState> InviteState);

	void ExecuteUbergraph_GI_MedievalDynasty(int32_t EntryPoint);

	void CallStopTutorialVideo();

	void CheckSocialPermissions(bool ShowSystemMessageIfNeeded);

	void ShowSocialFeaturesRestrictionUI_BPI();

	void OnAppReactivatedCrossplayCheck();

	void InitOnlineFeaturesOnGameStart_BPI();

	void InitOnlineFeaturesOnGameStart();

	void OnAppReactivatedOnCoop();

	void CacheBlockList();

	void OnConnectionChanged(bool hasConnection);

	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);

	void SetHUDSettings();

	void GetHUDSettingsFromFile();

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

	void CreateCutscene_BPI(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL);

	void StartMultiAndLoadGame_BPI(struct FString SaveSlotName);

	void StartMulti_BPI();

	void WaitForTasksEnd_BPI();

	void SetGameState(EMD_GameState GameState);

	void SetInitialLaunch(bool SetInitialLaunch);

	void AddTask(class UMultiTaskBase* Task);

	void SetSkipMainMenu(bool SkipMainMenu);

	void SetSkipIntro(bool SetSkipIntro);

	void ClearErrors();

	void TryToLoginPlayer();

	void HandleSessionInvite(bool bWasSuccessful, int32_t LocalUserNum, struct FString UserUNiD, const struct FBlueprintSessionResultCustom& SessionToJoin);

	void OnFindSessionFinished(const TArray<struct FBlueprintSessionResultCustom>& Results);

	void CreateSessionAndLoadGame_BPI(struct FName SessionName, struct FName SessionPassword, struct FString SaveSlotName);

	void FindSession_BPI(struct FString SearchSessionName, int32_t MaxResults, bool UseLan);

	void SetCurrentSessionName_BPI(struct FName SessionName);

	void JoinSession_BPI(struct FBlueprintSessionResultCustom Session);

	void DestroySession_BPI(struct FName SessionName);

	void CreateSession_BPI(struct FName SessionName, struct FName SessionPassword);

	void PlayIntroSound(struct FString OpenedUrl);

	void FinishOxbowIntro();

	void SkipOxbowIntro();

	void CreateOxbowIntro();

	void StopTutorialVideo();

	void StartTutorialVideo(struct FString MediaURL);

	void PauseGameOnCutscene(struct FString OpenedUrl);

	void RemoveCutsceneOnEnd();

	void CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL);

	void UnlockAchievement_BPI(struct FName AchievementID);

	void AddStatProgress_BPI(struct FName StatName, int32_t StatValue, bool TreatAsSet);

	void CacheStats_BPI();

	void StartStatCaching_BPI();

	void TryToAddAchievement();

	void GiveAchievement(const struct FName& AchID);

	void CacheStats();

	void AddStatProgress(struct FName StatName, int32_t StatValue, bool TreatAsSet);

	void UnlockAchievement(struct FName AchievementID);

	void HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D();

	void NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D();

	void HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A();

	void NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A();

	void QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E();

	void QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E();

	void HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C();

	void NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C();

	void QuerySuccessful_407F179D4E07D46A8C55248C40723537();

	void QueryFailed_407F179D4E07D46A8C55248C40723537();

	void OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController);

	void OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController);

	void HasPrivilege_C116C64642F21994A6598099607D79BB();

	void NoPrivilege_C116C64642F21994A6598099607D79BB();

	void HasPrivilege_119ED878442C786ABDE822A4CA5737C8();

	void NoPrivilege_119ED878442C786ABDE822A4CA5737C8();

	void HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59();

	void NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59();

	void HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A();

	void NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A();

	void OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0();

	void OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0();

	void OnSuccess_1F3996604F40CB64D5134295185CCC8F(const TArray<struct FBlueprintSessionResultCustom>& Results);

	void OnFailure_1F3996604F40CB64D5134295185CCC8F(const TArray<struct FBlueprintSessionResultCustom>& Results);

	void OnSuccess_BD5D365D4B3F74567308D795150BB571();

	void OnFailure_BD5D365D4B3F74567308D795150BB571();

	void OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9();

	void OnFailure_D5070B934662AD46C0FAEFB2DF946CD9();

	void OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7();

	void OnFailure_4AD51AE24F028F491E64C09EAAC80FD7();

	void OnSuccess_FD482FAD4AAFB71698F32891DBF06156(int32_t LeaderboardValue);

	void OnFailure_FD482FAD4AAFB71698F32891DBF06156(int32_t LeaderboardValue);

	void OnSuccess_93BF7E71464CEE3F48388F999CC4BD59();

	void OnFailure_93BF7E71464CEE3F48388F999CC4BD59();

	void OnSuccess_A131F301426B560513588383512E27A4(int32_t LeaderboardValue);

	void OnFailure_A131F301426B560513588383512E27A4(int32_t LeaderboardValue);

	void OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A();

	void OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A();

	void OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);

	void OnFailure_306210D74F3348DF0E1A51A8F83F7DA2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);

	void OnSuccess_81495EE74A1F1812597BD6B9EF7972E3();

	void OnFailure_81495EE74A1F1812597BD6B9EF7972E3();

	void OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289(class APlayerController* PlayerController);

	void OnFailure_AAB804FC4DEFDAB28331DBA6C399A289(class APlayerController* PlayerController);

	void OnSuccess_95F98E5D43F3A815BBCD37A546A2320C();

	void OnFailure_95F98E5D43F3A815BBCD37A546A2320C();

	void OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887(class APlayerController* PlayerController);

	void OnFailure_AAB804FC4DEFDAB28331DBA606FA0887(class APlayerController* PlayerController);

	void OnSuccess_95F98E5D43F3A815BBCD37A583C19802();

	void OnFailure_95F98E5D43F3A815BBCD37A583C19802();

	void OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210(class APlayerController* PlayerController);

	void OnFailure_AAB804FC4DEFDAB28331DBA68C06E210(class APlayerController* PlayerController);

	void OnSuccess_95F98E5D43F3A815BBCD37A5093D7295();

	void OnFailure_95F98E5D43F3A815BBCD37A5093D7295();

	void OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB(class APlayerController* PlayerController);

	void OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB(class APlayerController* PlayerController);

	void OnSuccess_95F98E5D43F3A815BBCD37A513101A7E();

	void OnFailure_95F98E5D43F3A815BBCD37A513101A7E();

	void OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C(class APlayerController* PlayerController);

	void OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C(class APlayerController* PlayerController);

	void OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89();

	void OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89();

	void SetDefaultResolutionAndAspectRatioIndex();

	void RestoreDefaultKeybinds();

	void FixForMissingKeybinds();

	void InitSaveGameData();

	void UpdateGamepadKeybinds();

	void SetPerformanceMode(bool PerformanceModeActive);

	void GameSettings();

	void LoadSettingsFile(bool* SuccessfulLoad);

	void ReapplySettingsFromFile();

	void HudSettings();

	void RemoveCutscene(float Delay, struct FString* OldVideoURL);

	void StartStatCaching();

	void ResetAchiStats();

	void TemporarlyFillWithGameCustomizationSettings();

	void FillGameModeWithSetCustomizationSettings();

	void OnPlayerIsLoggedIn();

	void LoadMutedPlayersFromSave(bool* SuccessfulLoad);

	void IsSessionFull(struct FBlueprintSessionResultCustom* Session, bool* IsFull);

	void GetPlayerState(struct FName Achievement, bool* Valid, class ABP_MD_PlayerState_C** PlayerState);

	void CheckLoginStatus(bool* IsLoggedIn);

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

	void GetCurrentShadowQuality(int32_t* Value);

	void IsTestVersion(bool* Value);

	void IsInitialLaunch(bool* Value);

	void GetPlatform_UserID(int32_t* Value);

	void GetGameState(EMD_GameState* GameState);

	void IsSteamDeck(bool* Value);

	struct FName GetCurrentSessionName_BPI();

	void IsMultiplayerMap(bool* IsMpMap);

	void IsMultiplayerBetaVersion(bool* Value);

	void GetDynamicCharacterViewInInventory(bool* Value);

	void GetNotificationDurationMultiplier(float* Mulitplier);

	void GetUGCPrivilege_BPI(bool* HasPrivilege);

	void GetBlockedPlayersOnlineIDs_BPI(TArray<struct FString>* BlockedPlayers);

	void AddRecentPlayer_BPI(class APlayerController* Player, class APlayerState* PlayerToAdd, bool* Success);

	void DoesCurrentSessionHaveCrossplayEnabled_BPI(bool* IsEnabled, bool* SuccessfullyRetrieved);

	void GetChromaSetting(bool* IsChromaEnabled);

	void GetInviteSessionHandler(struct FBlueprintSessionResultCustom* Invite_Session_Handler)/* const*/;

	void GetSaveSettings(class USAVE_Settings_C** Save_Settings)/* const*/;

	void IsBloodEnabled(bool* IsBloodEnabled)/* const*/;

#pragma endregion
};
};