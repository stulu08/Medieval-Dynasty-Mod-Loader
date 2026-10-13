#pragma once
#include <windows.h>
#include <d3d11.h>
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_stdlib.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"

#pragma comment(lib, "d3d11.lib")

IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class Renderer {
public:
    Renderer() : hWnd(nullptr), pD3DDevice(nullptr), pD3DDeviceContext(nullptr), pSwapChain(nullptr), pRenderTargetView(nullptr) {}

    ~Renderer() {
        Cleanup();
    }
    bool Initialize(HINSTANCE hInstance, int nCmdShow, uint32_t x = 100, uint32_t y = 100, uint32_t width = 1280, uint32_t height = 800, bool maximized = false);
    bool Update();
    void BeginRender();
    void EndRender();
    void Cleanup();

    void SetMaximized(bool value);
    bool IsMaximized() const;

    void SetSize(uint32_t width = 1280, uint32_t height = 800);
    std::pair<uint32_t, uint32_t> GetSize() const;
    
    void SetPos(uint32_t x, uint32_t y);
    std::pair<uint32_t, uint32_t> GetPos() const;

private:
    HWND hWnd;
    ID3D11Device* pD3DDevice;
    ID3D11DeviceContext* pD3DDeviceContext;
    IDXGISwapChain* pSwapChain;
    ID3D11RenderTargetView* pRenderTargetView;
    MSG msg = {};
    const char* className = "MDML Mod Manager";

    static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
    bool CreateDeviceD3D();
    void CleanupDeviceD3D();
    void CreateRenderTarget();
    void CleanupRenderTarget();
};