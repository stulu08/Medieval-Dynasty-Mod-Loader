#pragma once
#include <string>

// DEPRECATED (Wave 3E): finished dumps post a transient Info notice through mdml::runtime::Notices
// (Runtime/Notices.h), which the F1 window shows. These forwarders stay until nothing calls them any more.
namespace DumpNotice
{
	// = Notices::Post(Info, text) + remembers the text for Get.
	void Set(const std::string& text);
	// false if there was never a notice; ageSeconds = time since Set.
	bool Get(std::string& text, float& ageSeconds);
}

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