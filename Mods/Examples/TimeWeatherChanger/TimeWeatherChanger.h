#pragma once
#include "MDML/MDML.h"

class TimeWeatherChanger : public GameMod
{
public:
	// Name, version, author and description are in mod.ini ([Mod]).
	TimeWeatherChanger() {
		EnabledModEvents = EventsEnabled::EngineAndGui;// You can enable specific events here to improve performance
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