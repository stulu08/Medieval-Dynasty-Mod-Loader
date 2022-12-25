#pragma once

class Dumper
{
public:
	bool DumpObjectArray();
	bool DumpEngineInfo();
	bool DumpWorldActors();
	static Dumper* GetDumper();
private:
	void CreateDumpDir();
	static Dumper* DumpRef;
};