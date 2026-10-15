-- Lua scripting spike: standalone workspace, deliberately NOT included from the root premake5.lua.
-- Generate + build (from the repo root), see Loader/Scripting/README.md:
--   premake5 --file=Loader/Scripting/Scripting.lua vs2026        (or vs2022)
--   MSBuild Loader/Scripting/build/MDMLScriptingSpike.slnx -p:Configuration=Release -p:Platform=x64
-- Written for premake 5.0.0 (no `flags`, uses multiprocessorcompile).

workspace "MDMLScriptingSpike"
	location "build"
	configurations { "Release" }
	architecture "x86_64"
	startproject "ScriptingSpike"
	multiprocessorcompile "On"

	filter "configurations:Release"
		defines { "NDEBUG" }
		runtime "Release"
		optimize "Speed"
		symbols "On"
	filter {}

LuaDir = "%{wks.location}/../../../Dependencies/lua-5.4.9/src"
SolDir = "%{wks.location}/../../../Dependencies/sol2-3.3.0/include"

-- Lua 5.4.9 compiled as C++: lua_error throws a C++ exception instead of longjmp, so C++ destructors run when a Lua
-- error unwinds through bindings. Standard C++ exceptions (/EHsc) on purpose: with /EHa (MDML's "SEH" setting) Lua's
-- internal catch(...) would also swallow access violations (see docs/reports/lua-scripting-spike.md).
project "Lua"
	kind "StaticLib"
	language "C++"
	cppdialect "C++20"
	compileas "C++"
	staticruntime "off"
	exceptionhandling "On"
	targetdir ("%{wks.location}/../bin/%{cfg.buildcfg}")
	objdir ("%{wks.location}/../bin-int/%{cfg.buildcfg}/%{prj.name}")
	warnings "Default"

	files
	{
		"../../Dependencies/lua-5.4.9/src/*.c",
		"../../Dependencies/lua-5.4.9/src/*.h",
	}
	removefiles
	{
		"../../Dependencies/lua-5.4.9/src/lua.c",   -- standalone interpreter (has main)
		"../../Dependencies/lua-5.4.9/src/luac.c",  -- standalone compiler (has main)
	}
	defines { "_CRT_SECURE_NO_WARNINGS" }
	disablewarnings { "4244", "4267", "4334" } -- upstream integer conversion warnings (x64)

project "ScriptingSpike"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	exceptionhandling "On"
	targetdir ("%{wks.location}/../bin/%{cfg.buildcfg}")
	objdir ("%{wks.location}/../bin-int/%{cfg.buildcfg}/%{prj.name}")
	buildoptions { "/utf-8", "/bigobj" } -- /bigobj: sol2 usertypes generate many sections

	files
	{
		"src/**.h",
		"src/**.cpp",
		"test/**.lua",
	}
	includedirs
	{
		"src",
		LuaDir,
		SolDir,
	}
	-- Must be identical in every TU that includes sol.hpp. SOL_USING_CXX_LUA: Lua headers are included without
	-- extern "C" (Lua is compiled as C++).
	defines
	{
		"SOL_USING_CXX_LUA=1",
		"SOL_ALL_SAFETIES_ON=1",
	}
	links { "Lua" }
