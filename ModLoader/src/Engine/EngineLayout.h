#pragma once
#include "Core.h"

// Engine memory layout: field offsets of the reflection types the hand-written core reads (Wave 2.4, was
// GameInfo.h `Offsets` / `GameProfile::defs`).
// Filled at runtime: from the profile's [UObjectDef]/[UFieldDef]/[UStructDef]/[UEnumDef]/[UFunctionDef]/[Property]/
// [FField]/[FFieldClass] sections (SetupProfile) or scanned by EngineDefFinder (UE4::InitSDK). Still a runtime struct;
// PDB-derived constants + static_asserts are a later step (plan 3D).
namespace mdml {
	struct EngineLayout {
		struct {
			uint16_t Index = 0x0;
			uint16_t Class = 0x0;
			uint16_t Name = 0x0;
			uint16_t Outer = 0x0;
		} UObject;
		struct {
			uint16_t Next = 0x0;
		} UField;
		struct {
			uint16_t CppType = 0x0;
			uint16_t Names = 0x0;
			uint16_t CppForm = 0x0;
			uint16_t Flags = 0x0;
			uint16_t DisplayNameFn = 0x0;
			uint16_t UserDefDisplayNameMap = 0x0;
		} UEnum;
		struct {
			uint16_t SuperStruct = 0x0;
			uint16_t Children = 0x0;
			uint16_t PropertiesSize = 0x0;
			uint16_t OverallUStructSize = 0x0;
		} UStruct;
		struct {
			uint16_t FunctionFlags = 0x0;
			uint16_t NumParams = 0x0;
			uint16_t ParamsSize = 0x0;
			uint16_t ReturnValueOffset = 0x0;
			uint16_t Func = 0x0;
		} UFunction;
		struct {
			uint16_t Next = 0x0;
			uint16_t Name = 0x0;
			uint16_t ClassPrivate = 0x0;
		} FField;
		struct {
			uint16_t Name;
			uint16_t ID;
			uint16_t CastFlags;
			uint16_t SuperClass;
		} FFieldClass;
		struct {
			uint16_t ArrayDim = 0x0;
			uint16_t ElementSize = 0x0;
			uint16_t Offset = 0x0;
			uint16_t Flags = 0x0;
		} Property;
#pragma region Properties
		struct {
			uint16_t Enum = 0x0;
		} ByteProperty;
		struct {
			uint16_t FieldSize = 0x0;
			uint16_t ByteOffset = 0x0;
			uint16_t ByteMask = 0x0;
			uint16_t FieldMask = 0x0;
		} BoolProperty;
		struct {
			uint16_t PropertyClass = 0x0;
		} ObjectPropertyBase;
		struct {
			uint16_t MetaClass = 0x0;
		} ClassProperty;
		struct {
			uint16_t InterfaceClass = 0x0;
		} InterfaceProperty;
		struct {
			uint16_t MetaClass = 0x0;
		} AssetClassProperty;
		struct {
			uint16_t Struct = 0x0;
		} StructProperty;
		struct {
			uint16_t Inner = 0x0;
		} ArrayProperty;
		struct {
			uint16_t Key = 0x0;
			uint16_t Value = 0x0;
		} MapProperty;
		struct {
			uint16_t SignatureFunction = 0x0;
		} DelegateProperty;
		struct {
			uint16_t SignatureFunction = 0x0;
		} MulticastDelegateProperty;
		struct {
			uint16_t Enum = 0x0;
			uint16_t UnderlyingProp = 0x0;
		} EnumProperty;
#pragma endregion
	};

	// Which offset groups the profile did not provide, so UE4::InitSDK() has to scan them with EngineDefFinder.
	// Bookkeeping for the runtime scan only; goes away with the PDB-derived constants (plan 3D).
	struct EngineLayoutStatus {
		bool IsUObjectMissing = true;
		bool IsUFieldMissing = true;
		bool IsUEnumMissing = true;
		bool IsUStructMissing = true;
		bool IsUFunctionMissing = true;

		bool IsPropertyMissing = false;
	};

	// The one instance, defined in MDML.dll (Engine/EngineInit.cpp) and exported, so mods/tools (dumps, exporter) can
	// read the same offsets the core uses.
	extern MDML_ENGINE_API EngineLayout Layout;
	// MDML-internal (SetupProfile, UE4::InitSDK), not exported.
	extern EngineLayoutStatus LayoutStatus;
}
