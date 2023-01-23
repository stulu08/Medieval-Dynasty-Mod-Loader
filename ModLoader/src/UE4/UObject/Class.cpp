#include "Class.h"
#include <MDML.h>

namespace UE4 {
	//---------------------------------------------------------------------------
	//UField Functions
	//---------------------------------------------------------------------------

	UField* UField::GetNext() const
	{
		return Read<UField*>((byte*)this + MDML::SelectedGameProfile.defs.UField.Next);
	};

	//---------------------------------------------------------------------------
	//UClass Functions
	//---------------------------------------------------------------------------

	UClass* UClass::LoadClassFromString(const wchar_t* InName, bool bAllowObjectReconciliation)
	{
		return (UClass*)UObject::StaticLoadObject(UClass::StaticClass(), nullptr, InName, nullptr, ELoadFlags::None, nullptr, bAllowObjectReconciliation);
	}

	//---------------------------------------------------------------------------
	//UEnum Functions
	//---------------------------------------------------------------------------

	FString UEnum::GetCppType() const {
		return Read<FString>((byte*)this + MDML::SelectedGameProfile.defs.UEnum.CppType);
	}

	TArray<TPair<FName, uint64_t>> UEnum::GetNames() const {
		return Read<TArray<TPair<FName, uint64_t>>>((byte*)this + MDML::SelectedGameProfile.defs.UEnum.Names);
	}

	UEnum::ECppForm UEnum::GetCppForm() const {
		return Read<UEnum::ECppForm>((byte*)this + MDML::SelectedGameProfile.defs.UEnum.CppForm);
	}

	EEnumFlags UEnum::GetEnumFlags() const {
		return Read<EEnumFlags>((byte*)this + MDML::SelectedGameProfile.defs.UEnum.Flags);
	}

	FEnumDisplayNameFn UEnum::GetEnumDisplayNameFn() const {
		return Read<FEnumDisplayNameFn>((byte*)this + MDML::SelectedGameProfile.defs.UEnum.DisplayNameFn);
	}

	std::vector<std::string> UEnum::GetNamesParsed() const {
		std::vector<std::string> buffer;
		auto& names = GetNames();
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
		return Read<UStruct*>((byte*)this + MDML::SelectedGameProfile.defs.UStruct.SuperStruct);
	};

	UField* UStruct::GetChildren() const
	{
		return Read<UField*>((byte*)this + MDML::SelectedGameProfile.defs.UStruct.Children);
	};

	int32_t UStruct::GetPropertySize() const
	{
		return Read<int32_t>((byte*)this + MDML::SelectedGameProfile.defs.UStruct.PropertiesSize);
	};

	//---------------------------------------------------------------------------
	//UFunction Functions
	//---------------------------------------------------------------------------

	EFunctionFlags UFunction::GetFunctionFlags() const {
		return Read<EFunctionFlags>((byte*)this + MDML::SelectedGameProfile.defs.UFunction.FunctionFlags);
	}
	void UFunction::SetFunctionFlags(EFunctionFlags flags) {
		Write((byte*)this + MDML::SelectedGameProfile.defs.UFunction.FunctionFlags, flags);
	}
	uint8_t UFunction::GetNumParms() const {
		return Read<uint8_t>((byte*)this + MDML::SelectedGameProfile.defs.UFunction.NumParams);
	}
	uint16_t UFunction::GetParamsSize() const {
		return Read<uint16_t>((byte*)this + MDML::SelectedGameProfile.defs.UFunction.ParamsSize);
	}
	uint16_t UFunction::GetReturnValueOffset() const {
		return Read<uint16_t>((byte*)this + MDML::SelectedGameProfile.defs.UFunction.ReturnValueOffset);
	}
	;
	void* UFunction::GetFunction() const { return Read<void*>((byte*)this + MDML::SelectedGameProfile.defs.UFunction.Func); }
	void UFunction::SetFunction(DWORD64 value) const {
		Write((byte*)this + MDML::SelectedGameProfile.defs.UFunction.Func, value);
	};
}