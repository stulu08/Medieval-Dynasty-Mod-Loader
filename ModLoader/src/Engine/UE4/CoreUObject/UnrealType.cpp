#include "UnrealType.h"
#include "GameInfo.h"
#include "UE_LOG.h"

namespace UE4 {
	int32_t FProperty::GetArrayDim() const {
		return Read<int32_t>((byte*)this + SDK::SelectedGameProfile.defs.Property.ArrayDim);
	};

	int32_t FProperty::GetElementSize() const {
		return Read<int32_t>((byte*)this + SDK::SelectedGameProfile.defs.Property.ElementSize);
	}

	EPropertyFlags FProperty::GetPropertyFlags() const {
		return (EPropertyFlags)Read<uint64_t>((byte*)this + SDK::SelectedGameProfile.defs.Property.Flags);
	}

	int32_t FProperty::GetOffset() const {
		return Read<int32_t>((byte*)this + SDK::SelectedGameProfile.defs.Property.Offset);
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
		// Helper function with __try block
		auto SafeGetName = [](const FFieldClass* fieldClass) -> FName {
			__try {
				return *reinterpret_cast<FName*>((byte*)fieldClass + SDK::SelectedGameProfile.defs.FFieldClass.Name);
			}
			__except (EXCEPTION_EXECUTE_HANDLER) {
				UE_LOG(LogTemp, Error, "Access violation while dereferencing FName. this: 0x{0:x}, Name Offser: 0x{1:x}", (DWORD64)fieldClass, SDK::SelectedGameProfile.defs.FFieldClass.Name);
				return FName();
			}
			};

		FName Name = SafeGetName(this);
		if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex)) {
			return Name.GetName();
		}

		return "";
	}

	uint64_t FFieldClass::GetID() const
	{
		return Read<uint64_t>((byte*)this + SDK::SelectedGameProfile.defs.FFieldClass.ID);
	}

	uint64_t FFieldClass::GetCastFlags() const
	{
		return Read<uint64_t>((byte*)this + SDK::SelectedGameProfile.defs.FFieldClass.CastFlags);
	}

	FFieldClass* FFieldClass::SuperClass() const
	{
		return Read<class FFieldClass*>((byte*)this + SDK::SelectedGameProfile.defs.FFieldClass.SuperClass);
	}

	UClass* FFieldClass::AsUClass(FFieldClass* Class) {
		if (!Class)
			return nullptr;
		std::string name = Class->GetName();
#define AS_UClASS_CHECK(X) \
		else if (name == #X) { \
			return F##X::StaticClass(); \
		}
		if (name.empty() || name == "nullptr") {
			return nullptr;
		}
		AS_UClASS_CHECK(NumericProperty)
			AS_UClASS_CHECK(ByteProperty)
			AS_UClASS_CHECK(UInt16Property)
			AS_UClASS_CHECK(UInt32Property)
			AS_UClASS_CHECK(UInt64Property)
			AS_UClASS_CHECK(Int8Property)
			AS_UClASS_CHECK(Int16Property)
			AS_UClASS_CHECK(IntProperty)
			AS_UClASS_CHECK(Int64Property)
			AS_UClASS_CHECK(FloatProperty)
			AS_UClASS_CHECK(DoubleProperty)
			AS_UClASS_CHECK(BoolProperty)
			AS_UClASS_CHECK(ObjectPropertyBase)
			AS_UClASS_CHECK(ObjectProperty)
			AS_UClASS_CHECK(ClassProperty)
			AS_UClASS_CHECK(InterfaceProperty)
			AS_UClASS_CHECK(WeakObjectProperty)
			AS_UClASS_CHECK(LazyObjectProperty)
			AS_UClASS_CHECK(AssetObjectProperty)
			AS_UClASS_CHECK(AssetClassProperty)
			AS_UClASS_CHECK(NameProperty)
			AS_UClASS_CHECK(StructProperty)
			AS_UClASS_CHECK(StrProperty)
			AS_UClASS_CHECK(TextProperty)
			AS_UClASS_CHECK(ArrayProperty)
			AS_UClASS_CHECK(MapProperty)
			AS_UClASS_CHECK(DelegateProperty)
			AS_UClASS_CHECK(MulticastDelegateProperty)
			AS_UClASS_CHECK(EnumProperty);

		return nullptr;
	}

	
	FFieldClass* FField::GetClass() const
	{
		return Read<class FFieldClass*>((byte*)this + SDK::SelectedGameProfile.defs.FField.ClassPrivate);
	}

	FField* FField::GetNext() const
	{
		return Read<class FField*>((byte*)this + SDK::SelectedGameProfile.defs.FField.Next);
	};

	std::string FField::GetName() const
	{
		auto Name = *reinterpret_cast<FName*>((byte*)this + SDK::SelectedGameProfile.defs.FField.Name);
		if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
		{
			return Name.GetName();
		}
		return "";
	};
	
	UEnum* FByteProperty::GetEnum() const {
		return Read<class UEnum*>((byte*)this + SDK::SelectedGameProfile.defs.ByteProperty.Enum);
	}
	uint8_t FBoolProperty::GetFieldSize() const {
		return Read<uint8_t>((byte*)this + SDK::SelectedGameProfile.defs.BoolProperty.FieldSize);
	}
	uint8_t FBoolProperty::ByteOffset() const {
		return Read<uint8_t>((byte*)this + SDK::SelectedGameProfile.defs.BoolProperty.ByteOffset);
	}
	uint8_t FBoolProperty::ByteMask() const {
		return Read<uint8_t>((byte*)this + SDK::SelectedGameProfile.defs.BoolProperty.ByteMask);
	}
	uint8_t FBoolProperty::FieldMask() const {
		return Read<uint8_t>((byte*)this + SDK::SelectedGameProfile.defs.BoolProperty.FieldMask);
	}
	UClass* FObjectPropertyBase::GetPropertyClass() const {
		return Read<class UClass*>((byte*)this + SDK::SelectedGameProfile.defs.ObjectPropertyBase.PropertyClass);
	}
	UClass* FClassProperty::GetMetaClass() const {
		return Read<class UClass*>((byte*)this + SDK::SelectedGameProfile.defs.ClassProperty.MetaClass);
	}
	UClass* FInterfaceProperty::GetInterfaceClass() const {
		return Read<class UClass*>((byte*)this + SDK::SelectedGameProfile.defs.InterfaceProperty.InterfaceClass);
	}
	UClass* FAssetClassProperty::GetMetaClass() const {
		return Read<class UClass*>((byte*)this + SDK::SelectedGameProfile.defs.AssetClassProperty.MetaClass);
	}
	UScriptStruct* FStructProperty::GetStruct() const {
		return Read<class UScriptStruct*>((byte*)this + SDK::SelectedGameProfile.defs.StructProperty.Struct);
	}
	FProperty* FArrayProperty::GetInner() const {
		return Read<class FProperty*>((byte*)this + SDK::SelectedGameProfile.defs.ArrayProperty.Inner);
	}
	FProperty* FMapProperty::GetKeyProp() const {
		return Read<class FProperty*>((byte*)this + SDK::SelectedGameProfile.defs.MapProperty.Key);
	}
	FProperty* FMapProperty::GetValueProp() const {
		return Read<class FProperty*>((byte*)this + SDK::SelectedGameProfile.defs.MapProperty.Value);
	}
	UFunction* FDelegateProperty::GetSignatureFunction() const {
		return Read<class UFunction*>((byte*)this + SDK::SelectedGameProfile.defs.DelegateProperty.SignatureFunction);
	}
	UFunction* FMulticastDelegateProperty::GetSignatureFunction() const {
		return Read<class UFunction*>((byte*)this + SDK::SelectedGameProfile.defs.MulticastDelegateProperty.SignatureFunction);
	}
	FNumericProperty* FEnumProperty::GetUnderlyingProp() const {
		return Read<class FNumericProperty*>((byte*)this + SDK::SelectedGameProfile.defs.EnumProperty.UnderlyingProp);
	}
	UEnum* FEnumProperty::GetEnum() const {
		return Read<class UEnum*>((byte*)this + SDK::SelectedGameProfile.defs.EnumProperty.Enum);
	}
}