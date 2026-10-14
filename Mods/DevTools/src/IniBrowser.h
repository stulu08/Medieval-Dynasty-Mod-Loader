#pragma once
// INI browser + INI editor, moved from BaseMod (BaseMod.cpp ShowINIBrowser) in Wave 3C. Pure file/ImGui code: no UE
// calls, so it is safe on the render thread.
#include "MDML/MDML.h"

#include "MDML/UI/TextEditor.h"

#include <filesystem>
#include <string>
#include <vector>

namespace devtools {
	class IniBrowser {
	public:
		IniBrowser();
		bool& BrowserOpen() { return m_showBrowser; }
		bool& EditorOpen() { return m_showEditor; }
		void Draw(); // render thread

	private:
		struct Group {
			std::string title;
			std::vector<std::filesystem::path> files;
		};
		void Rescan();
		void OpenFile(const std::filesystem::path& path);
		void SaveCurrent();

		TextEditor m_editor;
		std::vector<Group> m_groups;
		bool m_scanned = false;
		bool m_showBrowser = false;
		bool m_showEditor = false;
		bool m_saveOnOpen = true;
		std::filesystem::path m_currentPath;
	};
}
