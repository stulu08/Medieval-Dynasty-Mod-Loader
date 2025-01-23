#include "../SDK.h"
#include "BP_WeatherManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_WeatherManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 552);
}
struct FPointerToUberGraphFrame* ABP_WeatherManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 552);
}
void ABP_WeatherManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of Moon_Root
// Declaration: class UArrowComponent* Moon_Root
class UArrowComponent* ABP_WeatherManager_C::M_GetMoon_Root() const {
	return Read<class UArrowComponent*>((byte*)this + 560);
}
class UArrowComponent** ABP_WeatherManager_C::M_PtrGetMoon_Root() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 560);
}
void ABP_WeatherManager_C::M_SetMoon_Root(const class UArrowComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of Sun_Root
// Declaration: class UArrowComponent* Sun_Root
class UArrowComponent* ABP_WeatherManager_C::M_GetSun_Root() const {
	return Read<class UArrowComponent*>((byte*)this + 568);
}
class UArrowComponent** ABP_WeatherManager_C::M_PtrGetSun_Root() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 568);
}
void ABP_WeatherManager_C::M_SetSun_Root(const class UArrowComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of Ultra_Dynamic_Sky_Sphere
// Declaration: class UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere
class UStaticMeshComponent* ABP_WeatherManager_C::M_GetUltra_Dynamic_Sky_Sphere() const {
	return Read<class UStaticMeshComponent*>((byte*)this + 576);
}
class UStaticMeshComponent** ABP_WeatherManager_C::M_PtrGetUltra_Dynamic_Sky_Sphere() {
	return reinterpret_cast<class UStaticMeshComponent**>((byte*)this + 576);
}
void ABP_WeatherManager_C::M_SetUltra_Dynamic_Sky_Sphere(const class UStaticMeshComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of Sun_Light
// Declaration: class ADirectionalLight* Sun_Light
class ADirectionalLight* ABP_WeatherManager_C::M_GetSun_Light() const {
	return Read<class ADirectionalLight*>((byte*)this + 584);
}
class ADirectionalLight** ABP_WeatherManager_C::M_PtrGetSun_Light() {
	return reinterpret_cast<class ADirectionalLight**>((byte*)this + 584);
}
void ABP_WeatherManager_C::M_SetSun_Light(const class ADirectionalLight*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of Sky_MID
// Declaration: class UMaterialInstanceDynamic* Sky_MID
class UMaterialInstanceDynamic* ABP_WeatherManager_C::M_GetSky_MID() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 592);
}
class UMaterialInstanceDynamic** ABP_WeatherManager_C::M_PtrGetSky_MID() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 592);
}
void ABP_WeatherManager_C::M_SetSky_MID(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of Debug
// Declaration: bool Debug
bool ABP_WeatherManager_C::M_GetDebug() const {
	return Read<bool>((byte*)this + 600);
}
bool* ABP_WeatherManager_C::M_PtrGetDebug() {
	return reinterpret_cast<bool*>((byte*)this + 600);
}
void ABP_WeatherManager_C::M_SetDebug(const bool& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of Refresh_Settings
// Declaration: bool Refresh_Settings
bool ABP_WeatherManager_C::M_GetRefresh_Settings() const {
	return Read<bool>((byte*)this + 601);
}
bool* ABP_WeatherManager_C::M_PtrGetRefresh_Settings() {
	return reinterpret_cast<bool*>((byte*)this + 601);
}
void ABP_WeatherManager_C::M_SetRefresh_Settings(const bool& value) {
	Write((byte*)this + 601, value);
}
// Member Getter and Setter of CloudSpeed
// Declaration: float CloudSpeed
float ABP_WeatherManager_C::M_GetCloudSpeed() const {
	return Read<float>((byte*)this + 604);
}
float* ABP_WeatherManager_C::M_PtrGetCloudSpeed() {
	return reinterpret_cast<float*>((byte*)this + 604);
}
void ABP_WeatherManager_C::M_SetCloudSpeed(const float& value) {
	Write((byte*)this + 604, value);
}
// Member Getter and Setter of CloudDensity
// Declaration: float CloudDensity
float ABP_WeatherManager_C::M_GetCloudDensity() const {
	return Read<float>((byte*)this + 608);
}
float* ABP_WeatherManager_C::M_PtrGetCloudDensity() {
	return reinterpret_cast<float*>((byte*)this + 608);
}
void ABP_WeatherManager_C::M_SetCloudDensity(const float& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of CloudOpacity
// Declaration: float CloudOpacity
float ABP_WeatherManager_C::M_GetCloudOpacity() const {
	return Read<float>((byte*)this + 612);
}
float* ABP_WeatherManager_C::M_PtrGetCloudOpacity() {
	return reinterpret_cast<float*>((byte*)this + 612);
}
void ABP_WeatherManager_C::M_SetCloudOpacity(const float& value) {
	Write((byte*)this + 612, value);
}
// Member Getter and Setter of FogDensity
// Declaration: float FogDensity
float ABP_WeatherManager_C::M_GetFogDensity() const {
	return Read<float>((byte*)this + 616);
}
float* ABP_WeatherManager_C::M_PtrGetFogDensity() {
	return reinterpret_cast<float*>((byte*)this + 616);
}
void ABP_WeatherManager_C::M_SetFogDensity(const float& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of WindIntensity
// Declaration: float WindIntensity
float ABP_WeatherManager_C::M_GetWindIntensity() const {
	return Read<float>((byte*)this + 620);
}
float* ABP_WeatherManager_C::M_PtrGetWindIntensity() {
	return reinterpret_cast<float*>((byte*)this + 620);
}
void ABP_WeatherManager_C::M_SetWindIntensity(const float& value) {
	Write((byte*)this + 620, value);
}
// Member Getter and Setter of PrecipitationIntensity
// Declaration: float PrecipitationIntensity
float ABP_WeatherManager_C::M_GetPrecipitationIntensity() const {
	return Read<float>((byte*)this + 624);
}
float* ABP_WeatherManager_C::M_PtrGetPrecipitationIntensity() {
	return reinterpret_cast<float*>((byte*)this + 624);
}
void ABP_WeatherManager_C::M_SetPrecipitationIntensity(const float& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of Cloud_Wisps_Opacity
// Declaration: float Cloud_Wisps_Opacity
float ABP_WeatherManager_C::M_GetCloud_Wisps_Opacity() const {
	return Read<float>((byte*)this + 628);
}
float* ABP_WeatherManager_C::M_PtrGetCloud_Wisps_Opacity() {
	return reinterpret_cast<float*>((byte*)this + 628);
}
void ABP_WeatherManager_C::M_SetCloud_Wisps_Opacity(const float& value) {
	Write((byte*)this + 628, value);
}
// Member Getter and Setter of HorizonBaseColorCurves
// Declaration: TArray<class UCurveLinearColor*> HorizonBaseColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetHorizonBaseColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 632);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetHorizonBaseColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 632);
}
void ABP_WeatherManager_C::M_SetHorizonBaseColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of ZenithBaseColorCurves
// Declaration: TArray<class UCurveLinearColor*> ZenithBaseColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetZenithBaseColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 648);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetZenithBaseColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 648);
}
void ABP_WeatherManager_C::M_SetZenithBaseColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of CloudLightColorCurves
// Declaration: TArray<class UCurveLinearColor*> CloudLightColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetCloudLightColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 664);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetCloudLightColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 664);
}
void ABP_WeatherManager_C::M_SetCloudLightColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of CloudDarkColorCurves
// Declaration: TArray<class UCurveLinearColor*> CloudDarkColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetCloudDarkColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 680);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetCloudDarkColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 680);
}
void ABP_WeatherManager_C::M_SetCloudDarkColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of SunIntensityCorrection
// Declaration: bool SunIntensityCorrection
bool ABP_WeatherManager_C::M_GetSunIntensityCorrection() const {
	return Read<bool>((byte*)this + 696);
}
bool* ABP_WeatherManager_C::M_PtrGetSunIntensityCorrection() {
	return reinterpret_cast<bool*>((byte*)this + 696);
}
void ABP_WeatherManager_C::M_SetSunIntensityCorrection(const bool& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of WeatherVariation
// Declaration: int32_t WeatherVariation
int32_t ABP_WeatherManager_C::M_GetWeatherVariation() const {
	return Read<int32_t>((byte*)this + 700);
}
int32_t* ABP_WeatherManager_C::M_PtrGetWeatherVariation() {
	return reinterpret_cast<int32_t*>((byte*)this + 700);
}
void ABP_WeatherManager_C::M_SetWeatherVariation(const int32_t& value) {
	Write((byte*)this + 700, value);
}
// Member Getter and Setter of SunColorCurves
// Declaration: TArray<class UCurveLinearColor*> SunColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetSunColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 704);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetSunColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 704);
}
void ABP_WeatherManager_C::M_SetSunColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of ShineIntensityCurve
// Declaration: class UCurveFloat* ShineIntensityCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetShineIntensityCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 720);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetShineIntensityCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 720);
}
void ABP_WeatherManager_C::M_SetShineIntensityCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of Time
// Declaration: struct FST_Time Time
struct FST_Time ABP_WeatherManager_C::M_GetTime() const {
	return Read<struct FST_Time>((byte*)this + 728);
}
struct FST_Time* ABP_WeatherManager_C::M_PtrGetTime() {
	return reinterpret_cast<struct FST_Time*>((byte*)this + 728);
}
void ABP_WeatherManager_C::M_SetTime(const struct FST_Time& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of Saturation
// Declaration: float Saturation
float ABP_WeatherManager_C::M_GetSaturation() const {
	return Read<float>((byte*)this + 752);
}
float* ABP_WeatherManager_C::M_PtrGetSaturation() {
	return reinterpret_cast<float*>((byte*)this + 752);
}
void ABP_WeatherManager_C::M_SetSaturation(const float& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of SunIntensityCurve
// Declaration: class UCurveFloat* SunIntensityCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetSunIntensityCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 760);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSunIntensityCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 760);
}
void ABP_WeatherManager_C::M_SetSunIntensityCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of Cloudy_SunColorCurve
// Declaration: class UCurveLinearColor* Cloudy_SunColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_SunColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 768);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_SunColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 768);
}
void ABP_WeatherManager_C::M_SetCloudy_SunColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of Exponential_Height_Fog
// Declaration: class AExponentialHeightFog* Exponential_Height_Fog
class AExponentialHeightFog* ABP_WeatherManager_C::M_GetExponential_Height_Fog() const {
	return Read<class AExponentialHeightFog*>((byte*)this + 776);
}
class AExponentialHeightFog** ABP_WeatherManager_C::M_PtrGetExponential_Height_Fog() {
	return reinterpret_cast<class AExponentialHeightFog**>((byte*)this + 776);
}
void ABP_WeatherManager_C::M_SetExponential_Height_Fog(const class AExponentialHeightFog*& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of Cloudy_CloudLightColorCurve
// Declaration: class UCurveLinearColor* Cloudy_CloudLightColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_CloudLightColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 784);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_CloudLightColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 784);
}
void ABP_WeatherManager_C::M_SetCloudy_CloudLightColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of Cloudy_CloudDarkColorCurve
// Declaration: class UCurveLinearColor* Cloudy_CloudDarkColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_CloudDarkColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 792);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_CloudDarkColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 792);
}
void ABP_WeatherManager_C::M_SetCloudy_CloudDarkColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of StarsIntensityCurve
// Declaration: class UCurveFloat* StarsIntensityCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetStarsIntensityCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 800);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetStarsIntensityCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 800);
}
void ABP_WeatherManager_C::M_SetStarsIntensityCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of CloudPhase
// Declaration: float CloudPhase
float ABP_WeatherManager_C::M_GetCloudPhase() const {
	return Read<float>((byte*)this + 808);
}
float* ABP_WeatherManager_C::M_PtrGetCloudPhase() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void ABP_WeatherManager_C::M_SetCloudPhase(const float& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of MoonScale
// Declaration: float MoonScale
float ABP_WeatherManager_C::M_GetMoonScale() const {
	return Read<float>((byte*)this + 812);
}
float* ABP_WeatherManager_C::M_PtrGetMoonScale() {
	return reinterpret_cast<float*>((byte*)this + 812);
}
void ABP_WeatherManager_C::M_SetMoonScale(const float& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of MoonInclination
// Declaration: float MoonInclination
float ABP_WeatherManager_C::M_GetMoonInclination() const {
	return Read<float>((byte*)this + 816);
}
float* ABP_WeatherManager_C::M_PtrGetMoonInclination() {
	return reinterpret_cast<float*>((byte*)this + 816);
}
void ABP_WeatherManager_C::M_SetMoonInclination(const float& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of MoonPhase
// Declaration: float MoonPhase
float ABP_WeatherManager_C::M_GetMoonPhase() const {
	return Read<float>((byte*)this + 820);
}
float* ABP_WeatherManager_C::M_PtrGetMoonPhase() {
	return reinterpret_cast<float*>((byte*)this + 820);
}
void ABP_WeatherManager_C::M_SetMoonPhase(const float& value) {
	Write((byte*)this + 820, value);
}
// Member Getter and Setter of MoonIntensity
// Declaration: float MoonIntensity
float ABP_WeatherManager_C::M_GetMoonIntensity() const {
	return Read<float>((byte*)this + 824);
}
float* ABP_WeatherManager_C::M_PtrGetMoonIntensity() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void ABP_WeatherManager_C::M_SetMoonIntensity(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of SunAngle
// Declaration: float SunAngle
float ABP_WeatherManager_C::M_GetSunAngle() const {
	return Read<float>((byte*)this + 828);
}
float* ABP_WeatherManager_C::M_PtrGetSunAngle() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void ABP_WeatherManager_C::M_SetSunAngle(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of MoonPositionCurve
// Declaration: class UCurveFloat* MoonPositionCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetMoonPositionCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 832);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetMoonPositionCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 832);
}
void ABP_WeatherManager_C::M_SetMoonPositionCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of CloudDensity_Target
// Declaration: float CloudDensity_Target
float ABP_WeatherManager_C::M_GetCloudDensity_Target() const {
	return Read<float>((byte*)this + 840);
}
float* ABP_WeatherManager_C::M_PtrGetCloudDensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 840);
}
void ABP_WeatherManager_C::M_SetCloudDensity_Target(const float& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of CloudDensityChangeSpeed
// Declaration: float CloudDensityChangeSpeed
float ABP_WeatherManager_C::M_GetCloudDensityChangeSpeed() const {
	return Read<float>((byte*)this + 844);
}
float* ABP_WeatherManager_C::M_PtrGetCloudDensityChangeSpeed() {
	return reinterpret_cast<float*>((byte*)this + 844);
}
void ABP_WeatherManager_C::M_SetCloudDensityChangeSpeed(const float& value) {
	Write((byte*)this + 844, value);
}
// Member Getter and Setter of Overall_Intensity
// Declaration: float Overall_Intensity
float ABP_WeatherManager_C::M_GetOverall_Intensity() const {
	return Read<float>((byte*)this + 848);
}
float* ABP_WeatherManager_C::M_PtrGetOverall_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 848);
}
void ABP_WeatherManager_C::M_SetOverall_Intensity(const float& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of SunBrightness
// Declaration: float SunBrightness
float ABP_WeatherManager_C::M_GetSunBrightness() const {
	return Read<float>((byte*)this + 852);
}
float* ABP_WeatherManager_C::M_PtrGetSunBrightness() {
	return reinterpret_cast<float*>((byte*)this + 852);
}
void ABP_WeatherManager_C::M_SetSunBrightness(const float& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of MoonColor
// Declaration: struct FLinearColor MoonColor
struct FLinearColor ABP_WeatherManager_C::M_GetMoonColor() const {
	return Read<struct FLinearColor>((byte*)this + 856);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetMoonColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 856);
}
void ABP_WeatherManager_C::M_SetMoonColor(const struct FLinearColor& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of CloudOpacity_Target
// Declaration: float CloudOpacity_Target
float ABP_WeatherManager_C::M_GetCloudOpacity_Target() const {
	return Read<float>((byte*)this + 872);
}
float* ABP_WeatherManager_C::M_PtrGetCloudOpacity_Target() {
	return reinterpret_cast<float*>((byte*)this + 872);
}
void ABP_WeatherManager_C::M_SetCloudOpacity_Target(const float& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of FogDensity_Target
// Declaration: float FogDensity_Target
float ABP_WeatherManager_C::M_GetFogDensity_Target() const {
	return Read<float>((byte*)this + 876);
}
float* ABP_WeatherManager_C::M_PtrGetFogDensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 876);
}
void ABP_WeatherManager_C::M_SetFogDensity_Target(const float& value) {
	Write((byte*)this + 876, value);
}
// Member Getter and Setter of WindIntensity_Target
// Declaration: float WindIntensity_Target
float ABP_WeatherManager_C::M_GetWindIntensity_Target() const {
	return Read<float>((byte*)this + 880);
}
float* ABP_WeatherManager_C::M_PtrGetWindIntensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 880);
}
void ABP_WeatherManager_C::M_SetWindIntensity_Target(const float& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of WindDirection_Target
// Declaration: float WindDirection_Target
float ABP_WeatherManager_C::M_GetWindDirection_Target() const {
	return Read<float>((byte*)this + 884);
}
float* ABP_WeatherManager_C::M_PtrGetWindDirection_Target() {
	return reinterpret_cast<float*>((byte*)this + 884);
}
void ABP_WeatherManager_C::M_SetWindDirection_Target(const float& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of ShineVariation
// Declaration: float ShineVariation
float ABP_WeatherManager_C::M_GetShineVariation() const {
	return Read<float>((byte*)this + 888);
}
float* ABP_WeatherManager_C::M_PtrGetShineVariation() {
	return reinterpret_cast<float*>((byte*)this + 888);
}
void ABP_WeatherManager_C::M_SetShineVariation(const float& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of SunLightingIntensity
// Declaration: float SunLightingIntensity
float ABP_WeatherManager_C::M_GetSunLightingIntensity() const {
	return Read<float>((byte*)this + 892);
}
float* ABP_WeatherManager_C::M_PtrGetSunLightingIntensity() {
	return reinterpret_cast<float*>((byte*)this + 892);
}
void ABP_WeatherManager_C::M_SetSunLightingIntensity(const float& value) {
	Write((byte*)this + 892, value);
}
// Member Getter and Setter of SunHighlightRadius_curve
// Declaration: class UCurveFloat* SunHighlightRadius_curve
class UCurveFloat* ABP_WeatherManager_C::M_GetSunHighlightRadius_curve() const {
	return Read<class UCurveFloat*>((byte*)this + 896);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSunHighlightRadius_curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 896);
}
void ABP_WeatherManager_C::M_SetSunHighlightRadius_curve(const class UCurveFloat*& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of CloudShadows
// Declaration: TAssetPtr<class UMaterialInterface> CloudShadows
TAssetPtr<class UMaterialInterface> ABP_WeatherManager_C::M_GetCloudShadows() const {
	return Read<TAssetPtr<class UMaterialInterface>>((byte*)this + 904);
}
TAssetPtr<class UMaterialInterface>* ABP_WeatherManager_C::M_PtrGetCloudShadows() {
	return reinterpret_cast<TAssetPtr<class UMaterialInterface>*>((byte*)this + 904);
}
void ABP_WeatherManager_C::M_SetCloudShadows(const TAssetPtr<class UMaterialInterface>& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of CloudShadowsMID
// Declaration: class UMaterialInstanceDynamic* CloudShadowsMID
class UMaterialInstanceDynamic* ABP_WeatherManager_C::M_GetCloudShadowsMID() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 944);
}
class UMaterialInstanceDynamic** ABP_WeatherManager_C::M_PtrGetCloudShadowsMID() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 944);
}
void ABP_WeatherManager_C::M_SetCloudShadowsMID(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of SunHighlightRadius
// Declaration: float SunHighlightRadius
float ABP_WeatherManager_C::M_GetSunHighlightRadius() const {
	return Read<float>((byte*)this + 952);
}
float* ABP_WeatherManager_C::M_PtrGetSunHighlightRadius() {
	return reinterpret_cast<float*>((byte*)this + 952);
}
void ABP_WeatherManager_C::M_SetSunHighlightRadius(const float& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of Cloudy_MoonColor
// Declaration: struct FLinearColor Cloudy_MoonColor
struct FLinearColor ABP_WeatherManager_C::M_GetCloudy_MoonColor() const {
	return Read<struct FLinearColor>((byte*)this + 956);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetCloudy_MoonColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 956);
}
void ABP_WeatherManager_C::M_SetCloudy_MoonColor(const struct FLinearColor& value) {
	Write((byte*)this + 956, value);
}
// Member Getter and Setter of Stars_Intensity
// Declaration: float Stars_Intensity
float ABP_WeatherManager_C::M_GetStars_Intensity() const {
	return Read<float>((byte*)this + 972);
}
float* ABP_WeatherManager_C::M_PtrGetStars_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 972);
}
void ABP_WeatherManager_C::M_SetStars_Intensity(const float& value) {
	Write((byte*)this + 972, value);
}
// Member Getter and Setter of Stars_Color
// Declaration: struct FLinearColor Stars_Color
struct FLinearColor ABP_WeatherManager_C::M_GetStars_Color() const {
	return Read<struct FLinearColor>((byte*)this + 976);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetStars_Color() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 976);
}
void ABP_WeatherManager_C::M_SetStars_Color(const struct FLinearColor& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of MoonOrbitOffset
// Declaration: float MoonOrbitOffset
float ABP_WeatherManager_C::M_GetMoonOrbitOffset() const {
	return Read<float>((byte*)this + 992);
}
float* ABP_WeatherManager_C::M_PtrGetMoonOrbitOffset() {
	return reinterpret_cast<float*>((byte*)this + 992);
}
void ABP_WeatherManager_C::M_SetMoonOrbitOffset(const float& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of SunRotation
// Declaration: struct FRotator SunRotation
struct FRotator ABP_WeatherManager_C::M_GetSunRotation() const {
	return Read<struct FRotator>((byte*)this + 996);
}
struct FRotator* ABP_WeatherManager_C::M_PtrGetSunRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 996);
}
void ABP_WeatherManager_C::M_SetSunRotation(const struct FRotator& value) {
	Write((byte*)this + 996, value);
}
// Member Getter and Setter of SunRadius
// Declaration: float SunRadius
float ABP_WeatherManager_C::M_GetSunRadius() const {
	return Read<float>((byte*)this + 1008);
}
float* ABP_WeatherManager_C::M_PtrGetSunRadius() {
	return reinterpret_cast<float*>((byte*)this + 1008);
}
void ABP_WeatherManager_C::M_SetSunRadius(const float& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of UseCloudShadows
// Declaration: bool UseCloudShadows
bool ABP_WeatherManager_C::M_GetUseCloudShadows() const {
	return Read<bool>((byte*)this + 1012);
}
bool* ABP_WeatherManager_C::M_PtrGetUseCloudShadows() {
	return reinterpret_cast<bool*>((byte*)this + 1012);
}
void ABP_WeatherManager_C::M_SetUseCloudShadows(const bool& value) {
	Write((byte*)this + 1012, value);
}
// Member Getter and Setter of CloudShadowsScale
// Declaration: float CloudShadowsScale
float ABP_WeatherManager_C::M_GetCloudShadowsScale() const {
	return Read<float>((byte*)this + 1016);
}
float* ABP_WeatherManager_C::M_PtrGetCloudShadowsScale() {
	return reinterpret_cast<float*>((byte*)this + 1016);
}
void ABP_WeatherManager_C::M_SetCloudShadowsScale(const float& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of CloudShadowsIntensity
// Declaration: float CloudShadowsIntensity
float ABP_WeatherManager_C::M_GetCloudShadowsIntensity() const {
	return Read<float>((byte*)this + 1020);
}
float* ABP_WeatherManager_C::M_PtrGetCloudShadowsIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1020);
}
void ABP_WeatherManager_C::M_SetCloudShadowsIntensity(const float& value) {
	Write((byte*)this + 1020, value);
}
// Member Getter and Setter of Moon_Light
// Declaration: class ADirectionalLight* Moon_Light
class ADirectionalLight* ABP_WeatherManager_C::M_GetMoon_Light() const {
	return Read<class ADirectionalLight*>((byte*)this + 1024);
}
class ADirectionalLight** ABP_WeatherManager_C::M_PtrGetMoon_Light() {
	return reinterpret_cast<class ADirectionalLight**>((byte*)this + 1024);
}
void ABP_WeatherManager_C::M_SetMoon_Light(const class ADirectionalLight*& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of MoonlightIntensity
// Declaration: float MoonlightIntensity
float ABP_WeatherManager_C::M_GetMoonlightIntensity() const {
	return Read<float>((byte*)this + 1032);
}
float* ABP_WeatherManager_C::M_PtrGetMoonlightIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1032);
}
void ABP_WeatherManager_C::M_SetMoonlightIntensity(const float& value) {
	Write((byte*)this + 1032, value);
}
// Member Getter and Setter of StarsSpeed
// Declaration: float StarsSpeed
float ABP_WeatherManager_C::M_GetStarsSpeed() const {
	return Read<float>((byte*)this + 1036);
}
float* ABP_WeatherManager_C::M_PtrGetStarsSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1036);
}
void ABP_WeatherManager_C::M_SetStarsSpeed(const float& value) {
	Write((byte*)this + 1036, value);
}
// Member Getter and Setter of SunInclination
// Declaration: TArray<float> SunInclination
TArray<float> ABP_WeatherManager_C::M_GetSunInclination() const {
	return Read<TArray<float>>((byte*)this + 1040);
}
TArray<float>* ABP_WeatherManager_C::M_PtrGetSunInclination() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1040);
}
void ABP_WeatherManager_C::M_SetSunInclination(const TArray<float>& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of SunYaw
// Declaration: float SunYaw
float ABP_WeatherManager_C::M_GetSunYaw() const {
	return Read<float>((byte*)this + 1056);
}
float* ABP_WeatherManager_C::M_PtrGetSunYaw() {
	return reinterpret_cast<float*>((byte*)this + 1056);
}
void ABP_WeatherManager_C::M_SetSunYaw(const float& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of MoonRotation
// Declaration: float MoonRotation
float ABP_WeatherManager_C::M_GetMoonRotation() const {
	return Read<float>((byte*)this + 1060);
}
float* ABP_WeatherManager_C::M_PtrGetMoonRotation() {
	return reinterpret_cast<float*>((byte*)this + 1060);
}
void ABP_WeatherManager_C::M_SetMoonRotation(const float& value) {
	Write((byte*)this + 1060, value);
}
// Member Getter and Setter of CustomMoonTexture
// Declaration: class UTexture2D* CustomMoonTexture
class UTexture2D* ABP_WeatherManager_C::M_GetCustomMoonTexture() const {
	return Read<class UTexture2D*>((byte*)this + 1064);
}
class UTexture2D** ABP_WeatherManager_C::M_PtrGetCustomMoonTexture() {
	return reinterpret_cast<class UTexture2D**>((byte*)this + 1064);
}
void ABP_WeatherManager_C::M_SetCustomMoonTexture(const class UTexture2D*& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of UseCustomMoonTexture
// Declaration: bool UseCustomMoonTexture
bool ABP_WeatherManager_C::M_GetUseCustomMoonTexture() const {
	return Read<bool>((byte*)this + 1072);
}
bool* ABP_WeatherManager_C::M_PtrGetUseCustomMoonTexture() {
	return reinterpret_cast<bool*>((byte*)this + 1072);
}
void ABP_WeatherManager_C::M_SetUseCustomMoonTexture(const bool& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of SkyLight
// Declaration: class ASkyLight* SkyLight
class ASkyLight* ABP_WeatherManager_C::M_GetSkyLight() const {
	return Read<class ASkyLight*>((byte*)this + 1080);
}
class ASkyLight** ABP_WeatherManager_C::M_PtrGetSkyLight() {
	return reinterpret_cast<class ASkyLight**>((byte*)this + 1080);
}
void ABP_WeatherManager_C::M_SetSkyLight(const class ASkyLight*& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of NightFilterCurve
// Declaration: class UCurveFloat* NightFilterCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetNightFilterCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 1088);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetNightFilterCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1088);
}
void ABP_WeatherManager_C::M_SetNightFilterCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of Night_brightness
// Declaration: float Night_brightness
float ABP_WeatherManager_C::M_GetNight_brightness() const {
	return Read<float>((byte*)this + 1096);
}
float* ABP_WeatherManager_C::M_PtrGetNight_brightness() {
	return reinterpret_cast<float*>((byte*)this + 1096);
}
void ABP_WeatherManager_C::M_SetNight_brightness(const float& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of MoonGlowIntensity
// Declaration: float MoonGlowIntensity
float ABP_WeatherManager_C::M_GetMoonGlowIntensity() const {
	return Read<float>((byte*)this + 1100);
}
float* ABP_WeatherManager_C::M_PtrGetMoonGlowIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1100);
}
void ABP_WeatherManager_C::M_SetMoonGlowIntensity(const float& value) {
	Write((byte*)this + 1100, value);
}
// Member Getter and Setter of Directional_Intensity_Curve
// Declaration: class UCurveFloat* Directional_Intensity_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetDirectional_Intensity_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 1104);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetDirectional_Intensity_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1104);
}
void ABP_WeatherManager_C::M_SetDirectional_Intensity_Curve(const class UCurveFloat*& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of Sun_Light_Intensity
// Declaration: float Sun_Light_Intensity
float ABP_WeatherManager_C::M_GetSun_Light_Intensity() const {
	return Read<float>((byte*)this + 1112);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Light_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 1112);
}
void ABP_WeatherManager_C::M_SetSun_Light_Intensity(const float& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of CloudsBaseTexture
// Declaration: TAssetPtr<class UTexture> CloudsBaseTexture
TAssetPtr<class UTexture> ABP_WeatherManager_C::M_GetCloudsBaseTexture() const {
	return Read<TAssetPtr<class UTexture>>((byte*)this + 1120);
}
TAssetPtr<class UTexture>* ABP_WeatherManager_C::M_PtrGetCloudsBaseTexture() {
	return reinterpret_cast<TAssetPtr<class UTexture>*>((byte*)this + 1120);
}
void ABP_WeatherManager_C::M_SetCloudsBaseTexture(const TAssetPtr<class UTexture>& value) {
	Write((byte*)this + 1120, value);
}
// Member Getter and Setter of CloudsBaseTextureReference
// Declaration: class UTexture* CloudsBaseTextureReference
class UTexture* ABP_WeatherManager_C::M_GetCloudsBaseTextureReference() const {
	return Read<class UTexture*>((byte*)this + 1160);
}
class UTexture** ABP_WeatherManager_C::M_PtrGetCloudsBaseTextureReference() {
	return reinterpret_cast<class UTexture**>((byte*)this + 1160);
}
void ABP_WeatherManager_C::M_SetCloudsBaseTextureReference(const class UTexture*& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of CloudTiling
// Declaration: float CloudTiling
float ABP_WeatherManager_C::M_GetCloudTiling() const {
	return Read<float>((byte*)this + 1168);
}
float* ABP_WeatherManager_C::M_PtrGetCloudTiling() {
	return reinterpret_cast<float*>((byte*)this + 1168);
}
void ABP_WeatherManager_C::M_SetCloudTiling(const float& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of WindDirection
// Declaration: float WindDirection
float ABP_WeatherManager_C::M_GetWindDirection() const {
	return Read<float>((byte*)this + 1172);
}
float* ABP_WeatherManager_C::M_PtrGetWindDirection() {
	return reinterpret_cast<float*>((byte*)this + 1172);
}
void ABP_WeatherManager_C::M_SetWindDirection(const float& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of CloudHeight1
// Declaration: float CloudHeight1
float ABP_WeatherManager_C::M_GetCloudHeight1() const {
	return Read<float>((byte*)this + 1176);
}
float* ABP_WeatherManager_C::M_PtrGetCloudHeight1() {
	return reinterpret_cast<float*>((byte*)this + 1176);
}
void ABP_WeatherManager_C::M_SetCloudHeight1(const float& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of CloudHeight2
// Declaration: float CloudHeight2
float ABP_WeatherManager_C::M_GetCloudHeight2() const {
	return Read<float>((byte*)this + 1180);
}
float* ABP_WeatherManager_C::M_PtrGetCloudHeight2() {
	return reinterpret_cast<float*>((byte*)this + 1180);
}
void ABP_WeatherManager_C::M_SetCloudHeight2(const float& value) {
	Write((byte*)this + 1180, value);
}
// Member Getter and Setter of MoonAngle
// Declaration: float MoonAngle
float ABP_WeatherManager_C::M_GetMoonAngle() const {
	return Read<float>((byte*)this + 1184);
}
float* ABP_WeatherManager_C::M_PtrGetMoonAngle() {
	return reinterpret_cast<float*>((byte*)this + 1184);
}
void ABP_WeatherManager_C::M_SetMoonAngle(const float& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of Sun_Volumetric_Scattering_Intensity
// Declaration: float Sun_Volumetric_Scattering_Intensity
float ABP_WeatherManager_C::M_GetSun_Volumetric_Scattering_Intensity() const {
	return Read<float>((byte*)this + 1188);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Volumetric_Scattering_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 1188);
}
void ABP_WeatherManager_C::M_SetSun_Volumetric_Scattering_Intensity(const float& value) {
	Write((byte*)this + 1188, value);
}
// Member Getter and Setter of Moon_Volumetric_Scattering_Intensity
// Declaration: float Moon_Volumetric_Scattering_Intensity
float ABP_WeatherManager_C::M_GetMoon_Volumetric_Scattering_Intensity() const {
	return Read<float>((byte*)this + 1192);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Volumetric_Scattering_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 1192);
}
void ABP_WeatherManager_C::M_SetMoon_Volumetric_Scattering_Intensity(const float& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of StarsPhase
// Declaration: float StarsPhase
float ABP_WeatherManager_C::M_GetStarsPhase() const {
	return Read<float>((byte*)this + 1196);
}
float* ABP_WeatherManager_C::M_PtrGetStarsPhase() {
	return reinterpret_cast<float*>((byte*)this + 1196);
}
void ABP_WeatherManager_C::M_SetStarsPhase(const float& value) {
	Write((byte*)this + 1196, value);
}
// Member Getter and Setter of TimeUpdateDelay
// Declaration: float TimeUpdateDelay
float ABP_WeatherManager_C::M_GetTimeUpdateDelay() const {
	return Read<float>((byte*)this + 1200);
}
float* ABP_WeatherManager_C::M_PtrGetTimeUpdateDelay() {
	return reinterpret_cast<float*>((byte*)this + 1200);
}
void ABP_WeatherManager_C::M_SetTimeUpdateDelay(const float& value) {
	Write((byte*)this + 1200, value);
}
// Member Getter and Setter of WorldTemperature
// Declaration: float WorldTemperature
float ABP_WeatherManager_C::M_GetWorldTemperature() const {
	return Read<float>((byte*)this + 1204);
}
float* ABP_WeatherManager_C::M_PtrGetWorldTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1204);
}
void ABP_WeatherManager_C::M_SetWorldTemperature(const float& value) {
	Write((byte*)this + 1204, value);
}
// Member Getter and Setter of WorldTemperatureTarget
// Declaration: float WorldTemperatureTarget
float ABP_WeatherManager_C::M_GetWorldTemperatureTarget() const {
	return Read<float>((byte*)this + 1208);
}
float* ABP_WeatherManager_C::M_PtrGetWorldTemperatureTarget() {
	return reinterpret_cast<float*>((byte*)this + 1208);
}
void ABP_WeatherManager_C::M_SetWorldTemperatureTarget(const float& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of WaterTemperature
// Declaration: float WaterTemperature
float ABP_WeatherManager_C::M_GetWaterTemperature() const {
	return Read<float>((byte*)this + 1212);
}
float* ABP_WeatherManager_C::M_PtrGetWaterTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1212);
}
void ABP_WeatherManager_C::M_SetWaterTemperature(const float& value) {
	Write((byte*)this + 1212, value);
}
// Member Getter and Setter of WaterTemperatureOffset
// Declaration: float WaterTemperatureOffset
float ABP_WeatherManager_C::M_GetWaterTemperatureOffset() const {
	return Read<float>((byte*)this + 1216);
}
float* ABP_WeatherManager_C::M_PtrGetWaterTemperatureOffset() {
	return reinterpret_cast<float*>((byte*)this + 1216);
}
void ABP_WeatherManager_C::M_SetWaterTemperatureOffset(const float& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of TimeOfDay
// Declaration: float TimeOfDay
float ABP_WeatherManager_C::M_GetTimeOfDay() const {
	return Read<float>((byte*)this + 1220);
}
float* ABP_WeatherManager_C::M_PtrGetTimeOfDay() {
	return reinterpret_cast<float*>((byte*)this + 1220);
}
void ABP_WeatherManager_C::M_SetTimeOfDay(const float& value) {
	Write((byte*)this + 1220, value);
}
// Member Getter and Setter of TimeOfMonth
// Declaration: float TimeOfMonth
float ABP_WeatherManager_C::M_GetTimeOfMonth() const {
	return Read<float>((byte*)this + 1224);
}
float* ABP_WeatherManager_C::M_PtrGetTimeOfMonth() {
	return reinterpret_cast<float*>((byte*)this + 1224);
}
void ABP_WeatherManager_C::M_SetTimeOfMonth(const float& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of SkyLightIntensity
// Declaration: class UCurveFloat* SkyLightIntensity
class UCurveFloat* ABP_WeatherManager_C::M_GetSkyLightIntensity() const {
	return Read<class UCurveFloat*>((byte*)this + 1232);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSkyLightIntensity() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1232);
}
void ABP_WeatherManager_C::M_SetSkyLightIntensity(const class UCurveFloat*& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of StartPrecipitation
// Declaration: TAssetPtr<class FStartPrecipitation__DelegateSignature> StartPrecipitation
TAssetPtr<class FStartPrecipitation__DelegateSignature> ABP_WeatherManager_C::M_GetStartPrecipitation() const {
	return Read<TAssetPtr<class FStartPrecipitation__DelegateSignature>>((byte*)this + 1240);
}
TAssetPtr<class FStartPrecipitation__DelegateSignature>* ABP_WeatherManager_C::M_PtrGetStartPrecipitation() {
	return reinterpret_cast<TAssetPtr<class FStartPrecipitation__DelegateSignature>*>((byte*)this + 1240);
}
void ABP_WeatherManager_C::M_SetStartPrecipitation(const TAssetPtr<class FStartPrecipitation__DelegateSignature>& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of StopPrecipitation
// Declaration: TAssetPtr<class FStopPrecipitation__DelegateSignature> StopPrecipitation
TAssetPtr<class FStopPrecipitation__DelegateSignature> ABP_WeatherManager_C::M_GetStopPrecipitation() const {
	return Read<TAssetPtr<class FStopPrecipitation__DelegateSignature>>((byte*)this + 1256);
}
TAssetPtr<class FStopPrecipitation__DelegateSignature>* ABP_WeatherManager_C::M_PtrGetStopPrecipitation() {
	return reinterpret_cast<TAssetPtr<class FStopPrecipitation__DelegateSignature>*>((byte*)this + 1256);
}
void ABP_WeatherManager_C::M_SetStopPrecipitation(const TAssetPtr<class FStopPrecipitation__DelegateSignature>& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of SkyLightIntensity_LowQuality
// Declaration: class UCurveFloat* SkyLightIntensity_LowQuality
class UCurveFloat* ABP_WeatherManager_C::M_GetSkyLightIntensity_LowQuality() const {
	return Read<class UCurveFloat*>((byte*)this + 1272);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSkyLightIntensity_LowQuality() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1272);
}
void ABP_WeatherManager_C::M_SetSkyLightIntensity_LowQuality(const class UCurveFloat*& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of FogHeightCurve
// Declaration: class UCurveFloat* FogHeightCurve
class UCurveFloat* ABP_WeatherManager_C::M_GetFogHeightCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 1280);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetFogHeightCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1280);
}
void ABP_WeatherManager_C::M_SetFogHeightCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of Precipitation
// Declaration: bool Precipitation
bool ABP_WeatherManager_C::M_GetPrecipitation() const {
	return Read<bool>((byte*)this + 1288);
}
bool* ABP_WeatherManager_C::M_PtrGetPrecipitation() {
	return reinterpret_cast<bool*>((byte*)this + 1288);
}
void ABP_WeatherManager_C::M_SetPrecipitation(const bool& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of FogDensityChangeSpeed
// Declaration: float FogDensityChangeSpeed
float ABP_WeatherManager_C::M_GetFogDensityChangeSpeed() const {
	return Read<float>((byte*)this + 1292);
}
float* ABP_WeatherManager_C::M_PtrGetFogDensityChangeSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1292);
}
void ABP_WeatherManager_C::M_SetFogDensityChangeSpeed(const float& value) {
	Write((byte*)this + 1292, value);
}
// Member Getter and Setter of WindIntensityChangeSpeed
// Declaration: float WindIntensityChangeSpeed
float ABP_WeatherManager_C::M_GetWindIntensityChangeSpeed() const {
	return Read<float>((byte*)this + 1296);
}
float* ABP_WeatherManager_C::M_PtrGetWindIntensityChangeSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1296);
}
void ABP_WeatherManager_C::M_SetWindIntensityChangeSpeed(const float& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of GameInstanceReference
// Declaration: class UGI_MedievalDynasty_C* GameInstanceReference
class UGI_MedievalDynasty_C* ABP_WeatherManager_C::M_GetGameInstanceReference() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 1304);
}
class UGI_MedievalDynasty_C** ABP_WeatherManager_C::M_PtrGetGameInstanceReference() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 1304);
}
void ABP_WeatherManager_C::M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of Source_Material
// Declaration: TAssetPtr<class UMaterialInterface> Source_Material
TAssetPtr<class UMaterialInterface> ABP_WeatherManager_C::M_GetSource_Material() const {
	return Read<TAssetPtr<class UMaterialInterface>>((byte*)this + 1312);
}
TAssetPtr<class UMaterialInterface>* ABP_WeatherManager_C::M_PtrGetSource_Material() {
	return reinterpret_cast<TAssetPtr<class UMaterialInterface>*>((byte*)this + 1312);
}
void ABP_WeatherManager_C::M_SetSource_Material(const TAssetPtr<class UMaterialInterface>& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of Cave
// Declaration: bool Cave
bool ABP_WeatherManager_C::M_GetCave() const {
	return Read<bool>((byte*)this + 1352);
}
bool* ABP_WeatherManager_C::M_PtrGetCave() {
	return reinterpret_cast<bool*>((byte*)this + 1352);
}
void ABP_WeatherManager_C::M_SetCave(const bool& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of UseVolumetricFog
// Declaration: bool UseVolumetricFog
bool ABP_WeatherManager_C::M_GetUseVolumetricFog() const {
	return Read<bool>((byte*)this + 1353);
}
bool* ABP_WeatherManager_C::M_PtrGetUseVolumetricFog() {
	return reinterpret_cast<bool*>((byte*)this + 1353);
}
void ABP_WeatherManager_C::M_SetUseVolumetricFog(const bool& value) {
	Write((byte*)this + 1353, value);
}
// Member Getter and Setter of SkyLightIntensityTarget
// Declaration: float SkyLightIntensityTarget
float ABP_WeatherManager_C::M_GetSkyLightIntensityTarget() const {
	return Read<float>((byte*)this + 1356);
}
float* ABP_WeatherManager_C::M_PtrGetSkyLightIntensityTarget() {
	return reinterpret_cast<float*>((byte*)this + 1356);
}
void ABP_WeatherManager_C::M_SetSkyLightIntensityTarget(const float& value) {
	Write((byte*)this + 1356, value);
}
// Member Getter and Setter of CurrentSkyLightIntensity
// Declaration: float CurrentSkyLightIntensity
float ABP_WeatherManager_C::M_GetCurrentSkyLightIntensity() const {
	return Read<float>((byte*)this + 1360);
}
float* ABP_WeatherManager_C::M_PtrGetCurrentSkyLightIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1360);
}
void ABP_WeatherManager_C::M_SetCurrentSkyLightIntensity(const float& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of ExtendDawnAndDusk
// Declaration: float ExtendDawnAndDusk
float ABP_WeatherManager_C::M_GetExtendDawnAndDusk() const {
	return Read<float>((byte*)this + 1364);
}
float* ABP_WeatherManager_C::M_PtrGetExtendDawnAndDusk() {
	return reinterpret_cast<float*>((byte*)this + 1364);
}
void ABP_WeatherManager_C::M_SetExtendDawnAndDusk(const float& value) {
	Write((byte*)this + 1364, value);
}
// Member Getter and Setter of DawnTimes
// Declaration: TArray<float> DawnTimes
TArray<float> ABP_WeatherManager_C::M_GetDawnTimes() const {
	return Read<TArray<float>>((byte*)this + 1368);
}
TArray<float>* ABP_WeatherManager_C::M_PtrGetDawnTimes() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1368);
}
void ABP_WeatherManager_C::M_SetDawnTimes(const TArray<float>& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of DustTimes
// Declaration: TArray<float> DustTimes
TArray<float> ABP_WeatherManager_C::M_GetDustTimes() const {
	return Read<TArray<float>>((byte*)this + 1384);
}
TArray<float>* ABP_WeatherManager_C::M_PtrGetDustTimes() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1384);
}
void ABP_WeatherManager_C::M_SetDustTimes(const TArray<float>& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of InternalTimeOfDay
// Declaration: float InternalTimeOfDay
float ABP_WeatherManager_C::M_GetInternalTimeOfDay() const {
	return Read<float>((byte*)this + 1400);
}
float* ABP_WeatherManager_C::M_PtrGetInternalTimeOfDay() {
	return reinterpret_cast<float*>((byte*)this + 1400);
}
void ABP_WeatherManager_C::M_SetInternalTimeOfDay(const float& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of MoonVerticalOffset
// Declaration: float MoonVerticalOffset
float ABP_WeatherManager_C::M_GetMoonVerticalOffset() const {
	return Read<float>((byte*)this + 1404);
}
float* ABP_WeatherManager_C::M_PtrGetMoonVerticalOffset() {
	return reinterpret_cast<float*>((byte*)this + 1404);
}
void ABP_WeatherManager_C::M_SetMoonVerticalOffset(const float& value) {
	Write((byte*)this + 1404, value);
}
// Member Getter and Setter of Season
// Declaration: int32_t Season
int32_t ABP_WeatherManager_C::M_GetSeason() const {
	return Read<int32_t>((byte*)this + 1408);
}
int32_t* ABP_WeatherManager_C::M_PtrGetSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 1408);
}
void ABP_WeatherManager_C::M_SetSeason(const int32_t& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of TimeUpdateQuality
// Declaration: int32_t TimeUpdateQuality
int32_t ABP_WeatherManager_C::M_GetTimeUpdateQuality() const {
	return Read<int32_t>((byte*)this + 1412);
}
int32_t* ABP_WeatherManager_C::M_PtrGetTimeUpdateQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 1412);
}
void ABP_WeatherManager_C::M_SetTimeUpdateQuality(const int32_t& value) {
	Write((byte*)this + 1412, value);
}
// Member Getter and Setter of CurrentSunColor
// Declaration: struct FLinearColor CurrentSunColor
struct FLinearColor ABP_WeatherManager_C::M_GetCurrentSunColor() const {
	return Read<struct FLinearColor>((byte*)this + 1416);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetCurrentSunColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1416);
}
void ABP_WeatherManager_C::M_SetCurrentSunColor(const struct FLinearColor& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of TemperatureChangeSpeed
// Declaration: float TemperatureChangeSpeed
float ABP_WeatherManager_C::M_GetTemperatureChangeSpeed() const {
	return Read<float>((byte*)this + 1432);
}
float* ABP_WeatherManager_C::M_PtrGetTemperatureChangeSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1432);
}
void ABP_WeatherManager_C::M_SetTemperatureChangeSpeed(const float& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of WorldTemperatureRep
// Declaration: int32_t WorldTemperatureRep
int32_t ABP_WeatherManager_C::M_GetWorldTemperatureRep() const {
	return Read<int32_t>((byte*)this + 1436);
}
int32_t* ABP_WeatherManager_C::M_PtrGetWorldTemperatureRep() {
	return reinterpret_cast<int32_t*>((byte*)this + 1436);
}
void ABP_WeatherManager_C::M_SetWorldTemperatureRep(const int32_t& value) {
	Write((byte*)this + 1436, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.StartPrecipitation__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Season	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::StartPrecipitation__DelegateSignature(int32_t Season, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.StartPrecipitation__DelegateSignature");

	struct ABP_WeatherManager_C_StartPrecipitation__DelegateSignature_Params {
		int32_t Season;			//Offset: 0 | ElementSize: 4
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	ABP_WeatherManager_C_StartPrecipitation__DelegateSignature_Params params;
	params.Season = Season;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.StopPrecipitation__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::StopPrecipitation__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.StopPrecipitation__DelegateSignature");

	struct ABP_WeatherManager_C_StopPrecipitation__DelegateSignature_Params {
	};
	ABP_WeatherManager_C_StopPrecipitation__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.ExecuteUbergraph_BP_WeatherManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::ExecuteUbergraph_BP_WeatherManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.ExecuteUbergraph_BP_WeatherManager");

	struct ABP_WeatherManager_C_ExecuteUbergraph_BP_WeatherManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_ExecuteUbergraph_BP_WeatherManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateInternalTimeOfDay
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateInternalTimeOfDay(struct FST_Time Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateInternalTimeOfDay");

	struct ABP_WeatherManager_C_UpdateInternalTimeOfDay_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	ABP_WeatherManager_C_UpdateInternalTimeOfDay_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateLightsRotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Instantly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateLightsRotation(bool Instantly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateLightsRotation");

	struct ABP_WeatherManager_C_UpdateLightsRotation_Params {
		bool Instantly;			//Offset: 0 | ElementSize: 1
	};
	ABP_WeatherManager_C_UpdateLightsRotation_Params params;
	params.Instantly = Instantly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetTimeDelay
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetTimeDelay(float TimeDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetTimeDelay");

	struct ABP_WeatherManager_C_SetTimeDelay_Params {
		float TimeDelay;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_SetTimeDelay_Params params;
	params.TimeDelay = TimeDelay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetInCave
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InCave	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetInCave(bool InCave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetInCave");

	struct ABP_WeatherManager_C_SetInCave_Params {
		bool InCave;			//Offset: 0 | ElementSize: 1
	};
	ABP_WeatherManager_C_SetInCave_Params params;
	params.InCave = InCave;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.InstantlyUpdateWeather
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomWeather	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DayVariation	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomCloudDensity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::InstantlyUpdateWeather(struct FST_Time Time, bool RandomWeather, int32_t DayVariation, bool RandomCloudDensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.InstantlyUpdateWeather");

	struct ABP_WeatherManager_C_InstantlyUpdateWeather_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
		bool RandomWeather;			//Offset: 24 | ElementSize: 1
		int32_t DayVariation;			//Offset: 28 | ElementSize: 4
		bool RandomCloudDensity;			//Offset: 32 | ElementSize: 1
	};
	ABP_WeatherManager_C_InstantlyUpdateWeather_Params params;
	params.Time = Time;
	params.RandomWeather = RandomWeather;
	params.DayVariation = DayVariation;
	params.RandomCloudDensity = RandomCloudDensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateWeatherManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateWeatherManager(struct FST_Time Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateWeatherManager");

	struct ABP_WeatherManager_C_UpdateWeatherManager_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	ABP_WeatherManager_C_UpdateWeatherManager_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateGraphicsSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateGraphicsSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateGraphicsSettings");

	struct ABP_WeatherManager_C_UpdateGraphicsSettings_Params {
	};
	ABP_WeatherManager_C_UpdateGraphicsSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.ReceiveBeginPlay");

	struct ABP_WeatherManager_C_ReceiveBeginPlay_Params {
	};
	ABP_WeatherManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UserConstructionScript");

	struct ABP_WeatherManager_C_UserConstructionScript_Params {
	};
	ABP_WeatherManager_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetSolarAngle
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instantly	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetSolarAngle(bool Instantly) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetSolarAngle");

	struct ABP_WeatherManager_C_SetSolarAngle_Params {
		bool Instantly;			//Offset: 0 | ElementSize: 1
	};
	ABP_WeatherManager_C_SetSolarAngle_Params params;
	params.Instantly = Instantly;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateMaterialVariables
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateMaterialVariables() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateMaterialVariables");

	struct ABP_WeatherManager_C_UpdateMaterialVariables_Params {
	};
	ABP_WeatherManager_C_UpdateMaterialVariables_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateTime(const struct FST_Time& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateTime");

	struct ABP_WeatherManager_C_UpdateTime_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	ABP_WeatherManager_C_UpdateTime_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.RandomWeather
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::RandomWeather() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.RandomWeather");

	struct ABP_WeatherManager_C_RandomWeather_Params {
	};
	ABP_WeatherManager_C_RandomWeather_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.InitMainWeatherParameters
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RandomCloudDensity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::InitMainWeatherParameters(bool RandomCloudDensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.InitMainWeatherParameters");

	struct ABP_WeatherManager_C_InitMainWeatherParameters_Params {
		bool RandomCloudDensity;			//Offset: 0 | ElementSize: 1
	};
	ABP_WeatherManager_C_InitMainWeatherParameters_Params params;
	params.RandomCloudDensity = RandomCloudDensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateMaterialCollection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateMaterialCollection() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateMaterialCollection");

	struct ABP_WeatherManager_C_UpdateMaterialCollection_Params {
	};
	ABP_WeatherManager_C_UpdateMaterialCollection_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetSunAngle
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sun_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetSunAngle(float Sun_Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetSunAngle");

	struct ABP_WeatherManager_C_SetSunAngle_Params {
		float Sun_Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_SetSunAngle_Params params;
	params.Sun_Angle = Sun_Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetSunlightIntensity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sun_Light_Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetSunlightIntensity(float Sun_Light_Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetSunlightIntensity");

	struct ABP_WeatherManager_C_SetSunlightIntensity_Params {
		float Sun_Light_Intensity;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_SetSunlightIntensity_Params params;
	params.Sun_Light_Intensity = Sun_Light_Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.LoadData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::LoadData(class USAVE_Game_C* SaveReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.LoadData");

	struct ABP_WeatherManager_C_LoadData_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_WeatherManager_C_LoadData_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SaveData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::SaveData(class USAVE_Game_C* SaveReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SaveData");

	struct ABP_WeatherManager_C_SaveData_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_WeatherManager_C_SaveData_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.CalculateTimeBasedParams
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::CalculateTimeBasedParams() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.CalculateTimeBasedParams");

	struct ABP_WeatherManager_C_CalculateTimeBasedParams_Params {
	};
	ABP_WeatherManager_C_CalculateTimeBasedParams_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.OnRep_WeatherVariation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::OnRep_WeatherVariation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.OnRep_WeatherVariation");

	struct ABP_WeatherManager_C_OnRep_WeatherVariation_Params {
	};
	ABP_WeatherManager_C_OnRep_WeatherVariation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.DebugWeatherPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::DebugWeatherPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.DebugWeatherPreset");

	struct ABP_WeatherManager_C_DebugWeatherPreset_Params {
	};
	ABP_WeatherManager_C_DebugWeatherPreset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.OnRep_Season
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::OnRep_Season() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.OnRep_Season");

	struct ABP_WeatherManager_C_OnRep_Season_Params {
	};
	ABP_WeatherManager_C_OnRep_Season_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.SetWorldTemperature
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorldTemperature	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::SetWorldTemperature(float WorldTemperature) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.SetWorldTemperature");

	struct ABP_WeatherManager_C_SetWorldTemperature_Params {
		float WorldTemperature;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_SetWorldTemperature_Params params;
	params.WorldTemperature = WorldTemperature;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateSeasonMPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Season	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateSeasonMPC(int32_t Season) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateSeasonMPC");

	struct ABP_WeatherManager_C_UpdateSeasonMPC_Params {
		int32_t Season;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_UpdateSeasonMPC_Params params;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWindIntensityChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWindIntensityChangeSpeed(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWindIntensityChangeSpeed");

	struct ABP_WeatherManager_C_GetWindIntensityChangeSpeed_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWindIntensityChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWindDirectionChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWindDirectionChangeSpeed(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWindDirectionChangeSpeed");

	struct ABP_WeatherManager_C_GetWindDirectionChangeSpeed_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWindDirectionChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetTemperatureChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_WeatherManager_C::GetTemperatureChangeSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetTemperatureChangeSpeed");

	struct ABP_WeatherManager_C_GetTemperatureChangeSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetTemperatureChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetCloudDensityChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_WeatherManager_C::GetCloudDensityChangeSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetCloudDensityChangeSpeed");

	struct ABP_WeatherManager_C_GetCloudDensityChangeSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetCloudDensityChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetCloudOpacityChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_WeatherManager_C::GetCloudOpacityChangeSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetCloudOpacityChangeSpeed");

	struct ABP_WeatherManager_C_GetCloudOpacityChangeSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetCloudOpacityChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetFogDensityChangeSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_WeatherManager_C::GetFogDensityChangeSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetFogDensityChangeSpeed");

	struct ABP_WeatherManager_C_GetFogDensityChangeSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetFogDensityChangeSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateInternalTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Season	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateInternalTime(int32_t Season) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateInternalTime");

	struct ABP_WeatherManager_C_UpdateInternalTime_Params {
		int32_t Season;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_UpdateInternalTime_Params params;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWorldTemperature
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Temperature	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWorldTemperature(float* Temperature) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWorldTemperature");

	struct ABP_WeatherManager_C_GetWorldTemperature_Params {
		float Temperature;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWorldTemperature_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Temperature != nullptr)
		*Temperature = params.Temperature;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWindIntensity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Intensity	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWindIntensity(float* Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWindIntensity");

	struct ABP_WeatherManager_C_GetWindIntensity_Params {
		float Intensity;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWindIntensity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetPrecipitationIntensity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Intensity	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetPrecipitationIntensity(float* Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetPrecipitationIntensity");

	struct ABP_WeatherManager_C_GetPrecipitationIntensity_Params {
		float Intensity;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetPrecipitationIntensity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetCloudDensity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Density	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetCloudDensity(float* Density) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetCloudDensity");

	struct ABP_WeatherManager_C_GetCloudDensity_Params {
		float Density;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetCloudDensity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Density != nullptr)
		*Density = params.Density;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.IsInCave
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_WeatherManager_C::IsInCave(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.IsInCave");

	struct ABP_WeatherManager_C_IsInCave_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	ABP_WeatherManager_C_IsInCave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWeatherVariation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWeatherVariation(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWeatherVariation");

	struct ABP_WeatherManager_C_GetWeatherVariation_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWeatherVariation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetWaterTemperature
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Temperature	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetWaterTemperature(float* Temperature) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetWaterTemperature");

	struct ABP_WeatherManager_C_GetWaterTemperature_Params {
		float Temperature;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetWaterTemperature_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Temperature != nullptr)
		*Temperature = params.Temperature;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetSunColor
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetSunColor(struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetSunColor");

	struct ABP_WeatherManager_C_GetSunColor_Params {
		struct FLinearColor Color;			//Offset: 0 | ElementSize: 16
	};
	ABP_WeatherManager_C_GetSunColor_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_WeatherManager.BP_WeatherManager_C.GetTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_WeatherManager_C::GetTimeOfDay(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.GetTimeOfDay");

	struct ABP_WeatherManager_C_GetTimeOfDay_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_WeatherManager_C_GetTimeOfDay_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// InheritableComponentHandler BP_WeatherManager.BP_WeatherManager_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::InheritableComponentHandler() {
	static auto fn = UObject::FindObject<UFunction>("InheritableComponentHandler BP_WeatherManager.BP_WeatherManager_C.InheritableComponentHandler");

	struct ABP_WeatherManager_C_InheritableComponentHandler_Params {
	};
	ABP_WeatherManager_C_InheritableComponentHandler_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}