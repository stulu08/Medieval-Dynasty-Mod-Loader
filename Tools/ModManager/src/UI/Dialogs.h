#pragma once
// Unicode safe native dialogs (SDG's Platform::openFile/browseFolder are ANSI only).
#include <ModManager/Util.h>

namespace mmui {
	// filter pairs like { L"Zip archives", L"*.zip" }; returns an empty path when cancelled
	mm::fs::path PickFile(const std::vector<std::pair<std::wstring, std::wstring>>& filter, const wchar_t* title);
	mm::fs::path PickFolder(const wchar_t* title);
	mm::fs::path SaveFile(const wchar_t* defaultName, const wchar_t* ext, const wchar_t* title);
	void OpenInExplorer(const mm::fs::path& path);
}
