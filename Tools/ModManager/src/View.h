#pragma once
#include "imgui/imgui.h"
#include "imgui/imgui_stdlib.h"

#include <typeinfo>

#define VIEW_IMPL_NAME() inline virtual const char* GetName() const override { return typeid(decltype(*this)).name(); }

class View {
public:
	virtual ~View() = default;

	virtual void Render() = 0;
	virtual ImVec2 GetSize(ImGuiViewport* viewport) const = 0;
	virtual bool Enabled() const = 0;
	virtual const char* GetName() const = 0;
};