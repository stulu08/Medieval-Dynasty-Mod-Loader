#pragma once
#include "Ue4.hpp"
#include <algorithm>
#include <filesystem>
#include <Mod/Mod.h>


namespace MDMLBase {
	namespace Utils {
		inline std::string WStringToString(const std::wstring& wstr) {
			std::string str(wstr.length(), 0);
			std::transform(wstr.begin(), wstr.end(), str.begin(), [](wchar_t c) { return (char)c; });
			return str;
		}
		inline std::string FStringToString(const UE4::FString& fstr) {
			return WStringToString(fstr.c_str());
		}
		/// <summary>
		/// Use this filtering a class in BeginPlay, you should only use this BP classes
		/// </summary>
		/// <param name="fullClassName">The full class name</param>
		/// <param name="Actor">The actor to check if it has the class</param>
		/// <returns></returns>
		inline UE4::UClass* FilterByBPClass(const std::string& fullClassName, UE4::AActor* Actor) {
			if (!Actor)
				return nullptr;
			static std::unordered_map<std::string, UE4::UClass*> classes;
			UE4::UClass*& clas = classes[fullClassName];
			if (clas && clas == Actor->GetClass()) {
				return clas;
			}
			else if (Actor->GetClass()->GetFullName() == fullClassName) {
				classes[fullClassName] = Actor->GetClass();
				return Actor->GetClass();
			}
			return nullptr;
		}
		inline std::vector<UE4::UFunction*>& GetAllClasssFunctions(UE4::UClass* clas, bool reload = false) {
			static std::unordered_map<UE4::UClass*, std::vector<UE4::UFunction*>> classFunctions;
			if (!reload) {
				if(classFunctions.find(clas) != classFunctions.end())
					return classFunctions[clas];
			}
			classFunctions[clas].clear();
			auto& GObjects = UE4::UObject::GObjects;
			if (UE4::UObject::IsChunkedArray()) {
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i) {
					auto fn = GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (!fn)
						continue;
					if (!fn->GetOuter())
						continue;
					if (fn->GetOuter() == clas) {
						classFunctions[clas].push_back(static_cast<UE4::UFunction*>(fn));
					}
				}
			}
			else {
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i) {
					auto fn = GObjects->GetAsTUArray().GetByIndex(i).Object;
					if (!fn)
						continue;
					if (!fn->GetOuter())
						continue;
					if (fn->GetOuter() == clas) {
						classFunctions[clas].push_back(static_cast<UE4::UFunction*>(fn));
					}
				}
			}
			return classFunctions[clas];
		}
		inline void DumpClassInfo(UE4::UClass* clas) {
			if (!clas)
				return;
			if (!std::filesystem::exists("Dump"))
				std::filesystem::create_directory("Dump");
			FILE* Log = NULL;
			std::string FileName = std::string("Dump/") + clas->GetName() + "_Dump.txt";
			fopen_s(&Log, FileName.c_str(), "w+");
			if (Log != NULL) {
				for (UE4::UObject* fn : GetAllClasssFunctions(clas)) {
					if (!fn)
						continue;
					UE4::UFunction* func = static_cast<UE4::UFunction*>(fn);
#pragma warning( push )
#pragma warning( disable : 4477 )
#pragma warning( disable : 4313 )
					fprintf(Log, "ClassName: %s\n", clas->GetName().c_str());
					fprintf(Log, "FunctionName: %s\n", fn->GetName().c_str());
					{
						
						uint32_t flags = (uint32_t)func->GetFunctionFlags();
						fprintf(Log, "FunctionFlags: ");
						{
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_None) {
								fprintf(Log, "None | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Final) {
								fprintf(Log, "Final | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_RequiredAPI) {
								fprintf(Log, "RequiredAPI | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_BlueprintAuthorityOnly) {
								fprintf(Log, "BlueprintAuthorityOnly | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_BlueprintCosmetic) {
								fprintf(Log, "BlueprintCosmetic | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Net) {
								fprintf(Log, "Net | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetReliable) {
								fprintf(Log, "NetReliable | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetRequest) {
								fprintf(Log, "NetRequest | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Exec) {
								fprintf(Log, "Exec | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Native) {
								fprintf(Log, "Native | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Event) {
								fprintf(Log, "Event | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetResponse) {
								fprintf(Log, "NetResponse | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Static) {
								fprintf(Log, "Static | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetMulticast) {
								fprintf(Log, "NetMulticast | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_UbergraphFunction) {
								fprintf(Log, "UbergraphFunction | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_MulticastDelegate) {
								fprintf(Log, "MulticastDelegate | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Public) {
								fprintf(Log, "Public | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Private) {
								fprintf(Log, "Private | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Protected) {
								fprintf(Log, "Protected | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Delegate) {
								fprintf(Log, "Delegate | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetServer) {
								fprintf(Log, "NetServer | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_HasOutParms) {
								fprintf(Log, "BlueprintAuthorityOnly | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_HasDefaults) {
								fprintf(Log, "HasDefaults | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetClient) {
								fprintf(Log, "NetClient | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_DLLImport) {
								fprintf(Log, "MulticastDelegate | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_BlueprintCallable) {
								fprintf(Log, "BlueprintCallable | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_BlueprintEvent) {
								fprintf(Log, "BlueprintEvent | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_BlueprintPure) {
								fprintf(Log, "BlueprintPure | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_EditorOnly) {
								fprintf(Log, "EditorOnly | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_Const) {
								fprintf(Log, "Const | ");
							}
							if (flags & (uint32_t)UE4::EFunctionFlags::FUNC_NetValidate) {
								fprintf(Log, "NetValidate | ");
							}
						}
						fprintf(Log, "HEX: 0x%p\n", func->GetFunctionFlags());
					}
					fprintf(Log, "FunctionNumParms: 0x%p\n", func->GetNumParms());
					fprintf(Log, "FunctionGetParamsSize: 0x%p\n", func->GetParamsSize());
					fprintf(Log, "FunctionReturnValueOffset: 0x%p\n", func->GetReturnValueOffset());
					fprintf(Log, "\n");
#pragma warning( pop )
				}
				fclose(Log);
				Log::SetupMessage("Done!", "Actors functions Dump Complete!");
			}
		}
		/// <summary>
		/// Returns a list which every object in the vector that has the string inside the fullname
		/// </summary>
		/// <returns></returns>
		inline void FilterListByName(std::vector<UE4::UObject*>& objects, const std::string& search, std::unordered_map<UE4::UObject*, bool>& outResult) {
			for (auto object : objects) {
				if (!object)
					continue;
				std::string name = object->GetFullName();
				outResult[object] = name.find(search) != std::string::npos;
			}
		}

		inline UE4::UFunction* GetFunction(const std::string& functionName) {
			UE4::UFunction* f = UE4::UObject::FindObject<UE4::UFunction>(functionName);
			if (f == nullptr) {
				Log::Error_MDML("\"{0}\" could not be found", functionName);
				return nullptr;
			}
			return f;
		}
		namespace Gui {
			inline void UE4FunctionInfoTreeNode(UE4::UFunction* function, size_t id = 0, ImGuiTreeNodeFlags flags = DEFAULT_TREE_NODE_FLAGS) {
				if (!function)
					return;
				if (id == 0)
					id = (size_t)function->GetIndex();
				if (ImGui::TreeNodeEx((void*)id, flags, function->GetName().c_str())) {
					ImGui::Text(function->GetFullName().c_str());
					if (function->GetClass()) {
						ImGui::Text("Num Parms: %d", function->GetNumParms());
						ImGui::Text("Params Size: %d", function->GetParamsSize());
						ImGui::Text("Return Value Offset: %d", function->GetReturnValueOffset());
					}
					ImGui::TreePop();
				}
			}
			inline void UE4ClassInfo(UE4::UClass* clas, ImGuiTreeNodeFlags flags = DEFAULT_TREE_NODE_FLAGS) {
				if (!clas)
					return;
				ImGui::Text("Name: %s", clas->GetName().c_str());
				ImGui::Text("Fullname: %s", clas->GetFullName().c_str());
				if (ImGui::CollapsingHeader("Functions")) {
					std::vector<UE4::UFunction*> functions = Utils::GetAllClasssFunctions(clas);
					if (ImGui::Button("Dump class functions")) {
						DumpClassInfo(clas);
					}
					size_t in = 0;
					for (UE4::UFunction* fn : functions) {
						if (!fn)
							continue;
						in++;
						Utils::Gui::UE4FunctionInfoTreeNode(fn, in);
					}
				}
				ImGui::Separator();
			}
			inline bool UE4ActorTransformEdit(UE4::AActor* actor, bool applyChanges = true) {
				bool status = false;

				glm::vec3 pos = actor->GetActorLocation();
				if (ImGui::MDML_Vector3("Position", pos)) {
					if(applyChanges)
						actor->SetActorLocation(pos);
					status = true;
				}
				glm::vec3 rotation = actor->GetActorRotation();
				if (ImGui::MDML_Vector3("Rotation", rotation)) {
					if (applyChanges)
						actor->SetActorRotation(rotation);
					status = true;
				}
				glm::vec3 scale = actor->GetActorScale3D();
				if (ImGui::MDML_Vector3("Scale", scale)) {
					if (applyChanges)
						actor->SetActorScale3D(scale);
					status = true;
				}

				return status;
			}
			/// <summary>
			/// Returns true if search was peformed, outObjects will only be assigned when searched
			/// </summary>
			/// <param name="objects"></param>
			/// <returns></returns>
			inline bool SearchBar(const std::string& header, std::vector<UE4::UObject*>& objects, std::unordered_map<UE4::UObject*, bool>& outObjects) {
				static std::unordered_map<std::string, std::string> searches;
				std::string& search = searches[header];
				bool searched = false;
				ImGui::InputText(("##" + header + "_SEARCHBAR").c_str(), &search); ImGui::SameLine();
				ImGui::PushID(("##" + header).c_str());
				if (ImGui::Button("Search")) {
					outObjects.clear();
					FilterListByName(objects, search, outObjects);
					searched = true;
				}
				ImGui::SameLine();
				if (ImGui::Button("Clear")) {
					search.clear();
					outObjects.clear();
					FilterListByName(objects, search, outObjects);
					searched = true;
				}
				ImGui::PopID();
				return searched;
			}
		}
	}
}