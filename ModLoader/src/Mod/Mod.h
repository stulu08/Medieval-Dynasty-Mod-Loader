#pragma once
#include "Utilities/Logger.h"
#include "Utilities/Math.h"
#include "UI/LoaderUI.h"
#include "MDML.h"
#include "GameInfo.h"
#include "Globals.h"

#include "UE4.h"


namespace EventsEnabled {
	struct EnabledEvents {
		EnabledEvents() = default;
		EnabledEvents(bool InitGameState, bool BeginPlay, bool PostBeginPlay, bool Tick, bool SetupImGui, bool DrawImGui, bool DX11Present, bool DX11ResizeBuffers) {
			this->InitGameState = InitGameState;
			this->BeginPlay = BeginPlay;
			this->Tick = Tick;
			this->SetupImGui = SetupImGui;
			this->DrawImGui = DrawImGui;
			this->DX11Present = DX11Present;
			this->DX11ResizeBuffers = DX11ResizeBuffers;
		}
		bool InitGameState = true;
		bool BeginPlay = true;
		bool PostBeginPlay = true;
		bool Tick = false;

		bool SetupImGui = true;
		bool DrawImGui = true;

		bool DX11Present = true;
		bool DX11ResizeBuffers = true;

	};
	static inline EnabledEvents Default = EnabledEvents();
	static inline EnabledEvents None = EnabledEvents(false, false, false, false, false, false, false, false);
	static inline EnabledEvents All = EnabledEvents(true, true, true, true, true, true, true, true);
	static inline EnabledEvents EngineOnly = EnabledEvents(true, true, true, true, false, false, false, false);
	static inline EnabledEvents GuiOnly = EnabledEvents(false, false, false, false, true, true, false, false);
	static inline EnabledEvents DXOnly = EnabledEvents(false, false, false, false, false, false, true, true);
	static inline EnabledEvents EngineAndGui = EnabledEvents(true, true, true, true, true, true, false, false);
	static inline EnabledEvents EngineAndDX = EnabledEvents(true, true, true, true, false, false, true, true);
	static inline EnabledEvents GuiAndDX = EnabledEvents(false, false, false, false, true, true, true, true);
	static inline EnabledEvents EngineNoTick = EnabledEvents(true, true, true, false, false, false, false, false);
	static inline EnabledEvents EngineAndGuiNoTick = EnabledEvents(true, true, true, false, true, true, false, false);
	static inline EnabledEvents EngineAndDXNoTick = EnabledEvents(true, true, true, false, false, false, true, true);
}
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
	virtual void InitializeMod() {}

	//InitGameState Call
	virtual bool InitGameState() { return false; }

	//Call ImGui Here
	virtual bool DrawImGui() { return false; }

	//If you want to load a font or theme
	virtual bool SetupImGui(ImGuiIO& io) { return false; }

	//Beginplay Hook of Every Actor
	virtual bool BeginPlay(UE4::AActor* Actor) { return false; }

	//Called on UWorld::Tick
	virtual bool Tick(UE4::ELevelTick tick, float DelatTime) { return false; }

	//PostBeginPlay of EVERY Blueprint ModActor
	virtual bool PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor) { return false; }

	//DX11 hook for when an image will be presented to the screen
	virtual bool DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) { return false; }

	virtual bool DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) { return false; }

	virtual void OnModMenuButtonPressed() {}

	//Used Internally to setup Hook Event System
	void SetupHooks(const EventsEnabled::EnabledEvents& events = EventsEnabled::Default);

	static Mod* ModRef;
	// The folder to the Mod Directory
	static std::string GetModsFolder();
	// The folder where Movies, Paks,... is loacted
	static std::string GetContentFolder();
	//Returns the folder where the mod dll is located
	std::string GetFolder();
protected:
	//Called When Mod Construct Finishes
	void CompleteModCreation();
	Ref<Logger> logger = nullptr;
	HMODULE hModule;
};

namespace std {
	inline std::ostream& operator<<(std::ostream& os, const UE4::FQuat& quat) { return os << glm::to_string((glm::quat)quat); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector4& vector) { return os << glm::to_string((glm::vec4)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FRotator& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector2D& vector) { return os << glm::to_string((glm::vec2)vector); }
}