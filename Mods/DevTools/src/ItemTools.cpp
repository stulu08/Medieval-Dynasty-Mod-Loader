#include "PlayerTools.h"

#include "MDML/UI/Widgets.h"

// Item tools (inventory list, give item). DISABLED: waiting for the new SDK (plan 2.4 / Wave 4). They used generated
// parameter and struct layouts of game 2.2.0.8 (FST_InventoryItemsArray, AddItemToInventory params, the stale
// BP_PlayerCharacter::InventoryComponent offset) that crashed on 2.7.0.4 (code inventory B3). Moved here from
// BaseMod unchanged (decision 2026-10-09: "Disable give-item, inventory list ... until the new SDK").
// To bring them back: port to the generated SDK, run every UE call through mdml::runtime::GameThread::Enqueue.
namespace devtools {
	void DrawItemToolsPlaceholder() {
		ImGui::TextDisabled("Disabled: waiting for the new SDK (item layouts changed with game 2.7.0.4).");
	}
}

#if 0 // ---- old BaseMod code, not compiled ----
// BaseMod::GameTick (called "loadItems" from the Load Items button):
	
	bool loadItems = false;
	UE4::NativeTMap<struct UE4::FName, struct UE4::FST_InventoryItemsArray> items;
	bool Mod::GameTick(float delta) {
		if (PlayerController) {
			auto inv = GetMember<UE4::UInventoryComponent_C*>(PlayerCharacter, "InventoryComponent");
			if (inv && loadItems) {
				inv->GetInventoryItems_BPI(items);
				loadItems = false;
			}
		}
		return false;
	}

// BaseMod::DrawImGui, section "Player Character" -> "Items":
					// Item tools use generated parameter/struct layouts from game 2.2.0.8 (FST_InventoryItemsArray,
					// AddItemToInventory params) that are unverified for 2.7.0.4 -> disabled until the new SDK generator.
					constexpr bool kItemToolsEnabled = false;
					if (!kItemToolsEnabled && ImGui::CollapsingHeader("Items")) {
						ImGui::TextDisabled("Disabled: waiting for the new SDK (item layouts changed with game 2.7.0.4).");
					}
					else if (kItemToolsEnabled && ImGui::CollapsingHeader("Items")) {
						if (ImGui::Button("Load Items"))
							loadItems = true;
						for (int i = 0; i < items.Num(); i++) {
							UE4::TPair<UE4::FName, UE4::FST_InventoryItemsArray> pair = items.GetPair(i);
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

						if (ImGui::CollapsingHeader("Add Item")) {
							static std::vector<UE4::FName> items;
							static int32_t selectedItem = 0;
							static int32_t count = 10000;
							static bool passCondition = true;
							static float CurrentHP = 100.0f;
							static float MaxHP = 100.0f;
							static int32_t Capacity = 0;
							static float Freshness = 1.0;
							static int32_t Ownership = (uint32_t)UE4::E_Ownership::Player;
							static bool DisplayNotification = true;
							static bool UpdateInventory = true;
							static bool CountAsPickUp = true;
							static float NotificationDelay = 0.1f;
							{
								static std::vector<std::string> displayItem = { "No Items Found!" };
								if (items.empty()) {
									displayItem.clear();
									auto tableMap = Utils::GetDataTableItems<UE4::FName, UE4::FST_ItemDetails*>("DataTable DT_ListOfItems.DT_ListOfItems");

									for (int i = 0; i < tableMap.Num(); i++) {
										items.push_back(tableMap.GetKey(i));
										displayItem.push_back(tableMap.GetKey(i).GetName());
									}
								}
								mdml::ui::widgets::Combo("Item", selectedItem, displayItem);
							}
							mdml::ui::widgets::Int("Count", count);
							mdml::ui::widgets::Bool("PassCondition", passCondition);
							mdml::ui::widgets::FloatSlider("CurrentHP", CurrentHP, 0.0f, 100.0f);
							mdml::ui::widgets::FloatSlider("MaxHP", MaxHP, 0.0f, 100.0f);
							mdml::ui::widgets::Int("Capacity", Capacity);
							mdml::ui::widgets::Float("Freshness", Freshness);
							mdml::ui::widgets::Combo("Ownership", Ownership,
								"Player\0Ownerless\0Bandit\0BlueVillage\0GreenVillage\0SkyBlueVillage"
								"\0RedVillage\0PinkVillage\0OrangeVillage\0YellowVillage\0PurpleVillage\0"
								"\0NavyBlueVillagee\0BurgundyVillage\0BrownVillage");
							mdml::ui::widgets::Bool("DisplayNotification", DisplayNotification);
							mdml::ui::widgets::Bool("UpdateInventory", UpdateInventory);
							mdml::ui::widgets::Bool("CountAsPickUp", CountAsPickUp);
							mdml::ui::widgets::Float("NotificationDelay", NotificationDelay);
							if (ImGui::Button("Add") && !items.empty()) {
								GetMember<UE4::UInventoryComponent_C*>(PlayerCharacter, "InventoryComponent")->AddItemToInventory(items[selectedItem], count, passCondition, CurrentHP, MaxHP, Capacity, Freshness, (UE4::E_Ownership)Ownership, DisplayNotification, UpdateInventory, CountAsPickUp, NotificationDelay, nullptr);
							}
						}
						ImGui::Separator();
					}
#endif
