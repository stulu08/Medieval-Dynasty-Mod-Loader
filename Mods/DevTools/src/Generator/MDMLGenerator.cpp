// MDMLGenerator - see MDMLGenerator.h.
//
// Adapted from Dumper-7's CppGenerator (Dumper/Generator/Private/Generators/CppGenerator.cpp, commit dd8fe34):
// GenerateStructMembers (layout, padding, bitfields), the parameter typing rules of GenerateFunctionInfo and the type
// mapping of GetMemberTypeStringWithoutConst follow the upstream logic. Dumper-7 by Encryqed/Fischsalat and
// contributors, https://github.com/Encryqed/Dumper-7, used with permission for open-source projects (issue #416).
// Everything else (accessor/call-helper emission, one header per package, package selection) is MDML's own.

#include "MDMLGenerator.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cctype>
#include <format>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>

#include "Unreal/ObjectArray.h"
#include "Managers/PackageManager.h"
#include "Managers/StructManager.h"
#include "Managers/EnumManager.h"
#include "Managers/MemberManager.h"
#include "Wrappers/StructWrapper.h"
#include "Wrappers/MemberWrappers.h"
#include "Wrappers/EnumWrapper.h"
#include "Settings.h"

namespace
{
	/* ---------------------------------------------------------------------------------------------------------------
	 * Hand-written core types (ModLoader/src/Engine, reachable through MDML/GeneratedSupport.h). The generator never
	 * emits a type with one of these names (only when the reflected name is unique); references use the core type.
	 * Keep in sync with the core. "Checked" structs get an always-on layout static_assert, the others only with
	 * MDML_SDK_STRICT_PREDEFINED_CHECKS (their hand-written layouts date from older game builds).
	 * ------------------------------------------------------------------------------------------------------------ */
	const std::unordered_set<std::string> PredefinedClasses = {
		"UObject", "UField", "UStruct", "UClass", "UFunction", "UEnum", "UScriptStruct", "UPackage", "UInterface", "UDynamicClass",
	};

	const std::unordered_map<std::string, bool /* bAlwaysChecked */> PredefinedStructs = {
		// Math / containers (Engine/UE4/Math, Containers, NamePool.h)
		{ "FVector", true }, { "FVector2D", true }, { "FVector4", true }, { "FRotator", true }, { "FQuat", true },
		{ "FTransform", true }, { "FPlane", true }, { "FColor", true }, { "FLinearColor", true }, { "FBox", true },
		{ "FBox2D", true }, { "FGuid", true }, { "FSoftObjectPath", true }, { "FSoftClassPath", true }, { "FKey", true },
		{ "FOrientedBox", false }, { "FBoxSphereBounds", false }, { "FUniqueObjectGuid", false },
		// CoreUObject structs kept in the hybrid CoreUObject/CoreTypes.h
		{ "FMatrix", false }, { "FIntPoint", false }, { "FIntVector", false }, { "FJoinabilitySettings", false },
		{ "FUniqueNetIdWrapper", false }, { "FTwoVectors", false }, { "FPackedNormal", false }, { "FPackedRGB10A2N", false },
		{ "FPackedRGBA16N", false }, { "FInterpCurvePointFloat", false }, { "FInterpCurveFloat", false },
		{ "FInterpCurvePointVector2D", false }, { "FInterpCurveVector2D", false }, { "FInterpCurvePointVector", false },
		{ "FInterpCurveVector", false }, { "FInterpCurvePointQuat", false }, { "FInterpCurveQuat", false },
		{ "FInterpCurvePointTwoVectors", false }, { "FInterpCurveTwoVectors", false }, { "FInterpCurvePointLinearColor", false },
		{ "FInterpCurveLinearColor", false }, { "FRandomStream", false }, { "FDateTime", false }, { "FFrameNumber", false },
		{ "FFrameRate", false }, { "FFrameTime", false }, { "FQualifiedFrameTime", false }, { "FTimecode", false },
		{ "FTimespan", false }, { "FPrimaryAssetType", false }, { "FPrimaryAssetId", false }, { "FFallbackStruct", false },
		{ "FFloatRangeBound", false }, { "FFloatRange", false }, { "FInt32RangeBound", false }, { "FInt32Range", false },
		{ "FFrameNumberRangeBound", false }, { "FFrameNumberRange", false }, { "FFloatInterval", false },
		{ "FInt32Interval", false }, { "FPolyglotTextData", false }, { "FAutomationEvent", false },
		{ "FAutomationExecutionEntry", false }, { "FARFilter", false }, { "FAssetBundleEntry", false },
		{ "FAssetBundleData", false }, { "FAssetData", false }, { "FTestUninitializedScriptStructMembersTest", false },
		// Names the core uses for non-reflected helpers; never emit a reflected struct with these names.
		{ "FName", false }, { "FString", false }, { "FText", false }, { "FWeakObjectPtr", false }, { "FSoftObjectPtr", false },
		{ "FLazyObjectPtr", false }, { "FScriptDelegate", false }, { "FScriptInterface", false }, { "FMath", false },
	};

	const std::unordered_set<std::string> PredefinedEnums = {
		"EEnumFlags", "EFunctionFlags", "EPropertyFlags", "EObjectFlags", "ELoadFlags", "EInternalObjectFlags",
		"EInterpCurveMode", "ERangeBoundTypes", "ELocalizedTextSourceCategory", "EAutomationEventType",
		"ELifetimeCondition", "EDataValidationResult", "EAppMsgType", "EAppReturnType",
		"EPropertyAccessChangeNotifyMode", "EUnit", "EMouseCursor", "EPixelFormat", "EAxis", "ELogTimes", "ESearchDir",
		"ESearchCase", "ESPMode",
	};

	/* --------------------------------------------------------------------------------------------------------------- */

	std::string Hex(int64 Value, int Width = 4)
	{
		return std::format("0x{:0{}X}", Value, Width);
	}

	std::string EscapeLiteral(const std::string& Text)
	{
		std::string Out;
		Out.reserve(Text.size() + 2);
		for (unsigned char c : Text)
		{
			if (c == '\\' || c == '"')
			{
				Out += '\\';
				Out += static_cast<char>(c);
			}
			else if (c < 0x20 || c >= 0x7F)
			{
				Out += std::format("\\x{:02X}\"\"", c); // "" ends the hex escape
			}
			else
			{
				Out += static_cast<char>(c);
			}
		}
		return Out;
	}

	/* Display name of a Blueprint enum entry ("Part of Group") -> C++ enumerator ("Part_of_Group"). Every character
	 * outside [A-Za-z0-9_] becomes '_', runs of '_' collapse, a leading digit gets a '_' prefix and C++ keywords a '_'
	 * suffix. Empty when nothing usable is left (the internal name is kept then). */
	bool IsCppKeyword(const std::string& Name)
	{
		static const std::unordered_set<std::string> Keywords = {
			"alignas", "alignof", "and", "asm", "auto", "bool", "break", "case", "catch", "char", "class", "const",
			"constexpr", "continue", "decltype", "default", "delete", "do", "double", "else", "enum", "explicit", "export",
			"extern", "false", "float", "for", "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace",
			"new", "noexcept", "not", "nullptr", "operator", "or", "private", "protected", "public", "register", "return",
			"short", "signed", "sizeof", "static", "struct", "switch", "template", "this", "throw", "true", "try",
			"typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void", "volatile", "while", "xor",
		};
		return Keywords.contains(Name);
	}

	std::string MakeEnumEntryName(const std::string& Display)
	{
		std::string Out;
		Out.reserve(Display.size() + 1);
		for (unsigned char c : Display)
		{
			const bool bValid = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_';
			const char Next = bValid ? static_cast<char>(c) : '_';
			if (Next == '_' && !Out.empty() && Out.back() == '_')
				continue;
			Out += Next;
		}
		while (!Out.empty() && Out.back() == '_')
			Out.pop_back();
		while (!Out.empty() && Out.front() == '_')
			Out.erase(Out.begin());
		if (Out.empty())
			return Out;
		if (Out.front() >= '0' && Out.front() <= '9')
			Out.insert(Out.begin(), '_');
		if (IsCppKeyword(Out))
			Out += '_';
		return Out;
	}

	/* Blueprint (user-defined) structs name their members "<Name>_<N>_<32 hex digit GUID>"
	 * (Hour_3_AEEFB5B84DEEE8C12F6A3182DE467E7D). Returns "<Name>", or Name unchanged when it has no such suffix. */
	std::string StripUserStructSuffix(const std::string& Name)
	{
		const size_t Last = Name.find_last_of('_');
		if (Last == std::string::npos || Last == 0 || Name.size() - Last - 1 != 32)
			return Name;
		for (size_t i = Last + 1; i < Name.size(); i++)
		{
			if (!std::isxdigit(static_cast<unsigned char>(Name[i])))
				return Name;
		}
		const size_t Prev = Name.find_last_of('_', Last - 1);
		if (Prev == std::string::npos || Prev == 0 || Prev + 1 == Last)
			return Name;
		for (size_t i = Prev + 1; i < Last; i++)
		{
			if (!std::isdigit(static_cast<unsigned char>(Name[i])))
				return Name;
		}
		return Name.substr(0, Prev);
	}

	/* C++ member names for a Blueprint struct without the GUID suffixes, like the old LegacyExporter (owner request
	 * 2026-10-15). Key = Dumper-7's member name. A short name that would collide (two members, a keyword, the struct's
	 * own name or a name MDML_STRUCT declares) keeps its full name. Empty for every other struct. */
	std::unordered_map<std::string, std::string> UserStructMemberNames(const StructWrapper& Struct, const MemberManager& Members, const std::string& StructName)
	{
		std::unordered_map<std::string, std::string> Result;
		if (!Struct.IsUnrealStruct() || Struct.GetUnrealStruct().GetClass().GetName() != "UserDefinedStruct")
			return Result;

		std::unordered_map<std::string, int32> Count;
		for (const PropertyWrapper& Member : Members.IterateMembers())
		{
			if (!Member.IsUnrealProperty())
				continue;
			const std::string Name = Member.GetName();
			const std::string Short = StripUserStructSuffix(Name);
			Count[Short]++;
			if (Short != Name)
				Result.emplace(Name, Short);
		}
		for (auto It = Result.begin(); It != Result.end(); )
		{
			const std::string& Short = It->second;
			const bool bReserved = Short == StructName || Short == "StaticStruct" || Short == "ValidateLayout" || Short.starts_with("_mdml_");
			if (Count[Short] > 1 || bReserved || IsCppKeyword(Short))
				It = Result.erase(It);
			else
				++It;
		}
		return Result;
	}

	std::string NarrowLiteral(const std::string& Text) { return "\"" + EscapeLiteral(Text) + "\""; }
	std::string WideLiteral(const std::string& Text) { return "L\"" + EscapeLiteral(Text) + "\""; }

	/* Full object path as StaticFindObject expects it: "/Script/Engine.Actor", "/Game/X/BP_Y.BP_Y_C". */
	std::string GetObjectPath(UEObject Object)
	{
		std::string Path = Object.GetNameWithPath();
		for (UEObject Outer = Object.GetOuter(); Outer; Outer = Outer.GetOuter())
			Path = Outer.GetNameWithPath() + "." + Path;
		return Path;
	}

	std::string TypeFromSize(int32 Size, bool bIsSigned = false)
	{
		switch (Size)
		{
		case 1: return bIsSigned ? "int8_t" : "uint8_t";
		case 2: return bIsSigned ? "int16_t" : "uint16_t";
		case 4: return bIsSigned ? "int32_t" : "uint32_t";
		case 8: return bIsSigned ? "int64_t" : "uint64_t";
		default: return "uint8_t";
		}
	}

	bool IsPredefinedStructName(const std::string& Name, bool bIsUnique)
	{
		return bIsUnique && PredefinedStructs.contains(Name);
	}

	std::string GetStructPrefixedName(const StructWrapper& Struct)
	{
		auto [ValidName, bIsUnique] = Struct.GetUniqueName();
		if (bIsUnique) [[likely]]
			return ValidName;
		return PackageManager::GetName(Struct.GetUnrealStruct().GetPackageIndex()) + "::" + ValidName;
	}

	std::string GetEnumPrefixedName(const EnumWrapper& Enum)
	{
		auto [ValidName, bIsUnique] = Enum.GetUniqueName();
		if (bIsUnique) [[likely]]
			return ValidName;
		return PackageManager::GetName(Enum.GetUnrealEnum().GetPackageIndex()) + "::" + ValidName;
	}

	std::string GetEnumUnderlyingType(const EnumWrapper& Enum)
	{
		static constexpr std::array<const char*, 8> TypesBySize = { "int8_t", "int16_t", "int32_t", "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t" };
		const uint8 Index = std::countr_zero(Enum.GetUnderlyingTypeSize()) + (Enum.IsUnderlyingTypeSigned() ? 0 : 4);
		return Index <= 7 ? TypesBySize[Index] : "uint8_t";
	}

	std::string OpaqueType(int32 Size, int32 Alignment)
	{
		return std::format("::mdml::sdk::TOpaque<{}, {}>", Hex(Size), Hex((std::max)(Alignment, 1), 2));
	}

	struct FTypeContext
	{
		int32 PackageIndex = -1;
		bool* bOutOpaque = nullptr;
		std::string* OutNote = nullptr;
	};

	void MarkOpaque(const FTypeContext& Ctx, const std::string& Why)
	{
		if (Ctx.bOutOpaque)
			*Ctx.bOutOpaque = true;
		if (Ctx.OutNote)
			*Ctx.OutNote = Why;
	}

	/* Adapted from CppGenerator::GetMemberTypeStringWithoutConst; maps onto MDML's core types. */
	std::string GetMemberType(UEProperty Member, const FTypeContext& Ctx)
	{
		auto [Class, FieldClass] = Member.GetClass();
		const EClassCastFlags Flags = Class ? Class.GetCastFlags() : FieldClass.GetCastFlags();

		if (Flags & EClassCastFlags::ByteProperty)
		{
			if (UEEnum Enum = Member.Cast<UEByteProperty>().GetEnum())
			{
				EnumWrapper WrappedEnum(Enum);
				if (WrappedEnum.GetUnderlyingTypeSize() > sizeof(uint8))
					return std::format("TEnumAsByte<{}>", GetEnumPrefixedName(WrappedEnum));
				return GetEnumPrefixedName(WrappedEnum);
			}
			return "uint8_t";
		}
		if (Flags & EClassCastFlags::UInt16Property) return "uint16_t";
		if (Flags & EClassCastFlags::UInt32Property) return "uint32_t";
		if (Flags & EClassCastFlags::UInt64Property) return "uint64_t";
		if (Flags & EClassCastFlags::Int8Property) return "int8_t";
		if (Flags & EClassCastFlags::Int16Property) return "int16_t";
		if (Flags & EClassCastFlags::IntProperty) return "int32_t";
		if (Flags & EClassCastFlags::Int64Property) return "int64_t";
		if (Flags & EClassCastFlags::FloatProperty) return "float";
		if (Flags & EClassCastFlags::DoubleProperty) return "double";
		if (Flags & EClassCastFlags::ClassProperty)
			return "class UClass*"; // TSubclassOf<X> in UE; the core's TSubclassOf is not default-constructible
		if (Flags & EClassCastFlags::NameProperty) return "FName";
		if (Flags & EClassCastFlags::StrProperty) return "FString";
		if (Flags & EClassCastFlags::TextProperty) return "FText";
		if (Flags & EClassCastFlags::BoolProperty)
			return Member.Cast<UEBoolProperty>().IsNativeBool() ? "bool" : TypeFromSize(Member.GetSize());
		if (Flags & EClassCastFlags::StructProperty)
		{
			const StructWrapper Underlying = Member.Cast<UEStructProperty>().GetUnderlayingStruct();
			if (Underlying.IsCyclicWithPackage(Ctx.PackageIndex)) [[unlikely]]
			{
				MarkOpaque(Ctx, "struct from a cyclic package: " + Underlying.GetName());
				return OpaqueType(Underlying.GetSize(), Underlying.GetAlignment());
			}
			return "struct " + GetStructPrefixedName(Underlying);
		}
		if (Flags & EClassCastFlags::ArrayProperty)
			return std::format("TArray<{}>", GetMemberType(Member.Cast<UEArrayProperty>().GetInnerProperty(), Ctx));
		if (Flags & EClassCastFlags::WeakObjectProperty)
		{
			if (UEClass PropertyClass = Member.Cast<UEWeakObjectProperty>().GetPropertyClass())
				return std::format("TWeakObjectPtr<class {}>", GetStructPrefixedName(PropertyClass));
			return "TWeakObjectPtr<class UObject>";
		}
		if (Flags & EClassCastFlags::LazyObjectProperty)
		{
			if (UEClass PropertyClass = Member.Cast<UELazyObjectProperty>().GetPropertyClass())
				return std::format("TLazyObjectPtr<class {}>", GetStructPrefixedName(PropertyClass));
			return "TLazyObjectPtr<class UObject>";
		}
		if (Flags & EClassCastFlags::SoftClassProperty)
			return "TSoftObjectPtr<class UClass>"; // same layout as TSoftClassPtr, which the core does not have
		if (Flags & EClassCastFlags::SoftObjectProperty)
		{
			if (UEClass PropertyClass = Member.Cast<UESoftObjectProperty>().GetPropertyClass())
				return std::format("TSoftObjectPtr<class {}>", GetStructPrefixedName(PropertyClass));
			return "TSoftObjectPtr<class UObject>";
		}
		if (Flags & EClassCastFlags::ObjectProperty)
		{
			if (UEClass PropertyClass = Member.Cast<UEObjectProperty>().GetPropertyClass())
				return std::format("class {}*", GetStructPrefixedName(PropertyClass));
			return "class UObject*";
		}
		if (Flags & EClassCastFlags::MapProperty)
		{
			UEMapProperty AsMap = Member.Cast<UEMapProperty>();
			return std::format("TMap<{}, {}>", GetMemberType(AsMap.GetKeyProperty(), Ctx), GetMemberType(AsMap.GetValueProperty(), Ctx));
		}
		if (Flags & EClassCastFlags::SetProperty)
			return std::format("TSet<{}>", GetMemberType(Member.Cast<UESetProperty>().GetElementProperty(), Ctx));
		if (Flags & EClassCastFlags::EnumProperty)
		{
			UEEnumProperty AsEnum = Member.Cast<UEEnumProperty>();
			if (UEEnum Enum = AsEnum.GetEnum())
			{
				EnumWrapper WrappedEnum(Enum);
				if (WrappedEnum.GetUnderlyingTypeSize() == Member.GetSize())
					return GetEnumPrefixedName(WrappedEnum);
				return TypeFromSize(Member.GetSize()); // enum size differs from the property: keep the layout
			}
			return GetMemberType(AsEnum.GetUnderlayingProperty(), Ctx);
		}
		if (Flags & EClassCastFlags::InterfaceProperty)
		{
			if (UEClass PropertyClass = Member.Cast<UEInterfaceProperty>().GetPropertyClass())
				return std::format("TScriptInterface<class {}>", GetStructPrefixedName(PropertyClass));
			return "TScriptInterface<class UInterface>";
		}
		if (Flags & EClassCastFlags::DelegateProperty)
			return "FScriptDelegate";
		if (Flags & EClassCastFlags::MulticastInlineDelegateProperty)
			return "FMulticastScriptDelegate";

		/* FieldPath, MulticastSparseDelegate, Optional, Utf8/AnsiStr, ...: no core type yet -> opaque bytes */
		MarkOpaque(Ctx, "no core type for " + (Class ? Class.GetCppName() : FieldClass.GetCppName()));
		return OpaqueType(Member.GetSize(), Member.GetAlignment());
	}

	std::string MakeMemberLine(const std::string& Declaration, const std::string& Comment)
	{
		if (Declaration.size() < 96)
			return std::format("\t{:<96} // {}\n", Declaration, Comment);
		return std::format("\t{} // {}\n", Declaration, Comment);
	}

	/* Adapted from CppGenerator::GenerateMembers (real layout with byte/bit padding). Only for ScriptStructs. */
	std::string GenerateStructMembers(const StructWrapper& Struct, const MemberManager& Members, int32 SuperSize, int32 PackageIndex, const std::string& StructName, std::vector<std::string>& OutAsserts, std::vector<std::string>& Notes)
	{
		std::string Out;

		bool bLastPropertyWasBitField = false;
		int32 PrevPropertyEnd = SuperSize;
		int32 PrevBitPropertyEnd = 0;
		int32 PrevBitPropertyEndBit = 1;
		uint8 PrevBitPropertySize = 0x1;
		int32 PrevBitPropertyOffset = 0x0;
		uint64 PrevNumBitsInUnderlayingType = 0x8;

		/* Same /EHa guard as for the enum display names: a failure only costs the short names of this struct. */
		std::unordered_map<std::string, std::string> ShortNames;
		try
		{
			ShortNames = UserStructMemberNames(Struct, Members, StructName);
		}
		catch (...)
		{
			ShortNames.clear();
			const std::string Note = std::format("struct {}: shortening the Blueprint member names failed, full names kept", StructName);
			std::cerr << "MDMLGenerator: " << Note << std::endl;
			Notes.push_back(Note);
		}

		for (const PropertyWrapper& Member : Members.IterateMembers())
		{
			if (!Member.IsUnrealProperty())
				continue;

			const int32 MemberOffset = Member.GetOffset();
			const int32 MemberSize = Member.GetSize();
			const int32 CurrentPropertyEnd = MemberOffset + MemberSize;
			const bool bIsBitField = Member.IsBitField();

			std::string Comment = std::format("{}({})({})", Hex(MemberOffset), Hex(MemberSize), Member.GetFlagsOrCustomComment());

			if (CurrentPropertyEnd > PrevPropertyEnd && bLastPropertyWasBitField && bIsBitField && PrevBitPropertyEndBit < PrevNumBitsInUnderlayingType)
			{
				Out += MakeMemberLine(std::format("{} _mdml_BitPad_{:X}_{:X} : {};", TypeFromSize(PrevBitPropertySize), PrevBitPropertyOffset, PrevBitPropertyEndBit, PrevNumBitsInUnderlayingType - PrevBitPropertyEndBit), "(bit padding, new byte)");
				PrevBitPropertyEndBit = 0;
			}

			if (MemberOffset > PrevPropertyEnd)
				Out += MakeMemberLine(std::format("uint8_t _mdml_Pad_{:X}[{}];", PrevPropertyEnd, Hex(MemberOffset - PrevPropertyEnd, 1)), std::format("{}({})(padding)", Hex(PrevPropertyEnd), Hex(MemberOffset - PrevPropertyEnd)));

			if (bIsBitField)
			{
				const uint8 BitFieldIndex = Member.GetBitIndex();
				const uint8 BitSize = Member.GetBitCount();

				if (CurrentPropertyEnd > PrevPropertyEnd)
					PrevBitPropertyEndBit = 0x0;

				Comment = std::format("{}({})(BitIndex: 0x{:02X}, {})", Hex(MemberOffset), Hex(MemberSize), BitFieldIndex, Member.GetFlagsOrCustomComment());

				if (PrevBitPropertyEnd < MemberOffset)
					PrevBitPropertyEndBit = 0;

				if (PrevBitPropertyEndBit < BitFieldIndex)
					Out += MakeMemberLine(std::format("{} _mdml_BitPad_{:X}_{:X} : {};", TypeFromSize(MemberSize), MemberOffset, PrevBitPropertyEndBit, BitFieldIndex - PrevBitPropertyEndBit), "(bit padding)");

				PrevBitPropertyEndBit = BitFieldIndex + BitSize;
				PrevBitPropertyEnd = MemberOffset + MemberSize;
				PrevBitPropertySize = MemberSize;
				PrevBitPropertyOffset = MemberOffset;
				PrevNumBitsInUnderlayingType = (MemberSize * 0x8ull);
			}

			bLastPropertyWasBitField = bIsBitField;
			PrevPropertyEnd = MemberOffset + (MemberSize * Member.GetArrayDim());

			std::string Name = Member.GetName();
			if (auto Short = ShortNames.find(Name); Short != ShortNames.end())
				Name = Short->second;
			bool bOpaque = false;
			std::string OpaqueWhy;
			std::string Type = bIsBitField ? TypeFromSize(MemberSize) : GetMemberType(Member.GetUnrealProperty(), FTypeContext{ PackageIndex, &bOpaque, &OpaqueWhy });
			if (bOpaque)
				Notes.push_back(std::format("opaque member {}::{} ({})", StructName, Name, OpaqueWhy));

			std::string Declarator = Name;
			if (Member.GetArrayDim() > 1)
				Declarator += std::format("[{}]", Hex(Member.GetArrayDim(), 1));
			else if (bIsBitField)
				Declarator += std::format(" : {}", Member.GetBitCount());

			Out += MakeMemberLine(Type + " " + Declarator + ";", Comment);

			if (!bIsBitField)
				OutAsserts.push_back(std::format("static_assert(offsetof({0}, {1}) == {2}, \"MDML SDK: wrong offset of {0}::{1}\");\n", StructName, Name, Hex(MemberOffset)));
		}

		const int32 MissingByteCount = Struct.GetUnalignedSize() - PrevPropertyEnd;
		if (MissingByteCount > 0x0)
			Out += MakeMemberLine(std::format("uint8_t _mdml_Pad_{:X}[{}];", PrevPropertyEnd, Hex(MissingByteCount, 1)), std::format("{}({})(padding to the struct size)", Hex(PrevPropertyEnd), Hex(MissingByteCount)));

		return Out;
	}

	struct FParam
	{
		PropertyWrapper Wrapper;
		std::string Name;     // C++ name
		std::string RawName;  // UE name
		std::string Type;     // field type in the parameter struct
		std::string ArgType;  // type in the C++ signature
		int32 Offset;
		int32 Size;
		bool bIsRet;
		bool bIsOutPtr;
		bool bIsOutRef;       // non-const reference: copied back after the call
	};

	/* Parameter typing follows CppGenerator::GenerateFunctionInfo. */
	std::string GenerateFunction(const FunctionWrapper& Func, const StructWrapper& Owner, int32 PackageIndex, bool bIsInterface, MDMLGenerator::FStats& Stats)
	{
		const UEFunction UnrealFunc = Func.GetUnrealFunction();
		const std::string Name = Func.GetName();
		const std::string RawName = UnrealFunc.GetName();
		const std::string FullName = UnrealFunc.GetFullName();
		const bool bIsStatic = Func.IsStatic();
		const bool bIsConst = Func.IsConst() && !bIsStatic;

		std::vector<FParam> Params;
		std::string RetType = "void";
		std::string SkipReason;

		MemberManager FuncMembers = Func.GetMembers();
		for (const PropertyWrapper& Param : FuncMembers.IterateMembers())
		{
			if (!Param.IsUnrealProperty() || !Param.HasPropertyFlags(EPropertyFlags::Parm))
				continue;

			if (Param.GetArrayDim() > 1)
				SkipReason = "static array parameter " + Param.GetName();

			bool bOpaque = false;
			std::string OpaqueWhy;
			std::string Type = GetMemberType(Param.GetUnrealProperty(), FTypeContext{ PackageIndex, &bOpaque, &OpaqueWhy });
			if (bOpaque)
				Stats.Notes.push_back(std::format("opaque parameter {}::{}({}) ({})", Owner.GetName(), Name, Param.GetName(), OpaqueWhy));

			FParam P{ Param };
			P.Name = Param.GetName();
			P.RawName = Param.GetUnrealProperty().GetName();
			P.Type = Type;
			P.Offset = Param.GetOffset();
			P.Size = Param.GetSize() * Param.GetArrayDim();
			P.bIsRet = Param.IsReturnParam();

			const bool bConst = Param.HasPropertyFlags(EPropertyFlags::ConstParm);
			const bool bIsRef = Param.HasPropertyFlags(EPropertyFlags::ReferenceParm);
			const bool bIsOut = bIsRef || Param.HasPropertyFlags(EPropertyFlags::OutParm);
			const bool bIsMoveType = Param.IsType(EClassCastFlags::StructProperty | EClassCastFlags::ArrayProperty | EClassCastFlags::StrProperty | EClassCastFlags::TextProperty | EClassCastFlags::MapProperty | EClassCastFlags::SetProperty);

			std::string ArgType = Type;
			if (P.bIsRet)
			{
				RetType = Type;
			}
			else
			{
				if (bConst && (!bIsOut || bIsRef))
					ArgType = "const " + ArgType;
				if (bIsOut)
					ArgType += bIsRef ? "&" : "*";
				if (!bIsOut && !bIsRef && bIsMoveType)
				{
					ArgType += "&";
					if (!bConst)
						ArgType = "const " + ArgType;
				}
				P.bIsOutPtr = bIsOut && !bIsRef;
				P.bIsOutRef = bIsOut && bIsRef && !bConst;
			}
			P.ArgType = ArgType;
			Params.push_back(std::move(P));
		}

		std::string Out = std::format("\n\t// Function {}\n\t// ({})\n", FullName, Func.StringifyFlags());

		if (!SkipReason.empty())
		{
			Stats.NumSkippedFunctions++;
			Stats.Notes.push_back(std::format("skipped function {}::{} ({})", Owner.GetName(), Name, SkipReason));
			return Out + std::format("\t// not generated: {}\n", SkipReason);
		}

		std::string Signature;
		for (const FParam& P : Params)
		{
			if (P.bIsRet)
				continue;
			if (!Signature.empty())
				Signature += ", ";
			Signature += P.ArgType + " " + P.Name;
		}

		Out += std::format("\t{}{} {}({}){}\n\t{{\n", bIsStatic ? "static " : "", RetType, Name, Signature, bIsConst ? " const" : "");

		const std::string Context = std::format("{}.{}", Owner.GetRawName(), EscapeLiteral(RawName));
		int32 DumpParmsSize = 0;
		for (const FParam& P : Params)
			DumpParmsSize = (std::max)(DumpParmsSize, P.Offset + P.Size);

		const std::string Flags = bIsStatic ? "::mdml::sdk::FunctionDesc_Static" : (bIsInterface ? "::mdml::sdk::FunctionDesc_Dynamic" : "::mdml::sdk::FunctionDesc_None");

		if (Params.empty())
		{
			Out += std::format("\t\tstatic constexpr ::mdml::sdk::FFunctionDesc _mdml_f{{ _mdml_OwnerName, {}, 0x0000, 0, nullptr, 0, {} }};\n", NarrowLiteral(RawName), Flags);
			Out += "\t\tstatic ::mdml::sdk::FFunctionSlot _mdml_s;\n";
			Out += bIsStatic ? "\t\t::mdml::sdk::CallStaticFunction(StaticClass(), _mdml_s, _mdml_f, nullptr);\n" : "\t\t::mdml::sdk::CallFunction(this, _mdml_s, _mdml_f, nullptr);\n";
			Out += "\t}\n";
			Stats.NumFunctions++;
			return Out;
		}

		/* parameter struct with the dump layout */
		Out += "\t\tstruct _mdml_FParams\n\t\t{\n";
		int32 PrevEnd = 0;
		for (const FParam& P : Params)
		{
			if (P.Offset > PrevEnd)
				Out += "\t" + MakeMemberLine(std::format("uint8_t _mdml_Pad_{:X}[{}];", PrevEnd, Hex(P.Offset - PrevEnd, 1)), std::format("{}({})(padding)", Hex(PrevEnd), Hex(P.Offset - PrevEnd)));
			Out += "\t" + MakeMemberLine(P.Type + " " + P.Name + ";", std::format("{}({})({})", Hex(P.Offset), Hex(P.Size), P.Wrapper.GetFlagsOrCustomComment()));
			PrevEnd = (std::max)(PrevEnd, P.Offset + P.Size);
		}
		Out += "\t\t};\n";
		for (const FParam& P : Params)
			Out += std::format("\t\tstatic_assert(offsetof(_mdml_FParams, {}) == {}, \"MDML SDK: parameter layout of {}\");\n", P.Name, Hex(P.Offset), Context);

		Out += "\t\tstatic constexpr ::mdml::sdk::FParamDesc _mdml_p[] = {\n";
		for (const FParam& P : Params)
			Out += std::format("\t\t\t{{ {}, {}, {} }},\n", NarrowLiteral(P.RawName), Hex(P.Offset), Hex(P.Size));
		Out += "\t\t};\n";
		Out += std::format("\t\tstatic constexpr ::mdml::sdk::FFunctionDesc _mdml_f{{ _mdml_OwnerName, {}, {}, static_cast<int32_t>(sizeof(_mdml_FParams)), _mdml_p, {}, {} }};\n",
			NarrowLiteral(RawName), Hex(DumpParmsSize), Params.size(), Flags);
		Out += "\t\tstatic ::mdml::sdk::FFunctionSlot _mdml_s;\n";
		Out += "\t\t_mdml_FParams _mdml_Parms{};\n";
		for (const FParam& P : Params)
		{
			if (P.bIsRet || P.bIsOutPtr)
				continue;
			/* A ConstParm pointer is `const T*` in the signature but `T*` in the params struct (ProcessEvent parameters are never const in memory). */
			const bool bConstPointer = P.ArgType.starts_with("const ") && P.Type.ends_with('*');
			if (bConstPointer)
				Out += std::format("\t\t_mdml_Parms.{0} = const_cast<{1}>({0});\n", P.Name, P.Type);
			else
				Out += std::format("\t\t_mdml_Parms.{0} = {0};\n", P.Name);
		}

		const bool bHasRet = RetType != "void";
		bool bHasOuts = false;
		for (const FParam& P : Params)
			bHasOuts |= (P.bIsOutPtr || P.bIsOutRef);

		const std::string Call = bIsStatic ? "::mdml::sdk::CallStaticFunction(StaticClass(), _mdml_s, _mdml_f, &_mdml_Parms)" : "::mdml::sdk::CallFunction(this, _mdml_s, _mdml_f, &_mdml_Parms)";
		if (!bHasRet && !bHasOuts)
		{
			Out += "\t\t" + Call + ";\n";
		}
		else
		{
			Out += std::format("\t\tif (!{})\n\t\t\treturn{};\n", Call, bHasRet ? " {}" : "");
			for (const FParam& P : Params)
			{
				if (P.bIsOutPtr)
					Out += std::format("\t\tif ({0} != nullptr)\n\t\t\t*{0} = _mdml_Parms.{0};\n", P.Name);
				else if (P.bIsOutRef)
					Out += std::format("\t\t{0} = _mdml_Parms.{0};\n", P.Name);
			}
			for (const FParam& P : Params)
			{
				if (P.bIsRet)
					Out += std::format("\t\treturn _mdml_Parms.{};\n", P.Name);
			}
		}
		Out += "\t}\n";
		Stats.NumFunctions++;
		return Out;
	}

	void GenerateClass(const StructWrapper& Class, int32 PackageIndex, std::string& Out, MDMLGenerator::FStats& Stats)
	{
		const std::string Name = GetStructPrefixedName(Class);
		const UEStruct Unreal = Class.GetUnrealStruct();
		const StructWrapper Super = Class.GetSuper();
		const bool bIsInterface = Class.IsInterface();

		std::string SuperName = Super.IsValid() ? GetStructPrefixedName(Super) : std::string();
		Out += std::format("\n// {}\n// Dump size {}{}\n", Class.GetFullName(), Hex(Class.GetSize()),
			Super.IsValid() ? std::format(" (super {} {})", SuperName, Hex(Super.GetSize())) : std::string());
		Out += std::format("class {}{}\n{{\n", Name, Super.IsValid() ? " : public " + SuperName : std::string());
		Out += std::format("\tMDML_CLASS({}, {})\n", NarrowLiteral(Class.GetRawName()), WideLiteral(GetObjectPath(Unreal)));

		MemberManager Members = Class.GetMembers();
		bool bWrotePublic = false;
		auto EnsurePublic = [&]() { if (!bWrotePublic) { Out += "public:\n"; bWrotePublic = true; } };

		for (const PropertyWrapper& Member : Members.IterateMembers())
		{
			if (!Member.IsUnrealProperty())
				continue;
			EnsurePublic();

			const UEProperty Property = Member.GetUnrealProperty();
			const std::string MemberName = Member.GetName();
			const std::string Raw = NarrowLiteral(Property.GetName());
			const int32 Offset = Member.GetOffset();
			const std::string Comment = std::format("{}({})({})", Hex(Offset), Hex(Member.GetSize()), Member.GetFlagsOrCustomComment());

			if (Member.IsBitField())
			{
				UEBoolProperty AsBool = Property.Cast<UEBoolProperty>();
				Out += MakeMemberLine(std::format("MDML_BITFIELD({}, {}, {}, 0x{:02X})", MemberName, Raw, Hex(Offset + AsBool.GetByteOffset()), AsBool.GetFieldMask()), Comment);
				continue;
			}

			bool bOpaque = false;
			std::string OpaqueWhy;
			const std::string Type = GetMemberType(Property, FTypeContext{ PackageIndex, &bOpaque, &OpaqueWhy });
			if (bOpaque)
			{
				Stats.NumOpaqueMembers++;
				Stats.Notes.push_back(std::format("opaque member {}::{} ({})", Name, MemberName, OpaqueWhy));
			}

			if (Member.GetArrayDim() > 1)
				Out += MakeMemberLine(std::format("MDML_MEMBER_ARRAY({}, {}, {}, {}, {})", MemberName, Raw, Hex(Offset), Member.GetArrayDim(), Type), Comment);
			else
				Out += MakeMemberLine(std::format("MDML_MEMBER({}, {}, {}, {})", MemberName, Raw, Hex(Offset), Type), Comment);
		}

		for (const FunctionWrapper& Func : Members.IterateFunctions())
		{
			if (Func.IsPredefined())
				continue;
			/* Signature of a delegate, not a callable function */
			if (Func.GetFunctionFlags() & EFunctionFlags::Delegate)
				continue;
			EnsurePublic();
			Out += GenerateFunction(Func, Class, PackageIndex, bIsInterface, Stats);
		}

		Out += "};\n";
		Stats.NumClasses++;
	}

	void GenerateStruct(const StructWrapper& Struct, int32 PackageIndex, std::string& Out, MDMLGenerator::FStats& Stats)
	{
		const std::string Name = GetStructPrefixedName(Struct);
		auto [UniqueName, bIsUnique] = Struct.GetUniqueName();

		if (IsPredefinedStructName(UniqueName, bIsUnique))
		{
			const bool bAlways = PredefinedStructs.at(UniqueName);
			Out += std::format("\n// {} -> hand-written core type UE4::{} (layout check)\n{}({}, {}, {})\n", Struct.GetFullName(), UniqueName,
				bAlways ? "MDML_PREDEFINED_CHECK" : "MDML_PREDEFINED_CHECK_STRICT", UniqueName, Hex(Struct.GetSize()), Hex(Struct.GetAlignment(), 2));
			return;
		}

		const StructWrapper Super = Struct.GetSuper();
		const bool bHasSuper = Super.IsValid();
		int32 SuperSize = 0;
		if (bHasSuper)
			SuperSize = Super.HasReusedTrailingPadding() ? Super.GetUnalignedSize() : Super.GetSize();

		const bool bReusedPadding = Struct.HasReusedTrailingPadding();
		std::string Alignment;
		if (Struct.ShouldUseExplicitAlignment() || bReusedPadding)
			Alignment = std::format("alignas({}) ", Hex(Struct.GetAlignment(), 2));

		Out += std::format("\n// {}\n// Size {}, alignment {}{}\n", Struct.GetFullName(), Hex(Struct.GetSize()), Hex(Struct.GetAlignment(), 2),
			bHasSuper ? std::format(" (super {} {})", GetStructPrefixedName(Super), Hex(Super.GetSize())) : std::string());
		if (bReusedPadding)
			Out += "#pragma pack(push, 0x1)\n";
		Out += std::format("struct {}{}{}\n{{\n", Alignment, Name, bHasSuper ? " : public " + GetStructPrefixedName(Super) : std::string());
		Out += std::format("\tMDML_STRUCT({}, {}, {})\npublic:\n", UniqueName, NarrowLiteral(Struct.GetRawName()), WideLiteral(GetObjectPath(Struct.GetUnrealStruct())));

		std::vector<std::string> Asserts;
		MemberManager Members = Struct.GetMembers();
		std::vector<std::string> Notes;
		Out += GenerateStructMembers(Struct, Members, SuperSize, PackageIndex, Name, Asserts, Notes);
		for (auto& Note : Notes)
		{
			Stats.NumOpaqueMembers++;
			Stats.Notes.push_back(std::move(Note));
		}
		Out += "};\n";
		if (bReusedPadding)
			Out += "#pragma pack(pop)\n";

		const int32 Size = Struct.GetSize() > 0 ? Struct.GetSize() : 1;
		Out += std::format("static_assert(sizeof({0}) == {1}, \"MDML SDK: wrong size of {0}\");\n", Name, Hex(Size));
		Out += std::format("static_assert(alignof({0}) == {1}, \"MDML SDK: wrong alignment of {0}\");\n", Name, Hex(Struct.GetAlignment(), 2));
		for (const std::string& Assert : Asserts)
			Out += Assert;
		Stats.NumStructs++;
	}

	void GenerateEnum(const EnumWrapper& Enum, std::string& Out, MDMLGenerator::FStats& Stats)
	{
		auto [UniqueName, bIsUnique] = Enum.GetUniqueName();
		if (bIsUnique && PredefinedEnums.contains(UniqueName))
		{
			Out += std::format("\n// {} -> hand-written core enum UE4::{}\n", Enum.GetFullName(), UniqueName);
			return;
		}

		const bool bSigned = Enum.IsUnderlyingTypeSigned();
		Out += std::format("\n// {}\nenum class {} : {}\n{{\n", Enum.GetFullName(), GetEnumPrefixedName(Enum), GetEnumUnderlyingType(Enum));

		/* Blueprint enums store their entries as NewEnumerator0..N; the names the designer typed are display names
		 * (UUserDefinedEnum::DisplayNameMap). Use those, like the old LegacyExporter did (owner request 2026-10-15). */
		std::unordered_map<uint64, std::string> DisplayNames;
		if (MDMLGenerator::EnumDisplayNames)
		{
			/* The callback calls into the engine (UUserDefinedEnum::GetDisplayNameTextByIndex, FText::ToString). The
			 * workspace builds with /EHa, so catch (...) also catches an access violation there: that enum keeps its
			 * internal names instead of the whole generation failing. */
			std::vector<std::pair<uint64_t, std::string>> Names;
			try
			{
				Names = MDMLGenerator::EnumDisplayNames(Enum.GetUnrealEnum().GetAddress());
			}
			catch (...)
			{
				Names.clear();
				const std::string Note = std::format("enum {}: reading the display names failed, internal names kept", Enum.GetFullName());
				std::cerr << "MDMLGenerator: " << Note << std::endl;
				Stats.Notes.push_back(Note);
			}
			for (auto& [Value, Display] : Names)
				DisplayNames.emplace(Value, std::move(Display));
		}
		std::unordered_set<std::string> UsedNames;
		auto EntryName = [&](const EnumCollisionInfo& Info) -> std::string
		{
			std::string Name = Info.GetUniqueName();
			if (auto It = DisplayNames.find(Info.GetValue()); It != DisplayNames.end())
			{
				std::string Valid = MakeEnumEntryName(It->second);
				if (!Valid.empty())
					Name = std::move(Valid);
			}
			std::string Unique = Name;
			for (int32 Suffix = 2; !UsedNames.insert(Unique).second; ++Suffix)
				Unique = std::format("{}_{}", Name, Suffix);
			return Unique;
		};

		/* The underlying type must match the game's in-struct layout, so values that do not fit are dropped (not widened). */
		const int32 UnderlyingBits = Enum.GetUnderlyingTypeSize() * 8;
		for (const EnumCollisionInfo& Info : Enum.GetMembers())
		{
			const uint64 Value = Info.GetValue();
			bool bFits = true;
			if (UnderlyingBits > 0 && UnderlyingBits < 64)
			{
				if (bSigned)
				{
					const int64 Signed = static_cast<int64>(Value);
					bFits = Signed >= -(int64(1) << (UnderlyingBits - 1)) && Signed <= (int64(1) << (UnderlyingBits - 1)) - 1;
				}
				else
				{
					bFits = Value < (uint64(1) << UnderlyingBits);
				}
			}
			if (!bFits)
			{
				const std::string Dropped = std::format("{} = {}", Info.GetUniqueName(), bSigned ? std::to_string(static_cast<int64>(Value)) : std::to_string(Value));
				Out += std::format("\t// {} dropped: does not fit the {}-bit underlying type\n", Dropped, UnderlyingBits);
				Stats.Notes.push_back(std::format("enum {}: dropped {} (does not fit {}-bit underlying type)", GetEnumPrefixedName(Enum), Dropped, UnderlyingBits));
				continue;
			}
			const std::string Name = EntryName(Info);
			Out += bSigned ? std::format("\t{} = {},\n", Name, static_cast<int64>(Value)) : std::format("\t{} = {},\n", Name, Value);
		}
		Out += "};\n";
		Stats.NumEnums++;
	}

	std::string FileBanner(const std::string& What)
	{
		return std::format(R"(#pragma once
// MDML SDK - generated by MDMLGenerator (DevTools mod) from a Dumper-7 analysis of the running game. Do not edit.
// Reflection analysis: Dumper-7 by Encryqed/Fischsalat and contributors, https://github.com/Encryqed/Dumper-7
// (used with the maintainer's permission for open-source projects, see Dependencies/Dumper-7/VENDORED.txt).
// Game: {} {}
// {}
)", Settings::Generator::GameName, Settings::Generator::GameVersion, What);
	}

	void CollectDependencies(PackageInfoHandle Package, std::set<int32>& Out)
	{
		const DependencyInfo& Deps = Package.GetPackageDependencies();
		for (const DependencyListType* List : { &Deps.StructsDependencies, &Deps.ClassesDependencies, &Deps.ParametersDependencies })
		{
			for (const auto& [PackageIndex, Requirements] : *List)
			{
				if (PackageIndex != Package.GetIndex())
					Out.insert(PackageIndex);
			}
		}
	}

	std::string ToLower(std::string Text)
	{
		std::transform(Text.begin(), Text.end(), Text.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
		return Text;
	}

	void GenerateNameCollisions(const fs::path& Path)
	{
		std::map<std::string, std::string> DeclarationsByPackage;

		for (const auto& [Index, Info] : StructManager::GetStructInfos())
		{
			if (StructManager::IsStructNameUnique(Info.Name))
				continue;
			UEStruct Struct = ObjectArray::GetByIndex<UEStruct>(Index);
			if (Struct.IsA(EClassCastFlags::Function))
				continue;
			StructWrapper Wrapped(Struct);
			DeclarationsByPackage[PackageManager::GetName(Struct.GetPackageIndex())] += std::format("\t{} {};\n", Struct.IsA(EClassCastFlags::Class) ? "class" : "struct", Wrapped.GetUniqueName().first);
		}
		for (const auto& [Index, Info] : EnumManager::GetEnumInfos())
		{
			if (EnumManager::IsEnumNameUnique(Info))
				continue;
			UEEnum Enum = ObjectArray::GetByIndex<UEEnum>(Index);
			EnumWrapper Wrapped(Enum);
			DeclarationsByPackage[PackageManager::GetName(Enum.GetPackageIndex())] += std::format("\tenum class {} : {};\n", Wrapped.GetUniqueName().first, GetEnumUnderlyingType(Wrapped));
		}

		std::ofstream File(Path);
		File << FileBanner("Forward declarations of types whose names exist in several packages (they live in namespace UE4::<Package>).");
		File << "\nnamespace UE4 {\n";
		for (const auto& [PackageName, Declarations] : DeclarationsByPackage)
			File << std::format("\nnamespace {}\n{{\n{}}}\n", PackageName, Declarations);
		File << "\n}\n";
	}
}

std::vector<std::string> MDMLGenerator::GetPackageNames()
{
	std::vector<std::string> Names;
	for (const auto& [Index, Info] : PackageManager::GetPackageInfos())
	{
		PackageInfoHandle Package(Info);
		if (!Package.IsEmpty())
			Names.push_back(Package.GetName());
	}
	std::sort(Names.begin(), Names.end());
	return Names;
}

void MDMLGenerator::Generate()
{
	Stats = FStats();

	/* 1. package selection: requested packages + everything they include (transitively) */
	std::unordered_map<std::string, int32> IndexByName;
	std::unordered_map<std::string, int32> IndexByLowerName;
	for (const auto& [Index, Info] : PackageManager::GetPackageInfos())
	{
		const std::string Name = PackageInfoHandle(Info).GetName();
		IndexByName[Name] = Index;
		IndexByLowerName.emplace(ToLower(Name), Index);
	}

	std::set<int32> Selected;
	std::vector<int32> Queue;
	if (bAllPackages)
	{
		for (const auto& [Index, Info] : PackageManager::GetPackageInfos())
		{
			if (!PackageInfoHandle(Info).IsEmpty())
				Queue.push_back(Index);
		}
	}
	else
	{
		for (const std::string& Requested : RequestedPackages)
		{
			int32 Found = -1;
			if (auto It = IndexByName.find(Requested); It != IndexByName.end())
				Found = It->second;
			else if (auto LowerIt = IndexByLowerName.find(ToLower(Requested)); LowerIt != IndexByLowerName.end())
				Found = LowerIt->second;
			if (Found < 0)
			{
				Stats.MissingPackages.push_back(Requested);
				std::cerr << "MDMLGenerator: package '" << Requested << "' not found (not loaded yet, or misspelled)\n";
				continue;
			}
			Queue.push_back(Found);
		}
	}
	while (!Queue.empty())
	{
		const int32 Index = Queue.back();
		Queue.pop_back();
		if (!Selected.insert(Index).second)
			continue;
		std::set<int32> Deps;
		CollectDependencies(PackageManager::GetInfo(Index), Deps);
		for (int32 Dep : Deps)
		{
			if (!Selected.contains(Dep))
				Queue.push_back(Dep);
		}
	}

	std::cerr << std::format("MDMLGenerator: generating {} package header(s) into {}\n", Selected.size(), MainFolder.string());

	/* 2. shared files */
	GenerateNameCollisions(MainFolder / "NameCollisions.hpp");

	/* 3. one header per package */
	for (int32 PackageIndex : Selected)
	{
		PackageInfoHandle Package = PackageManager::GetInfo(PackageIndex);
		const std::string PackageName = Package.GetName();

		std::string Body;

		/* enum forward declarations (cyclic packages) */
		std::set<int32> FwdDone;
		for (const auto& [EnumIndex, bIsForClass] : Package.GetEnumForwardDeclarations())
		{
			if (!FwdDone.insert(EnumIndex).second)
				continue;
			EnumWrapper Enum(ObjectArray::GetByIndex<UEEnum>(EnumIndex));
			if (Enum.GetUniqueName().second && PredefinedEnums.contains(Enum.GetUniqueName().first))
				continue;
			Body += std::format("enum class {} : {};\n", GetEnumPrefixedName(Enum), GetEnumUnderlyingType(Enum));
		}

		for (int32 EnumIndex : Package.GetEnums())
			GenerateEnum(EnumWrapper(ObjectArray::GetByIndex<UEEnum>(EnumIndex)), Body, Stats);

		if (Package.HasStructs())
		{
			Package.GetSortedStructs().VisitAllNodesWithCallback([&](int32 Index) {
				GenerateStruct(StructWrapper(ObjectArray::GetByIndex<UEStruct>(Index)), PackageIndex, Body, Stats);
			});
		}

		if (Package.HasClasses())
		{
			Package.GetSortedClasses().VisitAllNodesWithCallback([&](int32 Index) {
				StructWrapper Class(ObjectArray::GetByIndex<UEStruct>(Index));
				auto [UniqueName, bIsUnique] = Class.GetUniqueName();
				if (bIsUnique && PredefinedClasses.contains(UniqueName))
				{
					Body += std::format("\n// {} -> hand-written core class UE4::{}\n", Class.GetFullName(), UniqueName);
					return;
				}
				GenerateClass(Class, PackageIndex, Body, Stats);
			});
		}

		std::set<int32> Deps;
		CollectDependencies(Package, Deps);
		std::set<std::string> DepNames;
		for (int32 Dep : Deps)
			DepNames.insert(PackageManager::GetName(Dep));

		std::ofstream File(MainFolder / (PackageName + ".hpp"));
		if (!File.is_open())
		{
			std::cerr << "MDMLGenerator: error opening " << PackageName << ".hpp\n";
			continue;
		}
		File << FileBanner("Package: " + PackageName);
		File << "\n#include \"MDML/GeneratedSupport.h\"\n#include \"NameCollisions.hpp\"\n\n";
		for (const std::string& Dep : DepNames)
			File << "#include \"" << Dep << ".hpp\"\n";
		File << "\n#include \"MDML/SDKPrologue.inl\"\nnamespace UE4 {\n";
		File << Body;
		File << "\n}\n#include \"MDML/SDKEpilogue.inl\"\n";

		Stats.GeneratedPackages.push_back(PackageName);
	}
	std::sort(Stats.GeneratedPackages.begin(), Stats.GeneratedPackages.end());

	/* 4. aggregator + report */
	{
		std::ofstream File(MainFolder / "MDML_SDK.hpp");
		File << FileBanner("Includes every package of this generation run. Prefer including only the package headers you need.");
		File << "\n";
		for (const std::string& Name : Stats.GeneratedPackages)
			File << "#include \"" << Name << ".hpp\"\n";
	}
	{
		std::ofstream File(MainFolder / "GenerationReport.txt");
		File << "MDML SDK generation report\n";
		File << "Game: " << Settings::Generator::GameName << " " << Settings::Generator::GameVersion << "\n";
		File << "Requested: " << (bAllPackages ? std::string("<all packages>") : std::to_string(RequestedPackages.size()) + " package(s)") << "\n";
		for (const std::string& Name : RequestedPackages)
			File << "  " << Name << "\n";
		File << "Missing (not found in the running game): " << Stats.MissingPackages.size() << "\n";
		for (const std::string& Name : Stats.MissingPackages)
			File << "  " << Name << "\n";
		File << std::format("Generated: {} header(s), {} classes, {} structs, {} enums, {} functions ({} skipped), {} opaque members\n",
			Stats.GeneratedPackages.size(), Stats.NumClasses, Stats.NumStructs, Stats.NumEnums, Stats.NumFunctions, Stats.NumSkippedFunctions, Stats.NumOpaqueMembers);
		for (const std::string& Name : Stats.GeneratedPackages)
			File << "  " << Name << ".hpp\n";
		File << "Notes:\n";
		for (const std::string& Note : Stats.Notes)
			File << "  " << Note << "\n";
	}

	std::cerr << std::format("MDMLGenerator: done - {} header(s), {} classes, {} structs, {} enums, {} functions ({} skipped), {} opaque members, {} missing package(s)\n",
		Stats.GeneratedPackages.size(), Stats.NumClasses, Stats.NumStructs, Stats.NumEnums, Stats.NumFunctions, Stats.NumSkippedFunctions, Stats.NumOpaqueMembers, Stats.MissingPackages.size());
}
