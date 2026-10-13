#include "Core.h"
#include "ModStack.h"
#include "Mod.h"

void ModStack::pushMod(Mod* mod) {
    m_mods.emplace(m_mods.begin() + m_insertIndex, mod);
    m_insertIndex++;
}

void ModStack::popMod(Mod* mod) {
    auto it = std::find(m_mods.begin(), m_mods.begin() + m_insertIndex, mod);

    if (it != m_mods.begin() + m_insertIndex) {
        m_mods.erase(it);
        m_insertIndex--;
    }
}
void ModStack::clearModEvents(const std::string& eventName, Mod* mod) {
    if (mod == nullptr || eventName.empty())
        return;
    if (m_eventList.find(eventName) == m_eventList.end())
        return;
    std::vector<Event*>& events = m_eventList[eventName];
    // Erasing inside a range-for over the same vector was undefined behaviour (code inventory C5).
    // The removed events are not deleted: another thread may still be dispatching them (registration is not
    // synchronized with dispatch yet, see docs/reports/wave3/3A-runtime.md).
    events.erase(std::remove_if(events.begin(), events.end(), [mod](Event* e) { return e->getData() == mod; }), events.end());
}
bool ModStack::contains(Mod* mod) const {
    auto end = m_mods.begin() + m_insertIndex;
    return std::find(m_mods.begin(), end, mod) != end;
}