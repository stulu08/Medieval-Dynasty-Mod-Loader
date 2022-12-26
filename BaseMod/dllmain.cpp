#include <windows.h>
#include "BaseMod.h"

namespace MDMLBase {
    Mod* Mod::s_instance;

    class DLLHandler {
    public:
        static void CreateMod() {
            MDMLBase::Mod::s_instance = new MDMLBase::Mod();
        }
    };
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MDMLBase::DLLHandler::CreateMod();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}