#pragma once
#include "Utilities/Logger.h"
#include "UE4.h"
namespace ClassDefFinder {
	bool FindUObjectDefs(UE4::UObject* CoreUObject, UE4::UObject* UEObject);
	bool FindUFieldDefs();
	bool FindUEnumDefs();
	bool FindUStructDefs();
	bool FindUFunctionDefs();
	bool FindUEProperty();
};
