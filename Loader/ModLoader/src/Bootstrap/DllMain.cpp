#include "Core.h"
#include "Bootstrap/Startup.h"

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Runs under the loader lock: Start only creates the init thread, the setup itself runs there.
        mdml::runtime::Start(hModule);
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        mdml::runtime::ShutDown();
        break;
    }
    return TRUE;
}
