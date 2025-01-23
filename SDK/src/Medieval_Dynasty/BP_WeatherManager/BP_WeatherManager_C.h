#pragma once
#include "Structs.h"
#include "BP_MasterManager/BP_MasterManager_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_WeatherManager.BP_WeatherManager_C
// Super: BlueprintGeneratedClass BP_MasterManager.BP_MasterManager_C
// Size: 1440
// Size inherited: 552
/////////////////////////////////////////////
namespace UE4 {
class ABP_WeatherManager_C : public ABP_MasterManager_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 552	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UArrowComponent*	Moon_Root;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetMoon_Root() const;
	class UArrowComponent** M_PtrGetMoon_Root();
	void M_SetMoon_Root(const class UArrowComponent*& value);

	//class UArrowComponent*	Sun_Root;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetSun_Root() const;
	class UArrowComponent** M_PtrGetSun_Root();
	void M_SetSun_Root(const class UArrowComponent*& value);

	//class UStaticMeshComponent*	Ultra_Dynamic_Sky_Sphere;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UStaticMeshComponent* M_GetUltra_Dynamic_Sky_Sphere() const;
	class UStaticMeshComponent** M_PtrGetUltra_Dynamic_Sky_Sphere();
	void M_SetUltra_Dynamic_Sky_Sphere(const class UStaticMeshComponent*& value);

	//class ADirectionalLight*	Sun_Light;		//Offset: 584	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ADirectionalLight* M_GetSun_Light() const;
	class ADirectionalLight** M_PtrGetSun_Light();
	void M_SetSun_Light(const class ADirectionalLight*& value);

	//class UMaterialInstanceDynamic*	Sky_MID;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMaterialInstanceDynamic* M_GetSky_MID() const;
	class UMaterialInstanceDynamic** M_PtrGetSky_MID();
	void M_SetSky_MID(const class UMaterialInstanceDynamic*& value);

	//bool	Debug;		//Offset: 600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDebug() const;
	bool* M_PtrGetDebug();
	void M_SetDebug(const bool& value);

	//bool	Refresh_Settings;		//Offset: 601	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetRefresh_Settings() const;
	bool* M_PtrGetRefresh_Settings();
	void M_SetRefresh_Settings(const bool& value);

	//float	CloudSpeed;		//Offset: 604	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudSpeed() const;
	float* M_PtrGetCloudSpeed();
	void M_SetCloudSpeed(const float& value);

	//float	CloudDensity;		//Offset: 608	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudDensity() const;
	float* M_PtrGetCloudDensity();
	void M_SetCloudDensity(const float& value);

	//float	CloudOpacity;		//Offset: 612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudOpacity() const;
	float* M_PtrGetCloudOpacity();
	void M_SetCloudOpacity(const float& value);

	//float	FogDensity;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFogDensity() const;
	float* M_PtrGetFogDensity();
	void M_SetFogDensity(const float& value);

	//float	WindIntensity;		//Offset: 620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindIntensity() const;
	float* M_PtrGetWindIntensity();
	void M_SetWindIntensity(const float& value);

	//float	PrecipitationIntensity;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPrecipitationIntensity() const;
	float* M_PtrGetPrecipitationIntensity();
	void M_SetPrecipitationIntensity(const float& value);

	//float	Cloud_Wisps_Opacity;		//Offset: 628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloud_Wisps_Opacity() const;
	float* M_PtrGetCloud_Wisps_Opacity();
	void M_SetCloud_Wisps_Opacity(const float& value);

	//TArray<class UCurveLinearColor*>	HorizonBaseColorCurves;		//Offset: 632	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetHorizonBaseColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetHorizonBaseColorCurves();
	void M_SetHorizonBaseColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	ZenithBaseColorCurves;		//Offset: 648	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetZenithBaseColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetZenithBaseColorCurves();
	void M_SetZenithBaseColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	CloudLightColorCurves;		//Offset: 664	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetCloudLightColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetCloudLightColorCurves();
	void M_SetCloudLightColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	CloudDarkColorCurves;		//Offset: 680	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetCloudDarkColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetCloudDarkColorCurves();
	void M_SetCloudDarkColorCurves(const TArray<class UCurveLinearColor*>& value);

	//bool	SunIntensityCorrection;		//Offset: 696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetSunIntensityCorrection() const;
	bool* M_PtrGetSunIntensityCorrection();
	void M_SetSunIntensityCorrection(const bool& value);

	//int32_t	WeatherVariation;		//Offset: 700	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWeatherVariation() const;
	int32_t* M_PtrGetWeatherVariation();
	void M_SetWeatherVariation(const int32_t& value);

	//TArray<class UCurveLinearColor*>	SunColorCurves;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetSunColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetSunColorCurves();
	void M_SetSunColorCurves(const TArray<class UCurveLinearColor*>& value);

	//class UCurveFloat*	ShineIntensityCurve;		//Offset: 720	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetShineIntensityCurve() const;
	class UCurveFloat** M_PtrGetShineIntensityCurve();
	void M_SetShineIntensityCurve(const class UCurveFloat*& value);

	//struct FST_Time	Time;		//Offset: 728	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetTime() const;
	struct FST_Time* M_PtrGetTime();
	void M_SetTime(const struct FST_Time& value);

	//float	Saturation;		//Offset: 752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSaturation() const;
	float* M_PtrGetSaturation();
	void M_SetSaturation(const float& value);

	//class UCurveFloat*	SunIntensityCurve;		//Offset: 760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSunIntensityCurve() const;
	class UCurveFloat** M_PtrGetSunIntensityCurve();
	void M_SetSunIntensityCurve(const class UCurveFloat*& value);

	//class UCurveLinearColor*	Cloudy_SunColorCurve;		//Offset: 768	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_SunColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_SunColorCurve();
	void M_SetCloudy_SunColorCurve(const class UCurveLinearColor*& value);

	//class AExponentialHeightFog*	Exponential_Height_Fog;		//Offset: 776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AExponentialHeightFog* M_GetExponential_Height_Fog() const;
	class AExponentialHeightFog** M_PtrGetExponential_Height_Fog();
	void M_SetExponential_Height_Fog(const class AExponentialHeightFog*& value);

	//class UCurveLinearColor*	Cloudy_CloudLightColorCurve;		//Offset: 784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_CloudLightColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_CloudLightColorCurve();
	void M_SetCloudy_CloudLightColorCurve(const class UCurveLinearColor*& value);

	//class UCurveLinearColor*	Cloudy_CloudDarkColorCurve;		//Offset: 792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_CloudDarkColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_CloudDarkColorCurve();
	void M_SetCloudy_CloudDarkColorCurve(const class UCurveLinearColor*& value);

	//class UCurveFloat*	StarsIntensityCurve;		//Offset: 800	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetStarsIntensityCurve() const;
	class UCurveFloat** M_PtrGetStarsIntensityCurve();
	void M_SetStarsIntensityCurve(const class UCurveFloat*& value);

	//float	CloudPhase;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudPhase() const;
	float* M_PtrGetCloudPhase();
	void M_SetCloudPhase(const float& value);

	//float	MoonScale;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonScale() const;
	float* M_PtrGetMoonScale();
	void M_SetMoonScale(const float& value);

	//float	MoonInclination;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonInclination() const;
	float* M_PtrGetMoonInclination();
	void M_SetMoonInclination(const float& value);

	//float	MoonPhase;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonPhase() const;
	float* M_PtrGetMoonPhase();
	void M_SetMoonPhase(const float& value);

	//float	MoonIntensity;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonIntensity() const;
	float* M_PtrGetMoonIntensity();
	void M_SetMoonIntensity(const float& value);

	//float	SunAngle;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunAngle() const;
	float* M_PtrGetSunAngle();
	void M_SetSunAngle(const float& value);

	//class UCurveFloat*	MoonPositionCurve;		//Offset: 832	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetMoonPositionCurve() const;
	class UCurveFloat** M_PtrGetMoonPositionCurve();
	void M_SetMoonPositionCurve(const class UCurveFloat*& value);

	//float	CloudDensity_Target;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudDensity_Target() const;
	float* M_PtrGetCloudDensity_Target();
	void M_SetCloudDensity_Target(const float& value);

	//float	CloudDensityChangeSpeed;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudDensityChangeSpeed() const;
	float* M_PtrGetCloudDensityChangeSpeed();
	void M_SetCloudDensityChangeSpeed(const float& value);

	//float	Overall_Intensity;		//Offset: 848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetOverall_Intensity() const;
	float* M_PtrGetOverall_Intensity();
	void M_SetOverall_Intensity(const float& value);

	//float	SunBrightness;		//Offset: 852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunBrightness() const;
	float* M_PtrGetSunBrightness();
	void M_SetSunBrightness(const float& value);

	//struct FLinearColor	MoonColor;		//Offset: 856	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetMoonColor() const;
	struct FLinearColor* M_PtrGetMoonColor();
	void M_SetMoonColor(const struct FLinearColor& value);

	//float	CloudOpacity_Target;		//Offset: 872	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudOpacity_Target() const;
	float* M_PtrGetCloudOpacity_Target();
	void M_SetCloudOpacity_Target(const float& value);

	//float	FogDensity_Target;		//Offset: 876	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFogDensity_Target() const;
	float* M_PtrGetFogDensity_Target();
	void M_SetFogDensity_Target(const float& value);

	//float	WindIntensity_Target;		//Offset: 880	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindIntensity_Target() const;
	float* M_PtrGetWindIntensity_Target();
	void M_SetWindIntensity_Target(const float& value);

	//float	WindDirection_Target;		//Offset: 884	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindDirection_Target() const;
	float* M_PtrGetWindDirection_Target();
	void M_SetWindDirection_Target(const float& value);

	//float	ShineVariation;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetShineVariation() const;
	float* M_PtrGetShineVariation();
	void M_SetShineVariation(const float& value);

	//float	SunLightingIntensity;		//Offset: 892	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunLightingIntensity() const;
	float* M_PtrGetSunLightingIntensity();
	void M_SetSunLightingIntensity(const float& value);

	//class UCurveFloat*	SunHighlightRadius_curve;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSunHighlightRadius_curve() const;
	class UCurveFloat** M_PtrGetSunHighlightRadius_curve();
	void M_SetSunHighlightRadius_curve(const class UCurveFloat*& value);

	//TAssetPtr<class UMaterialInterface>	CloudShadows;		//Offset: 904	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UMaterialInterface> M_GetCloudShadows() const;
	TAssetPtr<class UMaterialInterface>* M_PtrGetCloudShadows();
	void M_SetCloudShadows(const TAssetPtr<class UMaterialInterface>& value);

	//class UMaterialInstanceDynamic*	CloudShadowsMID;		//Offset: 944	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMaterialInstanceDynamic* M_GetCloudShadowsMID() const;
	class UMaterialInstanceDynamic** M_PtrGetCloudShadowsMID();
	void M_SetCloudShadowsMID(const class UMaterialInstanceDynamic*& value);

	//float	SunHighlightRadius;		//Offset: 952	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunHighlightRadius() const;
	float* M_PtrGetSunHighlightRadius();
	void M_SetSunHighlightRadius(const float& value);

	//struct FLinearColor	Cloudy_MoonColor;		//Offset: 956	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetCloudy_MoonColor() const;
	struct FLinearColor* M_PtrGetCloudy_MoonColor();
	void M_SetCloudy_MoonColor(const struct FLinearColor& value);

	//float	Stars_Intensity;		//Offset: 972	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStars_Intensity() const;
	float* M_PtrGetStars_Intensity();
	void M_SetStars_Intensity(const float& value);

	//struct FLinearColor	Stars_Color;		//Offset: 976	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetStars_Color() const;
	struct FLinearColor* M_PtrGetStars_Color();
	void M_SetStars_Color(const struct FLinearColor& value);

	//float	MoonOrbitOffset;		//Offset: 992	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonOrbitOffset() const;
	float* M_PtrGetMoonOrbitOffset();
	void M_SetMoonOrbitOffset(const float& value);

	//struct FRotator	SunRotation;		//Offset: 996	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FRotator M_GetSunRotation() const;
	struct FRotator* M_PtrGetSunRotation();
	void M_SetSunRotation(const struct FRotator& value);

	//float	SunRadius;		//Offset: 1008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunRadius() const;
	float* M_PtrGetSunRadius();
	void M_SetSunRadius(const float& value);

	//bool	UseCloudShadows;		//Offset: 1012	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseCloudShadows() const;
	bool* M_PtrGetUseCloudShadows();
	void M_SetUseCloudShadows(const bool& value);

	//float	CloudShadowsScale;		//Offset: 1016	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudShadowsScale() const;
	float* M_PtrGetCloudShadowsScale();
	void M_SetCloudShadowsScale(const float& value);

	//float	CloudShadowsIntensity;		//Offset: 1020	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudShadowsIntensity() const;
	float* M_PtrGetCloudShadowsIntensity();
	void M_SetCloudShadowsIntensity(const float& value);

	//class ADirectionalLight*	Moon_Light;		//Offset: 1024	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ADirectionalLight* M_GetMoon_Light() const;
	class ADirectionalLight** M_PtrGetMoon_Light();
	void M_SetMoon_Light(const class ADirectionalLight*& value);

	//float	MoonlightIntensity;		//Offset: 1032	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonlightIntensity() const;
	float* M_PtrGetMoonlightIntensity();
	void M_SetMoonlightIntensity(const float& value);

	//float	StarsSpeed;		//Offset: 1036	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStarsSpeed() const;
	float* M_PtrGetStarsSpeed();
	void M_SetStarsSpeed(const float& value);

	//TArray<float>	SunInclination;		//Offset: 1040	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float> M_GetSunInclination() const;
	TArray<float>* M_PtrGetSunInclination();
	void M_SetSunInclination(const TArray<float>& value);

	//float	SunYaw;		//Offset: 1056	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunYaw() const;
	float* M_PtrGetSunYaw();
	void M_SetSunYaw(const float& value);

	//float	MoonRotation;		//Offset: 1060	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonRotation() const;
	float* M_PtrGetMoonRotation();
	void M_SetMoonRotation(const float& value);

	//class UTexture2D*	CustomMoonTexture;		//Offset: 1064	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTexture2D* M_GetCustomMoonTexture() const;
	class UTexture2D** M_PtrGetCustomMoonTexture();
	void M_SetCustomMoonTexture(const class UTexture2D*& value);

	//bool	UseCustomMoonTexture;		//Offset: 1072	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseCustomMoonTexture() const;
	bool* M_PtrGetUseCustomMoonTexture();
	void M_SetUseCustomMoonTexture(const bool& value);

	//class ASkyLight*	SkyLight;		//Offset: 1080	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ASkyLight* M_GetSkyLight() const;
	class ASkyLight** M_PtrGetSkyLight();
	void M_SetSkyLight(const class ASkyLight*& value);

	//class UCurveFloat*	NightFilterCurve;		//Offset: 1088	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetNightFilterCurve() const;
	class UCurveFloat** M_PtrGetNightFilterCurve();
	void M_SetNightFilterCurve(const class UCurveFloat*& value);

	//float	Night_brightness;		//Offset: 1096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNight_brightness() const;
	float* M_PtrGetNight_brightness();
	void M_SetNight_brightness(const float& value);

	//float	MoonGlowIntensity;		//Offset: 1100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonGlowIntensity() const;
	float* M_PtrGetMoonGlowIntensity();
	void M_SetMoonGlowIntensity(const float& value);

	//class UCurveFloat*	Directional_Intensity_Curve;		//Offset: 1104	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetDirectional_Intensity_Curve() const;
	class UCurveFloat** M_PtrGetDirectional_Intensity_Curve();
	void M_SetDirectional_Intensity_Curve(const class UCurveFloat*& value);

	//float	Sun_Light_Intensity;		//Offset: 1112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Light_Intensity() const;
	float* M_PtrGetSun_Light_Intensity();
	void M_SetSun_Light_Intensity(const float& value);

	//TAssetPtr<class UTexture>	CloudsBaseTexture;		//Offset: 1120	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UTexture> M_GetCloudsBaseTexture() const;
	TAssetPtr<class UTexture>* M_PtrGetCloudsBaseTexture();
	void M_SetCloudsBaseTexture(const TAssetPtr<class UTexture>& value);

	//class UTexture*	CloudsBaseTextureReference;		//Offset: 1160	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTexture* M_GetCloudsBaseTextureReference() const;
	class UTexture** M_PtrGetCloudsBaseTextureReference();
	void M_SetCloudsBaseTextureReference(const class UTexture*& value);

	//float	CloudTiling;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudTiling() const;
	float* M_PtrGetCloudTiling();
	void M_SetCloudTiling(const float& value);

	//float	WindDirection;		//Offset: 1172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindDirection() const;
	float* M_PtrGetWindDirection();
	void M_SetWindDirection(const float& value);

	//float	CloudHeight1;		//Offset: 1176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudHeight1() const;
	float* M_PtrGetCloudHeight1();
	void M_SetCloudHeight1(const float& value);

	//float	CloudHeight2;		//Offset: 1180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudHeight2() const;
	float* M_PtrGetCloudHeight2();
	void M_SetCloudHeight2(const float& value);

	//float	MoonAngle;		//Offset: 1184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonAngle() const;
	float* M_PtrGetMoonAngle();
	void M_SetMoonAngle(const float& value);

	//float	Sun_Volumetric_Scattering_Intensity;		//Offset: 1188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Volumetric_Scattering_Intensity() const;
	float* M_PtrGetSun_Volumetric_Scattering_Intensity();
	void M_SetSun_Volumetric_Scattering_Intensity(const float& value);

	//float	Moon_Volumetric_Scattering_Intensity;		//Offset: 1192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Volumetric_Scattering_Intensity() const;
	float* M_PtrGetMoon_Volumetric_Scattering_Intensity();
	void M_SetMoon_Volumetric_Scattering_Intensity(const float& value);

	//float	StarsPhase;		//Offset: 1196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStarsPhase() const;
	float* M_PtrGetStarsPhase();
	void M_SetStarsPhase(const float& value);

	//float	TimeUpdateDelay;		//Offset: 1200	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeUpdateDelay() const;
	float* M_PtrGetTimeUpdateDelay();
	void M_SetTimeUpdateDelay(const float& value);

	//float	WorldTemperature;		//Offset: 1204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWorldTemperature() const;
	float* M_PtrGetWorldTemperature();
	void M_SetWorldTemperature(const float& value);

	//float	WorldTemperatureTarget;		//Offset: 1208	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWorldTemperatureTarget() const;
	float* M_PtrGetWorldTemperatureTarget();
	void M_SetWorldTemperatureTarget(const float& value);

	//float	WaterTemperature;		//Offset: 1212	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterTemperature() const;
	float* M_PtrGetWaterTemperature();
	void M_SetWaterTemperature(const float& value);

	//float	WaterTemperatureOffset;		//Offset: 1216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterTemperatureOffset() const;
	float* M_PtrGetWaterTemperatureOffset();
	void M_SetWaterTemperatureOffset(const float& value);

	//float	TimeOfDay;		//Offset: 1220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeOfDay() const;
	float* M_PtrGetTimeOfDay();
	void M_SetTimeOfDay(const float& value);

	//float	TimeOfMonth;		//Offset: 1224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeOfMonth() const;
	float* M_PtrGetTimeOfMonth();
	void M_SetTimeOfMonth(const float& value);

	//class UCurveFloat*	SkyLightIntensity;		//Offset: 1232	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSkyLightIntensity() const;
	class UCurveFloat** M_PtrGetSkyLightIntensity();
	void M_SetSkyLightIntensity(const class UCurveFloat*& value);

	//TAssetPtr<class FStartPrecipitation__DelegateSignature>	StartPrecipitation;		//Offset: 1240	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FStartPrecipitation__DelegateSignature> M_GetStartPrecipitation() const;
	TAssetPtr<class FStartPrecipitation__DelegateSignature>* M_PtrGetStartPrecipitation();
	void M_SetStartPrecipitation(const TAssetPtr<class FStartPrecipitation__DelegateSignature>& value);

	//TAssetPtr<class FStopPrecipitation__DelegateSignature>	StopPrecipitation;		//Offset: 1256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FStopPrecipitation__DelegateSignature> M_GetStopPrecipitation() const;
	TAssetPtr<class FStopPrecipitation__DelegateSignature>* M_PtrGetStopPrecipitation();
	void M_SetStopPrecipitation(const TAssetPtr<class FStopPrecipitation__DelegateSignature>& value);

	//class UCurveFloat*	SkyLightIntensity_LowQuality;		//Offset: 1272	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSkyLightIntensity_LowQuality() const;
	class UCurveFloat** M_PtrGetSkyLightIntensity_LowQuality();
	void M_SetSkyLightIntensity_LowQuality(const class UCurveFloat*& value);

	//class UCurveFloat*	FogHeightCurve;		//Offset: 1280	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetFogHeightCurve() const;
	class UCurveFloat** M_PtrGetFogHeightCurve();
	void M_SetFogHeightCurve(const class UCurveFloat*& value);

	//bool	Precipitation;		//Offset: 1288	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPrecipitation() const;
	bool* M_PtrGetPrecipitation();
	void M_SetPrecipitation(const bool& value);

	//float	FogDensityChangeSpeed;		//Offset: 1292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFogDensityChangeSpeed() const;
	float* M_PtrGetFogDensityChangeSpeed();
	void M_SetFogDensityChangeSpeed(const float& value);

	//float	WindIntensityChangeSpeed;		//Offset: 1296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindIntensityChangeSpeed() const;
	float* M_PtrGetWindIntensityChangeSpeed();
	void M_SetWindIntensityChangeSpeed(const float& value);

	//class UGI_MedievalDynasty_C*	GameInstanceReference;		//Offset: 1304	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstanceReference() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstanceReference();
	void M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value);

	//TAssetPtr<class UMaterialInterface>	Source_Material;		//Offset: 1312	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UMaterialInterface> M_GetSource_Material() const;
	TAssetPtr<class UMaterialInterface>* M_PtrGetSource_Material();
	void M_SetSource_Material(const TAssetPtr<class UMaterialInterface>& value);

	//bool	Cave;		//Offset: 1352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCave() const;
	bool* M_PtrGetCave();
	void M_SetCave(const bool& value);

	//bool	UseVolumetricFog;		//Offset: 1353	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseVolumetricFog() const;
	bool* M_PtrGetUseVolumetricFog();
	void M_SetUseVolumetricFog(const bool& value);

	//float	SkyLightIntensityTarget;		//Offset: 1356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkyLightIntensityTarget() const;
	float* M_PtrGetSkyLightIntensityTarget();
	void M_SetSkyLightIntensityTarget(const float& value);

	//float	CurrentSkyLightIntensity;		//Offset: 1360	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentSkyLightIntensity() const;
	float* M_PtrGetCurrentSkyLightIntensity();
	void M_SetCurrentSkyLightIntensity(const float& value);

	//float	ExtendDawnAndDusk;		//Offset: 1364	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetExtendDawnAndDusk() const;
	float* M_PtrGetExtendDawnAndDusk();
	void M_SetExtendDawnAndDusk(const float& value);

	//TArray<float>	DawnTimes;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float> M_GetDawnTimes() const;
	TArray<float>* M_PtrGetDawnTimes();
	void M_SetDawnTimes(const TArray<float>& value);

	//TArray<float>	DustTimes;		//Offset: 1384	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float> M_GetDustTimes() const;
	TArray<float>* M_PtrGetDustTimes();
	void M_SetDustTimes(const TArray<float>& value);

	//float	InternalTimeOfDay;		//Offset: 1400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInternalTimeOfDay() const;
	float* M_PtrGetInternalTimeOfDay();
	void M_SetInternalTimeOfDay(const float& value);

	//float	MoonVerticalOffset;		//Offset: 1404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonVerticalOffset() const;
	float* M_PtrGetMoonVerticalOffset();
	void M_SetMoonVerticalOffset(const float& value);

	//int32_t	Season;		//Offset: 1408	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSeason() const;
	int32_t* M_PtrGetSeason();
	void M_SetSeason(const int32_t& value);

	//int32_t	TimeUpdateQuality;		//Offset: 1412	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTimeUpdateQuality() const;
	int32_t* M_PtrGetTimeUpdateQuality();
	void M_SetTimeUpdateQuality(const int32_t& value);

	//struct FLinearColor	CurrentSunColor;		//Offset: 1416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetCurrentSunColor() const;
	struct FLinearColor* M_PtrGetCurrentSunColor();
	void M_SetCurrentSunColor(const struct FLinearColor& value);

	//float	TemperatureChangeSpeed;		//Offset: 1432	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTemperatureChangeSpeed() const;
	float* M_PtrGetTemperatureChangeSpeed();
	void M_SetTemperatureChangeSpeed(const float& value);

	//int32_t	WorldTemperatureRep;		//Offset: 1436	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWorldTemperatureRep() const;
	int32_t* M_PtrGetWorldTemperatureRep();
	void M_SetWorldTemperatureRep(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherManager.BP_WeatherManager_C");
		return ptr;
	}

#pragma region Functions
	void StartPrecipitation__DelegateSignature(int32_t Season, float Intensity);

	void StopPrecipitation__DelegateSignature();

	void ExecuteUbergraph_BP_WeatherManager(int32_t EntryPoint);

	void UpdateInternalTimeOfDay(struct FST_Time Time);

	void UpdateLightsRotation(bool Instantly);

	void SetTimeDelay(float TimeDelay);

	void SetInCave(bool InCave);

	void InstantlyUpdateWeather(struct FST_Time Time, bool RandomWeather, int32_t DayVariation, bool RandomCloudDensity);

	void UpdateWeatherManager(struct FST_Time Time);

	void UpdateGraphicsSettings();

	void ReceiveBeginPlay();

	void UserConstructionScript();

	void SetSolarAngle(bool Instantly);

	void UpdateMaterialVariables();

	void UpdateTime(const struct FST_Time& Time);

	void RandomWeather();

	void InitMainWeatherParameters(bool RandomCloudDensity);

	void UpdateMaterialCollection();

	void SetSunAngle(float Sun_Angle);

	void SetSunlightIntensity(float Sun_Light_Intensity);

	void LoadData(class USAVE_Game_C* SaveReference, bool* Success);

	void SaveData(class USAVE_Game_C* SaveReference, bool* Success);

	void CalculateTimeBasedParams();

	void OnRep_WeatherVariation();

	void DebugWeatherPreset();

	void OnRep_Season();

	void SetWorldTemperature(float WorldTemperature);

	void UpdateSeasonMPC(int32_t Season);

	void GetWindIntensityChangeSpeed(float* Value);

	void GetWindDirectionChangeSpeed(float* Value);

	float GetTemperatureChangeSpeed();

	float GetCloudDensityChangeSpeed();

	float GetCloudOpacityChangeSpeed();

	float GetFogDensityChangeSpeed();

	void UpdateInternalTime(int32_t Season);

	void GetWorldTemperature(float* Temperature);

	void GetWindIntensity(float* Intensity);

	void GetPrecipitationIntensity(float* Intensity);

	void GetCloudDensity(float* Density);

	void IsInCave(bool* Value);

	void GetWeatherVariation(int32_t* Value);

	void GetWaterTemperature(float* Temperature);

	void GetSunColor(struct FLinearColor* Color);

	void GetTimeOfDay(float* Value);

	void InheritableComponentHandler();

#pragma endregion
};
};