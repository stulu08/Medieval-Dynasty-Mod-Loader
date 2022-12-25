#include "ExampleMod.h"
#include "Utilities/MinHook.h"

BPFUNCTION(WriteToFile)
{
	std::cout << "WriteToFile" << std::endl;
	struct InputParams
	{
		UE4::FString NameTest;
	};
	auto Inputs = stack->GetInputParams<InputParams>();
	stack->SetOutput<UE4::FString>("OutPutString", L"KboyGang");
	stack->SetOutput<bool>("ReturnValue", true);
}

// Only Called Once, if you need to hook stuff, declare some global non changing values
void ExampleMod::InitializeMod()
{
	UE4::InitSDK();
	SetupHooks();
	REGISTER_FUNCTION(WriteToFile);
	//if you want to name them on you own do this
	//REGISTER_FUNCTION_NAMED(WriteToFile, "WriteToFile");

	//MinHook::Init(); //Uncomment if you plan to do hooks

	UseMenuButton = true; // Allows Mod Loader To Show Button
}

void ExampleMod::InitGameState() {

}

void ExampleMod::BeginPlay(UE4::AActor* Actor) {
	
}

void ExampleMod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
{
	// Filters Out All Mod Actors Not Related To Your Mod
	std::wstring TmpModName(ModName.begin(), ModName.end());
	if (ModActorName == TmpModName)
	{
		//Sets ModActor Ref
		ModActor = Actor;
	}
	

}

void ExampleMod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) {
}

void ExampleMod::DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags){
}

void ExampleMod::OnModMenuButtonPressed() {
	m_showWindow = !m_showWindow;
}

void ExampleMod::DrawImGui() {
	if (m_showWindow) {
		if (ImGui::Begin("Theme Changed", &m_showWindow)) {
			static int currentTheme = 0;
			if (ImGui::Combo("Color Theme", &currentTheme, "PhotoshopDark\0Dark\0AmoledDark\0OceanDark\0ImGuiClassic\0ImGuiDark\0ImGuiLight"))
				SetImGuiColorTheme((ImGuiColorTheme)currentTheme);
		}
		ImGui::End();
	}
	
}

void ExampleMod::SetupImGui(ImGuiIO& io) {

}