#include "MenuView.h"

#include <filesystem>

#include <regex>

MenuView::MenuView()
{
}

MenuView::~MenuView()
{
}

Settings* settings;


void MenuView::Render() {
	if (ImGui::Selectable("Home", false, ImGuiSelectableFlags_SpanAllColumns)) {

	}
	if (ImGui::Selectable("Mods", false, ImGuiSelectableFlags_SpanAllColumns)) {

	}
	if (ImGui::Selectable("Settings", false, ImGuiSelectableFlags_SpanAllColumns)) {
		ImGui::OpenPopup("Settings");
		settings = new Settings();
	}

	if (settings) {
		const auto viewport = ImGui::GetMainViewport();
		const auto wSize = viewport->Size;
		const auto wPos = viewport->Pos;

		const ImVec2 targetSize = ImVec2(wSize.x / 2.0f, wSize.y / 2.0f);
		const ImVec2 targetPos = ImVec2(
			wPos.x + (wSize.x - targetSize.x) / 2.0f,
			wPos.y + (wSize.y - targetSize.y) / 2.0f
		);

		ImGui::SetNextWindowSize(targetSize);
		ImGui::SetNextWindowPos(targetPos);

		if (ImGui::BeginPopupModal("Settings", 0, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize)) {

			ImGui::InputTextWithHint("##GamePathEdit", "Medieval Dynasty directory", &settings->gamePath);
			ImGui::SameLine();
			if (ImGui::Button("Detect")) {
				DetectGame(settings);
			}

			ImGui::Spacing();
			ImGui::Separator();

			if (ImGui::Button("Close")) {
				delete settings;
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}
	}

}

ImVec2 MenuView::GetSize(ImGuiViewport* viewport) const {
	const float width = viewport->Size.x;
	const float height = viewport->Size.y;
	const float margin = ImGui::GetStyle().ItemSpacing.x;
	return ImVec2(width / 8.0f, height - (margin * 2.0f));
}

void MenuView::DetectGame(Settings* settings) {
	std::string result;

	std::ifstream libraryFile("C:/Program Files (x86)/Steam/steamapps/libraryfolders.vdf");
	if (libraryFile.is_open()) {

		std::string currentPath;
		std::string line;
		std::regex pathRegex(R"("path"\s+"(.+?)\")");
		std::regex appRegex(R"("1129580"\s+"(\d)+")");

		while (std::getline(libraryFile, line))
		{
			std::smatch match;
			if (std::regex_search(line, match, pathRegex))
			{
				currentPath = match[1].str();
			}
			else if (std::regex_search(line, match, appRegex))
			{
				std::string path = currentPath + "/steamapps/common/Medieval Dynasty";
				std::transform(path.begin(), path.end(), path.begin(), [](char c) { return c == '\\' ? '/' : c; });

				if (path[3] == '/') {
					path.erase(3, 1);
				}

				if (std::filesystem::exists(path + "/Medieval_Dynasty.exe")) {
					result = path;
				}
			}
		}

		libraryFile.close();
	}
	else {
		std::cout << "Could not open libraryfolders.vdf\n";
	}
	if (result.empty())
		std::cout << "Not able to find Medieval Dynasty\n";
	else
		settings->gamePath = result;
}
