#pragma once
#include "Defs.h"

namespace MDMLBase {
	class BASEMOD_API Mod : public ::Mod {
	private:
		//Basic Mod Info
		Mod(HMODULE handle = nullptr) {
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
			hModule = handle;
			CompleteModCreation();
		}
		~Mod();
	public:

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

		virtual void DrawImGui() override;

		virtual void SetupImGui(ImGuiIO& io) override;

		std::string getLevelName() const;

		UE4::AActor* getPlayer() const;
		UE4::AActor* getPlayerController() const;
		Ref<Logger> getLogger() const { return logger; }

		inline static Mod& Get() { return *s_instance; }
	private:
		UE4::AActor* ModActor;
		UE4::UClass* ModObject;
		UE4::UObject* ModObjectC;

		UE4::AActor* PlayerActor;
		UE4::AActor* PlayerControler;

		static Mod* s_instance;
		friend class DLLHandler;
	};
}

