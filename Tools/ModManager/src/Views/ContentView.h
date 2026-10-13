#pragma once
#include <vector>
#include "View.h"

class ContentView : public View {
public:
	ContentView();
	virtual ~ContentView() = default;

	virtual ImVec2 GetSize(ImGuiViewport* viewport) const override;

	inline virtual bool Enabled() const override {
		return m_index == s_activeIndex;
	}
	inline void SetActive() const {
		s_activeIndex = m_index;
	}

private:
	static uint32_t s_activeIndex;
	static uint32_t s_counter;
	uint32_t m_index;
};