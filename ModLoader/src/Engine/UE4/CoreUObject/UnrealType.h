#pragma once

#include "Object.h"
#include "Class.h"
#include "EngineAddresses.h"

#define PROPERTY_IMPL_GET_CPP_TYPE(Type) std::string GetCppType() { return Type; }

namespace UE4 {
	class FField;
	class FProperty;

	class FFieldVariant
	{
	public:
		union FFieldObjectUnion
		{
			FField* Field;
			UObject* Object;
		} Container;
		bool bIsUObject;
	};
	class MDML_ENGINE_API FFieldClass
	{
	public:
		std::string GetName() const;
		uint64_t GetID() const;
		uint64_t GetCastFlags() const;
		FFieldClass* SuperClass() const;

		static UClass* AsUClass(FFieldClass* Class);
		UClass* GetUClass() { return AsUClass(this); }
	};
	class MDML_ENGINE_API FField
	{
	public:
		FFieldClass* GetClass() const;
		FField* GetNext() const;
		std::string GetName() const;
		FProperty* GetAsProperty() const { return (FProperty*)this; }
	};
	class MDML_ENGINE_API FProperty : public FField
	{
	public:
		FField* GetParentFProperty() { return (FField*)this; }
		UField* GetParentUProperty() { return (UField*)this; }

		int32_t GetArrayDim() const;
		int32_t GetElementSize() const;
		EPropertyFlags GetPropertyFlags() const;
		int32_t GetOffset() const;

		static bool IsFProperty() {
			return mdml::Addresses.bIsFProperty;
		}
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Property");
			return ptr;
		}
		template<class T>
		bool IsA() const {
			if (this->GetClass()) {
				UClass* thisClass = this->GetClass()->GetUClass();
				return thisClass == T::StaticClass();
			}
			return false;
		}
		std::string GetCppTypeName();
	};
	
	class MDML_ENGINE_API FNumericProperty : public FProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
			return ptr;
		}
	};
	class MDML_ENGINE_API FByteProperty : public FNumericProperty
	{
	public:
		UEnum* GetEnum() const;
		bool IsEnum() const { return GetEnum() != nullptr; }
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE((!IsEnum() ? "unsigned char" : ("TEnumAsByte<" + NameValidator::MakeUniqueCppName(GetEnum()) + ">")))
	};
	class MDML_ENGINE_API FUInt16Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("uint16_t")
	};
	class MDML_ENGINE_API FUInt32Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("uint32_t")
	};
	class MDML_ENGINE_API FUInt64Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("uint64_t")
	};
	class MDML_ENGINE_API FInt8Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("int8_t")
	};
	class MDML_ENGINE_API FInt16Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("int16_t")
	};
	class MDML_ENGINE_API FIntProperty : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("int32_t")
	};
	class MDML_ENGINE_API FInt64Property : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("int64_t")
	};
	class MDML_ENGINE_API FFloatProperty : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("float")
	};
	class MDML_ENGINE_API FDoubleProperty : public FNumericProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("double")
	};
	
	class MDML_ENGINE_API FBoolProperty : public FProperty
	{
	public:
		uint8_t GetFieldSize() const;
		uint8_t ByteOffset() const;
		uint8_t ByteMask() const;
		uint8_t FieldMask() const;
		bool IsNativeBool() const { return FieldMask() == 0xFF; }
		bool IsBitfield() const { return !IsNativeBool(); }

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE((IsNativeBool() ? "bool" : "unsigned char"));
	};
	
	class MDML_ENGINE_API FObjectPropertyBase : public FProperty
	{
	public:
		UClass* GetPropertyClass() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
			return ptr;
		}
	};
	class MDML_ENGINE_API FObjectProperty : public FObjectPropertyBase
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("class " + NameValidator::MakeValidName(GetPropertyClass()->GetCPPName()) + "*")
	};
	class MDML_ENGINE_API FClassProperty : public FObjectProperty
	{
	public:
		UClass* GetMetaClass() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("class " + NameValidator::MakeValidName(GetMetaClass()->GetCPPName()) + "*")
	};
	class MDML_ENGINE_API FInterfaceProperty : public FProperty
	{
	public:
		UClass* GetInterfaceClass() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TScriptInterface<class " + NameValidator::MakeValidName(GetInterfaceClass()->GetCPPName()) + ">")
	};
	class MDML_ENGINE_API FWeakObjectProperty : public FObjectPropertyBase
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TWeakObjectPtr<class " + NameValidator::MakeValidName(GetPropertyClass()->GetCPPName()) + ">")
	};
	class MDML_ENGINE_API FLazyObjectProperty : public FObjectPropertyBase
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TLazyObjectPtr<class " + NameValidator::MakeValidName(GetPropertyClass()->GetCPPName()) + ">")
	};
	class MDML_ENGINE_API FAssetObjectProperty : public FObjectPropertyBase
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.AssetObjectProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TAssetPtr<class " + NameValidator::MakeValidName(GetPropertyClass()->GetCPPName()) + ">")
	};
	class MDML_ENGINE_API FAssetClassProperty : public FAssetObjectProperty
	{
	public:
		UClass* GetMetaClass() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.AssetClassProperty");
			return ptr;
		}
	};
	
	class MDML_ENGINE_API FNameProperty : public FProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct FName")
	};
	class MDML_ENGINE_API FStrProperty : public FProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct FString")
	};
	class MDML_ENGINE_API FTextProperty : public FProperty
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct FText")
	};
	
	class MDML_ENGINE_API FStructProperty : public FProperty
	{
	public:
		UScriptStruct* GetStruct() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct " + NameValidator::MakeUniqueCppName(GetStruct()))
	};
	class MDML_ENGINE_API FArrayProperty : public FProperty
	{
	public:
		FProperty* GetInner() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TArray<" + GetInner()->GetCppTypeName() + ">")
	};
	class MDML_ENGINE_API FEnumProperty : public FProperty
	{
	public:
		class FNumericProperty* GetUnderlyingProp() const;
		class UEnum* GetEnum() const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE(NameValidator::MakeUniqueCppName(GetEnum()));
	};
	
	class MDML_ENGINE_API FMapProperty : public FProperty
	{
	public:
		FProperty* GetKeyProp() const;
		FProperty* GetValueProp() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("TMap<" + GetKeyProp()->GetCppTypeName() + ", " + GetValueProp()->GetCppTypeName() + ">")
	};
	
	class MDML_ENGINE_API FDelegateProperty : public FProperty
	{
	public:
		UFunction* GetSignatureFunction() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct FScriptDelegate")
	};
	class MDML_ENGINE_API FMulticastDelegateProperty : public FProperty
	{
	public:
		UFunction* GetSignatureFunction() const;
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
			return ptr;
		}
		PROPERTY_IMPL_GET_CPP_TYPE("struct FScriptMulticastDelegate")
	};
	static UE4::FProperty* _dummy_foobar = nullptr;

	// Finds a reflected property by name on the object's class or any of its super classes
	// (members declared in a native base class, e.g. UMedievalDynastyGameInstance::MDGameState, live there).
	inline UE4::FProperty* FindPropertyByName(UE4::UObject* Object, const std::string& Name)
	{
		if (!Object)
			return nullptr;
		for (UE4::UStruct* Struct = Object->GetClass(); Struct; Struct = Struct->GetSuperField())
		{
			if (FProperty::IsFProperty())
			{
				for (auto Field = (UE4::FField*)Struct->GetChildren(); Field; Field = Field->GetNext())
				{
					if (Field->GetName() == Name)
						return (UE4::FProperty*)Field;
				}
			}
			else
			{
				for (auto Field = (UE4::UField*)Struct->GetChildren(); Field; Field = Field->GetNext())
				{
					if (Field->GetName() == Name)
						return (UE4::FProperty*)Field;
				}
			}
		}
		return nullptr;
	}

	template<typename T>
	bool GetVariable(UE4::UObject* Object, std::string Name, T& Variable, UE4::FProperty*& Property = _dummy_foobar)
	{
		auto varProperty = FindPropertyByName(Object, Name);
		if (!varProperty)
			return false;
		Property = varProperty;
		Variable = Read<T>((byte*)Object + varProperty->GetOffset());
		return true;
	}
	template<typename T>
	bool SetVariable(UE4::UObject* Object, std::string Name, T Value)
	{
		auto varProperty = FindPropertyByName(Object, Name);
		if (!varProperty)
			return false;
		Write<T>((byte*)Object + varProperty->GetOffset(), Value);
		return true;
	}
}