#include "Core.h"
#include "ImGuiHost.h"

#include <atomic>

#include <imgui/imgui.h>
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_impl_win32.h>

#include "UI/D3D11Hook.h"
#include "UI/LoaderWindow.h"
#include "UI/Themes.h"
#include "Platform/Logger.h"
#include "Platform/Memory.h"
#include "Runtime/LoaderConfig.h"
#include "Globals.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace mdml::ui {
	namespace {
		WNDPROC s_gameWindowProc = nullptr;
		std::atomic<bool> s_initialized{ false };
		std::atomic<bool> s_hotkeyThreadStarted{ false };

		LRESULT CALLBACK HookedWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
		{
			ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);

			ImGuiIO& io = ImGui::GetIO();
			if (io.WantCaptureMouse || io.WantCaptureKeyboard) {
				return true;
			}
			return CallWindowProc(s_gameWindowProc, hWnd, uMsg, wParam, lParam);
		}

		DWORD WINAPI HotkeyThread(LPVOID)
		{
			bool f1Pressed = false;
			while (true)
			{
				if (GetAsyncKeyState(VK_F1) != 0)
					f1Pressed = true;
				else if (f1Pressed)
				{
					f1Pressed = false;
					if (Global::GetGlobals()->bIsMenuOpen)
					{
						Global::GetGlobals()->bIsMenuOpen = false;
					}
					else
					{
						// bDelayGUISpawn: the DX hook is only installed the first time the menu is opened
						if (!D3D11Hook::IsInstalled())
							D3D11Hook::Install();
						Global::GetGlobals()->bIsMenuOpen = true;
					}
				}
				Sleep(1000 / 60);
			}
			return 0;
		}
	}

	void ImGuiHost::Init(ID3D11Device* device, ID3D11DeviceContext* context)
	{
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		io.IniFilename = mdml::runtime::Config.ImGuiFile.c_str();
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;           // Enable Docking
		StyleColorsPhotoShopDark();
		Global::GetGlobals()->CoreMods.callEvent<ImGuiIO&>("SetupImGui", io);

		HWND hGameWindow = MEM::FindWindow(GetCurrentProcessId(), L"UnrealWindow");
		s_gameWindowProc = (WNDPROC)SetWindowLongPtr(hGameWindow, GWLP_WNDPROC, (LONG_PTR)HookedWndProc);
		ImGui_ImplWin32_Init(hGameWindow);
		ImGui_ImplDX11_Init(device, context);

		s_initialized = true;
	}

	void ImGuiHost::RenderFrame()
	{
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		ImGui::GetIO().MouseDrawCursor = Global::GetGlobals()->bIsMenuOpen;
		if (Global::GetGlobals()->bIsMenuOpen)
		{
			LoaderWindow::Draw();
			Global::GetGlobals()->CoreMods.callEvent("DrawImGui");
		}

		ImGui::Render();
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}

	void ImGuiHost::StartHotkeyThread()
	{
		if (s_hotkeyThreadStarted.exchange(true))
			return;
		Log::Info_UML("CreateUILogicThread Called");
		CreateThread(0, 0, HotkeyThread, 0, 0, 0);
	}

	bool ImGuiHost::IsInitialized()
	{
		return s_initialized;
	}
}
