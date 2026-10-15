#pragma once
// CoreMod: the base class of every core component (native mod DLL) of a mod (mod.ini [Core]). The mod container itself,
// with its Core / Blueprint / Overwrite components, is MDML/Mod.h; game-specific helpers: MDML/GameMod.h.
// Entry point of a mod DLL: derive from CoreMod (or GameMod), then MDML_MOD(YourClass) once in a .cpp file.
#include "MDML/Log.h"
#include "MDML/Math.h"
#include "MDML/UI.h"
#include "MDML/Paths.h"

#include "UE4.h"

class Mod;
class ModContext;
namespace mdml::mods { struct ModAccess; }

namespace EventsEnabled {
	struct EnabledEvents {
		EnabledEvents() = default;
		EnabledEvents(bool InitGameState, bool BeginPlay, bool PostBeginPlay, bool Tick, bool SetupImGui, bool DrawImGui, bool DX11Present, bool DX11ResizeBuffers) {
			this->InitGameState = InitGameState;
			this->BeginPlay = BeginPlay;
			// PostBeginPlay has no argument of its own: it follows BeginPlay (owner decision 2026-10-14, fixes C4:
			// before, every preset incl. None/GuiOnly registered PostBeginPlay).
			this->PostBeginPlay = BeginPlay;
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
class LOADER_API CoreMod
{
public:
	virtual ~CoreMod() = default;

	// Load phase 1 (init thread, the engine is not ready yet: no UObjects). Read your settings, subscribe, and use ctx to
	// change the components of the mods (add/remove overwrite files, edit the Blueprint component) before they are applied.
	virtual void OnLoad(ModContext& ctx) {}
	// The game is quitting: called once per loaded core, in REVERSE load order, on the game thread from a hook on
	// FEngineLoop::Exit (UObjects are still alive, the engine is not torn down yet; the loader's own hooks and logger
	// still work). Not called for level changes (that will be an MD.* world event) and not called when the hook could
	// not be resolved or the process is killed. An exception is logged and the next core still gets its call.
	virtual void OnUnload() {}
	virtual void OnModMenuButtonPressed() {}

	// ---- Events (still the Wave 3 mechanism, replaced by the subscription bus in mod-components phase 2) ----
	//Called after each mod is injected, Looped through via globals (engine ready, first InitGameState)
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
	virtual bool Tick(UE4::ELevelTick tick, float DeltaTime) { return false; }

	//PostBeginPlay of EVERY Blueprint ModActor
	virtual bool PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor) { return false; }

	//DX11 hook for when an image will be presented to the screen
	virtual bool DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) { return false; }

	virtual bool DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) { return false; }

	//Used Internally to setup Hook Event System
	void SetupHooks(const EventsEnabled::EnabledEvents& events = EventsEnabled::Default);

	// The Mod this core component belongs to (valid from the moment OnLoad is called).
	Mod& GetMod() const { return *m_mod; }
	// Shortcut for GetMod().Info().Name
	const std::string& GetName() const;
	// [Core] MenuButton=1 in mod.ini: the loader window shows a button that calls OnModMenuButtonPressed.
	bool UseMenuButton = false;

	// The folder to the Mod Directory
	static std::string GetModsFolder();
	// The folder where Movies, Paks,... is located
	static std::string GetContentFolder();
	// The folder of this mod (Content/Mods/<Folder>, where its mod.ini is located)
	std::string GetFolder();
protected:
	// Created by the loader from [Core] Logger= (None | Console | File) before OnLoad; null for None.
	Ref<Logger> logger = nullptr;
	// The mod DLL's module handle (set by the loader).
	HMODULE hModule = nullptr;
private:
	friend struct mdml::mods::ModAccess;
	Mod* m_mod = nullptr;
};

// Entry point of a mod DLL: exports MDML_CreateMod (the loader calls it after LoadLibrary and then OnLoad) and the
// version stamps the loader compares with its own. Use once, in one .cpp file of the DLL:  MDML_MOD(MyMod)
#define MDML_MOD(ModClass) \
	extern "C" __declspec(dllexport) extern const char MDML_ModLoaderVersion[] = MODLOADER_VERSION; \
	extern "C" __declspec(dllexport) extern const char MDML_MedievalVersion[] = MEDIEVAL_VERSION; \
	extern "C" __declspec(dllexport) CoreMod* MDML_CreateMod() { return new ModClass(); }

namespace std {
	inline std::ostream& operator<<(std::ostream& os, const UE4::FQuat& quat) { return os << glm::to_string((glm::quat)quat); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector4& vector) { return os << glm::to_string((glm::vec4)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FRotator& vector) { return os << glm::to_string((glm::vec3)vector); }
	inline std::ostream& operator<<(std::ostream& os, const UE4::FVector2D& vector) { return os << glm::to_string((glm::vec2)vector); }
}