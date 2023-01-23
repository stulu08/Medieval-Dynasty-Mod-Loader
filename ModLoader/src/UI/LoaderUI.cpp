#include "Core.h"
#include "LoaderUI.h"

#include "Utilities/Logger.h"
#include "Utilities/Memory.h"
#include "Utilities/Dumper.h"
#include "Utilities/MinHook.h"

#include "UE4/Kismet/GameplayStatics.h"

#include "Globals.h"
#include "MDML.h"

LoaderUI* LoaderUI::UI;

void StyleColorsPhotoShopDark(ImGuiStyle* dst = nullptr);
void StyleColorsAmoledDark(ImGuiStyle * dst = nullptr);
void StyleColorsOceanDark(ImGuiStyle * dst = nullptr);
void StyleColorsDark(ImGuiStyle * dst = nullptr);


LoaderUI* LoaderUI::GetUI()
{
	if (!UI)
	{
		UI = new LoaderUI();
	}
	return UI;
}

namespace TickVars
{
	bool f1_pressed;
	bool bDumpObjects;
	bool bDumpEngineInfo;
	bool bDumpWorldActors;
	bool bExecuteConsoleCommand;
	std::wstring CurrentCommand;
};

namespace UITools
{
	void ObjectDump()
	{
		TickVars::bDumpObjects = true;
	}

	void EngineDump()
	{
		TickVars::bDumpEngineInfo = true;
	}

	void WorldDump()
	{
		TickVars::bDumpWorldActors = true;
	}

	void ExecuteCommand(std::wstring command)
	{
		TickVars::CurrentCommand = command;
		TickVars::bExecuteConsoleCommand = true;
	}
};

void UILogicTick()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) != 0)
			TickVars::f1_pressed = true;
		else if (TickVars::f1_pressed)
		{
			TickVars::f1_pressed = false;
			if (Global::GetGlobals()->bIsMenuOpen)
			{
				Global::GetGlobals()->bIsMenuOpen = false;
			}
			else
			{
				if (!LoaderUI::GetUI()->IsDXHooked)
				{
					LoaderUI::HookDX();
				}
				Global::GetGlobals()->bIsMenuOpen = true;
			}
		}

		if (TickVars::bDumpObjects)
		{
			TickVars::bDumpObjects = false;
			Dumper::GetDumper()->DumpObjectArray();
		}

		if (TickVars::bDumpEngineInfo)
		{
			TickVars::bDumpEngineInfo = false;
			Dumper::GetDumper()->DumpEngineInfo();
		}

		if (TickVars::bDumpWorldActors)
		{
			TickVars::bDumpWorldActors = false;
			Dumper::GetDumper()->DumpWorldActors();
		}

		if (TickVars::bExecuteConsoleCommand)
		{
			TickVars::bExecuteConsoleCommand = false;
			UE4::UGameplayStatics::ExecuteConsoleCommand(TickVars::CurrentCommand.c_str(), nullptr);
			TickVars::CurrentCommand = L"";
		}
		Sleep(1000 / 60);
	}
}

HRESULT LoaderUI::LoaderResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	if (!LoaderUI::GetUI()->initRendering)
	{
		if (LoaderUI::GetUI()->pRenderTargetView) {
			LoaderUI::GetUI()->pContext->OMSetRenderTargets(0, 0, 0);
			LoaderUI::GetUI()->pRenderTargetView->Release();
		}

		HRESULT hr = ResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

		ID3D11Texture2D* pBuffer;
		pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&pBuffer);
		// Perform error handling here!

		LoaderUI::GetUI()->pDevice->CreateRenderTargetView(pBuffer, NULL, &LoaderUI::GetUI()->pRenderTargetView);
		// Perform error handling here!
		pBuffer->Release();

		LoaderUI::GetUI()->pContext->OMSetRenderTargets(1, &LoaderUI::GetUI()->pRenderTargetView, NULL);

		// Set up the viewport.
		D3D11_VIEWPORT vp;
		vp.Width = (FLOAT)Width;
		vp.Height = (FLOAT)Height;
		vp.MinDepth = 0.0f;
		vp.MaxDepth = 1.0f;
		vp.TopLeftX = 0;
		vp.TopLeftY = 0;
		LoaderUI::GetUI()->pContext->RSSetViewports(1, &vp);
		return hr;
	}
	else
	{
		HRESULT hr = ResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
		return hr;
	}
}

void ShowLogicMods()
{
	if (!ImGui::CollapsingHeader("Logic Mods"))
		return;

	for (size_t i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
	{
		//i changed this because of a MSVC wchar_t to char truncation warning
		//std::string str(Global::GetGlobals()->ModInfoList[i].ModName.begin(), Global::GetGlobals()->ModInfoList[i].ModName.end());
		//std::string str(CurrentMod.begin(), CurrentMod.end());
		std::wstring modName = Global::GetGlobals()->ModInfoList[i].ModName;
		std::string str(modName.length(), 0);
		std::transform(modName.begin(), modName.end(), str.begin(), [](wchar_t c) { return (char)c; });

		std::string ModLabel = str + "##" + std::to_string(i);
		if (ImGui::TreeNode(ModLabel.c_str()))
		{
			std::string Author = "Created By: " + Global::GetGlobals()->ModInfoList[i].ModAuthor;
			ImGui::Text(Author.c_str());
			ImGui::Separator();
			std::string Description = "Description: " + Global::GetGlobals()->ModInfoList[i].ModDescription;
			ImGui::Text(Description.c_str());
			ImGui::Separator();
			std::string Version = "Version: " + Global::GetGlobals()->ModInfoList[i].ModVersion;
			ImGui::Text(Version.c_str());
			ImGui::Separator();
			if (ImGui::TreeNode("Mod Buttons"))
			{
				if (Global::GetGlobals()->ModInfoList[i].IsEnabled && Global::GetGlobals()->ModInfoList[i].CurrentModActor && Global::GetGlobals()->ModInfoList[i].ContainsButton)
				{
					for (size_t bi = 0; bi < Global::GetGlobals()->ModInfoList[i].ModButtons.size(); bi++)
					{
						auto currentmodbutton = Global::GetGlobals()->ModInfoList[i].ModButtons[bi];
						std::string ButtonLabel = currentmodbutton + "##" + std::to_string(i + bi);
						if (ImGui::Button(ButtonLabel.c_str()))
						{
							std::wstring FuncNameAndArgs = L"ModMenuButtonPressed " + std::to_wstring(bi);
							Global::GetGlobals()->ModInfoList[i].CurrentModActor->CallFunctionByNameWithArguments(FuncNameAndArgs.c_str(), nullptr, NULL, true);
						}
					}
					ImGui::Separator();
				}
				ImGui::TreePop();
			}
			std::string ActiveLabel = "Enable##" + std::to_string(i);
			ImGui::Checkbox(ActiveLabel.c_str(), &Global::GetGlobals()->ModInfoList[i].IsEnabled);
			ImGui::TreePop();
		}
	}
}

void ShowCoreMods()
{
	if (!ImGui::CollapsingHeader("Core Mods"))
		return;

	for (size_t i = 0; i < Global::GetGlobals()->CoreMods.size(); i++)
	{
		std::string str(Global::GetGlobals()->CoreMods[i]->ModName.begin(), Global::GetGlobals()->CoreMods[i]->ModName.end());
		std::string ModLabel = str + "##cm" + std::to_string(i);
		if (ImGui::TreeNode(ModLabel.c_str()))
		{
			std::string Author = "Created By: " + Global::GetGlobals()->CoreMods[i]->ModAuthors;
			ImGui::Text(Author.c_str());
			ImGui::Separator();
			std::string Description = "Description: " + Global::GetGlobals()->CoreMods[i]->ModDescription;
			ImGui::Text(Description.c_str());
			ImGui::Separator();
			std::string Version = "Version: " + Global::GetGlobals()->CoreMods[i]->ModVersion;
			ImGui::Text(Version.c_str());
			ImGui::Separator();

			if (Global::GetGlobals()->CoreMods[i]->UseMenuButton && Global::GetGlobals()->CoreMods[i]->IsFinishedCreating)
			{
				std::string ButtonLabel = str + " Button" + "##cm" + std::to_string(i);
				if (ImGui::Button(ButtonLabel.c_str()))
				{
					Global::GetGlobals()->CoreMods[i]->OnModMenuButtonPressed();
				}
			}
			ImGui::TreePop();
		}
	}
}
void ShowOverrideMods() {
	if (!ImGui::CollapsingHeader("Overwrite Mods"))
		return;

	for (size_t i = 0; i < Global::GetGlobals()->OverwriteMods.size(); i++) {
		auto Mod = Global::GetGlobals()->OverwriteMods[i];
		std::string ModLabel = Mod.Name + "##cm" + std::to_string(i);
		if (ImGui::TreeNode(ModLabel.c_str())) {
			std::string Author = "Created By: " + Mod.Author;
			ImGui::Text(Author.c_str());
			ImGui::Separator();
			std::string Description = "Description: " + Mod.Description;
			ImGui::Text(Description.c_str());
			ImGui::Separator();
			if (ImGui::TreeNode("Files overwritten")) {
				for (auto file : Mod.Files) {
					ImGui::Text(file.c_str());
				}
				ImGui::TreePop();
			}
			ImGui::TreePop();
		}
	}
}
void ShowTools()
{
	if (!ImGui::CollapsingHeader("Tools"))
		return;

	ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
	ImGui::Spacing();
	if (ImGui::Button("Dump Objects"))
	{
		UITools::ObjectDump();
	}
	if (ImGui::Button("Dump Engine Info"))
	{
		UITools::EngineDump();
	}
	if (ImGui::Button("Dump World Actors"))
	{
		UITools::WorldDump();
	}

	static char Command[128];
	ImGui::Spacing();
	ImGui::Separator();
	ImGui::Text("Execute Console Command");
	ImGui::InputText("##InputText", Command, IM_ARRAYSIZE(Command));
	if (ImGui::Button("Execute"))
	{
		std::string strCommand(Command);
		std::wstring wstrCommand = std::wstring(strCommand.begin(), strCommand.end());
		UITools::ExecuteCommand(wstrCommand);
	}
}

void DrawImGui()
{
	if (ImGui::Begin("MDML", NULL, NULL)) {
		ImGui::Spacing();
		ImGui::Text("Medieval Dynasty Mod Loader Version: %s", MEDIEVAL_VERSION);
		ImGui::Text("Unreal Mod Loader Version: %s", MODLOADER_VERSION);
		ShowLogicMods();
		ShowCoreMods();
		ShowOverrideMods();
		ShowTools();
	}
	ImGui::End();
}

LRESULT CALLBACK LoaderUI::hookWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	CallWindowProc(ImGui_ImplWin32_WndProcHandler, hWnd, uMsg, wParam, lParam);

	ImGuiIO& io = ImGui::GetIO();
	if (io.WantCaptureMouse || io.WantCaptureKeyboard) {
		return true;
	}
	return CallWindowProc(LoaderUI::GetUI()->hGameWindowProc, hWnd, uMsg, wParam, lParam);
}


HRESULT hookResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	LoaderUI* UI = LoaderUI::GetUI();
	//Global::GetGlobals()->eventSystem.dispatchEvent("DX11ResizeBuffers", UI->pDevice, UI->pContext, Width, Height, NewFormat, SwapChainFlags);
	Global::GetGlobals()->CoreMods.callEvent("DX11ResizeBuffers", UI->pDevice, UI->pContext, Width, Height, NewFormat, SwapChainFlags);
	return UI->LoaderResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

void LoaderUI::LoaderD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (LoaderUI::GetUI()->initRendering)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&LoaderUI::GetUI()->pDevice)) &&
			SUCCEEDED(pSwapChain->GetDevice(__uuidof(LoaderUI::GetUI()->pDevice), (void**)&LoaderUI::GetUI()->pDevice)))
		{
			LoaderUI::GetUI()->pDevice->GetImmediateContext(&LoaderUI::GetUI()->pContext);
			Log::Info_UML("D3D11Device Initialized");
		}
		else
		{
			Log::Error_UML("Failed to initialize D3D11Device");
		}

		ID3D11Texture2D* pRenderTargetTexture = NULL;
		if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pRenderTargetTexture)) &&
			SUCCEEDED(LoaderUI::GetUI()->pDevice->CreateRenderTargetView(pRenderTargetTexture, NULL, &LoaderUI::GetUI()->pRenderTargetView)))
		{
			pRenderTargetTexture->Release();
			Log::Info_UML("D3D11RenderTargetView Initialized");
		}
		else
		{
			Log::Error_UML("Failed to initialize D3D11RenderTargetView");
		}
		//init imgui
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		io.IniFilename = MDML::SelectedGameProfile.ImGuiFile.c_str();
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;           // Enable Docking
		StyleColorsPhotoShopDark();
		//Global::GetGlobals()->eventSystem.dispatchEvent("SetupImGui", ImGui::GetIO);
		Global::GetGlobals()->CoreMods.callEvent<ImGuiIO&>("SetupImGui", io);

		HWND hGameWindow = MEM::FindWindow(GetCurrentProcessId(), L"UnrealWindow");
		LoaderUI::GetUI()->hGameWindowProc = (WNDPROC)SetWindowLongPtr(hGameWindow, GWLP_WNDPROC, (LONG_PTR)LoaderUI::hookWndProc);
		ImGui_ImplWin32_Init(hGameWindow);
		//ImGui_ImplDX11_CreateDeviceObjects();
		ImGui_ImplDX11_Init(LoaderUI::GetUI()->pDevice, LoaderUI::GetUI()->pContext);
		

		LoaderUI::GetUI()->initRendering = false;
	}

	// must call before drawing
	LoaderUI::GetUI()->pContext->OMSetRenderTargets(1, &LoaderUI::GetUI()->pRenderTargetView, NULL);

	// ImGui Rendering ---------------------------------------------

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	ImGui::GetIO().MouseDrawCursor = Global::GetGlobals()->bIsMenuOpen;
	if (Global::GetGlobals()->bIsMenuOpen)
	{
		DrawImGui();
		//Global::GetGlobals()->eventSystem.dispatchEvent("DrawImGui");
		Global::GetGlobals()->CoreMods.callEvent("DrawImGui");
	}

	//ImGui::Render();
	//ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	// Rendering
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

HRESULT(*D3D11Present)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
HRESULT __stdcall hookD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	// LoaderUI initializes D3D objects, mods can then use those objects for drawing, hardware access, etc.
	LoaderUI* UI = LoaderUI::GetUI();
	UI->LoaderD3D11Present(pSwapChain, SyncInterval, Flags);
	//Global::GetGlobals()->eventSystem.dispatchEvent("DX11Present", UI->pDevice, UI->pContext, UI->pRenderTargetView);
	Global::GetGlobals()->CoreMods.callEvent("DX11Present", UI->pDevice, UI->pContext, UI->pRenderTargetView);

	return D3D11Present(pSwapChain, SyncInterval, Flags);
}

DWORD __stdcall InitDX11Hook(LPVOID)
{
	Log::Info_UML("Setting up D3D11Present hook");

	HMODULE hDXGIDLL = 0;
	do
	{
		hDXGIDLL = GetModuleHandle(L"dxgi.dll");
		Sleep(100);
	} while (!hDXGIDLL);
	Sleep(100);

	IDXGISwapChain* pSwapChain;

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DefWindowProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
	RegisterClassExA(&wc);

	HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

	D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
	D3D_FEATURE_LEVEL obtainedLevel;
	ID3D11Device* d3dDevice = nullptr;
	ID3D11DeviceContext* d3dContext = nullptr;

	DXGI_SWAP_CHAIN_DESC scd;
	ZeroMemory(&scd, sizeof(scd));
	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	scd.OutputWindow = hWnd;
	scd.SampleDesc.Count = 1;
	scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	scd.Windowed = ((GetWindowLongPtr(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

	scd.BufferDesc.Width = 1;
	scd.BufferDesc.Height = 1;
	scd.BufferDesc.RefreshRate.Numerator = 0;
	scd.BufferDesc.RefreshRate.Denominator = 1;

	UINT createFlags = 0;
#ifdef _DEBUG
	createFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

	IDXGISwapChain* d3dSwapChain = 0;

	if (FAILED(D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		createFlags,
		requestedLevels,
		sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL),
		D3D11_SDK_VERSION,
		&scd,
		&pSwapChain,
		&LoaderUI::GetUI()->pDevice,
		&obtainedLevel,
		&LoaderUI::GetUI()->pContext)))
	{
		Log::Error_UML("Failed to create D3D device and swapchain");
		return NULL;
	}

	LoaderUI::GetUI()->pSwapChainVtable = (DWORD_PTR*)pSwapChain;
	LoaderUI::GetUI()->pSwapChainVtable = (DWORD_PTR*)LoaderUI::GetUI()->pSwapChainVtable[0];
	LoaderUI::GetUI()->phookD3D11Present = (LoaderUI::D3D11PresentHook)LoaderUI::GetUI()->pSwapChainVtable[8];
	MinHook::Add((DWORD64)LoaderUI::GetUI()->pSwapChainVtable[13], &hookResizeBuffers, &LoaderUI::GetUI()->ResizeBuffers, "DX11-ResizeBuffers");
	MinHook::Add((DWORD64)LoaderUI::GetUI()->phookD3D11Present, &hookD3D11Present, &D3D11Present, "DX11-Present");

	DWORD dPresentwOld;
	DWORD dResizeOld;
	VirtualProtect(LoaderUI::GetUI()->phookD3D11Present, 2, PAGE_EXECUTE_READWRITE, &dPresentwOld);
	VirtualProtect((LPVOID)LoaderUI::GetUI()->pSwapChainVtable[13], 2, PAGE_EXECUTE_READWRITE, &dResizeOld);

	while (true)
	{
		Sleep(10);
	}

	LoaderUI::GetUI()->pDevice->Release();
	LoaderUI::GetUI()->pContext->Release();
	pSwapChain->Release();
	return NULL;
}

void LoaderUI::HookDX()
{
	if (!LoaderUI::GetUI()->IsDXHooked)
	{
		CreateThread(NULL, 0, InitDX11Hook, NULL, 0, NULL);
		LoaderUI::GetUI()->IsDXHooked = true;
	}
}

void LoaderUI::setColorTheme(ImGuiColorTheme theme) {
	switch (theme)
	{
	case ImGuiColorTheme::PhotoshopDark:
		StyleColorsPhotoShopDark();
		break;
	case ImGuiColorTheme::Dark:
		StyleColorsDark();
		break;
	case ImGuiColorTheme::AmoledDark:
		StyleColorsAmoledDark();
		break;
	case ImGuiColorTheme::OceanDark:
		StyleColorsOceanDark();
		break;
	case ImGuiColorTheme::ImGuiClassic:
		ImGui::StyleColorsClassic();
		break;
	case ImGuiColorTheme::ImGuiDark:
		ImGui::StyleColorsDark();
		break;
	case ImGuiColorTheme::ImGuiLight:
		ImGui::StyleColorsLight();
		break;
	}
}

DWORD __stdcall LogicThread(LPVOID)
{
	UILogicTick();
	return NULL;
}


void LoaderUI::CreateUILogicThread()
{
	Log::Info_UML("CreateUILogicThread Called");
	CreateThread(0, 0, LogicThread, 0, 0, 0);
}

void StyleColorsPhotoShopDark(ImGuiStyle* dst) {
	/*
		* STYLE
		* https://github.com/ocornut/imgui/issues/707#issuecomment-463758243
		*/
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;
	colors[ImGuiCol_Text] = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.500f, 0.500f, 0.500f, 1.000f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.180f, 0.180f, 0.180f, 1.000f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.280f, 0.280f, 0.280f, 0.000f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
	colors[ImGuiCol_Border] = ImVec4(0.266f, 0.266f, 0.266f, 1.000f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.000f, 0.000f, 0.000f, 0.000f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.200f, 0.200f, 0.200f, 1.000f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.280f, 0.280f, 0.280f, 1.000f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.300f, 0.300f, 0.300f, 1.000f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_CheckMark] = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.391f, 0.391f, 0.391f, 1.000f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_Button] = ImVec4(1.000f, 1.000f, 1.000f, 0.000f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
	colors[ImGuiCol_ButtonActive] = ImVec4(1.000f, 1.000f, 1.000f, 0.391f);
	colors[ImGuiCol_Header] = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.391f, 0.391f, 0.391f, 1.000f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(1.000f, 1.000f, 1.000f, 0.250f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.000f, 1.000f, 1.000f, 0.670f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_Tab] = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.352f, 0.352f, 0.352f, 1.000f);
	colors[ImGuiCol_TabActive] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.586f, 0.586f, 0.586f, 1.000f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_NavHighlight] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);
	colors[ImGuiCol_WindowBg].w = 1.0f;

	style->ChildRounding = 4.0f;
	style->FrameBorderSize = 1.0f;
	style->FrameRounding = 2.0f;
	style->GrabMinSize = 7.0f;
	style->PopupRounding = 2.0f;
	style->ScrollbarRounding = 12.0f;
	style->ScrollbarSize = 13.0f;
	style->TabBorderSize = 1.0f;
	style->TabRounding = 0.0f;
	style->WindowRounding = 4.0f;
}
void StyleColorsAmoledDark(ImGuiStyle* dst) {
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.35f, 0.35f, 0.35f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.025f, 0.025f, 0.025f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.005f, 0.005f, 0.005f, 0.84f);
	colors[ImGuiCol_Border] = ImVec4(0.015f, 0.015f, 0.015f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.75f, 0.75f, 0.75f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.75f, 0.75f, 0.75f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.1f, 0.1f, 0.1f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(1.0f, 1.0f, 1.0f, 0.8f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.0f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.75f, 0.75f, 0.75f, 0.95f);
	colors[ImGuiCol_Header] = ImVec4(0.06f, 0.06f, 0.06f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.075f, 0.075f, 0.075f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.1f, 0.1f, 0.1f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.8f, 0.8f, 0.8f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.06f, 0.06f, 0.06f, 1.0f);
	colors[ImGuiCol_TabActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
	colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.95f, 0.95f, 0.95f, 0.35f);
	colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	colors[ImGuiCol_DockingPreview] = ImVec4(1.00f, 1.00f, 1.00f, 0.7f);
	style->WindowRounding = 6;
	style->FrameRounding = 2;
	style->WindowBorderSize = 0;
	style->FrameBorderSize = 0;
	style->PopupBorderSize = 0;
	style->ChildRounding = 4.0f;
	style->GrabMinSize = 7.0f;
	style->ScrollbarRounding = 12.0f;
	style->ScrollbarSize = 13.0f;
	style->TabBorderSize = 1.0f;
	style->TabRounding = 0.0f;
}
void StyleColorsOceanDark(ImGuiStyle* dst)
{
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.12f, 0.20f, 0.28f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.09f, 0.12f, 0.14f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.12f, 0.14f, 0.65f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.37f, 0.61f, 1.00f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.29f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	style->WindowRounding = 6;
	style->FrameRounding = 2;
	style->WindowBorderSize = 0;
	style->FrameBorderSize = 0;
	style->PopupBorderSize = 0;
	style->ChildRounding = 4.0f;
	style->GrabMinSize = 7.0f;
	style->ScrollbarRounding = 12.0f;
	style->ScrollbarSize = 13.0f;
	style->TabBorderSize = 1.0f;
	style->TabRounding = 0.0f;
}
void StyleColorsDark(ImGuiStyle* dst)
{
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4{ 0.1f, 0.105f, 0.11f, 1.0f };
	colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_FrameBgHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_FrameBgActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBg] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBgActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.24f, 0.52f, 0.88f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_ButtonHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_ButtonActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_Header] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_HeaderHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_HeaderActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TabHovered] = ImVec4{ 0.38f, 0.3805f, 0.381f, 1.0f };
	colors[ImGuiCol_TabActive] = ImVec4{ 0.28f, 0.2805f, 0.281f, 1.0f };
	colors[ImGuiCol_TabUnfocused] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_DockingPreview] = ImVec4{ 0.15f, 0.1505f, 0.151f, 0.7f };
	colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	style->WindowRounding = 6;
	style->FrameRounding = 2;
	style->WindowBorderSize = 0;
	style->FrameBorderSize = 0;
	style->PopupBorderSize = 0;
	style->ChildRounding = 4.0f;
	style->GrabMinSize = 7.0f;
	style->ScrollbarRounding = 12.0f;
	style->ScrollbarSize = 13.0f;
	style->TabBorderSize = 1.0f;
	style->TabRounding = 0.0f;
}

bool ImGui::MDML_Combo(const std::string& header, int& current_item, const char* items_separated_by_zeros, int height_in_items) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::Combo("##COMBO", &current_item, items_separated_by_zeros, height_in_items);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Combo(const std::string& header, int32_t& current_item, const std::vector<std::string>& items) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	if (ImGui::BeginCombo(header.c_str(), items[current_item].c_str())) {
		for (int i = 0; i < items.size(); i++) {
			bool selected = items[current_item] == items[i];
			if (ImGui::Selectable(items[i].c_str(), selected)) {
				auto itr = std::find(items.begin(), items.end(), items[i]);
				if (itr != items.cend())
					current_item = (uint32_t)std::distance(items.begin(), itr);
				else
					current_item = 0;
				change = true;
			}
			if (selected)
				ImGui::SetItemDefaultFocus();
		}
		ImGui::EndCombo();
	}
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector4(const std::string& header, glm::vec4& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &vec.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##W", &vec.w, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector4(const std::string& header, glm::quat& quat, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &quat.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &quat.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &quat.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##W", &quat.w, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector3(const std::string& header, glm::vec3& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &vec.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector2(const std::string& header, glm::vec2& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_String(const std::string& header, std::string& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::InputText("##String", &v, readonly ? ImGuiInputTextFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Bool(const std::string& header, bool& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::Checkbox("##CheckBoxBool", &v);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	if (readonly && change) {
		v = !v;
		change = false;
	}

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Int(const std::string& header, int& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragInt("##INT", &v, 1.0f, 0, 0, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_IntSlider(const std::string& header, int& v, int min, int max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderInt("##INTSLIDER", &v, min, max, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_UInt(const std::string& header, uint32_t& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	int i = v;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragInt("##UINT", &i, 1, 0, 0, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();
	if (change)
		v = glm::max(i, 0);
	ImGui::PopID();
	return change;
}
bool ImGui::MDML_UIntSlider(const std::string& header, uint32_t& v, uint32_t min, uint32_t max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();
	int i = v;
	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderInt("##UINTSLIDER", &i, min, max, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();
	if (change)
		v = glm::max(i, 0);
	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Float(const std::string& header, float& v, float _min, float max, float speed, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##FLOAT", &v, speed, _min, max, "%.3f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	if (_min != max && change) {
		if (_min > max) {
			v = glm::max(_min, v);
		}
		else {
			v = std::clamp(v, _min, max);
		}
	}

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_FloatSlider(const std::string& header, float& v, float min, float max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiColumnsFlags_NoResize | ImGuiColumnsFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::Text(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderFloat("##FLOATSLIDER", &v, min, max, "%.3f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
void ImGui::MDML_HelpMarker(const std::string& text) {
	ImGui::TextDisabled("(?)");
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(text.c_str());
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}

}
