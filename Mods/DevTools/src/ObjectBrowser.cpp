#include "ObjectBrowser.h"

#include "ExportList.h"
#include "LegacyExporter.h"
#include "Runtime/GameThread.h"
#include "UI/LoaderUI.h"
#include "Util.h"

#include <algorithm>
#include <chrono>
#include <fstream>
#include <sstream>

namespace devtools {
	namespace gui {
		namespace {
			struct TransformState {
				glm::vec3 position{ 0 }, rotation{ 0 }, scale{ 1 };
				bool valid = false;
				bool pending = false;
				double lastRequest = -10.0;
			};
			std::mutex s_transformMutex;
			std::unordered_map<UE4::AActor*, std::shared_ptr<TransformState>> s_transforms;

			void UE4FunctionInfoTreeNode(UE4::UFunction* function, size_t id) {
				if (!function)
					return;
				if (ImGui::TreeNodeEx((void*)id, DEFAULT_TREE_NODE_FLAGS, "%s", function->GetName().c_str())) {
					ImGui::TextUnformatted(function->GetFullName().c_str());
					if (function->GetClass()) {
						const int numParms = function->GetNumParms();
						if (numParms > 0) {
							ImGui::Text("Num Parms: %d", numParms);
							ImGui::Text("Params Size: %d", function->GetParamsSize());
						}
						else {
							ImGui::TextUnformatted("No function parameter");
						}
						ImGui::Text("Flags: %s", UE4::StringifyFlags(function->GetFunctionFlags()).c_str());
						if (function->GetReturnValueOffset() != UINT16_MAX)
							ImGui::Text("Return Value Offset: %d", function->GetReturnValueOffset());
						else
							ImGui::TextUnformatted("No return value");
						if (numParms > 0 && function->GetChildProperties() && ImGui::TreeNodeEx((std::to_string(id) + "_params").c_str(), DEFAULT_TREE_NODE_FLAGS, "Params:")) {
							int i = 0;
							for (UE4::FField* child = function->GetChildProperties(); child != nullptr; child = child->GetNext()) {
								if (i >= numParms)
									break;
								UE4::FProperty* prop = child->GetAsProperty();
								if (!prop)
									continue;
								ImGui::Text("%d: %s (Size: %d, CppType: %s, Flags: %s)", i, child->GetName().c_str(), prop->GetElementSize(), prop->GetCppTypeName().c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
								i++;
							}
							ImGui::TreePop();
						}
					}
					ImGui::TreePop();
				}
			}
		}

		bool FilterSearch(UE4::UObject* object, const std::string& search) {
			if (!object)
				return false;
			if (search.empty())
				return true;
			return object->GetName().find(search) != std::string::npos;
		}

		void ClassInfo(UE4::UClass* clas, const LogFn& log) {
			if (!clas)
				return;
			ImGui::Text("Name: %s", clas->GetName().c_str());
			ImGui::Text("Fullname: %s", clas->GetFullName().c_str());
			ImGui::Text("Size: %d", clas->GetPropertySize());
			if (clas->GetPackage())
				ImGui::Text("Package: %s", clas->GetPackage()->GetName().c_str());
			if (clas->GetSuperField()) {
				ImGui::Text("Super: %s", clas->GetSuperField()->GetFullName().c_str());
			}
			if (clas->GetChildProperties() && ImGui::TreeNodeEx((clas->GetName() + "_member").c_str(), DEFAULT_TREE_NODE_FLAGS, "Member:")) {
				int i = 0;
				for (UE4::FField* child = clas->GetChildProperties(); child != nullptr; child = child->GetNext()) {
					UE4::FProperty* prop = child->GetAsProperty();
					if (!prop)
						continue;
					ImGui::Text("%d: %s (Offset: %d, Size: %d, CppType: %s, Flags: %s)", i, child->GetName().c_str(), prop->GetOffset(), prop->GetElementSize(), prop->GetCppTypeName().c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
					i++;
				}
				ImGui::TreePop();
			}
			if (ImGui::CollapsingHeader("Functions")) {
				std::vector<UE4::UFunction*> functions;
				if (!legacy::TryGetCachedClassFunctions(clas, functions)) {
					// A GObjects scan: game thread only.
					if (ImGui::Button("Load functions")) {
						mdml::runtime::GameThread::Enqueue([clas]() { legacy::GetAllClassFunctions(clas); });
					}
				}
				else {
					if (ImGui::Button("Dump class functions")) {
						mdml::runtime::GameThread::Enqueue([clas, log]() {
							const std::string file = legacy::DumpClassInfo(clas, util::MdmlFolder() / "Dump");
							if (log)
								log(file.empty() ? "Dump of class functions failed" : "Class functions dumped to " + file, file.empty());
						});
					}
					size_t in = 0;
					for (UE4::UFunction* fn : functions) {
						if (!fn)
							continue;
						in++;
						UE4FunctionInfoTreeNode(fn, in);
					}
				}
			}
			ImGui::Separator();
		}

		void ActorTransformEdit(UE4::AActor* actor) {
			if (!actor)
				return;
			std::shared_ptr<TransformState> state;
			{
				std::lock_guard<std::mutex> lock(s_transformMutex);
				auto& slot = s_transforms[actor];
				if (!slot)
					slot = std::make_shared<TransformState>();
				state = slot;
			}
			const double now = ImGui::GetTime();
			bool request = false;
			glm::vec3 position, rotation, scale;
			bool valid;
			{
				std::lock_guard<std::mutex> lock(s_transformMutex);
				if (!state->pending && now - state->lastRequest > 0.5 && !ImGui::IsAnyItemActive()) {
					state->pending = true;
					state->lastRequest = now;
					request = true;
				}
				position = state->position;
				rotation = state->rotation;
				scale = state->scale;
				valid = state->valid;
			}
			if (request) {
				mdml::runtime::GameThread::Enqueue([actor, state]() {
					glm::vec3 p = actor->GetActorLocation();
					glm::vec3 r = actor->GetActorRotation();
					glm::vec3 s = actor->GetActorScale3D();
					std::lock_guard<std::mutex> lock(s_transformMutex);
					state->position = p;
					state->rotation = r;
					state->scale = s;
					state->valid = true;
					state->pending = false;
				});
			}
			if (!valid) {
				ImGui::TextDisabled("reading transform...");
				return;
			}

			ImGui::PushID((void*)actor);
			if (ImGui::MDML_Vector3("Position", position)) {
				mdml::runtime::GameThread::Enqueue([actor, position]() { actor->K2_SetActorLocation(position); });
				std::lock_guard<std::mutex> lock(s_transformMutex);
				state->position = position;
			}
			if (ImGui::MDML_Vector3("Rotation", rotation)) {
				mdml::runtime::GameThread::Enqueue([actor, rotation]() { actor->SetActorRotation(rotation); });
				std::lock_guard<std::mutex> lock(s_transformMutex);
				state->rotation = rotation;
			}
			if (ImGui::MDML_Vector3("Scale", scale)) {
				mdml::runtime::GameThread::Enqueue([actor, scale]() { actor->SetActorScale3D(scale); });
				std::lock_guard<std::mutex> lock(s_transformMutex);
				state->scale = scale;
			}
			ImGui::PopID();
		}

		void ForgetActorTransforms() {
			std::lock_guard<std::mutex> lock(s_transformMutex);
			s_transforms.clear();
		}
	}

	void ObjectBrowser::Invalidate() {
		std::lock_guard<std::mutex> lock(m_mutex);
		m_snapshot.reset();
		m_packageObjectCounts.clear();
		m_countsPending.clear();
		gui::ForgetActorTransforms();
		legacy::ClearClassFunctionCache();
	}

	std::shared_ptr<const ObjectBrowser::Snapshot> ObjectBrowser::GetSnapshot() {
		std::lock_guard<std::mutex> lock(m_mutex);
		return m_snapshot;
	}

	void ObjectBrowser::RequestScan() {
		{
			std::lock_guard<std::mutex> lock(m_mutex);
			if (m_scanning)
				return;
			m_scanning = true;
		}
		mdml::runtime::GameThread::Enqueue([this]() {
			auto snapshot = std::make_shared<Snapshot>();
			snapshot->actors = UE4::UObject::GetAllObjectsOfType<UE4::UObject>(UE4::AActor::StaticClass(), true);
			UE4::UObject::ForEachObject([&](UE4::UObject* object) {
				if (object->GetName().find("Default__") != std::string::npos)
					return;
				else if (object->IsAByName("BlueprintGeneratedClass BP_NPC.BP_NPC_C")) // kept from the BaseMod browser
					snapshot->blueprints.push_back(object);
				else if (object->IsA(UE4::UBlueprintGeneratedClass::StaticClass()))
					snapshot->blueprints.push_back(object);
				else if (object->IsA(UE4::UClass::StaticClass()))
					snapshot->classes.push_back(object);
				else if (object->IsA(UE4::UDataTable::StaticClass()))
					snapshot->dataTables.push_back(object);
				else if (object->IsA(UE4::UPackage::StaticClass()))
					snapshot->packages.push_back(object);
			});
			std::lock_guard<std::mutex> lock(m_mutex);
			m_snapshot = std::move(snapshot);
			m_scanning = false;
		});
	}

	void ObjectBrowser::DrawPackages(const std::vector<UE4::UObject*>& packages) {
		size_t index = 0;
		bool selectAll = false;
		bool deselectAll = false;
		ImGui::InputText("##SearchPackages_SEARCHBAR", &m_searchPackages);
		if (ImGui::Button("Export selected")) {
			if (!m_exportList.empty()) {
				const auto selected = m_exportList;
				const LogFn log = m_log;
				mdml::runtime::GameThread::Enqueue([selected, log]() {
					log("Legacy export started (the game freezes until it is done)...", false);
					log(legacy::RunExportPackages(selected, util::MdmlFolder() / "Export"), false);
				});
			}
			m_exportList.clear();
		}
		ImGui::SameLine();
		if (ImGui::Button("Select All"))
			selectAll = true;
		ImGui::SameLine();
		if (ImGui::Button("Deselect All"))
			deselectAll = true;
		ImGui::SameLine();
		if (ImGui::Button("Clear"))
			m_exportList.clear();
		ImGui::SameLine();
		if (ImGui::Button("Export BP Structs")) {
			const LogFn log = m_log;
			mdml::runtime::GameThread::Enqueue([log]() {
				log("Legacy export started (the game freezes until it is done)...", false);
				log(legacy::RunExportBPStructs(util::MdmlFolder() / "Export"), false);
			});
		}
		ImGui::SameLine();
		if (ImGui::Button("Export BP Enums")) {
			const LogFn log = m_log;
			mdml::runtime::GameThread::Enqueue([log]() {
				log("Legacy export started (the game freezes until it is done)...", false);
				log(legacy::RunExportBPEnums(util::MdmlFolder() / "Export"), false);
			});
		}
		{ // export list files "<profile>.export" in DevTools' mod folder (same format as the generator's export lists)
			ImGui::InputText("##Export_Profile", &m_profile);
			const std::filesystem::path profileFile = m_listFolder / (m_profile + ".export");
			if (ImGui::Button("Save selected to file")) {
				std::stringstream content;
				for (auto& entry : m_exportList)
					content << entry->GetName() << std::endl;
				util::SaveString(content.str(), profileFile.string());
			}
			ImGui::SameLine();
			if (ImGui::Button("Load from File")) {
				// Same format as the generator's export lists (comments with ';' or '#').
				for (const std::string& name : LoadExportList(profileFile).Packages)
					m_needAddList.push_back(name);
			}
			ImGui::SameLine();
			ImGui::TextDisabled("(%s)", m_listFolder.string().c_str());
		}

		for (auto object : packages) {
			if (!object)
				continue;

			const auto loc = std::find(m_needAddList.begin(), m_needAddList.end(), object->GetName());
			if (loc != m_needAddList.end()) {
				m_needAddList.erase(loc);
				m_exportList.push_back((UE4::UPackage*)object);
			}

			if (!gui::FilterSearch(object, m_searchPackages))
				continue;

			float x = ImGui::GetContentRegionAvail().x;
			if (ImGui::TreeNodeEx(("Packages_" + std::to_string(index++)).c_str(), ImGuiTreeNodeFlags_OpenOnArrow, "%s", object->GetName().c_str())) {
				int32_t count = -1;
				bool pending = false;
				{
					std::lock_guard<std::mutex> lock(m_mutex);
					auto it = m_packageObjectCounts.find(object);
					if (it != m_packageObjectCounts.end())
						count = it->second;
					pending = m_countsPending.count(object) != 0;
				}
				if (count >= 0)
					ImGui::Text("Found %d objects", count);
				if (pending)
					ImGui::BeginDisabled();
				if (ImGui::Button("Count objects")) {
					{
						std::lock_guard<std::mutex> lock(m_mutex);
						m_countsPending.insert(object);
					}
					mdml::runtime::GameThread::Enqueue([this, object]() {
						const int32_t n = (int32_t)((UE4::UPackage*)object)->GetAllObjectsInPackage(true).size();
						std::lock_guard<std::mutex> lock(m_mutex);
						m_packageObjectCounts[object] = n;
						m_countsPending.erase(object);
					});
				}
				if (pending)
					ImGui::EndDisabled();
				if (ImGui::Button("Generate C++ files")) {
					const LogFn log = m_log;
					auto pack = (UE4::UPackage*)object;
					mdml::runtime::GameThread::Enqueue([pack, log]() {
						log("Legacy export started (the game freezes until it is done)...", false);
						log(legacy::RunExportPackages({ pack }, util::MdmlFolder() / "Export"), false);
					});
				}
				ImGui::TreePop();
			}

			auto exportListLoc = std::find(m_exportList.begin(), m_exportList.end(), (UE4::UPackage*)object);
			if (selectAll && exportListLoc == m_exportList.end()) {
				m_exportList.push_back((UE4::UPackage*)object);
				exportListLoc = std::find(m_exportList.begin(), m_exportList.end(), (UE4::UPackage*)object);
			}
			if (deselectAll && exportListLoc != m_exportList.end()) {
				m_exportList.erase(exportListLoc);
				exportListLoc = m_exportList.end();
			}
			bool isInExportList = exportListLoc != m_exportList.end();

			if (ImGui::IsItemClicked(ImGuiMouseButton_Left) && ImGui::IsMouseDoubleClicked(ImGuiMouseButton_Left)) {
				if (!isInExportList)
					m_exportList.push_back((UE4::UPackage*)object);
				else
					m_exportList.erase(exportListLoc);
				exportListLoc = std::find(m_exportList.begin(), m_exportList.end(), (UE4::UPackage*)object);
				isInExportList = exportListLoc != m_exportList.end();
			}

			ImGui::SameLine();
			ImGui::SetCursorPosX(x - 75.0f);
			ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3.0f);
			if (ImGui::Checkbox(("##ExportCheckBox" + std::to_string(index++)).c_str(), &isInExportList)) {
				if (isInExportList && exportListLoc == m_exportList.end())
					m_exportList.push_back((UE4::UPackage*)object);
				else if (!isInExportList && exportListLoc != m_exportList.end())
					m_exportList.erase(exportListLoc);
			}
		}
	}

	void ObjectBrowser::Draw() {
		if (!m_open)
			return;
		if (ImGui::Begin("Object Browser", &m_open)) {
			const auto snapshot = GetSnapshot();
			bool scanning;
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				scanning = m_scanning;
			}
			if (scanning)
				ImGui::BeginDisabled();
			if (ImGui::Button(snapshot ? "Update" : "Scan objects"))
				RequestScan();
			if (scanning)
				ImGui::EndDisabled();
			ImGui::SameLine();
			ImGui::TextDisabled("%s", scanning ? "scanning on the game thread..." : "(scans GObjects on the game thread; dropped on level change)");
			ImGui::Separator();

			if (snapshot) {
				size_t index = 0;
				if (ImGui::TreeNodeEx("ACTORLIST", DEFAULT_TREE_NODE_FLAGS | ImGuiTreeNodeFlags_CollapsingHeader, "%d Actors", (int)snapshot->actors.size())) {
					ImGui::InputText("##SearchActors_SEARCHBAR", &m_searchActors);
					for (UE4::UObject* object : snapshot->actors) {
						if (!object || !gui::FilterSearch(object, m_searchActors))
							continue;
						UE4::AActor* actor = static_cast<UE4::AActor*>(object);
						if (ImGui::TreeNodeEx(("Actors_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, "%s", actor->GetName().c_str())) {
							if (ImGui::CollapsingHeader("Transform"))
								gui::ActorTransformEdit(actor);
							if (ImGui::CollapsingHeader("Class"))
								gui::ClassInfo(actor->GetClass(), m_log);
							ImGui::TreePop();
						}
					}
				}
				auto classList = [&](const char* title, const char* prefix, const std::vector<UE4::UObject*>& list, std::string& search) {
					size_t i = 0;
					if (ImGui::CollapsingHeader((std::to_string(list.size()) + " " + title + "###" + prefix).c_str())) {
						ImGui::InputText((std::string("##Search") + prefix + "_SEARCHBAR").c_str(), &search);
						for (auto object : list) {
							if (!object || !gui::FilterSearch(object, search))
								continue;
							UE4::UClass* clas = static_cast<UE4::UClass*>(object);
							if (ImGui::TreeNodeEx((std::string(prefix) + "_" + std::to_string(i++)).c_str(), DEFAULT_TREE_NODE_FLAGS, "%s", clas->GetName().c_str())) {
								gui::ClassInfo(clas, m_log);
								ImGui::TreePop();
							}
						}
					}
				};
				classList("Classes", "Classes", snapshot->classes, m_searchClasses);
				classList("Blueprints", "Blueprints", snapshot->blueprints, m_searchBlueprints);

				index = 0;
				if (ImGui::CollapsingHeader((std::to_string(snapshot->dataTables.size()) + " DataTables###DataTables").c_str())) {
					ImGui::InputText("##SearchDataTables_SEARCHBAR", &m_searchDataTables);
					for (auto object : snapshot->dataTables) {
						if (!object || !gui::FilterSearch(object, m_searchDataTables))
							continue;
						if (ImGui::TreeNodeEx(("DataTables_" + std::to_string(index++)).c_str(), DEFAULT_TREE_NODE_FLAGS, "%s", object->GetName().c_str())) {
							ImGui::Text("Package: %s", object->GetPackage() ? object->GetPackage()->GetName().c_str() : "Nullptr");
							UE4::UDataTable* table = (UE4::UDataTable*)object;
							auto rowstruct = table->M_GetRowStruct();
							ImGui::Text("RowStruct: %s", rowstruct ? rowstruct->GetFullName().c_str() : "Nullptr");
							if (ImGui::TreeNodeEx("Rows", DEFAULT_TREE_NODE_FLAGS)) {
								UE4::NativeTMap<UE4::FName, uint8_t*> rowMap = table->GetRowMap();
								for (int i = 0; i < rowMap.Num(); i++) {
									auto pair = rowMap.GetPair(i);
									ImGui::Text("%s: %p", pair.Key.GetName().c_str(), (void*)pair.Value);
								}
								ImGui::TreePop();
							}
							ImGui::TreePop();
						}
					}
				}
				if (ImGui::CollapsingHeader((std::to_string(snapshot->packages.size()) + " Packages###Packages").c_str()))
					DrawPackages(snapshot->packages);
			}
		}
		ImGui::End();
	}
}
