#include "Core.h"
#include "../UE4/Ue4.hpp"
#include <MDML.h>
#include <GameFramework/PlayerController.h>
namespace ClassDefFinder
{
	bool FindUObjectIndexDefs(UE4::UObject* CoreUObject, UE4::UObject* UEObject)
	{
		Log::Info_UML("Scanning For UObject Index Def.");
		bool HasIndexNotBeenFound = true;

		while (HasIndexNotBeenFound)
		{
			MDML::SelectedGameProfile.defs.UObject.Index = MDML::SelectedGameProfile.defs.UObject.Index + 0x4;
			if (Read<int32_t>((byte*)CoreUObject + MDML::SelectedGameProfile.defs.UObject.Index) == 1)
			{
				if (Read<int32_t>((byte*)UEObject + MDML::SelectedGameProfile.defs.UObject.Index) == 2)
				{
					HasIndexNotBeenFound = false;
				}
			}
		}
		Log::Info_UML("UObject Index Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UObject.Index);
		return true;
	};

	bool FindUObjectNameDefs(UE4::UObject* CoreUObject)
	{
		bool HasNameNotBeenFound = true;
		bool HasHardNameCheck = false;
		Log::Info_UML("Scanning For UObject Name Def.");
		while (HasNameNotBeenFound)
		{
			UE4::FName Name;
			if (HasHardNameCheck == false)
			{
				MDML::SelectedGameProfile.defs.UObject.Name = 0x18;
				HasHardNameCheck = true;
			}
			Name = *reinterpret_cast<UE4::FName*>((byte*)CoreUObject + MDML::SelectedGameProfile.defs.UObject.Name);
			if (MDML::SelectedGameProfile.UsesFNamePool)
			{
				if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
				{
					if (Name.GetName() == "Object")
					{
						HasNameNotBeenFound = false;
					}
				}
			}
			else
			{
				if (UE4::FName::GetTNameArray().IsValidIndex(Name.ComparisonIndex))
				{
					if (Name.GetName() == "Object")
					{
						HasNameNotBeenFound = false;
					}
				}
			}
			if (HasNameNotBeenFound == true)
			{
				MDML::SelectedGameProfile.defs.UObject.Name = MDML::SelectedGameProfile.defs.UObject.Name + 0x8;
			}
		}
		Log::Info_UML("UObject Name Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UObject.Name);
		return true;
	}

	bool FindUObjectClassDefs(UE4::UObject* CoreUObject)
	{
		bool HasClassNotBeenFound = true;
		bool HasFinishedHardCheck = false;
		Log::Info_UML("Scanning For UObject Class Def.");
		while (HasClassNotBeenFound)
		{
			UE4::UClass* Class;
			if (HasFinishedHardCheck == false)
			{
				MDML::SelectedGameProfile.defs.UObject.Class = 0x10;
				Class = Read<UE4::UClass*>((byte*)CoreUObject + MDML::SelectedGameProfile.defs.UObject.Class);
				HasFinishedHardCheck = true;
			}
			else
			{
				Class = Read<UE4::UClass*>((byte*)CoreUObject + MDML::SelectedGameProfile.defs.UObject.Class);
			}
			
			auto ClassIndex = Class->GetIndex();
			UE4::UObject* ClassCheck;
			if (MDML::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
			{
				ClassCheck = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(ClassIndex).Object;
			}
			else
			{
				ClassCheck = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(ClassIndex).Object;
			}

			if (ClassCheck != nullptr)
			{
				if (ClassCheck->GetName() == "Class")
				{
					HasClassNotBeenFound = false;
				}
			}
			if (HasClassNotBeenFound)
			{
				MDML::SelectedGameProfile.defs.UObject.Class = MDML::SelectedGameProfile.defs.UObject.Class + 0x8;
			}
		}
		Log::Info_UML("UObject Class Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UObject.Class);
		return true;
	}

	bool FindUObjectOuterDefs(UE4::UObject* CoreUObject)
	{
		bool HasOuterNotBeenFound = true;
		Log::Info_UML("Scanning For UObject Outer Def.");
		while (HasOuterNotBeenFound)
		{
			auto Outer = Read<UE4::UObject*>((byte*)CoreUObject + MDML::SelectedGameProfile.defs.UObject.Outer);
			UE4::UObject* ObjectCheck;
			if (MDML::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
			{
				ObjectCheck = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(0).Object;
			}
			else
			{
				ObjectCheck = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(0).Object;
			}

			if (Outer == ObjectCheck)
			{
				HasOuterNotBeenFound = false;
			}
			if (HasOuterNotBeenFound)
			{
				MDML::SelectedGameProfile.defs.UObject.Outer = MDML::SelectedGameProfile.defs.UObject.Outer + 0x8;
			}
		}
		Log::Info_UML("UObject Outer Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UObject.Outer);
		return true;
	}

	bool FindUObjectDefs(UE4::UObject* CoreUObject, UE4::UObject* UEObject)
	{
		if (FindUObjectIndexDefs(CoreUObject, UEObject) && FindUObjectNameDefs(CoreUObject) && FindUObjectClassDefs(CoreUObject) && FindUObjectOuterDefs(CoreUObject))
		{
			Log::Info_UML("UObject Defined");
			return true;
		}
		else
		{
			Log::Error_UML("UObject could not be defined. Try Manually Defining in the game profile file.");
		}
		return false;
	}

	bool FindUFieldNextDef()
	{
		Log::Info_UML("Scanning For UField Next Def.");
		bool HasNextNotBeenFound = true;
		auto UserConstructionScript = UE4::UObject::FindObject<UE4::UFunction>("Function Engine.Actor.UserConstructionScript");
		MDML::SelectedGameProfile.defs.UField.Next = MDML::SelectedGameProfile.defs.UObject.Outer; // Prevents scanning same area over and over.
		while (HasNextNotBeenFound)
		{
			auto NextObject = Read<UE4::UField*>((byte*)UserConstructionScript + MDML::SelectedGameProfile.defs.UField.Next);
			if (NextObject && NextObject->GetOuter() == UserConstructionScript->GetOuter())
			{
				HasNextNotBeenFound = false;
			}
			if (HasNextNotBeenFound)
			{
				MDML::SelectedGameProfile.defs.UField.Next = MDML::SelectedGameProfile.defs.UField.Next + 0x8;
			}
		}
		Log::Info_UML("UField Next Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UField.Next);
		return true;
	}

	//bool FindUFieldNextDef()
	//{
	//	Log::Info_UML("Scanning For UField Next Def.");
	//	bool HasNextNotBeenFound = true;
	//	auto WasRecentlyRendered = UE4::UObject::FindObject<UE4::UFunction>("Function Engine.Actor.WasRecentlyRendered");
	//	MDML::SelectedGameProfile.defs.UField.Next = MDML::SelectedGameProfile.defs.UObject.Outer; // Prevents scanning same area over and over.
	//	while (HasNextNotBeenFound)
	//	{
	//		auto NextObject = Read<UE4::UField*>((byte*)WasRecentlyRendered + MDML::SelectedGameProfile.defs.UField.Next);
	//		if (NextObject && NextObject->GetIndex() == WasRecentlyRendered->GetIndex() - 1)
	//		{
	//			HasNextNotBeenFound = false;
	//		}
	//		if (HasNextNotBeenFound)
	//		{
	//			MDML::SelectedGameProfile.defs.UField.Next = MDML::SelectedGameProfile.defs.UField.Next + 0x8;
	//		}
	//	}
	//	Log::Info_UML("UField Next Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UField.Next);
	//	return true;
	//}

	bool FindUFieldDefs()
	{
		if (FindUFieldNextDef())
		{
			Log::Info_UML("UField Defined");
			return true;
		}
		else
		{
			Log::Error_UML("UField could not be defined. Try Manually Defining in the game profile file.");
		}
		return false;
	}
	bool FindUEnumNames() {
		Log::Info_MDML("Scanning For Enum Names Def.");
		// UStruct.SuperStruct is at start and both implement UField
		// Names is behind FString CppType and UStruct.SuperStruct has 10 bytes of uknown data
		// Result should be 0x40
		MDML::SelectedGameProfile.defs.UEnum.Names = MDML::SelectedGameProfile.defs.UStruct.SuperStruct;
		Log::Info_MDML("Enum Names Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.Names);

		//cpp type is in front of Names
		MDML::SelectedGameProfile.defs.UEnum.CppType = MDML::SelectedGameProfile.defs.UEnum.Names - sizeof(UE4::FString);
		Log::Info_MDML("Enum CppType Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.CppType);

		//Cpp form is behind
		MDML::SelectedGameProfile.defs.UEnum.CppForm = MDML::SelectedGameProfile.defs.UEnum.Names + sizeof(UE4::TArray<UE4::TPair<UE4::FName, uint64_t>>);
		Log::Info_MDML("Enum CppForm Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.CppForm);

		MDML::SelectedGameProfile.defs.UEnum.Flags = MDML::SelectedGameProfile.defs.UEnum.CppForm + sizeof(UE4::UEnum::ECppForm);
		Log::Info_MDML("Enum Flags Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.Flags);

		MDML::SelectedGameProfile.defs.UEnum.DisplayNameFn = MDML::SelectedGameProfile.defs.UEnum.Flags + sizeof(UE4::EEnumFlags);
		Log::Info_MDML("Enum DisplayNameFn Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.DisplayNameFn);
		
		//UUserDefinedEnum implements UEnum and DisplayNameMap , result should be 0x60
		MDML::SelectedGameProfile.defs.UEnum.UserDefDisplayNameMap = MDML::SelectedGameProfile.defs.UEnum.DisplayNameFn + sizeof(UE4::FEnumDisplayNameFn);
		Log::Info_MDML("UserDefinedEnum DisplayNameMap Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UEnum.UserDefDisplayNameMap);

		return MDML::SelectedGameProfile.defs.UStruct.SuperStruct > 0;
	}
	bool FindUEnumDefs() {
		if (FindUEnumNames())
		{
			Log::Info_MDML("UEnum Defined");
			return true;
		}
		else
		{
			Log::Error_MDML("UEnum could not be defined. Try Manually Defining in the game profile file.");
		}
		return false;
	}
	bool FindUStructSuperFieldDef()
	{
		Log::Info_UML("Scanning For UStruct SuperField Def.");
		auto StructObject = UE4::UObject::FindObject<UE4::UStruct>("Class CoreUObject.Struct");
		auto FieldObject = UE4::UObject::FindObject<UE4::UField>("Class CoreUObject.Field");
		bool HasSuperFieldNotBeenFound = true;
		MDML::SelectedGameProfile.defs.UStruct.SuperStruct = MDML::SelectedGameProfile.defs.UField.Next; // Prevents scanning same area over and over.
		while (HasSuperFieldNotBeenFound)
		{
			auto SuperFieldObject = Read<UE4::UObject*>((byte*)StructObject + MDML::SelectedGameProfile.defs.UStruct.SuperStruct);
			if (SuperFieldObject == FieldObject)
			{
				HasSuperFieldNotBeenFound = false;
			}
			if (HasSuperFieldNotBeenFound)
			{
				MDML::SelectedGameProfile.defs.UStruct.SuperStruct = MDML::SelectedGameProfile.defs.UStruct.SuperStruct + 0x8;
			}
		}
		Log::Info_UML("UStruct SuperField Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UStruct.SuperStruct);
		return true;
	}

	bool FindUStructChildrenDef()
	{
		Log::Info_UML("Scanning For UStruct Children Def.");
		auto VectorObject = UE4::UObject::FindObject<UE4::UObject>("ScriptStruct CoreUObject.Vector");
		auto VectorFirstChildObject = UE4::UObject::FindObject<UE4::UObject>("FloatProperty CoreUObject.Vector.X");
		bool HasChildrenNotBeenFound = true;
		MDML::SelectedGameProfile.defs.UStruct.Children = MDML::SelectedGameProfile.defs.UStruct.SuperStruct;
		while (HasChildrenNotBeenFound)
		{
			auto ChildObject = Read<UE4::UObject*>((byte*)VectorObject + MDML::SelectedGameProfile.defs.UStruct.Children);
			if (VectorFirstChildObject)
			{
				if (VectorFirstChildObject == ChildObject)
				{
					HasChildrenNotBeenFound = false;
				}
				if (HasChildrenNotBeenFound)
				{
					MDML::SelectedGameProfile.defs.UStruct.Children = MDML::SelectedGameProfile.defs.UStruct.Children + 0x8;
				}
			}
			else
			{
				if (auto Class = ChildObject->GetClass())
				{
					if (Class->GetName() == "FloatProperty" || "Vector")
					{
						HasChildrenNotBeenFound = false;
					}
					else
					{
						MDML::SelectedGameProfile.defs.UStruct.Children = MDML::SelectedGameProfile.defs.UStruct.Children + 0x8;
					}
				}
				else
				{
					MDML::SelectedGameProfile.defs.UStruct.Children = MDML::SelectedGameProfile.defs.UStruct.Children + 0x8;
				}
			}
		}
		Log::Info_UML("UStruct Children Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UStruct.Children);
		return true;
	}

	bool FindUStructPropertySizeDef()
	{
		Log::Info_UML("Scanning For UStruct PropertySize Def.");
		auto VectorObject = UE4::UObject::FindObject<UE4::UObject>("ScriptStruct CoreUObject.Vector");
		while (Read<int32_t>((byte*)VectorObject + MDML::SelectedGameProfile.defs.UStruct.PropertiesSize) != 12)
		{
			MDML::SelectedGameProfile.defs.UStruct.PropertiesSize = MDML::SelectedGameProfile.defs.UStruct.PropertiesSize + 0x4;
		}
		Log::Info_UML("UStruct PropertySize Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UStruct.PropertiesSize);
		return true;
	}

	int GetOverallUStructSize()
	{
		auto UStruct = UE4::UObject::FindObject<UE4::UStruct>("Class CoreUObject.Struct");
		if (UStruct)
		{
			return UStruct->GetPropertySize();
		}
		return 0;
	}

	bool FindUStructDefs()
	{
		if (FindUStructSuperFieldDef() && FindUStructChildrenDef() && FindUStructPropertySizeDef())
		{
			MDML::SelectedGameProfile.defs.UStruct.OverallUStructSize = GetOverallUStructSize();
			Log::Info_UML("UStruct Size: {0}", MDML::SelectedGameProfile.defs.UStruct.OverallUStructSize);
			Log::Info_UML("UStruct Defined");
			return true;
		}
		else
		{
			Log::Error_UML("UStruct could not be defined. Try Manually Defining in the game profile file.");
		}
		return false;
	}

	bool FindUFunctionFunctionFlagsDef()
	{
		Log::Info_UML("Scanning For UFunction FunctionFlags Def.");
		bool HasFunctionFlagsNotBeenFound = true;
		auto WasRecentlyRendered = UE4::UObject::FindObject<UE4::UFunction>("Function Engine.Actor.WasRecentlyRendered");
		MDML::SelectedGameProfile.defs.UFunction.FunctionFlags = MDML::SelectedGameProfile.defs.UStruct.OverallUStructSize; // Prevents scanning same area over and over.
		while (HasFunctionFlagsNotBeenFound)
		{
			auto FunctionFlags = Read<int>((byte*)WasRecentlyRendered + MDML::SelectedGameProfile.defs.UFunction.FunctionFlags);
			if (FunctionFlags == 1409418241)
			{
				HasFunctionFlagsNotBeenFound = false;
			}
			if (HasFunctionFlagsNotBeenFound)
			{
				MDML::SelectedGameProfile.defs.UFunction.FunctionFlags = MDML::SelectedGameProfile.defs.UFunction.FunctionFlags + 0x4;
			}
		}
		Log::Info_UML("UFunction FunctionFlags Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UFunction.FunctionFlags);

		Log::Info_MDML("Scanning For UFunction NumParams Def.");
		MDML::SelectedGameProfile.defs.UFunction.NumParams = MDML::SelectedGameProfile.defs.UFunction.FunctionFlags + sizeof(UE4::EFunctionFlags);
		Log::Info_MDML("UFunction NumParams Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UFunction.NumParams);

		Log::Info_MDML("Scanning For UFunction ParamsSize Def.");
		MDML::SelectedGameProfile.defs.UFunction.ParamsSize = MDML::SelectedGameProfile.defs.UFunction.NumParams + sizeof(uint8_t) + 1;
		Log::Info_MDML("UFunction ParamsSize Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UFunction.ParamsSize);

		Log::Info_MDML("Scanning For UFunction ReturnValueOffset Def.");
		MDML::SelectedGameProfile.defs.UFunction.ReturnValueOffset = MDML::SelectedGameProfile.defs.UFunction.ParamsSize + sizeof(uint16_t);
		Log::Info_MDML("UFunction ReturnValueOffset Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.UFunction.ReturnValueOffset);


		return true;
	}

	bool FindUFunctionFunc()
	{
		auto UFunction = UE4::UObject::FindObject<UE4::UFunction>("Class CoreUObject.Function");
		if (UFunction)
		{
			MDML::SelectedGameProfile.defs.UFunction.Func = UFunction->GetPropertySize() - 0x8;
			Log::Info_UML("UFunction Func: 0x{0:x}", MDML::SelectedGameProfile.defs.UFunction.Func);
			return true;
		}
		return false;
	}

	bool FindUFunctionDefs()
	{
		if (FindUFunctionFunctionFlagsDef() && FindUFunctionFunc())
		{
			Log::Info_UML("UFunction Defined");
			return true;
		}
		else
		{
			Log::Error_UML("UFunction could not be defined. Try Manually Defining in the game profile file.");
		}
		return false;
	}
	bool FindFFieldClassDefs() {
		//FFieldClass:
		/*
		FName Name;
		DWORD64 Id;
		DWORD64 CastFlags;
		FFieldClass* SuperClass;
		FField* DefaultObject;
		*/
		auto& defs = MDML::SelectedGameProfile.defs.FFieldClass;

		defs.Name = 0;
		Log::Info_MDML("FFieldClass Name Def located at: 0x{0:x}", defs.Name);

		defs.ID = defs.Name + sizeof(UE4::FName);
		Log::Info_MDML("FFieldClass ID Def located at: 0x{0:x}", defs.ID);

		defs.CastFlags = defs.ID + sizeof(uint64_t);
		Log::Info_MDML("FFieldClass CastFlags Def located at: 0x{0:x}", defs.CastFlags);

		defs.SuperClass = defs.CastFlags + sizeof(uint64_t);
		Log::Info_MDML("FFieldClass SuperClass Def located at: 0x{0:x}", defs.SuperClass);

		return true;
	}
	bool FindFField()
	{
		auto VectorObject = (UE4::UStruct*)UE4::UObject::FindObject<UE4::UObject>("ScriptStruct CoreUObject.Vector");
		auto FieldChild = (UE4::FField*)VectorObject->GetChildren();
		bool NameFound = false;
		bool NextFound = false;
		while (!NameFound)
		{
			auto Name = *reinterpret_cast<UE4::FName*>((byte*)FieldChild + MDML::SelectedGameProfile.defs.FField.Name);
			if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
			{
				if (Name.GetName() == "X")
				{
					NameFound = true;
				}
			}
			if (NameFound == false)
			{
				MDML::SelectedGameProfile.defs.FField.Name = MDML::SelectedGameProfile.defs.FField.Name + 0x8;
			}
		}
		Log::Info_UML("FField Name Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.FField.Name);
		while (!NextFound)
		{
			// 9 times out of 10, its right behind the Name, so we do that check to save possible issues
			auto NextField = Read<UE4::FField*>((byte*)FieldChild + MDML::SelectedGameProfile.defs.FField.Name - 0x8);
			if (NextField && NextField->GetName() == "Y")
			{
				NextFound = true;
				MDML::SelectedGameProfile.defs.FField.Next = MDML::SelectedGameProfile.defs.FField.Name - 0x8;
				break;
			}

			NextField = Read<UE4::FField*>((byte*)FieldChild + MDML::SelectedGameProfile.defs.FField.Next);
			if (NextField && NextField->GetName() == "Y")
			{
				NextFound = true;
			}
			if (NextFound == false)
			{
				MDML::SelectedGameProfile.defs.FField.Next = MDML::SelectedGameProfile.defs.FField.Next + 0x8;
			}
		}
		Log::Info_UML("FField Next Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.FField.Next);
		MDML::SelectedGameProfile.defs.FField.ClassPrivate = sizeof(PVOID); //its right at the start behind the vtable, and it inhertis no members so we can start at 0
		Log::Info_MDML("FField ClassPrivate Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.FField.ClassPrivate);
		return FindFFieldClassDefs();
	}
	bool FindUEPropertyDefs()
	{
		auto VectorObject = (UE4::UStruct*)UE4::UObject::FindObject<UE4::UObject>("ScriptStruct CoreUObject.Vector");
		bool ArrayDimFound = false;
		bool OffsetFound = false;
		if (MDML::SelectedGameProfile.bIsFProperty)
		{
			auto FieldChild = (UE4::FField*)VectorObject->GetChildren();
			while (!ArrayDimFound)
			{
				if (Read<int64_t>((byte*)FieldChild + MDML::SelectedGameProfile.defs.Property.ArrayDim) == 17179869185) // Array Dim and Element Size are Side By Side
				{
					ArrayDimFound = true;
				}

				if(ArrayDimFound == false)
				{ 
					MDML::SelectedGameProfile.defs.Property.ArrayDim = MDML::SelectedGameProfile.defs.Property.ArrayDim + 0x8;
				}
			}
			Log::Info_UML("FProperty Array Dim Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.ArrayDim);

			auto FieldChildY = FieldChild->GetNext();
			auto FieldChildZ = FieldChildY->GetNext();
			MDML::SelectedGameProfile.defs.Property.Offset = MDML::SelectedGameProfile.defs.Property.ArrayDim + 0x8;
			while (!OffsetFound)
			{
				if (Read<int32_t>((byte*)FieldChildY + MDML::SelectedGameProfile.defs.Property.Offset) == 4 && Read<int32_t>((byte*)FieldChildZ + MDML::SelectedGameProfile.defs.Property.Offset) == 8)
				{
					OffsetFound = true;
				}
				if (OffsetFound == false)
				{
					MDML::SelectedGameProfile.defs.Property.Offset = MDML::SelectedGameProfile.defs.Property.Offset + 0x4;
				}
			}
			Log::Info_UML("FProperty Offset Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.Offset);
			
		}
		else
		{
			auto FieldChild = (UE4::UField*)VectorObject->GetChildren();
			while (!ArrayDimFound)
			{
				if (Read<int64_t>((byte*)FieldChild + MDML::SelectedGameProfile.defs.Property.ArrayDim) == 17179869185) // Array Dim and Element Size are Side By Side
				{
					ArrayDimFound = true;
				}

				if (ArrayDimFound == false)
				{
					MDML::SelectedGameProfile.defs.Property.ArrayDim = MDML::SelectedGameProfile.defs.Property.ArrayDim + 0x8;
				}
			}
			Log::Info_UML("UProperty Array Dim Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.ArrayDim);
			auto FieldChildY = FieldChild->GetNext();
			auto FieldChildZ = FieldChildY->GetNext();
			MDML::SelectedGameProfile.defs.Property.Offset = MDML::SelectedGameProfile.defs.Property.ArrayDim + 0x8;
			while (!OffsetFound)
			{
				if (Read<int32_t>((byte*)FieldChildY + MDML::SelectedGameProfile.defs.Property.Offset) == 4 && Read<int32_t>((byte*)FieldChildZ + MDML::SelectedGameProfile.defs.Property.Offset) == 8)
				{
					OffsetFound = true;
				}
				if (OffsetFound == false)
				{
					MDML::SelectedGameProfile.defs.Property.Offset = MDML::SelectedGameProfile.defs.Property.Offset + 0x4;
				}
			}
			Log::Info_UML("UProperty Offset Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.Offset);
		}
		MDML::SelectedGameProfile.defs.Property.ElementSize = MDML::SelectedGameProfile.defs.Property.ArrayDim + sizeof(int32_t);
		Log::Info_MDML("UProperty ElementSize Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.ElementSize);
		MDML::SelectedGameProfile.defs.Property.Flags = MDML::SelectedGameProfile.defs.Property.ElementSize + sizeof(int32_t);
		Log::Info_MDML("UProperty Flags Def located at: 0x{0:x}", MDML::SelectedGameProfile.defs.Property.Flags);
		return true;
	}
	bool FindFProperiesDefs() {
		Offsets& defs = MDML::SelectedGameProfile.defs;
		uint16_t fpropertyEnd = defs.Property.Offset + 0x8;
		//get fpropertyEnd
		{
			UE4::UFunction* ExecuteConsoleCommandFn = UE4::UObject::FindObject<UE4::UFunction>("Function Engine.KismetSystemLibrary.ExecuteConsoleCommand");
			//Third param: class APlayerController* SpecificPlayer;
			UE4::FField* Field = ((UE4::FField*)ExecuteConsoleCommandFn->GetChildren())->GetNext()->GetNext();
			bool Found = false;
			while (!Found)
			{
				if (Read<UE4::UClass*>((byte*)Field + fpropertyEnd) == UE4::APlayerController::StaticClass())
				{
					Found = true;
				}
				if (Found == false)
				{
					fpropertyEnd = fpropertyEnd + 0x4;
				}
			}
			//fpropertyEnd -= Field->getProperty()->GetElementSize();
		}
		Log::Info_MDML("FProperty end located at: 0x{0:x}", fpropertyEnd);

		defs.ByteProperty.Enum = fpropertyEnd;
		Log::Info_MDML("ByteProperty Inner located at: 0x{0:x}", defs.ByteProperty.Enum);

		defs.BoolProperty.FieldSize = fpropertyEnd;
		Log::Info_MDML("BoolProperty FieldSize located at: 0x{0:x}", defs.BoolProperty.FieldSize);
		defs.BoolProperty.ByteOffset = defs.BoolProperty.FieldSize + sizeof(uint8_t);
		Log::Info_MDML("BoolProperty ByteOffset located at: 0x{0:x}", defs.BoolProperty.ByteOffset);
		defs.BoolProperty.ByteMask = defs.BoolProperty.ByteOffset + sizeof(uint8_t);
		Log::Info_MDML("BoolProperty ByteMask located at: 0x{0:x}", defs.BoolProperty.ByteMask);
		defs.BoolProperty.FieldMask = defs.BoolProperty.ByteMask + sizeof(uint8_t);
		Log::Info_MDML("BoolProperty FieldMask located at: 0x{0:x}", defs.BoolProperty.FieldMask);
		
		defs.ObjectPropertyBase.PropertyClass = fpropertyEnd;
		Log::Info_MDML("ObjectPropertyBase PropertyClass located at: 0x{0:x}", defs.ObjectPropertyBase.PropertyClass);
		
		defs.ClassProperty.MetaClass = defs.ObjectPropertyBase.PropertyClass + sizeof(UE4::UClass*);
		Log::Info_MDML("ClassProperty MetaClass located at: 0x{0:x}", defs.ClassProperty.MetaClass);
		
		defs.InterfaceProperty.InterfaceClass = fpropertyEnd;
		Log::Info_MDML("InterfaceProperty InterfaceClass located at: 0x{0:x}", defs.InterfaceProperty.InterfaceClass);
		
		defs.AssetClassProperty.MetaClass = defs.ObjectPropertyBase.PropertyClass + sizeof(UE4::UClass*);
		Log::Info_MDML("AssetClassProperty MetaClass located at: 0x{0:x}", defs.AssetClassProperty.MetaClass);
		
		defs.StructProperty.Struct = fpropertyEnd;
		Log::Info_MDML("StructProperty Struct located at: 0x{0:x}", defs.StructProperty.Struct);
		
		defs.ArrayProperty.Inner = fpropertyEnd;
		Log::Info_MDML("ArrayProperty Inner located at: 0x{0:x}", defs.ArrayProperty.Inner);
		
		defs.MapProperty.Key = fpropertyEnd;
		Log::Info_MDML("MapProperty Key located at: 0x{0:x}", defs.MapProperty.Key);
		defs.MapProperty.Value = defs.MapProperty.Key + sizeof(UE4::FProperty*);
		Log::Info_MDML("MapProperty Value located at: 0x{0:x}", defs.MapProperty.Value);
		
		defs.DelegateProperty.SignatureFunction = fpropertyEnd;
		Log::Info_MDML("DelegateProperty SignatureFunction located at: 0x{0:x}", defs.DelegateProperty.SignatureFunction);
		
		defs.MulticastDelegateProperty.SignatureFunction = fpropertyEnd;
		Log::Info_MDML("MulticastDelegateProperty SignatureFunction located at: 0x{0:x}", defs.MulticastDelegateProperty.SignatureFunction);
		
		defs.EnumProperty.UnderlyingProp = fpropertyEnd;
		Log::Info_MDML("EnumProperty UnderlyingProp located at: 0x{0:x}", defs.EnumProperty.UnderlyingProp);
		defs.EnumProperty.Enum = defs.EnumProperty.UnderlyingProp + sizeof(UE4::FNumericProperty*);
		Log::Info_MDML("EnumProperty Enum located at: 0x{0:x}", defs.EnumProperty.Enum);

		return true;
	}
	bool FindUEProperty()
	{
		Log::Info_UML("Scanning For UEProperty");
		auto VectorObject = (UE4::UStruct*)UE4::UObject::FindObject<UE4::UObject>("ScriptStruct CoreUObject.Vector");
		
		if (!VectorObject->GetChildren()->IsA(UE4::UObject::StaticClass()))
		{
			MDML::SelectedGameProfile.bIsFProperty = true;
			Log::Info_UML("UEProperty is a FProperty");
			if (FindFField())
			{
				MDML::SelectedGameProfile.defs.Property.ArrayDim = MDML::SelectedGameProfile.defs.FField.Name;
				FindUEPropertyDefs();
				FindFProperiesDefs();
			}
		}
		else
		{
			MDML::SelectedGameProfile.bIsFProperty = false;
			Log::Info_UML("UEProperty is a UProperty");
			MDML::SelectedGameProfile.defs.Property.ArrayDim = MDML::SelectedGameProfile.defs.UField.Next;
			FindUEPropertyDefs();
		}
		return true;
	}
};