#include "Core.h"
#include "D3D11Hook.h"

#include <atomic>

#include "UI/ImGuiHost.h"
#include "MDML/Hooks.h"
#include "MDML/Log.h"
#include "Runtime/LoaderConfig.h"
#include "Mods/Registry.h"

namespace mdml::ui {
	namespace {
		ID3D11Device* s_device = nullptr;
		ID3D11DeviceContext* s_context = nullptr;
		ID3D11RenderTargetView* s_renderTargetView = nullptr;
		// Render thread only: true until the first Present has created the device objects and the ImGui context.
		bool s_initRendering = true;
		std::atomic<bool> s_installed{ false };

		using PresentFn = HRESULT(__stdcall*)(IDXGISwapChain*, UINT, UINT);
		using ResizeBuffersFn = HRESULT(*)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
		PresentFn s_originalPresent = nullptr;
		ResizeBuffersFn s_originalResizeBuffers = nullptr;

		bool CreateRenderTargetView(IDXGISwapChain* swapChain)
		{
			ID3D11Texture2D* backBuffer = nullptr;
			if (FAILED(swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&backBuffer)))
				return false;
			HRESULT hr = s_device->CreateRenderTargetView(backBuffer, NULL, &s_renderTargetView);
			backBuffer->Release();
			return SUCCEEDED(hr);
		}

		HRESULT HookedResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
		{
			mdml::mods::Registry::Get().CoreMods.callEvent("DX11ResizeBuffers", s_device, s_context, Width, Height, NewFormat, SwapChainFlags);

			if (s_initRendering)
				return s_originalResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

			if (s_renderTargetView) {
				s_context->OMSetRenderTargets(0, 0, 0);
				s_renderTargetView->Release();
				s_renderTargetView = nullptr;
			}

			HRESULT hr = s_originalResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

			if (!CreateRenderTargetView(pSwapChain)) {
				Log::Error_UML("Failed to recreate D3D11RenderTargetView after ResizeBuffers");
				return hr;
			}
			s_context->OMSetRenderTargets(1, &s_renderTargetView, NULL);

			D3D11_VIEWPORT vp;
			vp.Width = (FLOAT)Width;
			vp.Height = (FLOAT)Height;
			vp.MinDepth = 0.0f;
			vp.MaxDepth = 1.0f;
			vp.TopLeftX = 0;
			vp.TopLeftY = 0;
			s_context->RSSetViewports(1, &vp);
			return hr;
		}

		// First Present: device objects + ImGui context.
		void InitRendering(IDXGISwapChain* pSwapChain)
		{
			if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&s_device)))
			{
				s_device->GetImmediateContext(&s_context);
				Log::Info_UML("D3D11Device Initialized");
			}
			else
			{
				Log::Error_UML("Failed to initialize D3D11Device");
			}

			if (s_device && CreateRenderTargetView(pSwapChain))
				Log::Info_UML("D3D11RenderTargetView Initialized");
			else
				Log::Error_UML("Failed to initialize D3D11RenderTargetView");

			ImGuiHost::Init(s_device, s_context);

			s_initRendering = false;
		}

		HRESULT __stdcall HookedPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
		{
			// The loader initializes the D3D objects first, mods can then use them for drawing, hardware access, etc.
			if (s_initRendering)
				InitRendering(pSwapChain);

			// must be bound before drawing
			s_context->OMSetRenderTargets(1, &s_renderTargetView, NULL);
			ImGuiHost::RenderFrame();

			mdml::mods::Registry::Get().CoreMods.callEvent("DX11Present", s_device, s_context, s_renderTargetView);

			return s_originalPresent(pSwapChain, SyncInterval, Flags);
		}

		DWORD WINAPI InstallThread(LPVOID)
		{
			Log::Info_UML("Setting up D3D11Present hook");

			HMODULE hDXGIDLL = 0;
			do
			{
				hDXGIDLL = GetModuleHandle(L"dxgi.dll");
				Sleep(100);
			} while (!hDXGIDLL);
			Sleep(100);

			// A dummy window, device and swap chain only to read the vtable of IDXGISwapChain.
			WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DefWindowProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
			RegisterClassExA(&wc);
			HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

			D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
			D3D_FEATURE_LEVEL obtainedLevel;
			ID3D11Device* dummyDevice = nullptr;
			ID3D11DeviceContext* dummyContext = nullptr;
			IDXGISwapChain* dummySwapChain = nullptr;

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

			if (FAILED(D3D11CreateDeviceAndSwapChain(
				nullptr,
				D3D_DRIVER_TYPE_HARDWARE,
				nullptr,
				createFlags,
				requestedLevels,
				sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL),
				D3D11_SDK_VERSION,
				&scd,
				&dummySwapChain,
				&dummyDevice,
				&obtainedLevel,
				&dummyContext)))
			{
				Log::Error_UML("Failed to create D3D device and swapchain");
				DestroyWindow(hWnd);
				UnregisterClassA("DX", wc.hInstance);
				return NULL;
			}

			DWORD_PTR* swapChainVtable = (DWORD_PTR*)(*(DWORD_PTR*)dummySwapChain);
			void* presentTarget = (void*)swapChainVtable[8];
			void* resizeBuffersTarget = (void*)swapChainVtable[13];
			mdml::platform::Hooks::Add((DWORD64)resizeBuffersTarget, &HookedResizeBuffers, &s_originalResizeBuffers, "DX11-ResizeBuffers");
			mdml::platform::Hooks::Add((DWORD64)presentTarget, &HookedPresent, &s_originalPresent, "DX11-Present");

			// The hooks patch the code of dxgi.dll, they do not depend on the dummy objects any more.
			dummySwapChain->Release();
			dummyContext->Release();
			dummyDevice->Release();
			DestroyWindow(hWnd);
			UnregisterClassA("DX", wc.hInstance);
			return NULL;
		}
	}

	void D3D11Hook::Install()
	{
		if (!mdml::runtime::Config.bEnableGUI) {
			// Was a system-modal MessageBox on every F1 press (stole fullscreen focus, blocked the hotkey thread). There
			// is no F1 window to show a notice in, so it is a log line, written once.
			static std::atomic<bool> s_warned{ false };
			if (!s_warned.exchange(true))
				Log::Warn_MDML("F1 window disabled: set [DEBUG] UseDebugUI=1 in Binaries/Win64/Config/ModLoaderInfo.ini and use DirectX 11 rendering in the game settings");
			return;
		}
		if (s_installed.exchange(true))
			return;
		CreateThread(NULL, 0, InstallThread, NULL, 0, NULL);
	}

	bool D3D11Hook::IsInstalled() { return s_installed; }
	ID3D11Device* D3D11Hook::Device() { return s_device; }
	ID3D11DeviceContext* D3D11Hook::Context() { return s_context; }
	ID3D11RenderTargetView* D3D11Hook::RenderTargetView() { return s_renderTargetView; }
}
