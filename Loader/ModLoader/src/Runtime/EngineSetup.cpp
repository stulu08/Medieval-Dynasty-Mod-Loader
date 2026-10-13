#include "Core.h"
#include "EngineSetup.h"

#include "Platform/IniFile.h"
#include "Platform/Logger.h"
#include "Platform/SymbolResolver.h"
#include "Runtime/LoaderConfig.h"

#include "EngineAddresses.h"
#include "EngineLayout.h"

// The Resolve* functions in src/Engine/EngineAddresses.cpp still take the old feather INI object and select their own
// sections (package 3D owns that file). Only they get it; everything else here reads through IniFile.
#include "INI.h"

namespace mdml::runtime {
	void ResolveEngine(const platform::IniFile& profile, const std::string& profilePath, const std::string& mdmlDir) {
		if (profile.GetInt("Symbols", "UsePdb", 1))
			platform::SymbolResolver::Init(std::filesystem::path(mdmlDir) / "Config/SymbolCache.txt");

		INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
		INI GameInfo(profilePath, true);

#pragma region GameInfo
		mdml::Addresses.IsUsingFChunkedFixedUObjectArray = profile.GetInt("GameInfo", "IsUsingFChunkedFixedUObjectArray", 0) != 0;
		mdml::Addresses.UsesFNamePool = profile.GetInt("GameInfo", "UsesFNamePool", 0);
		mdml::Addresses.IsUsingDeferedSpawn = profile.GetInt("GameInfo", "IsUsingDeferedSpawn", 0) != 0;
		mdml::Addresses.IsUsing4_22 = profile.GetInt("GameInfo", "IsUsing4_22", 0) != 0;
		mdml::Addresses.bIsDefaultObjectArrayed = profile.GetInt("GameInfo", "IsDefaultObjectArrayed", 0) != 0;
#pragma endregion

#pragma region GInfo defs
		mdml::ResolveEngineGlobals(GameInfo);
#pragma endregion

#pragma region UCore defs
		if (GameInfo.select("UObjectDef"))
		{
			mdml::LayoutStatus.IsUObjectMissing = false;
			mdml::Layout.UObject.Index = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Index", ""));
			mdml::Layout.UObject.Class = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Class", ""));
			mdml::Layout.UObject.Name = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Name", ""));
			mdml::Layout.UObject.Outer = (uint16_t)StringToDWord(GameInfo.get("UObjectDef", "Outer", ""));
		}

		if (GameInfo.select("UFieldDef"))
		{
			mdml::LayoutStatus.IsUFieldMissing = false;

			GameInfo.select("UFieldDef");
			mdml::Layout.UField.Next = (uint16_t)StringToDWord(GameInfo.get("UFieldDef", "Next", ""));
		}
		if (GameInfo.select("UStructDef"))
		{
			mdml::LayoutStatus.IsUStructMissing = false;
			GameInfo.select("UStructDef");
			mdml::Layout.UStruct.SuperStruct = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "SuperStruct", ""));
			mdml::Layout.UStruct.Children = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "Children", ""));
			mdml::Layout.UStruct.PropertiesSize = (uint16_t)StringToDWord(GameInfo.get("UStructDef", "PropertiesSize", ""));
		}
		if (GameInfo.select("UEnumDef")) {
			mdml::LayoutStatus.IsUEnumMissing = false;
			GameInfo.select("UEnumDef");
			mdml::Layout.UEnum.CppType = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppType", ""));
			mdml::Layout.UEnum.Names = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Names", ""));
			mdml::Layout.UEnum.CppForm = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "CppForm", ""));
			mdml::Layout.UEnum.Flags = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "Flags", ""));
			mdml::Layout.UEnum.DisplayNameFn = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "DisplayNameFn", ""));
			mdml::Layout.UEnum.UserDefDisplayNameMap = (uint16_t)StringToDWord(GameInfo.get("UEnumDef", "UserDefDisplayNameMap", ""));
		}
		if (GameInfo.select("UFunctionDef"))
		{
			mdml::LayoutStatus.IsUFunctionMissing = false;
			GameInfo.select("UFunctionDef");
			mdml::Layout.UFunction.FunctionFlags = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "FunctionFlags", ""));
			mdml::Layout.UFunction.NumParams = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "NumParams", ""));
			mdml::Layout.UFunction.ParamsSize = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ParamsSize", ""));
			mdml::Layout.UFunction.ReturnValueOffset = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "ReturnValueOffset", ""));
			mdml::Layout.UFunction.Func = (uint16_t)StringToDWord(GameInfo.get("UFunctionDef", "Func", ""));
		}

		if (GameInfo.select("Property"))
		{
			mdml::Addresses.bIsFProperty = GameInfo.getAs<int>("Property", "IsFProperty", 0);
			mdml::Layout.Property.ArrayDim = (uint16_t)StringToDWord(GameInfo.get("Property", "ArrayDim", ""));
			mdml::Layout.Property.ElementSize = (uint16_t)StringToDWord(GameInfo.get("Property", "ElementSize", ""));
			mdml::Layout.Property.Offset = (uint16_t)StringToDWord(GameInfo.get("Property", "Offset", ""));
			mdml::Layout.Property.Flags = (uint16_t)StringToDWord(GameInfo.get("Property", "Flags", ""));
			if (mdml::Addresses.bIsFProperty)
			{
				GameInfo.select("FField");
				mdml::Layout.FField.Name = (uint16_t)StringToDWord(GameInfo.get("FField", "Name", ""));
				mdml::Layout.FField.Next = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));
				mdml::Layout.FField.ClassPrivate = (uint16_t)StringToDWord(GameInfo.get("FField", "Next", ""));

				if (GameInfo.select("FFieldClass")) {
					mdml::Layout.FFieldClass.Name = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "Name", ""));
					mdml::Layout.FFieldClass.ID = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "ID", ""));
					mdml::Layout.FFieldClass.CastFlags = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "CastFlags", ""));
					mdml::Layout.FFieldClass.SuperClass = (uint16_t)StringToDWord(GameInfo.get("FFieldClass", "SuperClass", ""));
				}
			}
		}
		else
		{
			mdml::LayoutStatus.IsPropertyMissing = true;
		}
#pragma endregion

#pragma region Function defs
		// [FunctionInfo] functions, ProcessInternals, StaticConstructObject_Internal.
		mdml::ResolveEngineFunctions(GameInfo);
#pragma endregion

#pragma region PakOverwrite
		if (Config.bPakOverride) {
			// ResolvePakFunctions reads [PakOverwrite] without selecting it (old INI quirk, code inventory 4.6).
			GameInfo.select("PakOverwrite");
			mdml::ResolvePakFunctions(GameInfo);
		}
#pragma endregion

		platform::SymbolResolver::Shutdown();
	}
}

DWORD StringToDWord(std::string str)
{
	unsigned int m_dwIP;
	std::istringstream ss(&str[2]);
	ss >> std::hex >> m_dwIP;
	return m_dwIP;
}
