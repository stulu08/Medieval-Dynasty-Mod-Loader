#pragma once
#include "Core.h"

// The loader's F1 window ("MDML"): version lines, notices (persistent ones prominently on top, transient ones such as
// "dump written to ..." below), logic / core / overwrite mod lists and the tools (dumps, console command).
//
// Threading: Draw() runs on the render thread (D3D11 Present). Nothing in here calls into the engine directly; every
// action that touches UObjects (mod buttons, dumps, console command) is queued with
// mdml::runtime::GameThread::Enqueue and runs inside the UWorld::Tick hook.
namespace mdml::ui {
	class LoaderWindow {
	public:
		static void Draw();
	};
}
