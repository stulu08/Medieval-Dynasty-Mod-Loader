#pragma once
#include "Class.h"
#include "UnrealType.h"

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

		template<typename T>
		bool SetOutput(std::string OutputName, T Value)
		{
			if (SDK::SelectedGameProfile.bIsFProperty)
			{
				auto CurrentOutParam = OutParms;
				while (true)
				{
					if (!CurrentOutParam->Property)
					{
						break;
					}
					if (CurrentOutParam->Property->GetParentFProperty()->GetName() == OutputName)
					{
						Write<T>((byte*)CurrentOutParam->PropAddr, Value);
						return true;
					}
					CurrentOutParam = CurrentOutParam->NextOutParm;
				}
				return false;
			}
			else
			{
				auto CurrentOutParam = OutParms;
				while (true)
				{
					if (!CurrentOutParam->Property)
					{
						break;
					}
					if (CurrentOutParam->Property->GetParentUProperty()->GetName() == OutputName)
					{
						Write<T>((byte*)CurrentOutParam->PropAddr, Value);
						return true;
					}
					CurrentOutParam = CurrentOutParam->NextOutParm;
				}
				return false;
			}
		}

		template<typename T>
		T* GetInputParams() { return (T*)Locals; }
	};
}