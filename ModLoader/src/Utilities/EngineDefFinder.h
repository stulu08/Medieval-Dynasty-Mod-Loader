#pragma once
#include "GameInfo.h"
#include "UE4/UObject/Object.h"
namespace ClassDefFinder
{
	bool FindUObjectDefs(UE4::UObject* CoreUObject, UE4::UObject* UEObject);
	bool FindUFieldDefs();
	bool FindUEnumDefs();
	bool FindUStructDefs();
	bool FindUFunctionDefs();
	bool FindUEProperty();
};
