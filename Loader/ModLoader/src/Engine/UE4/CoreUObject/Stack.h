#pragma once
#include "Class.h"
#include "UnrealType.h"
#include "EngineLayout.h"
#include "EngineMemory.h"

namespace UE4 {
	class FOutParmRec
	{
	public:
		FProperty* Property; //0x0000
		void* PropAddr; //0x0008
		FOutParmRec* NextOutParm; //0x0010

	}; //Size=0x0018
	class FFrame
	{
	public:
		char pad_0x0000[0x10]; //0x0000
		UFunction* Node; //0x0010
		UObject* Object; //0x0018
		uint8_t* Code; //0x0020
		uint8_t* Locals; //0x0028
		char pad_0x0030[0x48]; //0x0030
		FOutParmRec* OutParms; //0x0078

		// Writes Value (bitwise) into the out parameter named OutputName. False if there is no such out parameter.
		template<typename T>
		bool SetOutput(std::string OutputName, T Value)
		{
			for (auto CurrentOutParam = OutParms; CurrentOutParam && CurrentOutParam->Property; CurrentOutParam = CurrentOutParam->NextOutParm)
			{
				if (CurrentOutParam->Property->GetName() == OutputName)
				{
					mdml::mem::Store<T>(CurrentOutParam->PropAddr, Value);
					return true;
				}
			}
			return false;
		}

		template<typename T>
		T* GetInputParams() { return (T*)Locals; }
	};

	static_assert(sizeof(FOutParmRec) == mdml::layout::FOutParmRec::Size, "FOutParmRec layout");
	static_assert(offsetof(FOutParmRec, NextOutParm) == mdml::layout::FOutParmRec::NextOutParm, "FOutParmRec layout");
	static_assert(offsetof(FFrame, Node) == mdml::layout::FFrame::Node, "FFrame layout");
	static_assert(offsetof(FFrame, Object) == mdml::layout::FFrame::Object, "FFrame layout");
	static_assert(offsetof(FFrame, Code) == mdml::layout::FFrame::Code, "FFrame layout");
	static_assert(offsetof(FFrame, Locals) == mdml::layout::FFrame::Locals, "FFrame layout");
	static_assert(offsetof(FFrame, OutParms) == mdml::layout::FFrame::OutParms, "FFrame layout");
}
