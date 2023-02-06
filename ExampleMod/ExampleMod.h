#pragma once
#include "Mod/Mod.h"
#include "GameMod.h"

class ExampleMod : public GameMod
{
public:

	//Basic Mod Info
	ExampleMod(HMODULE handle = nullptr)
		: GameMod(handle) {
		ModName = "GuiThemeChanger"; // Mod Name -- If Using BP ModActor, Should Be The Same Name As Your Pak
		ModVersion = "1.0.1"; // Mod Version
		ModDescription = "Changes the gui theme"; // Mod Description
		ModAuthors = "Stulu"; // Mod Author
		EnabledModEvents = EventsEnabled::All;// You can enable specific events here to improve performance
		CompleteModCreation();
	}

	//Called When Internal GameMod and Mod Setup is finished, use this to setup stuff like hooks or bp functions
	virtual void OnModInitilize() override;

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

	virtual void OnModMenuButtonPressed() override;

	//Call ImGui Here (CALLED EVERY FRAME ON DX HOOK)
	virtual bool DrawImGui() override;
};