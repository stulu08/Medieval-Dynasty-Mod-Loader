#include "Core.h"
#include "LoaderWindow.h"

#include <string>

#include <imgui/imgui.h>

#include "UI/Widgets.h"
#include "Runtime/Dumper.h"
#include "Runtime/GameThread.h"
#include "Runtime/Notices.h"
#include "Globals.h"

namespace mdml::ui {
	namespace {
		using mdml::runtime::GameThread;
		using mdml::runtime::Notice;
		using mdml::runtime::NoticeSeverity;

		ImVec4 SeverityColor(NoticeSeverity severity, float alpha = 1.f)
		{
			switch (severity) {
			case NoticeSeverity::Error: return ImVec4(1.f, 0.35f, 0.35f, alpha);
			case NoticeSeverity::Warning: return ImVec4(1.f, 0.8f, 0.3f, alpha);
			default: return ImVec4(0.5f, 1.f, 0.5f, alpha);
			}
		}

		const char* SeverityPrefix(NoticeSeverity severity)
		{
			switch (severity) {
			case NoticeSeverity::Error: return "[Error] ";
			case NoticeSeverity::Warning: return "[Warning] ";
			default: return "";
			}
		}

		void ShowNotices()
		{
			const std::vector<Notice> notices = mdml::runtime::Notices::Snapshot();

			// Persistent notices (e.g. a failed engine layout check) stay on top for the whole session, coloured by
			// severity and separated from the rest so they cannot be overlooked.
			bool anyPersistent = false;
			for (const Notice& notice : notices) {
				if (!notice.Persistent)
					continue;
				anyPersistent = true;
				ImGui::PushStyleColor(ImGuiCol_Text, SeverityColor(notice.Severity));
				ImGui::PushTextWrapPos(0.f);
				ImGui::TextUnformatted((SeverityPrefix(notice.Severity) + notice.Text).c_str());
				ImGui::PopTextWrapPos();
				ImGui::PopStyleColor();
			}
			if (anyPersistent)
				ImGui::Separator();

			// Transient notices (e.g. dump status): fully visible for 6 s, fading out over the next 2 s.
			for (const Notice& notice : notices) {
				if (notice.Persistent)
					continue;
				const float alpha = notice.AgeSeconds < 6.f ? 1.f : (8.f - notice.AgeSeconds) / 2.f;
				ImGui::PushStyleColor(ImGuiCol_Text, SeverityColor(notice.Severity, alpha));
				ImGui::PushTextWrapPos(0.f);
				ImGui::TextUnformatted((SeverityPrefix(notice.Severity) + notice.Text).c_str());
				ImGui::PopTextWrapPos();
				ImGui::PopStyleColor();
			}
		}

		void ShowLogicMods()
		{
			if (!ImGui::CollapsingHeader("Logic Mods"))
				return;

			auto& modList = Global::GetGlobals()->ModInfoList;
			for (size_t i = 0; i < modList.size(); i++)
			{
				if (ImGui::TreeNode(IdLabel(NarrowTruncating(modList[i].ModName), "lm", i).c_str()))
				{
					ImGui::Text("%s", ("Created By: " + modList[i].ModAuthor).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Description: " + modList[i].ModDescription).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Version: " + modList[i].ModVersion).c_str());
					ImGui::Separator();
					if (ImGui::TreeNode("Mod Buttons"))
					{
						if (modList[i].IsEnabled && modList[i].CurrentModActor && modList[i].ContainsButton)
						{
							for (size_t bi = 0; bi < modList[i].ModButtons.size(); bi++)
							{
								std::string ButtonLabel = modList[i].ModButtons[bi] + "##" + std::to_string(i + bi);
								if (ImGui::Button(ButtonLabel.c_str()))
								{
									// The button calls into the mod's blueprint actor: game thread only. The actor is looked
									// up again there since it may have changed meanwhile.
									GameThread::Enqueue([i, bi]() {
										auto& list = Global::GetGlobals()->ModInfoList;
										if (i >= list.size() || !list[i].IsEnabled || !list[i].CurrentModActor)
											return;
										std::wstring FuncNameAndArgs = L"ModMenuButtonPressed " + std::to_wstring(bi);
										list[i].CurrentModActor->CallFunctionByNameWithArguments(FuncNameAndArgs.c_str(), nullptr, NULL, true);
									});
								}
							}
							ImGui::Separator();
						}
						ImGui::TreePop();
					}
					ImGui::Checkbox(("Enable##" + std::to_string(i)).c_str(), &modList[i].IsEnabled);
					ImGui::TreePop();
				}
			}
		}

		void ShowCoreMods()
		{
			if (!ImGui::CollapsingHeader("Core Mods"))
				return;

			auto& coreMods = Global::GetGlobals()->CoreMods;
			for (size_t i = 0; i < coreMods.size(); i++)
			{
				const std::string name = coreMods[i]->ModName;
				if (ImGui::TreeNode(IdLabel(name, "cm", i).c_str()))
				{
					ImGui::Text("%s", ("Created By: " + coreMods[i]->ModAuthors).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Description: " + coreMods[i]->ModDescription).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Version: " + coreMods[i]->ModVersion).c_str());
					ImGui::Separator();

					if (coreMods[i]->UseMenuButton && coreMods[i]->IsFinishedCreating)
					{
						if (ImGui::Button(IdLabel(name + " Button", "cm", i).c_str()))
						{
							// OnModMenuButtonPressed is mod code and usually calls into the engine: game thread only.
							GameThread::Enqueue([i]() {
								auto& mods = Global::GetGlobals()->CoreMods;
								if (i < mods.size() && mods[i])
									mods[i]->OnModMenuButtonPressed();
							});
						}
					}
					ImGui::TreePop();
				}
			}
		}

		void ShowOverrideMods()
		{
			if (!ImGui::CollapsingHeader("Overwrite Mods"))
				return;

			auto& overwriteMods = Global::GetGlobals()->OverwriteMods;
			for (size_t i = 0; i < overwriteMods.size(); i++) {
				const OverwriteMod& mod = overwriteMods[i];
				if (ImGui::TreeNode(IdLabel(mod.Name, "om", i).c_str())) {
					ImGui::Text("%s", ("Created By: " + mod.Author).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Description: " + mod.Description).c_str());
					ImGui::Separator();
					if (ImGui::TreeNode("Files overwritten")) {
						for (const auto& file : mod.Files) {
							ImGui::TextUnformatted(file.c_str());
						}
						ImGui::TreePop();
					}
					ImGui::TreePop();
				}
			}
		}

		void ShowTools()
		{
			if (!ImGui::CollapsingHeader("Tools"))
				return;

			ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
			ImGui::Spacing();
			// The dumps walk GObjects: game thread only (they post their own notice when done).
			if (ImGui::Button("Dump Objects"))
				GameThread::Enqueue([]() { Dumper::GetDumper()->DumpObjectArray(); });
			if (ImGui::Button("Dump Engine Info"))
				GameThread::Enqueue([]() { Dumper::GetDumper()->DumpEngineInfo(); });
			if (ImGui::Button("Dump World Actors"))
				GameThread::Enqueue([]() { Dumper::GetDumper()->DumpWorldActors(); });

			static char Command[128];
			ImGui::Spacing();
			ImGui::Separator();
			ImGui::Text("Execute Console Command");
			ImGui::InputText("##InputText", Command, IM_ARRAYSIZE(Command));
			if (ImGui::Button("Execute"))
			{
				// Same narrowing as always: every char becomes one wchar_t.
				std::string strCommand(Command);
				std::wstring wstrCommand = std::wstring(strCommand.begin(), strCommand.end());
				GameThread::Enqueue([command = std::move(wstrCommand)]() {
					UE4::UGameplayStatics::ExecuteConsoleCommand(command.c_str(), nullptr);
				});
			}
		}
	}

	void LoaderWindow::Draw()
	{
		if (ImGui::Begin("MDML", NULL, NULL)) {
			ImGui::Spacing();
			ShowNotices();
			ImGui::Text("Medieval Dynasty Mod Loader Version: %s", MODLOADER_VERSION);
			ImGui::Text("Medieval Dynasty Version: %s", MEDIEVAL_VERSION);
			ShowLogicMods();
			ShowCoreMods();
			ShowOverrideMods();
			ShowTools();
		}
		ImGui::End();
	}
}
