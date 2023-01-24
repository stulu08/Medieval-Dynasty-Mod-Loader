#include "BaseMod.h"
#include "Utilities/MinHook.h"
#include "Utils.h"

#include "UI/ImGuiColorTextEdit/TextEditor.h"

#include "UE4/Kismet/BlueprintFunctionLibrary.h"
#include "UE4/Engine/BlueprintGeneratedClass.h"

#include <filesystem>

namespace MDMLBase {
	static bool needObjectReload = true;
	namespace BaseModHooks {
		static UE4::UFunction* IsDevelopmentBuild;
		static UE4::UFunction* IsShippingBuild;

		PVOID(*orig_IsShippingBuild)();
		static bool __fastcall hook_IsShippingBuild() {
			return true;
		}
		PVOID(*orig_IsDevelopmentBuild)();
		static bool __fastcall hook_IsDevelopmentBuild() {
			return true;
		}

		static void CreateHooks() {
			static bool createdHooks = false;
			if (createdHooks) {
				Mod::Get().getLogger()->Warn("BaseMod Hooks already loaded");
			}
			createdHooks = true;

			BaseModHooks::IsDevelopmentBuild = (UE4::UFunction*)UE4::UObject::StaticFindObject((DWORD64)0, (UE4::UObject*)((DWORD64)-1), L"TDBPL_IsDevelopmentBuild");
			BaseModHooks::IsShippingBuild = (UE4::UFunction*)UE4::UObject::StaticFindObject((DWORD64)0, (UE4::UObject*)((DWORD64)-1), L"TDBPL_IsShippingBuild");

#if 0
			MinHook::Init();

			if(BaseModHooks::IsDevelopmentBuild)
				MinHook::Add((DWORD64)BaseModHooks::IsShippingBuild->GetFunction(), &hook_IsShippingBuild, &orig_IsShippingBuild, "TD_Blueprint_Library::TDBPL_IsShippingBuild");
			else
				Mod::Get().getLogger()->Warn("IsShippingBuild function was not found");

			if (BaseModHooks::IsShippingBuild)
				MinHook::Add((DWORD64)BaseModHooks::IsDevelopmentBuild->GetFunction(), &hook_IsDevelopmentBuild, &orig_IsDevelopmentBuild, "TD_Blueprint_Library::TDBPL_IsDevelopmentBuild");
			else
				Mod::Get().getLogger()->Warn("IsDevelopmentBuild function was not found");
#else
			DWORD64 dev = (DWORD64)IsDevelopmentBuild->GetFunction();
			DWORD64 ship = (DWORD64)IsShippingBuild->GetFunction();
			IsDevelopmentBuild->SetFunction(ship);
			IsShippingBuild->SetFunction(dev);
#endif
		}
	}
	Mod::~Mod() { }
	void Mod::InitializeMod() {
		UE4::InitSDK();
		SetupHooks();
		BaseModHooks::CreateHooks();
	}
	void Mod::InitGameState() {
		PlayerActor = nullptr;
		PlayerControler = nullptr;
		needObjectReload = true;
	}
	void Mod::BeginPlay(UE4::AActor* Actor) {
		if (Actor == nullptr)
			return;
		if (Utils::FilterByBPClass("BlueprintGeneratedClass PC_Player.PC_Player_C", Actor)) {
			logger->Info("Player loaded {0}", Actor->GetName());
			PlayerActor = Actor;
			
		}
		if (Utils::FilterByBPClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C", Actor)) {
			PlayerControler = Actor;
			logger->Info("PlayerControler found");
		}


	}
	void Mod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
	{
		// Filters Out All Mod Actors Not Related To Your Mod
		std::wstring TmpModName(ModName.begin(), ModName.end());
		if (ModActorName == TmpModName) {
			//Sets ModActor Ref
			ModActor = Actor;
		}

	}
	void Mod::SetupImGui(ImGuiIO& io) {
		io.ConfigWindowsMoveFromTitleBarOnly = true;
	}
	void Mod::DrawImGui() {
		Utils::Export::CheckFinished();
		if (ImGui::Begin("Base Mod Debug Menu", nullptr, ImGuiWindowFlags_MenuBar)) {
			if (ImGui::BeginMenuBar()) {
				if (ImGui::BeginMenu("Views")) {
					if (ImGui::MenuItem("Show Object Browser", "", m_showObjectBrowser)) {
						m_showObjectBrowser = !m_showObjectBrowser;
					}
					if (ImGui::MenuItem("Show INI Browser", "", m_showIniBrowser)) {
						m_showIniBrowser = !m_showIniBrowser;
					}
					ImGui::EndMenu();
				}
				ImGui::EndMenuBar();
			}

			if (ImGui::CollapsingHeader("Cheat Menu")) {
				bool isDev, isShip;
				{
					class TD_Blueprint_Library : public UE4::UBlueprintFunctionLibrary {
					public:
						static UE4::UClass* StaticClass() {
							static auto ptr = UObject::FindClass("Class TD_Blueprint_Library.TD_Blueprint_Library");
							return ptr;
						}
					};
					static TD_Blueprint_Library* td_Blueprint_Library = (TD_Blueprint_Library*)TD_Blueprint_Library::StaticClass()->CreateDefaultObject();
					static struct {
						bool value;
					}Return;
					if (BaseModHooks::IsDevelopmentBuild) {
						td_Blueprint_Library->ProcessEvent(BaseModHooks::IsDevelopmentBuild, &Return);
						isDev = Return.value;
					}
					if (BaseModHooks::IsShippingBuild) {
						td_Blueprint_Library->ProcessEvent(BaseModHooks::IsShippingBuild, &Return);
						isShip = Return.value;
					}
				}

				ImGui::Text("Function IsDevelopmentBuild: %s -> %s", 
					BaseModHooks::IsDevelopmentBuild ? std::to_string((DWORD64)BaseModHooks::IsDevelopmentBuild->GetFunction()).c_str() : "Not Found",
					BaseModHooks::IsDevelopmentBuild ? (isDev ? "true" : "false") : "????");
				ImGui::Text("Function IsShippingBuild   : %s -> %s",
					BaseModHooks::IsShippingBuild ? std::to_string((DWORD64)BaseModHooks::IsShippingBuild->GetFunction()).c_str() : "Not Found",
					BaseModHooks::IsShippingBuild ? (isShip ? "true" : "false") : "????");
				
				ImGui::Separator();
			}
			
			if (PlayerActor != nullptr) {
				ImGui::Text("Player Actor: %s", PlayerActor->GetName().c_str());
				if (ImGui::Button("Cheat Menu")) {
					PlayerActor->CallFunctionByNameWithArguments(TEXT("CheatMenu"), nullptr, NULL, true);
				}
			}
			else
				ImGui::Text("Player Actor: not found");

			if (PlayerControler != nullptr) {
				ImGui::Text("Player Controller Actor: %s", PlayerControler->GetName().c_str());
				if (ImGui::Button("Unstuck")) {
					PlayerControler->CallFunctionByNameWithArguments(TEXT("Unstuck"), nullptr, NULL, true);
				}
				if (ImGui::CollapsingHeader("Player Controller Transform")) {
					Utils::Gui::UE4ActorTransformEdit(PlayerControler);
				}
			}
			else
				ImGui::Text("Player Controller Actor not found");


		}
		ImGui::End();

		if (m_showObjectBrowser)
			ShowObjectBrowser(&m_showObjectBrowser);
		if (m_showIniBrowser)
			ShowINIBrowser(&m_showIniBrowser);
	}

	void Mod::ShowObjectBrowser(bool* enabled) {
		if (ImGui::Begin("Object Browser", enabled)) {
			static bool init = true;
			static std::vector<UE4::UObject*> actors;
			static std::vector<UE4::UObject*> classes;
			static std::vector<UE4::UObject*> blueprints;
			static std::vector<UE4::UObject*> packages;
			if (needObjectReload) {
				actors.clear();
				classes.clear();
				blueprints.clear();
				packages.clear();
				needObjectReload = false;
			}
			size_t index = 0;
			if (ImGui::Button("Update")) {
				init = false;
			}
			ImGui::Separator();
			if ((ImGui::TreeNodeEx("ACTORLIST", DEFAULT_TREE_NODE_FLAGS | ImGuiTreeNodeFlags_CollapsingHeader, "%d Actors", actors.size()))) {
				static std::string search;
				ImGui::InputText("##SearchClasses_SEARCHBAR", &search);
				for (UE4::UObject* object : actors) {
					if (!object)
						continue;
					if (!Utils::Gui::SearchBar(object, search))
						continue;
					UE4::AActor* actor = static_cast<UE4::AActor*>(object);
					if (ImGui::TreeNodeEx(("Actors_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, actor->GetName().c_str())) {
						if (ImGui::CollapsingHeader("Transform"))
							Utils::Gui::UE4ActorTransformEdit(actor);
						if (ImGui::CollapsingHeader("Class"))
							Utils::Gui::UE4ClassInfo(actor->GetClass());
						ImGui::TreePop();
					}
				}
			}
			index = 0;
			if (ImGui::CollapsingHeader(std::string(std::to_string(classes.size()) + " Classes").c_str())) {
				static std::string search;
				ImGui::InputText("##SearchClasses_SEARCHBAR", &search);
				for (auto object : classes) {
					if (!object)
						continue;
					if (!Utils::Gui::SearchBar(object, search))
						continue;
					UE4::UClass* clas = static_cast<UE4::UClass*>(object);
					if (ImGui::TreeNodeEx(("Classes_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, clas->GetName().c_str())) {
						Utils::Gui::UE4ClassInfo(clas);
						ImGui::TreePop();
					}
				}
			}
			index = 0;
			if (ImGui::CollapsingHeader(std::string(std::to_string(blueprints.size()) + " Blueprints").c_str())) {
				static std::string search;
				ImGui::InputText("##SearchBlueprints_SEARCHBAR", &search);
				for (auto object : blueprints) {
					if (!object)
						continue;
					if (!Utils::Gui::SearchBar(object, search))
						continue;
					UE4::UClass* clas = static_cast<UE4::UClass*>(object);
					if (ImGui::TreeNodeEx(("Blueprints_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, clas->GetName().c_str())) {
						Utils::Gui::UE4ClassInfo(clas);
						ImGui::TreePop();
					}
				}
			}
			index = 0;
			if (ImGui::CollapsingHeader(std::string(std::to_string(packages.size()) + " Packages").c_str())) {
				static std::string search;
				ImGui::InputText("##SearchPackages_SEARCHBAR", &search);
				for (auto object : packages) {
					if (!object)
						continue;
					if (!Utils::Gui::SearchBar(object, search))
						continue;
					if (ImGui::TreeNodeEx(("Packages_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, object->GetName().c_str())) {
						static std::unordered_map<UE4::UObject*, int32_t> counts;
						if (counts.find(object) != counts.end()) {
							ImGui::Text("Found %d objects", counts[object]);
						}
						if (ImGui::Button("Count objects")) {
							counts[object] = (int32_t)((UE4::UPackage*)object)->GetAllObjectsInPackage(true).size();
						}
						if (ImGui::Button("Generate C++ files")) {
							Utils::Export::StartThreadPackage((UE4::UPackage*)object, "Export");
						}
						ImGui::TreePop();
					}
				}
			}
			if (!init) {
				init = true;
				actors = UE4::UObject::GetAllObjectsOfType<UE4::UObject>(UE4::AActor::StaticClass(), true);
				classes.clear();
				blueprints.clear();
				packages.clear();
				if (UE4::UObject::IsChunkedArray()) {
					for (int i = 0; i < UE4::UObject::GObjects->GetAsChunckArray().Num(); ++i) {
						auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
						if (object == nullptr) {
							continue;
						}
						if (object->GetName().find("Default__") != std::string::npos) {
							continue;
						}
						else if (object->IsA(UE4::UBlueprintGeneratedClass::StaticClass())) {
							blueprints.push_back(object);
						}
						else if (object->IsA(UE4::UClass::StaticClass())) {
							classes.push_back(object);
						}
						else if (object->IsA(UE4::UPackage::StaticClass())) {
							packages.push_back(object);
						}
					}
				}
				else {
					for (int i = 0; i < UE4::UObject::GObjects->GetAsTUArray().Num(); ++i) {
						auto object = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(i).Object;
						if (object == nullptr) {
							continue;
						}
						if (object->GetName().find("Default__") != std::string::npos) {
							continue;
						}
						else if (object->IsA(UE4::UBlueprintGeneratedClass::StaticClass())) {
							blueprints.push_back(object);
						}
						else if (object->IsA(UE4::UClass::StaticClass())) {
							classes.push_back(object);
						}
						else if (object->IsA(UE4::UPackage::StaticClass())) {
							packages.push_back(object);
						}
					}
				}
			}
		}
		ImGui::End();
	}
	void Mod::ShowINIBrowser(bool* enabled) {
		static TextEditor editor = TextEditor();
		{
			static bool created = false;
			if (!created) {
				editor.SetLanguageDefinition(TextEditor::LanguageDefinition::INI());
				editor.SetImGuiChildIgnored(true);
				editor.SetShowWhitespaces(false);
				TextEditor::Palette p = { {
					0xff253df5,	// Key
					0xffd69c56,
					0xffbababa,	// Value
					0xff7070e0,
					0xff70a0e0,
					0xfff73636, // Equal
					0xff408080,
					0xffb216f5, // Section
					0xff9bc64d,
					0xffc040a0,
					0xff206020, // Comment
					0xff406020, // Comment (multi line)
					0xff101010, // Background
					0xffe0e0e0, // Cursor
					0x80a06020, // Selection
					0x800020ff, // ErrorMarker
					0x40f08000, // Breakpoint
					0xff707000, // Line number
					0x40000000, // Current line fill
					0x40808080, // Current line fill (inactive)
					0x40a0a0a0, // Current line edge
			} };
				editor.SetPalette(p);
				created = true;
			}

		}
		static std::filesystem::path currentPath = "";
		static bool saveOnExit = true;
		static auto OpenFile = [&](const std::filesystem::path& path) {
			if (!std::filesystem::exists(path))
				return;
			if (saveOnExit) {
				Utils::SaveString(editor.GetText(), currentPath.string());
			}
			currentPath = path;
			std::ifstream t(path.string());
			std::stringstream buffer;
			buffer << t.rdbuf();
			editor.SetText(buffer.str());

		};

		if (ImGui::Begin("INI Browser", enabled, ImGuiWindowFlags_MenuBar)) {
			if (ImGui::TreeNodeEx("Mods", DEFAULT_TREE_NODE_FLAGS)) {
				for (auto dirEntry : std::filesystem::recursive_directory_iterator(GetModsFolder())) {
					if (dirEntry.path().extension().string() != ".ini")
						continue;
					if (ImGui::Button(MDML::FormatPath(dirEntry.path()).c_str()))
						OpenFile(dirEntry.path());
				}
				ImGui::TreePop();
			}
			if (ImGui::TreeNodeEx("WindowsNoEditor", DEFAULT_TREE_NODE_FLAGS)) {
				for (auto dirEntry : std::filesystem::directory_iterator(MDML::GetDataFolder() + "Config\\WindowsNoEditor")) {
					if (dirEntry.path().extension().string() != ".ini")
						continue;
					if (ImGui::Button(dirEntry.path().string().c_str()))
						OpenFile(dirEntry.path());
				}
				ImGui::TreePop();
			}
			if (ImGui::TreeNodeEx("MDML", DEFAULT_TREE_NODE_FLAGS)) {
				for (auto dirEntry : std::filesystem::directory_iterator(std::filesystem::path(MDML::SelectedGameProfile.ImGuiFile).parent_path())) {
					if (dirEntry.path().extension().string() != ".ini")
						continue;
					if (ImGui::Button(MDML::FormatPath(dirEntry.path()).c_str()))
						OpenFile(dirEntry.path());
				}
				ImGui::TreePop();
			}
			ImGui::Text("File: %s", currentPath.string().c_str());
			if (ImGui::Button("Save")) {
				bool befor = saveOnExit;
				saveOnExit = true;
				OpenFile(currentPath);
				saveOnExit = befor;
			}
			ImGui::SameLine();
			ImGui::Checkbox("Save when opening a new file", &saveOnExit);
			ImGui::EndMenuBar();
		}
		ImGui::End();
		if (ImGui::Begin("INI Editor", enabled)) {
			ImVec2 size = ImGui::GetContentRegionAvail();
			size.y = glm::max(size.y, 250.0f);
			editor.Render("Editor", size, true);
		}
		ImGui::End();
	}
}