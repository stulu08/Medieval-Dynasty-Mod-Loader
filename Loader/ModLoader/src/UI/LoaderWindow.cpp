#include "Core.h"
#include "LoaderWindow.h"

#include <string>

#include <imgui/imgui.h>

#include "MDML/UI/Widgets.h"
#include "UI/UiText.h"
#include "Runtime/Dumper.h"
#include "MDML/GameThread.h"
#include "MDML/Notices.h"
#include "Mods/Registry.h"
#include "Engine.hpp"

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

		// One entry per mod folder with its components (mod-components phase 1; was three lists: logic, core, overwrite mods).
		void ShowCoreComponent(Mod& mod, size_t index)
		{
			CoreMod* core = mod.Core();
			if (!core || !ImGui::TreeNode(IdLabel("Core", "mc", index).c_str()))
				return;
			if (core->UseMenuButton)
			{
				if (ImGui::Button(IdLabel(mod.Info().Name + " Button", "cm", index).c_str()))
				{
					// OnModMenuButtonPressed is mod code and usually calls into the engine: game thread only.
					GameThread::Enqueue([core]() {
						// Skip it if the mod was removed from the stack meanwhile (it threw).
						if (mods::Registry::Get().CoreMods.contains(core))
							core->OnModMenuButtonPressed();
					});
				}
			}
			ImGui::TreePop();
		}

		void ShowBlueprintComponent(Mod& mod, size_t index)
		{
			BlueprintMod* blueprint = mod.Blueprint();
			if (!blueprint || !ImGui::TreeNode(IdLabel("Blueprint", "mb", index).c_str()))
				return;
			ImGui::Text("%s", ("Actor: " + (blueprint->ActorFile.empty() ? std::string("none (asset-only)") : blueprint->ActorFile)).c_str());
			if (ImGui::TreeNode("Mod Buttons"))
			{
				if (blueprint->Enabled && blueprint->ActorInstance && blueprint->ContainsButton)
				{
					for (size_t bi = 0; bi < blueprint->ModButtons.size(); bi++)
					{
						std::string ButtonLabel = blueprint->ModButtons[bi] + "##" + std::to_string(index + bi);
						if (ImGui::Button(ButtonLabel.c_str()))
						{
							// The button calls into the mod's blueprint actor: game thread only. The actor is looked
							// up again there since it may have changed meanwhile.
							GameThread::Enqueue([blueprint, bi]() {
								if (!blueprint->Enabled || !blueprint->ActorInstance)
									return;
								std::wstring FuncNameAndArgs = L"ModMenuButtonPressed " + std::to_wstring(bi);
								blueprint->ActorInstance->CallFunctionByNameWithArguments(FuncNameAndArgs.c_str(), nullptr, NULL, true);
							});
						}
					}
					ImGui::Separator();
				}
				ImGui::TreePop();
			}
			ImGui::Checkbox(("Enable##" + std::to_string(index)).c_str(), &blueprint->Enabled);
			ImGui::TreePop();
		}

		void ShowOverwriteComponent(Mod& mod, size_t index)
		{
			OverwriteMod* overwrite = mod.Overwrite();
			if (!overwrite || !ImGui::TreeNode(IdLabel("Overwrite", "mo", index).c_str()))
				return;
			ImGui::Text("%s", ("Files: " + std::to_string(overwrite->Files.size()) + ", linked: " + std::to_string(overwrite->Linked.size())).c_str());
			if (ImGui::TreeNode("Files overwritten")) {
				for (const auto& file : overwrite->Linked) {
					ImGui::TextUnformatted(file.c_str());
				}
				ImGui::TreePop();
			}
			ImGui::TreePop();
		}

		void ShowMods()
		{
			if (!ImGui::CollapsingHeader("Mods"))
				return;

			// The mod list is frozen after loading (Registry::Mods), so it is safe to read from the render thread.
			size_t i = 0;
			for (auto& mod : mods::Registry::Get().Mods)
			{
				const size_t index = i++;
				const ModInfo& info = mod->Info();
				if (ImGui::TreeNode(IdLabel(info.Name + (mod->Failed() ? " [FAILED]" : ""), "mod", index).c_str()))
				{
					ImGui::Text("%s", ("Created By: " + info.Author).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Description: " + info.Description).c_str());
					ImGui::Separator();
					ImGui::Text("%s", ("Version: " + info.Version).c_str());
					ImGui::Separator();
					if (mod->Failed())
					{
						ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 0.35f, 0.35f, 1.f));
						ImGui::PushTextWrapPos(0.f);
						ImGui::TextUnformatted(("FAILED, mod dropped: " + mod->FailReason()).c_str());
						ImGui::PopTextWrapPos();
						ImGui::PopStyleColor();
						ImGui::TreePop();
						continue;
					}
					ShowCoreComponent(*mod, index);
					ShowBlueprintComponent(*mod, index);
					ShowOverwriteComponent(*mod, index);
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
					UE4::UKismetSystemLibrary::ExecuteConsoleCommand(UE4::GetWorld(), UE4::FString(command.c_str()), nullptr);
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
			ShowMods();
			ShowTools();
		}
		ImGui::End();
	}
}
