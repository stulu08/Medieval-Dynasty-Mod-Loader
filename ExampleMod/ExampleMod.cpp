#include "ExampleMod.h"
#include "Utilities/MinHook.h"

#include "BaseMod.h"

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
	//Specify what events you should receive
	SetupHooks(EventsEnabled::GuiOnly);
	REGISTER_FUNCTION(WriteToFile);
	//if you want to name them on your own do this
	//REGISTER_FUNCTION_NAMED(WriteToFile, "WriteToFile");

	//MinHook::Init(); //Uncomment if you plan to do hooks

	UseMenuButton = true; // Allows Mod Loader To Show Button
}

void ExampleMod::InitGameState() {
	//Log::Info_MDML("Mod path is: {0}", GetFolder());
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
			if (ImGui::MDML_Combo("Color Theme", currentTheme, {"PhotoshopDark", "Dark", "AmoledDark", "OceanDark", "ImGuiClassic", "ImGuiDark", "ImGuiLight"}))
				LoaderUI::setColorTheme((ImGuiColorTheme)currentTheme);
		}
		ImGui::End();
	}
	
}

void ExampleMod::SetupImGui(ImGuiIO& io) {

}