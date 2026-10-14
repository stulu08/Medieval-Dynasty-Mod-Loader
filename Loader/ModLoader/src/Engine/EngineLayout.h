#pragma once
#include "Core.h"

// Engine memory layout of UE 4.27 as built into Medieval Dynasty (Wave 3D, plan 2.3).
//
// Source of truth: the PDB the game ships. Every constant below that the PDB can describe carries a `// pdb:` comment;
// `python Tools/RE/check_layout.py` reads these comments and checks each value against the PDB (run it after every game
// patch). Constants without such a comment are engine compile-time constants (not members) and are documented inline.
//
// Three layers use these numbers:
//  1. `mdml::layout::*`  constexpr constants (this file), checked offline against the PDB.
//  2. `UE4::Mirror::*`   layout-true structs (UE4/CoreUObject/ObjectLayout.h), static_assert'ed against (1). For the
//                        generator backend (code inventory 5.4) and for code that wants real fields.
//  3. `mdml::Layout`     the runtime offsets the hand-written accessors read (UObject::GetClass, FProperty::GetOffset,
//                        ...). Defaults are (1). At engine init EngineDefFinder (Runtime/EngineDefFinder.cpp) checks them
//                        against live objects; only if a check fails it scans for the offset (the old UML runtime scan,
//                        now the no-PDB fallback) and logs loudly. See docs/reports/wave3/3D-engine.md.
namespace mdml::layout {
	namespace UObjectBase {
		constexpr uint16_t VTable = 0x00;              // pdb: UObjectBase::__vftable
		constexpr uint16_t ObjectFlags = 0x08;         // pdb: UObjectBase::ObjectFlags
		constexpr uint16_t InternalIndex = 0x0C;       // pdb: UObjectBase::InternalIndex
		constexpr uint16_t ClassPrivate = 0x10;        // pdb: UObjectBase::ClassPrivate
		constexpr uint16_t NamePrivate = 0x18;         // pdb: UObjectBase::NamePrivate
		constexpr uint16_t OuterPrivate = 0x20;        // pdb: UObjectBase::OuterPrivate
		constexpr uint16_t Size = 0x28;                // pdb: sizeof(UObjectBase)
	}
	namespace UField {
		constexpr uint16_t Next = 0x28;                // pdb: UField::Next
		constexpr uint16_t Size = 0x30;                // pdb: sizeof(UField)
	}
	namespace UStruct {
		constexpr uint16_t SuperStruct = 0x40;         // pdb: UStruct::SuperStruct
		constexpr uint16_t Children = 0x48;            // pdb: UStruct::Children
		constexpr uint16_t ChildProperties = 0x50;     // pdb: UStruct::ChildProperties
		constexpr uint16_t PropertiesSize = 0x58;      // pdb: UStruct::PropertiesSize
		constexpr uint16_t MinAlignment = 0x5C;        // pdb: UStruct::MinAlignment
		constexpr uint16_t PropertyLink = 0x70;        // pdb: UStruct::PropertyLink
		constexpr uint16_t Size = 0xB0;                // pdb: sizeof(UStruct)
	}
	namespace UScriptStruct {
		constexpr uint16_t StructFlags = 0xB0;         // pdb: UScriptStruct::StructFlags
		constexpr uint16_t Size = 0xC0;                // pdb: sizeof(UScriptStruct)
	}
	namespace UClass {
		constexpr uint16_t ClassFlags = 0xCC;          // pdb: UClass::ClassFlags
		constexpr uint16_t ClassCastFlags = 0xD0;      // pdb: UClass::ClassCastFlags
		constexpr uint16_t ClassDefaultObject = 0x118; // pdb: UClass::ClassDefaultObject
		constexpr uint16_t FuncMap = 0x130;            // pdb: UClass::FuncMap
		constexpr uint16_t Size = 0x230;               // pdb: sizeof(UClass)
	}
	namespace UFunction {
		constexpr uint16_t FunctionFlags = 0xB0;       // pdb: UFunction::FunctionFlags
		constexpr uint16_t NumParms = 0xB4;            // pdb: UFunction::NumParms
		constexpr uint16_t ParmsSize = 0xB6;           // pdb: UFunction::ParmsSize
		constexpr uint16_t ReturnValueOffset = 0xB8;   // pdb: UFunction::ReturnValueOffset
		constexpr uint16_t Func = 0xD8;                // pdb: UFunction::Func
		constexpr uint16_t Size = 0xE0;                // pdb: sizeof(UFunction)
	}
	namespace UEnum {
		constexpr uint16_t CppType = 0x30;             // pdb: UEnum::CppType
		constexpr uint16_t Names = 0x40;               // pdb: UEnum::Names
		constexpr uint16_t CppForm = 0x50;             // pdb: UEnum::CppForm
		constexpr uint16_t EnumFlags = 0x54;           // pdb: UEnum::EnumFlags
		constexpr uint16_t EnumDisplayNameFn = 0x58;   // pdb: UEnum::EnumDisplayNameFn
		constexpr uint16_t Size = 0x60;                // pdb: sizeof(UEnum)
	}
	namespace UUserDefinedEnum {
		constexpr uint16_t DisplayNameMap = 0x60;      // pdb: UUserDefinedEnum::DisplayNameMap
	}
	namespace FField {
		constexpr uint16_t VTable = 0x00;              // pdb: FField::__vftable
		constexpr uint16_t ClassPrivate = 0x08;        // pdb: FField::ClassPrivate
		constexpr uint16_t Owner = 0x10;               // pdb: FField::Owner
		constexpr uint16_t Next = 0x20;                // pdb: FField::Next
		constexpr uint16_t NamePrivate = 0x28;         // pdb: FField::NamePrivate
		constexpr uint16_t FlagsPrivate = 0x30;        // pdb: FField::FlagsPrivate
		constexpr uint16_t Size = 0x38;                // pdb: sizeof(FField)
	}
	namespace FFieldClass {
		constexpr uint16_t Name = 0x00;                // pdb: FFieldClass::Name
		constexpr uint16_t Id = 0x08;                  // pdb: FFieldClass::Id
		constexpr uint16_t CastFlags = 0x10;           // pdb: FFieldClass::CastFlags
		constexpr uint16_t ClassFlags = 0x18;          // pdb: FFieldClass::ClassFlags
		constexpr uint16_t SuperClass = 0x20;          // pdb: FFieldClass::SuperClass
		constexpr uint16_t DefaultObject = 0x28;       // pdb: FFieldClass::DefaultObject
		constexpr uint16_t Size = 0x40;                // pdb: sizeof(FFieldClass)
	}
	namespace FProperty {
		constexpr uint16_t ArrayDim = 0x38;            // pdb: FProperty::ArrayDim
		constexpr uint16_t ElementSize = 0x3C;         // pdb: FProperty::ElementSize
		constexpr uint16_t PropertyFlags = 0x40;       // pdb: FProperty::PropertyFlags
		constexpr uint16_t Offset_Internal = 0x4C;     // pdb: FProperty::Offset_Internal
		constexpr uint16_t Size = 0x78;                // pdb: sizeof(FProperty)
	}
	// FProperty subclasses: their own members start at sizeof(FProperty).
	namespace FByteProperty {
		constexpr uint16_t Enum = 0x78;                // pdb: FByteProperty::Enum
	}
	namespace FBoolProperty {
		constexpr uint16_t FieldSize = 0x78;           // pdb: FBoolProperty::FieldSize
		constexpr uint16_t ByteOffset = 0x79;          // pdb: FBoolProperty::ByteOffset
		constexpr uint16_t ByteMask = 0x7A;            // pdb: FBoolProperty::ByteMask
		constexpr uint16_t FieldMask = 0x7B;           // pdb: FBoolProperty::FieldMask
	}
	namespace FObjectPropertyBase {
		constexpr uint16_t PropertyClass = 0x78;       // pdb: FObjectPropertyBase::PropertyClass
	}
	namespace FClassProperty {
		constexpr uint16_t MetaClass = 0x80;           // pdb: FClassProperty::MetaClass
	}
	namespace FSoftClassProperty {
		constexpr uint16_t MetaClass = 0x80;           // pdb: FSoftClassProperty::MetaClass
	}
	namespace FInterfaceProperty {
		constexpr uint16_t InterfaceClass = 0x78;      // pdb: FInterfaceProperty::InterfaceClass
	}
	namespace FStructProperty {
		constexpr uint16_t Struct = 0x78;              // pdb: FStructProperty::Struct
	}
	namespace FArrayProperty {
		constexpr uint16_t Inner = 0x78;               // pdb: FArrayProperty::Inner
	}
	namespace FMapProperty {
		constexpr uint16_t KeyProp = 0x78;             // pdb: FMapProperty::KeyProp
		constexpr uint16_t ValueProp = 0x80;           // pdb: FMapProperty::ValueProp
	}
	namespace FSetProperty {
		constexpr uint16_t ElementProp = 0x78;         // pdb: FSetProperty::ElementProp
	}
	namespace FDelegateProperty {
		constexpr uint16_t SignatureFunction = 0x78;   // pdb: FDelegateProperty::SignatureFunction
	}
	namespace FMulticastDelegateProperty {
		constexpr uint16_t SignatureFunction = 0x78;   // pdb: FMulticastDelegateProperty::SignatureFunction
	}
	namespace FEnumProperty {
		constexpr uint16_t UnderlyingProp = 0x78;      // pdb: FEnumProperty::UnderlyingProp
		constexpr uint16_t Enum = 0x80;                // pdb: FEnumProperty::Enum
	}

	// Script VM frame (Stack.h).
	namespace FFrame {
		constexpr uint16_t Node = 0x10;                // pdb: FFrame::Node
		constexpr uint16_t Object = 0x18;              // pdb: FFrame::Object
		constexpr uint16_t Code = 0x20;                // pdb: FFrame::Code
		constexpr uint16_t Locals = 0x28;              // pdb: FFrame::Locals
		constexpr uint16_t OutParms = 0x78;            // pdb: FFrame::OutParms
		constexpr uint16_t Size = 0x98;                // pdb: sizeof(FFrame)
	}
	namespace FOutParmRec {
		constexpr uint16_t Property = 0x00;            // pdb: FOutParmRec::Property
		constexpr uint16_t PropAddr = 0x08;            // pdb: FOutParmRec::PropAddr
		constexpr uint16_t NextOutParm = 0x10;         // pdb: FOutParmRec::NextOutParm
		constexpr uint16_t Size = 0x18;                // pdb: sizeof(FOutParmRec)
	}

	// GUObjectArray (ObjectsArray.h).
	namespace FUObjectArray {
		constexpr uint16_t ObjObjects = 0x10;          // pdb: FUObjectArray::ObjObjects
		constexpr uint16_t ObjObjectsNum = 0x24;       // pdb: FUObjectArray::ObjObjects.NumElements
	}
	namespace FChunkedFixedUObjectArray {
		constexpr uint16_t Objects = 0x00;             // pdb: FChunkedFixedUObjectArray::Objects
		constexpr uint16_t PreAllocatedObjects = 0x08; // pdb: FChunkedFixedUObjectArray::PreAllocatedObjects
		constexpr uint16_t MaxElements = 0x10;         // pdb: FChunkedFixedUObjectArray::MaxElements
		constexpr uint16_t NumElements = 0x14;         // pdb: FChunkedFixedUObjectArray::NumElements
		constexpr uint16_t MaxChunks = 0x18;           // pdb: FChunkedFixedUObjectArray::MaxChunks
		constexpr uint16_t NumChunks = 0x1C;           // pdb: FChunkedFixedUObjectArray::NumChunks
		constexpr uint16_t Size = 0x20;                // pdb: sizeof(FChunkedFixedUObjectArray)
		// FChunkedFixedUObjectArray::NumElementsPerChunk (enum constant, 64 * 1024; not a member).
		constexpr int32_t NumElementsPerChunk = 64 * 1024;
	}
	namespace FUObjectItem {
		constexpr uint16_t Object = 0x00;              // pdb: FUObjectItem::Object
		constexpr uint16_t Flags = 0x08;               // pdb: FUObjectItem::Flags
		constexpr uint16_t ClusterRootIndex = 0x0C;    // pdb: FUObjectItem::ClusterRootIndex
		constexpr uint16_t SerialNumber = 0x10;        // pdb: FUObjectItem::SerialNumber
		constexpr uint16_t Size = 0x18;                // pdb: sizeof(FUObjectItem)
	}

	// FNamePool (NamePool.h). NamePoolData is an FNamePool whose first member is the entry allocator.
	namespace FNamePool {
		constexpr uint16_t Entries = 0x00;             // pdb: FNamePool::Entries
	}
	namespace FNameEntryAllocator {
		constexpr uint16_t Lock = 0x00;                // pdb: FNameEntryAllocator::Lock
		constexpr uint16_t CurrentBlock = 0x08;        // pdb: FNameEntryAllocator::CurrentBlock
		constexpr uint16_t CurrentByteCursor = 0x0C;   // pdb: FNameEntryAllocator::CurrentByteCursor
		constexpr uint16_t Blocks = 0x10;              // pdb: FNameEntryAllocator::Blocks
		// Engine constants (NameTypes.h / UnrealNames.cpp): FNameBlockOffsetBits = 16, FNameMaxBlocks = 8192,
		// Stride = alignof(FNameEntry) = 2, BlockSizeBytes = Stride << FNameBlockOffsetBits.
		constexpr int32_t BlockOffsetBits = 16;
		constexpr int32_t MaxBlocks = 8192;
		constexpr int32_t Stride = 2;
		constexpr int32_t BlockSizeBytes = Stride << BlockOffsetBits;
	}
	namespace FNameEntry {
		constexpr uint16_t Header = 0x00;              // pdb: FNameEntry::Header
		constexpr uint16_t AnsiName = 0x02;            // pdb: FNameEntry::AnsiName
		constexpr uint16_t WideName = 0x02;            // pdb: FNameEntry::WideName
		// FNameEntryHeader bitfield (uint16): bIsWide:1, LowercaseProbeHash:5, Len:10.
		constexpr int32_t LenShift = 6;
		constexpr int32_t MaxNameSize = 1024;          // NAME_SIZE
	}

	// Arguments of StaticConstructObject_Internal (UE 4.26+ signature).
	namespace FStaticConstructObjectParameters {
		constexpr uint16_t Class = 0x00;               // pdb: FStaticConstructObjectParameters::Class
		constexpr uint16_t Outer = 0x08;               // pdb: FStaticConstructObjectParameters::Outer
		constexpr uint16_t Name = 0x10;                // pdb: FStaticConstructObjectParameters::Name
		constexpr uint16_t SetFlags = 0x18;            // pdb: FStaticConstructObjectParameters::SetFlags
		constexpr uint16_t InternalSetFlags = 0x1C;    // pdb: FStaticConstructObjectParameters::InternalSetFlags
		constexpr uint16_t bCopyTransientsFromClassDefaults = 0x20; // pdb: FStaticConstructObjectParameters::bCopyTransientsFromClassDefaults
		constexpr uint16_t bAssumeTemplateIsArchetype = 0x21;       // pdb: FStaticConstructObjectParameters::bAssumeTemplateIsArchetype
		constexpr uint16_t Template = 0x28;            // pdb: FStaticConstructObjectParameters::Template
		constexpr uint16_t InstanceGraph = 0x30;       // pdb: FStaticConstructObjectParameters::InstanceGraph
		constexpr uint16_t ExternalPackage = 0x38;     // pdb: FStaticConstructObjectParameters::ExternalPackage
		constexpr uint16_t Size = 0x40;                // pdb: sizeof(FStaticConstructObjectParameters)
	}

	// Containers and small value types.
	namespace FName {
		constexpr uint16_t ComparisonIndex = 0x00;     // pdb: FName::ComparisonIndex
		constexpr uint16_t Number = 0x04;              // pdb: FName::Number
		constexpr uint16_t Size = 0x08;                // pdb: sizeof(FName)
	}
	namespace FString {
		constexpr uint16_t Size = 0x10;                // pdb: sizeof(FString)
	}
	namespace TArray {
		constexpr uint16_t Data = 0x00;                // pdb: TArray<FName,TSizedDefaultAllocator<32> >::AllocatorInstance
		constexpr uint16_t Num = 0x08;                 // pdb: TArray<FName,TSizedDefaultAllocator<32> >::ArrayNum
		constexpr uint16_t Max = 0x0C;                 // pdb: TArray<FName,TSizedDefaultAllocator<32> >::ArrayMax
		constexpr uint16_t Size = 0x10;                // pdb: sizeof(TArray<FName,TSizedDefaultAllocator<32> >)
	}
	namespace FText {
		constexpr uint16_t TextData = 0x00;            // pdb: FText::TextData
		constexpr uint16_t Flags = 0x10;               // pdb: FText::Flags
		constexpr uint16_t Size = 0x18;                // pdb: sizeof(FText)
	}
	namespace FReferenceControllerBase {
		constexpr uint16_t VTable = 0x00;              // pdb: SharedPointerInternals::FReferenceControllerBase::__vftable
		constexpr uint16_t SharedReferenceCount = 0x08; // pdb: SharedPointerInternals::FReferenceControllerBase::SharedReferenceCount
		constexpr uint16_t WeakReferenceCount = 0x0C;  // pdb: SharedPointerInternals::FReferenceControllerBase::WeakReferenceCount
		constexpr uint16_t Size = 0x10;                // pdb: sizeof(SharedPointerInternals::FReferenceControllerBase)
	}
	namespace FWeakObjectPtr {
		constexpr uint16_t ObjectIndex = 0x00;         // pdb: FWeakObjectPtr::ObjectIndex
		constexpr uint16_t ObjectSerialNumber = 0x04;  // pdb: FWeakObjectPtr::ObjectSerialNumber
		constexpr uint16_t Size = 0x08;                // pdb: sizeof(FWeakObjectPtr)
	}
	// TBitArray<FDefaultBitArrayAllocator> = inline storage for 4 dwords, heap pointer when it outgrows them.
	namespace TBitArray {
		constexpr uint16_t InlineData = 0x00;          // pdb: TInlineAllocator<4,TSizedDefaultAllocator<32> >::ForElementType<unsigned int>::InlineData
		constexpr uint16_t SecondaryData = 0x10;       // pdb: TInlineAllocator<4,TSizedDefaultAllocator<32> >::ForElementType<unsigned int>::SecondaryData
		constexpr uint16_t NumBits = 0x18;             // pdb: TBitArray<FDefaultBitArrayAllocator>::NumBits
		constexpr uint16_t MaxBits = 0x1C;             // pdb: TBitArray<FDefaultBitArrayAllocator>::MaxBits
		constexpr uint16_t Size = 0x20;                // pdb: sizeof(TBitArray<FDefaultBitArrayAllocator>)
	}
	namespace TSparseArray {
		constexpr uint16_t Data = 0x00;                // pdb: TSparseArray<TSetElement<TTuple<FName,unsigned char *> >,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator> >::Data
		constexpr uint16_t AllocationFlags = 0x10;     // pdb: TSparseArray<TSetElement<TTuple<FName,unsigned char *> >,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator> >::AllocationFlags
		constexpr uint16_t FirstFreeIndex = 0x30;      // pdb: TSparseArray<TSetElement<TTuple<FName,unsigned char *> >,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator> >::FirstFreeIndex
		constexpr uint16_t NumFreeIndices = 0x34;      // pdb: TSparseArray<TSetElement<TTuple<FName,unsigned char *> >,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator> >::NumFreeIndices
		constexpr uint16_t Size = 0x38;                // pdb: sizeof(TSparseArray<TSetElement<TTuple<FName,unsigned char *> >,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator> >)
	}
	namespace TSet {
		constexpr uint16_t Elements = 0x00;            // pdb: TSet<TTuple<FName,unsigned char *>,TDefaultMapHashableKeyFuncs<FName,unsigned char *,0>,FDefaultSetAllocator>::Elements
		constexpr uint16_t Hash = 0x38;                // pdb: TSet<TTuple<FName,unsigned char *>,TDefaultMapHashableKeyFuncs<FName,unsigned char *,0>,FDefaultSetAllocator>::Hash
		constexpr uint16_t HashSize = 0x48;            // pdb: TSet<TTuple<FName,unsigned char *>,TDefaultMapHashableKeyFuncs<FName,unsigned char *,0>,FDefaultSetAllocator>::HashSize
		constexpr uint16_t Size = 0x50;                // pdb: sizeof(TSet<TTuple<FName,unsigned char *>,TDefaultMapHashableKeyFuncs<FName,unsigned char *,0>,FDefaultSetAllocator>)
	}
	namespace TSetElement {
		// Element of a TSet<TTuple<FName, uint8*>>: Value (0x10), then the hash links.
		constexpr uint16_t HashNextId = 0x10;          // pdb: TSetElementBase<TTuple<FName,unsigned char *>,1>::HashNextId
		constexpr uint16_t HashIndex = 0x14;           // pdb: TSetElementBase<TTuple<FName,unsigned char *>,1>::HashIndex
		constexpr uint16_t Size = 0x18;                // pdb: sizeof(TSetElementBase<TTuple<FName,unsigned char *>,1>)
	}
	namespace UDataTable {
		constexpr uint16_t RowStruct = 0x28;           // pdb: UDataTable::RowStruct
		constexpr uint16_t RowMap = 0x30;              // pdb: UDataTable::RowMap
		constexpr uint16_t ImportKeyField = 0x88;      // pdb: UDataTable::ImportKeyField
	}
	namespace Sizes {
		constexpr uint16_t FTransform = 0x30;          // pdb: sizeof(FTransform)
		constexpr uint16_t FQuat = 0x10;               // pdb: sizeof(FQuat)
		constexpr uint16_t FKey = 0x18;                // pdb: sizeof(FKey)
		constexpr uint16_t FSoftObjectPath = 0x18;     // pdb: sizeof(FSoftObjectPath)
		constexpr uint16_t FSoftObjectPtr = 0x28;      // pdb: sizeof(FSoftObjectPtr)
		constexpr uint16_t FScriptInterface = 0x10;    // pdb: sizeof(FScriptInterface)
		constexpr uint16_t FScriptDelegate = 0x10;     // pdb: sizeof(TScriptDelegate<FWeakObjectPtr>)
		constexpr uint16_t FFieldPath = 0x20;          // pdb: sizeof(FFieldPath)
		constexpr uint16_t FTextHistory_Base = 0x20;   // pdb: sizeof(FTextHistory_Base)
	}
	// TTextData<THistory>: ITextData vptr, then the display string (TSharedRef<FString> LocalizedString).
	namespace TTextData {
		constexpr uint16_t LocalizedString = 0x08;     // pdb: TTextData<FTextHistory_Base>::LocalizedString
		constexpr uint16_t History = 0x18;             // pdb: TTextData<FTextHistory_Base>::History
	}
}

// Runtime offsets read by the hand-written accessors (Wave 2.4: was GameInfo.h `Offsets` / `GameProfile::defs`).
// Defaults are the PDB-checked constants above; EngineDefFinder verifies them at engine init and replaces a group by
// scanned values only if its live check fails. Field names are kept for source compatibility (the manual [UObjectDef]
// ... ini sections that once wrote into it are gone since Wave 3A/3E).
namespace mdml {
	struct EngineLayout {
		struct {
			uint16_t Index = layout::UObjectBase::InternalIndex;
			uint16_t Class = layout::UObjectBase::ClassPrivate;
			uint16_t Name = layout::UObjectBase::NamePrivate;
			uint16_t Outer = layout::UObjectBase::OuterPrivate;
		} UObject;
		struct {
			uint16_t Next = layout::UField::Next;
		} UField;
		struct {
			uint16_t CppType = layout::UEnum::CppType;
			uint16_t Names = layout::UEnum::Names;
			uint16_t CppForm = layout::UEnum::CppForm;
			uint16_t Flags = layout::UEnum::EnumFlags;
			uint16_t DisplayNameFn = layout::UEnum::EnumDisplayNameFn;
			uint16_t UserDefDisplayNameMap = layout::UUserDefinedEnum::DisplayNameMap;
		} UEnum;
		struct {
			uint16_t SuperStruct = layout::UStruct::SuperStruct;
			// UE's `Children`: the UField chain (UFunctions). Before 3D this field held 0x50 = ChildProperties.
			uint16_t Children = layout::UStruct::Children;
			uint16_t PropertiesSize = layout::UStruct::PropertiesSize;
			uint16_t OverallUStructSize = layout::UStruct::Size;
			// The FField chain (FProperty members). Read by UStruct::GetChildProperties() / GetChildren().
			uint16_t ChildProperties = layout::UStruct::ChildProperties;
		} UStruct;
		struct {
			uint16_t FunctionFlags = layout::UFunction::FunctionFlags;
			uint16_t NumParams = layout::UFunction::NumParms;
			uint16_t ParamsSize = layout::UFunction::ParmsSize;
			uint16_t ReturnValueOffset = layout::UFunction::ReturnValueOffset;
			uint16_t Func = layout::UFunction::Func;
		} UFunction;
		struct {
			uint16_t Next = layout::FField::Next;
			uint16_t Name = layout::FField::NamePrivate;
			uint16_t ClassPrivate = layout::FField::ClassPrivate;
		} FField;
		struct {
			uint16_t Name = layout::FFieldClass::Name;
			uint16_t ID = layout::FFieldClass::Id;
			uint16_t CastFlags = layout::FFieldClass::CastFlags;
			// 0x20 per PDB; the old runtime scan put it at 0x18, which is ClassFlags.
			uint16_t SuperClass = layout::FFieldClass::SuperClass;
		} FFieldClass;
		struct {
			uint16_t ArrayDim = layout::FProperty::ArrayDim;
			uint16_t ElementSize = layout::FProperty::ElementSize;
			uint16_t Offset = layout::FProperty::Offset_Internal;
			uint16_t Flags = layout::FProperty::PropertyFlags;
		} Property;
#pragma region Properties
		struct {
			uint16_t Enum = layout::FByteProperty::Enum;
		} ByteProperty;
		struct {
			uint16_t FieldSize = layout::FBoolProperty::FieldSize;
			uint16_t ByteOffset = layout::FBoolProperty::ByteOffset;
			uint16_t ByteMask = layout::FBoolProperty::ByteMask;
			uint16_t FieldMask = layout::FBoolProperty::FieldMask;
		} BoolProperty;
		struct {
			uint16_t PropertyClass = layout::FObjectPropertyBase::PropertyClass;
		} ObjectPropertyBase;
		struct {
			uint16_t MetaClass = layout::FClassProperty::MetaClass;
		} ClassProperty;
		struct {
			uint16_t InterfaceClass = layout::FInterfaceProperty::InterfaceClass;
		} InterfaceProperty;
		struct {
			uint16_t MetaClass = layout::FSoftClassProperty::MetaClass;
		} AssetClassProperty;
		struct {
			uint16_t Struct = layout::FStructProperty::Struct;
		} StructProperty;
		struct {
			uint16_t Inner = layout::FArrayProperty::Inner;
		} ArrayProperty;
		struct {
			uint16_t Key = layout::FMapProperty::KeyProp;
			uint16_t Value = layout::FMapProperty::ValueProp;
		} MapProperty;
		struct {
			uint16_t SignatureFunction = layout::FDelegateProperty::SignatureFunction;
		} DelegateProperty;
		struct {
			uint16_t SignatureFunction = layout::FMulticastDelegateProperty::SignatureFunction;
		} MulticastDelegateProperty;
		struct {
			uint16_t Enum = layout::FEnumProperty::Enum;
			uint16_t UnderlyingProp = layout::FEnumProperty::UnderlyingProp;
		} EnumProperty;
#pragma endregion
	};

	// The one instance, defined in MDML.dll (Engine/EngineInit.cpp) and exported, so mods/tools (dumps, exporter) can
	// read the same offsets the core uses.
	extern MDML_ENGINE_API EngineLayout Layout;
}
