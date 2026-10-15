#pragma once
// Layout-true mirrors of the engine's reflection base types (Wave 3D, code inventory 5.4 "layout-true base classes").
//
// The hand-written UE4::UObject/UStruct/UClass/... are offset-based views without data members (sizeof == 1), so the
// old and the new generated SDK can derive from them freely. These mirrors carry the real UE 4.27 members, checked with
// static_asserts against the PDB-verified constants of EngineLayout.h (which Tools/RE/check_layout.py checks against the
// game PDB). Use them through a reinterpret_cast of a live object, e.g.
//     auto* Raw = reinterpret_cast<const UE4::Mirror::UClass*>(SomeClass);  Raw->ClassDefaultObject
// Not used as bases of the views yet: making UE4::UObject itself layout-true changes sizeof of every generated class,
// which is an owner decision (3D report, open question Q1).
#include "EngineLayout.h"
#include "NamePool.h"
#include "Containers/Array.h"
#include "Containers/Map.h"
#include "Containers/String.h"

#include <cstddef>

namespace UE4 {
	class UObject;
	class UClass;
	class UField;
	class UStruct;
	class UScriptStruct;
	class UFunction;
	class FField;
	class FFieldClass;
	class FProperty;

	namespace Mirror {
		struct UObjectBase {
			void** VTable;
			int32_t ObjectFlags;
			int32_t InternalIndex;
			UE4::UClass* ClassPrivate;
			FName NamePrivate;
			UE4::UObject* OuterPrivate;
		};

		struct UField : UObjectBase {
			UE4::UField* Next;
		};

		struct UStruct : UField {
			void* StructBaseChainArray;
			int32_t NumStructBasesInChainMinusOne;
			UE4::UStruct* SuperStruct;
			UE4::UField* Children;              // UFunctions
			UE4::FField* ChildProperties;       // FProperties
			int32_t PropertiesSize;
			int32_t MinAlignment;
			TArray<uint8_t> Script;
			UE4::FProperty* PropertyLink;
			UE4::FProperty* RefLink;
			UE4::FProperty* DestructorLink;
			UE4::FProperty* PostConstructLink;
			TArray<UE4::UObject*> ScriptAndPropertyObjectReferences;
			void* UnresolvedScriptProperties;
			void* UnversionedSchema;
		};

		struct UScriptStruct : UStruct {
			uint32_t StructFlags;
			bool bPrepareCppStructOpsCompleted;
			void* CppStructOps;
		};

		struct UFunction : UStruct {
			uint32_t FunctionFlags;
			uint8_t NumParms;
			uint16_t ParmsSize;
			uint16_t ReturnValueOffset;
			uint16_t RPCId;
			uint16_t RPCResponseId;
			UE4::FProperty* FirstPropertyToInit;
			UE4::UFunction* EventGraphFunction;
			int32_t EventGraphCallOffset;
			void* Func;                         // FNativeFuncPtr
		};

		struct UClass : UStruct {
			void* ClassConstructor;
			void* ClassVTableHelperCtorCaller;
			void* ClassAddReferencedObjects;
			uint32_t ClassUnique_bCooked;       // bitfield ClassUnique:31, bCooked:1
			uint32_t ClassFlags;
			uint64_t ClassCastFlags;
			UE4::UClass* ClassWithin;
			UE4::UObject* ClassGeneratedBy;
			FName ClassConfigName;
			TArray<uint8_t> ClassReps;          // TArray<FRepRecord>
			TArray<UE4::UField*> NetFields;
			int32_t FirstOwnedClassRep;
			UE4::UObject* ClassDefaultObject;
			void* SparseClassData;
			UE4::UScriptStruct* SparseClassDataStruct;
			TMap<FName, UE4::UFunction*> FuncMap;
			TMap<FName, UE4::UFunction*> SuperFuncMap;
			uint8_t SuperFuncMapLock[0x8];      // FRWLock
			TArray<uint8_t> Interfaces;         // TArray<FImplementedInterface>
			TArray<uint8_t> ReferenceTokenStream; // FGCReferenceTokenStream
			uint8_t ReferenceTokenStreamCritical[0x28]; // FCriticalSection
			TArray<uint8_t> NativeFunctionLookupTable;
		};

		struct UEnum : UField {
			FString CppType;
			TArray<TPair<FName, int64_t>> Names;
			int32_t CppForm;
			int32_t EnumFlags;
			void* EnumDisplayNameFn;
		};

		struct FFieldVariant {
			void* Container;                    // FField* or UObject*
			bool bIsUObject;
		};

		struct FField {
			void** VTable;
			UE4::FFieldClass* ClassPrivate;
			FFieldVariant Owner;
			UE4::FField* Next;
			FName NamePrivate;
			uint32_t FlagsPrivate;
		};

		struct FProperty : FField {
			int32_t ArrayDim;
			int32_t ElementSize;
			uint64_t PropertyFlags;
			uint16_t RepIndex;
			uint8_t BlueprintReplicationCondition;
			int32_t Offset_Internal;
			FName RepNotifyFunc;
			UE4::FProperty* PropertyLinkNext;
			UE4::FProperty* NextRef;
			UE4::FProperty* DestructorLinkNext;
			UE4::FProperty* PostConstructLinkNext;
		};

		struct FFieldClass {
			FName Name;
			uint64_t Id;
			uint64_t CastFlags;
			uint32_t ClassFlags;
			UE4::FFieldClass* SuperClass;
			UE4::FField* DefaultObject;
			void* ConstructFn;
			int32_t UniqueNameIndexCounter;
		};

		namespace L = mdml::layout;
#define MDML_MIRROR_CHECK(Type, Member, Constant) \
		static_assert(offsetof(Type, Member) == L::Constant, "UE4::Mirror::" #Type "::" #Member " does not match EngineLayout.h")
#define MDML_MIRROR_SIZE(Type, Constant) \
		static_assert(sizeof(Type) == L::Constant, "sizeof(UE4::Mirror::" #Type ") does not match EngineLayout.h")

		MDML_MIRROR_CHECK(UObjectBase, ObjectFlags, UObjectBase::ObjectFlags);
		MDML_MIRROR_CHECK(UObjectBase, InternalIndex, UObjectBase::InternalIndex);
		MDML_MIRROR_CHECK(UObjectBase, ClassPrivate, UObjectBase::ClassPrivate);
		MDML_MIRROR_CHECK(UObjectBase, NamePrivate, UObjectBase::NamePrivate);
		MDML_MIRROR_CHECK(UObjectBase, OuterPrivate, UObjectBase::OuterPrivate);
		MDML_MIRROR_SIZE(UObjectBase, UObjectBase::Size);
		MDML_MIRROR_CHECK(UField, Next, UField::Next);
		MDML_MIRROR_SIZE(UField, UField::Size);
		MDML_MIRROR_CHECK(UStruct, SuperStruct, UStruct::SuperStruct);
		MDML_MIRROR_CHECK(UStruct, Children, UStruct::Children);
		MDML_MIRROR_CHECK(UStruct, ChildProperties, UStruct::ChildProperties);
		MDML_MIRROR_CHECK(UStruct, PropertiesSize, UStruct::PropertiesSize);
		MDML_MIRROR_CHECK(UStruct, MinAlignment, UStruct::MinAlignment);
		MDML_MIRROR_CHECK(UStruct, PropertyLink, UStruct::PropertyLink);
		MDML_MIRROR_SIZE(UStruct, UStruct::Size);
		MDML_MIRROR_CHECK(UScriptStruct, StructFlags, UScriptStruct::StructFlags);
		MDML_MIRROR_SIZE(UScriptStruct, UScriptStruct::Size);
		MDML_MIRROR_CHECK(UFunction, FunctionFlags, UFunction::FunctionFlags);
		MDML_MIRROR_CHECK(UFunction, NumParms, UFunction::NumParms);
		MDML_MIRROR_CHECK(UFunction, ParmsSize, UFunction::ParmsSize);
		MDML_MIRROR_CHECK(UFunction, ReturnValueOffset, UFunction::ReturnValueOffset);
		MDML_MIRROR_CHECK(UFunction, Func, UFunction::Func);
		MDML_MIRROR_SIZE(UFunction, UFunction::Size);
		MDML_MIRROR_CHECK(UClass, ClassFlags, UClass::ClassFlags);
		MDML_MIRROR_CHECK(UClass, ClassCastFlags, UClass::ClassCastFlags);
		MDML_MIRROR_CHECK(UClass, ClassDefaultObject, UClass::ClassDefaultObject);
		MDML_MIRROR_CHECK(UClass, FuncMap, UClass::FuncMap);
		MDML_MIRROR_SIZE(UClass, UClass::Size);
		MDML_MIRROR_CHECK(UEnum, CppType, UEnum::CppType);
		MDML_MIRROR_CHECK(UEnum, Names, UEnum::Names);
		MDML_MIRROR_CHECK(UEnum, CppForm, UEnum::CppForm);
		MDML_MIRROR_CHECK(UEnum, EnumFlags, UEnum::EnumFlags);
		MDML_MIRROR_CHECK(UEnum, EnumDisplayNameFn, UEnum::EnumDisplayNameFn);
		MDML_MIRROR_SIZE(UEnum, UEnum::Size);
		MDML_MIRROR_CHECK(FField, ClassPrivate, FField::ClassPrivate);
		MDML_MIRROR_CHECK(FField, Owner, FField::Owner);
		MDML_MIRROR_CHECK(FField, Next, FField::Next);
		MDML_MIRROR_CHECK(FField, NamePrivate, FField::NamePrivate);
		MDML_MIRROR_CHECK(FField, FlagsPrivate, FField::FlagsPrivate);
		MDML_MIRROR_SIZE(FField, FField::Size);
		MDML_MIRROR_CHECK(FProperty, ArrayDim, FProperty::ArrayDim);
		MDML_MIRROR_CHECK(FProperty, ElementSize, FProperty::ElementSize);
		MDML_MIRROR_CHECK(FProperty, PropertyFlags, FProperty::PropertyFlags);
		MDML_MIRROR_CHECK(FProperty, Offset_Internal, FProperty::Offset_Internal);
		MDML_MIRROR_SIZE(FProperty, FProperty::Size);
		MDML_MIRROR_CHECK(FFieldClass, Name, FFieldClass::Name);
		MDML_MIRROR_CHECK(FFieldClass, Id, FFieldClass::Id);
		MDML_MIRROR_CHECK(FFieldClass, CastFlags, FFieldClass::CastFlags);
		MDML_MIRROR_CHECK(FFieldClass, ClassFlags, FFieldClass::ClassFlags);
		MDML_MIRROR_CHECK(FFieldClass, SuperClass, FFieldClass::SuperClass);
		MDML_MIRROR_CHECK(FFieldClass, DefaultObject, FFieldClass::DefaultObject);
		MDML_MIRROR_SIZE(FFieldClass, FFieldClass::Size);
#undef MDML_MIRROR_CHECK
#undef MDML_MIRROR_SIZE
	}

	// Hand-written value types that the engine embeds: sizes against the PDB constants.
	static_assert(sizeof(FString) == mdml::layout::FString::Size, "FString layout");
	static_assert(sizeof(TArray<FName>) == mdml::layout::TArray::Size, "TArray layout");
	static_assert(sizeof(TMap<FName, uint8_t*>) == mdml::layout::TSet::Size, "TMap layout");
	static_assert(sizeof(NativeTMap<FName, uint8_t*>) == mdml::layout::TSet::Size, "NativeTMap layout");
	namespace Mirror {
		using FNameBytePtrSet = TSet<TPair<FName, uint8_t*>>;
		using FNameBytePtrSparseArray = TSparseArray<TSetElement<TPair<FName, uint8_t*>>>;
	}
	static_assert(sizeof(Mirror::FNameBytePtrSet) == mdml::layout::TSet::Size, "TSet layout");
	static_assert(offsetof(Mirror::FNameBytePtrSet, HashSize) == mdml::layout::TSet::HashSize, "TSet layout");
	static_assert(sizeof(Mirror::FNameBytePtrSparseArray) == mdml::layout::TSparseArray::Size, "TSparseArray layout");
	static_assert(offsetof(Mirror::FNameBytePtrSparseArray, FirstFreeIndex) == mdml::layout::TSparseArray::FirstFreeIndex, "TSparseArray layout");
	static_assert(sizeof(TSetElement<TPair<FName, uint8_t*>>) == mdml::layout::TSetElement::Size, "TSetElement layout");
	static_assert(sizeof(FText) == mdml::layout::FText::Size, "FText layout");
}
