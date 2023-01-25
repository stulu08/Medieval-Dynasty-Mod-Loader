#include "Core.h"
#include "Dumper.h"
#include "UE4.h"
#include "Globals.h"
#include "MDML.h"

Dumper* Dumper::DumpRef;

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
	if (UE4::UObject::GObjects != nullptr)
	{
		if (SDK::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
		{
			for (int i = 0; i < UE4::UObject::GObjects->GetAsChunckArray().Num(); i++)
			{
				auto obj = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
				if (obj != nullptr)
					fprintf(Log, "[%06i] %-100s 0x%p\n", obj->GetIndex(), obj->GetFullName().c_str(), obj);
			}
			Log::SetupMessage("Done!", "Object Dump Complete!");
		}
		else
		{
			for (int i = 0; i < UE4::UObject::GObjects->GetAsTUArray().Num(); i++)
			{
				auto obj = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(i).Object;
				if (obj != nullptr)
					fprintf(Log, "[%06i] %-100s 0x%p\n", obj->GetIndex(), obj->GetFullName().c_str(), obj);
			}
			Log::SetupMessage("Done!", "Object Dump Complete!");
		}
		Log::Info_UML("Object Dump Complete!");
		fclose(Log);
		return true;
	}
	else
	{
		return false;
	}
}

#pragma warning( push )
#pragma warning( disable : 4477 )
#pragma warning( disable : 4313 )
bool Dumper::DumpEngineInfo()
{
	CreateDumpDir();
	FILE* Log = NULL;
	fopen_s(&Log, "Dump/EngineInfo.txt", "w+");
	if (Log != NULL) {
		auto defs = SDK::SelectedGameProfile.defs;
		fprintf(Log, "#Engine Info Dump\n");
		fprintf(Log, "[GInfo]\nIsGInfoPatterns=0\nGName=0x%p\nGObject=0x%p\nGWorld=0x%p\n", SDK::SelectedGameProfile.GName - (DWORD64)GetModuleHandleW(0), SDK::SelectedGameProfile.GObject - (DWORD64)GetModuleHandleW(0), SDK::SelectedGameProfile.GWorld - (DWORD64)GetModuleHandleW(0));
		fprintf(Log, "\n[UObjectDef]\nIndex=0x%p\nClass=0x%p\nName=0x%p\nOuter=0x%p\n", defs.UObject.Index, defs.UObject.Class, defs.UObject.Name, defs.UObject.Outer);
		fprintf(Log, "\n[UStructDef]\nSuperStruct=0x%p\nChildren=0x%p\nPropertiesSize=0x%p\n", defs.UStruct.SuperStruct, defs.UStruct.Children, defs.UStruct.PropertiesSize);
		fprintf(Log, "\n[UEnumDef]\nCppType=0x%p\nNames=0x%p\nCppForm=0x%p\nFlags=0x%p\nDisplayNameFn=0x%p\nUserDefDisplayNameMap=0x%p\n", defs.UEnum.CppType, defs.UEnum.Names, defs.UEnum.CppForm, defs.UEnum.Flags, defs.UEnum.DisplayNameFn, defs.UEnum.UserDefDisplayNameMap);
		fprintf(Log, "\n[UFunctionDef]\nFunctionFlags=0x%p\nNumParams=0x%p\nParamsSize=0x%p\nReturnValueOffset=0x%p\nFunc=0x%p\n", defs.UFunction.FunctionFlags, defs.UFunction.NumParams, defs.UFunction.ParamsSize, defs.UFunction.ReturnValueOffset, defs.UFunction.Func);
		fprintf(Log, "\n[UFieldDef]\nNext=0x%p\n", defs.UField.Next);
		fprintf(Log, "\n[Property]\nIsFProperty=0x%d\nArrayDim=0x%p\nElementSize=0x%p\nFlags=0x%p\nOffset=0x%p\n", SDK::SelectedGameProfile.bIsFProperty, defs.Property.ArrayDim, defs.Property.ElementSize, defs.Property.Flags, defs.Property.Offset);
		fprintf(Log, "\n[FField]\nNext=0x%p\nName=0x%p\nClassPrivate=0x%p\n", defs.FField.Next, defs.FField.Name, defs.FField.ClassPrivate);
		fprintf(Log, "\n[FFieldClass]\nName=0x%p\nID=0x%p\nCastFlags=0x%p\nSuperClass=0x%p\n", defs.FFieldClass.Name, defs.FFieldClass.ID, defs.FFieldClass.CastFlags, defs.FFieldClass.SuperClass);
		fclose(Log);
		Log::SetupMessage("Done!", "Engine Info Dump Complete!");
		Log::Info_UML("Engine Info Dump Complete!");
		return true;
	}
	return false;
}
#pragma warning( pop )
bool Dumper::DumpWorldActors()
{
	CreateDumpDir();
	FILE* Log = NULL;
	std::string FileName = std::string("Dump/") + UE4::UGameplayStatics::GetCurrentLevelName(false).ToString() + "_Dump.txt";
	auto GameplayStatics = UE4::UObject::GetDefaultObjectFromArray<UE4::UGameplayStatics>(UE4::UGameplayStatics::StaticClass());
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
	Log::SetupMessage("Done!", "World Actors Dump Complete!");
	fclose(Log);
	return true;
}