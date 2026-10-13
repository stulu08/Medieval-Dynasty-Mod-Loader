// Lua scripting spike test harness: builds a mock "game" (classes, objects, functions), starts the Lua test mods from
// Scripting/test/<Mod>/Scripts/main.lua, drives a few ticks and checks the results. Exit code 0 = all checks passed.
//
// Usage: ScriptingSpike.exe [modsDir]   (default: <exe dir>/../../test)

#include "LuaRuntime.h"
#include "MockReflection.h"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <DbgHelp.h>
#pragma comment(lib, "Dbghelp.lib")

#include <cstdio>
#include <filesystem>
#include <string>
#include <thread>

using namespace mock;

namespace
{
	int g_failures = 0;

	void Expect(bool ok, const char* what)
	{
		std::printf("[harness] %s: %s\n", ok ? "ok  " : "FAIL", what);
		if (!ok)
			++g_failures;
	}

	float g_lastTickDelta = -1.0f;

	template <typename T>
	T& Param(void* parms, const UFunction* fn, const char* name)
	{
		return *reinterpret_cast<T*>(static_cast<uint8_t*>(parms) + FindProperty(fn, name)->Offset);
	}

	template <typename T>
	T& Member(UObject* obj, const char* name)
	{
		return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(obj) + FindProperty(obj->ClassPrivate, name)->Offset);
	}

	UFunction* g_fnAddGold = nullptr;
	UFunction* g_fnGetGreeting = nullptr;
	UFunction* g_fnReceiveTick = nullptr;
	UFunction* g_fnGetHealth = nullptr;

	// "Native" implementations (the engine side of the mock).
	void Native_AddGold(UObject* self, void* parms)
	{
		int32_t& gold = Member<int32_t>(self, "Gold");
		gold += Param<int32_t>(parms, g_fnAddGold, "Amount");
		Param<int32_t>(parms, g_fnAddGold, "ReturnValue") = gold;
	}

	void Native_GetGreeting(UObject* self, void* parms)
	{
		const std::wstring text = ToWide(Param<FString>(parms, g_fnGetGreeting, "Prefix")) + L", " + ToWide(Member<FString>(self, "DisplayName"));
		Param<FString>(parms, g_fnGetGreeting, "Greeting") = MakeFString(text); // engine allocates the out string
		Param<bool>(parms, g_fnGetGreeting, "ReturnValue") = true;
	}

	void Native_ReceiveTick(UObject*, void* parms) { g_lastTickDelta = Param<float>(parms, g_fnReceiveTick, "DeltaSeconds"); }

	void Native_GetHealth(UObject* self, void* parms) { Param<float>(parms, g_fnGetHealth, "ReturnValue") = Member<float>(self, "Health"); }

	void Native_Broken(UObject*, void*) { std::printf("[harness] FAIL: BrokenLayout native must never run\n"); ++g_failures; }

	void BuildWorld()
	{
		UClass* actor = NewClass("Actor", nullptr);
		AddProperty(actor, "Health", EPropKind::Float);
		AddProperty(actor, "bHidden", EPropKind::Bool, 0, nullptr, 0x01);
		AddProperty(actor, "bCanTick", EPropKind::Bool, 0, nullptr, 0x02);
		g_fnGetHealth = AddFunction(actor, "GetHealth", &Native_GetHealth);
		AddProperty(g_fnGetHealth, "ReturnValue", EPropKind::Float, CPF_Parm | CPF_OutParm | CPF_ReturnParm);
		FinishFunction(g_fnGetHealth);

		UClass* character = NewClass("BP_BaseCharacter_C", actor);
		AddProperty(character, "Gold", EPropKind::Int);
		AddProperty(character, "Id", EPropKind::Int64);
		AddProperty(character, "Stamina", EPropKind::Double);
		AddProperty(character, "Tag", EPropKind::Name);
		AddProperty(character, "DisplayName", EPropKind::Str);
		AddProperty(character, "Friend", EPropKind::Object, 0, actor);
		AddProperty(character, "Companion", EPropKind::Object, 0, character);

		g_fnAddGold = AddFunction(character, "AddGold", &Native_AddGold);
		AddProperty(g_fnAddGold, "Amount", EPropKind::Int, CPF_Parm);
		AddProperty(g_fnAddGold, "ReturnValue", EPropKind::Int, CPF_Parm | CPF_OutParm | CPF_ReturnParm);
		FinishFunction(g_fnAddGold);

		g_fnGetGreeting = AddFunction(character, "GetGreeting", &Native_GetGreeting);
		AddProperty(g_fnGetGreeting, "Prefix", EPropKind::Str, CPF_Parm);
		AddProperty(g_fnGetGreeting, "Greeting", EPropKind::Str, CPF_Parm | CPF_OutParm);
		AddProperty(g_fnGetGreeting, "ReturnValue", EPropKind::Bool, CPF_Parm | CPF_OutParm | CPF_ReturnParm);
		FinishFunction(g_fnGetGreeting);

		g_fnReceiveTick = AddFunction(character, "ReceiveTick", &Native_ReceiveTick);
		AddProperty(g_fnReceiveTick, "DeltaSeconds", EPropKind::Float, CPF_Parm);
		FinishFunction(g_fnReceiveTick);

		// A function whose reflected layout does not fit its ParamsSize (like a stale/corrupt layout): must be refused.
		UFunction* broken = AddFunction(character, "BrokenLayout", &Native_Broken);
		AddProperty(broken, "A", EPropKind::Int, CPF_Parm);
		FinishFunction(broken);
		broken->ParamsSize = 2;

		UObject* player = NewObject(character, "BP_BaseCharacter_C_0");
		UObject* npc = NewObject(character, "BP_BaseCharacter_C_1");
		NewObject(actor, "Actor_0");
		Member<FString>(player, "DisplayName") = MakeFString(L"Player");
		Member<FString>(npc, "DisplayName") = MakeFString(L"Npc");
		Member<float>(player, "Health") = 100.0f;
	}

	void CallReceiveTick(UObject* obj, float delta)
	{
		alignas(16) uint8_t parms[16] = {};
		Param<float>(parms, g_fnReceiveTick, "DeltaSeconds") = delta;
		ProcessEvent(obj, g_fnReceiveTick, parms);
	}

	const spike::ModStatus* FindStatus(const std::vector<spike::ModStatus>& all, const std::string& name)
	{
		for (auto& s : all)
			if (s.Name == name)
				return &s;
		return nullptr;
	}

	// Crash diagnostics for the test run: print the faulting stack with symbols (PDB next to the exe).
	LONG WINAPI CrashFilter(EXCEPTION_POINTERS* info)
	{
		std::printf("[harness] CRASH: exception 0x%08lX at %p\n", info->ExceptionRecord->ExceptionCode, info->ExceptionRecord->ExceptionAddress);
		HANDLE process = GetCurrentProcess();
		SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES);
		SymInitialize(process, nullptr, TRUE);
		void* frames[48];
		const USHORT count = RtlCaptureStackBackTrace(0, 48, frames, nullptr);
		alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + 256] = {};
		auto* symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);
		symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
		symbol->MaxNameLen = 255;
		for (USHORT i = 0; i < count; ++i)
		{
			DWORD64 displacement = 0;
			IMAGEHLP_LINE64 line = {};
			line.SizeOfStruct = sizeof(line);
			DWORD lineDisplacement = 0;
			const DWORD64 address = reinterpret_cast<DWORD64>(frames[i]);
			const bool hasSymbol = SymFromAddr(process, address, &displacement, symbol) != FALSE;
			const bool hasLine = SymGetLineFromAddr64(process, address, &lineDisplacement, &line) != FALSE;
			std::printf("  #%02u %s (%s:%lu)\n", i, hasSymbol ? symbol->Name : "?", hasLine ? line.FileName : "?", hasLine ? line.LineNumber : 0);
		}
		return EXCEPTION_EXECUTE_HANDLER;
	}

	std::filesystem::path ExeDir()
	{
		wchar_t buffer[MAX_PATH] = {};
		GetModuleFileNameW(nullptr, buffer, MAX_PATH);
		return std::filesystem::path(buffer).parent_path();
	}
}

int main(int argc, char** argv)
{
	SetConsoleOutputCP(CP_UTF8);
	std::setvbuf(stdout, nullptr, _IONBF, 0); // keep output even if something crashes
	SetUnhandledExceptionFilter(&CrashFilter);
	const std::filesystem::path modsDir = argc > 1 ? std::filesystem::path(argv[1]) : (ExeDir() / ".." / ".." / "test").lexically_normal();
	std::printf("[harness] mods dir: %s\n", modsDir.string().c_str());

	BuildWorld();
	UObject* player = GObjects()[0].Object;
	UObject* npc = GObjects()[1].Object;

	{
		spike::LuaRuntime runtime;
		runtime.StartMods(modsDir, {"GoodMod", "RuntimeErrorMod", "SyntaxErrorMod", "NotALuaMod"});
		Expect(runtime.GetStatus().size() == 3, "3 Lua mods found (NotALuaMod has no Scripts/main.lua)");
		Expect(runtime.HookCount() == 2, "GoodMod registered 2 hooks");

		runtime.Tick(0.016f); // tick 1

		CallReceiveTick(player, 0.5f);
		Expect(g_lastTickDelta == 1.0f, "pre hook doubled DeltaSeconds (0.5 -> 1.0) before the native ran");

		std::thread offThread([player] { CallReceiveTick(player, 0.25f); });
		offThread.join();
		Expect(g_lastTickDelta == 0.25f, "off-game-thread call: native ran, Lua hook skipped (value not doubled)");

		DestroyObject(npc);
		runtime.Tick(0.016f); // tick 2: GoodMod checks hook counts + invalid npc handle
		runtime.Tick(0.016f); // tick 3: RuntimeErrorMod's third error -> faulted
		runtime.Tick(0.016f); // tick 4: RuntimeErrorMod must not run any more

		auto status = runtime.GetStatus();
		const auto* good = FindStatus(status, "GoodMod");
		const auto* runtimeErr = FindStatus(status, "RuntimeErrorMod");
		const auto* syntaxErr = FindStatus(status, "SyntaxErrorMod");
		Expect(good && !good->Faulted && good->Errors == 0, "GoodMod ran without errors");
		Expect(runtimeErr && runtimeErr->Faulted && runtimeErr->Errors == 3, "RuntimeErrorMod faulted after exactly 3 errors (no 4th call)");
		Expect(runtimeErr && runtimeErr->LastError.find("stack traceback") != std::string::npos, "runtime error carries a Lua traceback");
		Expect(syntaxErr && syntaxErr->Faulted, "SyntaxErrorMod faulted at load, other mods unaffected");

		const size_t hooksBefore = runtime.HookCount();
		Expect(runtime.Reload("GoodMod"), "GoodMod reloaded");
		Expect(runtime.HookCount() == hooksBefore, "reload removed the old hooks before registering new ones (no duplicates)");
		runtime.Tick(0.016f); // tick 1 of the reloaded GoodMod
		status = runtime.GetStatus();
		good = FindStatus(status, "GoodMod");
		Expect(good && !good->Faulted && good->Errors == 0, "reloaded GoodMod ran without errors");

		std::printf("[harness] Lua checks: %d passed, %d failed\n", runtime.ChecksPassed(), runtime.ChecksFailed());
		Expect(runtime.ChecksFailed() == 0 && runtime.ChecksPassed() > 0, "all Lua Check() calls passed");
	} // runtime destroyed: every lua_State closed

	DestroyAll();
	Expect(FMemory::LiveAllocations() == 0, "no engine-allocator (FMemory) leaks: params/strings freed");

	std::printf("[harness] %s (%d failure(s))\n", g_failures == 0 ? "ALL PASSED" : "FAILED", g_failures);
	return g_failures == 0 ? 0 : 1;
}
