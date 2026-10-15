#include "DevTools.h"

#include "MDML/GameThread.h"
#include "MDML/Log.h"
#include "MDML/UI/Widgets.h"

#include "Generator/SdkGenerator.h"
#include "Util.h"

#include <algorithm>
#include <sstream>

namespace devtools {
	namespace {
		constexpr size_t MaxLogLines = 400;

		std::string Trim(const std::string& Text) {
			const size_t First = Text.find_first_not_of(" \t\r\n");
			if (First == std::string::npos)
				return {};
			return Text.substr(First, Text.find_last_not_of(" \t\r\n") - First + 1);
		}

		// sdkgen::EnumDisplayNamesCallback: the designer-given names of a Blueprint enum (UUserDefinedEnum display
		// names), keyed by value. Runs on the game thread inside the generation job.
		std::vector<std::pair<uint64_t, std::string>> UserEnumDisplayNames(const void* RawEnum) {
			std::vector<std::pair<uint64_t, std::string>> Result;
			auto* Enum = static_cast<const UE4::UEnum*>(RawEnum);
			if (!UE4::IsUserDefinedEnum(Enum))
				return Result;
			auto Names = Enum->GetNames();
			for (int32_t i = 0; i < Names.Num(); ++i) {
				UE4::FText Display = UE4::GetUserDefinedEnumDisplayNameText(Enum, i);
				std::string Text = Display.ToString();
				Display.Release(); // the FText returned by value holds one reference
				if (!Text.empty())
					Result.emplace_back(Names[i].Value, std::move(Text));
			}
			return Result;
		}
	}

	DevToolsMod::DevToolsMod() {
		// Name, version, author and the menu button come from mod.ini ([Mod], [Core] MenuButton=1).
		s_instance = this;
	}

	void DevToolsMod::InitializeMod() {
		// GUI events + InitGameState (drops the object snapshot and finds the player on a level change).
		SetupHooks(EventsEnabled::EnabledEvents(true, false, false, false, true, true, false, false));
		mdml::platform::IniFile Ini(std::filesystem::path(GetFolder()) / "mod.ini");
		m_outputRoot = ResolveOutputRoot(Ini.Get("Config", "SDKOutputDir", ""));
		m_objectBrowser.SetListFolder(GetFolder());
		RescanExportLists();
		AddLog("DevTools ready. SDK output folder: " + GetOutputRoot().string());
		m_playerTools.Init(Ini);
	}

	bool DevToolsMod::InitGameState() {
		m_objectBrowser.Invalidate();
		m_playerTools.OnGameState();
		return false;
	}

	void DevToolsMod::OnModMenuButtonPressed() {
		m_showWindow = !m_showWindow;
	}

	std::filesystem::path DevToolsMod::ResolveOutputRoot(const std::string& Configured) {
		// Default next to MDML.dll (Binaries/Win64); a relative SDKOutputDir is relative to that folder, never to the
		// working directory.
		if (Configured.empty())
			return util::MdmlFolder() / "SDK-Out";
		std::filesystem::path Dir(std::u8string(Configured.begin(), Configured.end()));
		if (Dir.is_relative())
			Dir = util::MdmlFolder() / Dir;
		return Dir.lexically_normal();
	}

	void DevToolsMod::AddLog(const std::string& Line, bool bError) {
		{
			std::lock_guard<std::mutex> Lock(m_mutex);
			m_log.emplace_back(bError, Line);
			while (m_log.size() > MaxLogLines)
				m_log.pop_front();
		}
		if (logger) {
			if (bError)
				logger->Error(Line);
			else
				logger->Info(Line);
		}
	}

	void DevToolsMod::RescanExportLists() {
		m_exportLists = FindExportLists(::CoreMod::GetModsFolder());
		m_exportListSelected.assign(m_exportLists.size(), false);
	}

	std::vector<std::string> DevToolsMod::CollectSelectedPackages() const {
		std::vector<std::string> Packages;
		auto Add = [&Packages](const std::string& Name) {
			if (!Name.empty() && std::find(Packages.begin(), Packages.end(), Name) == Packages.end())
				Packages.push_back(Name);
		};
		for (size_t i = 0; i < m_exportLists.size(); ++i) {
			if (m_exportListSelected[i]) {
				for (const auto& Package : m_exportLists[i].Packages)
					Add(Package);
			}
		}
		for (const auto& Package : ParseExportList(m_extraPackages))
			Add(Package);
		for (const auto& Package : m_pickedPackages)
			Add(Package);
		return Packages;
	}

	void DevToolsMod::StartAnalysis() {
		const EJobState State = m_jobState.load();
		if (State == EJobState::Queued || State == EJobState::Running)
			return;
		m_jobState = EJobState::Queued;
		AddLog("Analysis queued for the game thread (the game freezes while Dumper-7 runs).");
		// Dumper-7 walks GObjects/GNames and calls ProcessEvent: game thread only.
		mdml::runtime::GameThread::Enqueue([this]() {
			m_jobState = EJobState::Running;
			std::string Error;
			auto Log = [this](sdkgen::ELogLevel Level, const std::string& Message) { AddLog(Message, Level == sdkgen::ELogLevel::Error); };
			if (sdkgen::EnsureAnalysis(Log, Error)) {
				auto Names = sdkgen::GetPackageNames();
				AddLog("Analysis ready: " + std::to_string(Names.size()) + " packages.");
				std::lock_guard<std::mutex> Lock(m_mutex);
				m_packageNames = std::move(Names);
				m_jobState = EJobState::Done;
			}
			else {
				AddLog(Error, true);
				m_jobState = EJobState::Failed;
			}
		});
	}

	void DevToolsMod::StartGeneration() {
		sdkgen::GenerateRequest Request;
		Request.OutputRoot = GetOutputRoot();
		Request.bAllPackages = m_allPackages;
		Request.Packages = CollectSelectedPackages();
		Request.EnumDisplayNames = &UserEnumDisplayNames;
		if (!Request.bAllPackages && Request.Packages.empty()) {
			AddLog("Nothing selected: tick an export list, pick packages or type package names.", true);
			return;
		}

		EJobState State = m_jobState.load();
		if (State == EJobState::Queued || State == EJobState::Running)
			return;
		m_jobState = EJobState::Queued;

		std::ostringstream Summary;
		Summary << "Generation queued: " << (Request.bAllPackages ? std::string("all packages") : std::to_string(Request.Packages.size()) + " package(s)")
			<< " -> " << Request.OutputRoot.string();
		AddLog(Summary.str());

		mdml::runtime::GameThread::Enqueue([this, Request]() {
			m_jobState = EJobState::Running;
			auto Log = [this](sdkgen::ELogLevel Level, const std::string& Message) { AddLog(Message, Level == sdkgen::ELogLevel::Error); };
			sdkgen::GenerateResult Result = sdkgen::Generate(Request, Log);

			std::ostringstream Text;
			if (Result.bSuccess) {
				Text << "SDK generated in " << Result.Seconds << " s: " << Result.GeneratedPackages.size() << " header(s), "
					<< Result.NumClasses << " classes, " << Result.NumStructs << " structs, " << Result.NumEnums << " enums, "
					<< Result.NumFunctions << " functions (" << Result.NumSkippedFunctions << " skipped), "
					<< Result.NumOpaqueMembers << " opaque members -> " << Result.SdkFolder.string();
			}
			else {
				Text << "SDK generation failed: " << Result.Error;
			}
			for (const auto& Missing : Result.MissingPackages)
				AddLog("Package not found in the running game: " + Missing, true);
			AddLog(Text.str(), !Result.bSuccess);

			auto Names = sdkgen::GetPackageNames();
			std::lock_guard<std::mutex> Lock(m_mutex);
			m_lastResult = Text.str();
			if (!Names.empty())
				m_packageNames = std::move(Names);
			m_jobState = Result.bSuccess ? EJobState::Done : EJobState::Failed;
		});
	}

	bool DevToolsMod::DrawImGui() {
		// The tool windows are independent of the main DevTools window (opened from its "Views" menu).
		m_objectBrowser.Draw();
		m_iniBrowser.Draw();

		if (!m_showWindow)
			return false;
		ImGui::SetNextWindowSize(ImVec2(760, 640), ImGuiCond_FirstUseEver);
		if (ImGui::Begin("DevTools", &m_showWindow, ImGuiWindowFlags_MenuBar)) {
			if (ImGui::BeginMenuBar()) {
				if (ImGui::BeginMenu("Views")) {
					if (ImGui::MenuItem("Object Browser (+ legacy exporter)", "", m_objectBrowser.Open()))
						m_objectBrowser.Open() = !m_objectBrowser.Open();
					if (ImGui::MenuItem("INI Browser", "", m_iniBrowser.BrowserOpen()))
						m_iniBrowser.BrowserOpen() = !m_iniBrowser.BrowserOpen();
					if (ImGui::MenuItem("INI Editor", "", m_iniBrowser.EditorOpen()))
						m_iniBrowser.EditorOpen() = !m_iniBrowser.EditorOpen();
					ImGui::EndMenu();
				}
				ImGui::EndMenuBar();
			}
			if (ImGui::CollapsingHeader("SDK generator", ImGuiTreeNodeFlags_DefaultOpen))
				DrawSdkGenerator();
			if (ImGui::CollapsingHeader("Player and cheats"))
				m_playerTools.Draw();
			DrawLog();
		}
		ImGui::End();
		return false;
	}

	void DevToolsMod::DrawSdkGenerator() {
		const EJobState State = m_jobState.load();
		const bool bBusy = State == EJobState::Queued || State == EJobState::Running;

		ImGui::TextWrapped("Generates one header per package for the MDML core (Dumper-7 analysis + MDML backend). "
			"Runs on the game thread: the game freezes until it is done. Load a save first so Blueprint classes are loaded; "
			"the analysis is taken once per game session.");
		ImGui::Text("Output: %s", GetOutputRoot().string().c_str());

		// export lists
		ImGui::Separator();
		ImGui::Text("Export lists (Content/Mods/<Mod>/*.export)");
		ImGui::SameLine();
		if (ImGui::SmallButton("Rescan"))
			RescanExportLists();
		if (m_exportLists.empty())
			ImGui::TextDisabled("none found");
		for (size_t i = 0; i < m_exportLists.size(); ++i) {
			const ExportList& List = m_exportLists[i];
			bool bSelected = m_exportListSelected[i];
			std::string Label = List.ModName + "/" + List.File.filename().string() + " (" + std::to_string(List.Packages.size()) + " packages)##exportlist" + std::to_string(i);
			if (ImGui::Checkbox(Label.c_str(), &bSelected))
				m_exportListSelected[i] = bSelected;
			if (!List.Error.empty()) {
				ImGui::SameLine();
				ImGui::TextColored(ImVec4(1, 0.4f, 0.4f, 1), "%s", List.Error.c_str());
			}
		}

		ImGui::Separator();
		ImGui::InputText("Extra packages", &m_extraPackages);
		ImGui::SameLine();
		ImGui::TextDisabled("(space/comma separated)");
		ImGui::Checkbox("All packages (slow, thousands of headers)", &m_allPackages);

		// package picker from the analysis
		std::vector<std::string> Names;
		{
			std::lock_guard<std::mutex> Lock(m_mutex);
			Names = m_packageNames;
		}
		if (ImGui::TreeNode("Package picker")) {
			if (Names.empty()) {
				ImGui::TextDisabled("Run the analysis to list the packages of the running game.");
				if (bBusy)
					ImGui::BeginDisabled();
				if (ImGui::Button("Analyze (list packages)"))
					StartAnalysis();
				if (bBusy)
					ImGui::EndDisabled();
			}
			else {
				ImGui::InputText("Filter", &m_packageFilter);
				ImGui::SameLine();
				if (ImGui::SmallButton("Clear picks"))
					m_pickedPackages.clear();
				ImGui::BeginChild("##packages", ImVec2(0, 180), true);
				for (const auto& Name : Names) {
					if (!m_packageFilter.empty() && Name.find(m_packageFilter) == std::string::npos)
						continue;
					bool bPicked = m_pickedPackages.count(Name) != 0;
					if (ImGui::Checkbox(Name.c_str(), &bPicked)) {
						if (bPicked)
							m_pickedPackages.insert(Name);
						else
							m_pickedPackages.erase(Name);
					}
				}
				ImGui::EndChild();
				ImGui::InputText("List name", &m_saveListName);
				ImGui::SameLine();
				if (ImGui::Button("Save selection as export list")) {
					std::string Error;
					std::string FileName = Trim(m_saveListName);
					if (FileName.empty())
						FileName = "Selection";
					const auto File = std::filesystem::path(GetFolder()) / (FileName + ".export");
					if (SaveExportList(File, CollectSelectedPackages(), Error))
						AddLog("Saved " + File.string());
					else
						AddLog(Error, true);
					RescanExportLists();
				}
			}
			ImGui::TreePop();
		}

		ImGui::Separator();
		const auto Selected = CollectSelectedPackages();
		ImGui::Text("Selected: %s", m_allPackages ? "all packages" : (std::to_string(Selected.size()) + " package(s) + dependencies").c_str());
		if (bBusy)
			ImGui::BeginDisabled();
		if (ImGui::Button("Generate SDK"))
			StartGeneration();
		if (bBusy)
			ImGui::EndDisabled();
		ImGui::SameLine();
		const char* StateText = State == EJobState::Idle ? "idle" : State == EJobState::Queued ? "queued for the game thread"
			: State == EJobState::Running ? "running (game paused)" : State == EJobState::Done ? "done" : "failed";
		ImGui::Text("Status: %s", StateText);

	}

	void DevToolsMod::DrawLog() {
		ImGui::Separator();
		ImGui::TextUnformatted("Log");
		ImGui::BeginChild("##devtoolslog", ImVec2(0, 160), true, ImGuiWindowFlags_HorizontalScrollbar);
		{
			std::lock_guard<std::mutex> Lock(m_mutex);
			for (const auto& [bError, Line] : m_log) {
				if (bError)
					ImGui::TextColored(ImVec4(1, 0.4f, 0.4f, 1), "%s", Line.c_str());
				else
					ImGui::TextUnformatted(Line.c_str());
			}
		}
		if (ImGui::GetScrollY() >= ImGui::GetScrollMaxY())
			ImGui::SetScrollHereY(1.0f);
		ImGui::EndChild();
	}
}
