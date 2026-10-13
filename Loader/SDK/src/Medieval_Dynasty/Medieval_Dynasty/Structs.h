#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums

#pragma endregion

#pragma region Structs
	struct FCollisionData;
	struct FBlueprintSessionResultCustom;
	struct FPerceptionSenseStimulationData;
	struct FChunkServerData;
	struct FPlantStateSeasonalData;
	struct FST_ChunkDataArray;
	struct FST_ChunkData;
	struct FST_PlantSlotArray;
	struct FST_PlantSlot;
	struct FChatterRestrictions;
	struct FChatterOptions;
	struct FChatterDialogue;
	struct FChatterSubCatData;
	struct FChatterData;
	struct FChatter;
	struct FST_DoubleActorArray;
	struct FST_PresetsIDs;
	struct FSTGameplayEventManagerSave;
	struct FCustomEventST;
	struct FEventFireInformation;
	struct FMontageDataForRep;
	struct FTransform_NetQuantize;
	struct FSpawnedFoliageParticleSystemData;
	struct FFoliageData;
	struct FFoliageParticleSystemData;
	struct FST_FoliageDepletedDataArray;
	struct FST_FoliageDepletedData;
	struct FST_FoliageDataArray;
	struct FST_FoliageData;
	struct FST_ResourceIDTypes;
	struct FPoiObjectData;
	struct FNodeConditionState;
	struct FNodeEventsState;
	struct FLagContraint;
	struct FPerceptionSensesStimulationData;
	struct FCurseWord;
	struct FST_Skills;
	struct FE_PlayerVote {
		char data[16];
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.CollisionData
	// Size 80
	/////////////////////////////////////////////
	struct FCollisionData {
		class UCollisionComponent* CollisionComponent;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCollisionComponent* otherCollisionComponent;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Velocity;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	otherVelocity;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	pushVelocity;		//Offset: 40	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	otherPushVelocity;		//Offset: 52	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	contactLocation;		//Offset: 64	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 76	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.BlueprintSessionResultCustom
	// Size 264
	/////////////////////////////////////////////
	struct FBlueprintSessionResultCustom {
		unsigned char uknownData_0[264];		//Offset: 0	Size: 264
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.PerceptionSenseStimulationData
	// Size 56
	/////////////////////////////////////////////
	struct FPerceptionSenseStimulationData {
		float	firstSensedTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	lastSensedTime;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	firstSensedLocation;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	lastSensedLocation;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	firstSensedVelocity;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	lastSensedVelocity;		//Offset: 44	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChunkServerData
	// Size 72
	/////////////////////////////////////////////
	struct FChunkServerData {
		int32_t	ChunkIndex;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChunkState	ChunkState;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlantStage	PlantStage;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESeeds	CurrentSeed;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 7	Size: 1
		TArray<ESeeds>	TargetSeedSeasonal;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlantStateSeasonalData>	ChunkPlantsSeasonalData;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		bool	Occupied;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 41	Size: 3
		struct FVector	CenterLocation;		//Offset: 44	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>	PlantSlotsIDs;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.PlantStateSeasonalData
	// Size 24
	/////////////////////////////////////////////
	struct FPlantStateSeasonalData {
		ESeeds	Plant;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<EPlantState>	PlantStateSeasonal;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_ChunkDataArray
	// Super ScriptStruct Engine.FastArraySerializer
	// Size 280
	// Size inherited 264
	/////////////////////////////////////////////
	struct FST_ChunkDataArray : public FFastArraySerializer {
		TArray<struct FST_ChunkData>	Chunks;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_ChunkData
	// Super ScriptStruct Engine.FastArraySerializerItem
	// Size 112
	// Size inherited 12
	/////////////////////////////////////////////
	struct FST_ChunkData : public FFastArraySerializerItem {
		int32_t	ChunkID;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector2D>	Corners;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		struct FVector	CenterLocation;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	Occupied;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChunkState	ChunkState;		//Offset: 45	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlantStage	PlantStage;		//Offset: 46	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 47	Size: 1
		TArray<int32_t>	PlantSlotsIDs;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		float	Fertility;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESeeds	CurrentSeed;		//Offset: 68	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 69	Size: 3
		TArray<ESeeds>	TargetSeedSeasonal;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlantStateSeasonalData>	ChunkPlantsSeasonalData;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		bool	RecentlySown;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 105	Size: 3
		int32_t	Seasons;		//Offset: 108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_PlantSlotArray
	// Super ScriptStruct Engine.FastArraySerializer
	// Size 280
	// Size inherited 264
	/////////////////////////////////////////////
	struct FST_PlantSlotArray : public FFastArraySerializer {
		TArray<struct FST_PlantSlot>	Slots;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_PlantSlot
	// Super ScriptStruct Engine.FastArraySerializerItem
	// Size 80
	// Size inherited 12
	/////////////////////////////////////////////
	struct FST_PlantSlot : public FFastArraySerializerItem {
		EPlantStage	PlantStage;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
		int32_t	ChunkID;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[12];		//Offset: 20	Size: 12
		struct FTransform	Transform;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChatterRestrictions
	// Size 80
	/////////////////////////////////////////////
	struct FChatterRestrictions {
		TMap<struct FName, struct FChatterOptions>	Restrictions;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChatterOptions
	// Size 16
	/////////////////////////////////////////////
	struct FChatterOptions {
		TArray<unsigned char>	Options;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChatterDialogue
	// Super ScriptStruct Engine.TableRowBase
	// Size 96
	// Size inherited 8
	/////////////////////////////////////////////
	struct FChatterDialogue : public FTableRowBase {
		EChatterDialogueType	Category;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 9	Size: 7
		TMap<struct FName, struct FChatterSubCatData>	CategoryData;		//Offset: 16	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChatterSubCatData
	// Size 80
	/////////////////////////////////////////////
	struct FChatterSubCatData {
		TMap<struct FName, struct FChatterData>	Data;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ChatterData
	// Size 168
	/////////////////////////////////////////////
	struct FChatterData {
		TAssetPtr<class USoundWave>	ChatterSound;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UAnimMontage>	ChatterFaceAnimation;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UAnimMontage>	ChatterOtherAnimation;		//Offset: 80	Size: 40	Flags: Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UAnimMontage>	ChatterOtherAnimationSitting;		//Offset: 120	Size: 40	Flags: Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	ChatterOption;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 161	Size: 3
		float	ChatterWeight;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.Chatter
	// Super ScriptStruct Engine.TableRowBase
	// Size 96
	// Size inherited 8
	/////////////////////////////////////////////
	struct FChatter : public FTableRowBase {
		EChatterSoundType	Category;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 9	Size: 7
		TMap<struct FName, struct FChatterSubCatData>	CategoryData;		//Offset: 16	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_DoubleActorArray
	// Size 32
	/////////////////////////////////////////////
	struct FST_DoubleActorArray {
		TArray<class AActor*>	Actors1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>	Actors2;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_PresetsIDs
	// Size 12
	/////////////////////////////////////////////
	struct FST_PresetsIDs {
		int32_t	MeshesRowNameID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	BasePresetID;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ProfessionPresetID;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.STGameplayEventManagerSave
	// Size 160
	/////////////////////////////////////////////
	struct FSTGameplayEventManagerSave {
		TMap<struct FName, int32_t>	ManualEventQueSave;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FName, int32_t>	ImmediateEventsQueSave;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.CustomEventST
	// Size 40
	/////////////////////////////////////////////
	struct FCustomEventST {
		class UCustomEvent* Event;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UCustomEventCondition*>	Conditions;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		EEventQueType	NextEventQueType;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		struct FName	NextEventId;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NextEventSpecyicIndex;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.EventFireInformation
	// Size 16
	/////////////////////////////////////////////
	struct FEventFireInformation {
		class AActor* InstigatorActor;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EventVariant;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.MontageDataForRep
	// Size 40
	/////////////////////////////////////////////
	struct FMontageDataForRep {
		class UAnimMontage* PlayingMontage;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PlayRate;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Position;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WorldStartTime;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MontageCurrentSection;		//Offset: 20	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MontageNextSection;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.Transform_NetQuantize
	// Size 36
	/////////////////////////////////////////////
	struct FTransform_NetQuantize {
		struct FVector_NetQuantize10	Translation;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	Scale3D;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.SpawnedFoliageParticleSystemData
	// Size 160
	/////////////////////////////////////////////
	struct FSpawnedFoliageParticleSystemData {
		unsigned char uknownData_0[160];		//Offset: 0	Size: 160
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.FoliageData
	// Size 24
	/////////////////////////////////////////////
	struct FFoliageData {
		unsigned char uknownData_0[24];		//Offset: 0	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.FoliageParticleSystemData
	// Size 56
	/////////////////////////////////////////////
	struct FFoliageParticleSystemData {
		class UNiagaraSystem* ParticleSystem;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	activePercentage;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	activeRadius;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	useFixedLocalOffset;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		struct FVector	fixedLocalOffset;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	useFixedRadius;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 33	Size: 3
		float	fixedRadius;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	DebugColor;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_FoliageDepletedDataArray
	// Super ScriptStruct Engine.FastArraySerializer
	// Size 280
	// Size inherited 264
	/////////////////////////////////////////////
	struct FST_FoliageDepletedDataArray : public FFastArraySerializer {
		TArray<struct FST_FoliageDepletedData>	Items;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_FoliageDataArray
	// Super ScriptStruct Engine.FastArraySerializer
	// Size 280
	// Size inherited 264
	/////////////////////////////////////////////
	struct FST_FoliageDataArray : public FFastArraySerializer {
		TArray<struct FST_FoliageData>	Items;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_FoliageData
	// Super ScriptStruct Engine.FastArraySerializerItem
	// Size 144
	// Size inherited 12
	/////////////////////////////////////////////
	struct FST_FoliageData : public FFastArraySerializerItem {
		int32_t	InstanceIndex;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	ResourceID;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	ResourceSubID;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[14];		//Offset: 18	Size: 14
		struct FTransform	OriginTransform;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform	CurrentTransform;		//Offset: 80	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		int32_t	NumberOfSeasonToReset;		//Offset: 128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bDownAtBeginning;		//Offset: 132	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bMoved;		//Offset: 133	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRemovedForever;		//Offset: 134	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[9];		//Offset: 135	Size: 9
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.ST_ResourceIDTypes
	// Super ScriptStruct Engine.TableRowBase
	// Size 24
	// Size inherited 8
	/////////////////////////////////////////////
	struct FST_ResourceIDTypes : public FTableRowBase {
		TArray<struct FName>	ResourcesSubIDs;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.PoiObjectData
	// Size 24
	/////////////////////////////////////////////
	struct FPoiObjectData {
		int32_t	PoiIndex;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<unsigned char>	Data;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.NodeConditionState
	// Size 32
	/////////////////////////////////////////////
	struct FNodeConditionState {
		int32_t	NodeId;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	WasProcessed;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	ConditionsPassed;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 6	Size: 2
		struct FVector2D	NodeCoords;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>	MutuallyExclusiveIDs;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.NodeEventsState
	// Size 8
	/////////////////////////////////////////////
	struct FNodeEventsState {
		int32_t	NodeId;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumberOfEventsInQueue;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.LagContraint
	// Size 3
	/////////////////////////////////////////////
	struct FLagContraint {
		bool	X;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	Y;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	Z;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.PerceptionSensesStimulationData
	// Size 80
	/////////////////////////////////////////////
	struct FPerceptionSensesStimulationData {
		TMap<class UPerceptionSense*, struct FPerceptionSenseStimulationData>	sensesStimulationData;		//Offset: 0	Size: 80	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Medieval_Dynasty.CurseWord
	// Super ScriptStruct Engine.TableRowBase
	// Size 16
	// Size inherited 8
	/////////////////////////////////////////////
	struct FCurseWord : public FTableRowBase {
		struct FName	Word;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

#pragma endregion
}