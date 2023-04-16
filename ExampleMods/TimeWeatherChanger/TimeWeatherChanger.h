#pragma once
#include "Mod/Mod.h"
#include "GameMod.h"

class TimeWeatherChanger : public GameMod
{
public:
	//Basic Mod Info
	TimeWeatherChanger(HMODULE handle = nullptr)
		: GameMod(handle) {
		ModName = "TimeWeatherChanger"; // Mod Name -- If Using BP ModActor, Should Be The Same Name As Your Pak
		ModVersion = "1.0.0"; // Mod Version
		ModDescription = "Changes the time and weather"; // Mod Description
		ModAuthors = "Stulu"; // Mod Author
		EnabledModEvents = EventsEnabled::EngineAndGui;// You can enable specific events here to improve performance
		CompleteModCreation();
	}
	virtual void OnModInitilize() override;
	virtual void OnModMenuButtonPressed() override;
	virtual bool GameTick(float deltaTime) override;
	virtual bool DrawImGui() override;
private:
	bool m_alwaysClearWeather = false;
	bool m_NoWind = false;
	bool m_NoFog = false;
	int32_t m_cloudDensity = 0;
	int32_t m_windIntensity = 0;
	int32_t m_fogDensity = 0;
	float m_noFogValue = 0.015f;
};