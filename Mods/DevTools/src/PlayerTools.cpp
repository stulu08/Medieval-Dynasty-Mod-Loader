#include "PlayerTools.h"

#include "MDML/GameThread.h"
#include "MDML/UI/Widgets.h"

#include "Engine.hpp"    // generated SDK: UGameplayStatics, AActor, UActorComponent, UDataTable
#include "PC_Player.hpp" // APC_Player_C::CheatMenu

namespace devtools {
	namespace {
		// Blueprint function library with the game's build checks (found by reflection, no generated class needed).
		class TD_Blueprint_Library : public UE4::UBlueprintFunctionLibrary {
		public:
			static UE4::UClass* StaticClass() {
				static auto ptr = UObject::FindClass("Class TD_Blueprint_Library.TD_Blueprint_Library");
				return ptr;
			}
		};

		int CallBoolFunction(UE4::UFunction* function) {
			if (!function)
				return -1;
			auto* library = (TD_Blueprint_Library*)TD_Blueprint_Library::StaticClass()->CreateDefaultObject();
			if (!library)
				return -1;
			struct { bool value; } ret{};
			library->ProcessEvent(function, &ret);
			return ret.value ? 1 : 0;
		}
	}

	void PlayerTools::Init(const mdml::platform::IniFile& ini) {
		// Defaults keep the old BaseMod behaviour for installed mod.ini files that lack the keys.
		m_swapBuildFlags = ini.GetBool("Config", "DevBuildFlags", false);
		m_enableCheatsMenu = ini.GetBool("Config", "EnableCheatsMenu", false);
		if (m_swapBuildFlags) {
			// StaticFindObject and Func writes: game thread only.
			mdml::runtime::GameThread::Enqueue([this]() {
				SwapBuildFlags();
				QueryBuildFlags();
			});
		}
		else {
			m_log("Dev-build flag swap is off (DevBuildFlags=0 in DevTools' mod.ini).", false);
		}
	}

	void PlayerTools::SwapBuildFlags() {
		std::lock_guard<std::mutex> lock(m_mutex);
		if (m_swapped) {
			m_log("Dev-build flags already swapped", true);
			return;
		}
		m_isDevelopmentBuild = (UE4::UFunction*)UE4::UObject::StaticFindObject(nullptr, (UE4::UObject*)((DWORD64)-1), L"TDBPL_IsDevelopmentBuild");
		m_isShippingBuild = (UE4::UFunction*)UE4::UObject::StaticFindObject(nullptr, (UE4::UObject*)((DWORD64)-1), L"TDBPL_IsShippingBuild");
		if (!m_isDevelopmentBuild || !m_isShippingBuild) {
			m_log(std::string("Dev-build flag swap skipped: ") + (!m_isDevelopmentBuild ? "TDBPL_IsDevelopmentBuild " : "") + (!m_isShippingBuild ? "TDBPL_IsShippingBuild " : "") + "not found", true);
			return;
		}
		// Exchange the native function pointers: the game then believes it is a development build.
		const DWORD64 dev = (DWORD64)m_isDevelopmentBuild->GetFunction();
		const DWORD64 ship = (DWORD64)m_isShippingBuild->GetFunction();
		m_isDevelopmentBuild->SetFunction(ship);
		m_isShippingBuild->SetFunction(dev);
		m_swapped = true;
		m_log("Dev-build flags swapped (IsDevelopmentBuild <-> IsShippingBuild)", false);
	}

	void PlayerTools::QueryBuildFlags() {
		UE4::UFunction* dev;
		UE4::UFunction* ship;
		{
			std::lock_guard<std::mutex> lock(m_mutex);
			dev = m_isDevelopmentBuild;
			ship = m_isShippingBuild;
		}
		const int isDev = CallBoolFunction(dev);
		const int isShip = CallBoolFunction(ship);
		std::lock_guard<std::mutex> lock(m_mutex);
		m_isDev = isDev;
		m_isShip = isShip;
	}

	void PlayerTools::RefreshPlayer() {
		UE4::AActor* player = UE4::UGameplayStatics::GetPlayerCharacter(UE4::GetWorld(), 0);
		if (player && !player->IsAByName("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C"))
			player = nullptr;
		std::lock_guard<std::mutex> lock(m_mutex);
		m_player = player;
		m_components.clear();
	}

	void PlayerTools::OnGameState() {
		// The old GI "Cheats" flag no longer exists in 2.7.0.4 (writing its stale offset corrupted memory). Since Wave 4
		// step B EnableCheatsMenu shows a button that calls the game's own PC_Player_C::CheatMenu() (see Draw).
		{
			std::lock_guard<std::mutex> lock(m_mutex);
			m_player = nullptr;
			m_components.clear();
		}
		RefreshPlayer();
	}

	void PlayerTools::Draw() {
		if (ImGui::CollapsingHeader("Hooks (dev-build flags)")) {
			int isDev, isShip;
			bool found;
			bool swapped;
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				isDev = m_isDev;
				isShip = m_isShip;
				found = m_isDevelopmentBuild && m_isShippingBuild;
				swapped = m_swapped;
			}
			auto text = [](int v) { return v < 0 ? "????" : v ? "true" : "false"; };
			ImGui::Text("Swap enabled: %s, applied: %s, functions found: %s", m_swapBuildFlags ? "yes" : "no (DevBuildFlags=0)", swapped ? "yes" : "no", found ? "yes" : "no");
			ImGui::Text("IsDevelopmentBuild -> %s", text(isDev));
			ImGui::Text("IsShippingBuild    -> %s", text(isShip));
			if (ImGui::Button("Query##buildflags"))
				mdml::runtime::GameThread::Enqueue([this]() { QueryBuildFlags(); });
			ImGui::Separator();
		}

		if (m_enableCheatsMenu && ImGui::CollapsingHeader("Cheat menu")) {
			// The game's own cheat menu (UI_CheatMenu), opened through PC_Player_C::CheatMenu (generated, layout-checked).
			// The game may still refuse it in a shipping build: then also try DevBuildFlags=1.
			if (ImGui::Button("Open cheat menu")) {
				mdml::runtime::GameThread::Enqueue([this]() {
					UE4::APlayerController* controller = UE4::UGameplayStatics::GetPlayerController(UE4::GetWorld(), 0);
					auto* player = ::mdml::sdk::Cast<UE4::APC_Player_C>(controller);
					if (!player) {
						m_log("Cheat menu: no PC_Player controller (load a save first)", true);
						return;
					}
					player->CheatMenu();
					m_log("Cheat menu: PC_Player_C::CheatMenu called", false);
				});
			}
			ImGui::Separator();
		}

		if (ImGui::TreeNodeEx("##PlayerCharacter", DEFAULT_TREE_NODE_FLAGS, "Player Character")) {
			UE4::AActor* player;
			std::vector<std::pair<std::string, std::string>> components;
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				player = m_player;
				components = m_components;
			}
			if (ImGui::Button("Find player character"))
				mdml::runtime::GameThread::Enqueue([this]() { RefreshPlayer(); });
			if (player != nullptr) {
				if (ImGui::CollapsingHeader("Transform")) {
					gui::ActorTransformEdit(player);
					ImGui::Separator();
				}
				if (ImGui::CollapsingHeader("Items"))
					DrawItemTools(player, m_log);
				if (ImGui::CollapsingHeader("Inventory"))
					DrawInventory(player, m_log);

				if (ImGui::TreeNodeEx("Components", DEFAULT_TREE_NODE_FLAGS)) {
					if (ImGui::Button("List components")) {
						mdml::runtime::GameThread::Enqueue([this, player]() {
							std::vector<std::pair<std::string, std::string>> list;
							if (!UE4::IsLiveObject(player))
								return;
							auto comps = player->K2_GetComponentsByClass(UE4::UActorComponent::StaticClass());
							for (int i = 0; i < comps.Num(); i++) {
								UE4::UActorComponent* comp = comps[i];
								if (comp)
									list.emplace_back(comp->GetName(), comp->GetFullName());
							}
							std::lock_guard<std::mutex> lock(m_mutex);
							m_components = std::move(list);
						});
					}
					for (const auto& [name, fullName] : components) {
						if (ImGui::CollapsingHeader(name.c_str())) {
							ImGui::TextUnformatted(fullName.c_str());
							ImGui::Separator();
						}
					}
					ImGui::TreePop();
				}
			}
			else {
				ImGui::TextDisabled("No player character (load a save, then press the button).");
			}
			ImGui::TreePop();
		}

		if (ImGui::CollapsingHeader("Debug")) {
			if (ImGui::TreeNodeEx("Items Data table", DEFAULT_TREE_NODE_FLAGS)) {
				if (ImGui::Button("Load DT_ListOfItems")) {
					mdml::runtime::GameThread::Enqueue([this]() {
						std::vector<std::pair<std::string, int>> rows;
						auto* table = UE4::UObject::FindObject<UE4::UDataTable>("DataTable DT_ListOfItems.DT_ListOfItems");
						if (!table) {
							m_log("DataTable DT_ListOfItems.DT_ListOfItems not found", true);
						}
						else {
							UE4::NativeTMap<UE4::FName, uint8_t*> map = UE4::GetDataTableRowMap(table);
							for (int i = 0; i < map.Num(); i++)
								rows.emplace_back(map.GetKey(i).GetName(), (int)map.GetKey(i).ComparisonIndex);
						}
						std::lock_guard<std::mutex> lock(m_mutex);
						m_itemRows = std::move(rows);
						m_itemsLoaded = true;
					});
				}
				std::vector<std::pair<std::string, int>> rows;
				{
					std::lock_guard<std::mutex> lock(m_mutex);
					rows = m_itemRows;
				}
				for (const auto& [name, id] : rows)
					ImGui::Text("%s -> ID: %d", name.c_str(), id);
				ImGui::TreePop();
			}
		}
	}
}
