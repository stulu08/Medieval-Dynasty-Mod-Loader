#pragma once
// Public face of the scripting runtime. Deliberately free of sol2/Lua types (pimpl): the binding library stays an
// implementation detail of LuaRuntime.cpp, so swapping sol2 for LuaBridge3 or a raw C-API layer (design doc OQ-2)
// touches only that file.

#include <filesystem>
#include <memory>
#include <string>
#include <vector>

namespace spike
{
	struct ModStatus
	{
		std::string Name;
		bool Faulted = false;
		int Errors = 0;
		std::string LastError;
	};

	class LuaRuntime
	{
	public:
		LuaRuntime();
		~LuaRuntime();
		LuaRuntime(const LuaRuntime&) = delete;
		LuaRuntime& operator=(const LuaRuntime&) = delete;

		// Starts every mod in `order` that has <modsDir>/<Name>/Scripts/main.lua (load order = vector order).
		// Must be called on the game thread.
		void StartMods(const std::filesystem::path& modsDir, const std::vector<std::string>& order);

		// Game-thread tick: drains GameThread.Run tasks queued before this tick, then calls Events.OnTick callbacks.
		void Tick(float deltaSeconds);

		// Unregisters everything the mod owns, closes its lua_State and runs main.lua again in a fresh state.
		bool Reload(const std::string& name);

		std::vector<ModStatus> GetStatus() const;
		size_t HookCount() const;

		// Test support: results of Check(cond, msg) calls from scripts.
		int ChecksPassed() const;
		int ChecksFailed() const;

	private:
		struct Impl;
		std::unique_ptr<Impl> m_impl;
	};
}
