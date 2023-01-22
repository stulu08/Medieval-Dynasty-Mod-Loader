#pragma once
#include "UObject/CoreTypes.h"
namespace UE4 {
	struct FActorSpawnParameters
	{
		FActorSpawnParameters()
			: Name("")
			, Template(0)
			, Owner(0)
			, Instigator(0)
			, OverrideLevel(0)
			, bNoCollisionFail(false)
			, bRemoteOwned(false)
			, bNoFail(false)
			, bDeferConstruction(false)
			, bAllowDuringConstructionScript(false)
			, ObjectFlags(0x00000008)
		{}
		FName Name;
		class AActor* Template;
		class AActor* Owner;
		class AActor* Instigator;
		class	ULevel* OverrideLevel;
		int	bNoCollisionFail : 1;
		int	bRemoteOwned : 1;
		int	bNoFail : 1;
		int	bDeferConstruction : 1;
		int	bAllowDuringConstructionScript : 1;
		int ObjectFlags;
	};
}