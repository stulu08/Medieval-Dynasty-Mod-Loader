#include "ContentView.h"
#include "Application.h"
#include "MenuView.h"

uint32_t ContentView::s_activeIndex = 0;
uint32_t ContentView::s_counter = 0;

ContentView::ContentView() {
	m_index = s_counter++;
}

ImVec2 ContentView::GetSize(ImGuiViewport* viewport) const {
	const float margin = ImGui::GetStyle().ItemSpacing.x;
	const float width = viewport->Size.x;
	auto menu = Application::Get()->GetView<MenuView>();
	ImVec2 menuSize = menu->GetSize(viewport);
	return ImVec2(width - menuSize.x - (margin * 3.0f), menuSize.y);
}
