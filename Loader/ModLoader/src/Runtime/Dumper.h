#pragma once
#include <string>

// Finished dumps post a transient Info notice through mdml::runtime::Notices (Runtime/Notices.h), shown in the F1 window.
class Dumper
{
public:
	bool DumpObjectArray();
	bool DumpEngineInfo();
	bool DumpWorldActors();
	static Dumper* GetDumper();
	// Dumps go to <MDML.dll folder>/Dump (mdml::runtime::GetLoaderFolder), never the working directory.
	void CreateDumpDir();
private:
	static Dumper* DumpRef;
};