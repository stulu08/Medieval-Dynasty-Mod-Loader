#include "BaseMod.h"
#include "Utilities/MinHook.h"
#include "Utils.h"
#include <filesystem>

namespace MDMLBase {
	void Mod::InitializeMod() {
		UE4::InitSDK();
		SetupHooks();
	}
	void Mod::InitGameState() {
		m_world = World::Create();
		PlayerActor = nullptr;
		PlayerControler = nullptr;
	}
	void Mod::BeginPlay(UE4::AActor* Actor) {
		if (Actor == nullptr)
			return;
		if (Utils::FilterByBPClass("BlueprintGeneratedClass PC_Player.PC_Player_C", Actor)) {
			logger->Info("Player loaded {0}", Actor->GetName());
			//possiblePlayers.push_back(Actor);
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
		if (ModActorName == TmpModName)
		{
			//Sets ModActor Ref
			ModActor = Actor;
		}

	}
	void Mod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView) {
	}

	void Mod::DX11ResizeBuffers(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {

	}

	void Mod::OnModMenuButtonPressed() {

	}
	void Mod::DrawImGui() {
		static struct { char val[0xffff]; } emptyParams;
		if (ImGui::Begin("MDML Debug Menu")) {
			if (PlayerActor != nullptr) {
				ImGui::Text("Player Actor: %s", PlayerActor->GetName().c_str());
				if (ImGui::Button("Cheat Menu")) {
					PlayerActor->CallFunctionByNameWithArguments(TEXT("CheatMenu"), &emptyParams, NULL, true);
				}
				if (ImGui::Button("Enter Freecam")) {
					PlayerActor->CallFunctionByNameWithArguments(TEXT("EnterFreeCam"), &emptyParams, NULL, true);
				}
			}
			else
				ImGui::Text("Player Actor not found");

			if (PlayerControler != nullptr) {
				ImGui::Text("Player Controller Actor: %s", PlayerControler->GetName().c_str());
				if (ImGui::Button("Unstuck")) {
					PlayerControler->CallFunctionByNameWithArguments(TEXT("Unstuck"), &emptyParams, NULL, true);
				}
				if (ImGui::Button("PressedInput_QuickSlot2")) {
					if (PlayerControler->DoesObjectContainFunction("PressedInput_QuickSlot2"))
						PlayerControler->CallFunctionByNameWithArguments(TEXT("PressedInput_QuickSlot2"), &emptyParams, NULL, true);
					else
						logger->Info("Object does not contain PressedInput_QuickSlot2");
				}
				if (ImGui::CollapsingHeader("Player Controller Transform")) {
					Utils::Gui::UE4ActorTransformEdit(PlayerControler);
				}
			}
			else
				ImGui::Text("Player Controller Actor not found");


		}
		ImGui::End();

		if (ImGui::Begin("World actors")) {
			static bool init = false;
			static std::vector<UE4::UObject*> actors;
			static std::vector<UE4::UObject*> classes;
			static std::vector<UE4::UObject*> blueprints;
			size_t index = 0;
			if (ImGui::Button("Update")) {
				init = false;
			}
			ImGui::Separator();
			if ((ImGui::TreeNodeEx("ACTORLIST", DEFAULT_TREE_NODE_FLAGS | ImGuiTreeNodeFlags_CollapsingHeader, "%d Actors", actors.size()))) {
				

				static std::unordered_map<UE4::UObject*, bool> result;
				Utils::Gui::SearchBar("SearchActors", actors, result);

				for (UE4::UObject* object : actors) {
					if (!object)
						continue;
					if (!result.empty() && !result[object])
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
				static std::unordered_map<UE4::UObject*, bool> result;
				Utils::Gui::SearchBar("SearchClasses", classes, result);
				for (auto object : classes) {
					if (!object)
						continue;
					if (!result.empty() && !result[object])
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
				static std::unordered_map<UE4::UObject*, bool> result;
				Utils::Gui::SearchBar("SearchBlueprints", blueprints, result);
				for (auto object : blueprints) {
					if (!object)
						continue;
					if (!result.empty() && !result[object])
						continue;
					UE4::UClass* clas = static_cast<UE4::UClass*>(object);
					if (ImGui::TreeNodeEx(("Blueprints_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, clas->GetName().c_str())) {
						Utils::Gui::UE4ClassInfo(clas);
						ImGui::TreePop();
					}
				}
			}
			if (!init) {
				init = true;
				actors = UE4::UObject::GetAllObjectsOfType<UE4::UObject>(UE4::AActor::StaticClass(), true);
				classes.clear();
				blueprints.clear();
				if (UE4::UObject::IsChunkedArray()) {
					for (int i = 0; i < UE4::UObject::GObjects->GetAsChunckArray().Num(); ++i) {
						auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
						if (object == nullptr) {
							continue;
						}
						else if (object->GetFullName()._Starts_with("Class ")) {
							classes.push_back(object);
						}
						else if (object->GetFullName()._Starts_with("BlueprintGeneratedClass ")) {
							blueprints.push_back(object);
						}
					}
				}
				else {
					for (int i = 0; i < UE4::UObject::GObjects->GetAsTUArray().Num(); ++i) {
						auto object = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(i).Object;
						if (object == nullptr) {
							continue;
						}
						else if (object->GetFullName()._Starts_with("Class ")) {
							classes.push_back(object);
						}
						else if (object->GetFullName()._Starts_with("BlueprintGeneratedClass ")) {
							blueprints.push_back(object);
						}
					}
				}
			}
		}
		ImGui::End();
	}

	void Mod::SetupImGui(ImGuiIO& io) {

	}
	std::string Mod::getLevelName() const {
		return UE4::UWorld::GetWorld()->GetFullName();
	}

	UE4::AActor* Mod::getPlayer() const {
		return PlayerActor;
	}
	//UE4::AActor* Mod::getPlayer() const {
	//	if (possiblePlayers.size() == 1) {
	//		if (possiblePlayers.at(0) != nullptr)
	//			return possiblePlayers.at(0);
	//		else
	//			possiblePlayers.clear();
	//	}
	//	else if (possiblePlayers.size() == 0)
	//		return nullptr;
	//	return FindPlayer();
	//}
	//UE4::AActor* Mod::FindPlayer() const {
	//	bool found = false;
	//	UE4::AActor* PlayerActor;
	//	for (UE4::AActor* player : possiblePlayers) {
	//		if (IsPlayerValid(player)) {
	//			found = true;
	//			PlayerActor = player;
	//		}
	//	}
	//	possiblePlayers.clear();
	//	if (found && PlayerActor != nullptr) {
	//		logger->Info("Found player");
	//		possiblePlayers.push_back(PlayerActor);
	//		return PlayerActor;
	//	}
	//	logger->Warn("Could not find player");
	//	return nullptr;
	//}
	//bool Mod::IsPlayerValid(UE4::AActor* player) const {
	//	if (player == nullptr)
	//		return false;
	//	//get actors position
	//	glm::vec3 pos = player->GetActorLocation();
	//	//change actors position to something new
	//	player->SetActorLocation(pos + glm::vec3(1, 1, 1));
	//	//get new position
	//	glm::vec3 newPos = player->GetActorLocation();
	//	//we cant change the players pos
	//	if (pos == newPos) {
	//		return true;
	//	}
	//	player->SetActorLocation(pos);
	//	return false;
	//}
}