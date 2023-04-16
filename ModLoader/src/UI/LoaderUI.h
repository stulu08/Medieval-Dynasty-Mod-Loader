#pragma once
#include <d3d11.h>
#include <D3D11Shader.h>
#include <D3Dcompiler.h>
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_impl_win32.h>
#include <imgui/imgui_stdlib.h>
#include "UE4.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "D3dcompiler.lib")
#define DEFAULT_TREE_NODE_FLAGS ImGuiTreeNodeFlags_SpanAvailWidth | ImGuiTreeNodeFlags_OpenOnArrow | ImGuiTreeNodeFlags_OpenOnDoubleClick
#define IMGUI_TREE_CONTINUE { ImGui::TreePop(); continue; }
enum class ImGuiColorTheme {
	PhotoshopDark, Dark, AmoledDark, OceanDark, ImGuiClassic, ImGuiDark, ImGuiLight
};

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
class LOADER_API LoaderUI
{
public:
	typedef HRESULT(__stdcall* D3D11PresentHook) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	D3D11PresentHook phookD3D11Present = NULL;

	DWORD_PTR* pSwapChainVtable = NULL;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* pRenderTargetView = NULL;

	WNDPROC hGameWindowProc = NULL;

	D3D11_VIEWPORT viewport;
	float screenCenterX = 0;
	float screenCenterY = 0;

	HRESULT(*ResizeBuffers)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT) = NULL;

	HRESULT LoaderResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

	void LoaderD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

	static LRESULT CALLBACK hookWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	void CreateUILogicThread();

	static LoaderUI* GetUI();

	bool initRendering = true;

	static void HookDX();

	bool IsDXHooked = 0;
	
	static void setColorTheme(ImGuiColorTheme theme);
private:
	static LoaderUI* UI;
};

namespace ImGui {
	LOADER_API bool MDML_Combo(const std::string& header, int& current_item, const char* items_separated_by_zeros, int height_in_items = -1);
	LOADER_API bool MDML_Combo(const std::string& header, int32_t& current_item, const std::vector<std::string>& items);
	LOADER_API bool MDML_Vector4(const std::string& header, glm::vec4& vec, bool readonly = false);
	LOADER_API bool MDML_Vector4(const std::string& header, glm::quat& quat, bool readonly = false);
	LOADER_API bool MDML_Vector3(const std::string& header, glm::vec3& vec, bool readonly = false);
	LOADER_API bool MDML_Vector2(const std::string& header, glm::vec2& vec, bool readonly = false);
	LOADER_API bool MDML_String(const std::string& header, std::string& v, bool readonly = false);
	LOADER_API bool MDML_Bool(const std::string& header, bool& v, bool readonly = false);
	LOADER_API bool MDML_Int(const std::string& header, int& v, bool readonly = false);
	LOADER_API bool MDML_IntSlider(const std::string& header, int& v, int min = 0, int max = 10, bool readonly = false);
	LOADER_API bool MDML_UInt(const std::string& header, uint32_t& v, bool readonly = false);
	LOADER_API bool MDML_UIntSlider(const std::string& header, uint32_t& v, uint32_t min = 0, uint32_t max = 10, bool readonly = false);
	LOADER_API bool MDML_Float(const std::string& header, float& v, float min = .0f, float max = .0f, float speed = .1f, bool readonly = false);
	LOADER_API bool MDML_FloatSlider(const std::string& header, float& v, float min = 0.0f, float max = 1.0f, bool readonly = false);
	LOADER_API void MDML_HelpMarker(const std::string& text);

	inline bool Button(const std::string& header, std::function<void()> executeIfPressed, const ImVec2& Size = ImVec2(0,0)) {
		if (ImGui::Button(header.c_str(), Size)) {
			executeIfPressed();
			return true;
		}
		return false;
	}
	inline bool MDML_Vector4(const std::string& header, UE4::FQuat& quat, bool readonly = false) {
		glm::quat v = quat;
		bool re = MDML_Vector4(header, v, readonly);
		if (re)
			quat = v;
		return re;
	}
	inline bool MDML_Vector4(const std::string& header, UE4::FVector4& vec, bool readonly = false) {
		glm::vec4 v = vec;
		bool re = MDML_Vector4(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector2(const std::string& header, UE4::FVector2D& vec, bool readonly = false) {
		glm::vec2 v = vec;
		bool re = MDML_Vector2(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector3(const std::string& header, UE4::FVector& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = MDML_Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector3(const std::string& header, UE4::FRotator& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = MDML_Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
}

