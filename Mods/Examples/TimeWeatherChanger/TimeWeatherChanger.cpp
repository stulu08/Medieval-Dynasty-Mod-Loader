#include "TimeWeatherChanger.h"

#include "MDML/GameThread.h"
#include "EngineMemory.h"

// Generated SDK (Loader/SDK/Generated): ABP_WeatherManager_C with its members and functions, FST_Time.
#include "BP_WeatherManager.hpp"

void TimeWeatherChanger::OnModInitialize() {
	// MenuButton=1 in the [Core] section of mod.ini: the Mod Loader shows a button, if pressed OnModMenuButtonPressed will be called

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
	UE4::ABP_WeatherManager_C* weather = getWeatherManager();
	if (!weather)
		return false;

	// Generated members are resolved by property name at first use, so there is no offset to search for any more
	// (before Wave 4 step B this mod walked the class's properties to find CloudDensity & co.).
	if (m_alwaysClearWeather)
		weather->CloudDensity = 0.0f;
	if (m_NoFog)
		weather->FogDensity = m_noFogValue;
	if (m_NoWind)
		weather->WindIntensity = 0.0f;
	return false;
}

bool TimeWeatherChanger::DrawImGui() {
	if (!showWindow)
		return false;
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
		UE4::ABP_WeatherManager_C* weather = getWeatherManager();
		if (!weather) {
			ImGui::Text("Weather Manager not found (load a save)!");
			ImGui::End();
			return false;
		}

		// DrawImGui runs on the render thread: game functions (ProcessEvent) go through the game thread.
		if (ImGui::Button("Update Weather Manager")) {
			mdml::runtime::GameThread::Enqueue([weather]() {
				weather->UpdateGraphicsSettings();
				weather->UpdateLightsRotation(true);
				weather->UpdateMaterialCollection();
				weather->UpdateMaterialVariables();
			});
		}

		if (ImGui::CollapsingHeader("Instant Updater")) {
			static UE4::FST_Time time = weather->Time;
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
				const UE4::FST_Time newTime = time;
				const int32_t dayVariation = DayVariation;
				const bool randomWeather = assignRandomWeather;
				const bool randomCloudDensity = assignRandomCloudDensity;
				mdml::runtime::GameThread::Enqueue([weather, newTime, dayVariation, randomWeather, randomCloudDensity]() {
					weather->UpdateTime(newTime);
					weather->UpdateWeatherManager(newTime);
					weather->InstantlyUpdateWeather(newTime, randomWeather, dayVariation, randomCloudDensity);
				});
			}
			ImGui::SameLine();
			if (ImGui::Button("Read current time"))
				time = weather->Time;
		}
		if (ImGui::CollapsingHeader("Weather Manager")) {
			// Generic editor over every reflected property of the class (shows what the reflection core can do).
			for (UE4::FField* member = weather->GetClass()->GetChildProperties(); member != nullptr; member = member->GetNext()) {
				UE4::FProperty* prop = member->GetAsProperty();
				if (!prop || prop->GetArrayDim() > 1)
					continue;

				const std::string name = prop->GetName();
				const size_t offset = prop->GetOffset();
				if (prop->IsA<UE4::FBoolProperty>()) {
					if (sizeof(bool) != prop->GetElementSize() || ((UE4::FBoolProperty*)prop)->IsBitfield())
						continue;
					bool value = mdml::mem::LoadField<bool>(weather, offset);
					if (ImGui::Checkbox(("b" + name).c_str(), &value))
						mdml::mem::StoreField(weather, offset, value);
				}
				else if (prop->IsA<UE4::FFloatProperty>()) {
					if (sizeof(float) != prop->GetElementSize())
						continue;
					float value = mdml::mem::LoadField<float>(weather, offset);
					if (ImGui::DragFloat(("f" + name).c_str(), &value, 0.25f, 0.0f, 0.0f))
						mdml::mem::StoreField(weather, offset, value);
				}
				else if (prop->IsA<UE4::FDoubleProperty>()) {
					if (sizeof(double) != prop->GetElementSize())
						continue;
					float value = (float)mdml::mem::LoadField<double>(weather, offset);
					if (ImGui::DragFloat(("d" + name).c_str(), &value, 0.25f, 0.0f, 0.0f))
						mdml::mem::StoreField(weather, offset, (double)value);
				}
				else if (prop->IsA<UE4::FInt64Property>()) {
					if (sizeof(int64_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<int64_t>(weather, offset);
					if (ImGui::DragInt(name.c_str(), &value))
						mdml::mem::StoreField(weather, offset, (int64_t)value);
				}
				else if (prop->IsA<UE4::FIntProperty>()) {
					if (sizeof(int32_t) != prop->GetElementSize())
						continue;
					int value = mdml::mem::LoadField<int32_t>(weather, offset);
					if (ImGui::DragInt(name.c_str(), &value))
						mdml::mem::StoreField(weather, offset, (int32_t)value);
				}
				else if (prop->IsA<UE4::FInt16Property>()) {
					if (sizeof(int16_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<int16_t>(weather, offset);
					if (ImGui::DragInt(name.c_str(), &value))
						mdml::mem::StoreField(weather, offset, (int16_t)value);
				}
				else if (prop->IsA<UE4::FInt8Property>()) {
					if (sizeof(int8_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<int8_t>(weather, offset);
					if (ImGui::DragInt(name.c_str(), &value))
						mdml::mem::StoreField(weather, offset, (int8_t)value);
				}
				else if (prop->IsA<UE4::FUInt64Property>()) {
					if (sizeof(uint64_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<uint64_t>(weather, offset);
					if (ImGui::DragInt(("u" + name).c_str(), &value))
						mdml::mem::StoreField(weather, offset, (uint64_t)value);
				}
				else if (prop->IsA<UE4::FUInt32Property>()) {
					if (sizeof(uint32_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<uint32_t>(weather, offset);
					if (ImGui::DragInt(("u" + name).c_str(), &value))
						mdml::mem::StoreField(weather, offset, (uint32_t)value);
				}
				else if (prop->IsA<UE4::FUInt16Property>()) {
					if (sizeof(uint16_t) != prop->GetElementSize())
						continue;
					int value = (int)mdml::mem::LoadField<uint16_t>(weather, offset);
					if (ImGui::DragInt(("u" + name).c_str(), &value))
						mdml::mem::StoreField(weather, offset, (uint16_t)value);
				}
				else if (prop->IsA<UE4::FStructProperty>()) {
					UE4::FStructProperty* structProp = (UE4::FStructProperty*)prop;
					if (structProp->GetStruct()->GetName() != "LinearColor")
						continue;
					if (sizeof(UE4::FLinearColor) != prop->GetElementSize())
						continue;
					UE4::FLinearColor value = mdml::mem::LoadField<UE4::FLinearColor>(weather, offset);
					if (ImGui::ColorEdit4(name.c_str(), (float*)&value))
						mdml::mem::StoreField(weather, offset, value);
				}
			}
		}
	}
	ImGui::End();
	return false;
}
