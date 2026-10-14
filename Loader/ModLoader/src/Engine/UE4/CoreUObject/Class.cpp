#include "Class.h"
#include "UE4.h"
#include "EngineLayout.h"
#include "EngineMemory.h"

using mdml::mem::LoadField;
using mdml::mem::StoreField;

namespace UE4 {
	//---------------------------------------------------------------------------
	//UField Functions
	//---------------------------------------------------------------------------

	UField* UField::GetNext() const
	{
		return LoadField<UField*>(this, mdml::Layout.UField.Next);
	};

	//---------------------------------------------------------------------------
	//UClass Functions
	//---------------------------------------------------------------------------

	UClass* UClass::LoadClassFromString(const wchar_t* InName, bool bAllowObjectReconciliation)
	{
		return (UClass*)UObject::StaticLoadObject(UClass::StaticClass(), nullptr, InName, nullptr, ELoadFlags::None, nullptr, bAllowObjectReconciliation);
	}

	UObject* UClass::GetDefaultObject() const
	{
		return LoadField<UObject*>(this, mdml::layout::UClass::ClassDefaultObject);
	}

	uint32_t UClass::GetClassFlags() const
	{
		return LoadField<uint32_t>(this, mdml::layout::UClass::ClassFlags);
	}

	uint64_t UClass::GetClassCastFlags() const
	{
		return LoadField<uint64_t>(this, mdml::layout::UClass::ClassCastFlags);
	}

	//---------------------------------------------------------------------------
	//UEnum Functions
	//---------------------------------------------------------------------------

	FString UEnum::GetCppType() const {
		return LoadField<FString>(this, mdml::Layout.UEnum.CppType);
	}

	TArray<TPair<FName, uint64_t>> UEnum::GetNames() const {
		return LoadField<TArray<TPair<FName, uint64_t>>>(this, mdml::Layout.UEnum.Names);
	}

	UEnum::ECppForm UEnum::GetCppForm() const {
		return LoadField<UEnum::ECppForm>(this, mdml::Layout.UEnum.CppForm);
	}

	EEnumFlags UEnum::GetEnumFlags() const {
		return LoadField<EEnumFlags>(this, mdml::Layout.UEnum.Flags);
	}

	FEnumDisplayNameFn UEnum::GetEnumDisplayNameFn() const {
		return LoadField<FEnumDisplayNameFn>(this, mdml::Layout.UEnum.DisplayNameFn);
	}

	std::vector<std::string> UEnum::GetNamesParsed() const {
		std::vector<std::string> buffer;
		const auto names = GetNames();
		for (auto i = 0; i < names.Num(); ++i) {
			buffer.push_back(FName(names[i].Key.ComparisonIndex).GetName());
		}
		return buffer;
	}

	//---------------------------------------------------------------------------
	//UStruct Functions
	//---------------------------------------------------------------------------

	UStruct* UStruct::GetSuperField() const
	{
		return LoadField<UStruct*>(this, mdml::Layout.UStruct.SuperStruct);
	};

	FField* UStruct::GetChildProperties() const
	{
		return LoadField<FField*>(this, mdml::Layout.UStruct.ChildProperties);
	};

	UField* UStruct::GetChildren() const
	{
		return LoadField<UField*>(this, mdml::Layout.UStruct.Children);
	};

	int32_t UStruct::GetPropertySize() const
	{
		return LoadField<int32_t>(this, mdml::Layout.UStruct.PropertiesSize);
	};

	int32_t UStruct::GetMinAlignment() const
	{
		return LoadField<int32_t>(this, mdml::layout::UStruct::MinAlignment);
	};

	//---------------------------------------------------------------------------
	//UFunction Functions
	//---------------------------------------------------------------------------

	EFunctionFlags UFunction::GetFunctionFlags() const {
		return LoadField<EFunctionFlags>(this, mdml::Layout.UFunction.FunctionFlags);
	}
	void UFunction::SetFunctionFlags(EFunctionFlags flags) {
		StoreField(this, mdml::Layout.UFunction.FunctionFlags, flags);
	}
	uint8_t UFunction::GetNumParms() const {
		return LoadField<uint8_t>(this, mdml::Layout.UFunction.NumParams);
	}
	uint16_t UFunction::GetParamsSize() const {
		return LoadField<uint16_t>(this, mdml::Layout.UFunction.ParamsSize);
	}
	uint16_t UFunction::GetReturnValueOffset() const {
		return LoadField<uint16_t>(this, mdml::Layout.UFunction.ReturnValueOffset);
	}
	void* UFunction::GetFunction() const {
		return LoadField<void*>(this, mdml::Layout.UFunction.Func);
	}
	void UFunction::SetFunction(DWORD64 value) const {
		StoreField(const_cast<UFunction*>(this), mdml::Layout.UFunction.Func, value);
	};
}
