#include "BaseMod.h"

#include "UI/ImGuiColorTextEdit/TextEditor.h"

#include "Utilities/MinHook.h"
#include "Utils.h"

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
	void Mod::OnModInitilize() {
		BaseModHooks::CreateHooks();
		//move base mod to front to handle events
		if (Global::GetGlobals()->CoreMods.size() > 0) {
			if (Global::GetGlobals()->CoreMods[0] != this) {
				auto baseModIt = std::find(Global::GetGlobals()->CoreMods.begin(), Global::GetGlobals()->CoreMods.end(), this);
				if (baseModIt != Global::GetGlobals()->CoreMods.end()) {
					std::rotate(Global::GetGlobals()->CoreMods.begin(), baseModIt, baseModIt + 1);
				}
			}
		}
	}
	

	bool Mod::InitGameState() {
		static int count = 0;
		needObjectReload = true;
		return GameMod::InitGameState();
	}
	bool Mod::GameInit() {
		return false;
	}
	
	bool loadItems = false;
	UE4::NativeTMap<struct UE4::FName, struct UE4::FST_InventoryItemsArray> items;
	bool Mod::GameTick(float delta) {
		if (PlayerActor) {
			UE4::UInventoryComponent_C* inv =  PlayerCharacter->M_GetInventoryComponent();
			if (inv && loadItems) {
				inv->GetInventoryItems_BPI(items);
				loadItems = false;
			}
		}
		return false;
	}

	bool Mod::SetupImGui(ImGuiIO& io) {
		io.ConfigWindowsMoveFromTitleBarOnly = true;
		return false;
	}
	bool Mod::DrawImGui() {
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
					if (ImGui::MenuItem("Show INI Editor", "", m_showIniEditor)) {
						m_showIniEditor = !m_showIniEditor;
					}
					ImGui::EndMenu();
				}
				ImGui::EndMenuBar();
			}

			if (ImGui::CollapsingHeader("Hooks")) {
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
			
			ImGui::Text("Game Instance: %s", MedievalDynastyGameInstance ? MedievalDynastyGameInstance->GetName().c_str() : "not found");
			ImGui::Text("Game Mode: %s", MedievalDynastyGameMode ? MedievalDynastyGameMode->GetName().c_str() : "not found");
			ImGui::Text("Game State: %s", MedievalDynastyGameState ? MedievalDynastyGameState->GetName().c_str() : "not found");
			ImGui::Text("Player Actor: %s", PlayerActor ? PlayerActor->GetName().c_str() : "not found");
			ImGui::Text("Player Character: %s", PlayerCharacter ? PlayerCharacter->GetName().c_str() : "not found");
			if (PlayerCharacter != nullptr) {
				if (ImGui::CollapsingHeader("Player Controller Transform")) {
					Utils::Gui::UE4ActorTransformEdit(PlayerCharacter);
					ImGui::Separator();
				}
				if (ImGui::Button("Load Items"))
					loadItems = true;
				static int COIN_ID = 0;
				if (ImGui::CollapsingHeader("Items")) {
					for (int i = 0; i < items.Num(); i++) {
						UE4::TPair<UE4::FName, UE4::FST_InventoryItemsArray> pair = items.GetPair(i);
						if (pair.Value.Items[0].ID.GetName() == "Coin" && COIN_ID == 0) {
							COIN_ID = pair.Value.Items[0].ID.ComparisonIndex;
						}
						if (ImGui::TreeNodeEx(pair.Key.GetName().c_str(), DEFAULT_TREE_NODE_FLAGS)) {
							UE4::FST_ItemInventorys item = pair.Value.Items[0];
							ImGui::Text("ID: %s", item.ID.GetName().c_str());
							ImGui::Text("Count: %d", item.Count);
							ImGui::Text("Index: %d", item.Index);
							ImGui::Text("IsAssignedToQuickSlot: %s", item.IsAssignedToQuickSlot ? "true" : "false");
							ImGui::Text("IsEquipped: %s", item.IsEquipped ? "true" : "false");
							ImGui::Text("QuickSlotIndex: %d", item.QuickSlotIndex);
							ImGui::Text("Condition: %f", item.Condition);
							ImGui::Text("Freshness: %f", item.Freshness);
							ImGui::Text("Capacity: %d", item.Capacity);
							ImGui::Text("HP: %f", item.HP);
							ImGui::Text("MaxHP: %f", item.MaxHP);
							ImGui::Text("Ownership: %d", item.Ownership.value);
							ImGui::TreePop();
						}
					}
				}
				if (ImGui::CollapsingHeader("Add Coins")) {
					static int32_t count = 10000;
					ImGui::MDML_Int("Coin ID", COIN_ID); ImGui::SameLine();
					ImGui::MDML_HelpMarker("Put a coin in your inventory, press Load Items and open the items tab to search for the coin id");
					ImGui::MDML_Int("Ammount", count);
					if (ImGui::Button("Add")) {
						PlayerCharacter->M_GetInventoryComponent()->AddItemToInventory(COIN_ID, count, true, 100.0f, 100.0f, 0, 1.0, UE4::E_Ownership::Player, true, true, true, 0.1f, nullptr);
					}
				}
			}
			if (ImGui::CollapsingHeader("Debug")) {
				static UE4::UUserDefinedEnum* obj = (UE4::UUserDefinedEnum*)UE4::UObject::FindObject("UserDefinedEnum E_EventButtonRestrictions.E_EventButtonRestrictions");
				UE4::NativeTMap<UE4::FName, UE4::FText> map = obj->GetDispalyNames();
				for (int i = 0; i < map.Num(); i++) {
					ImGui::Text("%d: %s -> %s", i, map.GetKey(i).GetName().c_str(), Utils::WStringToString(map.GetValue(i).Data->Name).c_str());
				}
			}
				
		}
		ImGui::End();

		ShowObjectBrowser();
		ShowINIBrowser();
		return false;
	}

	void Mod::ShowObjectBrowser() {
		if (m_showObjectBrowser && ImGui::Begin("Object Browser", &m_showObjectBrowser)) {
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
			static std::vector<UE4::UPackage*> exportList;
			if (ImGui::CollapsingHeader(std::string(std::to_string(packages.size()) + " Packages").c_str())) {
				bool selectAll = false;
				bool deselectAll = false;
				static std::string search;
				ImGui::InputText("##SearchPackages_SEARCHBAR", &search);
				if (ImGui::Button("Export selected")) {
					if (exportList.size() == 1) {
						Utils::Export::StartThreadPackage(exportList[0], "Export");
					}
					else if (exportList.size() > 1) {
						Utils::Export::StartThreadPackages(exportList, "Export");
					}
					exportList.clear();
				}
				ImGui::SameLine();
				if (ImGui::Button("Select All")) {
					selectAll = true;
				}
				ImGui::SameLine();
				if (ImGui::Button("Deselect All")) {
					deselectAll = true;
				}
				ImGui::SameLine();
				if (ImGui::Button("Clear")) {
					exportList.clear();
				}
				ImGui::SameLine();
				if (ImGui::Button("Export BP Structs")) {
					Utils::Export::StartThreadBPStructs("Export");
				}
				ImGui::SameLine();
				if (ImGui::Button("Export BP Enums")) {
					Utils::Export::StartThreadBPEnums("Export");
				}
				for (auto object : packages) {
					if (!object)
						continue;
					if (!Utils::Gui::SearchBar(object, search))
						continue;
					float x = ImGui::GetContentRegionAvail().x;
					if (ImGui::TreeNodeEx(("Packages_" + std::to_string(index++)).c_str(), ImGuiTreeNodeFlags_OpenOnArrow, object->GetName().c_str())) {
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
					
					auto exportListLoc = std::find(exportList.begin(), exportList.end(), (UE4::UPackage*)object);
					if (selectAll && exportListLoc == exportList.end()) {
						exportList.push_back((UE4::UPackage*)object);
					}
					if (deselectAll && exportListLoc != exportList.end()) {
						exportList.erase(exportListLoc);
					}
					bool isInExportList = exportListLoc != exportList.end();
					
					if (ImGui::IsItemClicked(ImGuiMouseButton_Left) && ImGui::IsMouseDoubleClicked(ImGuiMouseButton_Left)) {
						if (!isInExportList) {
							exportList.push_back((UE4::UPackage*)object);
						}
						else {
							exportList.erase(exportListLoc);
						}
					}

					ImGui::SameLine();
					ImGui::SetCursorPosX(x - 75.0f);
					ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3.0f);
					if (ImGui::Checkbox(("##ExportCheckBox" + std::to_string(index++)).c_str(), &isInExportList)) {
						if (isInExportList && exportListLoc == exportList.end()) {
							exportList.push_back((UE4::UPackage*)object);
						}
						else {
							exportList.erase(exportListLoc);
						}
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
	void Mod::ShowINIBrowser() {
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

		if (m_showIniBrowser && ImGui::Begin("INI Browser", &m_showIniBrowser)) {
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
				for (auto dirEntry : std::filesystem::directory_iterator(std::filesystem::path(SDK::SelectedGameProfile.ImGuiFile).parent_path())) {
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
		if (m_showIniEditor && ImGui::Begin("INI Editor", &m_showIniEditor)) {
			ImVec2 size = ImGui::GetContentRegionAvail();
			size.y = glm::max(size.y, 250.0f);
			editor.Render("Editor", size, true);
		}
		ImGui::End();
	}
}