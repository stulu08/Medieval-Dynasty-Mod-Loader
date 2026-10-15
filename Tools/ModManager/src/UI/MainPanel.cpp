#include "MainPanel.h"
#include "Dialogs.h"

#include <Stulu/SDG/Style.h>

namespace mmui {
	using namespace mm;

	namespace {
		const ImVec4 kGood(0.45f, 0.85f, 0.45f, 1.0f);
		const ImVec4 kWarn(0.95f, 0.75f, 0.30f, 1.0f);
		const ImVec4 kBad(0.95f, 0.40f, 0.40f, 1.0f);

		std::string FormatSize(uint64_t bytes) {
			char buf[32];
			if (bytes >= 1024ull * 1024) snprintf(buf, sizeof(buf), "%.1f MB", bytes / (1024.0 * 1024.0));
			else snprintf(buf, sizeof(buf), "%.1f KB", bytes / 1024.0);
			return buf;
		}

		bool LooksBool(const std::string& v, bool& value, bool& numeric, bool& upperCase) {
			std::string l = Lower(Trim(v));
			numeric = false;
			upperCase = !v.empty() && std::isupper((unsigned char)v[0]);
			if (l == "true" || l == "false") { value = l == "true"; return true; }
			if (l == "yes" || l == "no") { value = l == "yes"; return true; }
			if (l == "on" || l == "off") { value = l == "on"; return true; }
			if (l == "1" || l == "0") { value = l == "1"; numeric = true; return true; }
			return false;
		}

		std::string BoolText(const std::string& old, bool v, bool numeric, bool upper) {
			std::string l = Lower(Trim(old));
			std::string t;
			if (numeric) t = v ? "1" : "0";
			else if (l == "yes" || l == "no") t = v ? "yes" : "no";
			else if (l == "on" || l == "off") t = v ? "on" : "off";
			else t = v ? "true" : "false";
			if (upper && !t.empty() && !numeric) t[0] = (char)std::toupper((unsigned char)t[0]);
			return t;
		}
	}

	MainPanel::MainPanel(State& state)
		: Panel("MDML Mod Manager", true,
			ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings |
			ImGuiWindowFlags_NoDocking),
		m_state(state) {
	}

	void MainPanel::PreWindow() {
		const ImGuiViewport* vp = ImGui::GetMainViewport();
		ImGui::SetNextWindowPos(vp->WorkPos);
		ImGui::SetNextWindowSize(vp->WorkSize);
		ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
		ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
	}

	void MainPanel::PostWindow() {
		ImGui::PopStyleVar(2);
	}

	void MainPanel::DrawImGui() {
		m_state.Update();

		const float footer = ImGui::GetFrameHeightWithSpacing() * 1.4f;
		if (ImGui::BeginChild("##pages", ImVec2(0, -footer))) {
			if (ImGui::BeginTabBar("##tabs")) {
				if (ImGui::BeginTabItem("Dashboard")) { DrawDashboard(); ImGui::EndTabItem(); }
				if (ImGui::BeginTabItem("Mods")) { DrawMods(); ImGui::EndTabItem(); }
				if (ImGui::BeginTabItem("Configs")) { DrawConfigs(); ImGui::EndTabItem(); }
				if (ImGui::BeginTabItem("Log")) { DrawLog(); ImGui::EndTabItem(); }
				ImGui::EndTabBar();
			}
		}
		ImGui::EndChild();
		DrawStatusBar();
		DrawPendingInstall();
	}

	// ------------------------------------------------------------ dashboard

	void MainPanel::DrawDashboard() {
		State& s = m_state;
		if (!m_gamePathInit) {
			m_gamePathEdit = s.settings.gamePath;
			m_gamePathInit = true;
		}

		ImGui::SeparatorText("Game");
		ImGui::SetNextItemWidth(-260);
		ImGui::InputTextWithHint("##gamepath", "...\\steamapps\\common\\Medieval Dynasty", &m_gamePathEdit);
		if (ImGui::IsItemDeactivatedAfterEdit() && m_gamePathEdit != s.settings.gamePath)
			s.SetGamePath(m_gamePathEdit);
		ImGui::SameLine();
		if (ImGui::Button("Detect")) {
			s.DetectGame();
			m_gamePathEdit = s.settings.gamePath;
		}
		ImGui::SameLine();
		if (ImGui::Button("Browse...")) {
			fs::path p = PickFolder(L"Select the Medieval Dynasty folder");
			if (!p.empty()) {
				s.SetGamePath(PathToUtf8(p));
				m_gamePathEdit = s.settings.gamePath;
			}
		}

		if (!s.game.Valid()) {
			ImGui::TextColored(kBad, "Medieval Dynasty was not found at this path.");
			return;
		}
		ImGui::TextColored(kGood, "Game found");
		ImGui::SameLine();
		ImGui::TextDisabled("(%s)", PathToUtf8(s.game.Binaries()).c_str());
		ImGui::SameLine();
		if (ImGui::SmallButton("Open folder")) OpenInExplorer(s.game.Binaries());

		ImGui::Spacing();
		ImGui::BeginDisabled(s.Busy());
		if (ImGui::Button("Launch game", ImVec2(160, 0))) s.Launch();
		ImGui::EndDisabled();
		ImGui::SameLine();
		bool steam = s.settings.launchViaSteam;
		if (ImGui::Checkbox("via Steam", &steam)) {
			s.settings.launchViaSteam = steam;
			s.settings.Save();
		}
		if (GameInstall::IsGameRunning()) {
			ImGui::SameLine();
			ImGui::TextColored(kWarn, "game is running");
		}

		ImGui::Spacing();
		ImGui::SeparatorText("MDML mod loader");
		if (s.game.LoaderInstalled()) {
			std::string v = s.game.LoaderFileVersion();
			ImGui::TextColored(kGood, "Installed");
			if (!v.empty()) { ImGui::SameLine(); ImGui::Text("MDML %s", v.c_str()); }
			if (!s.settings.installedLoaderSource.empty()) {
				ImGui::SameLine();
				ImGui::TextDisabled("(last installed from %s)", s.settings.installedLoaderSource.c_str());
			}
		}
		else {
			ImGui::TextColored(kWarn, "Not installed (MDML.dll / xinput1_3.dll missing in Binaries/Win64)");
		}
		DrawLoaderBox();
	}

	void MainPanel::DrawLoaderBox() {
		State& s = m_state;
		ImGui::Spacing();
		ImGui::TextUnformatted("Install / update from:");
		int src = (int)s.source;
		bool changed = false;
		changed |= ImGui::RadioButton("Local build", &src, (int)LoaderSource::LocalBuild);
		ImGui::SameLine();
		changed |= ImGui::RadioButton("Zip file", &src, (int)LoaderSource::ZipFile);
		ImGui::SameLine();
		changed |= ImGui::RadioButton("GitHub release", &src, (int)LoaderSource::GitHub);
		if (changed) {
			s.source = (LoaderSource)src;
			s.preparedValid = false;
			if (s.source == LoaderSource::LocalBuild) s.RefreshLocalBuild();
		}

		ImGui::BeginDisabled(s.Busy());
		switch (s.source) {
		case LoaderSource::LocalBuild:
			if (s.localBuildFound) {
				ImGui::TextColored(kGood, "Build found:");
				ImGui::SameLine();
				ImGui::TextUnformatted(PathToUtf8(s.localBuild.root).c_str());
				if (!s.localBuild.version.empty()) ImGui::Text("MDML.dll version %s", s.localBuild.version.c_str());
			}
			else {
				ImGui::TextColored(kWarn, "No build found. Select the output folder of the MDML solution (contains MDML.dll).");
			}
			if (ImGui::Button("Select build folder...")) {
				fs::path p = PickFolder(L"MDML build output (contains MDML.dll)");
				if (!p.empty()) {
					s.settings.localBuildPath = PathToUtf8(p);
					s.settings.Save();
					s.RefreshLocalBuild();
				}
			}
			ImGui::SameLine();
			if (ImGui::Button("Rescan")) s.RefreshLocalBuild();
			if (s.localBuildFound) {
				ImGui::SameLine();
				if (ImGui::Button("Create release zip...")) {
					fs::path z = SaveFile(L"MDML-release.zip", L"zip", L"Save the release package");
					if (!z.empty()) s.CreateReleaseZip(z);
				}
				if (ImGui::IsItemHovered())
					ImGui::SetTooltip("Packs MDML.dll, the proxy, Config and BaseMod of this build into a zip you can publish.");
			}
			break;
		case LoaderSource::ZipFile:
			if (ImGui::Button("Select zip...")) {
				fs::path z = PickFile({ { L"Zip archives", L"*.zip" } }, L"MDML package");
				if (!z.empty()) s.PrepareLoaderFromZip(z);
			}
			break;
		case LoaderSource::GitHub:
			ImGui::TextColored(kWarn, "The published GitHub release is outdated and may not match the current loader.");
			ImGui::Text("Repository: %s/%s", s.settings.githubOwner.c_str(), s.settings.githubRepo.c_str());
			if (ImGui::Button("Check latest release")) s.CheckGitHub();
			if (s.releaseKnown) {
				ImGui::Text("%s  %s  (%s, %s)", s.release.tag.c_str(), s.release.name.c_str(), s.release.published.c_str(),
					FormatSize(s.release.assetSize).c_str());
				if (ImGui::Button("Download")) s.DownloadGitHubRelease();
			}
			break;
		}
		ImGui::EndDisabled();

		if (s.preparedValid) {
			ImGui::Spacing();
			ImGui::Text("Ready: %s%s%s", s.preparedLabel.c_str(), s.prepared.version.empty() ? "" : "  -  MDML ",
				s.prepared.version.c_str());
			if (!s.prepared.hasProxy) ImGui::TextColored(kWarn, "This package has no xinput1_3.dll proxy.");
			if (!s.prepared.mods.empty()) {
				ImGui::TextUnformatted("Mods to install with it:");
				for (size_t i = 0; i < s.prepared.mods.size(); i++) {
					bool v = s.preparedModSelected[i];
					if (ImGui::Checkbox(s.prepared.mods[i].c_str(), &v)) s.preparedModSelected[i] = v;
					if (i + 1 < s.prepared.mods.size()) ImGui::SameLine();
				}
			}
			ImGui::BeginDisabled(s.Busy() || !s.game.Valid());
			if (ImGui::Button("Install MDML", ImVec2(180, 0))) s.InstallLoader();
			ImGui::EndDisabled();
			ImGui::SameLine();
			ImGui::TextDisabled("Replaced files are backed up in %%LOCALAPPDATA%%\\MDML ModManager\\backups. Existing configs are kept.");
		}
	}

	// ------------------------------------------------------------ mods

	void MainPanel::DrawMods() {
		State& s = m_state;
		if (!s.game.Valid()) {
			ImGui::TextColored(kBad, "Set the game folder on the Dashboard first.");
			return;
		}
		if (ImGui::Button("Install mod from zip...")) {
			fs::path p = PickFile({ { L"Mod archives / DLL", L"*.zip;*.dll" } }, L"Install a mod");
			if (!p.empty()) s.RequestModInstall(p);
		}
		ImGui::SameLine();
		if (ImGui::Button("Install from folder...")) {
			fs::path p = PickFolder(L"Mod folder (contains mod.ini)");
			if (!p.empty()) s.RequestModInstall(p);
		}
		ImGui::SameLine();
		if (ImGui::Button("Refresh")) s.RefreshMods();
		ImGui::SameLine();
		if (ImGui::Button("Open Mods folder")) OpenInExplorer(s.game.ModsDir());
		ImGui::SameLine();
		ImGui::TextDisabled("Tip: drop a zip or folder on this window.");

		if (!s.game.LoaderInstalled())
			ImGui::TextColored(kWarn, "MDML is not installed, mods have no effect until it is.");
		if (!s.orderFileExists)
			ImGui::TextDisabled("LoadOrder.ini does not exist yet; it is created when you change something here (MDML also creates it on first start).");
		ImGui::TextDisabled("Top = loaded first. A disabled mod is skipped completely (DLL, logic and overwrites). Changes apply on the next game start.");
		ImGui::Spacing();

		bool changed = false;
		int moveFrom = -1, moveTo = -1;
		std::string remove;

		if (ImGui::BeginTable("##mods", 7, ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_ScrollY | ImGuiTableFlags_Resizable)) {
			ImGui::TableSetupScrollFreeze(0, 1);
			ImGui::TableSetupColumn("On", ImGuiTableColumnFlags_WidthFixed, 34);
			ImGui::TableSetupColumn("Order", ImGuiTableColumnFlags_WidthFixed, 66);
			ImGui::TableSetupColumn("Mod", ImGuiTableColumnFlags_WidthStretch, 2.0f);
			ImGui::TableSetupColumn("Type", ImGuiTableColumnFlags_WidthFixed, 130);
			ImGui::TableSetupColumn("Version", ImGuiTableColumnFlags_WidthFixed, 80);
			ImGui::TableSetupColumn("Size", ImGuiTableColumnFlags_WidthFixed, 80);
			ImGui::TableSetupColumn("##actions", ImGuiTableColumnFlags_WidthFixed, 80);
			ImGui::TableHeadersRow();

			auto& entries = s.order.Entries();
			for (int i = 0; i < (int)entries.size(); i++) {
				LoadOrderEntry& e = entries[i];
				const ModInfo* info = nullptr;
				for (const auto& m : s.mods)
					if (IEquals(m.name, e.name)) info = &m;

				ImGui::PushID(i);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				bool on = e.enabled;
				if (ImGui::Checkbox("##on", &on)) { e.enabled = on; changed = true; }

				ImGui::TableNextColumn();
				ImGui::BeginDisabled(i == 0);
				if (ImGui::ArrowButton("##up", ImGuiDir_Up)) { moveFrom = i; moveTo = i - 1; }
				ImGui::EndDisabled();
				ImGui::SameLine();
				ImGui::BeginDisabled(i + 1 >= (int)entries.size());
				if (ImGui::ArrowButton("##down", ImGuiDir_Down)) { moveFrom = i; moveTo = i + 1; }
				ImGui::EndDisabled();

				ImGui::TableNextColumn();
				if (!info) ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled));
				ImGui::TextUnformatted(e.name.c_str());
				if (!info) {
					ImGui::PopStyleColor();
					if (ImGui::IsItemHovered()) ImGui::SetTooltip("Listed in LoadOrder.ini but not installed");
				}
				else if (!info->description.empty()) {
					ImGui::TextDisabled("%s", info->description.c_str());
				}

				ImGui::TableNextColumn();
				if (info) ImGui::TextUnformatted(DescribeKinds(*info).c_str());
				else ImGui::TextDisabled("missing");
				ImGui::TableNextColumn();
				if (info) ImGui::TextUnformatted(info->version.c_str());
				ImGui::TableNextColumn();
				if (info) ImGui::TextUnformatted(FormatSize(info->sizeBytes).c_str());
				ImGui::TableNextColumn();
				if (info && ImGui::SmallButton("Remove")) ImGui::OpenPopup("##confirmremove");
				if (ImGui::BeginPopup("##confirmremove")) {
					ImGui::Text("Move '%s' to the recycle bin?", e.name.c_str());
					if (ImGui::Button("Remove")) { remove = e.name; ImGui::CloseCurrentPopup(); }
					ImGui::SameLine();
					if (ImGui::Button("Cancel")) ImGui::CloseCurrentPopup();
					ImGui::EndPopup();
				}
				ImGui::PopID();
			}
			ImGui::EndTable();
		}

		if (moveFrom >= 0) {
			s.order.Move(moveFrom, moveTo);
			changed = true;
		}
		if (changed) s.SaveLoadOrder();
		if (!remove.empty()) s.RemoveMod(remove);
	}

	void MainPanel::DrawPendingInstall() {
		State& s = m_state;
		if (s.hasPending && !ImGui::IsPopupOpen("Install mod")) ImGui::OpenPopup("Install mod");

		const ImGuiViewport* vp = ImGui::GetMainViewport();
		ImGui::SetNextWindowPos(vp->GetCenter(), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
		ImGui::SetNextWindowSizeConstraints(ImVec2(420, 0), ImVec2(900, 600));
		if (ImGui::BeginPopupModal("Install mod", nullptr, ImGuiWindowFlags_AlwaysAutoResize)) {
			if (!s.hasPending) {
				ImGui::CloseCurrentPopup();
			}
			else {
				ImGui::TextUnformatted("The following mods will be installed into Content/Mods:");
				for (size_t i = 0; i < s.pending.candidates.size(); i++) {
					bool v = s.pending.selected[i];
					if (ImGui::Checkbox(s.pending.candidates[i].name.c_str(), &v)) s.pending.selected[i] = v;
					if (s.pending.exists[i]) {
						ImGui::SameLine();
						ImGui::TextColored(kWarn, "replaces the installed version (old one is backed up)");
					}
				}
				ImGui::Spacing();
				if (ImGui::Button("Install", ImVec2(120, 0))) {
					s.ConfirmModInstall();
					ImGui::CloseCurrentPopup();
				}
				ImGui::SameLine();
				if (ImGui::Button("Cancel", ImVec2(120, 0))) {
					s.CancelModInstall();
					ImGui::CloseCurrentPopup();
				}
			}
			ImGui::EndPopup();
		}
	}

	// ------------------------------------------------------------ configs

	void MainPanel::RescanConfigs() {
		State& s = m_state;
		m_configs.clear();
		m_configSelected = -1;
		m_dirty = false;
		m_configsScanned = true;
		if (!s.game.Valid()) return;

		std::error_code ec;
		if (fs::is_directory(s.game.ConfigDir(), ec)) {
			for (const auto& e : fs::directory_iterator(s.game.ConfigDir(), ec))
				if (e.is_regular_file(ec) && Lower(PathToUtf8(e.path().extension())) == ".ini")
					m_configs.push_back({ e.path(), "Loader: " + PathToUtf8(e.path().filename()) });
		}
		for (const auto& m : s.mods) {
			for (const auto& e : fs::directory_iterator(m.path, ec))
				if (e.is_regular_file(ec) && Lower(PathToUtf8(e.path().extension())) == ".ini")
					m_configs.push_back({ e.path(), m.name + ": " + PathToUtf8(e.path().filename()) });
		}
	}

	void MainPanel::OpenConfig(int index) {
		m_configSelected = index;
		m_dirty = false;
		m_doc = IniDocument();
		m_raw.clear();
		if (index < 0 || index >= (int)m_configs.size()) return;
		m_doc.Load(m_configs[index].path);
		ReadTextFile(m_configs[index].path, m_raw);
	}

	void MainPanel::SaveConfig() {
		if (m_configSelected < 0) return;
		const fs::path& p = m_configs[m_configSelected].path;
		bool ok = m_rawMode ? WriteTextFile(p, m_raw) : m_doc.Save(p);
		if (ok) {
			Log::Info("Saved " + PathToUtf8(p));
			if (GameInstall::IsGameRunning()) Log::Warn("The game is running: most settings are read at startup.");
			m_dirty = false;
			OpenConfig(m_configSelected);
		}
		else {
			Log::Error("Could not write " + PathToUtf8(p));
		}
	}

	void MainPanel::DrawConfigs() {
		State& s = m_state;
		if (!s.game.Valid()) {
			ImGui::TextColored(kBad, "Set the game folder on the Dashboard first.");
			return;
		}
		if (!m_configsScanned) RescanConfigs();

		ImGui::BeginChild("##cfglist", ImVec2(260, 0), true);
		if (ImGui::Button("Rescan")) RescanConfigs();
		ImGui::Separator();
		for (int i = 0; i < (int)m_configs.size(); i++) {
			if (ImGui::Selectable(m_configs[i].label.c_str(), i == m_configSelected) && i != m_configSelected)
				OpenConfig(i);
		}
		if (m_configs.empty()) ImGui::TextDisabled("No .ini files found.");
		ImGui::EndChild();
		ImGui::SameLine();

		ImGui::BeginChild("##cfgedit", ImVec2(0, 0), true);
		if (m_configSelected < 0) {
			ImGui::TextDisabled("Select a file on the left.");
			ImGui::EndChild();
			return;
		}
		ImGui::TextUnformatted(PathToUtf8(m_configs[m_configSelected].path).c_str());
		ImGui::BeginDisabled(!m_dirty);
		if (ImGui::Button("Save")) SaveConfig();
		ImGui::EndDisabled();
		ImGui::SameLine();
		if (ImGui::Button("Reload")) OpenConfig(m_configSelected);
		ImGui::SameLine();
		bool raw = m_rawMode;
		if (ImGui::Checkbox("Text view", &raw)) {
			if (!raw && m_dirty && m_rawMode) { m_doc.LoadFromString(m_raw); }
			if (raw && m_dirty && !m_rawMode) { m_raw = m_doc.ToString(); }
			m_rawMode = raw;
		}
		if (m_dirty) { ImGui::SameLine(); ImGui::TextColored(kWarn, "unsaved changes"); }
		ImGui::Separator();

		if (m_rawMode) {
			if (ImGui::InputTextMultiline("##raw", &m_raw, ImVec2(-1, -1))) m_dirty = true;
		}
		else {
			ImGui::BeginChild("##items");
			for (const auto& sec : m_doc.Sections()) {
				if (!ImGui::CollapsingHeader(sec.c_str(), ImGuiTreeNodeFlags_DefaultOpen)) continue;
				ImGui::PushID(sec.c_str());
				if (ImGui::BeginTable("##kv", 2, ImGuiTableFlags_SizingStretchProp)) {
					ImGui::TableSetupColumn("k", ImGuiTableColumnFlags_WidthFixed, 260);
					ImGui::TableSetupColumn("v", ImGuiTableColumnFlags_WidthStretch);
					for (const auto& it : m_doc.Items(sec)) {
						ImGui::PushID(it.key.c_str());
						ImGui::TableNextRow();
						ImGui::TableNextColumn();
						ImGui::AlignTextToFramePadding();
						ImGui::TextUnformatted(it.key.c_str());
						if (!it.comment.empty() && ImGui::IsItemHovered()) ImGui::SetTooltip("%s", it.comment.c_str());
						ImGui::TableNextColumn();
						bool bv, numeric, upper;
						ImGui::SetNextItemWidth(-1);
						if (LooksBool(it.value, bv, numeric, upper)) {
							if (ImGui::Checkbox("##v", &bv)) {
								m_doc.Set(sec, it.key, BoolText(it.value, bv, numeric, upper));
								m_dirty = true;
							}
						}
						else {
							std::string v = it.value;
							if (ImGui::InputText("##v", &v)) {
								m_doc.Set(sec, it.key, v);
								m_dirty = true;
							}
						}
						ImGui::PopID();
					}
					ImGui::EndTable();
				}
				ImGui::PopID();
			}
			ImGui::EndChild();
		}
		ImGui::EndChild();
	}

	// ------------------------------------------------------------ log + status

	void MainPanel::DrawLog() {
		if (ImGui::Button("Clear")) Log::Clear();
		ImGui::SameLine();
		ImGui::Checkbox("Auto scroll", &m_logAutoScroll);
		ImGui::Separator();
		ImGui::BeginChild("##log", ImVec2(0, 0), true, ImGuiWindowFlags_HorizontalScrollbar);
		for (const auto& l : Log::Snapshot()) {
			ImVec4 c = l.level == Log::Level::Error ? kBad : l.level == Log::Level::Warn ? kWarn : ImGui::GetStyleColorVec4(ImGuiCol_Text);
			ImGui::TextColored(c, "%s", l.text.c_str());
		}
		if (m_logAutoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY() - 4.0f) ImGui::SetScrollHereY(1.0f);
		ImGui::EndChild();
	}

	void MainPanel::DrawStatusBar() {
		State& s = m_state;
		ImGui::Separator();
		if (s.Busy()) {
			float p = s.Progress();
			ImGui::ProgressBar(p < 0 ? (float)(-std::fmod(ImGui::GetTime(), 1.0)) : p, ImVec2(180, 0), p < 0 ? "..." : nullptr);
			ImGui::SameLine();
			ImGui::TextUnformatted(s.StatusText().c_str());
			ImGui::SameLine();
			if (ImGui::SmallButton("Cancel")) s.Cancel();
		}
		else {
			auto lines = Log::Snapshot();
			if (!lines.empty()) {
				const auto& l = lines.back();
				ImVec4 c = l.level == Log::Level::Error ? kBad : l.level == Log::Level::Warn ? kWarn : ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled);
				ImGui::TextColored(c, "%s", l.text.c_str());
			}
			else {
				ImGui::TextDisabled("Ready");
			}
		}
	}
}
