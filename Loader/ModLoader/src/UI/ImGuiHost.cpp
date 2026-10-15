#include "Core.h"
#include "ImGuiHost.h"

#include <atomic>

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h> // ImGuiErrorRecoveryState
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_impl_win32.h>

#include "UI/D3D11Hook.h"
#include "UI/LoaderWindow.h"
#include "UI/Themes.h"
#include "MDML/Log.h"
#include "Runtime/LoaderConfig.h"
#include "Mods/Registry.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace mdml::ui {
	namespace {
		WNDPROC s_gameWindowProc = nullptr;
		std::atomic<bool> s_initialized{ false };
		std::atomic<bool> s_hotkeyThreadStarted{ false };
		// F1 menu state (was Global::bIsMenuOpen): written by the hotkey thread and the InitGameState hook, read on the render thread.
		std::atomic<bool> s_menuOpen{ false };

		// First visible top-level window of this process with the given class (was MEM::FindWindow in MDML/Memory.h).
		HWND FindProcessWindow(DWORD pid, const wchar_t* className)
		{
			for (HWND hWnd = GetTopWindow(0); hWnd != NULL; hWnd = GetNextWindow(hWnd, GW_HWNDNEXT))
			{
				DWORD windowPid = 0;
				GetWindowThreadProcessId(hWnd, &windowPid);
				if (windowPid != pid || !IsWindowVisible(hWnd))
					continue;
				wchar_t windowClass[256];
				if (GetClassNameW(hWnd, windowClass, 256) && wcscmp(windowClass, className) == 0)
					return hWnd;
			}
			return NULL;
		}

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
					if (s_menuOpen)
					{
						s_menuOpen = false;
					}
					else
					{
						// bDelayGUISpawn: the DX hook is only installed the first time the menu is opened
						if (!D3D11Hook::IsInstalled())
							D3D11Hook::Install();
						s_menuOpen = true;
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
		mdml::mods::Registry::Get().CoreMods.callEvent<ImGuiIO&>("SetupImGui", io);

		HWND hGameWindow = FindProcessWindow(GetCurrentProcessId(), L"UnrealWindow");
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
		const bool menuOpen = s_menuOpen;
		ImGui::GetIO().MouseDrawCursor = menuOpen;
		if (menuOpen)
		{
			LoaderWindow::Draw();
			// A mod whose DrawImGui throws is removed from the stack mid-frame, usually between Begin and End. Restore
			// ImGui's window/ID/style stacks afterwards (ImGui's own error recovery), so one broken mod cannot leave
			// ImGui asserting "Missing End()" for everyone.
			ImGuiErrorRecoveryState recovery;
			ImGui::ErrorRecoveryStoreState(&recovery);
			mdml::mods::Registry::Get().CoreMods.callEvent("DrawImGui");
			ImGui::ErrorRecoveryTryToRecoverState(&recovery);
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

	bool ImGuiHost::IsMenuOpen()
	{
		return s_menuOpen;
	}

	void ImGuiHost::SetMenuOpen(bool open)
	{
		s_menuOpen = open;
	}
}
