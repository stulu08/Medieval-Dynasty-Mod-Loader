#pragma once
#include "View.h"
#include "Application.h"

class MenuView : public View {
public:
	MenuView();
	virtual ~MenuView();

	virtual void Render() override;

	virtual ImVec2 GetSize(ImGuiViewport* viewport) const override;
	inline virtual bool Enabled() const override {
		return true;
	}
	
	static void DetectGame(Settings* settings);

	VIEW_IMPL_NAME();
private:
};