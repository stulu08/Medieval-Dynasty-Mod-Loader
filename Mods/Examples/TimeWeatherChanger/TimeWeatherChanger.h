#pragma once
#include "MDML/MDML.h"

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
	virtual void OnModInitialize() override;
	virtual void OnModMenuButtonPressed() override;
	virtual bool GameTick(float deltaTime) override;
	virtual bool DrawImGui() override;
private:
	bool m_alwaysClearWeather = false;
	bool m_NoWind = false;
	bool m_NoFog = false;
	float m_noFogValue = 0.015f;
};