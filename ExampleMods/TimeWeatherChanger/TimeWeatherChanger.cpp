#include "TimeWeatherChanger.h"
#include "Utilities/MinHook.h"

#include "BaseMod.h"

void TimeWeatherChanger::OnModInitilize() {
	UseMenuButton = true; // Allows Mod Loader To Show a Button, if pressed OnModMenuButtonPressed will be called

	m_alwaysClearWeather = this->GetINIConfig<bool>("bAlwaysClearWeather");
	m_NoWind = this->GetINIConfig<bool>("bNoWind");
	m_NoFog = this->GetINIConfig<bool>("bNoFog");
	m_noFogValue = this->GetINIConfig<float>("fNoFogValue", "Config", 0.015f);
}

static bool showWindow = true;
void TimeWeatherChanger::OnModMenuButtonPressed() {
	showWindow = !showWindow;
}

bool TimeWeatherChanger::GameTick(float deltaTime) {
	if (getMedievalDynastyGameMode() == nullptr) {
		return false;
	}
	if (getMainGameManager() == nullptr) {
		return false;
	}
	if (getWeatherManager() == nullptr) {
		getLogger()->Critical("Could not find Weather Manager");
		return false;
	}
	auto* weather = getWeatherManager();

	if (m_alwaysClearWeather) {
		if (m_cloudDensity == 0) {
			for (UE4::FField* member = (UE4::FField*)weather->GetClass()->GetChildren(); member != nullptr; member = member->GetNext()) {
				UE4::FProperty* prop = member->GetAsProperty();
				if (!prop || prop->GetArrayDim() > 1)
					continue;
				if (prop->IsA<UE4::FFloatProperty>()) {
					if (prop->GetName() == "CloudDensity") {
						m_cloudDensity = prop->GetOffset();
					}
				}
			}
			if (m_cloudDensity == 0) {
				getLogger()->Critical("Could not find address of CloudDensity");
				m_alwaysClearWeather = false;
			}
			else {
				getLogger()->Trace("Found CloudDensity at {0}", m_cloudDensity);
			}
		}
		Write<float>((byte*)weather + m_cloudDensity, 0.0f);
	}
	if (m_NoFog) {
		if (m_fogDensity == 0) {
			for (UE4::FField* member = (UE4::FField*)weather->GetClass()->GetChildren(); member != nullptr; member = member->GetNext()) {
				UE4::FProperty* prop = member->GetAsProperty();
				if (!prop || prop->GetArrayDim() > 1)
					continue;
				if (prop->IsA<UE4::FFloatProperty>()) {
					if (prop->GetName() == "FogDensity") {
						m_fogDensity = prop->GetOffset();
					}
				}
			}
			if (m_fogDensity == 0) {
				getLogger()->Critical("Could not find address of FogDensity");
				m_NoFog = false;
			}
			else {
				getLogger()->Trace("Found FogDensity at {0}", m_fogDensity);
			}
		}
		Write<float>((byte*)weather + m_fogDensity, m_noFogValue);
	}
	if (m_NoWind) {
		if (m_windIntensity == 0) {
			for (UE4::FField* member = (UE4::FField*)weather->GetClass()->GetChildren(); member != nullptr; member = member->GetNext()) {
				UE4::FProperty* prop = member->GetAsProperty();
				if (!prop || prop->GetArrayDim() > 1)
					continue;
				if (prop->IsA<UE4::FFloatProperty>()) {
					if (prop->GetName() == "WindIntensity") {
						m_windIntensity = prop->GetOffset();
					}
				}
			}
			if (m_windIntensity == 0) {
				getLogger()->Critical("Could not find address of WindIntensity");
				m_NoWind = false;
			}
			else {
				getLogger()->Trace("Found WindIntensity at {0}", m_windIntensity);
			}
		}
		Write<float>((byte*)weather + m_windIntensity, 0.0f);
	}

	return false;
}

bool TimeWeatherChanger::DrawImGui() {
	if (showWindow) {
		if (ImGui::Begin("Time and Weather Changer", &showWindow)) {
			if (ImGui::CollapsingHeader("Settings")) {
				if (ImGui::Checkbox("Always Clear Weather", &m_alwaysClearWeather)) {
					this->SetINIConfig("bAlwaysClearWeather", m_alwaysClearWeather);
				}
				if (ImGui::Checkbox("No Wind", &m_NoWind)) {
					this->SetINIConfig("bNoWind", m_NoWind);
				}
				if (ImGui::Checkbox("No Fog", &m_NoFog)) {
					this->SetINIConfig("bNoFog", m_NoFog);
				}
				if (ImGui::DragFloat("No Fog Value", &m_noFogValue, 0.025f)) {
					this->SetINIConfig("fNoFogValue", m_noFogValue);
				}
			}
			if (getMedievalDynastyGameMode() == nullptr) {
				ImGui::Text("Player Character not found!");
				ImGui::End();
				return false;
			}
			if (getMainGameManager() == nullptr) {
				ImGui::Text("Game Manager not found!");
				ImGui::End();
				return false;
			}
			if (getWeatherManager() == nullptr) {
				ImGui::Text("Weather Manager not found!");
				ImGui::End();
				return false;
			}
			
			auto* weather = getWeatherManager();
			if (ImGui::Button("Update Weather Manager")) {
				weather->UpdateGraphicsSettings();
				weather->UpdateLightsRotation(true);
				weather->UpdateMaterialCollection();
				weather->UpdateMaterialVariables();

			}
			
			if (ImGui::CollapsingHeader("Instant Updater")) {
				static UE4::FST_Time time = weather->M_GetTime();
				static int32_t DayVariation = 0;
				static bool assignRandomWeather = false;
				static bool assignRandomCloudDensity = false;

				ImGui::DragInt("Second", &time.Second);
				ImGui::DragInt("Minute", &time.Minute);
				ImGui::DragInt("Hour", &time.Hour);
				ImGui::DragInt("Day", &time.Day);
				ImGui::DragInt("Season", &time.Season);
				ImGui::DragInt("Year", &time.Year);
				ImGui::DragInt("Day Variation", &DayVariation);
				ImGui::Checkbox("Assign Random Weather", &assignRandomWeather);
				ImGui::Checkbox("Assign Random Cloud Density", &assignRandomCloudDensity);

				if (ImGui::Button("Update")) {
					weather->UpdateTime(time);
					weather->UpdateWeatherManager(time);
					weather->InstantlyUpdateWeather(time, assignRandomWeather, DayVariation, assignRandomCloudDensity);
					time = weather->M_GetTime();
				}
			}
			if (ImGui::CollapsingHeader("Weather Manager")) {
				UE4::FField* members = (UE4::FField*)weather->GetClass()->GetChildren();
				for (UE4::FField* member = members; member != nullptr; member = member->GetNext()) {
					UE4::FProperty* prop = member->GetAsProperty();
					if (!prop || prop->GetArrayDim() > 1) 
						continue;

					std::string name = prop->GetName();
					if (prop->IsA<UE4::FBoolProperty>()) {
						if (sizeof(bool) != prop->GetElementSize() || ((UE4::FBoolProperty*)prop)->IsBitfield())
							continue;
						bool value = Read<bool>((byte*)weather + prop->GetOffset());
						if (ImGui::Checkbox(("b" + name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), value);
					}
					else if (prop->IsA<UE4::FFloatProperty>()) {
						if (sizeof(float) != prop->GetElementSize()) 
							continue;
						float value = Read<float>((byte*)weather + prop->GetOffset());
						if (ImGui::DragFloat(("f" + name).c_str(), &value, 0.25f, 0.0f, 0.0f))
							Write((byte*)weather + prop->GetOffset(), value);
					}
					else if (prop->IsA<UE4::FDoubleProperty>()) {
						if (sizeof(double) != prop->GetElementSize()) 
							continue;
						float value = (float)Read<double>((byte*)weather + prop->GetOffset());
						if (ImGui::DragFloat(("d" + name).c_str(), &value, 0.25f, 0.0f, 0.0f))
							Write((byte*)weather + prop->GetOffset(), (double)value);
					}
					else if (prop->IsA<UE4::FInt64Property>()) {
						if (sizeof(int64_t) != prop->GetElementSize()) 
							continue;
						int value = (int)Read<int64_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt((name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (int64_t)value);
					}
					else if (prop->IsA<UE4::FIntProperty>()) {
						if (sizeof(int32_t) != prop->GetElementSize()) 
							continue;
						int value = (int)Read<int32_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt((name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (int32_t)value);
					}
					else if (prop->IsA<UE4::FInt16Property>()) {
						if (sizeof(int16_t) != prop->GetElementSize())
							continue;
						int value = (int)Read<int16_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt((name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (int16_t)value);
					}
					else if (prop->IsA<UE4::FInt8Property>()) {
						if (sizeof(int8_t) != prop->GetElementSize())
							continue;;
						int value = (int)Read<int8_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt((name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (int8_t)value);
					}
					else if (prop->IsA<UE4::FUInt64Property>()) {
						if (sizeof(uint64_t) != prop->GetElementSize())
							continue;;
						int32_t value = (int)Read<uint64_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt(("u" + name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (uint64_t)value);
					}
					else if (prop->IsA<UE4::FUInt32Property>()) {
						if (sizeof(uint32_t) != prop->GetElementSize())
							continue;;
						int32_t value = (int)Read<uint32_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt(("u" + name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (uint32_t)value);
					}
					else if (prop->IsA<UE4::FUInt16Property>()) {
						if (sizeof(uint16_t) != prop->GetElementSize())
							continue;;
						int32_t value = (int)Read<uint16_t>((byte*)weather + prop->GetOffset());
						if (ImGui::DragInt(("u" + name).c_str(), &value))
							Write((byte*)weather + prop->GetOffset(), (uint16_t)value);
					}
					else if (prop->IsA<UE4::FStructProperty>()) {
						UE4::FStructProperty* structProp = (UE4::FStructProperty*)prop;
						if (structProp->GetStruct()->GetName() != "LinearColor")
							continue;
						if (sizeof(UE4::FLinearColor) != prop->GetElementSize())
							continue;
						UE4::FLinearColor value = Read<UE4::FLinearColor>((byte*)weather + prop->GetOffset());
						if (ImGui::ColorEdit4(name.c_str(), (float*)&value))
							Write((byte*)weather + prop->GetOffset(), value);
					}
				}
			}
		}
		ImGui::End();
	}
	return false;
}
