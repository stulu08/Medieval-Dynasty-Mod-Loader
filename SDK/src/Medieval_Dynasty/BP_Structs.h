#pragma once
#include "CoreUObject/CoreTypes.h"
/////////////////////////////////////////////
// Structs: 320
/////////////////////////////////////////////

namespace UE4 {
	struct FST_ItemCache;
	struct FST_SAVE_Trade_Progress;
	struct FST_SAVE_SourceOfResources;
	struct FST_SAVE_Repairing_Progress;
	struct FST_SAVE_Production_Progress;
	struct FST_SAVE_Modules;
	struct FST_SAVE_AnimalProduction_Progress;
	struct FST_Event_BuildingMultipliers;
	struct FST_ToolCost;
	struct FST_EventRestriction_Player;
	struct FST_EventRestricion_NPCs;
	struct FST_EventRestricion_Fields;
	struct FST_EventRestricion_Buildings;
	struct FST_EventRestricion_Animals;
	struct FST_EventEffect_Village_Resources;
	struct FST_EventEffect_Village_Fields;
	struct FST_EventEffect_Village_Buildings;
	struct FST_EventEffect_Village;
	struct FST_EventEffect_PlayerParameters;
	struct FST_EventEffect_NPCParameter;
	struct FST_EventEffect_HusbandryAnimals;
	struct FST_VillageRestriction;
	struct FST_SkillRestriction;
	struct FST_EventButtonRestrictions;
	struct FST_MasterEventEffect;
	struct FST_EventButtons;
	struct FST_EventRestrictions;
	struct FST_SeasonEvent;
	struct FST_ItemRestriction;
	struct FST_EventHistory_Village;
	struct FST_EventHistory_PlayerParameters;
	struct FST_EventHistory_NPCParameter;
	struct FST_EventHistory_Consequences;
	struct FST_Time;
	struct FST_EventHistory_Main;
	struct FST_SAVE_FieldPlantSlots;
	struct FST_SAVE_FieldChunks;
	struct FST_SAVE_Foliage;
	struct FST_Module;
	struct FST_AnimalProduction_Recipe;
	struct FST_ItemCrafting;
	struct FST_Profession;
	struct FST_Item_Crafting_ItemRecipes;
	struct FST_Production_AnimalSettings;
	struct FST_Production_Recipe;
	struct FST_WorkersProduction;
	struct FST_AnimalsProduction;
	struct FST_BuildingTechnology;
	struct FST_BuildingModuleSocket;
	struct FST_Building;
	struct FST_Furniture;
	struct FST_GeneratedQuestRestrictions_Technology;
	struct FST_AnimalForHuntGoal;
	struct FST_GeneratedQuestRestrictions_Ownership;
	struct FST_GeneratedQuestRestrictions_NPC;
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions;
	struct FST_Goal_WaitForTimes;
	struct FST_Goal_VillageParameters;
	struct FST_GenerateItemsForQuest;
	struct FST_Goal_Talk;
	struct FST_Goal_SpendTalentPoints;
	struct FST_Goal_RemoveFoliage;
	struct FST_Goal_Population;
	struct FST_Goal_PledgeTask;
	struct FST_Goal_Hunt;
	struct FST_Goal_GetRidOf;
	struct FST_Goal_Flirt;
	struct FST_Goal_Find;
	struct FST_Goal_Family;
	struct FST_Goal_Custom;
	struct FST_Goal_CompleteQuests;
	struct FST_Goal_Build;
	struct FST_Goal_ArcheryContest;
	struct FST_Goal_Acquire;
	struct FST_QuestObjective_OnFailed;
	struct FST_MasterGoals;
	struct FST_Goal_ChangeDialogue;
	struct FST_Quest_PickedItemsFromGenerator;
	struct FST_Quest_ItemsToPickFrom;
	struct FST_QuestReward;
	struct FST_QuestObjectives;
	struct FST_QuestFailPenalty;
	struct FST_GenerateQuestReward;
	struct FST_GenerateObjectivesForQuest;
	struct FST_GeneratedQuestRestrictions;
	struct FST_ChallengeRestrictions;
	struct FST_StringTable_IDKey_Pair;
	struct FST_QuestInfos;
	struct FST_ColorTable;
	struct FST_ItemResource;
	struct FST_VendorSettings;
	struct FST_ItemTool;
	struct FST_ItemStats;
	struct FST_ItemSettings;
	struct FST_ItemPhysics;
	struct FST_ItemOutfit;
	struct FST_ItemAmmo;
	struct FST_ItemDetails;
	struct FST_DevelopmentStage;
	struct FST_SAVE_NPCDialogue;
	struct FST_SAVE_NPC_Skillss;
	struct FST_SAVE_NPC_Blackboards;
	struct FST_QuestAnimation;
	struct FST_MatchingNPC;
	struct FST_SAVE_Talents;
	struct FST_SAVE_Skills;
	struct FST_SAVE_PotionStatuses;
	struct FST_SAVE_LifeStats;
	struct FST_SAVE_Inventory;
	struct FST_Event_CharacterMultipliers;
	struct FST_SAVE_ItemStack;
	struct FST_SAVE_SplineModules;
	struct FST_SAVE_Module_Data;
	struct FST_SAVE_TechnologyScheme;
	struct FST_KingDetails;
	struct FST_ItemInventorys;
	struct FST_NPCSeasonClothing;
	struct FST_SAVE_Spawner_NPC;
	struct FST_SAVE_Spawner_Item;
	struct FST_SAVE_Spawner_CollectableFurniture;
	struct FST_SAVE_Spawner_Animal;
	struct FST_InventoryItemsArray;
	struct FST_SAVE_POI_History;
	struct FST_SAVE_POI;
	struct FST_FoliageDepletedData;
	struct FST_SAVE_Kingdom;
	struct FST_SAVE_Traps;
	struct FST_SAVE_TechnologyData;
	struct FST_SAVE_Technology;
	struct FST_SAVE_Strings;
	struct FST_SAVE_SplineStructures;
	struct FST_SAVE_SplineStructure_Data;
	struct FST_SAVE_SpawnerFish_Data;
	struct FST_SAVE_SpawnerAnimal_Data;
	struct FST_SAVE_SpawnedItemFoliage;
	struct FST_SAVE_SpawnedFoliage;
	struct FST_SAVE_SimpleInventory;
	struct FST_SAVE_Roads;
	struct FST_SAVE_Road_Data;
	struct FST_SAVE_ResourceDeposits;
	struct FST_SAVE_RefillableContainers;
	struct FST_SAVE_Player;
	struct FST_SAVE_NPC_Building;
	struct FST_QuestInfo_Save;
	struct FST_SAVE_NPC;
	struct FST_SAVE_Items;
	struct FST_SAVE_HusbandryAnimals;
	struct FST_SAVE_Gates;
	struct FST_SAVE_Furnitures;
	struct FST_SAVE_FoliageArray;
	struct FST_SAVE_FishSpawners;
	struct FST_SAVE_Fields;
	struct FST_SAVE_Events;
	struct FST_SAVE_Containers;
	struct FST_SAVE_Collectable_Data;
	struct FST_SAVE_Campfires;
	struct FST_SAVE_Buildings;
	struct FST_SAVE_Building_Data;
	struct FST_SAVE_AnimalSpawners;
	struct FST_SAVE_ActivityFurnitures;
	struct FST_SAVE_Achievements;
	struct FST_PlantCondition;
	struct FST_BookTutorialShown;
	struct FST_GraphicsSettingsPreset;
	struct FST_CharacterSettings;
	struct FST_AquaticInteractionData;
	struct FST_LineState;
	struct FST_DialoguesUsedDialogueLines;
	struct FST_MontagesSettingsEnum;
	struct FST_ToolTransforms;
	struct FST_CombinedToolTransforms;
	struct FST_ItemSourceCondition;
	struct FST_ItemResourceCondition;
	struct FST_ItemGeneratorSettings;
	struct FST_FoliageData;
	struct FST_FoliageArray;
	struct FST_Foliage;
	struct FST_SAVE_FoliageData;
	struct FST_SpawnedResourceItem;
	struct FST_SpawnersArray;
	struct FST_DrawingSpawnersArray;
	struct FST_DrawingSpawners;
	struct FST_ChromaAnimPaths;
	struct FST_ItemColors;
	struct FST_OutfitsPresets;
	struct FST_CameraSettings;
	struct FST_CameraSettings_Gait;
	struct FST_CameraSettings_Stance;
	struct FST_Camera_Targets;
	struct FST_PivotParams;
	struct FST_Field;
	struct FST_DialogueSounds;
	struct FST_MeshDynamicMaterials;
	struct FST_HeatingSource;
	struct FST_InteractSlotSettings;
	struct FST_InteractSlot;
	struct FST_CauserTimer;
	struct FST_InteractionMontages;
	struct FST_Event_AnimalMultipliers;
	struct FST_DecorationPreset;
	struct FST_RoadList;
	struct FST_BridgeList;
	struct FST_WifeGifts;
	struct FST_AffectionDialogueResponse;
	struct FST_Gift;
	struct FST_ToddlerGift;
	struct FST_DayPreset;
	struct FST_Season;
	struct FST_Challenge_ItemForDeliver;
	struct FST_Challenge_ItemForDeliver_Generic;
	struct FST_Challenge_SendPeople;
	struct FST_Challenge_DeliverItems_Generic;
	struct FST_Challenge_DeliverItems;
	struct FST_Challenge_DeliverFood;
	struct FST_Challenge_Reward;
	struct FST_Challenge_Punishment;
	struct FST_Challenge_MasterType;
	struct FST_Challange;
	struct FST_Skills;
	struct FST_SplineStructureList;
	struct FST_GateList;
	struct FST_DecorationSlot;
	struct FST_Bridge;
	struct FST_CraftingCategory;
	struct FST_Road;
	struct FST_KeyMapping;
	struct FST_SplineStructure;
	struct FST_Gates;
	struct FST_Trading_Progress;
	struct FST_Trade_Progress;
	struct FST_Repairing_Progress;
	struct FST_Production_Result;
	struct FST_Production_Progress;
	struct FST_Production_ProfessionData;
	struct FST_Production_Cost;
	struct FST_Coefficients;
	struct FST_AnimalProduction_Progress;
	struct FST_ReputationLimits;
	struct FST_Name_Float;
	struct FST_SimplifiedBuildingUnlockedStructure;
	struct FST_BuildingsStructure_ForVillageManager;
	struct FST_Text;
	struct FST_KingNickname;
	struct FST_King;
	struct FST_FieldList;
	struct FST_ItemResourceOwner;
	struct FST_SeedCount;
	struct FST_PlantSlot;
	struct FST_FieldCategory;
	struct FST_FoliageTarget;
	struct FST_FoliageTargetsData;
	struct FST_CameraRotationLimits;
	struct FST_MontagesSettings;
	struct FST_MontagesSettingsArray;
	struct FST_VillagesOriginAndRange;
	struct FST_FieldTasksLists;
	struct FST_QuestNPC_Data;
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack;
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails;
	struct FBP_Struct_GroundAnimal_Debug;
	struct FBP_Struct_GroundAnimal_CurrentMontage;
	struct FBP_Struct_GroundAnimal_Animations;
	struct FBP_Struct_GroundAnimal_AnimationDetails;
	struct FBP_Struct_GroundAnimaBehavior_Defend;
	struct FST_SlotAnimIDs;
	struct FST_AnimalList;
	struct FST_SlotSettings;
	struct FST_FishSpawnerArray;
	struct FST_AnimalSpawnerArray;
	struct FST_AnimalGroup;
	struct FST_AnimalCategory;
	struct FST_ItemResourceChance;
	struct FST_SimpleNPC;
	struct FST_Spawner_NPC;
	struct FST_Spawner_Mesh;
	struct FST_Spawner_ItemContainer;
	struct FST_Spawner_Item;
	struct FST_Spawner_Furniture;
	struct FST_Spawner_Decal;
	struct FST_Spawner_ContainerItemPreset;
	struct FST_Spawner_CollectableFurniture;
	struct FST_Spawner_Animal;
	struct FST_Helper_Spawner_Indices;
	struct FST_ItemSourceConditionRandom;
	struct FST_Animal;
	struct FST_CharacterVoiceCues;
	struct FST_Tattoo;
	struct FST_NPCItemColors;
	struct FST_NPCsMeshesDyes;
	struct FST_BuildingList;
	struct FST_FastTravel;
	struct FST_VendorItem;
	struct FST_VendorCategory;
	struct FST_NPCsPresets;
	struct FST_NPCsGenMeshSettings;
	struct FST_NPCsCustomPresets;
	struct FST_NPCMeshesGen;
	struct FST_CharacterModules;
	struct FST_ArrayOfArraysInt;
	struct FST_NeighborhoodBuildingsItems;
	struct FST_CustomNPC;
	struct FST_BuildingCategory;
	struct FST_CharacterName;
	struct FST_FurnitureList;
	struct FST_CharacterList;
	struct FST_HoldableItemInput_Stage;
	struct FST_HoldableItemInput;
	struct FST_FurnitureCategory;
	struct FST_QuestNotification;
	struct FST_Notification;
	struct FST_MiddleNotification;
	struct FST_Knowledge;
	struct FST_Hour;
	struct FST_SowHarvestTime;
	struct FST_ChunkStageData;
	struct FST_Seed;
	struct FST_MasterTalent;
	struct FST_ItemSource;
	struct FST_ItemSeasonalSource;
	struct FST_Chunks;

	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemCache.ST_ItemCache
	// Size 25
	/////////////////////////////////////////////
	struct FST_ItemCache {
		struct FName	ID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Freshness;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Trade_Progress.ST_SAVE_Trade_Progress
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_Trade_Progress {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Progress;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Power;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_ItemCache>	Cache;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SourceOfResources.ST_SAVE_SourceOfResources
	// Size 136
	/////////////////////////////////////////////
	struct FST_SAVE_SourceOfResources {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		TMap<struct FName, int32_t>	Items;		//Offset: 40	Size: 80	Flags: Edit, BlueprintVisible
		TArray<struct FName>	Tags;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Repairing_Progress.ST_SAVE_Repairing_Progress
	// Size 24
	/////////////////////////////////////////////
	struct FST_SAVE_Repairing_Progress {
		float	Progress;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FST_ItemCache>	Cache;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Production_Progress.ST_SAVE_Production_Progress
	// Size 40
	/////////////////////////////////////////////
	struct FST_SAVE_Production_Progress {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Progress;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	PowerOfProduction;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	AcquiredResources;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	USE_HP;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 18	Size: 2
		float	HP;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_ItemCache>	Cache;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Modules.ST_SAVE_Modules
	// Size 88
	/////////////////////////////////////////////
	struct FST_SAVE_Modules {
		bool	FIN;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	HP;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IM;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 9	Size: 3
		int32_t	ID;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BP;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	IP;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FName>	Dec;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ItemStack>	BRes;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ItemStack>	RRes;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ItemStack>	IRes;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_AnimalProduction_Progress.ST_SAVE_AnimalProduction_Progress
	// Size 12
	/////////////////////////////////////////////
	struct FST_SAVE_AnimalProduction_Progress {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Progress;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Event_BuildingMultipliers.ST_Event_BuildingMultipliers
	// Size 4
	/////////////////////////////////////////////
	struct FST_Event_BuildingMultipliers {
		float	TaxMultiplier;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ToolCost.ST_ToolCost
	// Size 20
	/////////////////////////////////////////////
	struct FST_ToolCost {
		float	Current;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Base;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Tools>	ToolType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		struct FName	Name;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestriction_Player.ST_EventRestriction_Player
	// Size 48
	/////////////////////////////////////////////
	struct FST_EventRestriction_Player {
		TArray<struct FST_ItemRestriction>	ItemsRequired;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SkillRestriction>	SkillsRequired;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_BuildingTechnology>	TechnologiesRequired;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestricion_NPCs.ST_EventRestricion_NPCs
	// Size 96
	/////////////////////////////////////////////
	struct FST_EventRestricion_NPCs {
		bool	MoodBelow_;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Mood;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RequiredVillagers;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
		TAssetPtr<class FNone_623>	ExcludeAge;		//Offset: 16	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestricion_Fields.ST_EventRestricion_Fields
	// Size 4
	/////////////////////////////////////////////
	struct FST_EventRestricion_Fields {
		int32_t	NumberRequired;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestricion_Buildings.ST_EventRestricion_Buildings
	// Size 92
	/////////////////////////////////////////////
	struct FST_EventRestricion_Buildings {
		TEnumAsByte<E_EventRestictions_Buildings>	Type;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SpecificBuildigsType_;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		TAssetPtr<class FNone_623>	BuildingsTypes;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
		int32_t	NumberRequired;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestricion_Animals.ST_EventRestricion_Animals
	// Size 88
	/////////////////////////////////////////////
	struct FST_EventRestricion_Animals {
		bool	SpecificAnimalType_;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TAssetPtr<class FNone_623>	AnimalsTypes;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_Village_Resources.ST_EventEffect_Village_Resources
	// Size 56
	/////////////////////////////////////////////
	struct FST_EventEffect_Village_Resources {
		int32_t	MinRangeNumberOfBuildings;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxRangeNumberOfBuildings;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinResourceRange;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxResourceRange;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ResourceRangeIterator;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		TArray<TEnumAsByte<E_ItemCategories>>	ItemCategoriesToRemove;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FDataTableRowHandle>	ItemToRemove;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_Village_Fields.ST_EventEffect_Village_Fields
	// Size 24
	/////////////////////////////////////////////
	struct FST_EventEffect_Village_Fields {
		int32_t	MinRangeNumberOfFields;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxRangeNumberOfFields;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberRangeIterator;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinDamageRange;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxDamageRange;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DamageRangeIterator;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_Village_Buildings.ST_EventEffect_Village_Buildings
	// Size 24
	/////////////////////////////////////////////
	struct FST_EventEffect_Village_Buildings {
		int32_t	MinRangeNumberOfBuildings;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxRangeNumberOfBuildings;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberRangeIterator;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinDamageRange;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxDamageRange;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DamageRangeIterator;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_Village.ST_EventEffect_Village
	// Size 116
	/////////////////////////////////////////////
	struct FST_EventEffect_Village {
		TEnumAsByte<E_EventEffect_VillageType>	VillageEventType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UsePrecent_;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		struct FST_EventEffect_Village_Buildings	BuildingDamage;		//Offset: 4	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_EventEffect_Village_Fields	FieldDamage;		//Offset: 28	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 52	Size: 4
		struct FST_EventEffect_Village_Resources	ResourcesRemove;		//Offset: 56	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		float	TaxChange;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_PlayerParameters.ST_EventEffect_PlayerParameters
	// Size 48
	/////////////////////////////////////////////
	struct FST_EventEffect_PlayerParameters {
		TEnumAsByte<E_EventEffect_PlayerType>	ParameterType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	RangeMin;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RangeMax;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RangeIterator;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SkillRestriction>	SkillType;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemRestriction>	Items;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_NPCParameter.ST_EventEffect_NPCParameter
	// Size 40
	/////////////////////////////////////////////
	struct FST_EventEffect_NPCParameter {
		TEnumAsByte<E_EventEffect_NPCType>	Illness;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UsePrecent_;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		int32_t	NPCCountMinRange;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NPCCountMaxRange;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NPCCountRangeIterator;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	ProductionChange;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoodChange;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SkillRestriction>	ChangeNPCSkill;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventEffect_HusbandryAnimals.ST_EventEffect_HusbandryAnimals
	// Size 16
	/////////////////////////////////////////////
	struct FST_EventEffect_HusbandryAnimals {
		int32_t	BaseNumberOfAnimals;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ChanceForRandomNumberOfAnimals;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RandomRangeMin;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RandomRangeMax;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_VillageRestriction.ST_VillageRestriction
	// Size 172
	/////////////////////////////////////////////
	struct FST_VillageRestriction {
		TEnumAsByte<E_Goal_VillageParametersTypes>	RestrictionType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	ReputationRequired;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<E_Buildings>, int32_t>	Building;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	Technologies;		//Offset: 88	Size: 80	Flags: Edit, BlueprintVisible
		int32_t	Fields;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SkillRestriction.ST_SkillRestriction
	// Size 8
	/////////////////////////////////////////////
	struct FST_SkillRestriction {
		TEnumAsByte<E_Skills>	Skill;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	SkillRequired;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventButtonRestrictions.ST_EventButtonRestrictions
	// Size 208
	/////////////////////////////////////////////
	struct FST_EventButtonRestrictions {
		TEnumAsByte<E_EventButtonRestrictions>	RestrictionType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	StatMustBeEqualOrHigher_;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		struct FST_SkillRestriction	SkillRestriction;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ComparedNumberOfCoins;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_VillageRestriction	VillageParameters;		//Offset: 16	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemRestriction>	Items;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MasterEventEffect.ST_MasterEventEffect
	// Size 264
	/////////////////////////////////////////////
	struct FST_MasterEventEffect {
		float	HappenChance;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	MustHappen;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		struct FText	ChoiceConsequence;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	BoundEffect;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_EventEffectType>	EffectType;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[3];		//Offset: 37	Size: 3
		struct FST_EventEffect_PlayerParameters	PlayerEffect;		//Offset: 40	Size: 48	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_EventEffect_NPCParameter	NPCEffect;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_EventEffect_Village	VillageEffect;		//Offset: 128	Size: 120	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_EventEffect_HusbandryAnimals	HusbandryEffect;		//Offset: 248	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventButtons.ST_EventButtons
	// Size 128
	/////////////////////////////////////////////
	struct FST_EventButtons {
		struct FText	ButtonDescription;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	ChoiceDescription;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	ChoiceConsequences;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		bool	ButtonHasEffect;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 73	Size: 7
		TArray<struct FST_MasterEventEffect>	EventEffects;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_EventButtonRestrictions>	ButtonRestrictions;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		struct FDataTableRowHandle	NextEvent;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventRestrictions.ST_EventRestrictions
	// Size 428
	/////////////////////////////////////////////
	struct FST_EventRestrictions {
		TEnumAsByte<E_EventRestrictions>	RestrictionType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_EventEffectRelevance>	RestrictionRelevance;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		struct FST_EventRestricion_Animals	AnimalsRestriction;		//Offset: 8	Size: 88	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_EventRestricion_NPCs	NPCsRestriction;		//Offset: 96	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_EventRestricion_Buildings	BuildingsRestriction;		//Offset: 192	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_EventRestricion_Fields	FieldsRestriction;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 292	Size: 4
		struct FST_EventRestriction_Player	PlayerRestriction;		//Offset: 296	Size: 48	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		TAssetPtr<class FNone_623>	Season;		//Offset: 344	Size: 80	Flags: Edit, BlueprintVisible
		int32_t	Year;		//Offset: 424	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SeasonEvent.ST_SeasonEvent
	// Size 128
	/////////////////////////////////////////////
	struct FST_SeasonEvent {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		bool	GoodEvent;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_EventDifficulty>	Difficulty;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 90	Size: 2
		int32_t	Weight;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_EventRestrictions>	Restrictions;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FST_EventButtons>	EventButtons;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemRestriction.ST_ItemRestriction
	// Size 20
	/////////////////////////////////////////////
	struct FST_ItemRestriction {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	NumberRequired;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventHistory_Village.ST_EventHistory_Village
	// Size 20
	/////////////////////////////////////////////
	struct FST_EventHistory_Village {
		TEnumAsByte<E_EventEffect_VillageType>	VillageEventType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UsePrecent_;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		int32_t	BuildingsFieldsCount;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ResourceCount;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_ItemCategories>	CategoriesToRemove;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[3];		//Offset: 13	Size: 3
		float	TaxChange;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventHistory_PlayerParameters.ST_EventHistory_PlayerParameters
	// Size 40
	/////////////////////////////////////////////
	struct FST_EventHistory_PlayerParameters {
		TEnumAsByte<E_EventEffect_PlayerType>	ParameterType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Number;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	SkillType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[7];		//Offset: 9	Size: 7
		struct FST_ItemRestriction	Items;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventHistory_NPCParameter.ST_EventHistory_NPCParameter
	// Size 24
	/////////////////////////////////////////////
	struct FST_EventHistory_NPCParameter {
		TEnumAsByte<E_EventEffect_NPCType>	Illness;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	ValueChange;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	ChangeNPCSkill;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	AffectEveryone;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[2];		//Offset: 10	Size: 2
		int32_t	NPCCount;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	NPCsName;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventHistory_Consequences.ST_EventHistory_Consequences
	// Size 92
	/////////////////////////////////////////////
	struct FST_EventHistory_Consequences {
		TEnumAsByte<E_EventEffectType>	EffectType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FST_EventHistory_PlayerParameters	PlayerEffects;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_EventHistory_NPCParameter	NPCEffects;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_EventHistory_Village	VillageEffects;		//Offset: 72	Size: 20	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Time.ST_Time
	// Size 24
	/////////////////////////////////////////////
	struct FST_Time {
		int32_t	Hour;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Minute;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Second;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Day;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Season;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Year;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_EventHistory_Main.ST_EventHistory_Main
	// Size 56
	/////////////////////////////////////////////
	struct FST_EventHistory_Main {
		struct FDataTableRowHandle	EventRowHandle;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FST_Time	TimeOfEvent;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_EventHistory_Consequences>	Consequences;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_FieldPlantSlots.ST_SAVE_FieldPlantSlots
	// Size 64
	/////////////////////////////////////////////
	struct FST_SAVE_FieldPlantSlots {
		TEnumAsByte<E_FieldPlantStages>	PlantState;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[15];		//Offset: 1	Size: 15
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_FieldChunks.ST_SAVE_FieldChunks
	// Size 36
	/////////////////////////////////////////////
	struct FST_SAVE_FieldChunks {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_ChunkStates>	ChunkState;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_FieldPlantStages>	PlantState;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 6	Size: 2
		float	Fertility;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	CurrentSeed;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	TargetSeed;		//Offset: 20	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	RecentlySown;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 29	Size: 3
		int32_t	Seasons;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Foliage.ST_SAVE_Foliage
	// Size 52
	/////////////////////////////////////////////
	struct FST_SAVE_Foliage {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Reset;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DAB;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MD;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 10	Size: 2
		struct FVector	OT_L;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	OT_R;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector	OT_S;		//Offset: 36	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	CT_Z;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Module.ST_Module
	// Size 256
	/////////////////////////////////////////////
	struct FST_Module {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	ImprovedName;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_ModuleType>	ModuleType;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MaterialType>	MaterialType;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UseWarming;		//Offset: 74	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Improveable;		//Offset: 75	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float	BaseLevelOfWarming;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BonusLevelOfWarming;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 84	Size: 4
		TArray<struct FST_ItemResource>	BaseResources;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemResource>	BonusLevelResources;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
		TAssetPtr<class UMaterialInterface>	BaseMaterial;		//Offset: 120	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UMaterialInterface>	BonusMaterial;		//Offset: 160	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 200	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<TAssetPtr<class UMaterialInstance>>	CustomBaseMaterials;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalProduction_Recipe.ST_AnimalProduction_Recipe
	// Size 56
	/////////////////////////////////////////////
	struct FST_AnimalProduction_Recipe {
		struct FDataTableRowHandle	RecipeHandler;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		TArray<float>	BaseProductionPerHour;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	StaticNumberOfAnimals;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	CheckAnimals;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 37	Size: 3
		TArray<struct FST_Production_AnimalSettings>	Animal;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemCrafting.ST_ItemCrafting
	// Size 72
	/////////////////////////////////////////////
	struct FST_ItemCrafting {
		TEnumAsByte<E_CraftingRecipeType>	RecipeType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	TimeToCraft;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SetFullCapacity_;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 9	Size: 7
		TArray<struct FST_ItemResource>	CraftingResources;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Tools_Activity>	ToolNeededForCrafting;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[3];		//Offset: 33	Size: 3
		float	ToolCost;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsLockedByTechnology;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_3[3];		//Offset: 41	Size: 3
		int32_t	TechnologySchemeCost;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_TechnologyTypes>	TechnologyNeededType;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_4[3];		//Offset: 49	Size: 3
		int32_t	TechnologyNeededLevel;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_TechnologyTypes>	TechnologyRewardType;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_5[3];		//Offset: 57	Size: 3
		float	TechnologyRewardValue;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	SkillRewardType;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_6[3];		//Offset: 65	Size: 3
		float	SkillRewardValue;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Profession.ST_Profession
	// Size 72
	/////////////////////////////////////////////
	struct FST_Profession {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Profession>	Type;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	Skill;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 26	Size: 6
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 32	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Item_Crafting_ItemRecipes.ST_Item_Crafting_ItemRecipes
	// Size 184
	/////////////////////////////////////////////
	struct FST_Item_Crafting_ItemRecipes {
		struct FName	RecipeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	RecipeIcon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemResource>	Items;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_ItemCrafting	CraftingRecipe;		//Offset: 112	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_AnimalSettings.ST_Production_AnimalSettings
	// Size 3
	/////////////////////////////////////////////
	struct FST_Production_AnimalSettings {
		TEnumAsByte<E_AnimalType>	AnimalType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Production_AnimalSex>	Sex;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Production_AnimalAge>	Mature;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_Recipe.ST_Production_Recipe
	// Size 64
	/////////////////////////////////////////////
	struct FST_Production_Recipe {
		struct FDataTableRowHandle	RecipeHandler;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	BaseWorkPower;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		TArray<float>	BaseProductionPerHour;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		bool	CheckAnimals;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 41	Size: 7
		TArray<struct FST_Production_AnimalSettings>	Animal;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_WorkersProduction.ST_WorkersProduction
	// Size 16
	/////////////////////////////////////////////
	struct FST_WorkersProduction {
		TEnumAsByte<E_Profession>	Profession;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	SkillType;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		class UDataTable* ProductionSettings;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalsProduction.ST_AnimalsProduction
	// Size 8
	/////////////////////////////////////////////
	struct FST_AnimalsProduction {
		class UDataTable* ProductionSettings;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BuildingTechnology.ST_BuildingTechnology
	// Size 8
	/////////////////////////////////////////////
	struct FST_BuildingTechnology {
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	TechnologyLevel;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BuildingModuleSocket.ST_BuildingModuleSocket
	// Size 68
	/////////////////////////////////////////////
	struct FST_BuildingModuleSocket {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TArray<struct FDataTableRowHandle>	Modules;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	InitialModuleIndex;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Building.ST_Building
	// Size 353
	/////////////////////////////////////////////
	struct FST_Building {
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 64	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Buildings>	BuildingType;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_BuildingCategories>	BuildingCategory;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 90	Size: 2
		float	BaseTax;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_BuildingModuleSocket>	BaseModule;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
		unsigned char uknownData_1[8];		//Offset: 152	Size: 8
		struct FST_BuildingModuleSocket	FrameModule;		//Offset: 160	Size: 80	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_BuildingModuleSocket>	Modules;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	EmptyModulesForTemperature;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[4];		//Offset: 260	Size: 4
		TArray<struct FDataTableRowHandle>	Professions;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible
		float	WorkRadius;		//Offset: 280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Tasks>	WorkplaceTask;		//Offset: 284	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[3];		//Offset: 285	Size: 3
		int32_t	MaxPeople;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxAdditionalPeople;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TotalNumberOfAnimals;		//Offset: 296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Level;		//Offset: 300	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	PlacementOnlySocket;		//Offset: 304	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_4[3];		//Offset: 305	Size: 3
		struct FRotator	StartingGhostRotation;		//Offset: 308	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FST_BuildingTechnology	RequiredTechnology;		//Offset: 320	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_WorkersProduction>	WorkersProductionSettings;		//Offset: 328	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_AnimalsProduction	AnimalsProductionSettings;		//Offset: 344	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_TechnologyTypes>	TechnologyDevelopment;		//Offset: 352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Furniture.ST_Furniture
	// Size 186
	/////////////////////////////////////////////
	struct FST_Furniture {
		struct FName	TechnologySchemeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TEnumAsByte<E_FurnitureCategories>	Category;		//Offset: 136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_FurnitureType>	FurnitureType;		//Offset: 137	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 138	Size: 6
		TArray<struct FST_ItemResource>	Resources;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
		float	MaxPlacementAngle;		//Offset: 160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	PlacementOnLandscape;		//Offset: 164	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	PlacementOnFloor;		//Offset: 165	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	PlacementOnWall;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	AutomaticVerticalRotation;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float	AutomaticVerticalRotationIntensity;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsLockedByTechnology;		//Offset: 172	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 173	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[2];		//Offset: 174	Size: 2
		int32_t	TechnologyLevel;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TechnologyCost;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MaterialType>	MaterialType;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SeasonalRemove;		//Offset: 185	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GeneratedQuestRestrictions_Technology.ST_GeneratedQuestRestrictions_Technology
	// Size 176
	/////////////////////////////////////////////
	struct FST_GeneratedQuestRestrictions_Technology {
		bool	UseOrConditionInsteadOfAnd__Minimal;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	MinimalTechnology;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
		bool	UseOrConditionInsteadOfAnd__Maximal;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 89	Size: 7
		TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	MaximalTechnology;		//Offset: 96	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalForHuntGoal.ST_AnimalForHuntGoal
	// Size 12
	/////////////////////////////////////////////
	struct FST_AnimalForHuntGoal {
		TEnumAsByte<E_AnimalType>	AnimalType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	MaxAmountToHunt;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinAmountToHunt;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GeneratedQuestRestrictions_Ownership.ST_GeneratedQuestRestrictions_Ownership
	// Size 24
	/////////////////////////////////////////////
	struct FST_GeneratedQuestRestrictions_Ownership {
		bool	UseRestriction;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	UseSameAsQuestGiver;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	UseOtherThanQuestGiver;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[5];		//Offset: 3	Size: 5
		TArray<TEnumAsByte<E_Ownership>>	OwnershipToPickFrom;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GeneratedQuestRestrictions_NPC.ST_GeneratedQuestRestrictions_NPC
	// Size 56
	/////////////////////////////////////////////
	struct FST_GeneratedQuestRestrictions_NPC {
		bool	IsRestrictionRequired;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<TEnumAsByte<E_Sex>>	NPCRequiredSex;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_Profession>>	NPCRequiredProfession;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_CharacterType>>	NPCRequiredAge;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GeneratedQuest_TalkGoalNPCRestrictions.ST_GeneratedQuest_TalkGoalNPCRestrictions
	// Size 256
	/////////////////////////////////////////////
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions {
		bool	TalkToQuestGiver_;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	RelationToQuestGiver;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		struct FST_GeneratedQuestRestrictions_Ownership	OwnershipRestriction;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCRestrictions;		//Offset: 32	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCPartnerRestrictions;		//Offset: 88	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCChildRestrictions;		//Offset: 144	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCParentRestrictions;		//Offset: 200	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_WaitForTimes.ST_Goal_WaitForTimes
	// Size 60
	/////////////////////////////////////////////
	struct FST_Goal_WaitForTimes {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FST_Time	TimeWhenGoalWasStarted;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	WaitTillNextMorning_;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WaitTillNextNoon_;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WaitTillNextEvening_;		//Offset: 50	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WaitTillNextDay_;		//Offset: 51	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WaitTillNextSeason_;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WaitTillNextSpecificSeason_;		//Offset: 53	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_Seasons>	SpecificSeason;		//Offset: 54	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	WaitTillSpecificYear_;		//Offset: 55	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t	SpecificYear;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_VillageParameters.ST_Goal_VillageParameters
	// Size 56
	/////////////////////////////////////////////
	struct FST_Goal_VillageParameters {
		struct FText	Goal;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Goal_VillageParametersTypes>	ParameterType;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		int32_t	NumberNeededToComplete;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ActualNumber;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UseBuildingTypes_;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 37	Size: 3
		TArray<TEnumAsByte<E_Buildings>>	BuildingType;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GenerateItemsForQuest.ST_GenerateItemsForQuest
	// Size 40
	/////////////////////////////////////////////
	struct FST_GenerateItemsForQuest {
		int32_t	HowMuchItemsToPick;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FST_Quest_ItemsToPickFrom>	ItemsToPickFrom;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_Quest_PickedItemsFromGenerator>	PickedItems;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Talk.ST_Goal_Talk
	// Size 428
	/////////////////////////////////////////////
	struct FST_Goal_Talk {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FString	NPCID;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FText	NPCName;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UDialogue>	Dialogue;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		bool	DeliverItemsToCompleteGoal_;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MustDeliverAllItemsAtOnce_;		//Offset: 105	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	UseItemsFromStoragesAlso_;		//Offset: 106	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[5];		//Offset: 107	Size: 5
		struct FST_GenerateItemsForQuest	ItemsToDeliver;		//Offset: 112	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuest_TalkGoalNPCRestrictions	PersonToTalkToRestrictions;		//Offset: 152	Size: 256	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		bool	UseAreaMapMarker;		//Offset: 408	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 409	Size: 3
		struct FVector	MapMarkerLocation;		//Offset: 412	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AreaMapMarkerSize;		//Offset: 424	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_SpendTalentPoints.ST_Goal_SpendTalentPoints
	// Size 8
	/////////////////////////////////////////////
	struct FST_Goal_SpendTalentPoints {
		int32_t	NumberNeededToBeSpent;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberAlreadySpent;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_RemoveFoliage.ST_Goal_RemoveFoliage
	// Size 49
	/////////////////////////////////////////////
	struct FST_Goal_RemoveFoliage {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NumberToRemove;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberRemoved;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<TEnumAsByte<E_Resources>>	ResourceTypes;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_FoliageSpecies>	SpecificFoliageClass;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Population.ST_Goal_Population
	// Size 33
	/////////////////////////////////////////////
	struct FST_Goal_Population {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NeededPopulation;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ActualPopulation;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	CheckAnimals_;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_PledgeTask.ST_Goal_PledgeTask
	// Size 32
	/////////////////////////////////////////////
	struct FST_Goal_PledgeTask {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NeededNumberOfNPCs;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	CurrentNumberOfNPCs;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Hunt.ST_Goal_Hunt
	// Size 72
	/////////////////////////////////////////////
	struct FST_Goal_Hunt {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TArray<struct FST_AnimalForHuntGoal>	AnimalsToPickFrom;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	AmountOfTypesToPick;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
		TArray<TEnumAsByte<E_AnimalType>>	TypeOfAnimal;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	AmountToHunt;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	AmountHunted;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_GetRidOf.ST_Goal_GetRidOf
	// Size 32
	/////////////////////////////////////////////
	struct FST_Goal_GetRidOf {
		struct FText	Goal;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NumberToGetRidOf;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	GotRidOf;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Flirt.ST_Goal_Flirt
	// Size 36
	/////////////////////////////////////////////
	struct FST_Goal_Flirt {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NeededAffection;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberOfWomenToFlirt;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberFlirted;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Find.ST_Goal_Find
	// Size 65
	/////////////////////////////////////////////
	struct FST_Goal_Find {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	WhatToFind;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FVector	Location;		//Offset: 48	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RadiusToComplete;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	ShowOnCompass;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Family.ST_Goal_Family
	// Size 36
	/////////////////////////////////////////////
	struct FST_Goal_Family {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		bool	GoalForWife_;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	DoesPlayerHaveWife;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 26	Size: 2
		int32_t	NumberOfChildrenNeeded;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ActualNumberOfChildren;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Custom.ST_Goal_Custom
	// Size 64
	/////////////////////////////////////////////
	struct FST_Goal_Custom {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	CustomGoal;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_CompleteQuests.ST_Goal_CompleteQuests
	// Size 33
	/////////////////////////////////////////////
	struct FST_Goal_CompleteQuests {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	NumberToComplete;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberCompleted;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	MustBeCompletedDuringOneSeason_;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Build.ST_Goal_Build
	// Size 92
	/////////////////////////////////////////////
	struct FST_Goal_Build {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Goal_BuildTypes>	BuildType;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 25	Size: 7
		struct FDataTableRowHandle	BuildingObjectToCheck;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FDataTableRowHandle	FurnitureObjectToCheck;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FDataTableRowHandle	FenceObjectToCheck;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		bool	MustBeConstructed_;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 81	Size: 3
		int32_t	NumberToConstruct;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberConstructed;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_ArcheryContest.ST_Goal_ArcheryContest
	// Size 24
	/////////////////////////////////////////////
	struct FST_Goal_ArcheryContest {
		int32_t	NumberOfProjectilesToShoot;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberOfProjectilesShot;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	SpecificArcheryTarget_Tag;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	PointsToAchieve;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	PointsAchieved;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_Acquire.ST_Goal_Acquire
	// Size 72
	/////////////////////////////////////////////
	struct FST_Goal_Acquire {
		struct FText	GoalText;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	WhoWhereTodeliver;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FDataTableRowHandle	WhatToDeliver;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	AmountToDeliver;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	AmountDelivered;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestObjective_OnFailed.ST_QuestObjective_OnFailed
	// Size 72
	/////////////////////////////////////////////
	struct FST_QuestObjective_OnFailed {
		TArray<struct FST_MasterGoals>	ObjectiveGoals;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		bool	CompletesQuest_;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
		TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveStart;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		bool	StartUpdatesDescription_;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 41	Size: 7
		struct FText	Description;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MasterGoals.ST_MasterGoals
	// Size 1300
	/////////////////////////////////////////////
	struct FST_MasterGoals {
		bool	GoalCompletesObjective;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_GoalTypes>	Type;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		struct FST_Goal_Custom	CustomGoal;		//Offset: 8	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Hunt	HuntGoal;		//Offset: 72	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Acquire	DeliverGoal;		//Offset: 144	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Talk	TalkGoal;		//Offset: 216	Size: 432	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Find	FindGoal;		//Offset: 648	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Build	BuildGoal;		//Offset: 720	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_PledgeTask	PledgeTaskGoal;		//Offset: 816	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_GetRidOf	GetRidOfGoal;		//Offset: 848	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_VillageParameters	VillageParameters;		//Offset: 880	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_SpendTalentPoints	SpendTalentPoints;		//Offset: 936	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_Goal_Family	FamilyGoal;		//Offset: 944	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_Population	PopulationGoal;		//Offset: 984	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_WaitForTimes	WaitForTimeGoal;		//Offset: 1024	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_ArcheryContest	ArcheryContestGoal;		//Offset: 1088	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_Goal_Flirt	FlirtGoal;		//Offset: 1112	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_CompleteQuests	CompleteQuestsGoal;		//Offset: 1152	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Goal_RemoveFoliage	RemoveFoliageGoal;		//Offset: 1192	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TEnumAsByte<E_GoalState>	GoalCompleted;		//Offset: 1248	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	GoalLimitedByTime_;		//Offset: 1249	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[2];		//Offset: 1250	Size: 2
		struct FST_Time	BaseTimeForGoal;		//Offset: 1252	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_Time	TimeForGoal;		//Offset: 1276	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Goal_ChangeDialogue.ST_Goal_ChangeDialogue
	// Size 56
	/////////////////////////////////////////////
	struct FST_Goal_ChangeDialogue {
		struct FString	NPCID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TAssetPtr<class UDialogue>	Dialogue;		//Offset: 16	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Quest_PickedItemsFromGenerator.ST_Quest_PickedItemsFromGenerator
	// Size 24
	/////////////////////////////////////////////
	struct FST_Quest_PickedItemsFromGenerator {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	AmountToDeliver;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	AmountDelivered;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Quest_ItemsToPickFrom.ST_Quest_ItemsToPickFrom
	// Size 24
	/////////////////////////////////////////////
	struct FST_Quest_ItemsToPickFrom {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MaxAmountToDeliver_ForGenerating;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinAmountToDeliver_ForGenerating;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestReward.ST_QuestReward
	// Size 232
	/////////////////////////////////////////////
	struct FST_QuestReward {
		struct FST_GenerateItemsForQuest	Items;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	Liking;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Affection;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DynastyReputation;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 52	Size: 4
		TMap<TEnumAsByte<E_Skills>, int32_t>	SkillExperience;		//Offset: 56	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	TechnologyPoints;		//Offset: 136	Size: 80	Flags: Edit, BlueprintVisible
		struct FDataTableRowHandle	DevelopmentStage;		//Offset: 216	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestObjectives.ST_QuestObjectives
	// Size 216
	/////////////////////////////////////////////
	struct FST_QuestObjectives {
		TArray<struct FST_MasterGoals>	ObjectiveGoals;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		bool	CompletesQuest_;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
		TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveStart;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveEnd;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		bool	StartUpdatesDescription_;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 57	Size: 7
		struct FText	Description;		//Offset: 64	Size: 24	Flags: Edit, BlueprintVisible
		bool	EndUpdatesDescription_;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[7];		//Offset: 89	Size: 7
		struct FText	DescriptionOnEnd;		//Offset: 96	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_ObjectiveState>	ObjectiveCompleted;		//Offset: 120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	ChangeObjectiveOnFailed;		//Offset: 121	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_3[6];		//Offset: 122	Size: 6
		struct FST_QuestObjective_OnFailed	ObjectiveOnFailed;		//Offset: 128	Size: 72	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnFollow;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestFailPenalty.ST_QuestFailPenalty
	// Size 8
	/////////////////////////////////////////////
	struct FST_QuestFailPenalty {
		int32_t	DynastyReputation;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ChanceForKingChange;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GenerateQuestReward.ST_GenerateQuestReward
	// Size 392
	/////////////////////////////////////////////
	struct FST_GenerateQuestReward {
		struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestictions;		//Offset: 0	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GenerateItemsForQuest	Items;		//Offset: 176	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	Liking;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Affection;		//Offset: 220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DynastyReputation;		//Offset: 224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 228	Size: 4
		TMap<TEnumAsByte<E_Skills>, int32_t>	SkillExperience;		//Offset: 232	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	TechnologyPoints;		//Offset: 312	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GenerateObjectivesForQuest.ST_GenerateObjectivesForQuest
	// Size 216
	/////////////////////////////////////////////
	struct FST_GenerateObjectivesForQuest {
		struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestictions;		//Offset: 0	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<int32_t>	RequiredSeason;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	WhosePersonalityShouldBeChecked;		//Offset: 192	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_NPCPersonality>	RequiredNPCPersonality;		//Offset: 193	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 194	Size: 6
		TArray<struct FST_QuestObjectives>	Objectives;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GeneratedQuestRestrictions.ST_GeneratedQuestRestrictions
	// Size 456
	/////////////////////////////////////////////
	struct FST_GeneratedQuestRestrictions {
		TArray<int32_t>	RequiredSeason;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	RelationToPlayer;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
		struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestriction;		//Offset: 24	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	MinimalReputation;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaximalReputation;		//Offset: 204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_Ownership	OwnershipRestriction;		//Offset: 208	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCRestrictions;		//Offset: 232	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCPartnerRestrictions;		//Offset: 288	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCChildRestrictions;		//Offset: 344	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_GeneratedQuestRestrictions_NPC	NPCParentRestrictions;		//Offset: 400	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ChallengeRestrictions.ST_ChallengeRestrictions
	// Size 64
	/////////////////////////////////////////////
	struct FST_ChallengeRestrictions {
		TArray<int32_t>	RequiredSeason;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_GeneratedQuestRestrictions_Technology>	TechnologyRestriction;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	MinNumberOfMaleNPCs;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinNumberOfFemaleNPCs;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_KingdomStatus>	RequiredKingdomStatus;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 41	Size: 7
		TArray<struct FDataTableRowHandle>	KingTypesRestriction;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_StringTable_IDKey_Pair.ST_StringTable_IDKey_Pair
	// Size 24
	/////////////////////////////////////////////
	struct FST_StringTable_IDKey_Pair {
		struct FName	StringTableID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FString	RowKey;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestInfos.ST_QuestInfos
	// Size 976
	/////////////////////////////////////////////
	struct FST_QuestInfos {
		struct FName	QuestID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FText	Name;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_QuestCategories>	Category;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		struct FText	Description;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
		struct FST_GeneratedQuestRestrictions	RestrictionsForGeneratedQuests;		//Offset: 64	Size: 456	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ChallengeRestrictions	RestrictionsForChallenges;		//Offset: 520	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_GenerateQuestReward>	GenerateQuestReward;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_QuestReward	CompletionReward;		//Offset: 600	Size: 232	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_GenerateObjectivesForQuest>	GenerateObjectivesForQuest;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FST_QuestObjectives>	QuestObjectives;		//Offset: 848	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		TEnumAsByte<E_QuestState>	State;		//Offset: 864	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[7];		//Offset: 865	Size: 7
		struct FString	QuestGiverNPCID;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FText	QuestGiver;		//Offset: 888	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	Duration;		//Offset: 912	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SeasonalCheckForDuration;		//Offset: 916	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 917	Size: 3
		int32_t	QuestGiverMaxAge;		//Offset: 920	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[4];		//Offset: 924	Size: 4
		TArray<struct FDataTableRowHandle>	NextQuests;		//Offset: 928	Size: 16	Flags: Edit, BlueprintVisible
		bool	WasQuestRewardGiven;		//Offset: 944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_4[3];		//Offset: 945	Size: 3
		struct FST_QuestFailPenalty	QuestFailPenalty;		//Offset: 948	Size: 8	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_5[4];		//Offset: 956	Size: 4
		TArray<struct FST_StringTable_IDKey_Pair>	DescriptionStringTableKeys;		//Offset: 960	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ColorTable.ST_ColorTable
	// Size 16
	/////////////////////////////////////////////
	struct FST_ColorTable {
		TArray<struct FLinearColor>	Color;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemResource.ST_ItemResource
	// Size 20
	/////////////////////////////////////////////
	struct FST_ItemResource {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	Count;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_VendorSettings.ST_VendorSettings
	// Size 32
	/////////////////////////////////////////////
	struct FST_VendorSettings {
		TEnumAsByte<E_Vendor>	VendorType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	MinCount;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxCount;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
		TArray<bool>	Season;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemTool.ST_ItemTool
	// Size 48
	/////////////////////////////////////////////
	struct FST_ItemTool {
		TEnumAsByte<E_Tools>	ToolType_Animation;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Tools_Activity>	ToolType_Activity;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		TAssetPtr<class UClass>	HoldableClass;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemStats.ST_ItemStats
	// Size 106
	/////////////////////////////////////////////
	struct FST_ItemStats {
		float	Weight;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Water;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Health;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Stamina;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Wood;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Price;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D	DamageRange;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Extraction;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Poison;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Alcohol;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	EffectDurationTime;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HealthPerSecond;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AdditionalMaxHP;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	StaminaMultiplier;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	FoodMultiplier;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	WaterMultiplier;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	TurnOffHarmfulPoison;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 81	Size: 3
		float	PoisonPerSecond;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	NightVision;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 89	Size: 3
		int32_t	TemperatureTolerance;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SkillsReset;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 97	Size: 3
		float	DamageMultiplier;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	AnimalRepel;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_WeaponDamageType>	WeaponDamageType;		//Offset: 105	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemSettings.ST_ItemSettings
	// Size 360
	/////////////////////////////////////////////
	struct FST_ItemSettings {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	ShortDescription;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_ItemCategories>	Category;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_ItemSubCategories>	SubCategory;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Droppable;		//Offset: 74	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[5];		//Offset: 75	Size: 5
		class UTexture2D* Icon;		//Offset: 80	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	WorldMesh;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		bool	UseCondition;		//Offset: 128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 129	Size: 7
		TArray<struct FST_ItemResource>	BrokenItems;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
		bool	UseFreshness;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 153	Size: 3
		float	FreshnessPerSeason;		//Offset: 156	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	ExpiredItems;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
		bool	UseCapacity;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_3[3];		//Offset: 177	Size: 3
		int32_t	Capacity;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle	ExhaustedItem;		//Offset: 184	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		bool	SeasonalRemove_Player;		//Offset: 200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	SeasonalRemove;		//Offset: 201	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_4[6];		//Offset: 202	Size: 6
		TAssetPtr<class UStaticMesh>	AdditionalWorldMesh;		//Offset: 208	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TEnumAsByte<E_Production_StoragePlaces>	Storage;		//Offset: 248	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_ShopType>	ShopType;		//Offset: 249	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_5[2];		//Offset: 250	Size: 2
		float	RenderDistance;		//Offset: 252	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Quest;		//Offset: 256	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_6[7];		//Offset: 257	Size: 7
		struct FDataTableRowHandle	QuestReference;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		TAssetPtr<class USoundCue>	Consume_Sound;		//Offset: 280	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USoundCue>	PickUpSound;		//Offset: 320	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemPhysics.ST_ItemPhysics
	// Size 24
	/////////////////////////////////////////////
	struct FST_ItemPhysics {
		bool	SimulatePhysics;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Mass;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	LinearDamping;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AnguralDamping;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IgnoreIK;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 17	Size: 3
		float	AquaticBoyuancyForceScale;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemOutfit.ST_ItemOutfit
	// Size 240
	/////////////////////////////////////////////
	struct FST_ItemOutfit {
		TEnumAsByte<E_EquipmentCategories>	EquipmentSlot;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TAssetPtr<class USkeletalMesh>	EquippedMesh;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	AlternativeEquippedMesh;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	EquippedStaticMesh;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		float	HeatProtection;		//Offset: 128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	ColdProtection;		//Offset: 132	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_ColorTable>	Dyes;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
		float	WeightCapacity;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 156	Size: 4
		TAssetPtr<class FNone_623>	EquipParams;		//Offset: 160	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemAmmo.ST_ItemAmmo
	// Size 48
	/////////////////////////////////////////////
	struct FST_ItemAmmo {
		TEnumAsByte<E_Ammo>	ToolType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TAssetPtr<class UClass>	ProjectileClass;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemDetails.ST_ItemDetails
	// Size 848
	/////////////////////////////////////////////
	struct FST_ItemDetails {
		struct FST_ItemSettings	Settings;		//Offset: 0	Size: 360	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemStats	Stats;		//Offset: 360	Size: 108	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 468	Size: 4
		struct FST_ItemTool	ToolSettings;		//Offset: 472	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemOutfit	OutfitSettings;		//Offset: 520	Size: 240	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemAmmo	AmmoSettings;		//Offset: 760	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemPhysics	Physics;		//Offset: 808	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_VendorSettings>	VendorSettings;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DevelopmentStage.ST_DevelopmentStage
	// Size 32
	/////////////////////////////////////////////
	struct FST_DevelopmentStage {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_DevelopmentStages>	Type;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		int32_t	BuildingLimit;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_NPCDialogue.ST_SAVE_NPCDialogue
	// Size 120
	/////////////////////////////////////////////
	struct FST_SAVE_NPCDialogue {
		TArray<struct FName>	DialAffection;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		bool	UsedAffection;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WasSpokenTo;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 18	Size: 2
		float	TalkChAffection;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	GiftGiven;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 25	Size: 3
		int32_t	DecRelation;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Smalltalk;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WifeDayText;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	FirstDial;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[5];		//Offset: 35	Size: 5
		TMap<unsigned char, bool>	FirstConvers;		//Offset: 40	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_NPC_Skillss.ST_SAVE_NPC_Skillss
	// Size 48
	/////////////////////////////////////////////
	struct FST_SAVE_NPC_Skillss {
		int32_t	E_L;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	E_P;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	H_L;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	H_P;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	F_L;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	F_P;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D_L;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	D_P;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	S_L;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	S_P;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	C_L;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	C_P;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_NPC_Blackboards.ST_SAVE_NPC_Blackboards
	// Size 39
	/////////////////////////////////////////////
	struct FST_SAVE_NPC_Blackboards {
		bool	Follow;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	QuestBlocking;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	RotPlayer;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[1];		//Offset: 3	Size: 1
		struct FVector	TargetLoc;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	LA_Targ;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	D_Cycle;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	NPCBeh;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	C_NPCBeh;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	WorkTask;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Task;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	C_Task;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	TaskState;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	ResState;		//Offset: 35	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	C_ResState;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Talk;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Seeds;		//Offset: 38	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestAnimation.ST_QuestAnimation
	// Size 4
	/////////////////////////////////////////////
	struct FST_QuestAnimation {
		bool	IsQuest;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_IdleStates>	IdleState;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	PoseID;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_AfterIdlePose>	AfterIdlePose;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MatchingNPC.ST_MatchingNPC
	// Size 20
	/////////////////////////////////////////////
	struct FST_MatchingNPC {
		struct FString	NPC_ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float	Affection;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Talents.ST_SAVE_Talents
	// Size 96
	/////////////////////////////////////////////
	struct FST_SAVE_Talents {
		TArray<int32_t>	ExtractionTalents;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	HuntingTalents;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	FarmingTalents;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	DiplomacyTalents;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	SurvivalTalents;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	CraftingTalents;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Skills.ST_SAVE_Skills
	// Size 72
	/////////////////////////////////////////////
	struct FST_SAVE_Skills {
		int32_t	E_L;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	E_P;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	E_Pt;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	H_L;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	H_P;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	H_Pt;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	F_L;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	F_P;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	F_Pt;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D_L;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	D_P;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D_Pt;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	S_L;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	S_P;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	S_Pt;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	C_L;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	C_P;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	C_Pt;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_PotionStatuses.ST_SAVE_PotionStatuses
	// Size 128
	/////////////////////////////////////////////
	struct FST_SAVE_PotionStatuses {
		float	MoreDamage_MaxTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreDamage_Time;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreDamage_Multiplier;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NightVision_MaxTime;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NightVision_Time;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreWeight_MaxTime;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreWeight_Time;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreWeight_Multiplier;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AnimalRepel_MaxTime;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AnimalRepel_Time;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BetterTemperatureTolerance_MaxTime;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BetterTemperatureTolerance_Time;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BetterTemperatureTolerance_Amount;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerWaterDrop_MaxTime;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerWaterDrop_Time;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerWaterDrop_Multiplier;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerHungerDrop_MaxTime;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerHungerDrop_Time;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerHungerDrop_Multiplier;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerStaminaDrop_MaxTime;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerStaminaDrop_Time;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SlowerStaminaDrop_Multiplier;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeHeal_MaxTime;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeHeal_Time;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeHeal_IntensityPerSecond;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeHeal_TimeSinceLastHeal;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreHP_MaxTime;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreHP_Time;		//Offset: 108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoreHP_Amount;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeUnpoison_MaxTime;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeUnpoison_Time;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TimeUnpoison_IntensityPerSecond;		//Offset: 124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_LifeStats.ST_SAVE_LifeStats
	// Size 40
	/////////////////////////////////////////////
	struct FST_SAVE_LifeStats {
		float	Health;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Stamina;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Water;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Somnolence;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Temp;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Dirtness;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Poison;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Poisoned;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 33	Size: 3
		float	Alcohol;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Inventory.ST_SAVE_Inventory
	// Size 41
	/////////////////////////////////////////////
	struct FST_SAVE_Inventory {
		struct FName	ID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Index;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsAssigned;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		bool	IsEquipped;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 18	Size: 2
		int32_t	QuickSlotID;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Condition;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Freshness;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Event_CharacterMultipliers.ST_Event_CharacterMultipliers
	// Size 28
	/////////////////////////////////////////////
	struct FST_Event_CharacterMultipliers {
		float	WaterDecrease;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	FoodDecrease;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	StaminaDecrease;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	WorkingSpeed;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	FoodValue;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	WoodValue;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Mood;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_ItemStack.ST_SAVE_ItemStack
	// Size 12
	/////////////////////////////////////////////
	struct FST_SAVE_ItemStack {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SplineModules.ST_SAVE_SplineModules
	// Size 72
	/////////////////////////////////////////////
	struct FST_SAVE_SplineModules {
		bool	FIN;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	HP;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IM;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	REM;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[2];		//Offset: 10	Size: 2
		int32_t	ID;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	BP;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	IP;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_ItemStack>	BRes;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ItemStack>	RRes;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ItemStack>	IRes;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Module_Data.ST_SAVE_Module_Data
	// Size 64
	/////////////////////////////////////////////
	struct FST_SAVE_Module_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FString>	BRes;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	RRes;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	IRes;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_TechnologyScheme.ST_SAVE_TechnologyScheme
	// Size 9
	/////////////////////////////////////////////
	struct FST_SAVE_TechnologyScheme {
		struct FName	ID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Locked;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_KingDetails.ST_KingDetails
	// Size 48
	/////////////////////////////////////////////
	struct FST_KingDetails {
		struct FName	King;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FText	Number;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
		struct FName	Nickname;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Age;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Reputation;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemInventorys.ST_ItemInventorys
	// Size 45
	/////////////////////////////////////////////
	struct FST_ItemInventorys {
		struct FName	ID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Index;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsAssignedToQuickSlot;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsEquipped;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 18	Size: 2
		int32_t	QuickSlotIndex;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Condition;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Freshness;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxHP;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCSeasonClothing.ST_NPCSeasonClothing
	// Size 80
	/////////////////////////////////////////////
	struct FST_NPCSeasonClothing {
		TMap<TEnumAsByte<E_Seasons>, struct FName>	SeasonClothing;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Spawner_NPC.ST_SAVE_Spawner_NPC
	// Size 272
	/////////////////////////////////////////////
	struct FST_SAVE_Spawner_NPC {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	VoiceID;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Age;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Loc;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char	Wealth;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 45	Size: 3
		TArray<struct FST_SAVE_SimpleInventory>	Inventory;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		struct FName	PresetID;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<E_BodyParts>, int32_t>	BPIndex;		//Offset: 72	Size: 80	Flags: Edit, BlueprintVisible
		struct FLinearColor	SkinTone;		//Offset: 152	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	HairColour;		//Offset: 168	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HeadID;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HairID;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs;		//Offset: 192	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Spawner_Item.ST_SAVE_Spawner_Item
	// Size 8
	/////////////////////////////////////////////
	struct FST_SAVE_Spawner_Item {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Cnd;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Spawner_CollectableFurniture.ST_SAVE_Spawner_CollectableFurniture
	// Size 5
	/////////////////////////////////////////////
	struct FST_SAVE_Spawner_CollectableFurniture {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Empty;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Spawner_Animal.ST_SAVE_Spawner_Animal
	// Size 40
	/////////////////////////////////////////////
	struct FST_SAVE_Spawner_Animal {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Loc;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Poisoned;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 33	Size: 3
		float	Poison;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_InventoryItemsArray.ST_InventoryItemsArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_InventoryItemsArray {
		TArray<struct FST_ItemInventorys>	Items;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_POI_History.ST_SAVE_POI_History
	// Size 24
	/////////////////////////////////////////////
	struct FST_SAVE_POI_History {
		struct FGuid	ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Seasons;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Inactive;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_POI.ST_SAVE_POI
	// Size 184
	/////////////////////////////////////////////
	struct FST_SAVE_POI {
		struct FGuid	ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Seasons;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Inactivity;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Spawner_NPC>	NPCs;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Spawner_Animal>	Animals;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Spawner_Item>	Items;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
		TMap<int32_t, struct FST_InventoryItemsArray>	ItemsChest;		//Offset: 72	Size: 80	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Spawner_CollectableFurniture>	CollectibleFrt;		//Offset: 152	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	Custom;		//Offset: 168	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FoliageDepletedData.ST_FoliageDepletedData
	// Size 52
	/////////////////////////////////////////////
	struct FST_FoliageDepletedData {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t	NumberOfSeasonToReset;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Kingdom.ST_SAVE_Kingdom
	// Size 108
	/////////////////////////////////////////////
	struct FST_SAVE_Kingdom {
		struct FST_KingDetails	King;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_KingDetails>	HistoryOfKings;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_ChallengeState>	ChallengeProgress;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 65	Size: 3
		float	ChallengeHappenChance;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FName>	LastChallenges;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
		bool	WasReputationChanged;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_KingdomStatus>	KingdomStatus;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[2];		//Offset: 90	Size: 2
		float	KingdomStatusChangeChance;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	ChanceToKillKing;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TaxMod;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MoodMod;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Traps.ST_SAVE_Traps
	// Size 112
	/////////////////////////////////////////////
	struct FST_SAVE_Traps {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 33	Size: 3
		struct FST_Time	ActivationTime;		//Offset: 36	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_Time	CatchTime;		//Offset: 60	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Active;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Caught;		//Offset: 85	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[2];		//Offset: 86	Size: 2
		int32_t	HP;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[4];		//Offset: 92	Size: 4
		TArray<struct FName>	Tags;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_TechnologyData.ST_SAVE_TechnologyData
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_TechnologyData {
		struct FString	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FString>	SchemesData;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Technology.ST_SAVE_Technology
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_Technology {
		float	Building;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Survival;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Farming;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Crafting;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_TechnologyScheme>	Schemes;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Strings.ST_SAVE_Strings
	// Size 16
	/////////////////////////////////////////////
	struct FST_SAVE_Strings {
		TArray<struct FString>	Strings;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SplineStructures.ST_SAVE_SplineStructures
	// Size 80
	/////////////////////////////////////////////
	struct FST_SAVE_SplineStructures {
		struct FVector	Location1;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Location2;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rotation;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 36	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Ownership;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 45	Size: 3
		TArray<struct FST_SAVE_SplineModules>	Modules;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Module_Data>	ModulesData;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SplineStructure_Data.ST_SAVE_SplineStructure_Data
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_SplineStructure_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Module_Data>	ModulesData;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SpawnerFish_Data.ST_SAVE_SpawnerFish_Data
	// Size 16
	/////////////////////////////////////////////
	struct FST_SAVE_SpawnerFish_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SpawnerAnimal_Data.ST_SAVE_SpawnerAnimal_Data
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_SpawnerAnimal_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FString>	Animals_Data;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SpawnedItemFoliage.ST_SAVE_SpawnedItemFoliage
	// Size 65
	/////////////////////////////////////////////
	struct FST_SAVE_SpawnedItemFoliage {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		unsigned char	Owner;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SpawnedFoliage.ST_SAVE_SpawnedFoliage
	// Size 64
	/////////////////////////////////////////////
	struct FST_SAVE_SpawnedFoliage {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	FirstStage;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 9	Size: 7
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_SimpleInventory.ST_SAVE_SimpleInventory
	// Size 33
	/////////////////////////////////////////////
	struct FST_SAVE_SimpleInventory {
		struct FName	ID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Index;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Condition;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Freshness;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Roads.ST_SAVE_Roads
	// Size 45
	/////////////////////////////////////////////
	struct FST_SAVE_Roads {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Location1;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Location2;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rotation;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char	Ownership;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Road_Data.ST_SAVE_Road_Data
	// Size 16
	/////////////////////////////////////////////
	struct FST_SAVE_Road_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_ResourceDeposits.ST_SAVE_ResourceDeposits
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_ResourceDeposits {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float	Condition;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	SeasonsToReset;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_RefillableContainers.ST_SAVE_RefillableContainers
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_RefillableContainers {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 33	Size: 3
		int32_t	Capacity;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FName>	Tags;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Player.ST_SAVE_Player
	// Size 688
	/////////////////////////////////////////////
	struct FST_SAVE_Player {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FText	Name;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, SaveGame
		TEnumAsByte<E_Sex>	Sex;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 49	Size: 3
		float	Age;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_SAVE_LifeStats	Stats;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_SAVE_Skills	Skills;		//Offset: 96	Size: 72	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_SAVE_Talents	Talents;		//Offset: 168	Size: 96	Flags: Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash
		struct FST_SAVE_PotionStatuses	PotionStatuses;		//Offset: 264	Size: 128	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Inventory>	EQ;		//Offset: 392	Size: 16	Flags: Edit, BlueprintVisible, SaveGame
		int32_t	LastSelectedQuickslot;		//Offset: 408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 412	Size: 4
		struct FString	MotherID;		//Offset: 416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
		struct FString	FatherID;		//Offset: 432	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
		struct FString	PartnerID;		//Offset: 448	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
		TArray<struct FString>	ChildrenID;		//Offset: 464	Size: 16	Flags: Edit, BlueprintVisible, SaveGame
		struct FString	HouseID;		//Offset: 480	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
		unsigned char	BuildMode;		//Offset: 496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	BagMode;		//Offset: 497	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[6];		//Offset: 498	Size: 6
		TMap<TEnumAsByte<E_Tutorials>, bool>	Tutorials;		//Offset: 504	Size: 80	Flags: Edit, BlueprintVisible
		struct FST_Event_CharacterMultipliers	Events;		//Offset: 584	Size: 28	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NG;		//Offset: 612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ABonus;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	HairColor;		//Offset: 620	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HairID;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	SkinTone;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HeadID;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_ViewMode>	ViewMode;		//Offset: 660	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[3];		//Offset: 661	Size: 3
		float	CameraDistance;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_4[4];		//Offset: 668	Size: 4
		TArray<struct FString>	EQ_Data;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_NPC_Building.ST_SAVE_NPC_Building
	// Size 32
	/////////////////////////////////////////////
	struct FST_SAVE_NPC_Building {
		struct FString	Building_ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Containers>	Containers;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestInfo_Save.ST_QuestInfo_Save
	// Size 352
	/////////////////////////////////////////////
	struct FST_QuestInfo_Save {
		struct FName	QuestID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_Quest_PickedItemsFromGenerator>	PickedItems;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_QuestReward	QuestReward;		//Offset: 24	Size: 232	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_QuestObjectives>	QuestObjectives;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
		TEnumAsByte<E_QuestState>	State;		//Offset: 272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 273	Size: 7
		struct FString	QuestGiverNPCID;		//Offset: 280	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FText	QuestGiver;		//Offset: 296	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	Duration;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	QuestGiverMaxAge;		//Offset: 324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	WasQuestRewardGiven;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 329	Size: 7
		TArray<struct FST_StringTable_IDKey_Pair>	DescriptionStringTableKeys;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_NPC.ST_SAVE_NPC
	// Size 1156
	/////////////////////////////////////////////
	struct FST_SAVE_NPC {
		struct FString	NPC_ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FDataTableRowHandle	NPC_Handler;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FVector	Location;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rotation;		//Offset: 44	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FText	Name;		//Offset: 56	Size: 24	Flags: Edit, BlueprintVisible
		unsigned char	Sex;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 81	Size: 3
		float	Age;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MinDeadAge;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Mood;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_SAVE_NPC_Skillss	Skills;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Inventory>	EQ;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	EQ_Data;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
		struct FString	MomID;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	DadID;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	PartnerID;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FString>	SiblingsID;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	ChildrenID;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
		struct FString	HouseID;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	WorkID;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t	Affection;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TimeBirth;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsPregnant;		//Offset: 296	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 297	Size: 7
		TArray<struct FST_MatchingNPC>	PossHusband;		//Offset: 304	Size: 16	Flags: Edit, BlueprintVisible
		float	BabyChance;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	HasInfant;		//Offset: 324	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 325	Size: 3
		struct FST_SAVE_NPC_Blackboards	Blackboards;		//Offset: 328	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	NightPatrol;		//Offset: 368	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char	Ownership;		//Offset: 369	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Profession;		//Offset: 370	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Wealth;		//Offset: 371	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Personality;		//Offset: 372	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	OutNPCType;		//Offset: 373	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	OutNPCOwner;		//Offset: 374	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Vendor;		//Offset: 375	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	VendorCat;		//Offset: 376	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<E_BodyParts>, int32_t>	BPIndexes;		//Offset: 384	Size: 80	Flags: Edit, BlueprintVisible
		struct FName	MeshName;		//Offset: 464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	SkinTone;		//Offset: 472	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	HairColor;		//Offset: 488	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HeadID;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	HairID;		//Offset: 508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs;		//Offset: 512	Size: 80	Flags: Edit, BlueprintVisible
		unsigned char	BagMode;		//Offset: 592	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	BuildMode;		//Offset: 593	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[6];		//Offset: 594	Size: 6
		struct FST_QuestInfo_Save	QuestToGive;		//Offset: 600	Size: 352	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_QuestAnimation	QuestAnimation;		//Offset: 952	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsStoryNPC;		//Offset: 956	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_4[3];		//Offset: 957	Size: 3
		struct FName	VoiceID;		//Offset: 960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UDialogue>	ActualDialogue;		//Offset: 968	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_SAVE_NPCDialogue	Dialogue;		//Offset: 1008	Size: 120	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Event_CharacterMultipliers	Events;		//Offset: 1128	Size: 28	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Items.ST_SAVE_Items
	// Size 85
	/////////////////////////////////////////////
	struct FST_SAVE_Items {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HP;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SPO;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	SP;		//Offset: 65	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 66	Size: 2
		float	LT;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Capacity;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Fresh;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SRO;		//Offset: 81	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	SR;		//Offset: 82	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	AM;		//Offset: 83	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Attach;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_HusbandryAnimals.ST_SAVE_HusbandryAnimals
	// Size 112
	/////////////////////////////////////////////
	struct FST_SAVE_HusbandryAnimals {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Pos;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float	HP;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Age;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FString	HouseID;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float	Capacity;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsDead;		//Offset: 65	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	ForSale;		//Offset: 66	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[1];		//Offset: 67	Size: 1
		int32_t	Variation;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_SAVE_Inventory>	EQ;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
		bool	IsMount;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsMounted;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[6];		//Offset: 90	Size: 6
		struct FString	CustomName;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Gates.ST_SAVE_Gates
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_Gates {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Loc;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char	Ownership;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		TArray<struct FST_SAVE_ItemStack>	ResRem;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Furnitures.ST_SAVE_Furnitures
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_Furnitures {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Variant;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 37	Size: 3
		TArray<struct FName>	Tags;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_FoliageArray.ST_SAVE_FoliageArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_SAVE_FoliageArray {
		TArray<struct FST_SAVE_Foliage>	Array;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_FishSpawners.ST_SAVE_FishSpawners
	// Size 28
	/////////////////////////////////////////////
	struct FST_SAVE_FishSpawners {
		struct FGuid	ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Available;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		int32_t	D1;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	N1;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Fields.ST_SAVE_Fields
	// Size 112
	/////////////////////////////////////////////
	struct FST_SAVE_Fields {
		struct FVector	Location1;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	Location2;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FString	CustomName;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TEnumAsByte<E_FieldCategories>	Type;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 41	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 42	Size: 6
		TArray<struct FST_SAVE_FieldChunks>	Chunks;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_FieldPlantSlots>	Slots;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	ChunksData;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	SlotsData;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Events.ST_SAVE_Events
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_Events {
		float	Chance;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TotalNumber;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FName>	LastEvents;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FName>	EventQueue;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_EventHistory_Main>	EventHistory;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Containers.ST_SAVE_Containers
	// Size 88
	/////////////////////////////////////////////
	struct FST_SAVE_Containers {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		TArray<struct FST_SAVE_Inventory>	EQ;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FName>	Tags;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FString>	EQ_Data;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Collectable_Data.ST_SAVE_Collectable_Data
	// Size 16
	/////////////////////////////////////////////
	struct FST_SAVE_Collectable_Data {
		struct FString	Data;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Campfires.ST_SAVE_Campfires
	// Size 80
	/////////////////////////////////////////////
	struct FST_SAVE_Campfires {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Fire;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Full;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char	Owner;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[1];		//Offset: 35	Size: 1
		struct FST_Time	ActivationTime;		//Offset: 36	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 60	Size: 4
		TArray<struct FName>	Tags;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Buildings.ST_SAVE_Buildings
	// Size 484
	/////////////////////////////////////////////
	struct FST_SAVE_Buildings {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float	ZPos;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	Name;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
		struct FString	CustomName;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	ID;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[7];		//Offset: 73	Size: 7
		TArray<struct FST_SAVE_Modules>	BaseModules;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Modules>	FrameModules;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Modules>	Modules;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Furnitures>	DecorativeFurnitures;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ActivityFurnitures>	ActivityFurnitures;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Campfires>	Campfires;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_RefillableContainers>	RefillableContainers;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_SourceOfResources>	SourceOfResources;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Containers>	Containers;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Production_Progress>	Production;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_AnimalProduction_Progress>	AnimalProduction;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Trade_Progress>	Trading;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_Profession>, int32_t>	WorkIntensity;		//Offset: 272	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	ToolsBuffer;		//Offset: 352	Size: 80	Flags: Edit, BlueprintVisible
		float	Wood;		//Offset: 432	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 436	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Water;		//Offset: 440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	FC;		//Offset: 444	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 445	Size: 3
		struct FST_Event_BuildingMultipliers	Events;		//Offset: 448	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Shop;		//Offset: 452	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	BaseStage2;		//Offset: 453	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	R;		//Offset: 454	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	B;		//Offset: 455	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FST_SAVE_Repairing_Progress	Repairing;		//Offset: 456	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	LL;		//Offset: 480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Building_Data.ST_SAVE_Building_Data
	// Size 448
	/////////////////////////////////////////////
	struct FST_SAVE_Building_Data {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float	ZPos;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	Name;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
		struct FString	CustomName;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	ID;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[7];		//Offset: 73	Size: 7
		TArray<struct FST_SAVE_Modules>	BaseModules;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Modules>	FrameModules;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Modules>	Modules;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Furnitures>	Furnitures;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_ActivityFurnitures>	ActivityFurnitures;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Campfires>	Campfires;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_RefillableContainers>	RefillableContainers;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Containers>	Containers;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Production_Progress>	Production;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_SAVE_Trade_Progress>	Trading;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_Profession>, int32_t>	WorkIntensity;		//Offset: 240	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	ToolsBuffer;		//Offset: 320	Size: 80	Flags: Edit, BlueprintVisible
		float	Wood;		//Offset: 400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Water;		//Offset: 408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	FC;		//Offset: 412	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 413	Size: 3
		struct FST_Event_BuildingMultipliers	Events;		//Offset: 416	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Shop;		//Offset: 420	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	BaseStage2;		//Offset: 421	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	R;		//Offset: 422	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	B;		//Offset: 423	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FST_SAVE_Repairing_Progress	Repairing;		//Offset: 424	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_AnimalSpawners.ST_SAVE_AnimalSpawners
	// Size 56
	/////////////////////////////////////////////
	struct FST_SAVE_AnimalSpawners {
		struct FGuid	ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Available;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		int32_t	D1;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D2;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D3;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	D4;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 36	Size: 4
		TArray<struct FST_SAVE_Spawner_Animal>	Animals;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_ActivityFurnitures.ST_SAVE_ActivityFurnitures
	// Size 60
	/////////////////////////////////////////////
	struct FST_SAVE_ActivityFurnitures {
		struct FVector	Pos;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	Rot;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FName	Name;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	Owner;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		TArray<struct FName>	Tags;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	Variant;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_Achievements.ST_SAVE_Achievements
	// Size 188
	/////////////////////////////////////////////
	struct FST_SAVE_Achievements {
		TMap<TEnumAsByte<E_AnimalType>, bool>	WildAnimalsTypeKilled;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_Ownership>, bool>	VillagesVisited;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible
		bool	PutOnClothesDuringWinter;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 161	Size: 3
		int32_t	SeasonsOfWifeGifts;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	StolenItemsSold;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ConsecutiveNightsSlept;		//Offset: 172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MDSIDEQUESTS;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MDSTEALING;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MDSTUMPS;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_PlantCondition.ST_PlantCondition
	// Size 52
	/////////////////////////////////////////////
	struct FST_PlantCondition {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float	Condition;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BookTutorialShown.ST_BookTutorialShown
	// Size 7
	/////////////////////////////////////////////
	struct FST_BookTutorialShown {
		bool	Inventory;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Skills;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Journal;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Map;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Management;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Technology;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	KnowledgeHUD;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GraphicsSettingsPreset.ST_GraphicsSettingsPreset
	// Size 29
	/////////////////////////////////////////////
	struct FST_GraphicsSettingsPreset {
		int32_t	ViewDistanceID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	AntiAliasingID;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	PostProcessID;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ShadowsID;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TexturesID;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	EffectsID;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	FoliageID;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DFAO;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CharacterSettings.ST_CharacterSettings
	// Size 16
	/////////////////////////////////////////////
	struct FST_CharacterSettings {
		struct FLinearColor	SkinTone;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AquaticInteractionData.ST_AquaticInteractionData
	// Size 40
	/////////////////////////////////////////////
	struct FST_AquaticInteractionData {
		float	Force;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Torque;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	RandomOffset;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Radius;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Importance;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxForce;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxDistance;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	SplashEmiter;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SplashOffsetZ;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SplashEmiterScale;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_LineState.ST_LineState
	// Size 32
	/////////////////////////////////////////////
	struct FST_LineState {
		bool	LineState;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FText	LineText;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DialoguesUsedDialogueLines.ST_DialoguesUsedDialogueLines
	// Size 88
	/////////////////////////////////////////////
	struct FST_DialoguesUsedDialogueLines {
		class UDialogue* DialogueReference;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, struct FST_LineState>	LinesStates;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MontagesSettingsEnum.ST_MontagesSettingsEnum
	// Size 80
	/////////////////////////////////////////////
	struct FST_MontagesSettingsEnum {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	MontageSettings;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ToolTransforms.ST_ToolTransforms
	// Size 432
	/////////////////////////////////////////////
	struct FST_ToolTransforms {
		struct FTransform	Toddler;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	Kid;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	TeenagerM;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	TeenagerF;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	MatureM;		//Offset: 192	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	MatureF;		//Offset: 240	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	OldM;		//Offset: 288	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	OldF;		//Offset: 336	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	Player;		//Offset: 384	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CombinedToolTransforms.ST_CombinedToolTransforms
	// Size 864
	/////////////////////////////////////////////
	struct FST_CombinedToolTransforms {
		struct FST_ToolTransforms	ToolTransforms;		//Offset: 0	Size: 432	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_ToolTransforms	FlippedToolTransforms;		//Offset: 432	Size: 432	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemSourceCondition.ST_ItemSourceCondition
	// Size 28
	/////////////////////////////////////////////
	struct FST_ItemSourceCondition {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinResourceCount;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxResourceCount;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Condition;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemResourceCondition.ST_ItemResourceCondition
	// Size 24
	/////////////////////////////////////////////
	struct FST_ItemResourceCondition {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	Count;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Condition;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemGeneratorSettings.ST_ItemGeneratorSettings
	// Size 36
	/////////////////////////////////////////////
	struct FST_ItemGeneratorSettings {
		struct FST_ItemResource	Item;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		float	MinCondition;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxCondition;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Probability;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FoliageData.ST_FoliageData
	// Size 135
	/////////////////////////////////////////////
	struct FST_FoliageData {
		struct FString	FoliageID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UFoliageType* FoliageType;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ID;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
		struct FTransform	OriginTransform;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	CurrentTransform;		//Offset: 80	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t	NumberOfSeasonToReset;		//Offset: 128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DownAtBeginning;		//Offset: 132	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MovedDown;		//Offset: 133	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Forever;		//Offset: 134	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FoliageArray.ST_FoliageArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_FoliageArray {
		TArray<struct FST_Foliage>	Array;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Foliage.ST_Foliage
	// Size 118
	/////////////////////////////////////////////
	struct FST_Foliage {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[12];		//Offset: 4	Size: 12
		struct FTransform	OriginTransform;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	CurrentTransform;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t	NumberOfSeasonToReset;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DownAtBeginning;		//Offset: 116	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MovedDown;		//Offset: 117	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SAVE_FoliageData.ST_SAVE_FoliageData
	// Size 101
	/////////////////////////////////////////////
	struct FST_SAVE_FoliageData {
		struct FString	FoliageID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t	ID;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Reset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DAB;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MD;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 26	Size: 2
		struct FVector	OT_L;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	OT_R;		//Offset: 40	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector	OT_S;		//Offset: 52	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	CT_L;		//Offset: 64	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator	CT_R;		//Offset: 76	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector	CT_S;		//Offset: 88	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	F;		//Offset: 100	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SpawnedResourceItem.ST_SpawnedResourceItem
	// Size 40
	/////////////////////////////////////////////
	struct FST_SpawnedResourceItem {
		TAssetPtr<class UClass>	Actor;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SpawnersArray.ST_SpawnersArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_SpawnersArray {
		TArray<class ABP_POI_Spawner_C*>	Spawners;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DrawingSpawnersArray.ST_DrawingSpawnersArray
	// Size 24
	/////////////////////////////////////////////
	struct FST_DrawingSpawnersArray {
		TArray<struct FST_DrawingSpawners>	Restrictions;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	DeactivationTimeMin;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DeactivationTimeMax;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DrawingSpawners.ST_DrawingSpawners
	// Size 12
	/////////////////////////////////////////////
	struct FST_DrawingSpawners {
		int32_t	Year;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinNumberPerSeason;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxNumberPerSeason;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ChromaAnimPaths.ST_ChromaAnimPaths
	// Size 16
	/////////////////////////////////////////////
	struct FST_ChromaAnimPaths {
		struct FString	Path;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemColors.ST_ItemColors
	// Size 32
	/////////////////////////////////////////////
	struct FST_ItemColors {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		TArray<struct FST_ColorTable>	ItemDyes;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_OutfitsPresets.ST_OutfitsPresets
	// Size 192
	/////////////////////////////////////////////
	struct FST_OutfitsPresets {
		struct FST_ItemColors	Neck;		//Offset: 0	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemColors	Hat;		//Offset: 32	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemColors	Torso;		//Offset: 64	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemColors	Hands;		//Offset: 96	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemColors	Legs;		//Offset: 128	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ItemColors	Feet;		//Offset: 160	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CameraSettings.ST_CameraSettings
	// Size 20
	/////////////////////////////////////////////
	struct FST_CameraSettings {
		float	TargetArmLength;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	CameraLagSpeed;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector	SocketOffset;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CameraSettings_Gait.ST_CameraSettings_Gait
	// Size 60
	/////////////////////////////////////////////
	struct FST_CameraSettings_Gait {
		struct FST_CameraSettings	Walk;		//Offset: 0	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Run;		//Offset: 20	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Sprint;		//Offset: 40	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CameraSettings_Stance.ST_CameraSettings_Stance
	// Size 80
	/////////////////////////////////////////////
	struct FST_CameraSettings_Stance {
		struct FST_CameraSettings_Gait	Standing;		//Offset: 0	Size: 60	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Crouching;		//Offset: 60	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Camera_Targets.ST_Camera_Targets
	// Size 220
	/////////////////////////////////////////////
	struct FST_Camera_Targets {
		struct FST_CameraSettings_Stance	VelocityDirection;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings_Stance	LookingDirection;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Aiming;		//Offset: 160	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Ragdoll;		//Offset: 180	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraSettings	Dialogue;		//Offset: 200	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_PivotParams.ST_PivotParams
	// Size 20
	/////////////////////////////////////////////
	struct FST_PivotParams {
		float	PivotDirection;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MovementDirection>	CompletedMovementDirection;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		float	CompletedStartTime;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MovementDirection>	InterruptedMovementDirection;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[3];		//Offset: 13	Size: 3
		float	InterruptedStartTime;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Field.ST_Field
	// Size 40
	/////////////////////////////////////////////
	struct FST_Field {
		TAssetPtr<class UClass>	Field;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DialogueSounds.ST_DialogueSounds
	// Size 240
	/////////////////////////////////////////////
	struct FST_DialogueSounds {
		TEnumAsByte<E_CharacterType>	Age;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Sex>	Sex;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	CustomVoice;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[5];		//Offset: 3	Size: 5
		TAssetPtr<class USoundCue>	Greetings;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	NumberOfSoundsGreet;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 52	Size: 4
		TAssetPtr<class USoundCue>	FirstTimeGreet;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	NumberOfSoundsFirstGreet;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[4];		//Offset: 100	Size: 4
		TAssetPtr<class USoundCue>	Goodbyes;		//Offset: 104	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	NumberOfSoundsGoodbyes;		//Offset: 144	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[4];		//Offset: 148	Size: 4
		TAssetPtr<class USoundCue>	Vendor;		//Offset: 152	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	NumberOfSoundsVendor;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_4[4];		//Offset: 196	Size: 4
		TAssetPtr<class USoundCue>	PushOrSnowball;		//Offset: 200	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MeshDynamicMaterials.ST_MeshDynamicMaterials
	// Size 24
	/////////////////////////////////////////////
	struct FST_MeshDynamicMaterials {
		class UMeshComponent* Mesh;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>	DynamicMaterialReferences;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_HeatingSource.ST_HeatingSource
	// Size 48
	/////////////////////////////////////////////
	struct FST_HeatingSource {
		struct FVector	HeatingSourceLocation;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Priority;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Interior;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	Temperature;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	LevelOfWarming;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HeatingRange;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxTemperatureHeatingRange;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	DistanceIntensity;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	DamageFromHeat;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 41	Size: 3
		float	RealDistance;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_InteractSlotSettings.ST_InteractSlotSettings
	// Size 99
	/////////////////////////////////////////////
	struct FST_InteractSlotSettings {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	FinalTransform;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TEnumAsByte<E_FurnitureSlotType>	SlotType;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Available;		//Offset: 97	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	HasTable;		//Offset: 98	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_InteractSlot.ST_InteractSlot
	// Size 101
	/////////////////////////////////////////////
	struct FST_InteractSlot {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	FinalTransform;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	Occupied;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	WantToOccupy;		//Offset: 97	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	Available;		//Offset: 98	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	HasTable;		//Offset: 99	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_FurnitureSlotType>	SlotPosition;		//Offset: 100	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CauserTimer.ST_CauserTimer
	// Size 12
	/////////////////////////////////////////////
	struct FST_CauserTimer {
		struct FName	ToolTag;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	RememberCounter;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_InteractionMontages.ST_InteractionMontages
	// Size 16
	/////////////////////////////////////////////
	struct FST_InteractionMontages {
		class UAnimMontage* InteractAnimationMontageLife;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage* InteractAnimationMontageDead;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Event_AnimalMultipliers.ST_Event_AnimalMultipliers
	// Size 20
	/////////////////////////////////////////////
	struct FST_Event_AnimalMultipliers {
		float	WaterDecrease;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	FoodDecrease;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	WorkingSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	FoodValue;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Mood;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DecorationPreset.ST_DecorationPreset
	// Size 32
	/////////////////////////////////////////////
	struct FST_DecorationPreset {
		struct FString	ModuleName;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>	SlotsDefaultID;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_RoadList.ST_RoadList
	// Size 24
	/////////////////////////////////////////////
	struct FST_RoadList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterRoadSpline_C*>	ListOfRoads;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BridgeList.ST_BridgeList
	// Size 24
	/////////////////////////////////////////////
	struct FST_BridgeList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterBridge_C*>	ListOfBridges;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_WifeGifts.ST_WifeGifts
	// Size 72
	/////////////////////////////////////////////
	struct FST_WifeGifts {
		struct FText	TierDialogue;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	LowAffectionDialogue;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	VeryLowAffectionDialogue;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AffectionDialogueResponse.ST_AffectionDialogueResponse
	// Size 32
	/////////////////////////////////////////////
	struct FST_AffectionDialogueResponse {
		struct FText	Text;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	AffectionPoints;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	DynastyReputationPoints;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Gift.ST_Gift
	// Size 168
	/////////////////////////////////////////////
	struct FST_Gift {
		int32_t	AffectionRequired;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TMap<TEnumAsByte<E_NPCPersonality>, struct FST_AffectionDialogueResponse>	Responses;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_NPCPersonality>, struct FST_WifeGifts>	WifeResponses;		//Offset: 88	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ToddlerGift.ST_ToddlerGift
	// Size 64
	/////////////////////////////////////////////
	struct FST_ToddlerGift {
		struct FST_AffectionDialogueResponse	MaleToddlerResponse;		//Offset: 0	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_AffectionDialogueResponse	FemaleToddlerResponse;		//Offset: 32	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DayPreset.ST_DayPreset
	// Size 40
	/////////////////////////////////////////////
	struct FST_DayPreset {
		int32_t	Probability;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		class UCurveVector* CloudDensity;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector* FogDensity;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat* Wind;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat* WindDirection;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Season.ST_Season
	// Size 40
	/////////////////////////////////////////////
	struct FST_Season {
		struct FText	SeasonName;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TArray<struct FST_DayPreset>	DayPresets;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_ItemForDeliver.ST_Challenge_ItemForDeliver
	// Size 56
	/////////////////////////////////////////////
	struct FST_Challenge_ItemForDeliver {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		TArray<int32_t>	MaxQuantity;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	MinQuantity;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	QuantityToDeliver;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	QuantityDelivered;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_ItemForDeliver_Generic.ST_Challenge_ItemForDeliver_Generic
	// Size 24
	/////////////////////////////////////////////
	struct FST_Challenge_ItemForDeliver_Generic {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	QuantityToDeliver;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	QuantityDelivered;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_SendPeople.ST_Challenge_SendPeople
	// Size 40
	/////////////////////////////////////////////
	struct FST_Challenge_SendPeople {
		TArray<int32_t>	MaxNeededPeople;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	MinNeededPeople;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	NeededPeople;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	SentPeople;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_DeliverItems_Generic.ST_Challenge_DeliverItems_Generic
	// Size 56
	/////////////////////////////////////////////
	struct FST_Challenge_DeliverItems_Generic {
		TEnumAsByte<E_ItemSubCategories>	ItemsType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<int32_t>	MaxQuantity;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		TArray<int32_t>	MinQuantity;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_Challenge_ItemForDeliver_Generic>	Items;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_DeliverItems.ST_Challenge_DeliverItems
	// Size 16
	/////////////////////////////////////////////
	struct FST_Challenge_DeliverItems {
		TArray<struct FST_Challenge_ItemForDeliver>	Items;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_DeliverFood.ST_Challenge_DeliverFood
	// Size 40
	/////////////////////////////////////////////
	struct FST_Challenge_DeliverFood {
		TArray<float>	MaxRequiredFoodValue;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<float>	MinRequiredFoodValue;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		float	NeededFoodValue;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	DeliveredFoodValue;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_Reward.ST_Challenge_Reward
	// Size 4
	/////////////////////////////////////////////
	struct FST_Challenge_Reward {
		int32_t	DevelopmentForEach;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_Punishment.ST_Challenge_Punishment
	// Size 12
	/////////////////////////////////////////////
	struct FST_Challenge_Punishment {
		TEnumAsByte<E_Challenge_PunishmentType>	PunishmentType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Base;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	ForEach;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challenge_MasterType.ST_Challenge_MasterType
	// Size 160
	/////////////////////////////////////////////
	struct FST_Challenge_MasterType {
		TEnumAsByte<E_Challenge_Type>	ChallengeType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FST_Challenge_DeliverFood	FoodType;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Challenge_SendPeople	PeopleType;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Challenge_DeliverItems	DeliverType;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Challenge_DeliverItems_Generic	DeliverGenericType;		//Offset: 104	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Challange.ST_Challange
	// Size 261
	/////////////////////////////////////////////
	struct FST_Challange {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	MaxDuration;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 52	Size: 4
		struct FST_Challenge_MasterType	TaskType;		//Offset: 56	Size: 160	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Challenge_Reward	Reward;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 220	Size: 4
		TArray<struct FST_Challenge_Punishment>	Punishment;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
		bool	CheckEverySeason;		//Offset: 240	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[7];		//Offset: 241	Size: 7
		class UTexture2D* Icon;		//Offset: 248	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	SeasonsPassed;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_QuestState>	State;		//Offset: 260	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Skills.ST_Skills
	// Size 128
	/////////////////////////////////////////////
	struct FST_Skills {
		TEnumAsByte<E_Skills>	SkillType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		int32_t	ActualLevel;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	ActualProgress;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>	ProgressNeededToLevel;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	MaxLevel;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	SkillPointsToSpend;		//Offset: 124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SplineStructureList.ST_SplineStructureList
	// Size 24
	/////////////////////////////////////////////
	struct FST_SplineStructureList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterSplineStructure_C*>	ListOfFences;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_GateList.ST_GateList
	// Size 24
	/////////////////////////////////////////////
	struct FST_GateList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterGate_C*>	ListOfGates;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_DecorationSlot.ST_DecorationSlot
	// Size 153
	/////////////////////////////////////////////
	struct FST_DecorationSlot {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FTransform	Transform;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t	DefaultIndex;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 116	Size: 4
		TArray<struct FDataTableRowHandle>	Furnitures;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_DecorationCategories>>	Categories;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_DecorationSlotType>	Type;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Bridge.ST_Bridge
	// Size 355
	/////////////////////////////////////////////
	struct FST_Bridge {
		struct FName	TechnologySchemeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		unsigned char uknownData_0[8];		//Offset: 136	Size: 8
		struct FTransform	FirstMeshTransform;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TAssetPtr<class UStaticMesh>	FirstMesh;		//Offset: 192	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	ConstructionMesh;		//Offset: 232	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	SplineMesh;		//Offset: 272	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Resources;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible
		float	StepSize;		//Offset: 328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsLockedByTechnology;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 333	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[2];		//Offset: 334	Size: 2
		int32_t	TechnologyLevel;		//Offset: 336	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TechnologyCost;		//Offset: 340	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TechnologyPoints;		//Offset: 344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SkillPoints;		//Offset: 348	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MaterialType>	MaterialType;		//Offset: 352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SoundsOcclusion;		//Offset: 353	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	CameraCollision;		//Offset: 354	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CraftingCategory.ST_CraftingCategory
	// Size 104
	/////////////////////////////////////////////
	struct FST_CraftingCategory {
		struct FText	CategoryName;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	CategoryDescription;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		TArray<struct FDataTableRowHandle>	Recipes;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TAssetPtr<class UTexture2D>	CategoryIcon;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Road.ST_Road
	// Size 124
	/////////////////////////////////////////////
	struct FST_Road {
		struct FName	TechnologySchemeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FText	Name;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 32	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Resources;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		bool	IsLockedByTechnology;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 114	Size: 2
		int32_t	TechnologyLevel;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TechnologyCost;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_KeyMapping.ST_KeyMapping
	// Size 16
	/////////////////////////////////////////////
	struct FST_KeyMapping {
		struct FName	KeyLetter;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D* KeyIcon;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SplineStructure.ST_SplineStructure
	// Size 395
	/////////////////////////////////////////////
	struct FST_SplineStructure {
		struct FName	TechnologySchemeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		unsigned char uknownData_0[8];		//Offset: 136	Size: 8
		struct FTransform	FirstMeshTransform;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TAssetPtr<class UStaticMesh>	FirstMesh;		//Offset: 192	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	ConstructionMesh;		//Offset: 232	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	SplineMesh;		//Offset: 272	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UStaticMesh>	SplineMesh_OldGen;		//Offset: 312	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Resources;		//Offset: 352	Size: 16	Flags: Edit, BlueprintVisible
		float	StepSize;		//Offset: 368	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsLockedByTechnology;		//Offset: 372	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 373	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[2];		//Offset: 374	Size: 2
		int32_t	TechnologyLevel;		//Offset: 376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TechnologyCost;		//Offset: 380	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TechnologyPoints;		//Offset: 384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SkillPoints;		//Offset: 388	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_MaterialType>	MaterialType;		//Offset: 392	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SoundsOcclusion;		//Offset: 393	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	CameraCollision;		//Offset: 394	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Gates.ST_Gates
	// Size 275
	/////////////////////////////////////////////
	struct FST_Gates {
		struct FName	TechnologySchemeID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FText	Name;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	Description;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	BuildingClass;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Resources;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
		float	MaxPlacementAngle;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	PlacementOnLandscape;		//Offset: 156	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	PlacementOnFloor;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	PlacementOnWindow;		//Offset: 158	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	AutomaticVerticalRotation;		//Offset: 159	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsLockedByTechnology;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 161	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 162	Size: 2
		int32_t	TechnologyLevel;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TechnologyCost;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SeasonalRemove;		//Offset: 172	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 173	Size: 3
		struct FTransform	MarkerT1;		//Offset: 176	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	MarkerT2;		//Offset: 224	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TEnumAsByte<E_MaterialType>	MaterialType;		//Offset: 272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	SoundsOcclusion;		//Offset: 273	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	CameraCollision;		//Offset: 274	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Trading_Progress.ST_Trading_Progress
	// Size 56
	/////////////////////////////////////////////
	struct FST_Trading_Progress {
		bool	Overflow;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	NoResources;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		float	Progress;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NumberPerHour;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	PowerOfProduction;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle	Item;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		bool	TimeActive;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[7];		//Offset: 33	Size: 7
		TArray<struct FST_ItemCache>	Cache;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Trade_Progress.ST_Trade_Progress
	// Size 40
	/////////////////////////////////////////////
	struct FST_Trade_Progress {
		bool	NoResources;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	HasWorkers;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		float	Progress;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NumberPerHour;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Limit;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Profession>	Profession;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	SkillType;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	AcquiredResources;		//Offset: 18	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	TimeActive;		//Offset: 19	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		struct FDataTableRowHandle	ItemHandler;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Repairing_Progress.ST_Repairing_Progress
	// Size 24
	/////////////////////////////////////////////
	struct FST_Repairing_Progress {
		float	Progress;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FST_ItemCache>	Cache;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_Result.ST_Production_Result
	// Size 864
	/////////////////////////////////////////////
	struct FST_Production_Result {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Production_SourcePlaces>	Storage;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
		struct FST_ItemDetails	Data;		//Offset: 16	Size: 848	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_Progress.ST_Production_Progress
	// Size 120
	/////////////////////////////////////////////
	struct FST_Production_Progress {
		bool	Overflow;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	NoResources;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	NoTool;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	HasWorkers;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	HasAnimals;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		float	Progress;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NumberPerHour;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	PowerOfProduction;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		struct FST_Production_Recipe	RecipeSettings;		//Offset: 24	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TEnumAsByte<E_Profession>	Profession;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Skills>	SkillType;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	AcquiredResources;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	TimeActive;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	OverwriteCondition;		//Offset: 92	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[3];		//Offset: 93	Size: 3
		float	Condition;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_3[4];		//Offset: 100	Size: 4
		TArray<struct FST_ItemCache>	Cache;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_ProfessionData.ST_Production_ProfessionData
	// Size 16
	/////////////////////////////////////////////
	struct FST_Production_ProfessionData {
		int32_t	NumberOfWorkers;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	TotalSkillValue;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TotalWorkingSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	TotalMood;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Production_Cost.ST_Production_Cost
	// Size 13
	/////////////////////////////////////////////
	struct FST_Production_Cost {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Count;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Production_SourcePlaces>	Storage;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Coefficients.ST_Coefficients
	// Size 16
	/////////////////////////////////////////////
	struct FST_Coefficients {
		float	Food;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Water;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Wood;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Temperature;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalProduction_Progress.ST_AnimalProduction_Progress
	// Size 64
	/////////////////////////////////////////////
	struct FST_AnimalProduction_Progress {
		float	Progress;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		struct FST_AnimalProduction_Recipe	RecipeSettings;		//Offset: 8	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ReputationLimits.ST_ReputationLimits
	// Size 4
	/////////////////////////////////////////////
	struct FST_ReputationLimits {
		int32_t	RequiredReputation;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Name_Float.ST_Name_Float
	// Size 12
	/////////////////////////////////////////////
	struct FST_Name_Float {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Value;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SimplifiedBuildingUnlockedStructure.ST_SimplifiedBuildingUnlockedStructure
	// Size 72
	/////////////////////////////////////////////
	struct FST_SimplifiedBuildingUnlockedStructure {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	TechnologyLevel;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberOfAnimals;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BuildingsStructure_ForVillageManager.ST_BuildingsStructure_ForVillageManager
	// Size 24
	/////////////////////////////////////////////
	struct FST_BuildingsStructure_ForVillageManager {
		TEnumAsByte<E_TechnologyTypes>	TechnologyType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_SimplifiedBuildingUnlockedStructure>	BuildingStructure;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Text.ST_Text
	// Size 24
	/////////////////////////////////////////////
	struct FST_Text {
		struct FText	Text;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_KingNickname.ST_KingNickname
	// Size 25
	/////////////////////////////////////////////
	struct FST_KingNickname {
		struct FText	Nickname;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_KingAlignment>	NicknameAlignment;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_King.ST_King
	// Size 26
	/////////////////////////////////////////////
	struct FST_King {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Sex>	Sex;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Kingdoms>	Kingdom;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FieldList.ST_FieldList
	// Size 24
	/////////////////////////////////////////////
	struct FST_FieldList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_FieldCategory>	Categories;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemResourceOwner.ST_ItemResourceOwner
	// Size 21
	/////////////////////////////////////////////
	struct FST_ItemResourceOwner {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	Count;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SeedCount.ST_SeedCount
	// Size 8
	/////////////////////////////////////////////
	struct FST_SeedCount {
		TEnumAsByte<E_Seeds>	SeedType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Count;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_PlantSlot.ST_PlantSlot
	// Size 64
	/////////////////////////////////////////////
	struct FST_PlantSlot {
		TEnumAsByte<E_FieldPlantStages>	PlantStage;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	ChunkID;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[8];		//Offset: 8	Size: 8
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FieldCategory.ST_FieldCategory
	// Size 24
	/////////////////////////////////////////////
	struct FST_FieldCategory {
		TEnumAsByte<E_FieldCategories>	Category;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterField_C*>	ListOfFields;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FoliageTarget.ST_FoliageTarget
	// Size 80
	/////////////////////////////////////////////
	struct FST_FoliageTarget {
		bool	IsActor;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		class AActor* Actor;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHierarchicalInstancedStaticMeshComponent* FoliageType;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ID;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 28	Size: 4
		struct FTransform	OriginTransform;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FoliageTargetsData.ST_FoliageTargetsData
	// Size 24
	/////////////////////////////////////////////
	struct FST_FoliageTargetsData {
		TEnumAsByte<E_Resources>	ResourceType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_FoliageTarget>	FoliageTargets;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CameraRotationLimits.ST_CameraRotationLimits
	// Size 24
	/////////////////////////////////////////////
	struct FST_CameraRotationLimits {
		bool	LimitCameraRotation;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	UseYaw;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		float	YawMin;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	YawMax;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	UsePitch;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[3];		//Offset: 13	Size: 3
		float	PitchMin;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	PitchMax;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MontagesSettings.ST_MontagesSettings
	// Size 60
	/////////////////////////////////////////////
	struct FST_MontagesSettings {
		class UAnimMontage* Montage;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HeadBlend;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	StopPlayerRotation;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	StopPlayerMovement;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	UsePawnControlRotation;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[1];		//Offset: 15	Size: 1
		class UBlendSpaceBase* MontageAimOffset;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpaceBase* FullBodyAimOffset;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_CameraRotationLimits	CameraRotationLimits;		//Offset: 32	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MovementSpeedMultiplier;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MontagesSettingsArray.ST_MontagesSettingsArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_MontagesSettingsArray {
		TArray<struct FST_MontagesSettings>	MontageSettings;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_VillagesOriginAndRange.ST_VillagesOriginAndRange
	// Size 20
	/////////////////////////////////////////////
	struct FST_VillagesOriginAndRange {
		TEnumAsByte<E_Ownership>	Village;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FVector	Origin;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Range;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FieldTasksLists.ST_FieldTasksLists
	// Size 50
	/////////////////////////////////////////////
	struct FST_FieldTasksLists {
		class AActor* Field;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_FieldActivities>	Activities;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		int32_t	Priority;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>	ChunksID;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FVector>	Destination;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Tools>	NeedItem;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsOccupied;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestNPC_Data.ST_QuestNPC_Data
	// Size 83
	/////////////////////////////////////////////
	struct FST_QuestNPC_Data {
		struct FString	NPC_ID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TEnumAsByte<E_IdleStates>	IdleState;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char	PoseID;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_AfterIdlePose>	AfterIdlePose;		//Offset: 18	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[13];		//Offset: 19	Size: 13
		struct FTransform	TransformLocation;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	InspectorVisibility;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	BlockTalking;		//Offset: 81	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	NormalTalking;		//Offset: 82	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack.BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack
	// Size 21
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack {
		TEnumAsByte<EBP_Enum_MeleeDamageType>	MeleeDamageType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	DamageAmount;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AttackFrequency;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AggroTimer;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	DisengageCD;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Dontmovewhileattacking;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails.BP_Struct_GroundAnimalBehavior_AnimalDetails
	// Size 36
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails {
		TEnumAsByte<EBP_Enum_FeedingBehavior>	FeedingBehavior;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	MaxWalkSpeed;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	EngageMaxWalkSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxAcceleration;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	EngageMaxAcceleration;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	HurtMovementFactor;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Mass;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxStepHeight;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MaxWalkableFloorAngle;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimal_Debug.BP_Struct_GroundAnimal_Debug
	// Size 4
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimal_Debug {
		bool	RoamBehavior;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	EngagedTarget;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	MeleeRange;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	PlayerProximityCheck;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimal_CurrentMontage.BP_Struct_GroundAnimal_CurrentMontage
	// Size 24
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimal_CurrentMontage {
		bool	AnimationPlaying;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<EBP_Enum_AnimType>	AnimationType;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		int32_t	MontageIndex;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AnimationPlayrate;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
		class UAnimMontage* Montagereference;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimal_Animations.BP_Struct_GroundAnimal_Animations
	// Size 17
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimal_Animations {
		TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>	AnimationsList;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TEnumAsByte<EBP_Enum_AnimPlayMode>	PlayMode;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimal_AnimationDetails.BP_Struct_GroundAnimal_AnimationDetails
	// Size 64
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimal_AnimationDetails {
		class UAnimMontage* AnimationMontage;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	AnimationPlayRate;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FName	AnimationStartSectionName;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		class USoundBase* SoundCue;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SoundVolumeMultiplier;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SoundPitchMultiplier;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	SoundStartTime;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 44	Size: 4
		class USoundAttenuation* SoundAttenuation;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundConcurrency* SoundConcurrencySettings;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct BP_Struct_GroundAnimaBehavior_Defend.BP_Struct_GroundAnimaBehavior_Defend
	// Size 20
	/////////////////////////////////////////////
	struct FBP_Struct_GroundAnimaBehavior_Defend {
		float	MaxDistanceFromLocation;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<EBP_Enum_DefenseLocation>	DefenseLocationType;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		class ABP_AI_DefendLocation_C* SpecificDefenseLocation;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	InspectionTime;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SlotAnimIDs.ST_SlotAnimIDs
	// Size 16
	/////////////////////////////////////////////
	struct FST_SlotAnimIDs {
		TArray<unsigned char>	AnimIDs;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalList.ST_AnimalList
	// Size 24
	/////////////////////////////////////////////
	struct FST_AnimalList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_AnimalCategory>	Categories;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SlotSettings.ST_SlotSettings
	// Size 200
	/////////////////////////////////////////////
	struct FST_SlotSettings {
		struct FTransform	Slot;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	IsOccupied;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[15];		//Offset: 49	Size: 15
		struct FTransform	StartPoint;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	HaveStartPoint;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsBreakSlot;		//Offset: 113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsApprenticeSlot;		//Offset: 114	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_1[5];		//Offset: 115	Size: 5
		TMap<TEnumAsByte<E_BuildingSlotType>, struct FST_SlotAnimIDs>	AnimIDs;		//Offset: 120	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FishSpawnerArray.ST_FishSpawnerArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_FishSpawnerArray {
		TArray<class ABP_Flock_Fish_C*>	AnimalSpawnPoints;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalSpawnerArray.ST_AnimalSpawnerArray
	// Size 16
	/////////////////////////////////////////////
	struct FST_AnimalSpawnerArray {
		TArray<class ABP_SpawnPointWildAnimal_C*>	AnimalSpawnPoints;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalGroup.ST_AnimalGroup
	// Size 96
	/////////////////////////////////////////////
	struct FST_AnimalGroup {
		struct FDataTableRowHandle	Animal1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinAnimal1Count;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxAnimal1Count;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle	Animal2;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinAnimal2Count;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxAnimal2Count;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle	Animal3;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinAnimal3Count;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxAnimal3Count;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle	Animal4;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinAnimal4Count;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxAnimal4Count;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_AnimalCategory.ST_AnimalCategory
	// Size 24
	/////////////////////////////////////////////
	struct FST_AnimalCategory {
		TEnumAsByte<E_AnimalType>	AnimalType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_AnimalBase_C*>	ListOfAnimals;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemResourceChance.ST_ItemResourceChance
	// Size 29
	/////////////////////////////////////////////
	struct FST_ItemResourceChance {
		struct FST_ItemResource	Item;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		float	DropChance;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	CanBeMultiplied;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SimpleNPC.ST_SimpleNPC
	// Size 88
	/////////////////////////////////////////////
	struct FST_SimpleNPC {
		TEnumAsByte<E_Sex>	Sex;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Age;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_BanditType>	BanditType;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Wealth>	Wealth;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
		struct FTransform	TranformLocation;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	IsVendor;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[7];		//Offset: 65	Size: 7
		struct FDataTableRowHandle	VendorCategory;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_NPC.ST_Spawner_NPC
	// Size 144
	/////////////////////////////////////////////
	struct FST_Spawner_NPC {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FST_SimpleNPC	NPC;		//Offset: 48	Size: 96	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_Mesh.ST_Spawner_Mesh
	// Size 92
	/////////////////////////////////////////////
	struct FST_Spawner_Mesh {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TAssetPtr<class UStaticMesh>	Mesh;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		float	RenderDistance;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_ItemContainer.ST_Spawner_ItemContainer
	// Size 104
	/////////////////////////////////////////////
	struct FST_Spawner_ItemContainer {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TArray<struct FST_Spawner_ContainerItemPreset>	ItemsPreset;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TAssetPtr<class UClass>	ContainerType;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_Item.ST_Spawner_Item
	// Size 84
	/////////////////////////////////////////////
	struct FST_Spawner_Item {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FST_ItemResource	Item;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool	SimulatePhysics;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 73	Size: 3
		int32_t	ConditionMin;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	ConditionMax;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_Furniture.ST_Spawner_Furniture
	// Size 65
	/////////////////////////////////////////////
	struct FST_Spawner_Furniture {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FDataTableRowHandle	Furniture;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_Decal.ST_Spawner_Decal
	// Size 56
	/////////////////////////////////////////////
	struct FST_Spawner_Decal {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class ABP_MasterDecal_C* DecalClass;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_ContainerItemPreset.ST_Spawner_ContainerItemPreset
	// Size 16
	/////////////////////////////////////////////
	struct FST_Spawner_ContainerItemPreset {
		TArray<struct FST_ItemSourceConditionRandom>	ItemsPresets;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_CollectableFurniture.ST_Spawner_CollectableFurniture
	// Size 105
	/////////////////////////////////////////////
	struct FST_Spawner_CollectableFurniture {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TAssetPtr<class UClass>	CollectableFurniture;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Items;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
		bool	OverrideSeasonSettings;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Spawner_Animal.ST_Spawner_Animal
	// Size 65
	/////////////////////////////////////////////
	struct FST_Spawner_Animal {
		struct FTransform	SpawnPoint;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FDataTableRowHandle	Animal;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		bool	SpawnDead;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Helper_Spawner_Indices.ST_Helper_Spawner_Indices
	// Size 8
	/////////////////////////////////////////////
	struct FST_Helper_Spawner_Indices {
		TEnumAsByte<E_ActorType>	ActorType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Index;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemSourceConditionRandom.ST_ItemSourceConditionRandom
	// Size 32
	/////////////////////////////////////////////
	struct FST_ItemSourceConditionRandom {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinResourceCount;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxResourceCount;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MinCondition;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxCondition;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Animal.ST_Animal
	// Size 180
	/////////////////////////////////////////////
	struct FST_Animal {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Sex>	Sex;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		float	Health;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Damage;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	FarmAnimal;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_AnimalType>	AnimalType;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[2];		//Offset: 38	Size: 2
		TAssetPtr<class UClass>	Class;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_ItemResourceChance>	ResourcesDeadChance;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemResourceChance>	ResourcesLifeChance;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		float	MatureAge;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MinDeadAge;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_AnimalAgeStage>	AgeStage;		//Offset: 120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[7];		//Offset: 121	Size: 7
		TArray<struct FDataTableRowHandle>	MatureAnimal;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FDataTableRowHandle>	Children;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
		float	ChanceForBabyBirth;		//Offset: 160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxNumberOfChildren;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Price;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	NumberOfVariation;		//Offset: 172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Food;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CharacterVoiceCues.ST_CharacterVoiceCues
	// Size 24
	/////////////////////////////////////////////
	struct FST_CharacterVoiceCues {
		class USoundCue* Attack;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue* Hit;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue* Die;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Tattoo.ST_Tattoo
	// Size 40
	/////////////////////////////////////////////
	struct FST_Tattoo {
		TAssetPtr<class UTexture2D>	TattooTexture;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCItemColors.ST_NPCItemColors
	// Size 192
	/////////////////////////////////////////////
	struct FST_NPCItemColors {
		TAssetPtr<class USkeletalMesh>	Mesh;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ColorTable	FabricDye;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_ColorTable	StitchesDye;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FLinearColor	LeatherColor;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor	MetalColor;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	Dirtiness;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	ClearSlot;		//Offset: 108	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_0[3];		//Offset: 109	Size: 3
		TAssetPtr<class FNone_623>	EquipParams;		//Offset: 112	Size: 80	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCsMeshesDyes.ST_NPCsMeshesDyes
	// Size 1360
	/////////////////////////////////////////////
	struct FST_NPCsMeshesDyes {
		struct FST_NPCItemColors	Hat;		//Offset: 0	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_NPCItemColors	Neck;		//Offset: 192	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_NPCItemColors	Torso;		//Offset: 384	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_NPCItemColors	Hands;		//Offset: 576	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_NPCItemColors	Legs;		//Offset: 768	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_NPCItemColors	Feet;		//Offset: 960	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		struct FDataTableRowHandle	Tattoo;		//Offset: 1152	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FST_NPCItemColors	Back;		//Offset: 1168	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BuildingList.ST_BuildingList
	// Size 24
	/////////////////////////////////////////////
	struct FST_BuildingList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_BuildingCategory>	Categories;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FastTravel.ST_FastTravel
	// Size 240
	/////////////////////////////////////////////
	struct FST_FastTravel {
		TEnumAsByte<E_Ownership>	From;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TMap<TEnumAsByte<E_Ownership>, int32_t>	To;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
		unsigned char uknownData_1[8];		//Offset: 88	Size: 8
		struct FTransform	WaggonLocation;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	PlayerLocation;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform	WaggonerLocation;		//Offset: 192	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_VendorItem.ST_VendorItem
	// Size 40
	/////////////////////////////////////////////
	struct FST_VendorItem {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinCount;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxCount;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>	Season;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_VendorCategory.ST_VendorCategory
	// Size 16
	/////////////////////////////////////////////
	struct FST_VendorCategory {
		TArray<struct FST_VendorItem>	Items;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCsPresets.ST_NPCsPresets
	// Size 1420
	/////////////////////////////////////////////
	struct FST_NPCsPresets {
		struct FName	PresetID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<TEnumAsByte<E_Profession>>	Profession;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_Seasons>>	Seasons;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_Wealth>>	Wealth;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_NPCsMeshesDyes	Meshes;		//Offset: 56	Size: 1360	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	Weight;		//Offset: 1416	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCsGenMeshSettings.ST_NPCsGenMeshSettings
	// Size 224
	/////////////////////////////////////////////
	struct FST_NPCsGenMeshSettings {
		TArray<TEnumAsByte<E_Profession>>	Profession;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TEnumAsByte<E_Seasons>>	Seasons;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		struct FST_NPCItemColors	Mesh;		//Offset: 32	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCsCustomPresets.ST_NPCsCustomPresets
	// Size 104
	/////////////////////////////////////////////
	struct FST_NPCsCustomPresets {
		struct FName	CustomPresetID;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	Head;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	Hair;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FST_NPCsPresets>	Presets;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NPCMeshesGen.ST_NPCMeshesGen
	// Size 128
	/////////////////////////////////////////////
	struct FST_NPCMeshesGen {
		TArray<TAssetPtr<class USkeletalMesh>>	Head;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Torso;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Hands;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Legs;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Feet;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Hat;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_NPCsGenMeshSettings>	Neck;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
		TArray<TAssetPtr<class USkeletalMesh>>	Hair;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CharacterModules.ST_CharacterModules
	// Size 200
	/////////////////////////////////////////////
	struct FST_CharacterModules {
		TAssetPtr<class USkeletalMesh>	Head;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	Torso;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	TorsoHands;		//Offset: 80	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	Legs;		//Offset: 120	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class USkeletalMesh>	LegsFeet;		//Offset: 160	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ArrayOfArraysInt.ST_ArrayOfArraysInt
	// Size 16
	/////////////////////////////////////////////
	struct FST_ArrayOfArraysInt {
		TArray<int32_t>	Integers;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_NeighborhoodBuildingsItems.ST_NeighborhoodBuildingsItems
	// Size 32
	/////////////////////////////////////////////
	struct FST_NeighborhoodBuildingsItems {
		struct FString	BuidingID;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FST_ItemResource>	Items;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CustomNPC.ST_CustomNPC
	// Size 228
	/////////////////////////////////////////////
	struct FST_CustomNPC {
		struct FDataTableRowHandle	RowName;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FText	Name;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Sex>	Sex;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[3];		//Offset: 41	Size: 3
		float	Age;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	MinDeadAge;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_CharacterType>	CharacterType;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 53	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType;		//Offset: 54	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[9];		//Offset: 55	Size: 9
		struct FTransform	TransformLocation;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool	IsVendor;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_2[7];		//Offset: 113	Size: 7
		struct FDataTableRowHandle	VendorCategory;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		struct FName	VoiceID;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FString	PartnerID;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FString>	ChildrenID;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
		struct FString	MotherID;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	HouseID;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	WorkplaceID;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TEnumAsByte<E_Profession>	Profession;		//Offset: 224	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Wealth>	Wealth;		//Offset: 225	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	NightPatrol;		//Offset: 226	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsStoryNPC;		//Offset: 227	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_BuildingCategory.ST_BuildingCategory
	// Size 24
	/////////////////////////////////////////////
	struct FST_BuildingCategory {
		TEnumAsByte<E_Buildings>	BuildingType;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterBuilding_C*>	ListOfBuildings;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CharacterName.ST_CharacterName
	// Size 24
	/////////////////////////////////////////////
	struct FST_CharacterName {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FurnitureList.ST_FurnitureList
	// Size 24
	/////////////////////////////////////////////
	struct FST_FurnitureList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<struct FST_FurnitureCategory>	Categories;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_CharacterList.ST_CharacterList
	// Size 24
	/////////////////////////////////////////////
	struct FST_CharacterList {
		TEnumAsByte<E_Ownership>	Ownership;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_NPC_C*>	ListOfNPC;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_HoldableItemInput_Stage.ST_HoldableItemInput_Stage
	// Size 16
	/////////////////////////////////////////////
	struct FST_HoldableItemInput_Stage {
		TArray<struct FST_HoldableItemInput>	HoldableItemInputs;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_HoldableItemInput.ST_HoldableItemInput
	// Size 33
	/////////////////////////////////////////////
	struct FST_HoldableItemInput {
		struct FName	InputMapped;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FText	ActionText;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
		bool	IsHold_;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_FurnitureCategory.ST_FurnitureCategory
	// Size 24
	/////////////////////////////////////////////
	struct FST_FurnitureCategory {
		TEnumAsByte<E_FurnitureCategories>	Category;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TArray<class ABP_MasterFurniture_C*>	ListOfFurniture;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_QuestNotification.ST_QuestNotification
	// Size 27
	/////////////////////////////////////////////
	struct FST_QuestNotification {
		struct FText	QuestName;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_QuestState>	QuestState;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	IsUpdated;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool	IsCanceled;		//Offset: 26	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Notification.ST_Notification
	// Size 88
	/////////////////////////////////////////////
	struct FST_Notification {
		struct FST_ItemInventorys	Item;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	NotificationImage;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_Notifications>	NotificationType;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[6];		//Offset: 50	Size: 6
		struct FText	WarningText;		//Offset: 56	Size: 24	Flags: Edit, BlueprintVisible
		float	NotificationTimeOut;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float	NotificationDelay;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MiddleNotification.ST_MiddleNotification
	// Size 104
	/////////////////////////////////////////////
	struct FST_MiddleNotification {
		struct FText	NotificationHeadline;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	NotificationText;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		float	NotificationTimeout;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 92	Size: 4
		class USoundBase* Sound;		//Offset: 96	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Knowledge.ST_Knowledge
	// Size 136
	/////////////////////////////////////////////
	struct FST_Knowledge {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	LongKnowledgeDescription;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	ShortPopUpDescription;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
		struct FString	MovieURL_PC;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	MovieURL_PS4;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	MovieURL_PS5;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FString	MovieURL_XBOX;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Hour.ST_Hour
	// Size 12
	/////////////////////////////////////////////
	struct FST_Hour {
		int32_t	Hour;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Minute;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	Second;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_SowHarvestTime.ST_SowHarvestTime
	// Size 2
	/////////////////////////////////////////////
	struct FST_SowHarvestTime {
		TEnumAsByte<E_Seasons>	PlantSeason;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_Seasons>	HarvestSeason;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ChunkStageData.ST_ChunkStageData
	// Size 64
	/////////////////////////////////////////////
	struct FST_ChunkStageData {
		TAssetPtr<class UStaticMesh>	Mesh;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	NumberOfSeasons;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
		TArray<struct FST_ItemSource>	Items;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Seed.ST_Seed
	// Size 224
	/////////////////////////////////////////////
	struct FST_Seed {
		struct FText	Name;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		TEnumAsByte<E_Seeds>	Type;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[7];		//Offset: 25	Size: 7
		TAssetPtr<class UTexture2D>	Icon_White;		//Offset: 32	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TAssetPtr<class UTexture2D>	Icon_Black;		//Offset: 72	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<bool>	SowSeason;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
		TMap<TEnumAsByte<E_FieldPlantStages>, struct FST_ChunkStageData>	StageData;		//Offset: 128	Size: 80	Flags: Edit, BlueprintVisible
		TArray<struct FST_SowHarvestTime>	TimesOfSowAndHarvest;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_MasterTalent.ST_MasterTalent
	// Size 120
	/////////////////////////////////////////////
	struct FST_MasterTalent {
		struct FText	TalentName;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
		struct FText	TalentDescription;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
		TArray<float>	TalentValues;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
		int32_t	TalentTier;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 68	Size: 4
		TAssetPtr<class UTexture2D>	Icon;		//Offset: 72	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t	MaxTalentLevel;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	CurrentTalentLevel;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemSource.ST_ItemSource
	// Size 24
	/////////////////////////////////////////////
	struct FST_ItemSource {
		struct FDataTableRowHandle	Item;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
		int32_t	MinResourceCount;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t	MaxResourceCount;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_ItemSeasonalSource.ST_ItemSeasonalSource
	// Size 64
	/////////////////////////////////////////////
	struct FST_ItemSeasonalSource {
		TArray<struct FST_ItemSource>	SpringItems;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemSource>	SummerItems;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemSource>	AutumnItems;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
		TArray<struct FST_ItemSource>	WinterItems;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	};
	/////////////////////////////////////////////
	// UserDefinedStruct ST_Chunks.ST_Chunks
	// Size 520
	/////////////////////////////////////////////
	struct FST_Chunks {
		int32_t	ID;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FVector>	Corners;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
		struct FVector	CenterLocation;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool	Occupied;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TEnumAsByte<E_ChunkStates>	ChunkState;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<E_FieldPlantStages>	PlantState;		//Offset: 38	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_1[1];		//Offset: 39	Size: 1
		TArray<int32_t>	PlantSlotsID;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
		float	Fertility;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char uknownData_2[4];		//Offset: 60	Size: 4
		struct FST_Seed	CurrentSeed;		//Offset: 64	Size: 224	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FST_Seed	TargetSeed;		//Offset: 288	Size: 224	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		bool	RecentlySown;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char uknownData_3[3];		//Offset: 513	Size: 3
		int32_t	Seasons;		//Offset: 516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};
};
