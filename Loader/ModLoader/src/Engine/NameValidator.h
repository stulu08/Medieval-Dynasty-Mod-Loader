#pragma once
#include "MDML/Core.h"

namespace UE4 {
	class UEnum;
	class UStruct;
}

namespace NameValidator {
	/// <summary>
	/// Makes valid C++ name from the given name.
	/// </summary>
	/// <param name="name">The name to process.</param>
	/// <returns>A valid C++ name.</returns>
	MDML_ENGINE_API std::string MakeValidName(std::string&& name);
	MDML_ENGINE_API std::string SimplifyEnumName(std::string&& name);
	MDML_ENGINE_API std::string MakeUniqueCppName(const UE4::UEnum* e);
	MDML_ENGINE_API std::string MakeUniqueCppName(const UE4::UStruct* ss);
};