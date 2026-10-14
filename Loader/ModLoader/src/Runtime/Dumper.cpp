#include "Core.h"
#include "Dumper.h"
#include <mutex>
#include <chrono>
#include "UE4.h"
#include "Globals.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"

Dumper* Dumper::DumpRef;

static std::mutex s_noticeMutex;
static std::string s_noticeText;
static std::chrono::steady_clock::time_point s_noticeTime;

void DumpNotice::Set(const std::string& text)
{
	Log::Info_MDML("{0}", text);
	std::lock_guard<std::mutex> lock(s_noticeMutex);
	s_noticeText = text;
	s_noticeTime = std::chrono::steady_clock::now();
}

bool DumpNotice::Get(std::string& text, float& ageSeconds)
{
	std::lock_guard<std::mutex> lock(s_noticeMutex);
	if (s_noticeText.empty())
		return false;
	text = s_noticeText;
	ageSeconds = std::chrono::duration<float>(std::chrono::steady_clock::now() - s_noticeTime).count();
	return true;
}

Dumper* Dumper::GetDumper()
{
	if (!DumpRef)
	{
		DumpRef = new Dumper();
	}
	return DumpRef;
}

void Dumper::CreateDumpDir() {
	if (!std::filesystem::exists("Dump"))
		std::filesystem::create_directory("Dump");
}


bool Dumper::DumpObjectArray()
{
	CreateDumpDir();
	FILE* Log = NULL;
	fopen_s(&Log, "Dump/ObjectDump.txt", "w+");
	if (UE4::UObject::GObjects != nullptr && Log != NULL)
	{
		UE4::UObject::ForEachObject([&](UE4::UObject* obj) {
			fprintf(Log, "[%06i] %-100s 0x%p\n", obj->GetIndex(), obj->GetFullName().c_str(), obj);
		});
		fclose(Log);
		DumpNotice::Set("Object dump written to " + std::filesystem::absolute("Dump/ObjectDump.txt").string());
		return true;
	}
	else
	{
		if (Log != NULL)
			fclose(Log);
		return false;
	}
}

// Engine info for diagnostics: resolved global RVAs and the offsets the core uses (mdml::Layout), each marked whether
// it still equals the PDB-checked constant. Before Wave 3D this wrote the [UObjectDef]/... profile sections of the
// removed manual-offset mode; the format is now informational only (not meant to be pasted into an ini).
bool Dumper::DumpEngineInfo()
{
	CreateDumpDir();
	FILE* Log = NULL;
	fopen_s(&Log, "Dump/EngineInfo.txt", "w+");
	if (Log == NULL)
		return false;
	const DWORD64 Base = (DWORD64)GetModuleHandleW(0);
	auto Rva = [&](DWORD64 Address) { return Address ? Address - Base : 0; };
	const mdml::EngineLayout& L = mdml::Layout;
	const mdml::EngineLayout Constants;
	auto Line = [&](const char* Name, uint16_t Value, uint16_t Constant) {
		fprintf(Log, "%-40s 0x%04X%s\n", Name, Value, Value == Constant ? "" : "   (SCANNED, PDB constant differs)");
	};
	fprintf(Log, "# MDML engine info dump (offsets: Loader/ModLoader/src/Engine/EngineLayout.h)\n\n");
	fprintf(Log, "[Globals] (RVA)\nGName   0x%llX\nGObject 0x%llX\nGWorld  0x%llX\n\n", Rva(mdml::Addresses.GName), Rva(mdml::Addresses.GObject), Rva(mdml::Addresses.GWorld));
	fprintf(Log, "[Layout]\n");
	Line("UObject.Index", L.UObject.Index, Constants.UObject.Index);
	Line("UObject.Class", L.UObject.Class, Constants.UObject.Class);
	Line("UObject.Name", L.UObject.Name, Constants.UObject.Name);
	Line("UObject.Outer", L.UObject.Outer, Constants.UObject.Outer);
	Line("UField.Next", L.UField.Next, Constants.UField.Next);
	Line("UStruct.SuperStruct", L.UStruct.SuperStruct, Constants.UStruct.SuperStruct);
	Line("UStruct.Children", L.UStruct.Children, Constants.UStruct.Children);
	Line("UStruct.ChildProperties", L.UStruct.ChildProperties, Constants.UStruct.ChildProperties);
	Line("UStruct.PropertiesSize", L.UStruct.PropertiesSize, Constants.UStruct.PropertiesSize);
	Line("UEnum.CppType", L.UEnum.CppType, Constants.UEnum.CppType);
	Line("UEnum.Names", L.UEnum.Names, Constants.UEnum.Names);
	Line("UEnum.CppForm", L.UEnum.CppForm, Constants.UEnum.CppForm);
	Line("UEnum.Flags", L.UEnum.Flags, Constants.UEnum.Flags);
	Line("UEnum.DisplayNameFn", L.UEnum.DisplayNameFn, Constants.UEnum.DisplayNameFn);
	Line("UUserDefinedEnum.DisplayNameMap", L.UEnum.UserDefDisplayNameMap, Constants.UEnum.UserDefDisplayNameMap);
	Line("UFunction.FunctionFlags", L.UFunction.FunctionFlags, Constants.UFunction.FunctionFlags);
	Line("UFunction.NumParms", L.UFunction.NumParams, Constants.UFunction.NumParams);
	Line("UFunction.ParmsSize", L.UFunction.ParamsSize, Constants.UFunction.ParamsSize);
	Line("UFunction.ReturnValueOffset", L.UFunction.ReturnValueOffset, Constants.UFunction.ReturnValueOffset);
	Line("UFunction.Func", L.UFunction.Func, Constants.UFunction.Func);
	Line("FField.ClassPrivate", L.FField.ClassPrivate, Constants.FField.ClassPrivate);
	Line("FField.Next", L.FField.Next, Constants.FField.Next);
	Line("FField.Name", L.FField.Name, Constants.FField.Name);
	Line("FFieldClass.Name", L.FFieldClass.Name, Constants.FFieldClass.Name);
	Line("FFieldClass.Id", L.FFieldClass.ID, Constants.FFieldClass.ID);
	Line("FFieldClass.CastFlags", L.FFieldClass.CastFlags, Constants.FFieldClass.CastFlags);
	Line("FFieldClass.SuperClass", L.FFieldClass.SuperClass, Constants.FFieldClass.SuperClass);
	Line("FProperty.ArrayDim", L.Property.ArrayDim, Constants.Property.ArrayDim);
	Line("FProperty.ElementSize", L.Property.ElementSize, Constants.Property.ElementSize);
	Line("FProperty.PropertyFlags", L.Property.Flags, Constants.Property.Flags);
	Line("FProperty.Offset_Internal", L.Property.Offset, Constants.Property.Offset);
	Line("FObjectPropertyBase.PropertyClass", L.ObjectPropertyBase.PropertyClass, Constants.ObjectPropertyBase.PropertyClass);
	fclose(Log);
	DumpNotice::Set("Engine info dump written to " + std::filesystem::absolute("Dump/EngineInfo.txt").string());
	return true;
}

bool Dumper::DumpWorldActors()
{
	CreateDumpDir();
	FILE* Log = NULL;
	std::string FileName = std::string("Dump/") + UE4::UGameplayStatics::GetCurrentLevelName(false).ToString() + "_Dump.txt";
	fopen_s(&Log, FileName.c_str(), "w+");
	if (Log == NULL)
		return false;
	auto actors = UE4::UObject::GetAllObjectsOfType<UE4::AActor>(UE4::AActor::StaticClass(), true);
	for (size_t i = 0; i < actors.size(); i++)
	{
		auto actor = actors[i];
		if (actor->GetOuter()->GetClass() == UE4::ULevel::StaticClass())
		{
			auto Location = actor->GetActorLocation();
			auto Rotation = actor->GetActorRotation();
			auto Scale = actor->GetActorScale3D();
			fprintf(Log, "ActorName: %s\n", actor->GetName().c_str());
			fprintf(Log, "ClassName: %s\n", actor->GetClass()->GetName().c_str());
			fprintf(Log, "Location: %f, %f, %f\n", Location.X, Location.Y, Location.Z);
			fprintf(Log, "Rotation: %f, %f, %f\n", Rotation.Pitch, Rotation.Roll, Rotation.Yaw);
			fprintf(Log, "Scale: %f, %f, %f\n", Scale.X, Scale.Y, Scale.Z);
			fprintf(Log, "\n");
		}
	}
	fclose(Log);
	DumpNotice::Set("World actors dump written to " + std::filesystem::absolute(FileName).string());
	return true;
}