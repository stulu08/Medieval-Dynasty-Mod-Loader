#include "BaseMod.h"
#include "Utilities/MinHook.h"

#include "Utils.h"

// Only Called Once, if you need to hook stuff, declare some global non changing values
void BaseMod::InitializeMod() {
	UE4::InitSDK();
	SetupHooks();
}

void BaseMod::InitGameState() {
	
}

void BaseMod::BeginPlay(UE4::AActor* Actor) {

}

void BaseMod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
{
	// Filters Out All Mod Actors Not Related To Your Mod
	std::wstring TmpModName(ModName.begin(), ModName.end());
	if (ModActorName == TmpModName)
	{
		//Sets ModActor Ref
		ModActor = Actor;
	}
	
}
void BaseMod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) {
}

void BaseMod::DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {
	
}

void BaseMod::OnModMenuButtonPressed() {

}

void BaseMod::DrawImGui() {
	
}

void BaseMod::SetupImGui(ImGuiIO& io) {
	
}