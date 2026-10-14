#include "Core.h"
#include "MDML/Mod.h"
#include "MDML/Log.h"
#include "Mods/Registry.h"

// Every registered event binds the mod it belongs to (C8): the callback calls the virtual on that mod directly.
// Before, all callbacks went through the process-wide Mod::ModRef, set per dispatch by ModStack::setCurrentMod; the
// game thread (Tick/BeginPlay) and the render thread (DrawImGui/DX11Present) dispatch concurrently, so a callback
// could run on the wrong mod.
#define REGISTER_EVENT(name, ...)\
if(events.name) {\
	mdml::mods::Registry::Get().CoreMods.clearModEvents(#name, this); \
	mdml::mods::Registry::Get().CoreMods.registerEvent(new ModEvent<__VA_ARGS__>(this, #name, \
		[mod = this](auto&&... args) { return mod->name(std::forward<decltype(args)>(args)...); })); \
}
void Mod::SetupHooks(const EventsEnabled::EnabledEvents& events) {
	REGISTER_EVENT(BeginPlay, UE4::AActor*);
	REGISTER_EVENT(InitGameState);
	REGISTER_EVENT(PostBeginPlay, std::wstring, UE4::AActor*);
	REGISTER_EVENT(Tick, UE4::ELevelTick, float);
	REGISTER_EVENT(DrawImGui);
	REGISTER_EVENT(SetupImGui, ImGuiIO&);
	REGISTER_EVENT(DX11Present, ID3D11Device*, ID3D11DeviceContext*, ID3D11RenderTargetView*);
	REGISTER_EVENT(DX11ResizeBuffers, ID3D11Device*, ID3D11DeviceContext*, UINT, UINT, DXGI_FORMAT, UINT);
}

void Mod::CompleteModCreation()
{
	IsFinishedCreating = true;
	mdml::mods::Registry::Get().CoreMods.pushMod(this);
	if (CreateLogger) {
		if (LogToFile) {
			logger = Logger::Create(ModName, Log::getLogFile(ModName + "-log.txt"));
			logger->Info("Created mod logger({1}): {0}", logger->getName(), mdml::runtime::FormatPath(Log::getLogFile(ModName + "-log.txt")));
		}
		else {
			logger = Logger::Create(ModName);
			logger->Info("Created mod logger: {0}", logger->getName());
		}
	}
	Log::Info_MDML("Mod Created: {0}", ModName);
	if (ModLoaderVersion != MODLOADER_VERSION)
	{
		Log::Warn_UML("Mod: {0} was created with a different version of the Unreal Mod Loader. This mod may be unstable.", ModName.c_str());
	}
	if (MedievalModLoaderVersion != MEDIEVAL_VERSION)
	{
		Log::Warn_MDML("Mod: {0} was created with a different version of the MDML. This mod may be unstable.", ModName.c_str());
	}
}

std::string Mod::GetFolder() {
	if (hModule) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(hModule, path_c, MAX_PATH);
		return std::filesystem::path(std::string(path_c)).parent_path().string();
	}
	return GetModsFolder();
}

// Paths from the game EXE's location (<root>/Medieval_Dynasty/Binaries/Win64/<exe>), not the working directory.
std::string Mod::GetModsFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\Mods\\";
	}
	return path;
}
std::string Mod::GetContentFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\";
	}
	return path;
}
