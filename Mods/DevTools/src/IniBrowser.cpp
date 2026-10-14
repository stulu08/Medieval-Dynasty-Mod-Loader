#include "IniBrowser.h"

#include "Runtime/LoaderConfig.h"
#include "Runtime/Paths.h"
#include "UI/LoaderUI.h"
#include "Util.h"

#include <fstream>
#include <sstream>
#include <system_error>

namespace devtools {
	IniBrowser::IniBrowser() {
		m_editor.SetLanguageDefinition(TextEditor::LanguageDefinition::INI());
		m_editor.SetImGuiChildIgnored(true);
		m_editor.SetShowWhitespaces(false);
		TextEditor::Palette p = { {
			0xff253df5,	// Key
			0xffd69c56,
			0xffbababa,	// Value
			0xff7070e0,
			0xff70a0e0,
			0xfff73636, // Equal
			0xff408080,
			0xffb216f5, // Section
			0xff9bc64d,
			0xffc040a0,
			0xff206020, // Comment
			0xff406020, // Comment (multi line)
			0xff101010, // Background
			0xffe0e0e0, // Cursor
			0x80a06020, // Selection
			0x800020ff, // ErrorMarker
			0x40f08000, // Breakpoint
			0xff707000, // Line number
			0x40000000, // Current line fill
			0x40808080, // Current line fill (inactive)
			0x40a0a0a0, // Current line edge
		} };
		m_editor.SetPalette(p);
	}

	void IniBrowser::Rescan() {
		m_groups.clear();
		std::error_code ec;
		auto collect = [&ec](const std::filesystem::path& dir, bool recursive) {
			std::vector<std::filesystem::path> files;
			if (!std::filesystem::is_directory(dir, ec))
				return files;
			if (recursive) {
				for (auto it = std::filesystem::recursive_directory_iterator(dir, ec); !ec && it != std::filesystem::recursive_directory_iterator(); it.increment(ec)) {
					if (it->path().extension() == ".ini")
						files.push_back(it->path());
				}
			}
			else {
				for (auto it = std::filesystem::directory_iterator(dir, ec); !ec && it != std::filesystem::directory_iterator(); it.increment(ec)) {
					if (it->path().extension() == ".ini")
						files.push_back(it->path());
				}
			}
			return files;
		};
		m_groups.push_back({ "Mods", collect(::Mod::GetModsFolder(), true) });
		m_groups.push_back({ "WindowsNoEditor", collect(std::filesystem::path(mdml::runtime::GetDataFolder()) / "Config" / "WindowsNoEditor", false) });
		m_groups.push_back({ "MDML", collect(std::filesystem::path(mdml::runtime::Config.ImGuiFile).parent_path(), false) });
		m_scanned = true;
	}

	void IniBrowser::SaveCurrent() {
		if (!m_currentPath.empty())
			util::SaveString(m_editor.GetText(), m_currentPath.string());
	}

	void IniBrowser::OpenFile(const std::filesystem::path& path) {
		if (!std::filesystem::exists(path))
			return;
		if (m_saveOnOpen)
			SaveCurrent();
		m_currentPath = path;
		std::ifstream t(path);
		std::stringstream buffer;
		buffer << t.rdbuf();
		m_editor.SetText(buffer.str());
	}

	void IniBrowser::Draw() {
		if (m_showBrowser) {
			if (!m_scanned)
				Rescan();
			if (ImGui::Begin("INI Browser", &m_showBrowser)) {
				if (ImGui::Button("Rescan"))
					Rescan();
				for (const auto& group : m_groups) {
					if (ImGui::TreeNodeEx(group.title.c_str(), DEFAULT_TREE_NODE_FLAGS)) {
						for (const auto& file : group.files) {
							const std::string label = group.title == "WindowsNoEditor" ? file.string() : mdml::runtime::FormatPath(file);
							if (ImGui::Button(label.c_str()))
								OpenFile(file);
						}
						ImGui::TreePop();
					}
				}
				ImGui::Text("File: %s", m_currentPath.string().c_str());
				if (ImGui::Button("Save")) {
					SaveCurrent();
				}
				ImGui::SameLine();
				ImGui::Checkbox("Save when opening a new file", &m_saveOnOpen);
			}
			ImGui::End();
		}
		if (m_showEditor) {
			if (ImGui::Begin("INI Editor", &m_showEditor)) {
				ImVec2 size = ImGui::GetContentRegionAvail();
				size.y = glm::max(size.y, 250.0f);
				m_editor.Render("Editor", size, true);
			}
			ImGui::End();
		}
	}
}
