#pragma once
#include <string>
#include "Utilities/Logger.h"
#include "GameInfo/GameInfo.h"
#include "Utilities/Globals.h"
#include "../LoaderUI.h"
#include "../Math.h"
#include "Ue4.hpp"

class LOADER_API Mod
{
public:
	// Mod Default Variables
	std::string ModName;
	std::string ModVersion;
	std::string ModDescription;
	std::string ModAuthors;
	std::string ModLoaderVersion;
	std::string MedievalModLoaderVersion;
	bool UseMenuButton = 0;
	bool CreateLogger = 0;
	bool LogToFile = 0;
	//ModInternals
	bool IsFinishedCreating = 0;

	//Called after each mod is injected, Looped through via gloabals
	virtual void InitializeMod();

	//InitGameState Call
	virtual void InitGameState();

	//Call ImGui Here
	virtual void DrawImGui();

	//If you want to load a font or theme
	virtual void SetupImGui(ImGuiIO& io);

	//Beginplay Hook of Every Actor
	virtual void BeginPlay(UE4::AActor* Actor);

	//PostBeginPlay of EVERY Blueprint ModActor
	virtual void PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor);

	//DX11 hook for when an image will be presented to the screen
	virtual void DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView);

	virtual void DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

	virtual void OnModMenuButtonPressed();

	//Used Internally to setup Hook Event System
	void SetupHooks();

	static Mod* ModRef;
protected:
	//Called When Mod Construct Finishes
	void CompleteModCreation();
	void SetImGuiColorTheme(ImGuiColorTheme theme);
	Ref<Logger> logger = nullptr;
};

namespace std {
	inline std::ostream& operator<<(std::ostream& os, const UE4::FQuat& quat) { return os << glm::to_string((glm::quat)quat); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector4& vector) { return os << glm::to_string((glm::vec4)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FRotator& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector2D& vector) { return os << glm::to_string((glm::vec2)vector); }
}