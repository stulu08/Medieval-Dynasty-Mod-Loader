#include <windows.h>
#include "TimeWeatherChanger.h"

class DLLHandler {
public:
    static inline Mod* Mod = nullptr;
    static void CreateMod(HMODULE hModule) {
        Mod = new TimeWeatherChanger(hModule);
    }
};

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DLLHandler::CreateMod(hModule);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}