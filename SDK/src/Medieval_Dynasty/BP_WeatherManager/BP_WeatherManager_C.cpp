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
// Member Getter and Setter of Fog
// Declaration: class UNiagaraComponent* Fog
class UNiagaraComponent* ABP_WeatherManager_C::M_GetFog() const {
	return Read<class UNiagaraComponent*>((byte*)this + 560);
}
class UNiagaraComponent** ABP_WeatherManager_C::M_PtrGetFog() {
	return reinterpret_cast<class UNiagaraComponent**>((byte*)this + 560);
}
void ABP_WeatherManager_C::M_SetFog(const class UNiagaraComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of Moon_Root
// Declaration: class UArrowComponent* Moon_Root
class UArrowComponent* ABP_WeatherManager_C::M_GetMoon_Root() const {
	return Read<class UArrowComponent*>((byte*)this + 568);
}
class UArrowComponent** ABP_WeatherManager_C::M_PtrGetMoon_Root() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 568);
}
void ABP_WeatherManager_C::M_SetMoon_Root(const class UArrowComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of Sun_Root
// Declaration: class UArrowComponent* Sun_Root
class UArrowComponent* ABP_WeatherManager_C::M_GetSun_Root() const {
	return Read<class UArrowComponent*>((byte*)this + 576);
}
class UArrowComponent** ABP_WeatherManager_C::M_PtrGetSun_Root() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 576);
}
void ABP_WeatherManager_C::M_SetSun_Root(const class UArrowComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of Ultra_Dynamic_Sky_Sphere
// Declaration: class UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere
class UStaticMeshComponent* ABP_WeatherManager_C::M_GetUltra_Dynamic_Sky_Sphere() const {
	return Read<class UStaticMeshComponent*>((byte*)this + 584);
}
class UStaticMeshComponent** ABP_WeatherManager_C::M_PtrGetUltra_Dynamic_Sky_Sphere() {
	return reinterpret_cast<class UStaticMeshComponent**>((byte*)this + 584);
}
void ABP_WeatherManager_C::M_SetUltra_Dynamic_Sky_Sphere(const class UStaticMeshComponent*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of Sun_Light
// Declaration: class ADirectionalLight* Sun_Light
class ADirectionalLight* ABP_WeatherManager_C::M_GetSun_Light() const {
	return Read<class ADirectionalLight*>((byte*)this + 592);
}
class ADirectionalLight** ABP_WeatherManager_C::M_PtrGetSun_Light() {
	return reinterpret_cast<class ADirectionalLight**>((byte*)this + 592);
}
void ABP_WeatherManager_C::M_SetSun_Light(const class ADirectionalLight*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of Sky_MID
// Declaration: class UMaterialInstanceDynamic* Sky_MID
class UMaterialInstanceDynamic* ABP_WeatherManager_C::M_GetSky_MID() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 600);
}
class UMaterialInstanceDynamic** ABP_WeatherManager_C::M_PtrGetSky_MID() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 600);
}
void ABP_WeatherManager_C::M_SetSky_MID(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of Refresh_Settings
// Declaration: bool Refresh_Settings
bool ABP_WeatherManager_C::M_GetRefresh_Settings() const {
	return Read<bool>((byte*)this + 608);
}
bool* ABP_WeatherManager_C::M_PtrGetRefresh_Settings() {
	return reinterpret_cast<bool*>((byte*)this + 608);
}
void ABP_WeatherManager_C::M_SetRefresh_Settings(const bool& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of CloudSpeed
// Declaration: float CloudSpeed
float ABP_WeatherManager_C::M_GetCloudSpeed() const {
	return Read<float>((byte*)this + 612);
}
float* ABP_WeatherManager_C::M_PtrGetCloudSpeed() {
	return reinterpret_cast<float*>((byte*)this + 612);
}
void ABP_WeatherManager_C::M_SetCloudSpeed(const float& value) {
	Write((byte*)this + 612, value);
}
// Member Getter and Setter of CloudDensity
// Declaration: float CloudDensity
float ABP_WeatherManager_C::M_GetCloudDensity() const {
	return Read<float>((byte*)this + 616);
}
float* ABP_WeatherManager_C::M_PtrGetCloudDensity() {
	return reinterpret_cast<float*>((byte*)this + 616);
}
void ABP_WeatherManager_C::M_SetCloudDensity(const float& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of CloudOpacity
// Declaration: float CloudOpacity
float ABP_WeatherManager_C::M_GetCloudOpacity() const {
	return Read<float>((byte*)this + 620);
}
float* ABP_WeatherManager_C::M_PtrGetCloudOpacity() {
	return reinterpret_cast<float*>((byte*)this + 620);
}
void ABP_WeatherManager_C::M_SetCloudOpacity(const float& value) {
	Write((byte*)this + 620, value);
}
// Member Getter and Setter of FogDensity
// Declaration: float FogDensity
float ABP_WeatherManager_C::M_GetFogDensity() const {
	return Read<float>((byte*)this + 624);
}
float* ABP_WeatherManager_C::M_PtrGetFogDensity() {
	return reinterpret_cast<float*>((byte*)this + 624);
}
void ABP_WeatherManager_C::M_SetFogDensity(const float& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of WindIntensity
// Declaration: float WindIntensity
float ABP_WeatherManager_C::M_GetWindIntensity() const {
	return Read<float>((byte*)this + 628);
}
float* ABP_WeatherManager_C::M_PtrGetWindIntensity() {
	return reinterpret_cast<float*>((byte*)this + 628);
}
void ABP_WeatherManager_C::M_SetWindIntensity(const float& value) {
	Write((byte*)this + 628, value);
}
// Member Getter and Setter of PrecipitationIntensity
// Declaration: float PrecipitationIntensity
float ABP_WeatherManager_C::M_GetPrecipitationIntensity() const {
	return Read<float>((byte*)this + 632);
}
float* ABP_WeatherManager_C::M_PtrGetPrecipitationIntensity() {
	return reinterpret_cast<float*>((byte*)this + 632);
}
void ABP_WeatherManager_C::M_SetPrecipitationIntensity(const float& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of Cloud_Wisps_Opacity
// Declaration: float Cloud_Wisps_Opacity
float ABP_WeatherManager_C::M_GetCloud_Wisps_Opacity() const {
	return Read<float>((byte*)this + 636);
}
float* ABP_WeatherManager_C::M_PtrGetCloud_Wisps_Opacity() {
	return reinterpret_cast<float*>((byte*)this + 636);
}
void ABP_WeatherManager_C::M_SetCloud_Wisps_Opacity(const float& value) {
	Write((byte*)this + 636, value);
}
// Member Getter and Setter of HorizonBaseColorCurves
// Declaration: TArray<class UCurveLinearColor*> HorizonBaseColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetHorizonBaseColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 640);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetHorizonBaseColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 640);
}
void ABP_WeatherManager_C::M_SetHorizonBaseColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of ZenithBaseColorCurves
// Declaration: TArray<class UCurveLinearColor*> ZenithBaseColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetZenithBaseColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 656);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetZenithBaseColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 656);
}
void ABP_WeatherManager_C::M_SetZenithBaseColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of CloudLightColorCurves
// Declaration: TArray<class UCurveLinearColor*> CloudLightColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetCloudLightColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 672);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetCloudLightColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 672);
}
void ABP_WeatherManager_C::M_SetCloudLightColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of CloudDarkColorCurves
// Declaration: TArray<class UCurveLinearColor*> CloudDarkColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetCloudDarkColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 688);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetCloudDarkColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 688);
}
void ABP_WeatherManager_C::M_SetCloudDarkColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of SunIntensityCorrection
// Declaration: bool SunIntensityCorrection
bool ABP_WeatherManager_C::M_GetSunIntensityCorrection() const {
	return Read<bool>((byte*)this + 704);
}
bool* ABP_WeatherManager_C::M_PtrGetSunIntensityCorrection() {
	return reinterpret_cast<bool*>((byte*)this + 704);
}
void ABP_WeatherManager_C::M_SetSunIntensityCorrection(const bool& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of WeatherVariation
// Declaration: int32_t WeatherVariation
int32_t ABP_WeatherManager_C::M_GetWeatherVariation() const {
	return Read<int32_t>((byte*)this + 708);
}
int32_t* ABP_WeatherManager_C::M_PtrGetWeatherVariation() {
	return reinterpret_cast<int32_t*>((byte*)this + 708);
}
void ABP_WeatherManager_C::M_SetWeatherVariation(const int32_t& value) {
	Write((byte*)this + 708, value);
}
// Member Getter and Setter of SunColorCurves
// Declaration: TArray<class UCurveLinearColor*> SunColorCurves
TArray<class UCurveLinearColor*> ABP_WeatherManager_C::M_GetSunColorCurves() const {
	return Read<TArray<class UCurveLinearColor*>>((byte*)this + 712);
}
TArray<class UCurveLinearColor*>* ABP_WeatherManager_C::M_PtrGetSunColorCurves() {
	return reinterpret_cast<TArray<class UCurveLinearColor*>*>((byte*)this + 712);
}
void ABP_WeatherManager_C::M_SetSunColorCurves(const TArray<class UCurveLinearColor*>& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of Shine_Intensity_Curve
// Declaration: class UCurveFloat* Shine_Intensity_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetShine_Intensity_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 728);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetShine_Intensity_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 728);
}
void ABP_WeatherManager_C::M_SetShine_Intensity_Curve(const class UCurveFloat*& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of Time
// Declaration: struct FST_Time Time
struct FST_Time ABP_WeatherManager_C::M_GetTime() const {
	return Read<struct FST_Time>((byte*)this + 736);
}
struct FST_Time* ABP_WeatherManager_C::M_PtrGetTime() {
	return reinterpret_cast<struct FST_Time*>((byte*)this + 736);
}
void ABP_WeatherManager_C::M_SetTime(const struct FST_Time& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of Saturation
// Declaration: float Saturation
float ABP_WeatherManager_C::M_GetSaturation() const {
	return Read<float>((byte*)this + 760);
}
float* ABP_WeatherManager_C::M_PtrGetSaturation() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void ABP_WeatherManager_C::M_SetSaturation(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of Sun_Intensity_Curve
// Declaration: class UCurveFloat* Sun_Intensity_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetSun_Intensity_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 768);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSun_Intensity_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 768);
}
void ABP_WeatherManager_C::M_SetSun_Intensity_Curve(const class UCurveFloat*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of Cloudy_SunColorCurve
// Declaration: class UCurveLinearColor* Cloudy_SunColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_SunColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 776);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_SunColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 776);
}
void ABP_WeatherManager_C::M_SetCloudy_SunColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of Exponential_Height_Fog
// Declaration: class AExponentialHeightFog* Exponential_Height_Fog
class AExponentialHeightFog* ABP_WeatherManager_C::M_GetExponential_Height_Fog() const {
	return Read<class AExponentialHeightFog*>((byte*)this + 784);
}
class AExponentialHeightFog** ABP_WeatherManager_C::M_PtrGetExponential_Height_Fog() {
	return reinterpret_cast<class AExponentialHeightFog**>((byte*)this + 784);
}
void ABP_WeatherManager_C::M_SetExponential_Height_Fog(const class AExponentialHeightFog*& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of Cloudy_CloudLightColorCurve
// Declaration: class UCurveLinearColor* Cloudy_CloudLightColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_CloudLightColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 792);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_CloudLightColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 792);
}
void ABP_WeatherManager_C::M_SetCloudy_CloudLightColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of Cloudy_CloudDarkColorCurve
// Declaration: class UCurveLinearColor* Cloudy_CloudDarkColorCurve
class UCurveLinearColor* ABP_WeatherManager_C::M_GetCloudy_CloudDarkColorCurve() const {
	return Read<class UCurveLinearColor*>((byte*)this + 800);
}
class UCurveLinearColor** ABP_WeatherManager_C::M_PtrGetCloudy_CloudDarkColorCurve() {
	return reinterpret_cast<class UCurveLinearColor**>((byte*)this + 800);
}
void ABP_WeatherManager_C::M_SetCloudy_CloudDarkColorCurve(const class UCurveLinearColor*& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of Stars_Intensity_Curve
// Declaration: class UCurveFloat* Stars_Intensity_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetStars_Intensity_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 808);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetStars_Intensity_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 808);
}
void ABP_WeatherManager_C::M_SetStars_Intensity_Curve(const class UCurveFloat*& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of CloudPhase
// Declaration: float CloudPhase
float ABP_WeatherManager_C::M_GetCloudPhase() const {
	return Read<float>((byte*)this + 816);
}
float* ABP_WeatherManager_C::M_PtrGetCloudPhase() {
	return reinterpret_cast<float*>((byte*)this + 816);
}
void ABP_WeatherManager_C::M_SetCloudPhase(const float& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of Moon_Scale
// Declaration: float Moon_Scale
float ABP_WeatherManager_C::M_GetMoon_Scale() const {
	return Read<float>((byte*)this + 820);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Scale() {
	return reinterpret_cast<float*>((byte*)this + 820);
}
void ABP_WeatherManager_C::M_SetMoon_Scale(const float& value) {
	Write((byte*)this + 820, value);
}
// Member Getter and Setter of Moon_Inclination
// Declaration: float Moon_Inclination
float ABP_WeatherManager_C::M_GetMoon_Inclination() const {
	return Read<float>((byte*)this + 824);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Inclination() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void ABP_WeatherManager_C::M_SetMoon_Inclination(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of Moon_Phase
// Declaration: float Moon_Phase
float ABP_WeatherManager_C::M_GetMoon_Phase() const {
	return Read<float>((byte*)this + 828);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Phase() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void ABP_WeatherManager_C::M_SetMoon_Phase(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of Moon_Intensity
// Declaration: float Moon_Intensity
float ABP_WeatherManager_C::M_GetMoon_Intensity() const {
	return Read<float>((byte*)this + 832);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 832);
}
void ABP_WeatherManager_C::M_SetMoon_Intensity(const float& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of Sun_Angle
// Declaration: float Sun_Angle
float ABP_WeatherManager_C::M_GetSun_Angle() const {
	return Read<float>((byte*)this + 836);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Angle() {
	return reinterpret_cast<float*>((byte*)this + 836);
}
void ABP_WeatherManager_C::M_SetSun_Angle(const float& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of Moon_Position_Curve
// Declaration: class UCurveFloat* Moon_Position_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetMoon_Position_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 840);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetMoon_Position_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 840);
}
void ABP_WeatherManager_C::M_SetMoon_Position_Curve(const class UCurveFloat*& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of CloudDensity_Target
// Declaration: float CloudDensity_Target
float ABP_WeatherManager_C::M_GetCloudDensity_Target() const {
	return Read<float>((byte*)this + 848);
}
float* ABP_WeatherManager_C::M_PtrGetCloudDensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 848);
}
void ABP_WeatherManager_C::M_SetCloudDensity_Target(const float& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of Cloud_Density_Change_Speed
// Declaration: float Cloud_Density_Change_Speed
float ABP_WeatherManager_C::M_GetCloud_Density_Change_Speed() const {
	return Read<float>((byte*)this + 852);
}
float* ABP_WeatherManager_C::M_PtrGetCloud_Density_Change_Speed() {
	return reinterpret_cast<float*>((byte*)this + 852);
}
void ABP_WeatherManager_C::M_SetCloud_Density_Change_Speed(const float& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of Overall_Intensity
// Declaration: float Overall_Intensity
float ABP_WeatherManager_C::M_GetOverall_Intensity() const {
	return Read<float>((byte*)this + 856);
}
float* ABP_WeatherManager_C::M_PtrGetOverall_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 856);
}
void ABP_WeatherManager_C::M_SetOverall_Intensity(const float& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of Sun_Brightness
// Declaration: float Sun_Brightness
float ABP_WeatherManager_C::M_GetSun_Brightness() const {
	return Read<float>((byte*)this + 860);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Brightness() {
	return reinterpret_cast<float*>((byte*)this + 860);
}
void ABP_WeatherManager_C::M_SetSun_Brightness(const float& value) {
	Write((byte*)this + 860, value);
}
// Member Getter and Setter of Moon_Color
// Declaration: struct FLinearColor Moon_Color
struct FLinearColor ABP_WeatherManager_C::M_GetMoon_Color() const {
	return Read<struct FLinearColor>((byte*)this + 864);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetMoon_Color() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 864);
}
void ABP_WeatherManager_C::M_SetMoon_Color(const struct FLinearColor& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of CloudOpacity_Target
// Declaration: float CloudOpacity_Target
float ABP_WeatherManager_C::M_GetCloudOpacity_Target() const {
	return Read<float>((byte*)this + 880);
}
float* ABP_WeatherManager_C::M_PtrGetCloudOpacity_Target() {
	return reinterpret_cast<float*>((byte*)this + 880);
}
void ABP_WeatherManager_C::M_SetCloudOpacity_Target(const float& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of FogDensity_Target
// Declaration: float FogDensity_Target
float ABP_WeatherManager_C::M_GetFogDensity_Target() const {
	return Read<float>((byte*)this + 884);
}
float* ABP_WeatherManager_C::M_PtrGetFogDensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 884);
}
void ABP_WeatherManager_C::M_SetFogDensity_Target(const float& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of WindIntensity_Target
// Declaration: float WindIntensity_Target
float ABP_WeatherManager_C::M_GetWindIntensity_Target() const {
	return Read<float>((byte*)this + 888);
}
float* ABP_WeatherManager_C::M_PtrGetWindIntensity_Target() {
	return reinterpret_cast<float*>((byte*)this + 888);
}
void ABP_WeatherManager_C::M_SetWindIntensity_Target(const float& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of WindDirection_Target
// Declaration: float WindDirection_Target
float ABP_WeatherManager_C::M_GetWindDirection_Target() const {
	return Read<float>((byte*)this + 892);
}
float* ABP_WeatherManager_C::M_PtrGetWindDirection_Target() {
	return reinterpret_cast<float*>((byte*)this + 892);
}
void ABP_WeatherManager_C::M_SetWindDirection_Target(const float& value) {
	Write((byte*)this + 892, value);
}
// Member Getter and Setter of Shine_Variation
// Declaration: float Shine_Variation
float ABP_WeatherManager_C::M_GetShine_Variation() const {
	return Read<float>((byte*)this + 896);
}
float* ABP_WeatherManager_C::M_PtrGetShine_Variation() {
	return reinterpret_cast<float*>((byte*)this + 896);
}
void ABP_WeatherManager_C::M_SetShine_Variation(const float& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of SunLightingIntensity
// Declaration: float SunLightingIntensity
float ABP_WeatherManager_C::M_GetSunLightingIntensity() const {
	return Read<float>((byte*)this + 900);
}
float* ABP_WeatherManager_C::M_PtrGetSunLightingIntensity() {
	return reinterpret_cast<float*>((byte*)this + 900);
}
void ABP_WeatherManager_C::M_SetSunLightingIntensity(const float& value) {
	Write((byte*)this + 900, value);
}
// Member Getter and Setter of Sun_Highlight_Radius_curve
// Declaration: class UCurveFloat* Sun_Highlight_Radius_curve
class UCurveFloat* ABP_WeatherManager_C::M_GetSun_Highlight_Radius_curve() const {
	return Read<class UCurveFloat*>((byte*)this + 904);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSun_Highlight_Radius_curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 904);
}
void ABP_WeatherManager_C::M_SetSun_Highlight_Radius_curve(const class UCurveFloat*& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of CloudShadows
// Declaration: TAssetPtr<class UMaterialInterface> CloudShadows
TAssetPtr<class UMaterialInterface> ABP_WeatherManager_C::M_GetCloudShadows() const {
	return Read<TAssetPtr<class UMaterialInterface>>((byte*)this + 912);
}
TAssetPtr<class UMaterialInterface>* ABP_WeatherManager_C::M_PtrGetCloudShadows() {
	return reinterpret_cast<TAssetPtr<class UMaterialInterface>*>((byte*)this + 912);
}
void ABP_WeatherManager_C::M_SetCloudShadows(const TAssetPtr<class UMaterialInterface>& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of Cloud_Shadows_MID
// Declaration: class UMaterialInstanceDynamic* Cloud_Shadows_MID
class UMaterialInstanceDynamic* ABP_WeatherManager_C::M_GetCloud_Shadows_MID() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 952);
}
class UMaterialInstanceDynamic** ABP_WeatherManager_C::M_PtrGetCloud_Shadows_MID() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 952);
}
void ABP_WeatherManager_C::M_SetCloud_Shadows_MID(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of Sun_Highlight_Radius
// Declaration: float Sun_Highlight_Radius
float ABP_WeatherManager_C::M_GetSun_Highlight_Radius() const {
	return Read<float>((byte*)this + 960);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Highlight_Radius() {
	return reinterpret_cast<float*>((byte*)this + 960);
}
void ABP_WeatherManager_C::M_SetSun_Highlight_Radius(const float& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of Cloudy_MoonColor
// Declaration: struct FLinearColor Cloudy_MoonColor
struct FLinearColor ABP_WeatherManager_C::M_GetCloudy_MoonColor() const {
	return Read<struct FLinearColor>((byte*)this + 964);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetCloudy_MoonColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 964);
}
void ABP_WeatherManager_C::M_SetCloudy_MoonColor(const struct FLinearColor& value) {
	Write((byte*)this + 964, value);
}
// Member Getter and Setter of Stars_Intensity
// Declaration: float Stars_Intensity
float ABP_WeatherManager_C::M_GetStars_Intensity() const {
	return Read<float>((byte*)this + 980);
}
float* ABP_WeatherManager_C::M_PtrGetStars_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 980);
}
void ABP_WeatherManager_C::M_SetStars_Intensity(const float& value) {
	Write((byte*)this + 980, value);
}
// Member Getter and Setter of Stars_Color
// Declaration: struct FLinearColor Stars_Color
struct FLinearColor ABP_WeatherManager_C::M_GetStars_Color() const {
	return Read<struct FLinearColor>((byte*)this + 984);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetStars_Color() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 984);
}
void ABP_WeatherManager_C::M_SetStars_Color(const struct FLinearColor& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of Moon_Orbit_Offset
// Declaration: float Moon_Orbit_Offset
float ABP_WeatherManager_C::M_GetMoon_Orbit_Offset() const {
	return Read<float>((byte*)this + 1000);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Orbit_Offset() {
	return reinterpret_cast<float*>((byte*)this + 1000);
}
void ABP_WeatherManager_C::M_SetMoon_Orbit_Offset(const float& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of Sun_Rotation
// Declaration: struct FRotator Sun_Rotation
struct FRotator ABP_WeatherManager_C::M_GetSun_Rotation() const {
	return Read<struct FRotator>((byte*)this + 1004);
}
struct FRotator* ABP_WeatherManager_C::M_PtrGetSun_Rotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1004);
}
void ABP_WeatherManager_C::M_SetSun_Rotation(const struct FRotator& value) {
	Write((byte*)this + 1004, value);
}
// Member Getter and Setter of Sun_Radius
// Declaration: float Sun_Radius
float ABP_WeatherManager_C::M_GetSun_Radius() const {
	return Read<float>((byte*)this + 1016);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Radius() {
	return reinterpret_cast<float*>((byte*)this + 1016);
}
void ABP_WeatherManager_C::M_SetSun_Radius(const float& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of UseCloudShadows
// Declaration: bool UseCloudShadows
bool ABP_WeatherManager_C::M_GetUseCloudShadows() const {
	return Read<bool>((byte*)this + 1020);
}
bool* ABP_WeatherManager_C::M_PtrGetUseCloudShadows() {
	return reinterpret_cast<bool*>((byte*)this + 1020);
}
void ABP_WeatherManager_C::M_SetUseCloudShadows(const bool& value) {
	Write((byte*)this + 1020, value);
}
// Member Getter and Setter of CloudShadowsScale
// Declaration: float CloudShadowsScale
float ABP_WeatherManager_C::M_GetCloudShadowsScale() const {
	return Read<float>((byte*)this + 1024);
}
float* ABP_WeatherManager_C::M_PtrGetCloudShadowsScale() {
	return reinterpret_cast<float*>((byte*)this + 1024);
}
void ABP_WeatherManager_C::M_SetCloudShadowsScale(const float& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of CloudShadowsIntensity
// Declaration: float CloudShadowsIntensity
float ABP_WeatherManager_C::M_GetCloudShadowsIntensity() const {
	return Read<float>((byte*)this + 1028);
}
float* ABP_WeatherManager_C::M_PtrGetCloudShadowsIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1028);
}
void ABP_WeatherManager_C::M_SetCloudShadowsIntensity(const float& value) {
	Write((byte*)this + 1028, value);
}
// Member Getter and Setter of Moon_Light
// Declaration: class ADirectionalLight* Moon_Light
class ADirectionalLight* ABP_WeatherManager_C::M_GetMoon_Light() const {
	return Read<class ADirectionalLight*>((byte*)this + 1032);
}
class ADirectionalLight** ABP_WeatherManager_C::M_PtrGetMoon_Light() {
	return reinterpret_cast<class ADirectionalLight**>((byte*)this + 1032);
}
void ABP_WeatherManager_C::M_SetMoon_Light(const class ADirectionalLight*& value) {
	Write((byte*)this + 1032, value);
}
// Member Getter and Setter of Moonlight_Intensity
// Declaration: float Moonlight_Intensity
float ABP_WeatherManager_C::M_GetMoonlight_Intensity() const {
	return Read<float>((byte*)this + 1040);
}
float* ABP_WeatherManager_C::M_PtrGetMoonlight_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 1040);
}
void ABP_WeatherManager_C::M_SetMoonlight_Intensity(const float& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of Stars_Speed
// Declaration: float Stars_Speed
float ABP_WeatherManager_C::M_GetStars_Speed() const {
	return Read<float>((byte*)this + 1044);
}
float* ABP_WeatherManager_C::M_PtrGetStars_Speed() {
	return reinterpret_cast<float*>((byte*)this + 1044);
}
void ABP_WeatherManager_C::M_SetStars_Speed(const float& value) {
	Write((byte*)this + 1044, value);
}
// Member Getter and Setter of Sun_Inclination
// Declaration: float Sun_Inclination
float ABP_WeatherManager_C::M_GetSun_Inclination() const {
	return Read<float>((byte*)this + 1048);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Inclination() {
	return reinterpret_cast<float*>((byte*)this + 1048);
}
void ABP_WeatherManager_C::M_SetSun_Inclination(const float& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of Sun_Yaw
// Declaration: float Sun_Yaw
float ABP_WeatherManager_C::M_GetSun_Yaw() const {
	return Read<float>((byte*)this + 1052);
}
float* ABP_WeatherManager_C::M_PtrGetSun_Yaw() {
	return reinterpret_cast<float*>((byte*)this + 1052);
}
void ABP_WeatherManager_C::M_SetSun_Yaw(const float& value) {
	Write((byte*)this + 1052, value);
}
// Member Getter and Setter of Moon_Rotation
// Declaration: float Moon_Rotation
float ABP_WeatherManager_C::M_GetMoon_Rotation() const {
	return Read<float>((byte*)this + 1056);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Rotation() {
	return reinterpret_cast<float*>((byte*)this + 1056);
}
void ABP_WeatherManager_C::M_SetMoon_Rotation(const float& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of Custom_Moon_Texture
// Declaration: class UTexture2D* Custom_Moon_Texture
class UTexture2D* ABP_WeatherManager_C::M_GetCustom_Moon_Texture() const {
	return Read<class UTexture2D*>((byte*)this + 1064);
}
class UTexture2D** ABP_WeatherManager_C::M_PtrGetCustom_Moon_Texture() {
	return reinterpret_cast<class UTexture2D**>((byte*)this + 1064);
}
void ABP_WeatherManager_C::M_SetCustom_Moon_Texture(const class UTexture2D*& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of Use_Custom_Moon_Texture
// Declaration: bool Use_Custom_Moon_Texture
bool ABP_WeatherManager_C::M_GetUse_Custom_Moon_Texture() const {
	return Read<bool>((byte*)this + 1072);
}
bool* ABP_WeatherManager_C::M_PtrGetUse_Custom_Moon_Texture() {
	return reinterpret_cast<bool*>((byte*)this + 1072);
}
void ABP_WeatherManager_C::M_SetUse_Custom_Moon_Texture(const bool& value) {
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
// Member Getter and Setter of Night_Filter_Curve
// Declaration: class UCurveFloat* Night_Filter_Curve
class UCurveFloat* ABP_WeatherManager_C::M_GetNight_Filter_Curve() const {
	return Read<class UCurveFloat*>((byte*)this + 1088);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetNight_Filter_Curve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1088);
}
void ABP_WeatherManager_C::M_SetNight_Filter_Curve(const class UCurveFloat*& value) {
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
// Member Getter and Setter of Moon_Glow_Intensity
// Declaration: float Moon_Glow_Intensity
float ABP_WeatherManager_C::M_GetMoon_Glow_Intensity() const {
	return Read<float>((byte*)this + 1100);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Glow_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 1100);
}
void ABP_WeatherManager_C::M_SetMoon_Glow_Intensity(const float& value) {
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
// Member Getter and Setter of Moon_Angle
// Declaration: float Moon_Angle
float ABP_WeatherManager_C::M_GetMoon_Angle() const {
	return Read<float>((byte*)this + 1184);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Angle() {
	return reinterpret_cast<float*>((byte*)this + 1184);
}
void ABP_WeatherManager_C::M_SetMoon_Angle(const float& value) {
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
// Member Getter and Setter of Stars_Phase
// Declaration: float Stars_Phase
float ABP_WeatherManager_C::M_GetStars_Phase() const {
	return Read<float>((byte*)this + 1196);
}
float* ABP_WeatherManager_C::M_PtrGetStars_Phase() {
	return reinterpret_cast<float*>((byte*)this + 1196);
}
void ABP_WeatherManager_C::M_SetStars_Phase(const float& value) {
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
// Member Getter and Setter of WaterTemperature
// Declaration: float WaterTemperature
float ABP_WeatherManager_C::M_GetWaterTemperature() const {
	return Read<float>((byte*)this + 1208);
}
float* ABP_WeatherManager_C::M_PtrGetWaterTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1208);
}
void ABP_WeatherManager_C::M_SetWaterTemperature(const float& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of Air_TemperatureCurve
// Declaration: TArray<class UCurveFloat*> Air_TemperatureCurve
TArray<class UCurveFloat*> ABP_WeatherManager_C::M_GetAir_TemperatureCurve() const {
	return Read<TArray<class UCurveFloat*>>((byte*)this + 1216);
}
TArray<class UCurveFloat*>* ABP_WeatherManager_C::M_PtrGetAir_TemperatureCurve() {
	return reinterpret_cast<TArray<class UCurveFloat*>*>((byte*)this + 1216);
}
void ABP_WeatherManager_C::M_SetAir_TemperatureCurve(const TArray<class UCurveFloat*>& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of TimeOfDay
// Declaration: float TimeOfDay
float ABP_WeatherManager_C::M_GetTimeOfDay() const {
	return Read<float>((byte*)this + 1232);
}
float* ABP_WeatherManager_C::M_PtrGetTimeOfDay() {
	return reinterpret_cast<float*>((byte*)this + 1232);
}
void ABP_WeatherManager_C::M_SetTimeOfDay(const float& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of TimeOfMonth
// Declaration: float TimeOfMonth
float ABP_WeatherManager_C::M_GetTimeOfMonth() const {
	return Read<float>((byte*)this + 1236);
}
float* ABP_WeatherManager_C::M_PtrGetTimeOfMonth() {
	return reinterpret_cast<float*>((byte*)this + 1236);
}
void ABP_WeatherManager_C::M_SetTimeOfMonth(const float& value) {
	Write((byte*)this + 1236, value);
}
// Member Getter and Setter of SkyLightIntensity
// Declaration: class UCurveFloat* SkyLightIntensity
class UCurveFloat* ABP_WeatherManager_C::M_GetSkyLightIntensity() const {
	return Read<class UCurveFloat*>((byte*)this + 1240);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSkyLightIntensity() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1240);
}
void ABP_WeatherManager_C::M_SetSkyLightIntensity(const class UCurveFloat*& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of StartPrecipitation
// Declaration: TAssetPtr<class FStartPrecipitation__DelegateSignature> StartPrecipitation
TAssetPtr<class FStartPrecipitation__DelegateSignature> ABP_WeatherManager_C::M_GetStartPrecipitation() const {
	return Read<TAssetPtr<class FStartPrecipitation__DelegateSignature>>((byte*)this + 1248);
}
TAssetPtr<class FStartPrecipitation__DelegateSignature>* ABP_WeatherManager_C::M_PtrGetStartPrecipitation() {
	return reinterpret_cast<TAssetPtr<class FStartPrecipitation__DelegateSignature>*>((byte*)this + 1248);
}
void ABP_WeatherManager_C::M_SetStartPrecipitation(const TAssetPtr<class FStartPrecipitation__DelegateSignature>& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of StopPrecipitation
// Declaration: TAssetPtr<class FStopPrecipitation__DelegateSignature> StopPrecipitation
TAssetPtr<class FStopPrecipitation__DelegateSignature> ABP_WeatherManager_C::M_GetStopPrecipitation() const {
	return Read<TAssetPtr<class FStopPrecipitation__DelegateSignature>>((byte*)this + 1264);
}
TAssetPtr<class FStopPrecipitation__DelegateSignature>* ABP_WeatherManager_C::M_PtrGetStopPrecipitation() {
	return reinterpret_cast<TAssetPtr<class FStopPrecipitation__DelegateSignature>*>((byte*)this + 1264);
}
void ABP_WeatherManager_C::M_SetStopPrecipitation(const TAssetPtr<class FStopPrecipitation__DelegateSignature>& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of SkyLightIntensity_LowQuality
// Declaration: class UCurveFloat* SkyLightIntensity_LowQuality
class UCurveFloat* ABP_WeatherManager_C::M_GetSkyLightIntensity_LowQuality() const {
	return Read<class UCurveFloat*>((byte*)this + 1280);
}
class UCurveFloat** ABP_WeatherManager_C::M_PtrGetSkyLightIntensity_LowQuality() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1280);
}
void ABP_WeatherManager_C::M_SetSkyLightIntensity_LowQuality(const class UCurveFloat*& value) {
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
// Member Getter and Setter of Fog_Density_Change_Speed
// Declaration: float Fog_Density_Change_Speed
float ABP_WeatherManager_C::M_GetFog_Density_Change_Speed() const {
	return Read<float>((byte*)this + 1292);
}
float* ABP_WeatherManager_C::M_PtrGetFog_Density_Change_Speed() {
	return reinterpret_cast<float*>((byte*)this + 1292);
}
void ABP_WeatherManager_C::M_SetFog_Density_Change_Speed(const float& value) {
	Write((byte*)this + 1292, value);
}
// Member Getter and Setter of Wind_Intensity_Change_Speed
// Declaration: float Wind_Intensity_Change_Speed
float ABP_WeatherManager_C::M_GetWind_Intensity_Change_Speed() const {
	return Read<float>((byte*)this + 1296);
}
float* ABP_WeatherManager_C::M_PtrGetWind_Intensity_Change_Speed() {
	return reinterpret_cast<float*>((byte*)this + 1296);
}
void ABP_WeatherManager_C::M_SetWind_Intensity_Change_Speed(const float& value) {
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
// Member Getter and Setter of TargetSkyLightIntensity
// Declaration: float TargetSkyLightIntensity
float ABP_WeatherManager_C::M_GetTargetSkyLightIntensity() const {
	return Read<float>((byte*)this + 1356);
}
float* ABP_WeatherManager_C::M_PtrGetTargetSkyLightIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1356);
}
void ABP_WeatherManager_C::M_SetTargetSkyLightIntensity(const float& value) {
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
// Member Getter and Setter of Extend_Dawn_and_Dusk
// Declaration: float Extend_Dawn_and_Dusk
float ABP_WeatherManager_C::M_GetExtend_Dawn_and_Dusk() const {
	return Read<float>((byte*)this + 1364);
}
float* ABP_WeatherManager_C::M_PtrGetExtend_Dawn_and_Dusk() {
	return reinterpret_cast<float*>((byte*)this + 1364);
}
void ABP_WeatherManager_C::M_SetExtend_Dawn_and_Dusk(const float& value) {
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
// Member Getter and Setter of Internal_Time_of_Day
// Declaration: float Internal_Time_of_Day
float ABP_WeatherManager_C::M_GetInternal_Time_of_Day() const {
	return Read<float>((byte*)this + 1400);
}
float* ABP_WeatherManager_C::M_PtrGetInternal_Time_of_Day() {
	return reinterpret_cast<float*>((byte*)this + 1400);
}
void ABP_WeatherManager_C::M_SetInternal_Time_of_Day(const float& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of Moon_Vertical_Offset
// Declaration: float Moon_Vertical_Offset
float ABP_WeatherManager_C::M_GetMoon_Vertical_Offset() const {
	return Read<float>((byte*)this + 1404);
}
float* ABP_WeatherManager_C::M_PtrGetMoon_Vertical_Offset() {
	return reinterpret_cast<float*>((byte*)this + 1404);
}
void ABP_WeatherManager_C::M_SetMoon_Vertical_Offset(const float& value) {
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
// Member Getter and Setter of Water_TemperatureCurve
// Declaration: TArray<class UCurveFloat*> Water_TemperatureCurve
TArray<class UCurveFloat*> ABP_WeatherManager_C::M_GetWater_TemperatureCurve() const {
	return Read<TArray<class UCurveFloat*>>((byte*)this + 1416);
}
TArray<class UCurveFloat*>* ABP_WeatherManager_C::M_PtrGetWater_TemperatureCurve() {
	return reinterpret_cast<TArray<class UCurveFloat*>*>((byte*)this + 1416);
}
void ABP_WeatherManager_C::M_SetWater_TemperatureCurve(const TArray<class UCurveFloat*>& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of CurrentSunColor
// Declaration: struct FLinearColor CurrentSunColor
struct FLinearColor ABP_WeatherManager_C::M_GetCurrentSunColor() const {
	return Read<struct FLinearColor>((byte*)this + 1432);
}
struct FLinearColor* ABP_WeatherManager_C::M_PtrGetCurrentSunColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 1432);
}
void ABP_WeatherManager_C::M_SetCurrentSunColor(const struct FLinearColor& value) {
	Write((byte*)this + 1432, value);
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
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateLightsRotation
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateLightsRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateLightsRotation");

	struct ABP_WeatherManager_C_UpdateLightsRotation_Params {
	};
	ABP_WeatherManager_C_UpdateLightsRotation_Params params;

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
// Function BP_WeatherManager.BP_WeatherManager_C.Set Solar Angle
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::Set_Solar_Angle() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.Set Solar Angle");

	struct ABP_WeatherManager_C_Set_Solar_Angle_Params {
	};
	ABP_WeatherManager_C_Set_Solar_Angle_Params params;

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
// Function BP_WeatherManager.BP_WeatherManager_C.UpdateWorldTemperature
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_WeatherManager_C::UpdateWorldTemperature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherManager.BP_WeatherManager_C.UpdateWorldTemperature");

	struct ABP_WeatherManager_C_UpdateWorldTemperature_Params {
	};
	ABP_WeatherManager_C_UpdateWorldTemperature_Params params;

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
// InheritableComponentHandler BP_WeatherManager.BP_WeatherManager_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic
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