#pragma once
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include <windows.h>
#include <functional>

#include "Utilities/Logger.h"


class LOADER_API Mod;

class Event {
public:
    virtual const std::string& getName() const = 0;
};

template <typename ...args>
class ModEvent : public Event
{
public:
    using event_callback = std::function<void(args...)>;

    explicit ModEvent(Mod* mod, const std::string& name, const event_callback& cb) : m_name(name), m_mod(mod), m_callback(cb) {}
    ~ModEvent() {}

    void dispatch(args... a) { m_callback(a...); }

    virtual const std::string& getName() const override { return this->m_name; }
    virtual Mod* getMod() { return this->m_mod; }
private:
    Mod* m_mod;
    std::string m_name;
    const event_callback m_callback;
};


class LOADER_API ModStack {
public:
    ModStack() {}
    ~ModStack() {}

    void push_back(Mod* mod) { pushMod(mod); }
    void pushMod(Mod* mod);
    void popMod(Mod* mod);

    size_t size() {
        return m_mods.size();
    }

    template <typename ..._args>
    void callEvent(const std::string& eventName, _args...a) {
        auto it_eventList = m_eventList.find(eventName);
        if (it_eventList == m_eventList.end())
            return;
        for (auto eventIt : it_eventList->second)
        {
            if (ModEvent<_args...>* event = dynamic_cast<ModEvent<_args...>*>(eventIt)) {
                if (!setCurrentMod(event->getMod()))
                    return;
                
                try {
                    event->dispatch(a...);
                }
                catch (std::exception& ex) {
                    Log::Error_MDML("Exception thrown in {0} from mod %s: %s", event->getName().c_str(), event->getMod()->ModName.c_str(), ex.what());
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName.c_str());
                    this->popMod(event->getMod());
                }
                catch (int code) {
                    Log::Error_MDML("Exception thrown in {0} from mod %s, exception code: %d", event->getName().c_str(), event->getMod()->ModName.c_str(), code);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName.c_str());
                    this->popMod(event->getMod());
                }
                catch (...) {
                    Log::Error_MDML("Exception thrown in {0} from mod %s", event->getName().c_str(), event->getMod()->ModName.c_str());
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName.c_str());
                    this->popMod(event->getMod());
                }
            }
        }
    }
    void registerEvent(Event* event) {
        if (event)
            m_eventList[event->getName()].push_back(event);
    }

    //always sets the Mod::ModRef, if the mod is not found inside m_mods it will return false but event then the modref will be set
    bool setCurrentMod(Mod* mod);

    std::vector<Mod*>::iterator begin() { return m_mods.begin(); }
    std::vector<Mod*>::iterator end() { return m_mods.end(); }

    Mod* operator [] (int i) const { return m_mods[i]; }
    Mod* operator [] (size_t i) const { return m_mods[i]; }
    Mod*& operator [] (int i) { return m_mods[i]; }
    Mod*& operator [] (size_t i) { return m_mods[i]; }
private:

    std::map<std::string, std::vector<Event*>> m_eventList;
    std::vector<Mod*> m_mods;
    uint32_t m_insertIndex = 0;
};