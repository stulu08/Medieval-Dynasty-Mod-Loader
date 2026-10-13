#pragma once
#include "ContentView.h"

class HomeView : public ContentView {
public:
	HomeView();
	virtual ~HomeView();

	virtual void Render() override;

	VIEW_IMPL_NAME();
private:
};