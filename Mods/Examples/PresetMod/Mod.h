#pragma once
#include "MDML/MDML.h"

class ExampleMod : public GameMod
{
public:

	// Name, version, author and description are in mod.ini ([Mod]); MDML_MOD(ExampleMod) in dllmain.cpp is the entry point.
	ExampleMod() {
		EnabledModEvents = EventsEnabled::Default;// You can enable specific events here to improve performance
	}

	//Load phase 1 (before the engine exists): read settings, change other mods' components through ctx
	virtual void OnLoad(ModContext& ctx) override;

	//Called When Internal GameMod and Mod Setup is finished, use this to setup stuff like hooks or bp functions
	virtual void OnModInitialize() override;

	//Called for every Actor in Menu
	virtual bool MenuBeginPlay(UE4::AActor* Actor);
	//Called for every Actor in loading screen
	virtual bool GameLoadingBeginPlay(UE4::AActor* Actor);
	//Called for every Actor in Game
	virtual bool GameBeginPlay(UE4::AActor* Actor);

	//Called once for the Mod in Menu every tick
	virtual bool MenuTick(float deltaTime);
	//Called once for the Mod in Game every tick
	virtual bool GameTick(float deltaTime);

	//Called when the Menu gets the init call
	virtual bool MenuInit();
	//Called when the Game gets the init call
	virtual bool GameInit();

	virtual bool Tick(UE4::ELevelTick tick, float DeltaTime) override;

	virtual void OnModMenuButtonPressed() override;

	//Call ImGui Here (CALLED EVERY FRAME ON DX HOOK)
	virtual bool DrawImGui() override;
};