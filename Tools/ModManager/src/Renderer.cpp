#include "Renderer.h"
#include "Application.h"

bool Renderer::Initialize(HINSTANCE hInstance, int nCmdShow, uint32_t x, uint32_t y, uint32_t width, uint32_t height, bool maximized) {
    // Create application window
    WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, className, NULL };
    RegisterClassExA(&wc);
    hWnd = CreateWindowA(wc.lpszClassName, className, WS_OVERLAPPEDWINDOW, (int)x, (int)y, (int)width, (int)height, NULL, NULL, wc.hInstance, NULL);

    // Initialize Direct3D
    if (!CreateDeviceD3D()) {
        CleanupDeviceD3D();
        UnregisterClassA(wc.lpszClassName, wc.hInstance);
        return false;
    }

    if (nCmdShow) {
        ShowWindow(GetConsoleWindow(), SW_SHOW);

        AllocConsole();
        static FILE* newstdin = nullptr;
        static FILE* newstdout = nullptr;
        static FILE* newstderr = nullptr;

        freopen_s(&newstdin, "CONIN$", "r", stdin);
        freopen_s(&newstdout, "CONOUT$", "w", stdout);
        freopen_s(&newstderr, "CONOUT$", "w", stderr);
    }

    ShowWindow(hWnd, maximized ? SW_SHOWMAXIMIZED : SW_SHOW);
    UpdateWindow(hWnd);

   

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.IniFilename = NULL;
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;  
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
    {
        style.Colors[ImGuiCol_WindowBg].w = 1.0f;
    }

    // Setup Platform/Renderer backends
    ImGui_ImplWin32_Init(hWnd);
    ImGui_ImplDX11_Init(pD3DDevice, pD3DDeviceContext);

    ZeroMemory(&msg, sizeof(msg));

    return true;
}

bool Renderer::Update() {
    while (PeekMessageA(&msg, NULL, 0U, 0U, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);

        if (msg.message == WM_QUIT) {
            Application::Get()->Stop();
            return false;
        }
    }
    return true;
}

void Renderer::BeginRender() {
    // Start the ImGui frame
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

}
void Renderer::EndRender() {
    // Rendering
    ImGui::Render();
    const float clearColor[4] = { 0.0f, 0.0f, 0.0f, 1.0f };
    pD3DDeviceContext->ClearRenderTargetView(pRenderTargetView, clearColor);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    pSwapChain->Present(1, 0); // V-Sync
}

void Renderer::Cleanup() {
    if (ImGui::GetCurrentContext()) {
        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();
    }

    CleanupDeviceD3D();

    if (hWnd) {
        DestroyWindow(hWnd);
        hWnd = NULL;
    }
    UnregisterClassA(className, GetModuleHandleA(NULL));
}

void Renderer::SetMaximized(bool value) {
    WINDOWPLACEMENT placement;
    ZeroMemory(&placement, sizeof(WINDOWPLACEMENT));
    placement.length = sizeof(WINDOWPLACEMENT);

    if (GetWindowPlacement(hWnd, &placement) && value) {
        placement.showCmd = SW_SHOWMAXIMIZED;
        SetWindowPlacement(hWnd, &placement);
        std::cout << "Yes";
    }
}

bool Renderer::IsMaximized() const {
    WINDOWPLACEMENT placement;
    ZeroMemory(&placement, sizeof(WINDOWPLACEMENT));
    placement.length = sizeof(WINDOWPLACEMENT);

    if (GetWindowPlacement(hWnd, &placement)) {
        return placement.showCmd == SW_SHOWMAXIMIZED;
    }
}

void Renderer::SetSize(uint32_t width, uint32_t height) {
    auto [x, y] = GetPos();
    MoveWindow(hWnd, (int)x, (int)y, (int)width, (int)height, true);
}

std::pair<uint32_t, uint32_t> Renderer::GetSize() const {
    RECT rect = {};
    GetWindowRect(hWnd, &rect);
    return { rect.right - rect.left,  rect.bottom - rect.top };
}

void Renderer::SetPos(uint32_t x, uint32_t y) {
    auto [width, height] = GetSize();
    MoveWindow(hWnd, (int)x, (int)y, (int)width, (int)height, true);
}

std::pair<uint32_t, uint32_t> Renderer::GetPos() const {
    RECT rect = {};
    GetWindowRect(hWnd, &rect);
    return { rect.left,  rect.top };
}

bool Renderer::CreateDeviceD3D() {
    DXGI_SWAP_CHAIN_DESC sd = {};
    sd.BufferCount = 1;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
#ifdef _DEBUG
    createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0 };
    if (FAILED(D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2,
        D3D11_SDK_VERSION, &sd, &pSwapChain, &pD3DDevice, &featureLevel, &pD3DDeviceContext))) {
        return false;
    }

    CreateRenderTarget();
    return true;
}

void Renderer::CleanupDeviceD3D() {
    CleanupRenderTarget();
    if (pSwapChain) { pSwapChain->Release(); pSwapChain = NULL; }
    if (pD3DDeviceContext) { pD3DDeviceContext->Release(); pD3DDeviceContext = NULL; }
    if (pD3DDevice) { pD3DDevice->Release(); pD3DDevice = NULL; }
}

void Renderer::CreateRenderTarget() {
    ID3D11Texture2D* pBackBuffer;
    pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    pD3DDevice->CreateRenderTargetView(pBackBuffer, NULL, &pRenderTargetView);
    pBackBuffer->Release();
    pD3DDeviceContext->OMSetRenderTargets(1, &pRenderTargetView, NULL);
}

void Renderer::CleanupRenderTarget() {
    if (pRenderTargetView) { pRenderTargetView->Release(); pRenderTargetView = NULL; }
}

LRESULT CALLBACK Renderer::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, message, wParam, lParam))
        return true;

    Application* app = Application::Get();
    Renderer* renderer = app->GetRenderer();
    
    switch (message) {
    case WM_SIZE:


        if (wParam != SIZE_MINIMIZED) {
            if (renderer && renderer->pSwapChain) {
                renderer->CleanupRenderTarget();
                renderer->pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
                renderer->CreateRenderTarget();
            }

            auto [width, height] = renderer->GetSize();
            auto [x, y] = renderer->GetPos();
            app->SetINIConfig("maximized", wParam == SIZE_MAXIMIZED, "Window");
            if (wParam != SIZE_MAXIMIZED) {
                app->SetINIConfig("width", width, "Window");
                app->SetINIConfig("height", height, "Window");
                app->SetINIConfig("x", x, "Window");
                app->SetINIConfig("y", y, "Window");
            }
            
        }

        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProcA(hWnd, message, wParam, lParam);
    }
}
