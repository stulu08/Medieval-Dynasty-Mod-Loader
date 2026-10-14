#include "PlayerTools.h"

#include "MDML/GameThread.h"
#include "MDML/UI/Widgets.h"

// Generated SDK: the character's InventoryComponent and its AddItemToInventory function.
#include "Engine.hpp"
#include "BP_BaseCharacter.hpp"
#include "InventoryComponent.hpp"

#include <memory>

// Give-item panel (Wave 4 step B). Was disabled since 2026-10-09 because BaseMod used fixed parameter/struct layouts of
// game 2.2.0.8 that crashed on 2.7.0.4 (code inventory B3). Now it goes through the generated SDK: the
// InventoryComponent member is resolved by name and AddItemToInventory validates its parameter layout against the live
// UFunction before calling it. The inventory list (GetInventoryItems_BPI fills a TMap the engine allocates) stays off.
namespace devtools {
	namespace {
		struct ItemToolsState {
			std::mutex mutex;
			bool loading = false;
			std::vector<UE4::FName> items;          // DT_ListOfItems row names
			std::vector<std::string> itemNames;
			std::vector<std::string> ownershipNames; // E_Ownership display names (Player, Ownerless, Bandit, ...)
		};
		ItemToolsState& State() {
			static ItemToolsState state;
			return state;
		}

		// Game thread: item rows and ownership names.
		void LoadItemData(const LogFn& log) {
			std::vector<UE4::FName> items;
			std::vector<std::string> itemNames;
			if (auto* table = UE4::UObject::FindObject<UE4::UDataTable>("DataTable DT_ListOfItems.DT_ListOfItems")) {
				UE4::NativeTMap<UE4::FName, uint8_t*> rows = UE4::GetDataTableRowMap(table);
				for (int i = 0; i < rows.Num(); i++) {
					items.push_back(rows.GetKey(i));
					itemNames.push_back(rows.GetKey(i).GetName());
				}
			}
			else if (log) {
				log("DataTable DT_ListOfItems.DT_ListOfItems not found", true);
			}
			std::vector<std::string> ownershipNames;
			if (auto* ownership = UE4::UObject::FindObject<UE4::UEnum>("UserDefinedEnum E_Ownership.E_Ownership")) {
				ownershipNames = UE4::GetUserDefinedEnumDisplayNames(ownership);
				if (!ownershipNames.empty())
					ownershipNames.pop_back(); // E_MAX
			}
			auto& state = State();
			std::lock_guard<std::mutex> lock(state.mutex);
			state.items = std::move(items);
			state.itemNames = std::move(itemNames);
			state.ownershipNames = std::move(ownershipNames);
			state.loading = false;
		}
	}

	void DrawItemTools(UE4::AActor* player, const LogFn& log) {
		auto& state = State();
		std::vector<std::string> itemNames, ownershipNames;
		bool loading;
		{
			std::lock_guard<std::mutex> lock(state.mutex);
			itemNames = state.itemNames;
			ownershipNames = state.ownershipNames;
			loading = state.loading;
		}
		if (itemNames.empty()) {
			if (loading)
				ImGui::TextDisabled("loading items...");
			else if (ImGui::Button("Load items (DT_ListOfItems)")) {
				{
					std::lock_guard<std::mutex> lock(state.mutex);
					state.loading = true;
				}
				mdml::runtime::GameThread::Enqueue([log]() { LoadItemData(log); });
			}
			return;
		}

		static int32_t selectedItem = 0;
		static int count = 1;
		static bool passCondition = true;
		static float currentHP = 100.0f;
		static float maxHP = 100.0f;
		static int capacity = 0;
		static float freshness = 1.0f;
		static int32_t ownership = 0; // Player
		static bool displayNotification = true;
		static bool updateInventory = true;
		static bool countAsPickUp = true;
		static float notificationDelay = 0.1f;

		mdml::ui::widgets::Combo("Item", selectedItem, itemNames);
		mdml::ui::widgets::Int("Count", count);
		mdml::ui::widgets::Bool("PassCondition", passCondition);
		mdml::ui::widgets::FloatSlider("CurrentHP", currentHP, 0.0f, 100.0f);
		mdml::ui::widgets::FloatSlider("MaxHP", maxHP, 0.0f, 100.0f);
		mdml::ui::widgets::Int("Capacity", capacity);
		mdml::ui::widgets::Float("Freshness", freshness);
		if (!ownershipNames.empty())
			mdml::ui::widgets::Combo("Ownership", ownership, ownershipNames);
		mdml::ui::widgets::Bool("DisplayNotification", displayNotification);
		mdml::ui::widgets::Bool("UpdateInventory", updateInventory);
		mdml::ui::widgets::Bool("CountAsPickUp", countAsPickUp);
		mdml::ui::widgets::Float("NotificationDelay", notificationDelay);

		if (!player) {
			ImGui::TextDisabled("No player character.");
			return;
		}
		if (ImGui::Button("Add") && selectedItem >= 0 && selectedItem < (int32_t)itemNames.size()) {
			UE4::FName item;
			{
				std::lock_guard<std::mutex> lock(state.mutex);
				if (selectedItem >= (int32_t)state.items.size())
					return;
				item = state.items[selectedItem];
			}
			const std::string itemName = itemNames[selectedItem];
			const int32_t itemCount = count, itemCapacity = capacity;
			const bool pass = passCondition, notify = displayNotification, update = updateInventory, pickUp = countAsPickUp;
			const float hp = currentHP, hpMax = maxHP, fresh = freshness, delay = notificationDelay;
			const auto owner = static_cast<UE4::E_Ownership>(ownership);
			mdml::runtime::GameThread::Enqueue([=]() {
				auto* character = ::mdml::sdk::Cast<UE4::ABP_BaseCharacter_C>(player);
				UE4::UInventoryComponent_C* inventory = character ? character->InventoryComponent : nullptr;
				if (!inventory) {
					if (log)
						log("Add item: the player has no InventoryComponent", true);
					return;
				}
				int32_t addedAt = -1;
				inventory->AddItemToInventory(item, itemCount, pass, hp, hpMax, itemCapacity, fresh, owner, notify, update, pickUp, delay, &addedAt);
				if (log)
					log("Added " + std::to_string(itemCount) + "x " + itemName + " (slot " + std::to_string(addedAt) + ")", false);
			});
		}
	}
}
