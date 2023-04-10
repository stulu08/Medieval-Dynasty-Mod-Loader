#pragma once
#include "Structs.h"
#include "BP_MasterManager/BP_MasterManager_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_WeatherManager.BP_WeatherManager_C
// Super: BlueprintGeneratedClass BP_MasterManager.BP_MasterManager_C
// Size: 1448
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

	//class UNiagaraComponent*	Fog;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UNiagaraComponent* M_GetFog() const;
	class UNiagaraComponent** M_PtrGetFog();
	void M_SetFog(const class UNiagaraComponent*& value);

	//class UArrowComponent*	Moon_Root;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetMoon_Root() const;
	class UArrowComponent** M_PtrGetMoon_Root();
	void M_SetMoon_Root(const class UArrowComponent*& value);

	//class UArrowComponent*	Sun_Root;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetSun_Root() const;
	class UArrowComponent** M_PtrGetSun_Root();
	void M_SetSun_Root(const class UArrowComponent*& value);

	//class UStaticMeshComponent*	Ultra_Dynamic_Sky_Sphere;		//Offset: 584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UStaticMeshComponent* M_GetUltra_Dynamic_Sky_Sphere() const;
	class UStaticMeshComponent** M_PtrGetUltra_Dynamic_Sky_Sphere();
	void M_SetUltra_Dynamic_Sky_Sphere(const class UStaticMeshComponent*& value);

	//class ADirectionalLight*	Sun_Light;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ADirectionalLight* M_GetSun_Light() const;
	class ADirectionalLight** M_PtrGetSun_Light();
	void M_SetSun_Light(const class ADirectionalLight*& value);

	//class UMaterialInstanceDynamic*	Sky_MID;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMaterialInstanceDynamic* M_GetSky_MID() const;
	class UMaterialInstanceDynamic** M_PtrGetSky_MID();
	void M_SetSky_MID(const class UMaterialInstanceDynamic*& value);

	//bool	Refresh_Settings;		//Offset: 608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetRefresh_Settings() const;
	bool* M_PtrGetRefresh_Settings();
	void M_SetRefresh_Settings(const bool& value);

	//float	CloudSpeed;		//Offset: 612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudSpeed() const;
	float* M_PtrGetCloudSpeed();
	void M_SetCloudSpeed(const float& value);

	//float	CloudDensity;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudDensity() const;
	float* M_PtrGetCloudDensity();
	void M_SetCloudDensity(const float& value);

	//float	CloudOpacity;		//Offset: 620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudOpacity() const;
	float* M_PtrGetCloudOpacity();
	void M_SetCloudOpacity(const float& value);

	//float	FogDensity;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFogDensity() const;
	float* M_PtrGetFogDensity();
	void M_SetFogDensity(const float& value);

	//float	WindIntensity;		//Offset: 628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindIntensity() const;
	float* M_PtrGetWindIntensity();
	void M_SetWindIntensity(const float& value);

	//float	PrecipitationIntensity;		//Offset: 632	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPrecipitationIntensity() const;
	float* M_PtrGetPrecipitationIntensity();
	void M_SetPrecipitationIntensity(const float& value);

	//float	Cloud_Wisps_Opacity;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloud_Wisps_Opacity() const;
	float* M_PtrGetCloud_Wisps_Opacity();
	void M_SetCloud_Wisps_Opacity(const float& value);

	//TArray<class UCurveLinearColor*>	HorizonBaseColorCurves;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetHorizonBaseColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetHorizonBaseColorCurves();
	void M_SetHorizonBaseColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	ZenithBaseColorCurves;		//Offset: 656	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetZenithBaseColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetZenithBaseColorCurves();
	void M_SetZenithBaseColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	CloudLightColorCurves;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetCloudLightColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetCloudLightColorCurves();
	void M_SetCloudLightColorCurves(const TArray<class UCurveLinearColor*>& value);

	//TArray<class UCurveLinearColor*>	CloudDarkColorCurves;		//Offset: 688	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetCloudDarkColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetCloudDarkColorCurves();
	void M_SetCloudDarkColorCurves(const TArray<class UCurveLinearColor*>& value);

	//bool	SunIntensityCorrection;		//Offset: 704	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetSunIntensityCorrection() const;
	bool* M_PtrGetSunIntensityCorrection();
	void M_SetSunIntensityCorrection(const bool& value);

	//int32_t	WeatherVariation;		//Offset: 708	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWeatherVariation() const;
	int32_t* M_PtrGetWeatherVariation();
	void M_SetWeatherVariation(const int32_t& value);

	//TArray<class UCurveLinearColor*>	SunColorCurves;		//Offset: 712	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveLinearColor*> M_GetSunColorCurves() const;
	TArray<class UCurveLinearColor*>* M_PtrGetSunColorCurves();
	void M_SetSunColorCurves(const TArray<class UCurveLinearColor*>& value);

	//class UCurveFloat*	Shine_Intensity_Curve;		//Offset: 728	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetShine_Intensity_Curve() const;
	class UCurveFloat** M_PtrGetShine_Intensity_Curve();
	void M_SetShine_Intensity_Curve(const class UCurveFloat*& value);

	//struct FST_Time	Time;		//Offset: 736	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetTime() const;
	struct FST_Time* M_PtrGetTime();
	void M_SetTime(const struct FST_Time& value);

	//float	Saturation;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSaturation() const;
	float* M_PtrGetSaturation();
	void M_SetSaturation(const float& value);

	//class UCurveFloat*	Sun_Intensity_Curve;		//Offset: 768	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSun_Intensity_Curve() const;
	class UCurveFloat** M_PtrGetSun_Intensity_Curve();
	void M_SetSun_Intensity_Curve(const class UCurveFloat*& value);

	//class UCurveLinearColor*	Cloudy_SunColorCurve;		//Offset: 776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_SunColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_SunColorCurve();
	void M_SetCloudy_SunColorCurve(const class UCurveLinearColor*& value);

	//class AExponentialHeightFog*	Exponential_Height_Fog;		//Offset: 784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AExponentialHeightFog* M_GetExponential_Height_Fog() const;
	class AExponentialHeightFog** M_PtrGetExponential_Height_Fog();
	void M_SetExponential_Height_Fog(const class AExponentialHeightFog*& value);

	//class UCurveLinearColor*	Cloudy_CloudLightColorCurve;		//Offset: 792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_CloudLightColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_CloudLightColorCurve();
	void M_SetCloudy_CloudLightColorCurve(const class UCurveLinearColor*& value);

	//class UCurveLinearColor*	Cloudy_CloudDarkColorCurve;		//Offset: 800	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveLinearColor* M_GetCloudy_CloudDarkColorCurve() const;
	class UCurveLinearColor** M_PtrGetCloudy_CloudDarkColorCurve();
	void M_SetCloudy_CloudDarkColorCurve(const class UCurveLinearColor*& value);

	//class UCurveFloat*	Stars_Intensity_Curve;		//Offset: 808	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetStars_Intensity_Curve() const;
	class UCurveFloat** M_PtrGetStars_Intensity_Curve();
	void M_SetStars_Intensity_Curve(const class UCurveFloat*& value);

	//float	CloudPhase;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudPhase() const;
	float* M_PtrGetCloudPhase();
	void M_SetCloudPhase(const float& value);

	//float	Moon_Scale;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Scale() const;
	float* M_PtrGetMoon_Scale();
	void M_SetMoon_Scale(const float& value);

	//float	Moon_Inclination;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Inclination() const;
	float* M_PtrGetMoon_Inclination();
	void M_SetMoon_Inclination(const float& value);

	//float	Moon_Phase;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Phase() const;
	float* M_PtrGetMoon_Phase();
	void M_SetMoon_Phase(const float& value);

	//float	Moon_Intensity;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Intensity() const;
	float* M_PtrGetMoon_Intensity();
	void M_SetMoon_Intensity(const float& value);

	//float	Sun_Angle;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Angle() const;
	float* M_PtrGetSun_Angle();
	void M_SetSun_Angle(const float& value);

	//class UCurveFloat*	Moon_Position_Curve;		//Offset: 840	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetMoon_Position_Curve() const;
	class UCurveFloat** M_PtrGetMoon_Position_Curve();
	void M_SetMoon_Position_Curve(const class UCurveFloat*& value);

	//float	CloudDensity_Target;		//Offset: 848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudDensity_Target() const;
	float* M_PtrGetCloudDensity_Target();
	void M_SetCloudDensity_Target(const float& value);

	//float	Cloud_Density_Change_Speed;		//Offset: 852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloud_Density_Change_Speed() const;
	float* M_PtrGetCloud_Density_Change_Speed();
	void M_SetCloud_Density_Change_Speed(const float& value);

	//float	Overall_Intensity;		//Offset: 856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetOverall_Intensity() const;
	float* M_PtrGetOverall_Intensity();
	void M_SetOverall_Intensity(const float& value);

	//float	Sun_Brightness;		//Offset: 860	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Brightness() const;
	float* M_PtrGetSun_Brightness();
	void M_SetSun_Brightness(const float& value);

	//struct FLinearColor	Moon_Color;		//Offset: 864	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetMoon_Color() const;
	struct FLinearColor* M_PtrGetMoon_Color();
	void M_SetMoon_Color(const struct FLinearColor& value);

	//float	CloudOpacity_Target;		//Offset: 880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudOpacity_Target() const;
	float* M_PtrGetCloudOpacity_Target();
	void M_SetCloudOpacity_Target(const float& value);

	//float	FogDensity_Target;		//Offset: 884	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFogDensity_Target() const;
	float* M_PtrGetFogDensity_Target();
	void M_SetFogDensity_Target(const float& value);

	//float	WindIntensity_Target;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindIntensity_Target() const;
	float* M_PtrGetWindIntensity_Target();
	void M_SetWindIntensity_Target(const float& value);

	//float	WindDirection_Target;		//Offset: 892	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWindDirection_Target() const;
	float* M_PtrGetWindDirection_Target();
	void M_SetWindDirection_Target(const float& value);

	//float	Shine_Variation;		//Offset: 896	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetShine_Variation() const;
	float* M_PtrGetShine_Variation();
	void M_SetShine_Variation(const float& value);

	//float	SunLightingIntensity;		//Offset: 900	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSunLightingIntensity() const;
	float* M_PtrGetSunLightingIntensity();
	void M_SetSunLightingIntensity(const float& value);

	//class UCurveFloat*	Sun_Highlight_Radius_curve;		//Offset: 904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSun_Highlight_Radius_curve() const;
	class UCurveFloat** M_PtrGetSun_Highlight_Radius_curve();
	void M_SetSun_Highlight_Radius_curve(const class UCurveFloat*& value);

	//TAssetPtr<class UMaterialInterface>	CloudShadows;		//Offset: 912	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UMaterialInterface> M_GetCloudShadows() const;
	TAssetPtr<class UMaterialInterface>* M_PtrGetCloudShadows();
	void M_SetCloudShadows(const TAssetPtr<class UMaterialInterface>& value);

	//class UMaterialInstanceDynamic*	Cloud_Shadows_MID;		//Offset: 952	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMaterialInstanceDynamic* M_GetCloud_Shadows_MID() const;
	class UMaterialInstanceDynamic** M_PtrGetCloud_Shadows_MID();
	void M_SetCloud_Shadows_MID(const class UMaterialInstanceDynamic*& value);

	//float	Sun_Highlight_Radius;		//Offset: 960	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Highlight_Radius() const;
	float* M_PtrGetSun_Highlight_Radius();
	void M_SetSun_Highlight_Radius(const float& value);

	//struct FLinearColor	Cloudy_MoonColor;		//Offset: 964	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetCloudy_MoonColor() const;
	struct FLinearColor* M_PtrGetCloudy_MoonColor();
	void M_SetCloudy_MoonColor(const struct FLinearColor& value);

	//float	Stars_Intensity;		//Offset: 980	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStars_Intensity() const;
	float* M_PtrGetStars_Intensity();
	void M_SetStars_Intensity(const float& value);

	//struct FLinearColor	Stars_Color;		//Offset: 984	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetStars_Color() const;
	struct FLinearColor* M_PtrGetStars_Color();
	void M_SetStars_Color(const struct FLinearColor& value);

	//float	Moon_Orbit_Offset;		//Offset: 1000	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Orbit_Offset() const;
	float* M_PtrGetMoon_Orbit_Offset();
	void M_SetMoon_Orbit_Offset(const float& value);

	//struct FRotator	Sun_Rotation;		//Offset: 1004	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FRotator M_GetSun_Rotation() const;
	struct FRotator* M_PtrGetSun_Rotation();
	void M_SetSun_Rotation(const struct FRotator& value);

	//float	Sun_Radius;		//Offset: 1016	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Radius() const;
	float* M_PtrGetSun_Radius();
	void M_SetSun_Radius(const float& value);

	//bool	UseCloudShadows;		//Offset: 1020	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseCloudShadows() const;
	bool* M_PtrGetUseCloudShadows();
	void M_SetUseCloudShadows(const bool& value);

	//float	CloudShadowsScale;		//Offset: 1024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudShadowsScale() const;
	float* M_PtrGetCloudShadowsScale();
	void M_SetCloudShadowsScale(const float& value);

	//float	CloudShadowsIntensity;		//Offset: 1028	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCloudShadowsIntensity() const;
	float* M_PtrGetCloudShadowsIntensity();
	void M_SetCloudShadowsIntensity(const float& value);

	//class ADirectionalLight*	Moon_Light;		//Offset: 1032	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ADirectionalLight* M_GetMoon_Light() const;
	class ADirectionalLight** M_PtrGetMoon_Light();
	void M_SetMoon_Light(const class ADirectionalLight*& value);

	//float	Moonlight_Intensity;		//Offset: 1040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoonlight_Intensity() const;
	float* M_PtrGetMoonlight_Intensity();
	void M_SetMoonlight_Intensity(const float& value);

	//float	Stars_Speed;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStars_Speed() const;
	float* M_PtrGetStars_Speed();
	void M_SetStars_Speed(const float& value);

	//float	Sun_Inclination;		//Offset: 1048	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Inclination() const;
	float* M_PtrGetSun_Inclination();
	void M_SetSun_Inclination(const float& value);

	//float	Sun_Yaw;		//Offset: 1052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Yaw() const;
	float* M_PtrGetSun_Yaw();
	void M_SetSun_Yaw(const float& value);

	//float	Moon_Rotation;		//Offset: 1056	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Rotation() const;
	float* M_PtrGetMoon_Rotation();
	void M_SetMoon_Rotation(const float& value);

	//class UTexture2D*	Custom_Moon_Texture;		//Offset: 1064	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTexture2D* M_GetCustom_Moon_Texture() const;
	class UTexture2D** M_PtrGetCustom_Moon_Texture();
	void M_SetCustom_Moon_Texture(const class UTexture2D*& value);

	//bool	Use_Custom_Moon_Texture;		//Offset: 1072	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUse_Custom_Moon_Texture() const;
	bool* M_PtrGetUse_Custom_Moon_Texture();
	void M_SetUse_Custom_Moon_Texture(const bool& value);

	//class ASkyLight*	SkyLight;		//Offset: 1080	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ASkyLight* M_GetSkyLight() const;
	class ASkyLight** M_PtrGetSkyLight();
	void M_SetSkyLight(const class ASkyLight*& value);

	//class UCurveFloat*	Night_Filter_Curve;		//Offset: 1088	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetNight_Filter_Curve() const;
	class UCurveFloat** M_PtrGetNight_Filter_Curve();
	void M_SetNight_Filter_Curve(const class UCurveFloat*& value);

	//float	Night_brightness;		//Offset: 1096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNight_brightness() const;
	float* M_PtrGetNight_brightness();
	void M_SetNight_brightness(const float& value);

	//float	Moon_Glow_Intensity;		//Offset: 1100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Glow_Intensity() const;
	float* M_PtrGetMoon_Glow_Intensity();
	void M_SetMoon_Glow_Intensity(const float& value);

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

	//float	Moon_Angle;		//Offset: 1184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Angle() const;
	float* M_PtrGetMoon_Angle();
	void M_SetMoon_Angle(const float& value);

	//float	Sun_Volumetric_Scattering_Intensity;		//Offset: 1188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSun_Volumetric_Scattering_Intensity() const;
	float* M_PtrGetSun_Volumetric_Scattering_Intensity();
	void M_SetSun_Volumetric_Scattering_Intensity(const float& value);

	//float	Moon_Volumetric_Scattering_Intensity;		//Offset: 1192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Volumetric_Scattering_Intensity() const;
	float* M_PtrGetMoon_Volumetric_Scattering_Intensity();
	void M_SetMoon_Volumetric_Scattering_Intensity(const float& value);

	//float	Stars_Phase;		//Offset: 1196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStars_Phase() const;
	float* M_PtrGetStars_Phase();
	void M_SetStars_Phase(const float& value);

	//float	TimeUpdateDelay;		//Offset: 1200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeUpdateDelay() const;
	float* M_PtrGetTimeUpdateDelay();
	void M_SetTimeUpdateDelay(const float& value);

	//float	WorldTemperature;		//Offset: 1204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWorldTemperature() const;
	float* M_PtrGetWorldTemperature();
	void M_SetWorldTemperature(const float& value);

	//float	WaterTemperature;		//Offset: 1208	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterTemperature() const;
	float* M_PtrGetWaterTemperature();
	void M_SetWaterTemperature(const float& value);

	//TArray<class UCurveFloat*>	Air_TemperatureCurve;		//Offset: 1216	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveFloat*> M_GetAir_TemperatureCurve() const;
	TArray<class UCurveFloat*>* M_PtrGetAir_TemperatureCurve();
	void M_SetAir_TemperatureCurve(const TArray<class UCurveFloat*>& value);

	//float	TimeOfDay;		//Offset: 1232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeOfDay() const;
	float* M_PtrGetTimeOfDay();
	void M_SetTimeOfDay(const float& value);

	//float	TimeOfMonth;		//Offset: 1236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeOfMonth() const;
	float* M_PtrGetTimeOfMonth();
	void M_SetTimeOfMonth(const float& value);

	//class UCurveFloat*	SkyLightIntensity;		//Offset: 1240	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSkyLightIntensity() const;
	class UCurveFloat** M_PtrGetSkyLightIntensity();
	void M_SetSkyLightIntensity(const class UCurveFloat*& value);

	//TAssetPtr<class FStartPrecipitation__DelegateSignature>	StartPrecipitation;		//Offset: 1248	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FStartPrecipitation__DelegateSignature> M_GetStartPrecipitation() const;
	TAssetPtr<class FStartPrecipitation__DelegateSignature>* M_PtrGetStartPrecipitation();
	void M_SetStartPrecipitation(const TAssetPtr<class FStartPrecipitation__DelegateSignature>& value);

	//TAssetPtr<class FStopPrecipitation__DelegateSignature>	StopPrecipitation;		//Offset: 1264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FStopPrecipitation__DelegateSignature> M_GetStopPrecipitation() const;
	TAssetPtr<class FStopPrecipitation__DelegateSignature>* M_PtrGetStopPrecipitation();
	void M_SetStopPrecipitation(const TAssetPtr<class FStopPrecipitation__DelegateSignature>& value);

	//class UCurveFloat*	SkyLightIntensity_LowQuality;		//Offset: 1280	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetSkyLightIntensity_LowQuality() const;
	class UCurveFloat** M_PtrGetSkyLightIntensity_LowQuality();
	void M_SetSkyLightIntensity_LowQuality(const class UCurveFloat*& value);

	//bool	Precipitation;		//Offset: 1288	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPrecipitation() const;
	bool* M_PtrGetPrecipitation();
	void M_SetPrecipitation(const bool& value);

	//float	Fog_Density_Change_Speed;		//Offset: 1292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFog_Density_Change_Speed() const;
	float* M_PtrGetFog_Density_Change_Speed();
	void M_SetFog_Density_Change_Speed(const float& value);

	//float	Wind_Intensity_Change_Speed;		//Offset: 1296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWind_Intensity_Change_Speed() const;
	float* M_PtrGetWind_Intensity_Change_Speed();
	void M_SetWind_Intensity_Change_Speed(const float& value);

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

	//float	TargetSkyLightIntensity;		//Offset: 1356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetSkyLightIntensity() const;
	float* M_PtrGetTargetSkyLightIntensity();
	void M_SetTargetSkyLightIntensity(const float& value);

	//float	CurrentSkyLightIntensity;		//Offset: 1360	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentSkyLightIntensity() const;
	float* M_PtrGetCurrentSkyLightIntensity();
	void M_SetCurrentSkyLightIntensity(const float& value);

	//float	Extend_Dawn_and_Dusk;		//Offset: 1364	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetExtend_Dawn_and_Dusk() const;
	float* M_PtrGetExtend_Dawn_and_Dusk();
	void M_SetExtend_Dawn_and_Dusk(const float& value);

	//TArray<float>	DawnTimes;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float> M_GetDawnTimes() const;
	TArray<float>* M_PtrGetDawnTimes();
	void M_SetDawnTimes(const TArray<float>& value);

	//TArray<float>	DustTimes;		//Offset: 1384	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float> M_GetDustTimes() const;
	TArray<float>* M_PtrGetDustTimes();
	void M_SetDustTimes(const TArray<float>& value);

	//float	Internal_Time_of_Day;		//Offset: 1400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInternal_Time_of_Day() const;
	float* M_PtrGetInternal_Time_of_Day();
	void M_SetInternal_Time_of_Day(const float& value);

	//float	Moon_Vertical_Offset;		//Offset: 1404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoon_Vertical_Offset() const;
	float* M_PtrGetMoon_Vertical_Offset();
	void M_SetMoon_Vertical_Offset(const float& value);

	//int32_t	Season;		//Offset: 1408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSeason() const;
	int32_t* M_PtrGetSeason();
	void M_SetSeason(const int32_t& value);

	//int32_t	TimeUpdateQuality;		//Offset: 1412	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTimeUpdateQuality() const;
	int32_t* M_PtrGetTimeUpdateQuality();
	void M_SetTimeUpdateQuality(const int32_t& value);

	//TArray<class UCurveFloat*>	Water_TemperatureCurve;		//Offset: 1416	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UCurveFloat*> M_GetWater_TemperatureCurve() const;
	TArray<class UCurveFloat*>* M_PtrGetWater_TemperatureCurve();
	void M_SetWater_TemperatureCurve(const TArray<class UCurveFloat*>& value);

	//struct FLinearColor	CurrentSunColor;		//Offset: 1432	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetCurrentSunColor() const;
	struct FLinearColor* M_PtrGetCurrentSunColor();
	void M_SetCurrentSunColor(const struct FLinearColor& value);

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

	void UpdateLightsRotation();

	void SetTimeDelay(float TimeDelay);

	void SetInCave(bool InCave);

	void InstantlyUpdateWeather(struct FST_Time Time, bool RandomWeather, int32_t DayVariation, bool RandomCloudDensity);

	void UpdateWeatherManager(struct FST_Time Time);

	void UpdateGraphicsSettings();

	void ReceiveBeginPlay();

	void UserConstructionScript();

	void Set_Solar_Angle();

	void UpdateMaterialVariables();

	void UpdateWorldTemperature();

	void UpdateTime(const struct FST_Time& Time);

	void RandomWeather();

	void InitMainWeatherParameters(bool RandomCloudDensity);

	void UpdateMaterialCollection();

	void SetSunAngle(float Sun_Angle);

	void SetSunlightIntensity(float Sun_Light_Intensity);

	void LoadData(class USAVE_Game_C* SaveReference, bool* Success);

	void SaveData(class USAVE_Game_C* SaveReference, bool* Success);

	void GetWorldTemperature(float* Temperature);

	void GetWindIntensity(float* Intensity);

	void GetPrecipitationIntensity(float* Intensity);

	void GetCloudDensity(float* Density);

	void IsInCave(bool* Value);

	void GetWeatherVariation(int32_t* Value);

	void GetWaterTemperature(float* Temperature);

	void GetSunColor(struct FLinearColor* Color);

	void InheritableComponentHandler();

#pragma endregion
};
};