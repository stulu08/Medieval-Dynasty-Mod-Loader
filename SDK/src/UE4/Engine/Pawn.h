#pragma once

namespace UE4 {
	class APawn : public AActor
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.Pawn");
			return ptr;
		}
	};
}