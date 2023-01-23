#pragma once
#include "Mod/Mod.h"

class ExampleMod : public Mod
{
public:

	//Basic Mod Info
	ExampleMod(HMODULE handle = nullptr)
	{
		ModName = "GuiThemeChanger"; // Mod Name -- If Using BP ModActor, Should Be The Same Name As Your Pak
		ModVersion = "1.0.1"; // Mod Version
		ModDescription = "Changes the gui theme"; // Mod Description
		ModAuthors = "Stulu"; // Mod Author
		ModLoaderVersion = MODLOADER_VERSION;
		MedievalModLoaderVersion = MEDIEVAL_VERSION;
		CreateLogger = false; // Creates a logger for the mod
		LogToFile = false; // Creates a file sink for the logger
		// Dont Touch The Internal Stuff
		ModRef = this;
		hModule = handle;

		CompleteModCreation();
	}

	//Called When Internal Mod Setup is finished
	virtual void InitializeMod() override;

	//InitGameState Call
	virtual void InitGameState() override;

	//Beginplay Hook of Every Actor
	virtual void BeginPlay(UE4::AActor* Actor) override;

	//PostBeginPlay of EVERY Blueprint ModActor
	virtual void PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor) override;

	//DX11 hook for when an image will be presented to the screen
	virtual void DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) override;

	virtual void DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) override;

	virtual void OnModMenuButtonPressed() override;

	//Call ImGui Here (CALLED EVERY FRAME ON DX HOOK)
	virtual void DrawImGui() override;

	virtual void SetupImGui(ImGuiIO& io) override;

private:
	bool m_showWindow = true;

	// If you have a BP Mod Actor, This is a straight refrence to it
	UE4::AActor* ModActor;
};