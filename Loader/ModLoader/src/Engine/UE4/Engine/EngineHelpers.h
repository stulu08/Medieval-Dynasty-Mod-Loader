#pragma once
// Hand-written engine helpers on top of the GENERATED SDK (Wave 4 step B). The engine classes themselves (UWorld,
// AActor, ULevel, UUserDefinedEnum, ...) come from the generated headers in Loader/SDK/Generated ("Engine.hpp"); a
// hand-written class of the same name would clash with them, so what the old hand-written stubs did beyond reflection
// (GWorld, UWorld::SpawnActor, the user-defined enum display names) lives here as free functions.
// Only forward declarations of generated classes: include "Engine.hpp" to use their members.
#include "MDML/Core.h"
#include "CoreUObject/Class.h"
#include "Containers/Map.h"
#include "Containers/Text.h"
#include "Math/Transform.h"

namespace UE4 {
	class UWorld;
	class AActor;
	class ULevel;

	// FActorSpawnParameters of UE 4.27 (Engine/Classes/Engine/World.h, not reflected). Layout checked against the game
	// PDB (Tools/RE/check_layout.py --dump FActorSpawnParameters). The old SDK struct still had the pre-4.20
	// bNoCollisionFail bit; harmless because every flag was zero.
	struct FActorSpawnParameters
	{
		FName Name = FName();
		AActor* Template = nullptr;
		AActor* Owner = nullptr;
		class APawn* Instigator = nullptr;
		ULevel* OverrideLevel = nullptr;
		// ESpawnActorCollisionHandlingMethod (generated, Engine.hpp): 0 = Undefined (use the actor's default)
		uint8_t SpawnCollisionHandlingOverride = 0;
		uint8_t bRemoteOwned : 1 = 0;
		uint8_t bNoFail : 1 = 0;
		uint8_t bDeferConstruction : 1 = 0;
		uint8_t bAllowDuringConstructionScript : 1 = 0;
		// ESpawnActorNameMode: 0 = Required_Fatal
		uint8_t NameMode = 0;
		// EObjectFlags; RF_Transactional (0x8), the engine default
		uint32_t ObjectFlags = 0x00000008;
	};
	static_assert(sizeof(FActorSpawnParameters) == 0x30, "FActorSpawnParameters: size differs from UE 4.27");
	static_assert(offsetof(FActorSpawnParameters, SpawnCollisionHandlingOverride) == 0x28, "FActorSpawnParameters layout");
	static_assert(offsetof(FActorSpawnParameters, NameMode) == 0x2A, "FActorSpawnParameters layout");
	static_assert(offsetof(FActorSpawnParameters, ObjectFlags) == 0x2C, "FActorSpawnParameters layout");

	// True while Object is still the object in its GObjects slot and is neither PendingKill nor Unreachable, i.e. it was
	// not destroyed or garbage collected since the pointer was taken. Reading the index is SEH-guarded, so it is safe
	// on a dangling pointer. For UI code that keeps object pointers across frames (render thread): check before every
	// use; the object can still die right after the check unless you are on the game thread.
	MDML_ENGINE_API bool IsLiveObject(const UObject* Object);

	// The current world (GWorld), nullptr before the engine created one.
	MDML_ENGINE_API UWorld* GetWorld();

	// UWorld::SpawnActor(UClass*, const FTransform*, const FActorSpawnParameters&) in the current world. Game thread only.
	MDML_ENGINE_API AActor* SpawnActor(UClass* Class, const FTransform& Transform, const FActorSpawnParameters& Parameters = FActorSpawnParameters());

	// Blueprint (user-defined) enums: the entries are named NewEnumerator0..N, the names the designer typed are display
	// names (UUserDefinedEnum::DisplayNameMap).
	MDML_ENGINE_API bool IsUserDefinedEnum(const UEnum* Enum);
	// Display name of entry Index (index into UEnum::GetNames()); empty FText for other enums. The caller owns the
	// returned FText's reference (FText::Release).
	MDML_ENGINE_API FText GetUserDefinedEnumDisplayNameText(const UEnum* Enum, int32_t Index);
	// One name per entry of UEnum::GetNames(): the display name, or the internal name where there is none.
	MDML_ENGINE_API std::vector<std::string> GetUserDefinedEnumDisplayNames(const UEnum* Enum);

	// UDataTable::RowMap (not reflected, so the generated UDataTable has no member for it): row name -> row data, laid
	// out as the table's RowStruct (the generated UDataTable has RowStruct). A copy of the map header; the rows are the
	// table's own memory. Was the hybrid UDataTable::GetRowMap of the old SDK.
	MDML_ENGINE_API TMap<FName, uint8_t*> GetDataTableRowMap(const UObject* DataTable);
}
