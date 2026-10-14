#include "Core.h"
#include "EngineDefFinder.h"
#include "UE4.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "EngineMemory.h"
#include "Runtime/Notices.h"

// Engine layout verification + no-PDB fallback scan (Wave 3D; was the always-on UML runtime offset scan).
//
// Every read here goes through mdml::mem::SafeLoad: while checking, an offset may be wrong and a "pointer" may be
// garbage. Scans are bounded (kMaxScanOffset) and stop with "not found" instead of looping forever (code inventory B11).
namespace ClassDefFinder
{
	namespace {
		using mdml::EngineLayout;
		using mdml::mem::SafeLoad;
		using mdml::mem::SafeRead;

		constexpr uint16_t kMaxScanOffset = 0x400;
		constexpr uint64_t kWasRecentlyRenderedFlags = 1409418241; // FunctionFlags of Engine.Actor.WasRecentlyRendered (old scanner's anchor)

		const uint8_t* At(const void* Base, uint16_t Offset) {
			return static_cast<const uint8_t*>(Base) + Offset;
		}

		template<typename T>
		T Field(const void* Base, uint16_t Offset) {
			if (!Base)
				return T{};
			return SafeLoad<T>(At(Base, Offset));
		}

		// Raw FName text at Base+Offset ("" if unreadable or not a valid pool index). No "_N" suffix, no '/' stripping.
		std::string NameAt(const void* Base, uint16_t Offset) {
			if (!Base || !UE4::FName::GNames)
				return std::string();
			UE4::FName Name;
			if (!SafeRead(At(Base, Offset), Name))
				return std::string();
			if (!UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
				return std::string();
			const UE4::FNamePoolFNameEntry* Entry = UE4::FName::GetFNamePool().GetById(Name.ComparisonIndex);
			uint16_t Header = 0;
			if (!SafeRead(Entry, Header))
				return std::string();
			return Entry->GetName();
		}

		// Live objects the checks look at. Found by full name after the UObject group is known good.
		struct FAnchors {
			UE4::UObject* Obj0 = nullptr;     // GObjects[0]: package /Script/CoreUObject
			UE4::UObject* Obj1 = nullptr;     // GObjects[1]: class Object
			UE4::UObject* Obj2 = nullptr;     // GObjects[2]
			UE4::UObject* StructClass = nullptr;
			UE4::UObject* FieldClass = nullptr;
			UE4::UObject* FunctionClass = nullptr;
			UE4::UObject* ActorClass = nullptr;
			UE4::UObject* Vector = nullptr;
			UE4::UObject* UserConstructionScript = nullptr;
			UE4::UObject* WasRecentlyRendered = nullptr;
			UE4::UObject* ExecuteConsoleCommand = nullptr;
			UE4::UObject* PlayerController = nullptr;
			UE4::UObject* SearchCaseEnum = nullptr;
		};

		void FindAnchors(FAnchors& A) {
			struct { const char* FullName; UE4::UObject** Slot; } Wanted[] = {
				{ "Class CoreUObject.Struct", &A.StructClass },
				{ "Class CoreUObject.Field", &A.FieldClass },
				{ "Class CoreUObject.Function", &A.FunctionClass },
				{ "Class Engine.Actor", &A.ActorClass },
				{ "ScriptStruct CoreUObject.Vector", &A.Vector },
				{ "Function Engine.Actor.UserConstructionScript", &A.UserConstructionScript },
				{ "Function Engine.Actor.WasRecentlyRendered", &A.WasRecentlyRendered },
				{ "Function Engine.KismetSystemLibrary.ExecuteConsoleCommand", &A.ExecuteConsoleCommand },
				{ "Class Engine.PlayerController", &A.PlayerController },
				{ "Enum CoreUObject.ESearchCase", &A.SearchCaseEnum },
			};
			std::unordered_map<std::string, std::vector<size_t>> ByShortName;
			for (size_t i = 0; i < std::size(Wanted); ++i)
				ByShortName[UE4::UObject::ShortNameOf(Wanted[i].FullName)].push_back(i);
			size_t Remaining = std::size(Wanted);
			UE4::UObject::ForEachObject([&](UE4::UObject* Object) {
				auto It = ByShortName.find(Object->GetName());
				if (It == ByShortName.end())
					return true;
				const std::string FullName = Object->GetFullName();
				for (size_t i : It->second) {
					if (!*Wanted[i].Slot && FullName == Wanted[i].FullName) {
						*Wanted[i].Slot = Object;
						--Remaining;
					}
				}
				return Remaining > 0;
			});
			for (const auto& W : Wanted) {
				if (!*W.Slot)
					Log::Warn_MDML("Engine layout check: anchor object {0} not found", W.FullName);
			}
		}

		// First entry of ESearchCase::Type: "ESearchCase::CaseSensitive" (namespaced form) or "CaseSensitive".
		bool IsSearchCaseFirstName(const std::string& Name) {
			return Name == "ESearchCase::CaseSensitive" || Name == "CaseSensitive";
		}

		// ---- checks: "" = ok, "skip: ..." = cannot be checked (anchor missing), anything else = failure ----------------
		using CheckResult = std::string;
		bool IsSkip(const CheckResult& R) { return R.rfind("skip:", 0) == 0; }

		CheckResult CheckUObject(const EngineLayout& L, const FAnchors& A) {
			if (!A.Obj0 || !A.Obj1 || !A.Obj2)
				return "GObjects[0..2] missing";
			if (Field<int32_t>(A.Obj1, L.UObject.Index) != 1 || Field<int32_t>(A.Obj2, L.UObject.Index) != 2)
				return "InternalIndex of GObjects[1]/[2] is not 1/2";
			if (NameAt(A.Obj1, L.UObject.Name) != "Object")
				return "name of GObjects[1] is not 'Object'";
			auto Class = Field<UE4::UObject*>(A.Obj1, L.UObject.Class);
			if (NameAt(Class, L.UObject.Name) != "Class")
				return "class of GObjects[1] is not 'Class'";
			if (Field<UE4::UObject*>(A.Obj1, L.UObject.Outer) != A.Obj0)
				return "outer of GObjects[1] is not GObjects[0]";
			return "";
		}

		CheckResult CheckUField(const EngineLayout& L, const FAnchors& A) {
			if (!A.UserConstructionScript)
				return "skip: Actor.UserConstructionScript not found";
			auto Next = Field<UE4::UObject*>(A.UserConstructionScript, L.UField.Next);
			if (!Next || Field<UE4::UObject*>(Next, L.UObject.Outer) != Field<UE4::UObject*>(A.UserConstructionScript, L.UObject.Outer))
				return "UserConstructionScript.Next is not a sibling function";
			return "";
		}

		CheckResult CheckUStruct(const EngineLayout& L, const FAnchors& A) {
			if (!A.StructClass || !A.FieldClass || !A.Vector || !A.ActorClass || !A.FunctionClass)
				return "skip: Struct/Field/Vector/Actor/Function not found";
			if (Field<UE4::UObject*>(A.StructClass, L.UStruct.SuperStruct) != A.FieldClass)
				return "SuperStruct of class Struct is not class Field";
			auto FirstProperty = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			if (NameAt(FirstProperty, L.FField.Name) != "X")
				return "ChildProperties of Vector is not the property X";
			if (Field<int32_t>(A.Vector, L.UStruct.PropertiesSize) != 12)
				return "PropertiesSize of Vector is not 12";
			auto FirstFunction = Field<UE4::UObject*>(A.ActorClass, L.UStruct.Children);
			if (!FirstFunction || Field<UE4::UObject*>(FirstFunction, L.UObject.Class) != A.FunctionClass || Field<UE4::UObject*>(FirstFunction, L.UObject.Outer) != A.ActorClass)
				return "Children of class Actor is not one of its functions";
			return "";
		}

		CheckResult CheckUEnum(const EngineLayout& L, const FAnchors& A) {
			if (!A.SearchCaseEnum)
				return "skip: enum ESearchCase not found";
			auto Names = Field<UE4::TArray<UE4::TPair<UE4::FName, int64_t>>>(A.SearchCaseEnum, L.UEnum.Names);
			if (Names.Num() < 2 || Names.Num() > Names.Max || Names.Num() > 4096 || !Names.Data)
				return "Names of ESearchCase is not a plausible array";
			if (!IsSearchCaseFirstName(NameAt(Names.Data, 0)))
				return "first name of ESearchCase is not (ESearchCase::)CaseSensitive";
			const int32_t CppForm = Field<int32_t>(A.SearchCaseEnum, L.UEnum.CppForm);
			if (CppForm < 0 || CppForm > 2)
				return "CppForm of ESearchCase is out of range";
			return "";
		}

		CheckResult CheckUFunction(const EngineLayout& L, const FAnchors& A) {
			if (!A.WasRecentlyRendered)
				return "skip: Actor.WasRecentlyRendered not found";
			if (Field<uint32_t>(A.WasRecentlyRendered, L.UFunction.FunctionFlags) != kWasRecentlyRenderedFlags)
				return "FunctionFlags of WasRecentlyRendered do not match";
			if (Field<uint8_t>(A.WasRecentlyRendered, L.UFunction.NumParams) != 2)
				return "NumParms of WasRecentlyRendered is not 2";
			if (Field<uint16_t>(A.WasRecentlyRendered, L.UFunction.ReturnValueOffset) != 4)
				return "ReturnValueOffset of WasRecentlyRendered is not 4";
			if (Field<uint16_t>(A.WasRecentlyRendered, L.UFunction.ParamsSize) < 5)
				return "ParmsSize of WasRecentlyRendered is below 5";
			if (!Field<void*>(A.WasRecentlyRendered, L.UFunction.Func))
				return "Func of WasRecentlyRendered is null";
			return "";
		}

		CheckResult CheckFField(const EngineLayout& L, const FAnchors& A) {
			if (!A.Vector)
				return "skip: Vector not found";
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			if (NameAt(X, L.FField.Name) != "X")
				return "name of Vector's first property is not X";
			auto Y = Field<void*>(X, L.FField.Next);
			if (NameAt(Y, L.FField.Name) != "Y")
				return "Next of X is not Y";
			auto FloatClass = Field<void*>(X, L.FField.ClassPrivate);
			if (NameAt(FloatClass, L.FFieldClass.Name) != "FloatProperty")
				return "class of X is not FloatProperty";
			return "";
		}

		CheckResult CheckFFieldClass(const EngineLayout& L, const FAnchors& A) {
			if (!A.Vector)
				return "skip: Vector not found";
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			auto FloatClass = Field<void*>(X, L.FField.ClassPrivate);
			if (NameAt(FloatClass, L.FFieldClass.Name) != "FloatProperty")
				return "skip: FField group is broken";
			if (NameAt(Field<void*>(FloatClass, L.FFieldClass.SuperClass), L.FFieldClass.Name) != "NumericProperty")
				return "SuperClass of FloatProperty is not NumericProperty";
			return "";
		}

		CheckResult CheckFProperty(const EngineLayout& L, const FAnchors& A) {
			if (!A.Vector)
				return "skip: Vector not found";
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			auto Y = Field<void*>(X, L.FField.Next);
			auto Z = Field<void*>(Y, L.FField.Next);
			if (!X || !Y || !Z)
				return "skip: FField group is broken";
			if (Field<int32_t>(X, L.Property.ArrayDim) != 1 || Field<int32_t>(X, L.Property.ElementSize) != 4)
				return "ArrayDim/ElementSize of X are not 1/4";
			if (Field<int32_t>(X, L.Property.Offset) != 0 || Field<int32_t>(Y, L.Property.Offset) != 4 || Field<int32_t>(Z, L.Property.Offset) != 8)
				return "offsets of X/Y/Z are not 0/4/8";
			return "";
		}

		// Third parameter of KismetSystemLibrary.ExecuteConsoleCommand: APlayerController* SpecificPlayer.
		void* SpecificPlayerParam(const EngineLayout& L, const FAnchors& A) {
			auto Param = Field<void*>(A.ExecuteConsoleCommand, L.UStruct.ChildProperties);
			Param = Field<void*>(Param, L.FField.Next);
			return Field<void*>(Param, L.FField.Next);
		}

		CheckResult CheckPropertyTypes(const EngineLayout& L, const FAnchors& A) {
			if (!A.ExecuteConsoleCommand || !A.PlayerController)
				return "skip: ExecuteConsoleCommand/PlayerController not found";
			if (Field<UE4::UObject*>(SpecificPlayerParam(L, A), L.ObjectPropertyBase.PropertyClass) != A.PlayerController)
				return "PropertyClass of ExecuteConsoleCommand.SpecificPlayer is not PlayerController";
			return "";
		}

		// ---- fallback scans (the old EngineDefFinder logic, bounded and on SafeLoad) ------------------------------------
		template<typename Pred>
		bool ScanOffset(uint16_t& Out, uint16_t Start, uint16_t Step, Pred&& Matches) {
			for (uint32_t Offset = Start; Offset <= kMaxScanOffset; Offset += Step) {
				if (Matches(static_cast<uint16_t>(Offset))) {
					Out = static_cast<uint16_t>(Offset);
					return true;
				}
			}
			return false;
		}

		bool ScanUObject(EngineLayout& L, const FAnchors& A) {
			bool Ok = ScanOffset(L.UObject.Index, 0x4, 0x4, [&](uint16_t o) { return Field<int32_t>(A.Obj1, o) == 1 && Field<int32_t>(A.Obj2, o) == 2; });
			Ok = Ok && ScanOffset(L.UObject.Name, 0x8, 0x8, [&](uint16_t o) { return NameAt(A.Obj1, o) == "Object"; });
			Ok = Ok && ScanOffset(L.UObject.Class, 0x8, 0x8, [&](uint16_t o) { return NameAt(Field<void*>(A.Obj1, o), L.UObject.Name) == "Class"; });
			Ok = Ok && ScanOffset(L.UObject.Outer, 0x8, 0x8, [&](uint16_t o) { return Field<UE4::UObject*>(A.Obj1, o) == A.Obj0; });
			return Ok;
		}

		bool ScanUField(EngineLayout& L, const FAnchors& A) {
			auto Outer = Field<UE4::UObject*>(A.UserConstructionScript, L.UObject.Outer);
			return ScanOffset(L.UField.Next, L.UObject.Outer + 0x8, 0x8, [&](uint16_t o) {
				auto Next = Field<UE4::UObject*>(A.UserConstructionScript, o);
				return Next && Field<UE4::UObject*>(Next, L.UObject.Outer) == Outer;
			});
		}

		bool ScanUStruct(EngineLayout& L, const FAnchors& A) {
			bool Ok = ScanOffset(L.UStruct.SuperStruct, L.UField.Next + 0x8, 0x8, [&](uint16_t o) { return Field<UE4::UObject*>(A.StructClass, o) == A.FieldClass; });
			Ok = Ok && ScanOffset(L.UStruct.Children, L.UStruct.SuperStruct + 0x8, 0x8, [&](uint16_t o) {
				auto First = Field<UE4::UObject*>(A.ActorClass, o);
				return First && Field<UE4::UObject*>(First, L.UObject.Class) == A.FunctionClass && Field<UE4::UObject*>(First, L.UObject.Outer) == A.ActorClass;
			});
			Ok = Ok && ScanOffset(L.UStruct.ChildProperties, L.UStruct.SuperStruct + 0x8, 0x8, [&](uint16_t o) { return NameAt(Field<void*>(A.Vector, o), L.FField.Name) == "X"; });
			Ok = Ok && ScanOffset(L.UStruct.PropertiesSize, L.UStruct.ChildProperties + 0x8, 0x4, [&](uint16_t o) { return Field<int32_t>(A.Vector, o) == 12; });
			if (Ok) {
				const int32_t StructSize = Field<int32_t>(A.StructClass, L.UStruct.PropertiesSize);
				if (StructSize > 0 && StructSize <= kMaxScanOffset)
					L.UStruct.OverallUStructSize = static_cast<uint16_t>(StructSize);
			}
			return Ok;
		}

		bool ScanUEnum(EngineLayout& L, const FAnchors& A) {
			// UEnum: UField, FString CppType, TArray Names, int32 CppForm, int32 EnumFlags, EnumDisplayNameFn.
			bool Ok = ScanOffset(L.UEnum.Names, L.UField.Next + 0x8, 0x8, [&](uint16_t o) {
				auto Names = Field<UE4::TArray<UE4::TPair<UE4::FName, int64_t>>>(A.SearchCaseEnum, o);
				return Names.Num() >= 2 && Names.Num() <= Names.Max && Names.Data && IsSearchCaseFirstName(NameAt(Names.Data, 0));
			});
			if (!Ok)
				return false;
			L.UEnum.CppType = L.UEnum.Names - sizeof(UE4::FString);
			L.UEnum.CppForm = L.UEnum.Names + sizeof(UE4::TArray<UE4::TPair<UE4::FName, uint64_t>>);
			L.UEnum.Flags = L.UEnum.CppForm + sizeof(int32_t);
			L.UEnum.DisplayNameFn = L.UEnum.Flags + sizeof(int32_t);
			L.UEnum.UserDefDisplayNameMap = L.UEnum.DisplayNameFn + sizeof(void*);
			return true;
		}

		bool ScanUFunction(EngineLayout& L, const FAnchors& A) {
			bool Ok = ScanOffset(L.UFunction.FunctionFlags, L.UStruct.OverallUStructSize, 0x4, [&](uint16_t o) { return Field<uint32_t>(A.WasRecentlyRendered, o) == kWasRecentlyRenderedFlags; });
			if (!Ok)
				return false;
			L.UFunction.NumParams = L.UFunction.FunctionFlags + sizeof(uint32_t);
			L.UFunction.ParamsSize = L.UFunction.NumParams + sizeof(uint8_t) + 1;
			L.UFunction.ReturnValueOffset = L.UFunction.ParamsSize + sizeof(uint16_t);
			// Func is the last member: sizeof(UFunction) - 8.
			const int32_t FunctionSize = Field<int32_t>(A.FunctionClass, L.UStruct.PropertiesSize);
			if (FunctionSize <= 8 || FunctionSize > kMaxScanOffset)
				return false;
			L.UFunction.Func = static_cast<uint16_t>(FunctionSize - 8);
			return true;
		}

		bool ScanFField(EngineLayout& L, const FAnchors& A) {
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			bool Ok = ScanOffset(L.FField.Name, 0x8, 0x8, [&](uint16_t o) { return NameAt(X, o) == "X"; });
			Ok = Ok && ScanOffset(L.FField.Next, 0x8, 0x8, [&](uint16_t o) { return o != L.FField.Name && NameAt(Field<void*>(X, o), L.FField.Name) == "Y"; });
			L.FField.ClassPrivate = sizeof(void*); // right behind the vtable
			return Ok;
		}

		bool ScanFFieldClass(EngineLayout& L, const FAnchors& A) {
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			auto FloatClass = Field<void*>(X, L.FField.ClassPrivate);
			bool Ok = ScanOffset(L.FFieldClass.Name, 0x0, 0x8, [&](uint16_t o) { return NameAt(FloatClass, o) == "FloatProperty"; });
			Ok = Ok && ScanOffset(L.FFieldClass.SuperClass, L.FFieldClass.Name + 0x8, 0x8, [&](uint16_t o) { return NameAt(Field<void*>(FloatClass, o), L.FFieldClass.Name) == "NumericProperty"; });
			L.FFieldClass.ID = L.FFieldClass.Name + sizeof(UE4::FName);
			L.FFieldClass.CastFlags = L.FFieldClass.ID + sizeof(uint64_t);
			return Ok;
		}

		bool ScanFProperty(EngineLayout& L, const FAnchors& A) {
			auto X = Field<void*>(A.Vector, L.UStruct.ChildProperties);
			auto Y = Field<void*>(X, L.FField.Next);
			auto Z = Field<void*>(Y, L.FField.Next);
			// ArrayDim (1) and ElementSize (4) are side by side.
			bool Ok = ScanOffset(L.Property.ArrayDim, L.FField.Name + 0x8, 0x8, [&](uint16_t o) { return Field<int64_t>(X, o) == 0x0000000400000001; });
			Ok = Ok && ScanOffset(L.Property.Offset, L.Property.ArrayDim + 0x8, 0x4, [&](uint16_t o) { return Field<int32_t>(Y, o) == 4 && Field<int32_t>(Z, o) == 8; });
			L.Property.ElementSize = L.Property.ArrayDim + sizeof(int32_t);
			L.Property.Flags = L.Property.ElementSize + sizeof(int32_t);
			return Ok;
		}

		bool ScanPropertyTypes(EngineLayout& L, const FAnchors& A) {
			auto Param = SpecificPlayerParam(L, A);
			uint16_t End = 0;
			if (!ScanOffset(End, L.Property.Offset + 0x8, 0x4, [&](uint16_t o) { return Field<UE4::UObject*>(Param, o) == A.PlayerController; }))
				return false;
			L.ByteProperty.Enum = End;
			L.BoolProperty.FieldSize = End;
			L.BoolProperty.ByteOffset = End + 1;
			L.BoolProperty.ByteMask = End + 2;
			L.BoolProperty.FieldMask = End + 3;
			L.ObjectPropertyBase.PropertyClass = End;
			L.ClassProperty.MetaClass = End + sizeof(void*);
			L.InterfaceProperty.InterfaceClass = End;
			L.AssetClassProperty.MetaClass = End + sizeof(void*);
			L.StructProperty.Struct = End;
			L.ArrayProperty.Inner = End;
			L.MapProperty.Key = End;
			L.MapProperty.Value = End + sizeof(void*);
			L.DelegateProperty.SignatureFunction = End;
			L.MulticastDelegateProperty.SignatureFunction = End;
			L.EnumProperty.UnderlyingProp = End;
			L.EnumProperty.Enum = End + sizeof(void*);
			return true;
		}

		struct FGroup {
			const char* Name;
			CheckResult(*Check)(const EngineLayout&, const FAnchors&);
			bool(*Scan)(EngineLayout&, const FAnchors&);
			void(*Apply)(EngineLayout& To, const EngineLayout& From);
		};

		const FGroup kGroups[] = {
			{ "UObject", CheckUObject, ScanUObject, [](EngineLayout& T, const EngineLayout& F) { T.UObject = F.UObject; } },
			{ "UField", CheckUField, ScanUField, [](EngineLayout& T, const EngineLayout& F) { T.UField = F.UField; } },
			{ "FField", CheckFField, ScanFField, [](EngineLayout& T, const EngineLayout& F) { T.FField = F.FField; } },
			{ "UStruct", CheckUStruct, ScanUStruct, [](EngineLayout& T, const EngineLayout& F) { T.UStruct = F.UStruct; } },
			{ "UEnum", CheckUEnum, ScanUEnum, [](EngineLayout& T, const EngineLayout& F) { T.UEnum = F.UEnum; } },
			{ "UFunction", CheckUFunction, ScanUFunction, [](EngineLayout& T, const EngineLayout& F) { T.UFunction = F.UFunction; } },
			{ "FFieldClass", CheckFFieldClass, ScanFFieldClass, [](EngineLayout& T, const EngineLayout& F) { T.FFieldClass = F.FFieldClass; } },
			{ "FProperty", CheckFProperty, ScanFProperty, [](EngineLayout& T, const EngineLayout& F) { T.Property = F.Property; } },
			{ "FProperty subclasses", CheckPropertyTypes, ScanPropertyTypes, [](EngineLayout& T, const EngineLayout& F) {
				T.ByteProperty = F.ByteProperty; T.BoolProperty = F.BoolProperty; T.ObjectPropertyBase = F.ObjectPropertyBase;
				T.ClassProperty = F.ClassProperty; T.InterfaceProperty = F.InterfaceProperty; T.AssetClassProperty = F.AssetClassProperty;
				T.StructProperty = F.StructProperty; T.ArrayProperty = F.ArrayProperty; T.MapProperty = F.MapProperty;
				T.DelegateProperty = F.DelegateProperty; T.MulticastDelegateProperty = F.MulticastDelegateProperty; T.EnumProperty = F.EnumProperty; } },
		};

		// Group names per outcome, for the F1-window notices (Wave 3E, owner decision 2026-10-14 "3D-Q2").
		struct FOutcome {
			std::vector<std::string> Broken;    // check failed and the fallback did not fix it
			std::vector<std::string> Unchecked; // anchor object missing: not verified
			std::vector<std::string> Scanned;   // check failed, scanned offsets passed and are used now
		};

		std::string JoinNames(const std::vector<std::string>& Names) {
			std::string Out;
			for (const std::string& Name : Names)
				Out += (Out.empty() ? "" : ", ") + Name;
			return Out;
		}

		// Runs one group: check; on failure scan, apply and re-check. Returns false if the group stays broken.
		bool RunGroup(const FGroup& Group, const FAnchors& Anchors, FOutcome& Outcome) {
			const CheckResult First = Group.Check(mdml::Layout, Anchors);
			if (First.empty())
				return true;
			if (IsSkip(First)) {
				Log::Warn_MDML("Engine layout: {0} not checked ({1}); keeping the PDB constants", Group.Name, First.substr(6));
				Outcome.Unchecked.push_back(Group.Name);
				return true;
			}
			Log::Error_MDML("ENGINE LAYOUT MISMATCH: {0}: {1}. The PDB constants in EngineLayout.h do not fit this game build "
				"(run Tools/RE/check_layout.py against its PDB). Scanning for the offsets (fallback).", Group.Name, First);
			EngineLayout Scanned = mdml::Layout;
			if (!Group.Scan(Scanned, Anchors)) {
				Log::Error_MDML("ENGINE LAYOUT: {0}: fallback scan found nothing; keeping the PDB constants. Mods using this part of the engine core will misbehave or crash.", Group.Name);
				Outcome.Broken.push_back(Group.Name);
				return false;
			}
			const EngineLayout Before = mdml::Layout;
			Group.Apply(mdml::Layout, Scanned);
			const CheckResult Second = Group.Check(mdml::Layout, Anchors);
			if (!Second.empty() && !IsSkip(Second)) {
				Group.Apply(mdml::Layout, Before);
				Log::Error_MDML("ENGINE LAYOUT: {0}: scanned offsets fail the check too ({1}); keeping the PDB constants.", Group.Name, Second);
				Outcome.Broken.push_back(Group.Name);
				return false;
			}
			Log::Error_MDML("ENGINE LAYOUT: {0}: using SCANNED offsets instead of the PDB constants. Update EngineLayout.h for this game build.", Group.Name);
			Outcome.Scanned.push_back(Group.Name);
			return true;
		}
	}

	// Persistent notices in the F1 window (Runtime/Notices.h; each is logged too). Mods keep loading in every case: a
	// wrong check anchor must not lock the owner out (decision 2026-10-14).
	static void PostLayoutNotices(const FOutcome& Outcome)
	{
		using mdml::runtime::Notices;
		using mdml::runtime::NoticeSeverity;
		if (!Outcome.Broken.empty() || !Outcome.Unchecked.empty())
		{
			std::vector<std::string> Failed = Outcome.Broken;
			Failed.insert(Failed.end(), Outcome.Unchecked.begin(), Outcome.Unchecked.end());
			Notices::Post(NoticeSeverity::Error, "Engine layout could not be verified: " + JoinNames(Failed) +
				". Mods that use these engine parts may misbehave or crash. Details: Logs/MDML-log.txt", true);
		}
		if (!Outcome.Scanned.empty())
			Notices::Post(NoticeSeverity::Warning, "Engine layout differs from the PDB constants, using scanned offsets for: " +
				JoinNames(Outcome.Scanned) + ". Details: Logs/MDML-log.txt", true);
	}

	bool VerifyEngineLayout()
	{
		if (!UE4::UObject::GObjects || !UE4::FName::GNames)
		{
			Log::Error_MDML("Engine layout: GObjects/GNames not bound, cannot verify the layout");
			mdml::runtime::Notices::Post(mdml::runtime::NoticeSeverity::Error,
				"Engine layout could not be verified: the engine globals (GObjects/GNames) were not found. Details: Logs/MDML-log.txt", true);
			return false;
		}
		FAnchors Anchors;
		const auto& Objects = UE4::UObject::GObjects->GetObjects();
		Anchors.Obj0 = Objects.GetByIndex(0).Object;
		Anchors.Obj1 = Objects.GetByIndex(1).Object;
		Anchors.Obj2 = Objects.GetByIndex(2).Object;

		FOutcome Outcome;
		// UObject first: finding the other anchors by name needs a correct UObject layout.
		if (!RunGroup(kGroups[0], Anchors, Outcome))
		{
			Log::Error_MDML("ENGINE LAYOUT: UObject layout unusable, the engine core cannot work with this game build.");
			mdml::runtime::Notices::Post(mdml::runtime::NoticeSeverity::Error,
				"Engine layout could not be verified: UObject (and therefore every other group). The engine core will not work with this game build. Details: Logs/MDML-log.txt", true);
			return false;
		}
		FindAnchors(Anchors);

		bool AllOk = true;
		for (size_t i = 1; i < std::size(kGroups); ++i)
			AllOk = RunGroup(kGroups[i], Anchors, Outcome) && AllOk;

		if (AllOk && Outcome.Unchecked.empty())
			Log::Info_MDML("Engine layout verified against live objects ({0} groups, PDB constants)", std::size(kGroups));
		else if (AllOk)
			Log::Warn_MDML("Engine layout verified with {0} group(s) unchecked", Outcome.Unchecked.size());
		else
			Log::Error_MDML("ENGINE LAYOUT: at least one group could not be verified, see the errors above");
		PostLayoutNotices(Outcome);
		return AllOk;
	}
};
