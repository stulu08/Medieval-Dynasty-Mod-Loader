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
    for (Event* e : events) {
        if (e->getData() == mod) {
            events.erase(std::find(events.begin(), events.end(), e));
        }
    }
}
bool ModStack::setCurrentMod(Mod* mod) {
    Mod::ModRef = mod;
    auto it = std::find(m_mods.begin(), m_mods.begin() + m_insertIndex, mod);
    return it != m_mods.end();
}