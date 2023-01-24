#include "Core.h"
#include "Mod.h"
#include "Utilities/MinHook.h"
#include "Utilities/Logger.h"

Mod* Mod::ModRef;

namespace CallBackHandler
{
	void CallBackBeginPlay(UE4::AActor* Actor)
	{
		Mod::ModRef->BeginPlay(Actor);
	}

	void CallBackInitGameState()
	{
		Mod::ModRef->InitGameState();
	}

	void CallBackDrawImGui()
	{
		Mod::ModRef->DrawImGui();
	}

	void CallBackSetupImGui(ImGuiIO& io) {
		Mod::ModRef->SetupImGui(io);
	}

	void CallBackPostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
	{
		Mod::ModRef->PostBeginPlay(ModActorName, Actor);
	}

	void CallBackDX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView)
	{
		Mod::ModRef->DX11Present(pDevice, pContext, pRenderTargetView);
	}

	void CallBackDX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {
		Mod::ModRef->DX11ResizeBuffers(pDevice, pContext, Width, Height, NewFormat, SwapChainFlags);
	}
	
}

void Mod::InitGameState()
{
}

void Mod::OnModMenuButtonPressed()
{
}

void Mod::BeginPlay(UE4::AActor* Actor)
{
}

void Mod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
{
}

void Mod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView)
{
}

void Mod::DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
}

void Mod::DrawImGui()
{
}

void Mod::SetupImGui(ImGuiIO& io)
{
}
#define REGISTER_EVENT(name, ...) Global::GetGlobals()->CoreMods.registerEvent(new ModEvent<__VA_ARGS__>(this, #name, &CallBackHandler::CallBack##name));
void Mod::SetupHooks() {
	REGISTER_EVENT(BeginPlay, UE4::AActor*);
	REGISTER_EVENT(InitGameState);
	REGISTER_EVENT(PostBeginPlay, std::wstring, UE4::AActor*);
	REGISTER_EVENT(DrawImGui);
	REGISTER_EVENT(SetupImGui, ImGuiIO&);
	REGISTER_EVENT(DX11Present, ID3D11Device*, ID3D11DeviceContext*, ID3D11RenderTargetView*);
	REGISTER_EVENT(DX11ResizeBuffers, ID3D11Device*, ID3D11DeviceContext*, UINT, UINT, DXGI_FORMAT, UINT);
}

void Mod::CompleteModCreation()
{
	IsFinishedCreating = true;
	Global::GetGlobals()->AddToCoreMods(ModRef);
	if (CreateLogger) {
		if (LogToFile) {
			logger = Logger::Create(ModName, Log::getLogFile(ModName + "-log.txt"));
			logger->Info("Created mod logger({1}): {0}", logger->getName(), std::filesystem::relative(Log::getLogFile(ModName + "-log.txt")).string());
		}
		else {
			logger = Logger::Create(ModName);
			logger->Info("Created mod logger: {0}", logger->getName());
		}
	}
	Log::Info_MDML("Mod Created: {0}", ModName);
	if (ModLoaderVersion != MODLOADER_VERSION)
	{
		Log::Warn_UML("Mod: {0} was created with a different version of the Unreal Mod Loader. This mod may be unstable.", ModName.c_str());
	}
	if (MedievalModLoaderVersion != MEDIEVAL_VERSION)
	{
		Log::Warn_MDML("Mod: {0} was created with a different version of the MDML. This mod may be unstable.", ModName.c_str());
	}
}

std::string Mod::GetFolder() {
	if (hModule) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(hModule, path_c, MAX_PATH);
		return std::filesystem::path(std::string(path_c)).parent_path().string();
	}
	return GetModsFolder();
}

void Mod::InitializeMod()
{

}