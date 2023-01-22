#pragma once

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