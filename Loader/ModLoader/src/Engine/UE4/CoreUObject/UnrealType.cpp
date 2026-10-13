#include "UnrealType.h"
#include "EngineLayout.h"
#include "EngineMemory.h"
#include "UE_LOG.h"

using mdml::mem::LoadField;

namespace UE4 {
	int32_t FProperty::GetArrayDim() const {
		return LoadField<int32_t>(this, mdml::Layout.Property.ArrayDim);
	};

	int32_t FProperty::GetElementSize() const {
		return LoadField<int32_t>(this, mdml::Layout.Property.ElementSize);
	}

	EPropertyFlags FProperty::GetPropertyFlags() const {
		return (EPropertyFlags)LoadField<uint64_t>(this, mdml::Layout.Property.Flags);
	}

	int32_t FProperty::GetOffset() const {
		return LoadField<int32_t>(this, mdml::Layout.Property.Offset);
	}

	std::string FProperty::GetCppTypeName() {
		if (IsA<FByteProperty>()) {
			return static_cast<FByteProperty*>(this)->GetCppType();
		}
		if (IsA<FUInt16Property>())
		{
			return static_cast<FUInt16Property*>(this)->GetCppType();
		}
		if (IsA<FUInt32Property>())
		{
			return static_cast<FUInt32Property*>(this)->GetCppType();
		}
		if (IsA<FUInt64Property>())
		{
			return static_cast<FUInt64Property*>(this)->GetCppType();
		}
		if (IsA<FInt8Property>())
		{
			return static_cast<FInt8Property*>(this)->GetCppType();
		}
		if (IsA<FInt16Property>())
		{
			return static_cast<FInt16Property*>(this)->GetCppType();
		}
		if (IsA<FIntProperty>())
		{
			return static_cast<FIntProperty*>(this)->GetCppType();
		}
		if (IsA<FInt64Property>())
		{
			return static_cast<FInt64Property*>(this)->GetCppType();
		}
		if (IsA<FFloatProperty>())
		{
			return static_cast<FFloatProperty*>(this)->GetCppType();
		}
		if (IsA<FDoubleProperty>())
		{
			return static_cast<FDoubleProperty*>(this)->GetCppType();
		}
		if (IsA<FBoolProperty>())
		{
			return static_cast<FBoolProperty*>(this)->GetCppType();
		}
		if (IsA<FObjectProperty>())
		{
			return static_cast<FObjectProperty*>(this)->GetCppType();
		}
		if (IsA<FClassProperty>())
		{
			return static_cast<FClassProperty*>(this)->GetCppType();
		}
		if (IsA<FInterfaceProperty>())
		{
			return static_cast<FInterfaceProperty*>(this)->GetCppType();
		}
		if (IsA<FWeakObjectProperty>())
		{
			return static_cast<FWeakObjectProperty*>(this)->GetCppType();
		}
		if (IsA<FLazyObjectProperty>())
		{
			return static_cast<FLazyObjectProperty*>(this)->GetCppType();
		}
		if (IsA<FAssetObjectProperty>())
		{
			return static_cast<FAssetObjectProperty*>(this)->GetCppType();
		}
		if (IsA<FAssetClassProperty>())
		{
			return static_cast<FAssetClassProperty*>(this)->GetCppType();
		}
		if (IsA<FNameProperty>())
		{
			return static_cast<FNameProperty*>(this)->GetCppType();
		}
		if (IsA<FStructProperty>())
		{
			return static_cast<FStructProperty*>(this)->GetCppType();
		}
		if (IsA<FStrProperty>())
		{
			return static_cast<FStrProperty*>(this)->GetCppType();
		}
		if (IsA<FTextProperty>())
		{
			return static_cast<FTextProperty*>(this)->GetCppType();
		}
		if (IsA<FArrayProperty>())
		{
			return static_cast<FArrayProperty*>(this)->GetCppType();
		}
		if (IsA<FMapProperty>())
		{
			return static_cast<FMapProperty*>(this)->GetCppType();
		}
		if (IsA<FDelegateProperty>())
		{
			return static_cast<FDelegateProperty*>(this)->GetCppType();
		}
		if (IsA<FMulticastDelegateProperty>())
		{
			return static_cast<FMulticastDelegateProperty*>(this)->GetCppType();
		}
		if (IsA<FEnumProperty>())
		{
			return static_cast<FEnumProperty*>(this)->GetCppType();
		}
		return "";
	}

	std::string FFieldClass::GetName() const
	{
		// Guarded read: AsUClass() is also called for FField classes of unknown origin (dumpers, exporters).
		FName Name;
		if (!mdml::mem::SafeRead(reinterpret_cast<const uint8_t*>(this) + mdml::Layout.FFieldClass.Name, Name)) {
			UE_LOG(LogTemp, Error, "Access violation while reading FFieldClass::Name. this: 0x{0:x}, Name offset: 0x{1:x}", (DWORD64)this, mdml::Layout.FFieldClass.Name);
			return "";
		}
		if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex)) {
			return Name.GetName();
		}

		return "";
	}

	uint64_t FFieldClass::GetID() const
	{
		return LoadField<uint64_t>(this, mdml::Layout.FFieldClass.ID);
	}

	uint64_t FFieldClass::GetCastFlags() const
	{
		return LoadField<uint64_t>(this, mdml::Layout.FFieldClass.CastFlags);
	}

	FFieldClass* FFieldClass::SuperClass() const
	{
		return LoadField<class FFieldClass*>(this, mdml::Layout.FFieldClass.SuperClass);
	}

	UClass* FFieldClass::AsUClass(FFieldClass* Class) {
		if (!Class)
			return nullptr;
		std::string name = Class->GetName();
#define AS_UCLASS_CHECK(X) \
		else if (name == #X) { \
			return F##X::StaticClass(); \
		}
		if (name.empty() || name == "nullptr") {
			return nullptr;
		}
		AS_UCLASS_CHECK(NumericProperty)
			AS_UCLASS_CHECK(ByteProperty)
			AS_UCLASS_CHECK(UInt16Property)
			AS_UCLASS_CHECK(UInt32Property)
			AS_UCLASS_CHECK(UInt64Property)
			AS_UCLASS_CHECK(Int8Property)
			AS_UCLASS_CHECK(Int16Property)
			AS_UCLASS_CHECK(IntProperty)
			AS_UCLASS_CHECK(Int64Property)
			AS_UCLASS_CHECK(FloatProperty)
			AS_UCLASS_CHECK(DoubleProperty)
			AS_UCLASS_CHECK(BoolProperty)
			AS_UCLASS_CHECK(ObjectPropertyBase)
			AS_UCLASS_CHECK(ObjectProperty)
			AS_UCLASS_CHECK(ClassProperty)
			AS_UCLASS_CHECK(InterfaceProperty)
			AS_UCLASS_CHECK(WeakObjectProperty)
			AS_UCLASS_CHECK(LazyObjectProperty)
			AS_UCLASS_CHECK(AssetObjectProperty)
			AS_UCLASS_CHECK(AssetClassProperty)
			AS_UCLASS_CHECK(NameProperty)
			AS_UCLASS_CHECK(StructProperty)
			AS_UCLASS_CHECK(StrProperty)
			AS_UCLASS_CHECK(TextProperty)
			AS_UCLASS_CHECK(ArrayProperty)
			AS_UCLASS_CHECK(MapProperty)
			AS_UCLASS_CHECK(DelegateProperty)
			AS_UCLASS_CHECK(MulticastDelegateProperty)
			AS_UCLASS_CHECK(EnumProperty)
		// UE 4.27 names of the old "Asset" property types (see FAssetObjectProperty in UnrealType.h).
		else if (name == "SoftObjectProperty") {
			return FAssetObjectProperty::StaticClass();
		}
		else if (name == "SoftClassProperty") {
			return FAssetClassProperty::StaticClass();
		}

		return nullptr;
	}

	
	FFieldClass* FField::GetClass() const
	{
		return LoadField<class FFieldClass*>(this, mdml::Layout.FField.ClassPrivate);
	}

	FField* FField::GetNext() const
	{
		return LoadField<class FField*>(this, mdml::Layout.FField.Next);
	};

	std::string FField::GetName() const
	{
		auto Name = LoadField<FName>(this, mdml::Layout.FField.Name);
		if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
		{
			return Name.GetName();
		}
		return "";
	};
	
	UEnum* FByteProperty::GetEnum() const {
		return LoadField<class UEnum*>(this, mdml::Layout.ByteProperty.Enum);
	}
	uint8_t FBoolProperty::GetFieldSize() const {
		return LoadField<uint8_t>(this, mdml::Layout.BoolProperty.FieldSize);
	}
	uint8_t FBoolProperty::ByteOffset() const {
		return LoadField<uint8_t>(this, mdml::Layout.BoolProperty.ByteOffset);
	}
	uint8_t FBoolProperty::ByteMask() const {
		return LoadField<uint8_t>(this, mdml::Layout.BoolProperty.ByteMask);
	}
	uint8_t FBoolProperty::FieldMask() const {
		return LoadField<uint8_t>(this, mdml::Layout.BoolProperty.FieldMask);
	}
	UClass* FObjectPropertyBase::GetPropertyClass() const {
		return LoadField<class UClass*>(this, mdml::Layout.ObjectPropertyBase.PropertyClass);
	}
	UClass* FClassProperty::GetMetaClass() const {
		return LoadField<class UClass*>(this, mdml::Layout.ClassProperty.MetaClass);
	}
	UClass* FInterfaceProperty::GetInterfaceClass() const {
		return LoadField<class UClass*>(this, mdml::Layout.InterfaceProperty.InterfaceClass);
	}
	UClass* FAssetClassProperty::GetMetaClass() const {
		return LoadField<class UClass*>(this, mdml::Layout.AssetClassProperty.MetaClass);
	}
	UScriptStruct* FStructProperty::GetStruct() const {
		return LoadField<class UScriptStruct*>(this, mdml::Layout.StructProperty.Struct);
	}
	FProperty* FArrayProperty::GetInner() const {
		return LoadField<class FProperty*>(this, mdml::Layout.ArrayProperty.Inner);
	}
	FProperty* FMapProperty::GetKeyProp() const {
		return LoadField<class FProperty*>(this, mdml::Layout.MapProperty.Key);
	}
	FProperty* FMapProperty::GetValueProp() const {
		return LoadField<class FProperty*>(this, mdml::Layout.MapProperty.Value);
	}
	UFunction* FDelegateProperty::GetSignatureFunction() const {
		return LoadField<class UFunction*>(this, mdml::Layout.DelegateProperty.SignatureFunction);
	}
	UFunction* FMulticastDelegateProperty::GetSignatureFunction() const {
		return LoadField<class UFunction*>(this, mdml::Layout.MulticastDelegateProperty.SignatureFunction);
	}
	FNumericProperty* FEnumProperty::GetUnderlyingProp() const {
		return LoadField<class FNumericProperty*>(this, mdml::Layout.EnumProperty.UnderlyingProp);
	}
	UEnum* FEnumProperty::GetEnum() const {
		return LoadField<class UEnum*>(this, mdml::Layout.EnumProperty.Enum);
	}
}