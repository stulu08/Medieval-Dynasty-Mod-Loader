#include "BaseMod.h"
#include "Utilities/MinHook.h"
#include "Utils.h"

namespace MDMLBase {
	void Mod::InitializeMod() {
		UE4::InitSDK();
		SetupHooks();
	}

	void Mod::InitGameState() {

	}

	void Mod::BeginPlay(UE4::AActor* Actor) {

	}

	void Mod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
	{
		// Filters Out All Mod Actors Not Related To Your Mod
		std::wstring TmpModName(ModName.begin(), ModName.end());
		if (ModActorName == TmpModName)
		{
			//Sets ModActor Ref
			ModActor = Actor;
		}

	}
	void Mod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) {
	}

	void Mod::DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {

	}

	void Mod::OnModMenuButtonPressed() {

	}

	void Mod::DrawImGui() {

	}

	void Mod::SetupImGui(ImGuiIO& io) {

	}
	std::string Mod::getLevelName() const {
		return UE4::UWorld::GetWorld()->GetFullName();
	}
}