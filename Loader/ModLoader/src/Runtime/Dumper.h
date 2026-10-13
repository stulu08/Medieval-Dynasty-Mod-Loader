#pragma once
#include <string>

// Status line for finished dumps. Set on the game thread (dump), read by the loader UI on the render thread (mutex).
// Replaces the modal MessageBox that used to pop up after every dump.
namespace DumpNotice
{
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
	void CreateDumpDir();
private:
	static Dumper* DumpRef;
};