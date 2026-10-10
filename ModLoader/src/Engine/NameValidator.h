#pragma once
#include "Core.h"

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
	std::string MakeValidName(std::string&& name);
	std::string SimplifyEnumName(std::string&& name);
	std::string MakeUniqueCppName(const UE4::UEnum* e);
	std::string MakeUniqueCppName(const UE4::UStruct* ss);
};