#pragma once
#include "World.h"

namespace MDMLBase {
	class BASEMOD_API Mod : public ::Mod
	{
	public:
		//Basic Mod Info
		Mod()
		{
			ModName = "BaseMod"; // Mod Name -- If Using BP ModActor, Should Be The Same Name As Your Pak
			ModVersion = "1.0.0"; // Mod Version
			ModDescription = "Base Mod of MDML"; // Mod Description
			ModAuthors = "Stulu"; // Mod Author
			ModLoaderVersion = MODLOADER_VERSION;
			MedievalModLoaderVersion = MEDIEVAL_VERSION;
			CreateLogger = true;
			LogToFile = true;
			// Dont Touch The Internal Stuff
			ModRef = this;
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

		std::string getLevelName() const;
		Ref<World> getWorld() const { return m_world; }

		UE4::AActor* getPlayer() const;
		//UE4::AActor* FindPlayer() const;
		//bool IsPlayerValid(UE4::AActor*) const;

		inline static Mod& Get() { return *s_instance; }
	private:

		// If you have a BP Mod Actor, This is a straight refrence to it
		Ref<World> m_world;
		UE4::AActor* ModActor;

		UE4::AActor* PlayerActor;
		UE4::AActor* PlayerControler;

		static Mod* s_instance;
		friend class DLLHandler;
	};
}

