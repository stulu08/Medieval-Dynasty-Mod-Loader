// Lua binding spike: per-mod lua_State, reflection-by-name UObject wrapper, UFunction calls with parameter validation,
// hooks with a params view, game-thread queue, error isolation, restricted stdlib, reload.
// See docs/design/lua-scripting.md and docs/reports/lua-scripting-spike.md.
//
// sol2 is only included here (never in a header), see LuaRuntime.h.

#include "LuaRuntime.h"
#include "MockReflection.h"

// SOL_USING_CXX_LUA=1 and SOL_ALL_SAFETIES_ON=1 come from premake (they must be identical in every TU that includes sol).
#include <sol/sol.hpp>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>

#include <cmath>
#include <cstdio>
#include <limits>
#include <map>
#include <stdexcept>
#include <thread>
#include <unordered_set>

namespace spike
{
	using namespace mock;

	namespace
	{
		constexpr int kMaxErrorsBeforeFault = 3;

		std::wstring Utf8ToWide(const std::string& s)
		{
			if (s.empty())
				return std::wstring();
			const int n = MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), nullptr, 0);
			std::wstring w(static_cast<size_t>(n), L'\0');
			MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), w.data(), n);
			return w;
		}

		std::string WideToUtf8(const std::wstring& w)
		{
			if (w.empty())
				return std::string();
			const int n = WideCharToMultiByte(CP_UTF8, 0, w.data(), static_cast<int>(w.size()), nullptr, 0, nullptr, nullptr);
			std::string s(static_cast<size_t>(n), '\0');
			WideCharToMultiByte(CP_UTF8, 0, w.data(), static_cast<int>(w.size()), s.data(), n, nullptr, nullptr);
			return s;
		}

		// ------------------------------------------------------------ weak UObject handle (the Lua "UObject" type)
		struct ObjectRef
		{
			UObject* Ptr = nullptr;
			int32_t Index = -1;
			int32_t Serial = 0;
		};

		ObjectRef MakeRef(UObject* obj)
		{
			ObjectRef r;
			if (obj)
			{
				r.Ptr = obj;
				r.Index = obj->InternalIndex;
				r.Serial = GObjects()[static_cast<size_t>(obj->InternalIndex)].SerialNumber;
			}
			return r;
		}

		bool IsValidRef(const ObjectRef& r) { return IsValidWeak(r.Ptr, r.Index, r.Serial); }

		UObject* Checked(const ObjectRef& r)
		{
			if (!IsValidRef(r))
				throw std::runtime_error("UObject is no longer valid (destroyed or garbage collected); check obj:IsValid() first");
			return r.Ptr;
		}

		std::string ClassName(const UObject* obj) { return obj->ClassPrivate ? obj->ClassPrivate->Name : "None"; }

		// ------------------------------------------------------------ hook params view (valid only inside the callback)
		struct ParamsView
		{
			UFunction* Fn = nullptr;
			uint8_t* Parms = nullptr;
			std::shared_ptr<bool> Alive;
		};

		// ------------------------------------------------------------ zeroed, 16-byte aligned ProcessEvent parameter buffer
		class ParamBuffer
		{
		public:
			ParamBuffer(UFunction* fn) : m_fn(fn)
			{
				const size_t size = fn->ParamsSize ? fn->ParamsSize : 16;
				m_data = static_cast<uint8_t*>(::operator new(size, std::align_val_t{16}));
				std::memset(m_data, 0, size);
			}
			~ParamBuffer()
			{
				// The caller of ProcessEvent owns the parameters: destroy everything that owns memory, including
				// strings the engine allocated for out params / return values (FMemory::Free).
				for (auto& p : m_fn->Properties)
					if ((p->Flags & CPF_Parm) && p->Kind == EPropKind::Str)
						FreeFString(*reinterpret_cast<FString*>(m_data + p->Offset));
				::operator delete(m_data, std::align_val_t{16});
			}
			ParamBuffer(const ParamBuffer&) = delete;
			ParamBuffer& operator=(const ParamBuffer&) = delete;
			uint8_t* Data() const { return m_data; }

		private:
			UFunction* m_fn;
			uint8_t* m_data;
		};

		// ------------------------------------------------------------ FProperty <-> Lua
		sol::object ReadValue(lua_State* L, const FProperty* p, uint8_t* container)
		{
			uint8_t* addr = container + p->Offset;
			switch (p->Kind)
			{
			case EPropKind::Bool: return sol::make_object(L, (*addr & p->FieldMask) != 0);
			case EPropKind::Int: return sol::make_object(L, static_cast<lua_Integer>(*reinterpret_cast<int32_t*>(addr)));
			case EPropKind::Int64: return sol::make_object(L, static_cast<lua_Integer>(*reinterpret_cast<int64_t*>(addr)));
			case EPropKind::Float: return sol::make_object(L, static_cast<lua_Number>(*reinterpret_cast<float*>(addr)));
			case EPropKind::Double: return sol::make_object(L, static_cast<lua_Number>(*reinterpret_cast<double*>(addr)));
			case EPropKind::Name: return sol::make_object(L, Names::ToString(*reinterpret_cast<FName*>(addr)));
			case EPropKind::Str: return sol::make_object(L, WideToUtf8(ToWide(*reinterpret_cast<FString*>(addr))));
			case EPropKind::Object:
			{
				UObject* obj = *reinterpret_cast<UObject**>(addr);
				if (!obj)
					return sol::make_object(L, sol::lua_nil);
				return sol::make_object(L, MakeRef(obj));
			}
			}
			return sol::make_object(L, sol::lua_nil);
		}

		[[noreturn]] void TypeError(const FProperty* p, const char* expected, const sol::object& v)
		{
			throw std::runtime_error(p->Name + ": " + KindName(p->Kind) + " expects " + expected + ", got " +
			                         sol::type_name(v.lua_state(), v.get_type()));
		}

		// Integer from a Lua value: integers, or floats with an integral value. Errors on anything else.
		lua_Integer ToInteger(const FProperty* p, const sol::object& v)
		{
			if (v.get_type() != sol::type::number)
				TypeError(p, "an integer", v);
			lua_State* L = v.lua_state();
			v.push();
			const bool isInt = lua_isinteger(L, -1) != 0;
			const lua_Integer i = lua_tointeger(L, -1);
			const lua_Number n = lua_tonumber(L, -1);
			lua_pop(L, 1);
			if (isInt)
				return i;
			if (std::floor(n) != n)
				throw std::runtime_error(p->Name + ": " + KindName(p->Kind) + " expects an integer, got " + std::to_string(n));
			return static_cast<lua_Integer>(n);
		}

		void WriteValue(const FProperty* p, uint8_t* container, const sol::object& v)
		{
			uint8_t* addr = container + p->Offset;
			switch (p->Kind)
			{
			case EPropKind::Bool:
				if (v.get_type() != sol::type::boolean)
					TypeError(p, "a boolean", v);
				if (v.as<bool>())
					*addr = static_cast<uint8_t>(*addr | p->FieldMask);
				else
					*addr = static_cast<uint8_t>(*addr & ~p->FieldMask);
				return;
			case EPropKind::Int:
			{
				const lua_Integer i = ToInteger(p, v);
				if (i < std::numeric_limits<int32_t>::min() || i > std::numeric_limits<int32_t>::max())
					throw std::runtime_error(p->Name + ": value " + std::to_string(i) + " is out of range for IntProperty");
				*reinterpret_cast<int32_t*>(addr) = static_cast<int32_t>(i);
				return;
			}
			case EPropKind::Int64:
				*reinterpret_cast<int64_t*>(addr) = ToInteger(p, v);
				return;
			case EPropKind::Float:
				if (v.get_type() != sol::type::number)
					TypeError(p, "a number", v);
				*reinterpret_cast<float*>(addr) = static_cast<float>(v.as<double>());
				return;
			case EPropKind::Double:
				if (v.get_type() != sol::type::number)
					TypeError(p, "a number", v);
				*reinterpret_cast<double*>(addr) = v.as<double>();
				return;
			case EPropKind::Name:
				if (v.get_type() != sol::type::string)
					TypeError(p, "a string", v);
				*reinterpret_cast<FName*>(addr) = Names::FindOrAdd(v.as<std::string>());
				return;
			case EPropKind::Str:
			{
				if (v.get_type() != sol::type::string)
					TypeError(p, "a string", v);
				// New buffer from the engine allocator; the old one belonged to the engine too.
				FString fresh = MakeFString(Utf8ToWide(v.as<std::string>()));
				FString& target = *reinterpret_cast<FString*>(addr);
				FreeFString(target);
				target = fresh;
				return;
			}
			case EPropKind::Object:
			{
				if (v.get_type() == sol::type::lua_nil)
				{
					*reinterpret_cast<UObject**>(addr) = nullptr;
					return;
				}
				if (!v.is<ObjectRef>())
					TypeError(p, "a UObject or nil", v);
				UObject* obj = Checked(v.as<ObjectRef>());
				if (p->PropertyClass && !IsA(obj, p->PropertyClass))
					throw std::runtime_error(p->Name + ": expects a " + p->PropertyClass->Name + ", got a " + ClassName(obj));
				*reinterpret_cast<UObject**>(addr) = obj;
				return;
			}
			}
		}

		// Must push exactly the error value (sol then calls lua_error). Same as sol's default minus the std::cerr print.
		int QuietExceptionHandler(lua_State* L, sol::optional<const std::exception&>, sol::string_view what)
		{
			lua_pushlstring(L, what.data(), what.size());
			return 1;
		}

		const FProperty* FindParam(UFunction* fn, const std::string& name)
		{
			for (auto& p : fn->Properties)
				if ((p->Flags & CPF_Parm) && p->Name == name)
					return p.get();
			return nullptr;
		}
	}

	// ================================================================ per-mod state
	struct LuaMod
	{
		std::string Name;
		std::filesystem::path Dir;
		std::unique_ptr<sol::state> Lua;
		bool Faulted = false;
		int Errors = 0;
		std::string LastError;
	};

	struct HookEntry
	{
		int Id = 0;
		LuaMod* Owner = nullptr;
		UFunction* Fn = nullptr;
		std::string Path;
		sol::protected_function Pre;
		sol::protected_function Post;
	};

	struct OwnedCallback
	{
		LuaMod* Owner = nullptr;
		sol::protected_function Fn;
	};

	// ================================================================ runtime
	struct LuaRuntime::Impl : IProcessEventObserver
	{
		std::filesystem::path ModsDir;
		std::vector<std::unique_ptr<LuaMod>> Mods;
		std::vector<HookEntry> Hooks;
		int NextHookId = 1;
		std::vector<OwnedCallback> TickCallbacks;
		std::vector<OwnedCallback> Pending; // GameThread.Run queue
		std::thread::id GameThreadId;
		std::unordered_set<UFunction*> WarnedOffThread;
		int Passed = 0;
		int Failed = 0;

		// Reflection cache (UStruct*, name) -> member. The real one must be cleared when classes go away (level change,
		// BP class unload) or keyed by a validated class handle.
		struct Member
		{
			const FProperty* Prop = nullptr;
			UFunction* Fn = nullptr;
		};
		std::map<std::pair<const UStruct*, std::string>, Member> MemberCache;

		Impl()
		{
			GameThreadId = std::this_thread::get_id();
			SetProcessEventObserver(this);
		}

		~Impl() override
		{
			SetProcessEventObserver(nullptr);
			// Everything holding sol references must die before the states.
			Hooks.clear();
			TickCallbacks.clear();
			Pending.clear();
			Mods.clear();
		}

		// ------------------------------------------------------------ logging + errors
		static void Log(const LuaMod& m, const char* level, const std::string& text)
		{
			std::printf("[Lua:%s] %s: %s\n", m.Name.c_str(), level, text.c_str());
			std::fflush(stdout);
		}

		void ReportError(LuaMod& m, const std::string& where, const std::string& message)
		{
			++m.Errors;
			m.LastError = where + ": " + message;
			Log(m, "ERROR", m.LastError);
			if (m.Errors >= kMaxErrorsBeforeFault && !m.Faulted)
			{
				m.Faulted = true;
				Log(m, "ERROR", "too many errors, mod is now FAULTED (callbacks disabled until reload)");
			}
		}

		template <typename... Args>
		bool SafeCall(LuaMod& m, const sol::protected_function& fn, const std::string& where, Args&&... args)
		{
			if (m.Faulted)
				return false;
			sol::protected_function_result r = fn(std::forward<Args>(args)...);
			if (!r.valid())
			{
				sol::error e = r;
				ReportError(m, where, e.what());
				return false;
			}
			return true;
		}

		// ------------------------------------------------------------ reflection lookups
		Member FindMember(const UStruct* cls, const std::string& name)
		{
			auto key = std::make_pair(cls, name);
			auto it = MemberCache.find(key);
			if (it != MemberCache.end())
				return it->second;
			Member m;
			m.Prop = FindProperty(cls, name);
			if (!m.Prop)
				m.Fn = FindFunction(const_cast<UClass*>(static_cast<const UClass*>(cls)), name);
			MemberCache.emplace(key, m);
			return m;
		}

		// ------------------------------------------------------------ UFunction call with validation
		sol::variadic_results CallFunction(lua_State* L, const ObjectRef& selfRef, UFunction* fn, const sol::variadic_args& va, int first)
		{
			UObject* self = Checked(selfRef);

			std::vector<const FProperty*> inputs;
			std::vector<const FProperty*> outputs;
			const FProperty* ret = nullptr;
			for (auto& up : fn->Properties)
			{
				const FProperty* p = up.get();
				if (!(p->Flags & CPF_Parm))
					continue;
				// Layout validation against the live UFunction (the generated-wrapper decision, applied to Lua).
				if (p->Offset < 0 || p->Offset + p->ElementSize > fn->ParamsSize)
					throw std::runtime_error(fn->Name + ": parameter layout mismatch (" + p->Name + " at " + std::to_string(p->Offset) + "+" +
					                         std::to_string(p->ElementSize) + " exceeds ParamsSize " + std::to_string(fn->ParamsSize) + "), call skipped");
				if (p->Flags & CPF_ReturnParm)
				{
					ret = p;
					continue;
				}
				const bool out = (p->Flags & CPF_OutParm) != 0;
				const bool ref = (p->Flags & CPF_ReferenceParm) != 0;
				if (!out || ref)
					inputs.push_back(p);
				if (out)
					outputs.push_back(p);
			}
			if (ret && fn->ReturnValueOffset != ret->Offset)
				throw std::runtime_error(fn->Name + ": ReturnValueOffset does not match the return parameter, call skipped");

			const int given = static_cast<int>(va.size()) - first;
			if (given != static_cast<int>(inputs.size()))
			{
				std::string sig;
				for (const FProperty* p : inputs)
					sig += (sig.empty() ? "" : ", ") + p->Name + ": " + KindName(p->Kind);
				throw std::runtime_error(fn->Name + " expects " + std::to_string(inputs.size()) + " argument(s) (" + sig + "), got " + std::to_string(given));
			}

			ParamBuffer buffer(fn);
			for (size_t i = 0; i < inputs.size(); ++i)
			{
				sol::object arg = va.get<sol::object>(first + static_cast<int>(i));
				try
				{
					WriteValue(inputs[i], buffer.Data(), arg);
				}
				catch (const std::exception& e)
				{
					throw std::runtime_error(fn->Name + " argument " + std::to_string(i + 1) + ": " + e.what());
				}
			}

			ProcessEvent(self, fn, buffer.Data());

			sol::variadic_results results;
			if (ret)
				results.push_back(ReadValue(L, ret, buffer.Data()));
			for (const FProperty* p : outputs)
				results.push_back(ReadValue(L, p, buffer.Data()));
			return results; // ParamBuffer frees owned params (strings) here
		}

		// ------------------------------------------------------------ hook dispatch (IProcessEventObserver)
		void Dispatch(UObject* context, UFunction* fn, void* parms, bool pre)
		{
			if (Hooks.empty())
				return; // fast path; the real one checks a hooked-UFunction set first (design doc 7.3)

			std::vector<int> ids;
			for (const HookEntry& h : Hooks)
				if (h.Fn == fn && (pre ? h.Pre.valid() : h.Post.valid()))
					ids.push_back(h.Id);
			if (ids.empty())
				return;

			if (std::this_thread::get_id() != GameThreadId)
			{
				// Design doc OQ-10 proposal: skip Lua on non-game threads, warn once per function.
				if (WarnedOffThread.insert(fn).second)
					std::printf("[LuaRuntime] WARN: %s called off the game thread, Lua hooks skipped\n", fn->Name.c_str());
				return;
			}

			for (int id : ids)
			{
				// Look the entry up again: an earlier callback may have unregistered or added hooks.
				HookEntry* h = nullptr;
				for (HookEntry& e : Hooks)
					if (e.Id == id)
						h = &e;
				if (!h || h->Owner->Faulted)
					continue;

				LuaMod& owner = *h->Owner;
				sol::protected_function cb = pre ? h->Pre : h->Post; // copy: the vector may change during the call
				const std::string where = std::string(pre ? "pre" : "post") + " hook " + h->Path;
				auto alive = std::make_shared<bool>(true);
				// Pass by VALUE (prvalue). sol2 pushes an lvalue `T&` usertype as a pointer (reference semantics), which
				// would leave Lua holding a pointer to this stack frame after the callback.
				const ParamsView view{fn, static_cast<uint8_t*>(parms), alive};
				if (pre)
				{
					SafeCall(owner, cb, where, MakeRef(context), ParamsView(view));
				}
				else
				{
					sol::object retValue = sol::make_object(cb.lua_state(), sol::lua_nil);
					if (fn->ReturnValueOffset != 0xFFFF)
						for (auto& p : fn->Properties)
							if (p->Flags & CPF_ReturnParm)
								retValue = ReadValue(cb.lua_state(), p.get(), static_cast<uint8_t*>(parms));
					SafeCall(owner, cb, where, MakeRef(context), ParamsView(view), retValue);
				}
				*alive = false;
			}
		}

		void Pre(UObject* context, UFunction* fn, void* parms) override { Dispatch(context, fn, parms, true); }
		void Post(UObject* context, UFunction* fn, void* parms) override { Dispatch(context, fn, parms, false); }

		// ------------------------------------------------------------ mod lifetime
		void RemoveOwned(LuaMod* m)
		{
			std::erase_if(Hooks, [m](const HookEntry& h) { return h.Owner == m; });
			std::erase_if(TickCallbacks, [m](const OwnedCallback& c) { return c.Owner == m; });
			std::erase_if(Pending, [m](const OwnedCallback& c) { return c.Owner == m; });
		}

		void SetupSandbox(LuaMod& m)
		{
			sol::state& lua = *m.Lua;
			// C++ exceptions thrown by bindings become Lua errors with just the message (sol2's default handler also
			// prints every exception to stdout; errors are reported by our own SafeCall/ReportError instead).
			lua.set_exception_handler(&QuietExceptionHandler);
			lua.open_libraries(sol::lib::base, sol::lib::string, sol::lib::table, sol::lib::math, sol::lib::utf8, sol::lib::coroutine,
			                   sol::lib::os, sol::lib::debug);

			// Tracebacks for every protected call made from C++.
			sol::object traceback = lua["debug"]["traceback"];
			sol::protected_function::set_default_handler(traceback);

			// Restricted stdlib (design doc 11): no package/io, no loadlib, no os.execute/remove/exit, debug.traceback only,
			// no dofile/loadfile, load() only accepts text chunks (never bytecode).
			lua["debug"] = lua.create_table_with("traceback", traceback);
			sol::table os = lua["os"];
			lua["os"] = lua.create_table_with("time", os["time"], "clock", os["clock"], "date", os["date"]);
			lua["dofile"] = sol::lua_nil;
			lua["loadfile"] = sol::lua_nil;
			lua.script(R"(local raw = load
load = function(chunk, name, mode, env) return raw(chunk, name, "t", env) end)");

			// require() restricted to the mod's Scripts folder, text chunks only.
			LuaMod* mp = &m;
			lua["require"] = [mp](sol::this_state ts, const std::string& name) -> sol::object {
				sol::state_view L(ts);
				for (char c : name)
					if (!(std::isalnum(static_cast<unsigned char>(c)) || c == '_' || c == '.'))
						throw std::runtime_error("require: invalid module name '" + name + "'");
				sol::table loaded = L.registry()["MDML_LOADED"].get_or_create<sol::table>();
				sol::object cached = loaded[name];
				if (cached.valid() && cached.get_type() != sol::type::lua_nil)
					return cached;
				std::string rel = name;
				for (char& c : rel)
					if (c == '.')
						c = '/';
				const std::filesystem::path file = mp->Dir / "Scripts" / (rel + ".lua");
				sol::load_result chunk = L.load_file(file.string(), sol::load_mode::text);
				if (!chunk.valid())
				{
					sol::error e = chunk;
					throw std::runtime_error(std::string("require '") + name + "': " + e.what());
				}
				sol::protected_function f = chunk;
				sol::protected_function_result r = f(name);
				if (!r.valid())
				{
					sol::error e = r;
					throw std::runtime_error(std::string("require '") + name + "': " + e.what());
				}
				sol::object value = r.return_count() > 0 ? r.get<sol::object>() : sol::object();
				if (!value.valid() || value.get_type() == sol::type::lua_nil)
					value = sol::make_object(L, true);
				loaded[name] = value;
				return value;
			};
		}

		void BindApi(LuaMod& m)
		{
			sol::state& lua = *m.Lua;
			LuaMod* mp = &m;

			// ---- UObject
			lua.new_usertype<ObjectRef>(
				"UObject", sol::no_constructor,
				"IsValid", [](const ObjectRef& r) { return IsValidRef(r); },
				"GetName", [](const ObjectRef& r) { return GetName(Checked(r)); },
				"GetFullName", [](const ObjectRef& r) { UObject* o = Checked(r); return ClassName(o) + " " + GetName(o); },
				"GetClass", [](const ObjectRef& r) { return ClassName(Checked(r)); },
				"IsA", [](const ObjectRef& r, const std::string& cls) { UClass* c = FindClass(cls); return c != nullptr && IsA(Checked(r), c); },
				"Has", [this](const ObjectRef& r, const std::string& name) {
					Member mem = FindMember(Checked(r)->ClassPrivate, name);
					return mem.Prop != nullptr || mem.Fn != nullptr;
				},
				"GetPropertyType", [this](const ObjectRef& r, const std::string& name) -> std::string {
					Member mem = FindMember(Checked(r)->ClassPrivate, name);
					if (!mem.Prop)
						throw std::runtime_error(ClassName(r.Ptr) + " has no property '" + name + "'");
					return KindName(mem.Prop->Kind);
				},
				"Call", [this](sol::this_state ts, const ObjectRef& r, const std::string& name, sol::variadic_args va) -> sol::variadic_results {
					UObject* o = Checked(r);
					Member mem = FindMember(o->ClassPrivate, name);
					if (!mem.Fn)
						throw std::runtime_error(ClassName(o) + " has no function '" + name + "'");
					return CallFunction(ts, r, mem.Fn, va, 0);
				},
				// Fallback for keys that are not one of the methods above: reflected property, then reflected function.
				sol::meta_function::index, [this](sol::this_state ts, const ObjectRef& r, const std::string& key) -> sol::object {
					UObject* o = Checked(r);
					Member mem = FindMember(o->ClassPrivate, key);
					if (mem.Prop)
						return ReadValue(ts, mem.Prop, reinterpret_cast<uint8_t*>(o));
					if (mem.Fn)
					{
						UFunction* fn = mem.Fn;
						// Real implementation: cache one closure per UFunction instead of creating one per access.
						return sol::make_object(ts, [this, fn](sol::this_state ts2, sol::variadic_args va) -> sol::variadic_results {
							if (va.size() == 0 || !va.get<sol::object>(0).is<ObjectRef>())
								throw std::runtime_error(fn->Name + ": call it as a method, obj:" + fn->Name + "(...)");
							return CallFunction(ts2, va.get<ObjectRef>(0), fn, va, 1);
						});
					}
					throw std::runtime_error(ClassName(o) + " has no property or function '" + key + "'");
				},
				sol::meta_function::new_index, [this](const ObjectRef& r, const std::string& key, sol::object value) {
					UObject* o = Checked(r);
					Member mem = FindMember(o->ClassPrivate, key);
					if (!mem.Prop)
						throw std::runtime_error(ClassName(o) + " has no property '" + key + "'");
					WriteValue(mem.Prop, reinterpret_cast<uint8_t*>(o), value);
				},
				sol::meta_function::equal_to, [](const ObjectRef& a, const ObjectRef& b) { return a.Ptr == b.Ptr && a.Serial == b.Serial; },
				sol::meta_function::to_string, [](const ObjectRef& r) -> std::string {
					if (!IsValidRef(r))
						return "UObject(invalid)";
					return "UObject(" + GetName(r.Ptr) + " : " + ClassName(r.Ptr) + ")";
				});

			// ---- hook params view
			lua.new_usertype<ParamsView>(
				"HookParams", sol::no_constructor,
				sol::meta_function::index, [](sol::this_state ts, const ParamsView& v, const std::string& key) -> sol::object {
					if (!*v.Alive)
						throw std::runtime_error("hook params used outside of their hook callback");
					const FProperty* p = FindParam(v.Fn, key);
					if (!p)
						throw std::runtime_error(v.Fn->Name + " has no parameter '" + key + "'");
					return ReadValue(ts, p, v.Parms);
				},
				sol::meta_function::new_index, [](const ParamsView& v, const std::string& key, sol::object value) {
					if (!*v.Alive)
						throw std::runtime_error("hook params used outside of their hook callback");
					const FProperty* p = FindParam(v.Fn, key);
					if (!p)
						throw std::runtime_error(v.Fn->Name + " has no parameter '" + key + "'");
					WriteValue(p, v.Parms, value);
				});

			// ---- Mod, Log, print, Check
			lua["Mod"] = lua.create_table_with("Name", m.Name, "Dir", m.Dir.string());

			sol::function tostr = lua["tostring"];
			auto format = [tostr](sol::variadic_args va) -> std::string {
				if (va.size() == 0)
					return std::string();
				std::string fmt = tostr(va.get<sol::object>(0));
				std::string out;
				size_t next = 1;
				for (size_t i = 0; i < fmt.size(); ++i)
				{
					if (fmt[i] == '{' && i + 1 < fmt.size() && fmt[i + 1] == '}' && next < va.size())
					{
						out += tostr(va.get<sol::object>(static_cast<int>(next++))).get<std::string>();
						++i;
					}
					else
						out += fmt[i];
				}
				return out;
			};
			lua["Log"] = lua.create_table_with(
				"Info", [mp, format](sol::variadic_args va) { Log(*mp, "INFO", format(va)); },
				"Warn", [mp, format](sol::variadic_args va) { Log(*mp, "WARN", format(va)); },
				"Error", [mp, format](sol::variadic_args va) { Log(*mp, "ERROR", format(va)); });
			lua["print"] = [mp, tostr](sol::variadic_args va) {
				std::string line;
				for (size_t i = 0; i < va.size(); ++i)
					line += (i ? "\t" : "") + tostr(va.get<sol::object>(static_cast<int>(i))).get<std::string>();
				Log(*mp, "INFO", line);
			};
			lua["Check"] = [this, mp](sol::object cond, const std::string& what) {
				const bool ok = cond.valid() && cond.get_type() != sol::type::lua_nil && !(cond.get_type() == sol::type::boolean && !cond.as<bool>());
				if (ok)
					++Passed;
				else
				{
					++Failed;
					Log(*mp, "CHECK FAILED", what);
				}
			};

			// ---- objects
			lua["FindObject"] = [](sol::this_state ts, const std::string& name) -> sol::object {
				for (auto& item : GObjects())
					if (item.Object && GetName(item.Object) == name)
						return sol::make_object(ts, MakeRef(item.Object));
				return sol::make_object(ts, sol::lua_nil);
			};
			lua["FindFirstOf"] = [](sol::this_state ts, const std::string& className) -> sol::object {
				UClass* cls = FindClass(className);
				if (cls)
					for (auto& item : GObjects())
						if (item.Object && IsA(item.Object, cls))
							return sol::make_object(ts, MakeRef(item.Object));
				return sol::make_object(ts, sol::lua_nil);
			};
			lua["FindAllOf"] = [](sol::this_state ts, const std::string& className) {
				sol::state_view L(ts);
				sol::table result = L.create_table();
				UClass* cls = FindClass(className);
				int n = 0;
				if (cls)
					for (auto& item : GObjects())
						if (item.Object && IsA(item.Object, cls))
							result[++n] = MakeRef(item.Object);
				return result;
			};

			// ---- game thread, events, hooks
			lua["GameThread"] = lua.create_table_with(
				"Run", [this, mp](sol::protected_function fn) { Pending.push_back(OwnedCallback{mp, std::move(fn)}); },
				"IsInGameThread", [this]() { return std::this_thread::get_id() == GameThreadId; });
			lua["Events"] = lua.create_table_with(
				"OnTick", [this, mp](sol::protected_function fn) { TickCallbacks.push_back(OwnedCallback{mp, std::move(fn)}); });
			lua["Hooks"] = lua.create_table_with(
				"Register", [this, mp](const std::string& path, sol::object pre, sol::object post) -> int {
					const size_t colon = path.find(':');
					if (colon == std::string::npos)
						throw std::runtime_error("Hooks.Register: expected 'Class:Function', got '" + path + "'");
					UClass* cls = FindClass(path.substr(0, colon));
					UFunction* fn = cls ? FindFunction(cls, path.substr(colon + 1)) : nullptr;
					if (!fn)
						throw std::runtime_error("Hooks.Register: UFunction '" + path + "' not found (it must be loaded when registering)");
					const bool hasPre = pre.get_type() == sol::type::function;
					const bool hasPost = post.valid() && post.get_type() == sol::type::function;
					if (!hasPre && !hasPost)
						throw std::runtime_error("Hooks.Register: need a pre and/or post callback function");
					HookEntry h;
					h.Id = NextHookId++;
					h.Owner = mp;
					h.Fn = fn;
					h.Path = path;
					if (hasPre)
						h.Pre = pre.as<sol::protected_function>();
					if (hasPost)
						h.Post = post.as<sol::protected_function>();
					Hooks.push_back(std::move(h));
					return Hooks.back().Id;
				},
				"Unregister", [this, mp](int id) {
					return std::erase_if(Hooks, [mp, id](const HookEntry& h) { return h.Id == id && h.Owner == mp; }) > 0;
				});
		}

		bool StartMod(const std::string& name)
		{
			const std::filesystem::path dir = ModsDir / name;
			const std::filesystem::path main = dir / "Scripts" / "main.lua";
			if (!std::filesystem::exists(main))
				return false;

			auto mod = std::make_unique<LuaMod>();
			mod->Name = name;
			mod->Dir = dir;
			mod->Lua = std::make_unique<sol::state>();
			LuaMod& m = *mod;
			Mods.push_back(std::move(mod));

			try
			{
				SetupSandbox(m);
				BindApi(m);
			}
			catch (const std::exception& e)
			{
				m.Faulted = true;
				ReportError(m, "setup", e.what());
				return true;
			}

			sol::protected_function_result r = m.Lua->safe_script_file(main.string(), &sol::script_pass_on_error, sol::load_mode::text);
			if (!r.valid())
			{
				sol::error e = r;
				ReportError(m, "main.lua", e.what());
				m.Faulted = true; // a mod whose entry point failed is never half-run
				Log(m, "ERROR", "main.lua failed, mod is FAULTED");
			}
			else
				Log(m, "INFO", "started");
			return true;
		}

		LuaMod* Find(const std::string& name)
		{
			for (auto& m : Mods)
				if (m->Name == name)
					return m.get();
			return nullptr;
		}
	};

	LuaRuntime::LuaRuntime() : m_impl(std::make_unique<Impl>()) {}
	LuaRuntime::~LuaRuntime() = default;

	void LuaRuntime::StartMods(const std::filesystem::path& modsDir, const std::vector<std::string>& order)
	{
		m_impl->ModsDir = modsDir;
		for (const std::string& name : order)
			m_impl->StartMod(name);
	}

	void LuaRuntime::Tick(float deltaSeconds)
	{
		Impl& impl = *m_impl;
		// Tasks queued during this tick run next tick (same rule as mdml::GameThread).
		std::vector<OwnedCallback> tasks;
		tasks.swap(impl.Pending);
		for (OwnedCallback& t : tasks)
			impl.SafeCall(*t.Owner, t.Fn, "GameThread.Run task");

		const std::vector<OwnedCallback> ticks = impl.TickCallbacks; // callbacks may register more
		for (const OwnedCallback& t : ticks)
			impl.SafeCall(*t.Owner, t.Fn, "Events.OnTick", deltaSeconds);
	}

	bool LuaRuntime::Reload(const std::string& name)
	{
		Impl& impl = *m_impl;
		LuaMod* old = impl.Find(name);
		if (!old)
			return false;
		impl.RemoveOwned(old); // drop every sol reference into the old state first
		std::erase_if(impl.Mods, [old](const std::unique_ptr<LuaMod>& m) { return m.get() == old; }); // lua_close
		return impl.StartMod(name);
	}

	std::vector<ModStatus> LuaRuntime::GetStatus() const
	{
		std::vector<ModStatus> out;
		for (auto& m : m_impl->Mods)
			out.push_back(ModStatus{m->Name, m->Faulted, m->Errors, m->LastError});
		return out;
	}

	size_t LuaRuntime::HookCount() const { return m_impl->Hooks.size(); }
	int LuaRuntime::ChecksPassed() const { return m_impl->Passed; }
	int LuaRuntime::ChecksFailed() const { return m_impl->Failed; }
}
