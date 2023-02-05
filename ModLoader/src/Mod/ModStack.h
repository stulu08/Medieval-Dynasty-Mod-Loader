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
    virtual const void* getData() const = 0;
};

template <typename ...args>
class ModEvent : public Event
{
public:
    using event_callback = std::function<bool(args...)>;

    explicit ModEvent(Mod* mod, const std::string& name, const event_callback& cb) : m_name(name), m_mod(mod), m_callback(cb) {}
    ~ModEvent() {}

    bool dispatch(args... a) { return m_callback(a...); }

    virtual const std::string& getName() const override { return this->m_name; }
    virtual const void* getData() const override { return this->m_mod; }
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
                    continue;
                
                try {
                    if (event->dispatch(a...))
                        break;//event was handled if returned true
                }
                catch (std::exception& ex) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, ex.what());
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (int code) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}, exception code: {2}", event->getName(), event->getMod()->ModName, code);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (const char* str) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, str);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (std::string str) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, str);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (...) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}", event->getName(), event->getMod()->ModName);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
            }
        }
    }
    void registerEvent(Event* event) {
        if (event)
            m_eventList[event->getName()].push_back(event);
    }
    void clearModEvents(const std::string& eventName, Mod* mod);
    //always sets the Mod::ModRef, if the mod is not found inside m_mods it will return false but Mod::ModRef will still be set 
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