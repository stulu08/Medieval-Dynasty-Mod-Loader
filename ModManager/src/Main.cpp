#include "Application.h"


int MainEntry(int argc, char** argv, void* handel) {
	Application* app = new Application(handel);

	app->Run();

	delete app;

	return 0;
}

#ifdef _WIN32
#include <Windows.h>
int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow) {
	return MainEntry(__argc, __argv, hInst);
}
#endif //_WIN32