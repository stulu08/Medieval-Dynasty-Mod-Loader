#pragma once
#include "CoreUObject/CoreTypes.h"
/////////////////////////////////////////////
// Structs: 331
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
struct FST_Seed;
struct FST_Chunks;
struct FST_ItemSeasonalSource;
struct FST_ItemSource;
struct FST_MasterTalent;
struct FST_ChunkStageData;
struct FST_SowHarvestTime;
struct FST_Hour;
struct FST_LoadingTips;
struct FST_Knowledge;
struct FST_MiddleNotification;
struct FST_Notification;
struct FST_QuestNotification;
struct FST_FurnitureCategory;
struct FST_HoldableItemInput;
struct FST_HoldableItemInput_Stage;
struct FST_CharacterList;
struct FST_FurnitureList;
struct FST_CharacterName;
struct FST_BuildingCategory;
struct FST_CustomNPC;
struct FST_NeighborhoodBuildingsItems;
struct FST_SimpleNPC;
struct FST_ArrayOfArraysInt;
struct FST_CharacterModules;
struct FST_NPCItemColors;
struct FST_NPCMeshesGen;
struct FST_NPCsCustomPresets;
struct FST_NPCsGenMeshSettings;
struct FST_NPCsMeshesDyes;
struct FST_NPCsPresets;
struct FST_VendorCategory;
struct FST_VendorItem;
struct FST_FastTravel;
struct FST_BuildingList;
struct FST_Tattoo;
struct FST_CharacterVoiceCues;
struct FST_Animal;
struct FST_ItemSourceConditionRandom;
struct FST_Helper_Spawner_Indices;
struct FST_Spawner_Animal;
struct FST_Spawner_CollectableFurniture;
struct FST_Spawner_ContainerItemPreset;
struct FST_Spawner_Decal;
struct FST_Spawner_Furniture;
struct FST_Spawner_Item;
struct FST_Spawner_ItemContainer;
struct FST_Spawner_Mesh;
struct FST_Spawner_NPC;
struct FST_ItemResourceChance;
struct FST_AnimalCategory;
struct FST_AnimalGroup;
struct FST_AnimalSpawnerArray;
struct FST_FishSpawnerArray;
struct FST_SlotSettings;
struct FST_AnimalList;
struct FST_SlotAnimIDs;
struct FBP_Struct_GroundAnimaBehavior_Defend;
struct FBP_Struct_GroundAnimal_AnimationDetails;
struct FBP_Struct_GroundAnimal_Animations;
struct FBP_Struct_GroundAnimal_CurrentMontage;
struct FBP_Struct_GroundAnimal_Debug;
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails;
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack;
struct FST_QuestNPC_Data;
struct FST_FieldTasksLists;
struct FST_VillagesOriginAndRange;
struct FST_MontagesSettingsArray;
struct FST_CameraRotationLimits;
struct FST_MontagesSettings;
struct FST_FieldCategory;
struct FST_PlantSlot;
struct FST_SeedCount;
struct FST_ItemResourceOwner;
struct FST_FieldList;
struct FST_King;
struct FST_KingNickname;
struct FST_Text;
struct FST_BuildingsStructure_ForVillageManager;
struct FST_SimplifiedBuildingUnlockedStructure;
struct FST_Name_Float;
struct FST_ReputationLimits;
struct FST_AnimalProduction_Progress;
struct FST_Coefficients;
struct FST_Production_Cost;
struct FST_Production_ProfessionData;
struct FST_Production_Progress;
struct FST_Production_Result;
struct FST_Repairing_Progress;
struct FST_Trade_Progress;
struct FST_Trading_Progress;
struct FST_Gates;
struct FST_SplineStructure;
struct FST_FoliageTargetsData;
struct FST_FoliageTarget;
struct FST_KeyMapping;
struct FST_Road;
struct FST_CraftingCategory;
struct FST_Bridge;
struct FST_DecorationSlot;
struct FST_GateList;
struct FST_SplineStructureList;
struct FST_Skills;
struct FST_Challenge_DeliverFood;
struct FST_Challenge_SendPeople;
struct FST_Challenge_DeliverItems;
struct FST_Challenge_DeliverItems_Generic;
struct FST_Challenge_MasterType;
struct FST_Challenge_Reward;
struct FST_Challange;
struct FST_Challenge_Punishment;
struct FST_Challenge_ItemForDeliver_Generic;
struct FST_Challenge_ItemForDeliver;
struct FST_Season;
struct FST_DayPreset;
struct FST_AffectionDialogueResponse;
struct FST_ToddlerGift;
struct FST_Gift;
struct FST_WifeGifts;
struct FST_BridgeList;
struct FST_RoadList;
struct FST_DecorationPreset;
struct FST_Event_AnimalMultipliers;
struct FST_InteractionMontages;
struct FST_CauserTimer;
struct FST_InteractSlot;
struct FST_InteractSlotSettings;
struct FST_HeatingSource;
struct FST_MeshDynamicMaterials;
struct FST_DialogueSounds;
struct FST_Field;
struct FST_PivotParams;
struct FST_CameraSettings;
struct FST_CameraSettings_Gait;
struct FST_CameraSettings_Stance;
struct FST_Camera_Targets;
struct FST_ItemColors;
struct FST_OutfitsPresets;
struct FST_ChromaAnimPaths;
struct FST_DrawingSpawners;
struct FST_DrawingSpawnersArray;
struct FST_SpawnersArray;
struct FST_SpawnedResourceItem;
struct FST_SAVE_FoliageData;
struct FST_Foliage;
struct FST_FoliageArray;
struct FST_FoliageData;
struct FST_ItemGeneratorSettings;
struct FST_ItemResourceCondition;
struct FST_ItemSourceCondition;
struct FST_ToolTransforms;
struct FST_CombinedToolTransforms;
struct FST_MontagesSettingsEnum;
struct FST_DialoguesUsedDialogueLines;
struct FST_LineState;
struct FST_AquaticInteractionData;
struct FST_CharacterSettings;
struct FST_AttachRiver;
struct FST_RoadsArray;
struct FST_AdjacentSectors;
struct FST_SignPlateSettings;
struct FST_Audio;
struct FST_ItemProductionSettings;
struct FST_TurnAnims;
struct FST_CraftingMontages;
struct FST_SittingAnimSettings;
struct FST_ArrayOfMontages;

/////////////////////////////////////////////
// UserDefinedStruct ST_ItemCache.ST_ItemCache
// Size 25
/////////////////////////////////////////////
struct FST_ItemCache {
	struct FName	ID_8_4F27866A4A6D5E95B59001A7FC0A0EB3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Freshness_32_16EF0F6B4BDB49968937E7818101A742;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_23_50AE22D04A3D7347E4065A89669A08B5;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_26_6D4396FD41F514AABBF6B1AAFB9F4FF8;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_39_0093B487483CAD4636DC109C96E3A5B6;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Trade_Progress.ST_SAVE_Trade_Progress
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_Trade_Progress {
	struct FName	Name_63_2D0C87BC4552A1931DB5CB8F9E366663;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Power_70_68B9577C417A9A794ADA18B161ADE903;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_ItemCache>	Cache_74_E548739940A10C1D83384FB7428E0146;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SourceOfResources.ST_SAVE_SourceOfResources
// Size 136
/////////////////////////////////////////////
struct FST_SAVE_SourceOfResources {
	struct FVector	Pos_15_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_16_3D4D772541B8BDFBDD5EDC980EF82C86;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_14_4C9A220B4C1E0292B73E1AB66E46F9FC;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_17_99ED524D494B7C79F210459300A0E507;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	TMap<struct FName, int32_t>	Items_28_6DF668D34DBCFD9F4D7AFAB469EFB671;		//Offset: 40	Size: 80	Flags: Edit, BlueprintVisible
	TArray<struct FName>	Tags_21_297F6C5447C0B3560E1326A248A9061A;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Repairing_Progress.ST_SAVE_Repairing_Progress
// Size 24
/////////////////////////////////////////////
struct FST_SAVE_Repairing_Progress {
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FST_ItemCache>	Cache_73_C0A3BE52424870344208FEB91724E5EB;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Production_Progress.ST_SAVE_Production_Progress
// Size 40
/////////////////////////////////////////////
struct FST_SAVE_Production_Progress {
	struct FName	Name_63_2D0C87BC4552A1931DB5CB8F9E366663;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	PowerOfProduction_64_68B9577C417A9A794ADA18B161ADE903;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	USE_HP_69_C8F7047A4E75F87C5CEDAB9E58C63B54;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 18	Size: 2
	float	HP_68_834A9FA9469CA56045EB629330C247D7;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_ItemCache>	Cache_73_C0A3BE52424870344208FEB91724E5EB;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Modules.ST_SAVE_Modules
// Size 88
/////////////////////////////////////////////
struct FST_SAVE_Modules {
	bool	FIN_36_4A28E9104EDB1143C1C3C0A4EAA4A813;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	HP_33_41862FFC481133EEB55374942A2B83BC;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IM_57_B2496EA842BF34B0568E2F942AF02575;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 9	Size: 3
	int32_t	ID_39_E0882857430933F24AE4A4872DE8ABEE;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BP_42_205849B245343D9102768BB5DBD64F62;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	IP_56_DC68EA2E46BB3E7E1EC73DA965EA071B;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FName>	Dec_71_C98EA107451BD1C8527D5F8D6F193E0F;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ItemStack>	BRes_50_C56F3DA345FEC7F9F9AFA8B2E7350830;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ItemStack>	RRes_51_8DBB3F1345887FE95DF7E3840D036DA0;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ItemStack>	IRes_58_C746B3004DB0BAE9026ACFB514BF6DEF;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_AnimalProduction_Progress.ST_SAVE_AnimalProduction_Progress
// Size 12
/////////////////////////////////////////////
struct FST_SAVE_AnimalProduction_Progress {
	struct FName	Name_63_2D0C87BC4552A1931DB5CB8F9E366663;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Event_BuildingMultipliers.ST_Event_BuildingMultipliers
// Size 4
/////////////////////////////////////////////
struct FST_Event_BuildingMultipliers {
	float	TaxMultiplier_31_D388C9E24A8646C989FF3EB7A8BEB2C1;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ToolCost.ST_ToolCost
// Size 20
/////////////////////////////////////////////
struct FST_ToolCost {
	float	Current_11_C8B6D67848E1630EEA222FA81A901BEB;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Base_12_ACAC7F8B4430016E59005BBEBADBD9BE;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools>	ToolType_8_5326F24349977CB8D343AAB678DFF82D;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	struct FName	Name_15_EA141DAD4F5525AB4AAA548397281ACC;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestriction_Player.ST_EventRestriction_Player
// Size 48
/////////////////////////////////////////////
struct FST_EventRestriction_Player {
	TArray<struct FST_ItemRestriction>	ItemsRequired_28_F48695864C748CD3FA87AE82AFE3180E;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SkillRestriction>	SkillsRequired_23_3A3FAD5F4CC75D16B56AE89D8613C280;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_BuildingTechnology>	TechnologiesRequired_24_1E99C8F8422447CE8D4EC799F69FC052;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestricion_NPCs.ST_EventRestricion_NPCs
// Size 96
/////////////////////////////////////////////
struct FST_EventRestricion_NPCs {
	bool	MoodBelow__7_6AEB39CF471F7655A004009BB1D82CAB;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	Mood_8_227D677A441A00ADBFAAFFA3331CB44C;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RequiredVillagers_5_D481538C4C5A42522929988AB0F152DC;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 12	Size: 4
	TAssetPtr<class FNone_621>	ExcludeAge_13_3E61C5C7433F527AA721CEA267416F1F;		//Offset: 16	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestricion_Fields.ST_EventRestricion_Fields
// Size 4
/////////////////////////////////////////////
struct FST_EventRestricion_Fields {
	int32_t	NumberRequired_2_227D677A441A00ADBFAAFFA3331CB44C;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestricion_Buildings.ST_EventRestricion_Buildings
// Size 92
/////////////////////////////////////////////
struct FST_EventRestricion_Buildings {
	TEnumAsByte<E_EventRestictions_Buildings>	Type_8_44E86CE347256A6FF2E05992B4513555;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SpecificBuildigsType__1_227D677A441A00ADBFAAFFA3331CB44C;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	TAssetPtr<class FNone_621>	BuildingsTypes_5_6B141FAF4B721A7FCC23D194F9518CEA;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	int32_t	NumberRequired_11_B0AE415A42206A049F5612A6AB0FF312;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestricion_Animals.ST_EventRestricion_Animals
// Size 88
/////////////////////////////////////////////
struct FST_EventRestricion_Animals {
	bool	SpecificAnimalType__1_227D677A441A00ADBFAAFFA3331CB44C;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TAssetPtr<class FNone_621>	AnimalsTypes_6_8664D1C54A0103D2B323A2B2BA2CE748;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_Village_Resources.ST_EventEffect_Village_Resources
// Size 56
/////////////////////////////////////////////
struct FST_EventEffect_Village_Resources {
	int32_t	MinRangeNumberOfBuildings_9_D769B973411282CC00EF8B94FFB2F083;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxRangeNumberOfBuildings_10_70A2B2DD45C943585F9FC181D5BBC673;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinResourceRange_11_E20C245E4E0D98FC2061E89854363785;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxResourceRange_12_6F49FA644D85FC556BFF05B62A7441E8;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ResourceRangeIterator_13_8EAEC6A14586F58C5CE76F904DE3AA41;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	TArray<TEnumAsByte<E_ItemCategories>>	ItemCategoriesToRemove_30_C08906C74686894B1869A88C494FE8FF;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FDataTableRowHandle>	ItemToRemove_29_1FF07FFD4086EA6721BC4D92C93001E5;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_Village_Fields.ST_EventEffect_Village_Fields
// Size 24
/////////////////////////////////////////////
struct FST_EventEffect_Village_Fields {
	int32_t	MinRangeNumberOfFields_8_D769B973411282CC00EF8B94FFB2F083;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxRangeNumberOfFields_9_EBB58E48474C3EA0950663B8DA889289;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberRangeIterator_15_F3C3670B483F619B3D580E8772E2884E;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinDamageRange_10_2D1594764C7F2BBC35C6F0B83425CEB4;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxDamageRange_11_7CB4C4D14DA793C88CCB19A503181B38;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DamageRangeIterator_12_0758D314424914FFEFE39488F02E3B07;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_Village_Buildings.ST_EventEffect_Village_Buildings
// Size 24
/////////////////////////////////////////////
struct FST_EventEffect_Village_Buildings {
	int32_t	MinRangeNumberOfBuildings_8_D769B973411282CC00EF8B94FFB2F083;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxRangeNumberOfBuildings_9_2D99983541A92D1CFA48DBA5870A8CDE;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberRangeIterator_15_AF7F634B4F388924942C2994530BCFE8;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinDamageRange_10_C04FE83A44BC7F4547072992105F9EE1;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxDamageRange_11_50E5B762418D780C0C4621AF794CA7C9;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DamageRangeIterator_12_77B81B734A1F281908386D8E8373D8E0;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_Village.ST_EventEffect_Village
// Size 116
/////////////////////////////////////////////
struct FST_EventEffect_Village {
	TEnumAsByte<E_EventEffect_VillageType>	VillageEventType_33_55F97C684C4D278BFE9E59A636A597BC;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UsePrecent__45_9F2C2E4449B3F33D3D5E3089BCB30C65;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	struct FST_EventEffect_Village_Buildings	BuildingDamage_34_6BB616754EBC0756661DA88CA0BAD118;		//Offset: 4	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_EventEffect_Village_Fields	FieldDamage_35_1EF4EE734B28FEBDFAA9F6B096638755;		//Offset: 28	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 52	Size: 4
	struct FST_EventEffect_Village_Resources	ResourcesRemove_36_6EEC7B9E496021726332D69ADEA0199C;		//Offset: 56	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	float	TaxChange_42_1F11566F4D51B58F657DF28301C4727F;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_PlayerParameters.ST_EventEffect_PlayerParameters
// Size 48
/////////////////////////////////////////////
struct FST_EventEffect_PlayerParameters {
	TEnumAsByte<E_EventEffect_PlayerType>	ParameterType_14_296F33F546264731A4BAD49EF14FD6BB;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	RangeMin_8_0DAA216749F509FE93E2F599ED828A47;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RangeMax_9_7460E282427A7C38C603549A540DA23B;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RangeIterator_10_26C5252247BAA9A18A904E992845F932;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SkillRestriction>	SkillType_23_63A2974B4E27E7A3BD219980E173EF6D;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemRestriction>	Items_19_9FDF1EA245583AD1E3D4C8A3C7B37F4C;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_NPCParameter.ST_EventEffect_NPCParameter
// Size 40
/////////////////////////////////////////////
struct FST_EventEffect_NPCParameter {
	TEnumAsByte<E_EventEffect_NPCType>	Illness_37_DC542E6E40F3842F5E125FBAB19D21B5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UsePrecent__41_13E5800C4C925373AD0F9096A5DD285A;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	int32_t	NPCCountMinRange_43_1B737B12495E631BC597C6ACFFD7E7C9;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NPCCountMaxRange_42_3E627DC54584AAACBE512A961243EADE;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NPCCountRangeIterator_22_CE151E07444DD93F6A54FCB31DE2B79A;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	ProductionChange_45_E05F90574B7FDB024D69F884737787CA;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoodChange_39_99907BF7453C7901CBB27E92C37E352E;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SkillRestriction>	ChangeNPCSkill_36_04AF37904B88F4C354F180AB872A0216;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventEffect_HusbandryAnimals.ST_EventEffect_HusbandryAnimals
// Size 16
/////////////////////////////////////////////
struct FST_EventEffect_HusbandryAnimals {
	int32_t	BaseNumberOfAnimals_6_367DFC6C497F494D2E8485B933EE1F8D;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ChanceForRandomNumberOfAnimals_7_53DFAA324631E03B5411E79746D5FBF1;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RandomRangeMin_8_DE2EB3484DCFF20CDBC321858591B449;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RandomRangeMax_9_7ACAB46E41819004ADF4098B725B1D0B;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_VillageRestriction.ST_VillageRestriction
// Size 172
/////////////////////////////////////////////
struct FST_VillageRestriction {
	TEnumAsByte<E_Goal_VillageParametersTypes>	RestrictionType_2_86E29F5B48271426E76598BC4C7019E4;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	ReputationRequired_5_3FD0496C493A695FE1AEB7A3405190A4;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<TEnumAsByte<E_Buildings>, int32_t>	Building_21_D29D702344254587E0CD8E9C6FC70E8C;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	Technologies_14_D12A38924F4D25568A7371AFC4D7D74C;		//Offset: 88	Size: 80	Flags: Edit, BlueprintVisible
	int32_t	Fields_18_EEA8BA4B43154D74A35AB7B7B2783699;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SkillRestriction.ST_SkillRestriction
// Size 8
/////////////////////////////////////////////
struct FST_SkillRestriction {
	TEnumAsByte<E_Skills>	Skill_2_52EECA8841AFBD79C742098161A3CBEC;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	SkillRequired_5_2D48C3AD48DB1A04C754B1BA9379153E;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventButtonRestrictions.ST_EventButtonRestrictions
// Size 208
/////////////////////////////////////////////
struct FST_EventButtonRestrictions {
	TEnumAsByte<E_EventButtonRestrictions>	RestrictionType_5_06C0A07A4C754568185220964ACE0090;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	StatMustBeEqualOrHigher__14_30B7048248540ACDE8269E9AF7112A1E;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	struct FST_SkillRestriction	SkillRestriction_16_B781433A468EFE37E5AD2EA1159B338B;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ComparedNumberOfCoins_17_BF68552343059A500D9806BC2DD40CC0;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_VillageRestriction	VillageParameters_21_C58825824368DF8395F648AFD0F12641;		//Offset: 16	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemRestriction>	Items_25_7E71BA12447BAC454AD95F9E3D2D73E8;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MasterEventEffect.ST_MasterEventEffect
// Size 264
/////////////////////////////////////////////
struct FST_MasterEventEffect {
	float	HappenChance_20_39679BEE4CED146667487F9ADC27C00C;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	MustHappen_26_0A0614D04B821ECDC17634A77071019D;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	struct FText	ChoiceConsequence_23_0DA8A7C64EBB7CAF5D87F3928EF75266;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	BoundEffect_30_93343EF04D7D310060359AB5E90B9259;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_EventEffectType>	EffectType_10_692A6B144C03155FFDCD6B87239ACEAA;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[3];		//Offset: 37	Size: 3
	struct FST_EventEffect_PlayerParameters	PlayerEffect_11_8CE116B14354270A004EE3B8154B504E;		//Offset: 40	Size: 48	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_EventEffect_NPCParameter	NPCEffect_12_0FDAD2494B4F336705E4DF860A9E9015;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_EventEffect_Village	VillageEffect_13_5190742A48AD37BAB64414A3C0325FC7;		//Offset: 128	Size: 120	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_EventEffect_HusbandryAnimals	HusbandryEffect_14_0E403B4C40415EBD0EAF7C9939138AC4;		//Offset: 248	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventButtons.ST_EventButtons
// Size 128
/////////////////////////////////////////////
struct FST_EventButtons {
	struct FText	ButtonDescription_9_61B964E048FE8FD3F7DCE29EF8954C07;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	ChoiceDescription_11_6848F1D3459C919C20750E91D29E2D0F;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	ChoiceConsequences_19_982D3469440D924EF8F2D38617091B2F;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	bool	ButtonHasEffect_1_28D958FD40C0600954AC74AAE5E29CB8;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 73	Size: 7
	TArray<struct FST_MasterEventEffect>	EventEffects_5_B4B9BBC44E7B4D7D5B91E3B5D6CB0CC8;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_EventButtonRestrictions>	ButtonRestrictions_16_4FF81FA5419B4AFE7982E097A6B6FDB4;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	struct FDataTableRowHandle	NextEvent_23_C43E8D0443A6C27F615857B812C04554;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventRestrictions.ST_EventRestrictions
// Size 428
/////////////////////////////////////////////
struct FST_EventRestrictions {
	TEnumAsByte<E_EventRestrictions>	RestrictionType_2_17127A814D8AB984CB2EDBBCA19F0E84;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_EventEffectRelevance>	RestrictionRelevance_33_D344E7E94AB94707BC0B02A84438174F;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	struct FST_EventRestricion_Animals	AnimalsRestriction_15_CE5F08FE4C1EFD2BBF867B835917C1CC;		//Offset: 8	Size: 88	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_EventRestricion_NPCs	NPCsRestriction_16_6D8D4E2C4346490953BE8D82DB8BE0CA;		//Offset: 96	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_EventRestricion_Buildings	BuildingsRestriction_17_7D71E19841F81C26AED6E3B97756A67D;		//Offset: 192	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_EventRestricion_Fields	FieldsRestriction_18_AC6B6946496F36D784969294B53BD281;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 292	Size: 4
	struct FST_EventRestriction_Player	PlayerRestriction_27_477160D546EC2FE4229409B1098E5D3A;		//Offset: 296	Size: 48	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	TAssetPtr<class FNone_621>	Season_22_CC8280B747D4A4324A7D599F5AEA6416;		//Offset: 344	Size: 80	Flags: Edit, BlueprintVisible
	int32_t	Year_30_3F26FFA14B99A00983466397E984591A;		//Offset: 424	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SeasonEvent.ST_SeasonEvent
// Size 128
/////////////////////////////////////////////
struct FST_SeasonEvent {
	struct FText	Name_4_EA7DF8214AC3A4CE90F647BDFEDD58B4;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_5_2C16EA0E4DA06E137EC074B117DDAFA3;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UTexture2D>	Icon_52_29BD7BC143913E397216ADACC3B15161;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	bool	GoodEvent_42_2E0F323341646C74A8D14EB728A88763;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_EventDifficulty>	Difficulty_51_F96F8BAE40766BA8503485A112A4F6B5;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 90	Size: 2
	int32_t	Weight_48_1F82B6894DEDA1398E1B4282F5AB2040;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_EventRestrictions>	Restrictions_36_32144C894D0545E7F01B52A81E452683;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	TArray<struct FST_EventButtons>	EventButtons_40_E4EF579B43F4DFDB4C58F296EF6280B0;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemRestriction.ST_ItemRestriction
// Size 20
/////////////////////////////////////////////
struct FST_ItemRestriction {
	struct FDataTableRowHandle	Item_2_FB1EE43F4CA13C8FD8FA478032A8E9DA;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	NumberRequired_8_8431512C408FCD026864DBA0B9DF94F3;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventHistory_Village.ST_EventHistory_Village
// Size 20
/////////////////////////////////////////////
struct FST_EventHistory_Village {
	TEnumAsByte<E_EventEffect_VillageType>	VillageEventType_33_55F97C684C4D278BFE9E59A636A597BC;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UsePrecent__45_9F2C2E4449B3F33D3D5E3089BCB30C65;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	int32_t	BuildingsFieldsCount_49_91EAB3534CF82EADAED3DBBDE5464CDC;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ResourceCount_53_43FA04ED4968FA8E9DD32DB96A52CB89;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ItemCategories>	CategoriesToRemove_58_51A1AE6E402F58BF3C76829E0DDD6CBC;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[3];		//Offset: 13	Size: 3
	float	TaxChange_42_1F11566F4D51B58F657DF28301C4727F;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventHistory_PlayerParameters.ST_EventHistory_PlayerParameters
// Size 40
/////////////////////////////////////////////
struct FST_EventHistory_PlayerParameters {
	TEnumAsByte<E_EventEffect_PlayerType>	ParameterType_14_296F33F546264731A4BAD49EF14FD6BB;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	Number_24_0DAA216749F509FE93E2F599ED828A47;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	SkillType_28_63A2974B4E27E7A3BD219980E173EF6D;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[7];		//Offset: 9	Size: 7
	struct FST_ItemRestriction	Items_26_9FDF1EA245583AD1E3D4C8A3C7B37F4C;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventHistory_NPCParameter.ST_EventHistory_NPCParameter
// Size 24
/////////////////////////////////////////////
struct FST_EventHistory_NPCParameter {
	TEnumAsByte<E_EventEffect_NPCType>	Illness_37_DC542E6E40F3842F5E125FBAB19D21B5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	ValueChange_54_E05F90574B7FDB024D69F884737787CA;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	ChangeNPCSkill_53_04AF37904B88F4C354F180AB872A0216;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	AffectEveryone_58_2AFE13EF4D5E07829F47BEB9A3B888C5;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[2];		//Offset: 10	Size: 2
	int32_t	NPCCount_46_1B737B12495E631BC597C6ACFFD7E7C9;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	NPCsName_55_B45014904ED855FC48314EB02553A309;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventHistory_Consequences.ST_EventHistory_Consequences
// Size 92
/////////////////////////////////////////////
struct FST_EventHistory_Consequences {
	TEnumAsByte<E_EventEffectType>	EffectType_12_3A0E15A8479776F42497DBBBA5AE376F;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	struct FST_EventHistory_PlayerParameters	PlayerEffects_15_4DAF539449F8E46018A36089486AC811;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_EventHistory_NPCParameter	NPCEffects_18_C8F027E14280F81120B67285A6518B26;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_EventHistory_Village	VillageEffects_21_BA5E93774B0B1513053F01B5D0441A28;		//Offset: 72	Size: 20	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Time.ST_Time
// Size 24
/////////////////////////////////////////////
struct FST_Time {
	int32_t	Hour_3_AEEFB5B84DEEE8C12F6A3182DE467E7D;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Minute_6_A546695E4C53212CA1F43D855C9385A3;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Second_14_6DDCDD6A48FE100153E0E0BC5290E621;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Day_12_6478762240A19089B364A5901DC8BE7A;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Season_10_5643FCE54418815148B2EE90E9C14694;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Year_8_C97E49BB4A9CAC21AC2ECCB01DC6D696;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_EventHistory_Main.ST_EventHistory_Main
// Size 56
/////////////////////////////////////////////
struct FST_EventHistory_Main {
	struct FDataTableRowHandle	EventRowHandle_11_D1343F384E06EB890C664B863121A032;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FST_Time	TimeOfEvent_5_80BD7FBB48E8CABACE27D6B02FD0F1A9;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_EventHistory_Consequences>	Consequences_15_FD83D7EF40EC79DDBB46B9B2773B5462;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_FieldPlantSlots.ST_SAVE_FieldPlantSlots
// Size 64
/////////////////////////////////////////////
struct FST_SAVE_FieldPlantSlots {
	TEnumAsByte<E_FieldPlantStages>	PlantState_3_7E0554E84AB70C151D5E8E9CBA17C95F;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[15];		//Offset: 1	Size: 15
	struct FTransform	Transform_9_7FCCC2C84793D1DF667D8C80E025BB05;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_FieldChunks.ST_SAVE_FieldChunks
// Size 36
/////////////////////////////////////////////
struct FST_SAVE_FieldChunks {
	int32_t	ID_2_7E0554E84AB70C151D5E8E9CBA17C95F;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ChunkStates>	ChunkState_5_BDB6DBB943732F038C9EEE93FFE43CAD;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_FieldPlantStages>	PlantState_8_517B7A2442DAAEA005163E84F1F38A55;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 6	Size: 2
	float	Fertility_11_8E69DF164C9125F260492EAB5A4438F1;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	CurrentSeed_16_603EE657458C81A03E70ABB9821EF3EC;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	TargetSeed_17_C57F6DA54C19B0CD14A2069DBAF884C9;		//Offset: 20	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	RecentlySown_20_F63C80194A2A722E76E1EFB82257D582;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 29	Size: 3
	int32_t	Seasons_24_92F385E74BD1B16CFEFB6798A9463EA6;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Foliage.ST_SAVE_Foliage
// Size 52
/////////////////////////////////////////////
struct FST_SAVE_Foliage {
	int32_t	ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Reset_43_8B63A5B54D83B075414EF0ABA1556E15;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DAB_45_06CE65524E6F5F86653A12BDFEB66DFE;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MD_44_077EEC0F4CCAE5563EBD968BCA3C06CF;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 10	Size: 2
	struct FVector	OT_L_103_FB15DF4E4A02CF6E495D5DA8811E2B64;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	OT_R_68_FE3B97114B2E690A225110815F43013E;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FVector	OT_S_104_FFAEB8A94CCC904048E4C6B7B0C70369;		//Offset: 36	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	CT_Z_111_A22312C94F44FE87CA021E8A96B5FFCA;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Module.ST_Module
// Size 256
/////////////////////////////////////////////
struct FST_Module {
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	ImprovedName_106_8FD568934A1B867F6D842990B1EB39A1;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_ModuleType>	ModuleType_82_AF4CD1C844A77B425413449817A2E39C;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MaterialType>	MaterialType_81_7E8BF9FD43A3DA1E4D8AD3BB9E5C8B2A;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UseWarming_84_91DC91784CF06FCF4BFB90BE46358718;		//Offset: 74	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Improveable_103_DCE53554453821FAD03488ADCB6C2DDF;		//Offset: 75	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	float	BaseLevelOfWarming_85_8676ECBD4EE4F94437C699A181FD7BA3;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BonusLevelOfWarming_88_E48B513147C3C0692617F1B68541709A;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 84	Size: 4
	TArray<struct FST_ItemResource>	BaseResources_46_88356C944C31F9983BCB97B3918A68C5;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemResource>	BonusLevelResources_93_F40A22C7431A581B4DB0778FCF153B42;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
	TAssetPtr<class UMaterialInterface>	BaseMaterial_116_68C979544F38EEE156F3BC81174487CD;		//Offset: 120	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UMaterialInterface>	BonusMaterial_117_2EFFD744480A07B25B42349BCE62691E;		//Offset: 160	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UClass>	BuildingClass_115_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 200	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<TAssetPtr<class UMaterialInstance>>	CustomBaseMaterials_114_19BFE6A14E05F6BC0831A59CDF2D67CF;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalProduction_Recipe.ST_AnimalProduction_Recipe
// Size 56
/////////////////////////////////////////////
struct FST_AnimalProduction_Recipe {
	struct FDataTableRowHandle	RecipeHandler_29_4AA9F44743C16333A1D9209168858ACD;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	TArray<float>	BaseProductionPerHour_9_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	StaticNumberOfAnimals_49_3F3820D14BAA56BA430289915CA01913;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	CheckAnimals_44_BE565FAF4100CB1A317421BE72827AF6;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 37	Size: 3
	TArray<struct FST_Production_AnimalSettings>	Animal_25_3B631E124E9C1F04626E3386CF720572;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemCrafting.ST_ItemCrafting
// Size 72
/////////////////////////////////////////////
struct FST_ItemCrafting {
	TEnumAsByte<E_CraftingRecipeType>	RecipeType_35_D5F3FCF54C35163A28604184F177011A;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	TimeToCraft_5_B650D422438094DAC8D7D6BE79F263A2;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SetFullCapacity__23_E82BF7A7429EDC3936ECB1A68F7B7E73;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 9	Size: 7
	TArray<struct FST_ItemResource>	CraftingResources_12_82D42C4B46FE9F0A19A8CA9E7E56189B;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Tools_Activity>	ToolNeededForCrafting_45_227BB2A0414844657D288F964CB8E6D6;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[3];		//Offset: 33	Size: 3
	float	ToolCost_48_A2C2605D4288A1AC5905209ADF1E6160;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsLockedByTechnology_40_80B267AE49C06AD5F9675F8864164B1D;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_3[3];		//Offset: 41	Size: 3
	int32_t	TechnologySchemeCost_54_12EB6FCD4FAE12B360588F9792892E16;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes>	TechnologyNeededType_62_71DCF1644FB93EE3485164A39F69416D;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_4[3];		//Offset: 49	Size: 3
	int32_t	TechnologyNeededLevel_52_7D01BD4F4F81B76E892C1C89D43112FA;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes>	TechnologyRewardType_66_6D8A269C421784E9921998ABCB690DEC;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_5[3];		//Offset: 57	Size: 3
	float	TechnologyRewardValue_63_7D3302C24A5EA448E5D11A82E3BFB80B;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	SkillRewardType_67_C9E285804C480AABD2DB12BFB0D314B6;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_6[3];		//Offset: 65	Size: 3
	float	SkillRewardValue_68_BBA3011843FE50FE803164B5ED613E67;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Profession.ST_Profession
// Size 72
/////////////////////////////////////////////
struct FST_Profession {
	struct FText	Name_4_BB3073E64E0B1CFA219447B0E7BFD45A;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Profession>	Type_6_F36A36284E3DEE38B58BFD9E5242A190;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	Skill_8_B3D0EC034EE0437E723F4F87B2531BE7;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 26	Size: 6
	TAssetPtr<class UTexture2D>	Icon_11_4D5CF87649DC0CA2B822B59769CC294F;		//Offset: 32	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Item_Crafting_ItemRecipes.ST_Item_Crafting_ItemRecipes
// Size 184
/////////////////////////////////////////////
struct FST_Item_Crafting_ItemRecipes {
	struct FName	RecipeID_14_7201BEC448BA425AC71BF3AB797F91D0;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	RecipeIcon_28_20E5A0744109E39F66EE06ABF4F2CA3A;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_20_4D73796241CE03023CA82B81889259A3;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_27_906179EE45170CB1DCB8708E20223067;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemResource>	Items_24_302259D54D4513507A50D6AE88D4ABB3;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_ItemCrafting	CraftingRecipe_5_361431694C3926250A8048B0090B4756;		//Offset: 112	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_AnimalSettings.ST_Production_AnimalSettings
// Size 3
/////////////////////////////////////////////
struct FST_Production_AnimalSettings {
	TEnumAsByte<E_AnimalType>	AnimalType_2_9AE660A74AB78AC05B3AFFB58324AAE6;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Production_AnimalSex>	Sex_7_BC8C759E4F682ACD867D87BD25EF3FD2;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Production_AnimalAge>	Mature_10_4B59179240E186177756A09A31353048;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_Recipe.ST_Production_Recipe
// Size 64
/////////////////////////////////////////////
struct FST_Production_Recipe {
	struct FDataTableRowHandle	RecipeHandler_29_4AA9F44743C16333A1D9209168858ACD;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	BaseWorkPower_41_C0B87BC942DDE3F32E60DD9B2A8B663C;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	TArray<float>	BaseProductionPerHour_9_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	bool	CheckAnimals_15_2B59E223419A5B2FED9CB9A5B59C3830;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 41	Size: 7
	TArray<struct FST_Production_AnimalSettings>	Animal_25_3B631E124E9C1F04626E3386CF720572;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_WorkersProduction.ST_WorkersProduction
// Size 16
/////////////////////////////////////////////
struct FST_WorkersProduction {
	TEnumAsByte<E_Profession>	Profession_9_D77D8EA84BD1E78DCB481BAB8EFD206B;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	SkillType_17_B0FE229E4F44906EFAE2219D0ECC1DF6;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	class UDataTable*	ProductionSettings_22_FF939E4D4A468967A937A4B85AA7F808;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalsProduction.ST_AnimalsProduction
// Size 8
/////////////////////////////////////////////
struct FST_AnimalsProduction {
	class UDataTable*	ProductionSettings_22_FF939E4D4A468967A937A4B85AA7F808;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BuildingTechnology.ST_BuildingTechnology
// Size 8
/////////////////////////////////////////////
struct FST_BuildingTechnology {
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_21_D77D8EA84BD1E78DCB481BAB8EFD206B;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	TechnologyLevel_22_B0FE229E4F44906EFAE2219D0ECC1DF6;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BuildingModuleSocket.ST_BuildingModuleSocket
// Size 68
/////////////////////////////////////////////
struct FST_BuildingModuleSocket {
	struct FTransform	Transform_5_742E87C0481A3EC65E7FC4A54AD5E7F2;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TArray<struct FDataTableRowHandle>	Modules_23_3D55FB2A4518C904BB3480B24D86D9E3;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	InitialModuleIndex_22_E8E9726A4DB7B827435FDDA15698A2D4;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Building.ST_Building
// Size 353
/////////////////////////////////////////////
struct FST_Building {
	TAssetPtr<class UTexture2D>	Icon_139_B0C90AE14B05A514E925D08246EB99C5;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 64	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Buildings>	BuildingType_28_62A5CF4D49EEC033A1A3CDAE612A0048;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BuildingCategories>	BuildingCategory_69_257E87BF43BE9921217425851133E47E;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 90	Size: 2
	float	BaseTax_128_8676ECBD4EE4F94437C699A181FD7BA3;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UClass>	BuildingClass_118_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_BuildingModuleSocket>	BaseModule_137_59BB339B435769EC982F48A3E4FA897A;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
	unsigned char uknownData_1[8];		//Offset: 152	Size: 8
	struct FST_BuildingModuleSocket	FrameModule_136_53C780B24532CBAEE3C581994C8C342E;		//Offset: 160	Size: 80	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_BuildingModuleSocket>	Modules_42_F1052D5A430FF115077ECE92DE9D67EA;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	EmptyModulesForTemperature_75_C06D24B14648A53A934B1781E33375B0;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[4];		//Offset: 260	Size: 4
	TArray<struct FDataTableRowHandle>	Professions_115_371559944DE3DB18FC15D790BEEB97F2;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible
	float	WorkRadius_63_D82F5DA54D39579BE920C890C938D785;		//Offset: 280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tasks>	WorkplaceTask_35_15EAEB524B765DE6FD13C38C271C805C;		//Offset: 284	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[3];		//Offset: 285	Size: 3
	int32_t	MaxPeople_72_CE1CD90141E3A027CA3AE7905DD9E993;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxAdditionalPeople_142_8E381F6E41C77259451B9EAD95FE3B59;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TotalNumberOfAnimals_50_53E31FD54B749723161392A0583F922B;		//Offset: 296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Level_78_FFA2EF2B4933F958105952B30FC440B9;		//Offset: 300	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	PlacementOnlySocket_82_D473B0A84C44FEB1656C068A7BA323C8;		//Offset: 304	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_4[3];		//Offset: 305	Size: 3
	struct FRotator	StartingGhostRotation_138_5C5C33A6465A6A399D8ABA88FE9B8B7B;		//Offset: 308	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FST_BuildingTechnology	RequiredTechnology_107_B5996AD9401DD710454A78A8F04EEE9A;		//Offset: 320	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_WorkersProduction>	WorkersProductionSettings_143_876E074748CBCE16033B579F09B77255;		//Offset: 328	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_AnimalsProduction	AnimalsProductionSettings_146_907841434B94E36122FCE69C450CE524;		//Offset: 344	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes>	TechnologyDevelopment_103_5E951CF44591DA897E1109AEDEA9D4AD;		//Offset: 352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Furniture.ST_Furniture
// Size 186
/////////////////////////////////////////////
struct FST_Furniture {
	struct FName	TechnologySchemeID_82_9CB1E476446F5B565B4693A22BEF06D3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	Icon_92_492B534B4CB32FE9C57F0BBE4DB47EBD;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	BuildingClass_91_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TEnumAsByte<E_FurnitureCategories>	Category_48_F572CB8E45AD5CA37C0A83A2487401B3;		//Offset: 136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_FurnitureType>	FurnitureType_85_B1CDF05141E53220E8D44CB098A5BB01;		//Offset: 137	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 138	Size: 6
	TArray<struct FST_ItemResource>	Resources_19_88356C944C31F9983BCB97B3918A68C5;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
	float	MaxPlacementAngle_52_5F5DD4E84590C782B5D86FA45737F4A4;		//Offset: 160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	PlacementOnLandscape_59_B822C7794E1978F0AD07C385B9D4E937;		//Offset: 164	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	PlacementOnFloor_60_941DF62A46F5204D094C72977ADA0253;		//Offset: 165	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	PlacementOnWall_61_3DEB52604434CA38C368218B98D44322;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	AutomaticVerticalRotation_90_FDF399E74681277A0A0ADE83782CDF74;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	float	AutomaticVerticalRotationIntensity_101_0C37F8A743061D2BA44A5EBE4C205BF5;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsLockedByTechnology_69_B1B027B14A6D918DD767078D8D37CBC4;		//Offset: 172	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_79_4294923E4BAD60B26865E598F857E8FB;		//Offset: 173	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[2];		//Offset: 174	Size: 2
	int32_t	TechnologyLevel_80_FC68CF1B4DBD7FC647D9A3B371AA4C7B;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TechnologyCost_81_81FE9C964D4C3091DE826A8D6EE82A1A;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MaterialType>	MaterialType_96_A85EBD7A4B0492F7B66D2F8CD8A05BCB;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SeasonalRemove_87_2FD878C94832928D28F528B21A7EBA3E;		//Offset: 185	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GeneratedQuestRestrictions_Technology.ST_GeneratedQuestRestrictions_Technology
// Size 176
/////////////////////////////////////////////
struct FST_GeneratedQuestRestrictions_Technology {
	bool	UseOrConditionInsteadOfAnd__Minimal_11_1CECDE7644450DA7115043A0C4EB9061;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	MinimalTechnology_8_661B8A6C43A75D93CB2D938E49282E30;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	bool	UseOrConditionInsteadOfAnd__Maximal_14_8125C83344E03D110B27E88BDBB21BAD;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 89	Size: 7
	TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	MaximalTechnology_10_C7B1CCB24C59372F7413EDAE1819587E;		//Offset: 96	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalForHuntGoal.ST_AnimalForHuntGoal
// Size 12
/////////////////////////////////////////////
struct FST_AnimalForHuntGoal {
	TEnumAsByte<E_AnimalType>	AnimalType_6_F3C52E8741BCEC2B311076952AE2CBA7;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	MaxAmountToHunt_8_1107241944C2046487DE088B8791B21C;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinAmountToHunt_9_6B7607174EE4D8580E2C249B6A76F73C;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GeneratedQuestRestrictions_Ownership.ST_GeneratedQuestRestrictions_Ownership
// Size 24
/////////////////////////////////////////////
struct FST_GeneratedQuestRestrictions_Ownership {
	bool	UseRestriction_11_43195C634EB646D88910038D4A406497;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	UseSameAsQuestGiver_4_2966256641739D52C779AF9930ED95B0;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	UseOtherThanQuestGiver_5_03DF300F4E5977FC1B5313919B42F56B;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[5];		//Offset: 3	Size: 5
	TArray<TEnumAsByte<E_Ownership>>	OwnershipToPickFrom_14_75D0B79C4FFA98284DCF5DA291BEF755;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GeneratedQuestRestrictions_NPC.ST_GeneratedQuestRestrictions_NPC
// Size 56
/////////////////////////////////////////////
struct FST_GeneratedQuestRestrictions_NPC {
	bool	IsRestrictionRequired_1_AC7E73E44355F98743EC2E9B5C614E71;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<TEnumAsByte<E_Sex>>	NPCRequiredSex_9_F54903794BA1484AAA680D87E7EC323D;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_Profession>>	NPCRequiredProfession_12_4E62CDA845BEA50712F392BD90375FEB;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_CharacterType>>	NPCRequiredAge_13_E49029754773FCF17AAA12B7B87F61AC;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GeneratedQuest_TalkGoalNPCRestrictions.ST_GeneratedQuest_TalkGoalNPCRestrictions
// Size 256
/////////////////////////////////////////////
struct FST_GeneratedQuest_TalkGoalNPCRestrictions {
	bool	TalkToQuestGiver__79_37C6C95142D60E75FBC9AAAF38EFFB57;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	RelationToQuestGiver_81_70648E344F787298B318F493D8C51AE0;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	struct FST_GeneratedQuestRestrictions_Ownership	OwnershipRestriction_76_66641D3641AB2475078F948C45A9C766;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCRestrictions_70_05C177AB4EF0804E8FE39CB627A78156;		//Offset: 32	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCPartnerRestrictions_71_B9014DFA44A245A8910FC187F66455CC;		//Offset: 88	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCChildRestrictions_72_15A1206A4D8C1E4E41923AB5A242F9A9;		//Offset: 144	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCParentRestrictions_73_14A6F79946996562BEF57C99EC94CCF4;		//Offset: 200	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_WaitForTimes.ST_Goal_WaitForTimes
// Size 60
/////////////////////////////////////////////
struct FST_Goal_WaitForTimes {
	struct FText	GoalText_14_C5B194624B30C4655BA18C9571455289;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FST_Time	TimeWhenGoalWasStarted_8_0E9C433A41DC29B0E9606E9AF0CAF1DD;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	WaitTillNextMorning__28_6D13834743A661B713CCD6A3A780C1F0;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WaitTillNextNoon__29_52EC83D14C079F9C404A84907D695136;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WaitTillNextEvening__30_62D850514785343BC2D525B6614A2C3E;		//Offset: 50	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WaitTillNextDay__21_662877814611B3DDD90FE0B16CA97E26;		//Offset: 51	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WaitTillNextSeason__22_3C691AA54590888FA526CAA5C3E4EEFD;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WaitTillNextSpecificSeason__23_E8576D494B87ADADAF98898170AC9DAC;		//Offset: 53	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_Seasons>	SpecificSeason_11_6713C48A4C279B53AEBE788475E89D30;		//Offset: 54	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	WaitTillSpecificYear__34_7FEFC01142A26918615AFAA1B042D020;		//Offset: 55	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	int32_t	SpecificYear_37_043FADB143F96FA7E4C3F68E2F90E44E;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_VillageParameters.ST_Goal_VillageParameters
// Size 56
/////////////////////////////////////////////
struct FST_Goal_VillageParameters {
	struct FText	Goal_18_CEC9885644219766FE041C9B16AE3A1B;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Goal_VillageParametersTypes>	ParameterType_8_A87A5F49462850EC51C80B9F41B30A3C;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	int32_t	NumberNeededToComplete_6_3ED5DF8D4A3DD2E087CCAEB5108AD2D7;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ActualNumber_7_6E2352784F74802CD70B4A8DF454A025;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UseBuildingTypes__14_78AE84F346359294DE89B2887571CB58;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 37	Size: 3
	TArray<TEnumAsByte<E_Buildings>>	BuildingType_15_946C1C66461581DFBBD43592CF8621CC;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GenerateItemsForQuest.ST_GenerateItemsForQuest
// Size 40
/////////////////////////////////////////////
struct FST_GenerateItemsForQuest {
	int32_t	HowMuchItemsToPick_2_17044A474F46EE5F461138A036812F01;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FST_Quest_ItemsToPickFrom>	ItemsToPickFrom_6_E4E861F34FD7B7B726B09CBED8708E46;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Quest_PickedItemsFromGenerator>	PickedItems_9_F54B717A4779ED80449BC8BDE0DC39B4;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Talk.ST_Goal_Talk
// Size 428
/////////////////////////////////////////////
struct FST_Goal_Talk {
	struct FText	GoalText_9_C9E052124BEC72172A667288EADC600C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FString	NPCID_49_DCBBCFBB48CD033D1CC270B568C66896;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FText	NPCName_27_24156E8643798A293504C9A9BA91DFAA;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UDialogue>	Dialogue_63_3B0756644ED14D4839EBF88A049F01E2;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	bool	DeliverItemsToCompleteGoal__39_CD8365234F7AEFC2A10720BB13D298F1;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MustDeliverAllItemsAtOnce__51_D46BD49746AE167F307171A1EFEF136C;		//Offset: 105	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	UseItemsFromStoragesAlso__54_EDFDA5D747E821E4A6A4D08CB8E04F43;		//Offset: 106	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[5];		//Offset: 107	Size: 5
	struct FST_GenerateItemsForQuest	ItemsToDeliver_43_DDE244304DE4C58FF6F3BC8BD25F406E;		//Offset: 112	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions	PersonToTalkToRestrictions_52_953900A546EC33484B1FB9B010EFB6FF;		//Offset: 152	Size: 256	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	bool	UseAreaMapMarker_57_028F863D4BD7D220802D8FAFE2416C05;		//Offset: 408	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 409	Size: 3
	struct FVector	MapMarkerLocation_59_3AD9E2684F082C88485718A3F8ECFAEB;		//Offset: 412	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AreaMapMarkerSize_62_8B57A5454D0025551BE43C9B809C311B;		//Offset: 424	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_SpendTalentPoints.ST_Goal_SpendTalentPoints
// Size 8
/////////////////////////////////////////////
struct FST_Goal_SpendTalentPoints {
	int32_t	NumberNeededToBeSpent_4_7296F8934E18060C53F22AAE0D48C2A3;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberAlreadySpent_5_8460A1874D8241362CB8DF8BC5816E22;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_RemoveFoliage.ST_Goal_RemoveFoliage
// Size 49
/////////////////////////////////////////////
struct FST_Goal_RemoveFoliage {
	struct FText	GoalText_5_EDEE9133420969EB32F57EB0DD3AA0DC;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NumberToRemove_8_BCCE503F4AE823D52B83C2809A7778A1;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberRemoved_9_0EBF5551408CC34DE757F994D69C45B6;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<TEnumAsByte<E_Resources>>	ResourceTypes_12_F83AF88044734F45E85BEE94323E7B64;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_FoliageSpecies>	SpecificFoliageClass_18_4D6335114666220EDF79A38883355BD8;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Population.ST_Goal_Population
// Size 33
/////////////////////////////////////////////
struct FST_Goal_Population {
	struct FText	GoalText_3_71B33E1D4F81F62A323017BBFB847A59;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NeededPopulation_8_5A78379C43C510C51AD0F8B9264BD6B9;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ActualPopulation_9_CC4280734CACE6FFED0D078A252C7458;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	CheckAnimals__11_FFC2A3454CE7AA5E683353A35BBF0D17;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_PledgeTask.ST_Goal_PledgeTask
// Size 32
/////////////////////////////////////////////
struct FST_Goal_PledgeTask {
	struct FText	GoalText_2_CB5E947B4F5AAB42786446972D14823B;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NeededNumberOfNPCs_22_51A96B054FF5EDEDE54CF5A8F149D6D0;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	CurrentNumberOfNPCs_23_BF320C4B4658D8C56BF79B8D90382404;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Hunt.ST_Goal_Hunt
// Size 72
/////////////////////////////////////////////
struct FST_Goal_Hunt {
	struct FText	GoalText_9_C9E052124BEC72172A667288EADC600C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TArray<struct FST_AnimalForHuntGoal>	AnimalsToPickFrom_39_C3DFAFEB42F99E89D5D0D29114EF978B;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	AmountOfTypesToPick_44_49D9967445644918BBBC778EDB5E07F4;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	TArray<TEnumAsByte<E_AnimalType>>	TypeOfAnimal_40_24156E8643798A293504C9A9BA91DFAA;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	AmountToHunt_14_6222BD0B4113BFC4BF5DDCA2C13DEE4F;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	AmountHunted_35_BD2DE7364AD776A2EA0BAFB3FD59D429;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_GetRidOf.ST_Goal_GetRidOf
// Size 32
/////////////////////////////////////////////
struct FST_Goal_GetRidOf {
	struct FText	Goal_6_4D081C974924A78A21D22AB46DA65786;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NumberToGetRidOf_7_DF5002D248F3B32431EF3B9FDA2CEE02;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	GotRidOf_8_D297D410414AF85ED5033283212069DB;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Flirt.ST_Goal_Flirt
// Size 36
/////////////////////////////////////////////
struct FST_Goal_Flirt {
	struct FText	GoalText_2_EEC26A174836841FBF3FB88C9EE0BDB6;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NeededAffection_6_415EC8EC4CC2B3FB97066097F2B2524A;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberOfWomenToFlirt_9_0388D1C34EC33157D30BEB8EBEC4E90D;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberFlirted_10_C780E69D4A6DD5058B66E6A2187B92B1;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Find.ST_Goal_Find
// Size 65
/////////////////////////////////////////////
struct FST_Goal_Find {
	struct FText	GoalText_9_C9E052124BEC72172A667288EADC600C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	WhatToFind_33_24156E8643798A293504C9A9BA91DFAA;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FVector	Location_29_7ADBAA464CD1D1D3626E75962FE1AF84;		//Offset: 48	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RadiusToComplete_32_54BB5F2D4C43F1C5D9A854B907F1DE58;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	ShowOnCompass_35_7307476544A18D30C35FC19DB05124D6;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Family.ST_Goal_Family
// Size 36
/////////////////////////////////////////////
struct FST_Goal_Family {
	struct FText	GoalText_16_01CB1DEE4B8ABBF86CAA41BCE686129E;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	bool	GoalForWife__1_AC762C3741DAD5AA1287EFA2C08814E4;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	DoesPlayerHaveWife_9_5EC52C0344CD9E383537DB85810CE606;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 26	Size: 2
	int32_t	NumberOfChildrenNeeded_11_565294BA4B08B1EB12D748993F837AED;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ActualNumberOfChildren_13_10F9823B41F598F56846749FB545992C;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Custom.ST_Goal_Custom
// Size 64
/////////////////////////////////////////////
struct FST_Goal_Custom {
	struct FText	GoalText_9_C9E052124BEC72172A667288EADC600C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	CustomGoal_34_6FCC7AC742818922E8FB448C30832FBC;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_CompleteQuests.ST_Goal_CompleteQuests
// Size 33
/////////////////////////////////////////////
struct FST_Goal_CompleteQuests {
	struct FText	GoalText_5_C823C5EB4A9655085449AFBAA0B37B43;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	NumberToComplete_8_049B3F9A4C6D878D03B01AB34CDF2B1B;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberCompleted_9_8613366142C25DC545CD928176BDD133;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	MustBeCompletedDuringOneSeason__10_34C03B034C9AC8489A87688CFD9C4174;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Build.ST_Goal_Build
// Size 92
/////////////////////////////////////////////
struct FST_Goal_Build {
	struct FText	GoalText_2_CB5E947B4F5AAB42786446972D14823B;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Goal_BuildTypes>	BuildType_6_31E5F802480A79BD5B11018F85C47507;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 25	Size: 7
	struct FDataTableRowHandle	BuildingObjectToCheck_13_D8017EDC40B631BC033D89888B82CD6C;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle	FurnitureObjectToCheck_14_26594ACC4797D1CED6E1F29E89FEC038;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle	FenceObjectToCheck_15_39273C864C5F6128D768E6B7531CCE54;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	bool	MustBeConstructed__17_51A96B054FF5EDEDE54CF5A8F149D6D0;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 81	Size: 3
	int32_t	NumberToConstruct_23_4413028D4EECF5F0A9D70CA3BAF616F9;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberConstructed_24_36CE2B6941CDDFD893FAB2AE98BB081C;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_ArcheryContest.ST_Goal_ArcheryContest
// Size 24
/////////////////////////////////////////////
struct FST_Goal_ArcheryContest {
	int32_t	NumberOfProjectilesToShoot_11_86C208874E1F043A9DB618A46E1AB55A;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberOfProjectilesShot_14_DDAA2D8B4F1B2CDEBF7A1A818F1F7E57;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	SpecificArcheryTarget_Tag_10_79A74B644C0E529CFC334F81DD5E7238;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	PointsToAchieve_15_2663B6A54ACF13E832EA0F922AAAE6E6;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	PointsAchieved_16_5F199F7942554036998380ADF6C54641;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_Acquire.ST_Goal_Acquire
// Size 72
/////////////////////////////////////////////
struct FST_Goal_Acquire {
	struct FText	GoalText_9_C9E052124BEC72172A667288EADC600C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	WhoWhereTodeliver_27_24156E8643798A293504C9A9BA91DFAA;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FDataTableRowHandle	WhatToDeliver_32_4FC7677A45A0705A63979AA4797C2DE6;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	AmountToDeliver_33_F807F46E423205055B50429661EC4C43;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	AmountDelivered_39_C3BAD91F43F9B4D4C0D41EB9FC1323C0;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestObjective_OnFailed.ST_QuestObjective_OnFailed
// Size 72
/////////////////////////////////////////////
struct FST_QuestObjective_OnFailed {
	TArray<struct FST_MasterGoals>	ObjectiveGoals_6_6188896140ECEA7BA537D885228B6736;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	bool	CompletesQuest__8_406F7BEA4EA2B43DE01C7C9DB45F6384;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveStart_23_F2A917F54BD959D0BB590F948C214A91;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	bool	StartUpdatesDescription__28_932A3A474587B1AE962B66BB16E2A8FF;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 41	Size: 7
	struct FText	Description_38_B4D4042E40238C37995229BE10199447;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MasterGoals.ST_MasterGoals
// Size 1300
/////////////////////////////////////////////
struct FST_MasterGoals {
	bool	GoalCompletesObjective_133_63C2611A455EEA166A1F34A37779E0FF;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_GoalTypes>	Type_2_67370FA648288E1D870278A032FEF45F;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	struct FST_Goal_Custom	CustomGoal_35_0C9B6462458DC31295E2DB92D1F333F8;		//Offset: 8	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Hunt	HuntGoal_36_C9E052124BEC72172A667288EADC600C;		//Offset: 72	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Acquire	DeliverGoal_37_24156E8643798A293504C9A9BA91DFAA;		//Offset: 144	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Talk	TalkGoal_38_6222BD0B4113BFC4BF5DDCA2C13DEE4F;		//Offset: 216	Size: 432	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Find	FindGoal_39_20CD00374F81C101B7021EABDE4718B4;		//Offset: 648	Size: 72	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Build	BuildGoal_56_39D53F5B4280A86CAEC098822A0260EF;		//Offset: 720	Size: 96	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_PledgeTask	PledgeTaskGoal_59_547615EA4893089BF2107DAE8F6096F7;		//Offset: 816	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_GetRidOf	GetRidOfGoal_71_3AA9A641441B41ED9744BAAA36850851;		//Offset: 848	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_VillageParameters	VillageParameters_79_97BD1C044B1F69B7D334518FD26450D8;		//Offset: 880	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_SpendTalentPoints	SpendTalentPoints_83_55145C6448DB9259FE04A696853E340F;		//Offset: 936	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Goal_Family	FamilyGoal_87_8035690B4BD293D17AD869A2B03EC9A2;		//Offset: 944	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_Population	PopulationGoal_90_3FDC8B664F65C2E7FF9CA4BA62D187D9;		//Offset: 984	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_WaitForTimes	WaitForTimeGoal_93_5C47508C4D60348E88B1EE8CFE802A2D;		//Offset: 1024	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_ArcheryContest	ArcheryContestGoal_107_711D36014BA2DF93000AE5BDFC9C593B;		//Offset: 1088	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Goal_Flirt	FlirtGoal_116_52235D1D4A876D284A1FAEAFF1D9F3A4;		//Offset: 1112	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_CompleteQuests	CompleteQuestsGoal_119_F5A389254A39337B058252B046387EF0;		//Offset: 1152	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Goal_RemoveFoliage	RemoveFoliageGoal_122_F079F683486F8C6095C28493239765C6;		//Offset: 1192	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TEnumAsByte<E_GoalState>	GoalCompleted_72_CAF8FA4040D3E3CD5A0B43A07602CA59;		//Offset: 1248	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	GoalLimitedByTime__99_D36B74344F08A66216F9C5BB9893E5B7;		//Offset: 1249	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[2];		//Offset: 1250	Size: 2
	struct FST_Time	BaseTimeForGoal_110_4507406944EA153962D3E0AEEA4ABDD4;		//Offset: 1252	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time	TimeForGoal_101_094A215F473DED6413A9A48D1C31B191;		//Offset: 1276	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Goal_ChangeDialogue.ST_Goal_ChangeDialogue
// Size 56
/////////////////////////////////////////////
struct FST_Goal_ChangeDialogue {
	struct FString	NPCID_7_21C854B94936B0245D86AE84B8FFB7BF;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TAssetPtr<class UDialogue>	Dialogue_8_FA9C9120432A57509FE158A2A9871FC7;		//Offset: 16	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Quest_PickedItemsFromGenerator.ST_Quest_PickedItemsFromGenerator
// Size 24
/////////////////////////////////////////////
struct FST_Quest_PickedItemsFromGenerator {
	struct FDataTableRowHandle	Item_6_A0A88C4D462366662467B9BA81666176;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	AmountToDeliver_7_F5BCB56C4C98968AE109C58684CC72F6;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	AmountDelivered_8_0257A4D04498412EE97D638DC8B62DE7;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Quest_ItemsToPickFrom.ST_Quest_ItemsToPickFrom
// Size 24
/////////////////////////////////////////////
struct FST_Quest_ItemsToPickFrom {
	struct FDataTableRowHandle	Item_6_0C9CCE1B4E17C6489F9FC182EFA3EC6A;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MaxAmountToDeliver_ForGenerating_13_4E10DCA94D0C09FC1F506180AC5AFB0C;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinAmountToDeliver_ForGenerating_14_34C8CD4E44CE04E554135E8D61FA6D7C;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestReward.ST_QuestReward
// Size 232
/////////////////////////////////////////////
struct FST_QuestReward {
	struct FST_GenerateItemsForQuest	Items_51_0EF38CEA4E8D860F984909914B92866D;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	Liking_45_6F7DB08B49144B1A745A5E8BCBCC35D1;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Affection_46_50E0E2134B0085B095732FB24137EF9E;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DynastyReputation_48_5D55F5544DF91AF2E861C49243525A08;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 52	Size: 4
	TMap<TEnumAsByte<E_Skills>, int32_t>	SkillExperience_43_1A39A82F454A6F275541FD9BD5545D5D;		//Offset: 56	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	TechnologyPoints_56_48AC28C745ED750A805FDEAF45E7B6AF;		//Offset: 136	Size: 80	Flags: Edit, BlueprintVisible
	struct FDataTableRowHandle	DevelopmentStage_60_1E7B45ED4A7F77566F23FA8F4F2B09F5;		//Offset: 216	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestObjectives.ST_QuestObjectives
// Size 216
/////////////////////////////////////////////
struct FST_QuestObjectives {
	TArray<struct FST_MasterGoals>	ObjectiveGoals_6_6188896140ECEA7BA537D885228B6736;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	bool	CompletesQuest__8_406F7BEA4EA2B43DE01C7C9DB45F6384;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveStart_23_F2A917F54BD959D0BB590F948C214A91;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnObjectiveEnd_27_6A9BC1BA41BB9A89AEE6328810784E1D;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	bool	StartUpdatesDescription__28_932A3A474587B1AE962B66BB16E2A8FF;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 57	Size: 7
	struct FText	Description_38_B4D4042E40238C37995229BE10199447;		//Offset: 64	Size: 24	Flags: Edit, BlueprintVisible
	bool	EndUpdatesDescription__50_CC9D0333467AF90C0A31AC990982C1F2;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[7];		//Offset: 89	Size: 7
	struct FText	DescriptionOnEnd_51_19027AC046558C62449F06A1C2A1E317;		//Offset: 96	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_ObjectiveState>	ObjectiveCompleted_37_660378FA416B5F342424DAA5FD592AC0;		//Offset: 120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	ChangeObjectiveOnFailed_45_6617F9F44AE26C228A076EB26C256C46;		//Offset: 121	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_3[6];		//Offset: 122	Size: 6
	struct FST_QuestObjective_OnFailed	ObjectiveOnFailed_46_3CE952014BF2B56C5269FBA4A76903D9;		//Offset: 128	Size: 72	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	TArray<struct FST_Goal_ChangeDialogue>	ChangeDialoguesOnFollow_55_2889752B48C0DF526C69C4B904C379C6;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestFailPenalty.ST_QuestFailPenalty
// Size 8
/////////////////////////////////////////////
struct FST_QuestFailPenalty {
	int32_t	DynastyReputation_4_8CE010F54D3E0BCF45FE81A0AE48EAAB;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ChanceForKingChange_5_2488FA02470BC823C349B4B13EC70516;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GenerateQuestReward.ST_GenerateQuestReward
// Size 392
/////////////////////////////////////////////
struct FST_GenerateQuestReward {
	struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestictions_59_2F37C71D44EFB22A229E7488621DB230;		//Offset: 0	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GenerateItemsForQuest	Items_51_0EF38CEA4E8D860F984909914B92866D;		//Offset: 176	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	Liking_45_6F7DB08B49144B1A745A5E8BCBCC35D1;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Affection_46_50E0E2134B0085B095732FB24137EF9E;		//Offset: 220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DynastyReputation_48_5D55F5544DF91AF2E861C49243525A08;		//Offset: 224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 228	Size: 4
	TMap<TEnumAsByte<E_Skills>, int32_t>	SkillExperience_43_1A39A82F454A6F275541FD9BD5545D5D;		//Offset: 232	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_TechnologyTypes>, int32_t>	TechnologyPoints_56_48AC28C745ED750A805FDEAF45E7B6AF;		//Offset: 312	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GenerateObjectivesForQuest.ST_GenerateObjectivesForQuest
// Size 216
/////////////////////////////////////////////
struct FST_GenerateObjectivesForQuest {
	struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestictions_5_9DB8A975422E7D03F3DA6996A625AAE7;		//Offset: 0	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<int32_t>	RequiredSeason_18_CF3D6FC340176FFE58D87DBEEDCBA6C6;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	WhosePersonalityShouldBeChecked_14_EA1F35DE470D67CFB3B0E8A4B621F78D;		//Offset: 192	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_NPCPersonality>	RequiredNPCPersonality_11_8C971ACF4BDEE9421AA95490A4CFF5C3;		//Offset: 193	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 194	Size: 6
	TArray<struct FST_QuestObjectives>	Objectives_7_2E85E1AA402F4A5B10295181C620E609;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GeneratedQuestRestrictions.ST_GeneratedQuestRestrictions
// Size 456
/////////////////////////////////////////////
struct FST_GeneratedQuestRestrictions {
	TArray<int32_t>	RequiredSeason_42_421C532649607C7E1E983A81817FBC3E;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver>	RelationToPlayer_79_7EBDA70844C357248777E08C2DFD7DD0;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	struct FST_GeneratedQuestRestrictions_Technology	TechnologyRestriction_82_8081798F4C8CD0B0F4E0DCBA00FAD57A;		//Offset: 24	Size: 176	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	MinimalReputation_86_D7E83739438429D6CCE938ADF7E97F32;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaximalReputation_88_286127F94B6E242F80B016B09A795241;		//Offset: 204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_Ownership	OwnershipRestriction_76_66641D3641AB2475078F948C45A9C766;		//Offset: 208	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCRestrictions_70_05C177AB4EF0804E8FE39CB627A78156;		//Offset: 232	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCPartnerRestrictions_71_B9014DFA44A245A8910FC187F66455CC;		//Offset: 288	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCChildRestrictions_72_15A1206A4D8C1E4E41923AB5A242F9A9;		//Offset: 344	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_GeneratedQuestRestrictions_NPC	NPCParentRestrictions_73_14A6F79946996562BEF57C99EC94CCF4;		//Offset: 400	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ChallengeRestrictions.ST_ChallengeRestrictions
// Size 64
/////////////////////////////////////////////
struct FST_ChallengeRestrictions {
	TArray<int32_t>	RequiredSeason_3_930D7ACF4F55C4734100E9BB7505D393;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_GeneratedQuestRestrictions_Technology>	TechnologyRestriction_6_A1B8FEB64D83D06E57F430AF64DA6E3A;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	MinNumberOfMaleNPCs_13_232E860647F30AFECE4972BDA602D03A;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinNumberOfFemaleNPCs_14_518ABB634BBDA8D8B88EB6ADDCCA9501;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_KingdomStatus>	RequiredKingdomStatus_21_C8C97E6C45AB3D6793DA069E8C741AC7;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 41	Size: 7
	TArray<struct FDataTableRowHandle>	KingTypesRestriction_22_5B5E9FF94C2C905BB7B827954268E8C6;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_StringTable_IDKey_Pair.ST_StringTable_IDKey_Pair
// Size 24
/////////////////////////////////////////////
struct FST_StringTable_IDKey_Pair {
	struct FName	StringTableID_4_6826F1AF4FFA443BA23DDA939DAC93CB;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FString	RowKey_7_4E26ABFA4DAC84ECB6064BA3A2BCDCD6;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestInfos.ST_QuestInfos
// Size 976
/////////////////////////////////////////////
struct FST_QuestInfos {
	struct FName	QuestID_38_7BA6032F4D2786BDD742958980780B0E;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FText	Name_3_5D2BD6C041E961D204DEE58649580481;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_QuestCategories>	Category_5_3F9CD7B34498DC27ACE65D88B31F4EC9;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	struct FText	Description_8_CDF99D7C4F708C33E5AB71AF2F79099F;		//Offset: 40	Size: 24	Flags: Edit, BlueprintVisible
	struct FST_GeneratedQuestRestrictions	RestrictionsForGeneratedQuests_49_A296082945844B7D3EA2F49E6C0C3064;		//Offset: 64	Size: 456	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ChallengeRestrictions	RestrictionsForChallenges_77_F6B2EFA54A4A73FCA6B203A51DD896F9;		//Offset: 520	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_GenerateQuestReward>	GenerateQuestReward_74_A7AE080541A134EF1150A0A51B20D338;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_QuestReward	CompletionReward_24_A22815F248046F0828C245A1FB71C7FE;		//Offset: 600	Size: 232	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_GenerateObjectivesForQuest>	GenerateObjectivesForQuest_70_ADA0E9C44576CEAF250F60833634C48E;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	TArray<struct FST_QuestObjectives>	QuestObjectives_42_A3C4FB214AAA7EAAF9CAAA849961E628;		//Offset: 848	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	TEnumAsByte<E_QuestState>	State_23_DFCF9AD04F25106777C87B88F01CC887;		//Offset: 864	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[7];		//Offset: 865	Size: 7
	struct FString	QuestGiverNPCID_52_EFF2F8514820EFD26A38388C6F28872D;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FText	QuestGiver_48_B6B77A4E42001A9FA2A978B04572B3CA;		//Offset: 888	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	Duration_31_196C34394ECEAC57CE005F86BD88975C;		//Offset: 912	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SeasonalCheckForDuration_32_AA8A21484DAED07E75D882A3F71BE0D6;		//Offset: 916	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 917	Size: 3
	int32_t	QuestGiverMaxAge_58_37331E404AE7C7800BB0C28297D4A86B;		//Offset: 920	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[4];		//Offset: 924	Size: 4
	TArray<struct FDataTableRowHandle>	NextQuests_66_83B225014B04B26EBB48A4AFD9AB6C37;		//Offset: 928	Size: 16	Flags: Edit, BlueprintVisible
	bool	WasQuestRewardGiven_60_0C79F05A473D01936405B3AFE0AE565B;		//Offset: 944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_4[3];		//Offset: 945	Size: 3
	struct FST_QuestFailPenalty	QuestFailPenalty_81_5D6D335743E20E1DB33AB39F099FF99F;		//Offset: 948	Size: 8	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_5[4];		//Offset: 956	Size: 4
	TArray<struct FST_StringTable_IDKey_Pair>	DescriptionStringTableKeys_85_DF7D943E46F473CAC247AFA3166BA833;		//Offset: 960	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ColorTable.ST_ColorTable
// Size 16
/////////////////////////////////////////////
struct FST_ColorTable {
	TArray<struct FLinearColor>	Color_4_08EB58A04D4A4CEDA1A17DBAF3BFA186;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemResource.ST_ItemResource
// Size 20
/////////////////////////////////////////////
struct FST_ItemResource {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	Count_5_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_VendorSettings.ST_VendorSettings
// Size 32
/////////////////////////////////////////////
struct FST_VendorSettings {
	TEnumAsByte<E_Vendor>	VendorType_17_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	MinCount_11_9C54216D420D6D02D21580A8369F52E2;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxCount_12_CE5E6F724498D71864AE598360735AF0;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 12	Size: 4
	TArray<bool>	Season_15_40862C9C4F5EA62BD5D822A7F2726E88;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemTool.ST_ItemTool
// Size 48
/////////////////////////////////////////////
struct FST_ItemTool {
	TEnumAsByte<E_Tools>	ToolType_Animation_10_470C90FB4A4FAC54DE8267911C11F662;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools_Activity>	ToolType_Activity_9_51B935A341DC65F56AEFA48848F85157;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 2	Size: 6
	TAssetPtr<class UClass>	HoldableClass_11_0B95F94245C55429626C82B945BFD43C;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemStats.ST_ItemStats
// Size 106
/////////////////////////////////////////////
struct FST_ItemStats {
	float	Weight_2_89CAA9DF463346F6950C20BAE02CBD43;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_4_49664BD749848557C63E86BB5C0B599A;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Water_6_ADE5ED9C4928A918467735BDF8019788;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Health_8_57A5EB284A8F6AC37A3ABA9C56503368;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Stamina_10_0A0CB02B47F5A0DA6577869EC978E546;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Wood_12_E28365AF4F15F6F69B0D3B818F5FBA69;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Price_35_B965340842A0EF27870C788C2086AEE1;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D	DamageRange_87_1CF05FD849873CC10176858FC1AF0E1B;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Extraction_20_E2D293F6432111A6BA6C08B1627F7016;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_24_7A5202664251496364667CB4FAA2FCDA;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_27_8C6A27724D3F04371AEB7BAE9EF0D386;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Poison_46_95714754492E19F47F79B385C2B6E30F;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Alcohol_45_DA29D94F4EDBACB996846BBDB7FB167D;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	EffectDurationTime_49_FF877E7C45AD9CD3C9B5FCBA467F777A;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HealthPerSecond_52_F4F0126C4A017ADF6A39AB928680FBCD;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AdditionalMaxHP_55_C42CF0FA4EEF6F5EAB82DAA85C2F009B;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	StaminaMultiplier_58_AA633ED94E790724CABE929B80FAE0E8;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	FoodMultiplier_61_8556CE2A4183902DDB4F71AD640A5B4E;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	WaterMultiplier_64_401AFCD947E479A9BC51C7A35AC5FE32;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	TurnOffHarmfulPoison_66_AE826BE648D93BA98653B587C111C51B;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 81	Size: 3
	float	PoisonPerSecond_69_01A528B64BFE742CFF8FFDAE1B366DC3;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	NightVision_71_CD7BA9614DA062EB6683108B07F3E441;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 89	Size: 3
	int32_t	TemperatureTolerance_74_D1D972EB49D1CE97490572B2D3B95EC1;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SkillsReset_76_1D943069456A648AD26C968D330DD901;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 97	Size: 3
	float	DamageMultiplier_79_32FEDDCC4BFED43E3B2215AC2F34B27F;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	AnimalRepel_81_155D570B4046A2721DCA84A0791A3455;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_WeaponDamageType>	WeaponDamageType_84_074C844C4883E76C0D35BF84F980680A;		//Offset: 105	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemSettings.ST_ItemSettings
// Size 360
/////////////////////////////////////////////
struct FST_ItemSettings {
	struct FText	Name_2_0F6942554FF42FF85BEDD3A18817C5BC;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	ShortDescription_54_5CE992304BA2A12BA9FB23A408554B6F;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_57_DCAD748D425CF3DDFF7DF2B59A4BF3E0;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_ItemCategories>	Category_7_9C3B04A844A662B3DC7F67BA23B7D8C1;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ItemSubCategories>	SubCategory_19_7AD71F4F4A5DCD8460576788A409D638;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Droppable_10_5050046546B7EF0A4A36929A660DE69A;		//Offset: 74	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[5];		//Offset: 75	Size: 5
	class UTexture2D*	Icon_13_97F7A1E7482864A723E09AA3C0F762D3;		//Offset: 80	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	WorldMesh_77_A3DD2CE84C4293C7F8B84F81F050A925;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	bool	UseCondition_21_21EBD9064D62473D72B8B28C3A5E8631;		//Offset: 128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 129	Size: 7
	TArray<struct FST_ItemResource>	BrokenItems_71_67B096714135FEB226E084A1B454A620;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
	bool	UseFreshness_30_0FD8674847F42FE2A019029CA3F964C2;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 153	Size: 3
	float	FreshnessPerSeason_38_9B1A08AE4E990944FF4F3E84CE38756E;		//Offset: 156	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	ExpiredItems_69_4893FD344A9C3DF46A5C00B9ABE132EB;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
	bool	UseCapacity_42_4753C86E4DA6F6CF507FF58C86A9750E;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_3[3];		//Offset: 177	Size: 3
	int32_t	Capacity_45_08CF246946B817630F67A293A6E5F8CD;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FDataTableRowHandle	ExhaustedItem_48_2B7BA8AE465AF5B1175AEAA7BA98DE46;		//Offset: 184	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	bool	SeasonalRemove_Player_70_A14566AE4847059197A45597024DAA64;		//Offset: 200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	SeasonalRemove_73_DE4213404320BB797864A08DD3085F96;		//Offset: 201	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_4[6];		//Offset: 202	Size: 6
	TAssetPtr<class UStaticMesh>	AdditionalWorldMesh_76_E95EEBE344BE4CE4795A43A7BB3EFB47;		//Offset: 208	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TEnumAsByte<E_Production_StoragePlaces>	Storage_63_D123E2AE403A457B2B7277A7FC0F3289;		//Offset: 248	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ShopType>	ShopType_87_2FDBA15445D266CCC10216911144FA8D;		//Offset: 249	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_5[2];		//Offset: 250	Size: 2
	float	RenderDistance_68_656BDA964FEC0F8BCB4574AADEA54BF3;		//Offset: 252	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Quest_75_DD8EE38745B0DFF1E35945947FFBA4D7;		//Offset: 256	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_6[7];		//Offset: 257	Size: 7
	struct FDataTableRowHandle	QuestReference_90_DA95241E4983A5FB389E4693E7B14E2F;		//Offset: 264	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	TAssetPtr<class USoundCue>	Consume_Sound_94_FCF2F9CD4059189844F19E95C474BFE1;		//Offset: 280	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USoundCue>	PickUpSound_93_78C3E13F4346DA08483497A3BBD41FEF;		//Offset: 320	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemPhysics.ST_ItemPhysics
// Size 24
/////////////////////////////////////////////
struct FST_ItemPhysics {
	bool	SimulatePhysics_1_E14E75A34CDADB80C3662CB18E5BFB00;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	Mass_6_42FC0E37493B2FA3EADCB599F0CD8E31;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	LinearDamping_9_2259047B416DEB95D37E9CBB4944DF56;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AnguralDamping_10_A0DFDA174507935892688F9248184C55;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IgnoreIK_13_B4C211FA4B15D03BA329B298C7B01B72;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 17	Size: 3
	float	AquaticBoyuancyForceScale_16_6CD39C984B249AA7E26B018B415420B1;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemOutfit.ST_ItemOutfit
// Size 240
/////////////////////////////////////////////
struct FST_ItemOutfit {
	TEnumAsByte<E_EquipmentCategories>	EquipmentSlot_13_0719CDA84379C1A84AF3EA8ECDC759AB;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TAssetPtr<class USkeletalMesh>	EquippedMesh_30_5CA016B24273B02A0AA21E933E8EBF4B;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	AlternativeEquippedMesh_31_461B6ED645C5E9BFB420C387C5B991BF;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	EquippedStaticMesh_32_B6FF261A480EEE7E6518C2BDA82189F7;		//Offset: 88	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	float	HeatProtection_16_90CD6DAF46A9093D676E27B794F6F710;		//Offset: 128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	ColdProtection_18_B3804E5E44AADA4961E8058DA2F37B18;		//Offset: 132	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_ColorTable>	Dyes_22_9982E67A4BCC1F4369471DA0475ADC81;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
	float	WeightCapacity_25_F15BDCD9442B50EA77F9739EC07C070D;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 156	Size: 4
	TAssetPtr<class FNone_621>	EquipParams_29_72B85DBF4874A705C6913C8A6E6C5435;		//Offset: 160	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemAmmo.ST_ItemAmmo
// Size 48
/////////////////////////////////////////////
struct FST_ItemAmmo {
	TEnumAsByte<E_Ammo>	ToolType_7_470C90FB4A4FAC54DE8267911C11F662;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TAssetPtr<class UClass>	ProjectileClass_12_0B95F94245C55429626C82B945BFD43C;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemDetails.ST_ItemDetails
// Size 848
/////////////////////////////////////////////
struct FST_ItemDetails {
	struct FST_ItemSettings	Settings_185_CD91A9114DB26032FE6155BF452EB4BB;		//Offset: 0	Size: 360	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemStats	Stats_182_EB549DF94F2DAB5D31662AAF83E56848;		//Offset: 360	Size: 108	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 468	Size: 4
	struct FST_ItemTool	ToolSettings_191_6690B1EB4DDF75B8051B4D9334B1C310;		//Offset: 472	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemOutfit	OutfitSettings_192_4326F1D14EF8A7E23DF7EE8D1A46D22E;		//Offset: 520	Size: 240	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemAmmo	AmmoSettings_196_E19624AA4A9806EF874D439DA5E113D7;		//Offset: 760	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemPhysics	Physics_169_68A85A054AF7B159998F9892DED53F43;		//Offset: 808	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_VendorSettings>	VendorSettings_200_99BB8204490554654DBCB8A0CD80504C;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DevelopmentStage.ST_DevelopmentStage
// Size 32
/////////////////////////////////////////////
struct FST_DevelopmentStage {
	struct FText	Name_5_71E4F7874177D7C8B101D594C1372205;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_DevelopmentStages>	Type_10_516F173644E7F4378BD4F1A713967AA6;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	int32_t	BuildingLimit_7_2B383F2A4DCCF3415AD797A3B00A4043;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_NPCDialogue.ST_SAVE_NPCDialogue
// Size 120
/////////////////////////////////////////////
struct FST_SAVE_NPCDialogue {
	TArray<struct FName>	DialAffection_33_DB10AC9C4A412CA25D78E0928533F559;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	bool	UsedAffection_7_FB7A5AFB43BE2B48112ED6A51A529FDA;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WasSpokenTo_12_DA1C41134E864A4E190CF6881E82509C;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 18	Size: 2
	float	TalkChAffection_18_7CEA0971432E68CD6C3443B773D8E925;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	GiftGiven_27_315BF31C4FDC3D1B61AD83B7D63F8C10;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 25	Size: 3
	int32_t	DecRelation_28_2BDF9C55442572B708C9FFBD22FD7514;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Smalltalk_29_854C713A4A93EC9D970833B13B5880EE;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WifeDayText_35_92F181D142948433357D5E811023EEB8;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	FirstDial_37_048F1F8E40274CE9BF02DA885ECB175E;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[5];		//Offset: 35	Size: 5
	TMap<unsigned char, bool>	FirstConvers_42_848629774FB793214FB315B79A315190;		//Offset: 40	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_NPC_Skillss.ST_SAVE_NPC_Skillss
// Size 48
/////////////////////////////////////////////
struct FST_SAVE_NPC_Skillss {
	int32_t	E_L_88_87035C8C4554FD207A64F392A82F8C80;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	E_P_92_F7D4DF7945F1CAACC9C37B9BC8D8B78E;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	H_L_87_BDAAE3B24DB2260CE2A8E291179CE762;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	H_P_93_9629906D4D6DACC9B30491BA93E86A46;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	F_L_90_AB4C50FD4267F3D70946EABDE7841042;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	F_P_94_93036BD34881A44857791AA12CE11447;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D_L_83_D4D5072F4C90181D22D20584CF754102;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	D_P_95_E0C646B6426BB7F802F83E93B97F5BF4;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	S_L_80_380CB82E4C3CAFE24FB611B17954B35F;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	S_P_96_D3401DE14D764B06412681B4A5E3E851;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	C_L_78_2067C5474E664F95D07DB69DD2B8968B;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	C_P_97_448203AB4EE498EFCDCDEAA7CBBA3CB6;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_NPC_Blackboards.ST_SAVE_NPC_Blackboards
// Size 39
/////////////////////////////////////////////
struct FST_SAVE_NPC_Blackboards {
	bool	Follow_102_41BD2E8C4E7D09474E6F1EBA2E4F8C0E;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	QuestBlocking_143_4907D8664EA28376AD1C67AA6D0B8BF0;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	RotPlayer_125_F0FD5C04493F3BF8CBDA1FAF4B85EB98;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[1];		//Offset: 3	Size: 1
	struct FVector	TargetLoc_126_BA50C9DD431B01CDFB829A8DA5065133;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	LA_Targ_128_6B8E7258458570784E4CB297019123D2;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	D_Cycle_132_14410EAB4FD865A7897B42AAAB6A9B7C;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	NPCBeh_133_E0DB3EC443B41577CB2010AC7382450B;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	C_NPCBeh_134_89A5B5E14BC63DCF4DCB11A2FDCFA861;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	WorkTask_111_5B8AAB1D4837C797DB584DBD388D0D3F;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Task_112_8F0280F1422C6D12EF76609F7F762030;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	C_Task_135_FAD5CE69402098ACDFA4CD8676E33E7F;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	TaskState_114_930CA1364BEE6C393A7A189FB36E2A9E;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	ResState_136_CFC8478F4FDFECED385BE2805F700059;		//Offset: 35	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	C_ResState_137_B0891DA147F86EDE5EA200B442DE8E9E;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Talk_117_0143FA93453205BF08ECBEB9266D4138;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Seeds_120_BD5D4C204541BB1C3CEE12A43EDBF3AC;		//Offset: 38	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestAnimation.ST_QuestAnimation
// Size 4
/////////////////////////////////////////////
struct FST_QuestAnimation {
	bool	IsQuest_27_9BD885D74B55965A179BA0A00CACD7D7;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_IdleStates>	IdleState_8_FA8D226646294AEE6F706ABFE1B4A84D;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	PoseID_13_9F7D1F3F4D595A3BF17B88AD2B577ED6;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AfterIdlePose>	AfterIdlePose_15_2BA825EC496D536EAE1A8AB98D225C9A;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MatchingNPC.ST_MatchingNPC
// Size 20
/////////////////////////////////////////////
struct FST_MatchingNPC {
	struct FString	NPC_ID_5_2D4F02F34BF47D581CDA62AF269CFBC1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	float	Affection_6_FA8D226646294AEE6F706ABFE1B4A84D;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Talents.ST_SAVE_Talents
// Size 96
/////////////////////////////////////////////
struct FST_SAVE_Talents {
	TArray<int32_t>	ExtractionTalents_69_87035C8C4554FD207A64F392A82F8C80;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	HuntingTalents_70_BDAAE3B24DB2260CE2A8E291179CE762;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	FarmingTalents_76_AB4C50FD4267F3D70946EABDE7841042;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	DiplomacyTalents_72_D4D5072F4C90181D22D20584CF754102;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	SurvivalTalents_73_380CB82E4C3CAFE24FB611B17954B35F;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	CraftingTalents_75_2067C5474E664F95D07DB69DD2B8968B;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Skills.ST_SAVE_Skills
// Size 72
/////////////////////////////////////////////
struct FST_SAVE_Skills {
	int32_t	E_L_62_87035C8C4554FD207A64F392A82F8C80;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	E_P_86_F7D4DF7945F1CAACC9C37B9BC8D8B78E;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	E_Pt_64_6F840D5D41BFBBFF5E49CB8F78BC2346;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	H_L_65_BDAAE3B24DB2260CE2A8E291179CE762;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	H_P_87_9629906D4D6DACC9B30491BA93E86A46;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	H_Pt_67_3979F61044D5201D9295D196DF566391;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	F_L_83_AB4C50FD4267F3D70946EABDE7841042;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	F_P_88_93036BD34881A44857791AA12CE11447;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	F_Pt_85_4B923C784F6BDF87BEFE43A4A0FE2451;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D_L_71_D4D5072F4C90181D22D20584CF754102;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	D_P_89_E0C646B6426BB7F802F83E93B97F5BF4;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D_Pt_73_035768C54579004A4DDA54AED93629E7;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	S_L_74_380CB82E4C3CAFE24FB611B17954B35F;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	S_P_90_D3401DE14D764B06412681B4A5E3E851;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	S_Pt_76_1DB5D1F74F08D7F9AFBA568B562A0A5D;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	C_L_80_2067C5474E664F95D07DB69DD2B8968B;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	C_P_91_448203AB4EE498EFCDCDEAA7CBBA3CB6;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	C_Pt_82_480053A347F908412C2AEAAA6927EF92;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_PotionStatuses.ST_SAVE_PotionStatuses
// Size 128
/////////////////////////////////////////////
struct FST_SAVE_PotionStatuses {
	float	MoreDamage_MaxTime_6_63AFBAC44DC80EA39444E3AE960CC37B;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreDamage_Time_7_47C51B7B495DB303AECF12BCE1288A04;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreDamage_Multiplier_8_B1CBF9D141075D42A44573A9913BAC5C;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NightVision_MaxTime_12_EC5B8BBE48C976FEAB69B68D91B831FC;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NightVision_Time_13_BB12A59C4F66E89937BAFC8D72F2820B;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreWeight_MaxTime_17_ECDF8AE74BD7B9BB01F986879F940BD1;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreWeight_Time_18_B95635FE4384349FED31F5A914A4154F;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreWeight_Multiplier_19_1D91C6F7423570A72A949D82B1C6DABC;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AnimalRepel_MaxTime_22_CAB5E6034C0F4B1C53E7299A17BE7451;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AnimalRepel_Time_23_6E3E8503468B513170424EB3D351411F;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BetterTemperatureTolerance_MaxTime_27_A5F92F3F4F7A8537D3845FA5D0586C9E;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BetterTemperatureTolerance_Time_28_AFE089C54CF62971D22547A95CF6B11B;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BetterTemperatureTolerance_Amount_29_7B35A0454EFC2DF2D26015BFE9CB5887;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerWaterDrop_MaxTime_33_0ECA2A07412D69EDA4E573B84A3AB495;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerWaterDrop_Time_34_84C28558482F57742D9025A38C980DE4;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerWaterDrop_Multiplier_35_D10D3B9545EEED8EDDFED78D6AE0FF22;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerHungerDrop_MaxTime_39_AD097E974C8BD3853AF115A7B8A02829;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerHungerDrop_Time_40_ABA49345450470128F0A6C87C6773C11;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerHungerDrop_Multiplier_41_3101184E431320CC49581890D05B6FBC;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerStaminaDrop_MaxTime_45_3CFBEACD47ADBC089999ACA21A875C42;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerStaminaDrop_Time_46_746C092B40DD5481090CE8B1DFCBF2FD;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SlowerStaminaDrop_Multiplier_47_67170BDB40B94E142CF75093520CA764;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeHeal_MaxTime_52_9CEBFBF1479EE8CB892A938A92FC7644;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeHeal_Time_53_FB6AE47E4C4B9522C929DC9E28A439B8;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeHeal_IntensityPerSecond_54_0395205A4A318B0230814893EE80B093;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeHeal_TimeSinceLastHeal_55_7DC5F48A49AB0A6376EF0F93948D0A8B;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreHP_MaxTime_59_01324C7D4E696597D6B0EA9DA950C20B;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreHP_Time_60_B14D5A21454C1DAC92AAA695552BECBE;		//Offset: 108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoreHP_Amount_61_2CD556C64A95ED30DF92F48C2B91AE17;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeUnpoison_MaxTime_65_D70FE17B446AA3335DF4B89373FF00CA;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeUnpoison_Time_66_67CC4E0845FD65302FFBD4A9347AAA28;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TimeUnpoison_IntensityPerSecond_67_2BAE0EA84AD937763E957BA2AF9A7821;		//Offset: 124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_LifeStats.ST_SAVE_LifeStats
// Size 40
/////////////////////////////////////////////
struct FST_SAVE_LifeStats {
	float	Health_5_87035C8C4554FD207A64F392A82F8C80;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Stamina_9_BDAAE3B24DB2260CE2A8E291179CE762;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_3_AB4C50FD4267F3D70946EABDE7841042;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Water_7_D4D5072F4C90181D22D20584CF754102;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Somnolence_12_03F9004946A8189BCE791B94666C4894;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Temp_15_0C8EF96F4EBA602417A58ABA1873038C;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Dirtness_19_7B8BA37D496DDB062F47ABAE498CE198;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Poison_22_576C80A049C07A38C3EC40A2BC8FBDB2;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Poisoned_29_39438F384587B49FA1976C83B17C5485;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
	float	Alcohol_25_3DD0C2CE484A81AB8B77849BEF7DBF24;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Inventory.ST_SAVE_Inventory
// Size 41
/////////////////////////////////////////////
struct FST_SAVE_Inventory {
	struct FName	ID_8_4F27866A4A6D5E95B59001A7FC0A0EB3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Index_35_34C0B54A4FAE1CB5D74DC989994036E4;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsAssigned_37_2C778F904A5BEEEF5660A09809ADF7AE;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	bool	IsEquipped_14_A2ECB0B841020266159B76A3CF958675;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 18	Size: 2
	int32_t	QuickSlotID_36_F7F9EDBB4514B1557B1F9FB606C58033;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Condition_20_CCC5799440957C122EC1B5B7CD149D34;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Freshness_32_16EF0F6B4BDB49968937E7818101A742;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_23_50AE22D04A3D7347E4065A89669A08B5;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_26_6D4396FD41F514AABBF6B1AAFB9F4FF8;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_40_50586F604221F39DD98A2A8D8AB785F1;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Event_CharacterMultipliers.ST_Event_CharacterMultipliers
// Size 28
/////////////////////////////////////////////
struct FST_Event_CharacterMultipliers {
	float	WaterDecrease_23_AB8D09F64FE3F9BA091252968F854EC2;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	FoodDecrease_24_03602AA3438254F71828D3BE35709684;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	StaminaDecrease_25_DE5738064CAC03104A0372B6031CDAA4;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	WorkingSpeed_26_ACDA6A93409D019C6CD96A92B55F913D;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	FoodValue_27_95EF3778409B555B3D318F9C0EA851DD;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	WoodValue_28_8D71635948AD878317C8B98A6241754C;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Mood_30_D388C9E24A8646C989FF3EB7A8BEB2C1;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_ItemStack.ST_SAVE_ItemStack
// Size 12
/////////////////////////////////////////////
struct FST_SAVE_ItemStack {
	struct FName	Name_5_45927A914093D802954D2B90CFF8B146;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_4_ABAFAB224DEAC2FDC38501972CD867D4;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SplineModules.ST_SAVE_SplineModules
// Size 72
/////////////////////////////////////////////
struct FST_SAVE_SplineModules {
	bool	FIN_49_93C840744BFF0C121C759AA4A29CC549;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	HP_48_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IM_50_174624724B82B7BE7A711994AE5EB330;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	REM_62_E1240AF5486C7729ED4EA6BBA5CD1B9E;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[2];		//Offset: 10	Size: 2
	int32_t	ID_54_D29F47B140A5B944F01937986CDEBAA2;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	BP_59_9795CB05488E0B639B59C197AFA3D7F3;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	IP_60_30A2CF794CABBC5720C2638F84F56B4B;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_ItemStack>	BRes_46_1CE70FFB41CC76B760D66B9C85F2A4E2;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ItemStack>	RRes_45_13ADEE424508696D501AD19B84938CB9;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ItemStack>	IRes_47_49E491E047BB33C4C79D5B8E96C295E8;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Module_Data.ST_SAVE_Module_Data
// Size 64
/////////////////////////////////////////////
struct FST_SAVE_Module_Data {
	struct FString	Data_65_A533B80142A67CDADE9FF0AA0A047057;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FString>	BRes_66_1CE70FFB41CC76B760D66B9C85F2A4E2;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	RRes_67_13ADEE424508696D501AD19B84938CB9;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	IRes_69_49E491E047BB33C4C79D5B8E96C295E8;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_TechnologyScheme.ST_SAVE_TechnologyScheme
// Size 9
/////////////////////////////////////////////
struct FST_SAVE_TechnologyScheme {
	struct FName	ID_10_1C1D5F674D6813156020C48175C195CD;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Locked_12_6503F9984203857C64CE4499504F6D5B;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_KingDetails.ST_KingDetails
// Size 48
/////////////////////////////////////////////
struct FST_KingDetails {
	struct FName	King_33_67AAEA394766208BBF1A0B8F3DBD78DD;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FText	Number_6_291709F6407486E7D72FD8B6694EFE19;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	struct FName	Nickname_32_A61F1F4A472D7DCF8726898D522796DF;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Age_15_C0C83E0947248D7865BC0AAEE267C1D9;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Reputation_30_E9A6FC2E4DCB8C89F18069A3280F6976;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemInventorys.ST_ItemInventorys
// Size 45
/////////////////////////////////////////////
struct FST_ItemInventorys {
	struct FName	ID_8_4F27866A4A6D5E95B59001A7FC0A0EB3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Index_7_E084484340CB1FD33ECBCD9DEBDE6337;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsAssignedToQuickSlot_12_2C778F904A5BEEEF5660A09809ADF7AE;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsEquipped_14_A2ECB0B841020266159B76A3CF958675;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 18	Size: 2
	int32_t	QuickSlotIndex_17_F7F9EDBB4514B1557B1F9FB606C58033;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Condition_20_CCC5799440957C122EC1B5B7CD149D34;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Freshness_32_16EF0F6B4BDB49968937E7818101A742;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_23_50AE22D04A3D7347E4065A89669A08B5;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_26_6D4396FD41F514AABBF6B1AAFB9F4FF8;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxHP_29_41FA9E2B4D85424D26032DAB2E0BC76E;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_35_F523F1234479AEFF223E218C1C3E8338;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCSeasonClothing.ST_NPCSeasonClothing
// Size 80
/////////////////////////////////////////////
struct FST_NPCSeasonClothing {
	TMap<TEnumAsByte<E_Seasons>, struct FName>	SeasonClothing_7_DAA82DCD450B3771C5A092B948272C1B;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Spawner_NPC.ST_SAVE_Spawner_NPC
// Size 272
/////////////////////////////////////////////
struct FST_SAVE_Spawner_NPC {
	int32_t	ID_2_9B785ED64AEDA35FEA4AE6AF6CF7C3F1;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	VoiceID_54_273FD7834E6C5651857750BF479C6E2D;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_5_C3FDAEC14778003C79D3B788032DF487;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Age_24_6CBDD239412E7723EE5350AF0D11BC43;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Loc_8_D4E5504045FFA373D2ACEF904061C88B;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_11_DCBAC14F4752EA751B110FBBB62D6CDD;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char	Wealth_51_E0D986FE4257397434740BADB41DBADA;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 45	Size: 3
	TArray<struct FST_SAVE_SimpleInventory>	Inventory_20_94306A60464CD4B67C111EB1F14BE812;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	struct FName	PresetID_15_252E4EE34B4201FC97B9509A64B5B984;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<TEnumAsByte<E_BodyParts>, int32_t>	BPIndex_29_16CBAD0949EAFDC5838F5D80A859023E;		//Offset: 72	Size: 80	Flags: Edit, BlueprintVisible
	struct FLinearColor	SkinTone_33_00CE054F4086495ACC8C25B29BAC839C;		//Offset: 152	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	HairColour_36_A0AC708F4134CE97CD53088616E7DA69;		//Offset: 168	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HeadID_39_9BAE93AE46C93BFCD97C01B68353582B;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HairID_41_EE17C29A41B2F2F22E6508A3F864EA68;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs_47_505A080346D01CE964F12B9497EE17D7;		//Offset: 192	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Spawner_Item.ST_SAVE_Spawner_Item
// Size 8
/////////////////////////////////////////////
struct FST_SAVE_Spawner_Item {
	int32_t	ID_6_45B5EAA54CCFDD83EE20FCAD84DAFA20;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Cnd_5_6128E4AF4C3687CCA52CBCB391392AFB;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Spawner_CollectableFurniture.ST_SAVE_Spawner_CollectableFurniture
// Size 5
/////////////////////////////////////////////
struct FST_SAVE_Spawner_CollectableFurniture {
	int32_t	ID_6_45B5EAA54CCFDD83EE20FCAD84DAFA20;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Empty_8_6128E4AF4C3687CCA52CBCB391392AFB;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Spawner_Animal.ST_SAVE_Spawner_Animal
// Size 40
/////////////////////////////////////////////
struct FST_SAVE_Spawner_Animal {
	int32_t	ID_9_109AF422424D2C9616520A83C80CF9CF;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_8_536FE28A4A1546FEBBD70AB630FAD58C;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Loc_17_A343406E476871344FC92D819DF3E27C;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_18_10D147C44440F01E975D0CB273182FA4;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Poisoned_20_430EFF7942A73CB99E719F877B4A6150;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
	float	Poison_23_9117C1BF4D0A6AA05CB98AAD54112074;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_InventoryItemsArray.ST_InventoryItemsArray
// Size 16
/////////////////////////////////////////////
struct FST_InventoryItemsArray {
	TArray<struct FST_ItemInventorys>	Items_3_D270B57A4C1BFF2E48F4959E383134C8;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_POI_History.ST_SAVE_POI_History
// Size 24
/////////////////////////////////////////////
struct FST_SAVE_POI_History {
	struct FGuid	ID_6_506BA7CA421021D7EBCAF79CEB6A5001;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Seasons_7_DB97BE2F46D76D73C5BBE18A0C7B84B6;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Inactive_10_B5E618C048AD5E61D1FE04A60378C81C;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_POI.ST_SAVE_POI
// Size 184
/////////////////////////////////////////////
struct FST_SAVE_POI {
	struct FGuid	ID_44_951B8DEE42BAA1C587B9258810684981;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Seasons_45_628716B54063757C55A764B50028A533;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Inactivity_50_8F4A4A73472722B622685B84D462E7A4;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Spawner_NPC>	NPCs_47_0329A5F14BB46EF972D2C89D9CCB524B;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Spawner_Animal>	Animals_39_1EE135AC489D1EC5F3C0D1B1B3BEDEE2;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Spawner_Item>	Items_46_095990284506B00BE0B4BD95CA0B26E5;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
	TMap<int32_t, struct FST_InventoryItemsArray>	ItemsChest_35_8F737DF647056FF5E21E2DB9920C3B60;		//Offset: 72	Size: 80	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Spawner_CollectableFurniture>	CollectibleFrt_55_E8F3522F435FF5997ED4A8B42474EA4E;		//Offset: 152	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	Custom_38_8CF67B4D47463068ECE194B353CF896E;		//Offset: 168	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FoliageDepletedData.ST_FoliageDepletedData
// Size 52
/////////////////////////////////////////////
struct FST_FoliageDepletedData {
	struct FTransform	Transform_37_11D052A34893B671001558BBB56EB6FA;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	int32_t	NumberOfSeasonToReset_31_8B63A5B54D83B075414EF0ABA1556E15;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Kingdom.ST_SAVE_Kingdom
// Size 108
/////////////////////////////////////////////
struct FST_SAVE_Kingdom {
	struct FST_KingDetails	King_24_64FBDB8049744DD775B71493C00E737A;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_KingDetails>	HistoryOfKings_25_0E6484114E84032B045392807CBF97D3;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_ChallengeState>	ChallengeProgress_9_FDF8F3BD40F22045E5B6FC8F7F256F65;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 65	Size: 3
	float	ChallengeHappenChance_12_EF7056DB4BD9D997E78843BC3620BB1C;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FName>	LastChallenges_19_2A078BB047F7626BBB3AB792BEEBA2D2;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
	bool	WasReputationChanged_23_3D2317654E3FB6BAA06764A4486FA0AE;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_KingdomStatus>	KingdomStatus_28_804E59544AC09A7BCFC167935F2C8C00;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[2];		//Offset: 90	Size: 2
	float	KingdomStatusChangeChance_31_55E808F84FC4EA650E78AD95ABB88733;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	ChanceToKillKing_33_C2275F6D46B95E58BA89F7846EB6DF5A;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TaxMod_38_859A4F3A48A1C3A247C4C6A75A4D112E;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MoodMod_37_0CA07DC84F5844FC403EA5BA27FBC837;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Traps.ST_SAVE_Traps
// Size 112
/////////////////////////////////////////////
struct FST_SAVE_Traps {
	struct FVector	Pos_25_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_26_93C840744BFF0C121C759AA4A29CC549;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_8_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_24_174624724B82B7BE7A711994AE5EB330;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
	struct FST_Time	ActivationTime_13_2F49820A4D5CD2692D0BADB492D6937F;		//Offset: 36	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time	CatchTime_14_00CB18BF48D74BA1D6E94983B9278540;		//Offset: 60	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Active_21_B524AD6240610639246D55BC268528E6;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Caught_23_3CF30CBA4433C2B9A2DD9FBA8BC86721;		//Offset: 85	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[2];		//Offset: 86	Size: 2
	int32_t	HP_34_91F9EA34402A122FA7730FA158DA4D47;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[4];		//Offset: 92	Size: 4
	TArray<struct FName>	Tags_33_E9582D4342DCD83BB2E202B0C048DE94;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_TechnologyData.ST_SAVE_TechnologyData
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_TechnologyData {
	struct FString	Points_17_1C1D5F674D6813156020C48175C195CD;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FString>	SchemesData_16_AAE04ECD47480C54A4F092BA3CE3A2ED;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Technology.ST_SAVE_Technology
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_Technology {
	float	Building_2_1C1D5F674D6813156020C48175C195CD;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Survival_6_6503F9984203857C64CE4499504F6D5B;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Farming_7_B3769E3E4F33E547F9CE24837510332E;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Crafting_8_538BF3D54E1E6799C4919CB13D94A5C4;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_TechnologyScheme>	Schemes_13_AAE04ECD47480C54A4F092BA3CE3A2ED;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Strings.ST_SAVE_Strings
// Size 16
/////////////////////////////////////////////
struct FST_SAVE_Strings {
	TArray<struct FString>	Strings_116_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SplineStructures.ST_SAVE_SplineStructures
// Size 80
/////////////////////////////////////////////
struct FST_SAVE_SplineStructures {
	struct FVector	Location1_25_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Location2_28_2D282C164562BC16BA3E8C99512DECC9;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rotation_5_93C840744BFF0C121C759AA4A29CC549;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_8_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 36	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Ownership_18_174624724B82B7BE7A711994AE5EB330;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 45	Size: 3
	TArray<struct FST_SAVE_SplineModules>	Modules_32_815FBBD2459C7DFBA4ED238D17C77ACA;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Module_Data>	ModulesData_36_2491012E4165719F346AC0B56890CC86;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SplineStructure_Data.ST_SAVE_SplineStructure_Data
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_SplineStructure_Data {
	struct FString	Data_38_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Module_Data>	ModulesData_36_2491012E4165719F346AC0B56890CC86;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SpawnerFish_Data.ST_SAVE_SpawnerFish_Data
// Size 16
/////////////////////////////////////////////
struct FST_SAVE_SpawnerFish_Data {
	struct FString	Data_50_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SpawnerAnimal_Data.ST_SAVE_SpawnerAnimal_Data
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_SpawnerAnimal_Data {
	struct FString	Data_59_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FString>	Animals_Data_61_D53242F247F004A9CA9956A1B5830B21;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SpawnedItemFoliage.ST_SAVE_SpawnedItemFoliage
// Size 65
/////////////////////////////////////////////
struct FST_SAVE_SpawnedItemFoliage {
	struct FName	Name_13_86658A3B444C7986B7E482B2E4497834;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	struct FTransform	Transform_10_C4B5037240A3FCCE8F584FAFC819E6BD;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	unsigned char	Owner_16_E5D125A24FC21ED1AF7BEEB26E3C06E4;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SpawnedFoliage.ST_SAVE_SpawnedFoliage
// Size 64
/////////////////////////////////////////////
struct FST_SAVE_SpawnedFoliage {
	struct FName	Name_13_86658A3B444C7986B7E482B2E4497834;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	FirstStage_12_FBE0277F47F10C028900FCB6BBA2CCA9;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 9	Size: 7
	struct FTransform	Transform_10_C4B5037240A3FCCE8F584FAFC819E6BD;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_SimpleInventory.ST_SAVE_SimpleInventory
// Size 33
/////////////////////////////////////////////
struct FST_SAVE_SimpleInventory {
	struct FName	ID_8_4F27866A4A6D5E95B59001A7FC0A0EB3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Index_35_34C0B54A4FAE1CB5D74DC989994036E4;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Condition_20_CCC5799440957C122EC1B5B7CD149D34;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Freshness_32_16EF0F6B4BDB49968937E7818101A742;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_23_50AE22D04A3D7347E4065A89669A08B5;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_26_6D4396FD41F514AABBF6B1AAFB9F4FF8;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_41_D53D2F244F1D21F03FEFF1980FAD47CB;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Roads.ST_SAVE_Roads
// Size 45
/////////////////////////////////////////////
struct FST_SAVE_Roads {
	struct FName	Name_35_938180A548CFB2DB5D95888D48CC754F;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Location1_25_990568DD45349711A716929CB42C10FA;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Location2_28_2D282C164562BC16BA3E8C99512DECC9;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rotation_5_93C840744BFF0C121C759AA4A29CC549;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char	Ownership_18_174624724B82B7BE7A711994AE5EB330;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Road_Data.ST_SAVE_Road_Data
// Size 16
/////////////////////////////////////////////
struct FST_SAVE_Road_Data {
	struct FString	Data_37_938180A548CFB2DB5D95888D48CC754F;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_ResourceDeposits.ST_SAVE_ResourceDeposits
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_ResourceDeposits {
	struct FTransform	Transform_2_A34208624FFAA07BD380F5B6D53BC813;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	float	Condition_5_5137A06F4FBA62202C00049AA5E51E9E;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	SeasonsToReset_12_C15062FF41ED7148CCB93EA8EEB6139E;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_RefillableContainers.ST_SAVE_RefillableContainers
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_RefillableContainers {
	struct FVector	Pos_15_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_16_3D4D772541B8BDFBDD5EDC980EF82C86;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_14_4C9A220B4C1E0292B73E1AB66E46F9FC;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_17_99ED524D494B7C79F210459300A0E507;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
	int32_t	Capacity_11_6DF668D34DBCFD9F4D7AFAB469EFB671;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FName>	Tags_21_297F6C5447C0B3560E1326A248A9061A;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Player.ST_SAVE_Player
// Size 688
/////////////////////////////////////////////
struct FST_SAVE_Player {
	struct FVector	Pos_59_4C2448BC4B735D194B54FA9D985F6F13;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_55_9212B41444B2E7B08BED74BF6BF580F8;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	struct FText	Name_8_63A4E40E4D8977E5B706FBBF07AC5400;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, SaveGame
	TEnumAsByte<E_Sex>	Sex_16_CD61F4494D307C5E53005EBAD6444FBA;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 49	Size: 3
	float	Age_17_95D4C25B404796B039F50EAB60304D82;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_LifeStats	Stats_57_CF87A144455D92DB6C482FB22BA8C487;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_Skills	Skills_27_BC25071441646825BA0361A6C186A2B6;		//Offset: 96	Size: 72	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_Talents	Talents_30_2814BD4848DFE75F12589FBA64DBBA56;		//Offset: 168	Size: 96	Flags: Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash
	struct FST_SAVE_PotionStatuses	PotionStatuses_79_79413043440BC14613451B9ABC1347B4;		//Offset: 264	Size: 128	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Inventory>	EQ_58_E8A95A55473CB02502A1959F9FCF1D1C;		//Offset: 392	Size: 16	Flags: Edit, BlueprintVisible, SaveGame
	int32_t	LastSelectedQuickslot_76_28FD935C470E028D4CE35E8A846F55BA;		//Offset: 408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 412	Size: 4
	struct FString	MotherID_45_5DE07FAF47BE56B42F3BC98B7AB68B92;		//Offset: 416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
	struct FString	FatherID_47_7087EB0247EE117BF1A62FAF40DE9814;		//Offset: 432	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
	struct FString	PartnerID_43_560F89B34FAFBB9E633AEEA1F5BCF3B1;		//Offset: 448	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
	TArray<struct FString>	ChildrenID_50_F52D40B648BCA71F5BA60FAF1E1D68A1;		//Offset: 464	Size: 16	Flags: Edit, BlueprintVisible, SaveGame
	struct FString	HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;		//Offset: 480	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash
	unsigned char	BuildMode_64_1581FAFA42672048BEC886BC1B32A739;		//Offset: 496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	BagMode_65_7FC9C1984D7FA02AB35CAE9218EABEE5;		//Offset: 497	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[6];		//Offset: 498	Size: 6
	TMap<TEnumAsByte<E_Tutorials>, bool>	Tutorials_70_A1BE23544BE12EEB3AFD57A718AAC139;		//Offset: 504	Size: 80	Flags: Edit, BlueprintVisible
	struct FST_Event_CharacterMultipliers	Events_73_9F7AB36746936500628E71B6C03E160D;		//Offset: 584	Size: 28	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NG_83_4B6962E64A08A2369C9C4EB803CB1C51;		//Offset: 612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ABonus_107_A6540FDC483DDB551399F3B66A422FA6;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	HairColor_87_931D531A40B1DD7AC1237FBE6BC5EBEB;		//Offset: 620	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HairID_89_9F588D10420FDEDA434F338E7A375ED9;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	SkinTone_94_F7C1E62542ED7A28E53AED8B4703F4C8;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HeadID_93_E40DB2914CB176EDB2746C9991CF623F;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode>	ViewMode_100_917BDBEB497845EE442BFFA10DA00627;		//Offset: 660	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[3];		//Offset: 661	Size: 3
	float	CameraDistance_99_851DFB304D48D3C067939AA9EDB6C5D4;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_4[4];		//Offset: 668	Size: 4
	TArray<struct FString>	EQ_Data_104_E1A16C1F4A0C91F78AB763A5B79A2759;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_NPC_Building.ST_SAVE_NPC_Building
// Size 32
/////////////////////////////////////////////
struct FST_SAVE_NPC_Building {
	struct FString	Building_ID_168_B8A1D96346DB3806BD805295AA367715;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Containers>	Containers_170_E8A95A55473CB02502A1959F9FCF1D1C;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestInfo_Save.ST_QuestInfo_Save
// Size 352
/////////////////////////////////////////////
struct FST_QuestInfo_Save {
	struct FName	QuestID_38_7BA6032F4D2786BDD742958980780B0E;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_Quest_PickedItemsFromGenerator>	PickedItems_58_A22815F248046F0828C245A1FB71C7FE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_QuestReward	QuestReward_70_012A98BD45DE45064F805D993DCDF650;		//Offset: 24	Size: 232	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_QuestObjectives>	QuestObjectives_67_A3C4FB214AAA7EAAF9CAAA849961E628;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	TEnumAsByte<E_QuestState>	State_23_DFCF9AD04F25106777C87B88F01CC887;		//Offset: 272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 273	Size: 7
	struct FString	QuestGiverNPCID_52_EFF2F8514820EFD26A38388C6F28872D;		//Offset: 280	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FText	QuestGiver_48_B6B77A4E42001A9FA2A978B04572B3CA;		//Offset: 296	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	Duration_31_196C34394ECEAC57CE005F86BD88975C;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	QuestGiverMaxAge_64_4EF56D73406801309AEE52806B02C76D;		//Offset: 324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	WasQuestRewardGiven_66_369B507D457E859AE418A3813A31CE9E;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 329	Size: 7
	TArray<struct FST_StringTable_IDKey_Pair>	DescriptionStringTableKeys_75_B965AB1E4B918C84E3E4819D127E754F;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_NPC.ST_SAVE_NPC
// Size 1156
/////////////////////////////////////////////
struct FST_SAVE_NPC {
	struct FString	NPC_ID_59_B8A1D96346DB3806BD805295AA367715;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FDataTableRowHandle	NPC_Handler_195_4EAD905D43751A5D8393E9AFF793015F;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FVector	Location_39_4C2448BC4B735D194B54FA9D985F6F13;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rotation_40_9212B41444B2E7B08BED74BF6BF580F8;		//Offset: 44	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FText	Name_8_63A4E40E4D8977E5B706FBBF07AC5400;		//Offset: 56	Size: 24	Flags: Edit, BlueprintVisible
	unsigned char	Sex_104_CD61F4494D307C5E53005EBAD6444FBA;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 81	Size: 3
	float	Age_17_95D4C25B404796B039F50EAB60304D82;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MinDeadAge_205_1101BE89435B5FB40D13CDAE3463AC3A;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Mood_56_CF87A144455D92DB6C482FB22BA8C487;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_NPC_Skillss	Skills_72_BC25071441646825BA0361A6C186A2B6;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Inventory>	EQ_111_E8A95A55473CB02502A1959F9FCF1D1C;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	EQ_Data_209_DE60AE5B4EABAA3D920F3AACCED6C6A6;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
	struct FString	MomID_109_5DE07FAF47BE56B42F3BC98B7AB68B92;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	DadID_110_7087EB0247EE117BF1A62FAF40DE9814;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	PartnerID_43_560F89B34FAFBB9E633AEEA1F5BCF3B1;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FString>	SiblingsID_192_EEDE6A104DAB041B55674DA4631B350C;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	ChildrenID_50_F52D40B648BCA71F5BA60FAF1E1D68A1;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
	struct FString	HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	WorkID_112_05C5011E43B9B7BE5F08A899CC440EE1;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	int32_t	Affection_67_01ECE1EE46B4B9610E6C6FB8E16F7074;		//Offset: 288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TimeBirth_113_F854738E44A363B3B3BDEE848D8F1D2B;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsPregnant_88_69E3B7024C6FCB44EC598EB68048803E;		//Offset: 296	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 297	Size: 7
	TArray<struct FST_MatchingNPC>	PossHusband_149_BC042D84468318059CC447AE855D6E02;		//Offset: 304	Size: 16	Flags: Edit, BlueprintVisible
	float	BabyChance_146_EEC9A08E4CE8B38F4867D29917D313FF;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	HasInfant_89_4903B57C4A1774CE3D38EF86D63B3F03;		//Offset: 324	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 325	Size: 3
	struct FST_SAVE_NPC_Blackboards	Blackboards_71_0177B3A7450B7ECBE7F4458B66F91CC7;		//Offset: 328	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	NightPatrol_120_5D0FE97344AD42E54A16218E28BC5307;		//Offset: 368	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char	Ownership_105_EEFEBD7744D0F6A22748D4A7ACB0A79D;		//Offset: 369	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Profession_106_230E5B484AED46A30FFA34AC7185AD51;		//Offset: 370	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Wealth_199_FF13ED674A3AB15A9BA15ABC04A9D20E;		//Offset: 371	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Personality_188_F5E5534B4D1756759B92FC8CEA951381;		//Offset: 372	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	OutNPCType_114_B6C5094F40B0C2E8B431DF8C43DCA253;		//Offset: 373	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	OutNPCOwner_179_A0A1724744546CFCDE574DAA9EFA2556;		//Offset: 374	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Vendor_91_C7086D2E41ADD62E493DD5BCFB480F2A;		//Offset: 375	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	VendorCat_171_F6F6EF47476415CFCB6B1089FC880018;		//Offset: 376	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<TEnumAsByte<E_BodyParts>, int32_t>	BPIndexes_118_5DEEFABD408E52037417B29EDF5763E1;		//Offset: 384	Size: 80	Flags: Edit, BlueprintVisible
	struct FName	MeshName_117_CA5D9E2B40869A88CD0BF7BF67CD7EA2;		//Offset: 464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	SkinTone_154_FB8409874CE98FE5705C529B1F0ADE9E;		//Offset: 472	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	HairColor_155_B5C398CD4764339A39DB9C8729577794;		//Offset: 488	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HeadID_164_3CF60D5E48EF6DC80ED2EBA09F847A05;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	HairID_165_D60FC8024DA127C5083A279B1BD5FDED;		//Offset: 508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs_166_980BA472412B10BA3984DCB92C30E02A;		//Offset: 512	Size: 80	Flags: Edit, BlueprintVisible
	unsigned char	BagMode_180_47C3C8D142ADF4CD37016D81E859AB05;		//Offset: 592	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	BuildMode_181_286481204FA699AA7E5B63B2228C2EBE;		//Offset: 593	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[6];		//Offset: 594	Size: 6
	struct FST_QuestInfo_Save	QuestToGive_134_1C469672472442DDCCABBB8BEC950872;		//Offset: 600	Size: 352	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_QuestAnimation	QuestAnimation_213_50F1B9BA430B1EED90131F96B8C9031C;		//Offset: 952	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsStoryNPC_136_7799BD824AA3B2A56EED9D94BE0A446D;		//Offset: 956	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_4[3];		//Offset: 957	Size: 3
	struct FName	VoiceID_202_3FE691DD4EA1F80B0D066AA452876CA2;		//Offset: 960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UDialogue>	ActualDialogue_210_DFBB0C574C2ACE6F2A459CAF7B26DF31;		//Offset: 968	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_SAVE_NPCDialogue	Dialogue_140_6358380044D8558348534F8C345DE45E;		//Offset: 1008	Size: 120	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Event_CharacterMultipliers	Events_174_82387D39480CD50F9D3F7E9C065345C3;		//Offset: 1128	Size: 28	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Items.ST_SAVE_Items
// Size 85
/////////////////////////////////////////////
struct FST_SAVE_Items {
	struct FTransform	Transform_35_599F07FF4917E529863A70820DB49534;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FName	Name_43_04F182DF448A2C0DAD25188538053F12;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_12_C28937934D6E59E5A3B2CC86C1C3BBFE;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HP_15_771BC86C40A6AA2358FA66BF8E05F0B7;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SPO_16_F1BE94C749B07C801F418FA78AAB4E50;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	SP_17_7AF5F9EF4AA4385C9AA3C0BB258A8F1A;		//Offset: 65	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 66	Size: 2
	float	LT_46_9DE3FEAC485A7DA42A8636B9F308F5A5;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Capacity_22_8073CAED48CEF52E167C0CAEFC4FEFE5;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Fresh_45_0FE2EDE64ED012089356FE923FEA0FCD;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_47_042C8D67465E0D93845E5D9A575DBF0E;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SRO_31_3DB48CEC4A2E7F2E0DBAF2B625EE660F;		//Offset: 81	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	SR_32_F80B05DC489C8279FE24BBAC7B324F7B;		//Offset: 82	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	AM_49_A0EADD464C4D4BA6A1DF91A4CA5F73F4;		//Offset: 83	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Attach_53_8B64B1E544454BD4B83EC2AE93AEFFD2;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_HusbandryAnimals.ST_SAVE_HusbandryAnimals
// Size 112
/////////////////////////////////////////////
struct FST_SAVE_HusbandryAnimals {
	struct FName	Name_72_63A4E40E4D8977E5B706FBBF07AC5400;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Pos_75_4C2448BC4B735D194B54FA9D985F6F13;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_73_9212B41444B2E7B08BED74BF6BF580F8;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	float	HP_71_8E6D291A4374B4E4B262C8AACEEA899F;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Age_17_95D4C25B404796B039F50EAB60304D82;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FString	HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	float	Capacity_63_4F8950254554710B5CF756967EDD3373;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_80_41CEA5F84A5C18C38D91B88726472C32;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_77_C8EEE038433941FA1154E1BA6E7DD826;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsDead_66_538DAB954E14826651E3B6944186B7DC;		//Offset: 65	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	ForSale_82_981ED93E4276EA4386CE5CAE7DA2CCCB;		//Offset: 66	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[1];		//Offset: 67	Size: 1
	int32_t	Variation_85_BBB35A7D42505709BB61FAA122B566A8;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FST_SAVE_Inventory>	EQ_89_C720AB474CB19DC0B0C411A280B8F7F0;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
	bool	IsMount_91_ABA2205C4324CFFE826EF9907BCE32CF;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsMounted_93_36FDA4564FA87FC0655054A1BC143D15;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[6];		//Offset: 90	Size: 6
	struct FString	CustomName_96_A88298A3413D22F5A334CBB274ED9907;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Gates.ST_SAVE_Gates
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_Gates {
	struct FName	Name_35_938180A548CFB2DB5D95888D48CC754F;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Loc_36_990568DD45349711A716929CB42C10FA;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_37_93C840744BFF0C121C759AA4A29CC549;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char	Ownership_18_174624724B82B7BE7A711994AE5EB330;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	TArray<struct FST_SAVE_ItemStack>	ResRem_42_CB6A17804588D598BBB4929AD526B2BE;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Furnitures.ST_SAVE_Furnitures
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_Furnitures {
	struct FVector	Pos_12_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_13_3D4D772541B8BDFBDD5EDC980EF82C86;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_11_B72368D0423A3A4617D6C9A082CA2B1A;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Variant_21_FA4388E44C7A2F2981DDCE87D5AE6A63;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_14_99ED524D494B7C79F210459300A0E507;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 37	Size: 3
	TArray<struct FName>	Tags_18_6F7B01B244CB22ACB48F0FA487775EFA;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_FoliageArray.ST_SAVE_FoliageArray
// Size 16
/////////////////////////////////////////////
struct FST_SAVE_FoliageArray {
	TArray<struct FST_SAVE_Foliage>	Array_114_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_FishSpawners.ST_SAVE_FishSpawners
// Size 28
/////////////////////////////////////////////
struct FST_SAVE_FishSpawners {
	struct FGuid	ID_48_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Available_27_7636EBA042B95C40B7E74BA6AE80F228;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	int32_t	D1_36_87DAF44C48B9B2A7DC6382813CA1294F;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	N1_44_EC3D47264638516F126B3690BCD668D8;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Fields.ST_SAVE_Fields
// Size 112
/////////////////////////////////////////////
struct FST_SAVE_Fields {
	struct FVector	Location1_8_7E0554E84AB70C151D5E8E9CBA17C95F;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	Location2_7_20E465154EDEA67B450C9BA29F61E65B;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FString	CustomName_26_2A2023B5406F0CECF83C5EB1FB93E141;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TEnumAsByte<E_FieldCategories>	Type_20_EA349ADA43C6C0B2C0E24C9C1F4ECD38;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_23_9132EAB94408B1A4921F059320306BE8;		//Offset: 41	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 42	Size: 6
	TArray<struct FST_SAVE_FieldChunks>	Chunks_15_03ED58C941B819C984EE1F9F41092E37;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_FieldPlantSlots>	Slots_16_E9E453954A24A42B38F610BE0470AA98;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	ChunksData_33_CB83D2EA4811FC1D742EAC9E6361C34D;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	SlotsData_34_4DABDC1B46B48D79FFC5708CC45B60D3;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Events.ST_SAVE_Events
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_Events {
	float	Chance_2_88211D0E4D75368CECD797B3B0BB25DA;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TotalNumber_10_289B1C6F4E804A0F3FB6B3839289A90C;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<struct FName>	LastEvents_9_87CD11D44098A7BDDF8BA6B9EBD1FDB6;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName>	EventQueue_14_D3E934934A227FD5CFA5FA86E1FD079C;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_EventHistory_Main>	EventHistory_18_8A0231464391AA370E075692BDFA7D6C;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Containers.ST_SAVE_Containers
// Size 88
/////////////////////////////////////////////
struct FST_SAVE_Containers {
	struct FVector	Pos_20_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_21_28BB13314D7752CE8F8E35A33B446944;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_12_FDCB5C9A4BA413DC0E96D198286658AB;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_19_D427B33148C7795328E749ABF7E237BC;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	TArray<struct FST_SAVE_Inventory>	EQ_22_06A21FBC4E242500DBE94B9BD05F3ABD;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName>	Tags_26_355593254EDFC6330265CC9308B5D79C;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FString>	EQ_Data_30_8F9AAD3143EDB1541C13088C96906F01;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Collectable_Data.ST_SAVE_Collectable_Data
// Size 16
/////////////////////////////////////////////
struct FST_SAVE_Collectable_Data {
	struct FString	Data_37_FDCB5C9A4BA413DC0E96D198286658AB;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Campfires.ST_SAVE_Campfires
// Size 80
/////////////////////////////////////////////
struct FST_SAVE_Campfires {
	struct FVector	Pos_22_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_23_93C840744BFF0C121C759AA4A29CC549;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_8_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Fire_30_7A7710214B3C557F5090BA82A01CB11A;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Full_32_2352CBDA4195E28A05BF5DBF419F9507;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char	Owner_24_174624724B82B7BE7A711994AE5EB330;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[1];		//Offset: 35	Size: 1
	struct FST_Time	ActivationTime_13_2F49820A4D5CD2692D0BADB492D6937F;		//Offset: 36	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 60	Size: 4
	TArray<struct FName>	Tags_28_17D5684249B6767E3EADB798C19C4A1B;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Buildings.ST_SAVE_Buildings
// Size 484
/////////////////////////////////////////////
struct FST_SAVE_Buildings {
	struct FVector	Pos_36_4A28E9104EDB1143C1C3C0A4EAA4A813;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_37_41862FFC481133EEB55374942A2B83BC;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	float	ZPos_38_FF5007614E145281E222E0A182CC7398;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	Name_8_5CAD6AB84536BD2BE0FA85AD59E10B3C;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	struct FString	CustomName_101_9084EA1443B26A3FB16A4B9CBAC0090F;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	ID_11_4AB0F4B241BF2E27776E629BFBAA0FCD;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	unsigned char	Owner_40_A38A3A764BFC3A75E76FADA3A0C9F07A;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[7];		//Offset: 73	Size: 7
	TArray<struct FST_SAVE_Modules>	BaseModules_135_CA958610409EB4389A35799F11B0C1C5;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Modules>	FrameModules_136_ABFEA3EF4BA775F6809F2E825438A844;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Modules>	Modules_28_8478A9384B2C2FA21A134AA358167D40;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Furnitures>	DecorativeFurnitures_128_D9FC8CE24FE16DE30F12298D937629A9;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ActivityFurnitures>	ActivityFurnitures_58_4E8DE55D4A851C8A05C50AB2132FC78E;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Campfires>	Campfires_59_04C982E246E587DF685771AC4044389D;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_RefillableContainers>	RefillableContainers_60_3C1713664D168D1BE9606C9FA8C0FB87;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_SourceOfResources>	SourceOfResources_144_F1966832400610C53EBD428D4C1D701B;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Containers>	Containers_61_542EA7E74DB129E6865E1790F049F0D1;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Production_Progress>	Production_65_00A02DF94CF4DF201C1FE8948199C24F;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_AnimalProduction_Progress>	AnimalProduction_140_C166FBF44CBC32C84EDF808840C3CFC6;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Trade_Progress>	Trading_113_39FC0CFF4BB839F662E8899555E127AF;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Profession>, int32_t>	WorkIntensity_71_9C0328A644B9766A7C88BB91545B5BDF;		//Offset: 272	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	ToolsBuffer_118_137A92324AB6747A399BA4B732BE0166;		//Offset: 352	Size: 80	Flags: Edit, BlueprintVisible
	float	Wood_82_DF3FBBAB413CB2BFC6E9EBB6146B901E;		//Offset: 432	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_83_36027E2D4E52A5B6D8D1779117F410A4;		//Offset: 436	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Water_104_0F734F854D1FB358D4533BBC4B5886BF;		//Offset: 440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	FC_92_DEA6F8B64B34403E18E7EC834D2E24EC;		//Offset: 444	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 445	Size: 3
	struct FST_Event_BuildingMultipliers	Events_96_389A338746C12D945B382EA90BEF610C;		//Offset: 448	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Shop_107_3797FAE04D4BCC7CF2C5108A65C0C49D;		//Offset: 452	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	BaseStage2_120_74446D34444F4C5EDC71C4A07BD99D0B;		//Offset: 453	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	R_123_1F1568CF42F98761C2097E801A43FE1B;		//Offset: 454	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	B_124_5C6ECBF941FEFED4CD52F7AE7DE76226;		//Offset: 455	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FST_SAVE_Repairing_Progress	Repairing_127_4A3BA8C842A8A919956510B5EDE59216;		//Offset: 456	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	LL_147_EC4B8A994AD8FC69D3197FBC056B2400;		//Offset: 480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Building_Data.ST_SAVE_Building_Data
// Size 448
/////////////////////////////////////////////
struct FST_SAVE_Building_Data {
	struct FVector	Pos_36_4A28E9104EDB1143C1C3C0A4EAA4A813;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_37_41862FFC481133EEB55374942A2B83BC;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	float	ZPos_38_FF5007614E145281E222E0A182CC7398;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	Name_8_5CAD6AB84536BD2BE0FA85AD59E10B3C;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	struct FString	CustomName_101_9084EA1443B26A3FB16A4B9CBAC0090F;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	ID_11_4AB0F4B241BF2E27776E629BFBAA0FCD;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	unsigned char	Owner_40_A38A3A764BFC3A75E76FADA3A0C9F07A;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[7];		//Offset: 73	Size: 7
	TArray<struct FST_SAVE_Modules>	BaseModules_135_D4BAC9E94D6CF168A71129989E81B28D;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Modules>	FrameModules_136_58DA5908462B2164DA5A81B48E8E4DB8;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Modules>	Modules_28_8478A9384B2C2FA21A134AA358167D40;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Furnitures>	Furnitures_57_D9FC8CE24FE16DE30F12298D937629A9;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_ActivityFurnitures>	ActivityFurnitures_58_4E8DE55D4A851C8A05C50AB2132FC78E;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Campfires>	Campfires_59_04C982E246E587DF685771AC4044389D;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_RefillableContainers>	RefillableContainers_60_3C1713664D168D1BE9606C9FA8C0FB87;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Containers>	Containers_61_542EA7E74DB129E6865E1790F049F0D1;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Production_Progress>	Production_65_00A02DF94CF4DF201C1FE8948199C24F;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_SAVE_Trade_Progress>	Trading_113_39FC0CFF4BB839F662E8899555E127AF;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Profession>, int32_t>	WorkIntensity_71_9C0328A644B9766A7C88BB91545B5BDF;		//Offset: 240	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	ToolsBuffer_118_137A92324AB6747A399BA4B732BE0166;		//Offset: 320	Size: 80	Flags: Edit, BlueprintVisible
	float	Wood_82_DF3FBBAB413CB2BFC6E9EBB6146B901E;		//Offset: 400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_83_36027E2D4E52A5B6D8D1779117F410A4;		//Offset: 404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Water_104_0F734F854D1FB358D4533BBC4B5886BF;		//Offset: 408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	FC_92_DEA6F8B64B34403E18E7EC834D2E24EC;		//Offset: 412	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 413	Size: 3
	struct FST_Event_BuildingMultipliers	Events_96_389A338746C12D945B382EA90BEF610C;		//Offset: 416	Size: 4	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Shop_107_3797FAE04D4BCC7CF2C5108A65C0C49D;		//Offset: 420	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	BaseStage2_120_74446D34444F4C5EDC71C4A07BD99D0B;		//Offset: 421	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	R_123_1F1568CF42F98761C2097E801A43FE1B;		//Offset: 422	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	B_124_5C6ECBF941FEFED4CD52F7AE7DE76226;		//Offset: 423	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FST_SAVE_Repairing_Progress	Repairing_127_4A3BA8C842A8A919956510B5EDE59216;		//Offset: 424	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_AnimalSpawners.ST_SAVE_AnimalSpawners
// Size 56
/////////////////////////////////////////////
struct FST_SAVE_AnimalSpawners {
	struct FGuid	ID_56_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Available_27_7636EBA042B95C40B7E74BA6AE80F228;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	int32_t	D1_36_87DAF44C48B9B2A7DC6382813CA1294F;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D2_37_A63433E1472BE65319AE868F48117F59;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D3_38_C2B1051746A8389AE2B074923996C1B6;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	D4_39_A6B4CACB4D78D2EB39D2A68CF88314CF;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 36	Size: 4
	TArray<struct FST_SAVE_Spawner_Animal>	Animals_51_D53242F247F004A9CA9956A1B5830B21;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_ActivityFurnitures.ST_SAVE_ActivityFurnitures
// Size 60
/////////////////////////////////////////////
struct FST_SAVE_ActivityFurnitures {
	struct FVector	Pos_12_990568DD45349711A716929CB42C10FA;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	Rot_13_3D4D772541B8BDFBDD5EDC980EF82C86;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FName	Name_11_B72368D0423A3A4617D6C9A082CA2B1A;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	Owner_14_99ED524D494B7C79F210459300A0E507;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	TArray<struct FName>	Tags_22_F3B10B3F422E13DFFEC61C98338243EE;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	Variant_25_5F64D3F447520DDFE266DE816D5222EF;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_Achievements.ST_SAVE_Achievements
// Size 188
/////////////////////////////////////////////
struct FST_SAVE_Achievements {
	TMap<TEnumAsByte<E_AnimalType>, bool>	WildAnimalsTypeKilled_4_D5EE8EE54BCFDA8755DDE49C0B293CBD;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Ownership>, bool>	VillagesVisited_7_4E0E058143C040C46CA0FF9CD9E5A79B;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible
	bool	PutOnClothesDuringWinter_11_BF239EA0401E05B0382F01A258FEBA5D;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 161	Size: 3
	int32_t	SeasonsOfWifeGifts_14_FFBF8B8D4ED0813D426FDDA518BA5A90;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	StolenItemsSold_16_18D5F7E14FB5EA7DD8B9F983B72F7487;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ConsecutiveNightsSlept_20_C1DFFC1F4F63237D520ADE952C47F32C;		//Offset: 172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MDSIDEQUESTS_23_68A1417D4CD8EA06B0E59C9A7C3CDED2;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MDSTEALING_28_099A7EA34E0D60B94B82C8AB70206948;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MDSTUMPS_27_28B76BF64EF62533F228ED9FA4AE0C47;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_PlantCondition.ST_PlantCondition
// Size 52
/////////////////////////////////////////////
struct FST_PlantCondition {
	struct FTransform	Transform_3_5AC3B1734C120D000EE990828AD63DAB;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	float	Condition_6_D954B9C247F0237066EC04A007CEAE93;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BookTutorialShown.ST_BookTutorialShown
// Size 7
/////////////////////////////////////////////
struct FST_BookTutorialShown {
	bool	Inventory_9_8622893B43A5F97BAC00019556AACCD9;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Skills_10_FDFA3F6142094446568F81BB5ACC7180;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Journal_11_D841CA284E3468E5055FC1A885C99921;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Map_12_E75064C94CC6A114396A8EAD5E75935B;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Management_13_110F11D640365138182E30B1EB3657D9;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Technology_14_B34670874124103D5343CA9F66F54CED;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	KnowledgeHUD_16_B55A096F49ED5D1D1AA0FD989B715C6C;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GraphicsSettingsPreset.ST_GraphicsSettingsPreset
// Size 29
/////////////////////////////////////////////
struct FST_GraphicsSettingsPreset {
	int32_t	ViewDistanceID_2_8594EC9844DD96F33DD6F8AE33CC5A9A;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	AntiAliasingID_4_FD3F0FB743D3E3B30FE78CB736850508;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	PostProcessID_6_37446B6947BA9488CE5E518006450B62;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ShadowsID_8_278BE76D4EFAB74344F60E85156496D8;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TexturesID_10_D82F97874BBC8C8D054A518FB74181A8;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	EffectsID_16_FDB4A6714A337908702E1FB9D161A60B;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	FoliageID_41_F25DD06E450EB7A8243A8A9CF35B4018;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DFAO_33_51CAECD54A7DDB052D3DD1977A277DBC;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Seed.ST_Seed
// Size 224
/////////////////////////////////////////////
struct FST_Seed {
	struct FText	Name_65_D1537EC44A7C0005416D02A9CF79A272;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Seeds>	Type_6_8B605AF841AF4684021434907B52997A;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 25	Size: 7
	TAssetPtr<class UTexture2D>	Icon_White_69_4A46209C4F55B24610F61B9C32EF612C;		//Offset: 32	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	Icon_Black_72_0DADD9F7410DAB3909AEA1B96F5A7222;		//Offset: 72	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<bool>	SowSeason_22_045DD1D043721A878394B988ECA96D6E;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_FieldPlantStages>, struct FST_ChunkStageData>	StageData_58_7C3BC9574397AB606A3F02864283433F;		//Offset: 128	Size: 80	Flags: Edit, BlueprintVisible
	TArray<struct FST_SowHarvestTime>	TimesOfSowAndHarvest_62_455815584A9F0686D4661BA7C9A1EDA7;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Chunks.ST_Chunks
// Size 520
/////////////////////////////////////////////
struct FST_Chunks {
	int32_t	ID_23_19F40B2D4E8D5F66FA3503875744BFCC;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FVector>	Corners_9_53EF7C4740A8BAAE52DAE6847ED67A7B;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	struct FVector	CenterLocation_14_991B101C4715C844EF7EFCBEA2AA1789;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Occupied_17_98D0CB3F403A5FAED7A1B89F1998B04F;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_ChunkStates>	ChunkState_67_7126F8804F76EE4FA58E049CA0B24803;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_FieldPlantStages>	PlantState_54_F4410E78473E53B34632BCBA8086AD74;		//Offset: 38	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[1];		//Offset: 39	Size: 1
	TArray<int32_t>	PlantSlotsID_66_10BB7415476FA6A91404D6AF9CB1B33D;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	float	Fertility_43_5D8FB7E943C251D35DCEF0BD276EC45A;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[4];		//Offset: 60	Size: 4
	struct FST_Seed	CurrentSeed_47_DFE114D34DDB8DB31E63B1A772152F4B;		//Offset: 64	Size: 224	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Seed	TargetSeed_50_9D315E0846D90AF9AAFCD4918D0BC34E;		//Offset: 288	Size: 224	Flags: Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
	bool	RecentlySown_70_64036DB245363E80E92B76BDD5AC1757;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_3[3];		//Offset: 513	Size: 3
	int32_t	Seasons_73_BA7F60A94F4C3DF4256D06BD874708CD;		//Offset: 516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemSeasonalSource.ST_ItemSeasonalSource
// Size 64
/////////////////////////////////////////////
struct FST_ItemSeasonalSource {
	TArray<struct FST_ItemSource>	SpringItems_25_2CAB8570410192FE8D3BC2B061C2946D;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemSource>	SummerItems_26_BB1220AC42A9226CD13B60B1558CBB9C;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemSource>	AutumnItems_27_5CA5B6024DCF49410EF1B9B40D937F53;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemSource>	WinterItems_28_A5057B3D412BEE8280E1A3A0AA2B6502;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemSource.ST_ItemSource
// Size 24
/////////////////////////////////////////////
struct FST_ItemSource {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinResourceCount_9_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxResourceCount_10_CE5E6F724498D71864AE598360735AF0;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MasterTalent.ST_MasterTalent
// Size 120
/////////////////////////////////////////////
struct FST_MasterTalent {
	struct FText	TalentName_5_2A768D1E4B7435A47B11A38A0008B64E;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	TalentDescription_26_D00359B64EA891BD86E3DF960DBAFF0F;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	TArray<float>	TalentValues_30_0A7004804E6718DD1A13F6A4ABE6DA00;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	TalentTier_20_2BF25E984AB7C909EBDD56B73FFD3D91;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 68	Size: 4
	TAssetPtr<class UTexture2D>	Icon_31_2523E89E4DBBE1B81F29B491E7BB8D09;		//Offset: 72	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	MaxTalentLevel_16_B01A5402437B39C0845430A6DED32DA5;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	CurrentTalentLevel_18_AD4F85A7414874CA72A7E69625046662;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ChunkStageData.ST_ChunkStageData
// Size 64
/////////////////////////////////////////////
struct FST_ChunkStageData {
	TAssetPtr<class UStaticMesh>	Mesh_11_1272B785454222CB9E028A89F5B49E82;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	NumberOfSeasons_5_E8343E794529E7D3D65D9083F9005139;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	TArray<struct FST_ItemSource>	Items_10_64775713495E7483BFFE76B0B030470B;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SowHarvestTime.ST_SowHarvestTime
// Size 2
/////////////////////////////////////////////
struct FST_SowHarvestTime {
	TEnumAsByte<E_Seasons>	PlantSeason_3_0FF5CA7A44A564A47B7D31A035357A25;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Seasons>	HarvestSeason_4_8D815F5D4E12F0B8D00A51B2A0DB7603;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Hour.ST_Hour
// Size 12
/////////////////////////////////////////////
struct FST_Hour {
	int32_t	Hour_7_8483B2D84B0EA2DB0D57DCBADDD6FA5B;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Minute_8_7DE6F85F4F66D3DF3E44D1B734F2C8F6;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Second_10_4559FC074F99FDF56ABB7F91A4450ADD;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_LoadingTips.ST_LoadingTips
// Size 26
/////////////////////////////////////////////
struct FST_LoadingTips {
	struct FText	TipText_2_29E1700C4396BFEA9F3516A441F969FB;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	bool	NotUsableForPC_5_51838F6348582692895A27BBA06D7F60;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	NotUsableForConsoles_7_1D2EBA224412BD93F6D1F48F516DC077;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Knowledge.ST_Knowledge
// Size 136
/////////////////////////////////////////////
struct FST_Knowledge {
	struct FText	Name_11_E70A684246DA878AADA7DEA056184542;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	LongKnowledgeDescription_16_392D71714A23570CAE6F60BA7A5BA709;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	ShortPopUpDescription_17_2B15886F488AD6D98192C0A4963483DD;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FString	MovieURL_PC_22_4D280999452254F4AF7D5FB8B8687FB5;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	MovieURL_PS4_29_5041842649917B66AC2AB79C59847D43;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	MovieURL_PS5_30_422260B944114F79F5C3B1AC8096BE15;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	MovieURL_XBOX_31_4C9B0A394E855F977C3A83A3AF950124;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MiddleNotification.ST_MiddleNotification
// Size 104
/////////////////////////////////////////////
struct FST_MiddleNotification {
	struct FText	NotificationHeadline_6_8EE42BEF4C7420D3034FB7A942E5D21B;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	NotificationText_11_3B102A9F4F533F66A33558A7AB3F0C08;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UTexture2D>	Icon_12_3DCE88324E405032B7BC58A56D644570;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	float	NotificationTimeout_13_5F47A9C2491B3DC064197F85CFF1DB08;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 92	Size: 4
	class USoundBase*	Sound_14_3D64CEB34D0BEA2B99340DA92797C436;		//Offset: 96	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Notification.ST_Notification
// Size 88
/////////////////////////////////////////////
struct FST_Notification {
	struct FST_ItemInventorys	Item_11_2FB91FD24F6E53A984DF6B9A765ACBD1;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	NotificationImage_12_075DB9D54F77B8024B072F97009C9401;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_Notifications>	NotificationType_13_CFBB9A7E4EAA38C3A3021D9D4098C6F7;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[6];		//Offset: 50	Size: 6
	struct FText	WarningText_14_43A7C41A435CE8300053FA8A1403211C;		//Offset: 56	Size: 24	Flags: Edit, BlueprintVisible
	float	NotificationTimeOut_15_BF6A11E5472F671B7A2F4E89B515F7CC;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NotificationDelay_16_90034FA84E879F259C97E4A7860C267A;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestNotification.ST_QuestNotification
// Size 27
/////////////////////////////////////////////
struct FST_QuestNotification {
	struct FText	QuestName_5_D6480F2F45093ADF51DC1EB2F2B35ACD;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_QuestState>	QuestState_7_CD128E4C457ED478AF95ED956F3DC103;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsUpdated_8_89756EEC401A75EB57B39B982D653ED5;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsCanceled_9_8703E9F3421AB4C95E357C9C585D5C13;		//Offset: 26	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FurnitureCategory.ST_FurnitureCategory
// Size 24
/////////////////////////////////////////////
struct FST_FurnitureCategory {
	TEnumAsByte<E_FurnitureCategories>	Category_2_FF8E66614F6A18F3367C1582A93BC7BF;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterFurniture_C*>	ListOfFurniture_6_AF22061943970304796A188B8DCBC497;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_HoldableItemInput.ST_HoldableItemInput
// Size 33
/////////////////////////////////////////////
struct FST_HoldableItemInput {
	struct FName	InputMapped_2_8A397994458EBA714F87719515ED7C8A;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FText	ActionText_5_64AFF10C4E92DC598846F2A908C6FF17;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	bool	IsHold__8_E9CB3DCD45921B0B8BB686AC67D86181;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_HoldableItemInput_Stage.ST_HoldableItemInput_Stage
// Size 16
/////////////////////////////////////////////
struct FST_HoldableItemInput_Stage {
	TArray<struct FST_HoldableItemInput>	HoldableItemInputs_3_AEE134714C0EF98D3C340B884D01B28F;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CharacterList.ST_CharacterList
// Size 24
/////////////////////////////////////////////
struct FST_CharacterList {
	TEnumAsByte<E_Ownership>	Ownership_8_48D3FEC642ABD787421A938E24B09AA1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_NPC_C*>	ListOfNPC_7_85CF465E4A2B25B0E31EB4A725260F62;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FurnitureList.ST_FurnitureList
// Size 24
/////////////////////////////////////////////
struct FST_FurnitureList {
	TEnumAsByte<E_Ownership>	Ownership_11_99DA961248E04F8682B44AB5E8C05CA5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_FurnitureCategory>	Categories_10_9F52855D41B0A66F620750B76CF003EE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CharacterName.ST_CharacterName
// Size 24
/////////////////////////////////////////////
struct FST_CharacterName {
	struct FText	Name_6_34A52ADE4A786470BA673DB6BB3B8DE2;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BuildingCategory.ST_BuildingCategory
// Size 24
/////////////////////////////////////////////
struct FST_BuildingCategory {
	TEnumAsByte<E_Buildings>	BuildingType_2_41E987C8482C4A114A1FFF978A56E51E;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterBuilding_C*>	ListOfBuildings_6_9405FD4F4E6E5645EAFA12BA59D7D48A;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CustomNPC.ST_CustomNPC
// Size 228
/////////////////////////////////////////////
struct FST_CustomNPC {
	struct FDataTableRowHandle	RowName_100_3C9ED039409A31282838B7A671E5B358;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FText	Name_94_56C16C554015D6B9175C2EB4B82D90CF;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Sex>	Sex_97_F7A203124AE551D407BB3FA3EFEC87D8;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 41	Size: 3
	float	Age_74_9B263E474D618870FA373EACF61C817D;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MinDeadAge_111_9FFF029841BBF75D374B06BA61285367;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_CharacterType>	CharacterType_34_58D303B54EAE43A59F155CA244FC05B1;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_92_B72FCC164B262826B96C298F8F3C562B;		//Offset: 53	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType_36_6D5A0AA54E9986F5CD909790D8A193FD;		//Offset: 54	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[9];		//Offset: 55	Size: 9
	struct FTransform	TransformLocation_114_991DF9EB4F258F85BC05C3ACB0784DCA;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	IsVendor_38_6796B918467CDBBCD56E318F76C1D78E;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[7];		//Offset: 113	Size: 7
	struct FDataTableRowHandle	VendorCategory_108_1B6266B4455BA75F1729909CD5E40F20;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FName	VoiceID_120_6615CCB14157801D636A2892D0913FBC;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FString	PartnerID_66_C7228DA945771356E1CEBFA84699087B;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FString>	ChildrenID_67_638B53424933A4E73C1F0BB76AE6769D;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible
	struct FString	MotherID_70_C059756744C8A02A3EA3A883D75CC7E2;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	HouseID_59_4642897347FBC73042DDA28E25292357;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString	WorkplaceID_76_658AE34A411D7DC8C47B37B8DE0416B3;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TEnumAsByte<E_Profession>	Profession_90_2D883673460A95C178626EAB4CED5742;		//Offset: 224	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Wealth>	Wealth_117_38744A654AD79793353D35900C0E959F;		//Offset: 225	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	NightPatrol_103_AF6F6FD94CADEBD6D418579EB098C4FC;		//Offset: 226	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsStoryNPC_105_2BB4BA9A45C8A6E71C109E915F64C895;		//Offset: 227	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NeighborhoodBuildingsItems.ST_NeighborhoodBuildingsItems
// Size 32
/////////////////////////////////////////////
struct FST_NeighborhoodBuildingsItems {
	struct FString	BuidingID_10_D40EE2184BD1CFC6C53C969FAA34EEA9;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Items_8_195BA8DB4D7C776C80677FA6AEDBACD1;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SimpleNPC.ST_SimpleNPC
// Size 88
/////////////////////////////////////////////
struct FST_SimpleNPC {
	TEnumAsByte<E_Sex>	Sex_15_DEB718004FEE3DF7E625D2A27FEB22DA;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	Age_17_C412387243C9483775F2179A563E90DA;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_19_34C757FD4E807FB8F08561A4879835D5;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType_21_7FF5FBFA4B2AABAAE2A6269CAEC6C465;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BanditType>	BanditType_26_C30AAACE4B35EBCC29CFB4A7F05FA289;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Wealth>	Wealth_29_4F53AC6E4DCBC36E58B2B188C813BCAF;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 12	Size: 4
	struct FTransform	TranformLocation_23_B2680F4D4718418FFB0E9AAAEBF69DCF;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	IsVendor_11_9B38D6FA4287D1D2D4447898AF0FFF68;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[7];		//Offset: 65	Size: 7
	struct FDataTableRowHandle	VendorCategory_10_44DEDA6C453B48E05169C7852438C34F;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ArrayOfArraysInt.ST_ArrayOfArraysInt
// Size 16
/////////////////////////////////////////////
struct FST_ArrayOfArraysInt {
	TArray<int32_t>	Integers_5_6146EF6C4E96481EA80171B8C3CD99E5;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CharacterModules.ST_CharacterModules
// Size 200
/////////////////////////////////////////////
struct FST_CharacterModules {
	TAssetPtr<class USkeletalMesh>	Head_20_0F62047E4B769A39F0697FB10A5E94ED;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	Torso_21_37050AC7438218EDBC20C0A3B1EEF040;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	TorsoHands_22_B29F4D134712EF4F8F7DE59FCC399C9C;		//Offset: 80	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	Legs_23_E9E6C1E54C12674D9ADE0DB7B034DDBD;		//Offset: 120	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	LegsFeet_24_C515AFE9437C816567347FAABD9E1E0D;		//Offset: 160	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCItemColors.ST_NPCItemColors
// Size 192
/////////////////////////////////////////////
struct FST_NPCItemColors {
	TAssetPtr<class USkeletalMesh>	Mesh_41_0CE83F9D4C33E50D9690D883408519DA;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ColorTable	FabricDye_23_D48054FA4200E15772A1A98991C594E1;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ColorTable	StitchesDye_22_7930B29846ED3F4455F8C2B7D51B44B1;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FLinearColor	LeatherColor_28_4071AD004050CA8D75D6208F314E1E6C;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor	MetalColor_29_4A3917A546EF008145F784B569B44019;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Dirtiness_32_C39464B84212A4A6A5D38EBA34264725;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	ClearSlot_36_6CE0F9FE4BDA5DED3719BB802A70B462;		//Offset: 108	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 109	Size: 3
	TAssetPtr<class FNone_621>	EquipParams_40_F5176DE54F0817A7E0DDEE88569B9B12;		//Offset: 112	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCMeshesGen.ST_NPCMeshesGen
// Size 128
/////////////////////////////////////////////
struct FST_NPCMeshesGen {
	TArray<TAssetPtr<class USkeletalMesh>>	Head_49_614D1C9D441DB8539183C6A49DBF1DCF;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Torso_40_783C617F46B7EB93397847AA2399B215;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Hands_41_169FDBCA44D5F4BF6CEB3691FED9E903;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Legs_42_BC69DF5B483AB74D3B1BA8966BA8C6E2;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Feet_43_BEC05C5544EE8BDDF6BEA18BD10BD290;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Hat_44_A3034E7D4C0CF0BEA9505CBBE886AF62;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_NPCsGenMeshSettings>	Neck_45_7C73DEC04524214A3D01CA9513569443;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TAssetPtr<class USkeletalMesh>>	Hair_50_E2D4F49B4BB49F22F3A9FBA813E1BD06;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCsCustomPresets.ST_NPCsCustomPresets
// Size 104
/////////////////////////////////////////////
struct FST_NPCsCustomPresets {
	struct FName	CustomPresetID_4_6A6008FE446E65B52E28DB8949571EC7;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	Head_16_189903684BD0EF902406DFB9C9D3B56C;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class USkeletalMesh>	Hair_17_89F3A23D4D3193FB806071AA61D4499E;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_NPCsPresets>	Presets_15_FDDDDFB34A7297A60C70D49ED98FBD74;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCsGenMeshSettings.ST_NPCsGenMeshSettings
// Size 224
/////////////////////////////////////////////
struct FST_NPCsGenMeshSettings {
	TArray<TEnumAsByte<E_Profession>>	Profession_20_54AF922F419AC9E94C37AEBDB8ABFB12;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_Seasons>>	Seasons_22_8D5E40CA41C40FA12E871AB7D5FDBE75;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_NPCItemColors	Mesh_24_2D514BD64965ABC3E50C93A5CAA49A4E;		//Offset: 32	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCsMeshesDyes.ST_NPCsMeshesDyes
// Size 1360
/////////////////////////////////////////////
struct FST_NPCsMeshesDyes {
	struct FST_NPCItemColors	Hat_26_D310376F4693906FC3F497862C9092A6;		//Offset: 0	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_NPCItemColors	Neck_25_BC460B904E4C7A10AA47DBB853C50ACE;		//Offset: 192	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_NPCItemColors	Torso_27_431E37864073747CA163D9B91EC8F44A;		//Offset: 384	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_NPCItemColors	Hands_28_764C0CC74F59888D51BEF1BC9BFAE7C1;		//Offset: 576	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_NPCItemColors	Legs_29_4B9AD6D94A4BE601337F5D9656768619;		//Offset: 768	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_NPCItemColors	Feet_30_2BB60E284A021C6CB0C9D2B5AAD0B96C;		//Offset: 960	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FDataTableRowHandle	Tattoo_41_AD2254DB4E36005946255888995730B5;		//Offset: 1152	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FST_NPCItemColors	Back_44_827BFCAD4CB33E224160AE95C6E39EA6;		//Offset: 1168	Size: 192	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_NPCsPresets.ST_NPCsPresets
// Size 1420
/////////////////////////////////////////////
struct FST_NPCsPresets {
	struct FName	PresetID_28_6ED4DA98478F332F9ABE178ECD9206A7;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<TEnumAsByte<E_Profession>>	Profession_20_54AF922F419AC9E94C37AEBDB8ABFB12;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_Seasons>>	Seasons_22_8D5E40CA41C40FA12E871AB7D5FDBE75;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_Wealth>>	Wealth_29_3E08FA8A48CDF19E77E5A291610CF1D5;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
	struct FST_NPCsMeshesDyes	Meshes_17_2D514BD64965ABC3E50C93A5CAA49A4E;		//Offset: 56	Size: 1360	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	Weight_25_D5B973364A964F57858C759B4604D5EA;		//Offset: 1416	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_VendorCategory.ST_VendorCategory
// Size 16
/////////////////////////////////////////////
struct FST_VendorCategory {
	TArray<struct FST_VendorItem>	Items_4_5AC4A447478D715ED02AE2B513C06A6F;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_VendorItem.ST_VendorItem
// Size 40
/////////////////////////////////////////////
struct FST_VendorItem {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinCount_11_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxCount_12_CE5E6F724498D71864AE598360735AF0;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<bool>	Season_15_40862C9C4F5EA62BD5D822A7F2726E88;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FastTravel.ST_FastTravel
// Size 240
/////////////////////////////////////////////
struct FST_FastTravel {
	TEnumAsByte<E_Ownership>	From_2_136EA192478B98ABC8AC6BA9B0D90828;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TMap<TEnumAsByte<E_Ownership>, int32_t>	To_6_69A6F43F414F79AD5ACEB5BEAC6FFBAB;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	unsigned char uknownData_1[8];		//Offset: 88	Size: 8
	struct FTransform	WaggonLocation_17_FA2554204C4164B0949F97826C41FDFD;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	PlayerLocation_10_D7F508C040EA96CFC3803EAB840EBC1D;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	WaggonerLocation_14_52EBFA2D44D95D872E2FCD9F7EEE1A1E;		//Offset: 192	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BuildingList.ST_BuildingList
// Size 24
/////////////////////////////////////////////
struct FST_BuildingList {
	TEnumAsByte<E_Ownership>	Ownership_8_86B94F0F446BAE90632D0FA19FA1335C;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_BuildingCategory>	Categories_9_BD6A7F984FB02D619D390C8A81C3EC0D;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Tattoo.ST_Tattoo
// Size 40
/////////////////////////////////////////////
struct FST_Tattoo {
	TAssetPtr<class UTexture2D>	TattooTexture_5_0BBE80EE4515B8C6D1EBE0AAECE8DD72;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CharacterVoiceCues.ST_CharacterVoiceCues
// Size 24
/////////////////////////////////////////////
struct FST_CharacterVoiceCues {
	class USoundCue*	Attack_4_0F15A53B4A13567F0BACD7BB6F96AAFC;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundCue*	Hit_6_925A3AC04651AD9451C42483BF38EFCB;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundCue*	Die_8_1BE9D1ED465394060AE12DA9A070D70E;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Animal.ST_Animal
// Size 180
/////////////////////////////////////////////
struct FST_Animal {
	struct FText	Name_38_CF7C8DA14CA6E9E39E9089B601436295;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Sex>	Sex_84_734678FD4AEEB4FE2C75CD981662D2F6;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	float	Health_6_7125F67A472163BAD9AFBC8820677668;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Damage_44_290D8E91444D71CA19B5F1B656D3DBEF;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	FarmAnimal_88_F65B5FF341FDDF0D4FB16782284A3AE8;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_AnimalType>	AnimalType_91_A4C1FAAD4EFCF5A3FFEA0892A42BC165;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[2];		//Offset: 38	Size: 2
	TAssetPtr<class UClass>	Class_122_D0C4B42B4F295B36146D578A6C14A960;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResourceChance>	ResourcesDeadChance_131_AC2544504C5E1600959FC4A1280020EB;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_ItemResourceChance>	ResourcesLifeChance_132_D87EE0E14D356693F9F6DDA0F1A74CD2;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	float	MatureAge_103_22ADDBB048121B51B89875B07D4A071E;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MinDeadAge_104_9B540A48414016A3F6F22ABE91966A00;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimalAgeStage>	AgeStage_70_2D2AAB0C44680A90D317418BA713941B;		//Offset: 120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[7];		//Offset: 121	Size: 7
	TArray<struct FDataTableRowHandle>	MatureAnimal_95_A7DDF3FB48AD10B9B60622BB505989DE;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FDataTableRowHandle>	Children_65_CB1E1F6544F61AEE3901A99095548617;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible
	float	ChanceForBabyBirth_76_F7588B3E485237E996B294B1E0452FAF;		//Offset: 160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxNumberOfChildren_81_FEB26F36402E571AA13FB4949F5A4A34;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Price_100_E47237E640B1B93B9EBE8891A2FFC7F7;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberOfVariation_113_098C9C1E40D476EEA23CDDBEFC38BD5A;		//Offset: 172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Food_118_185B38F843011B78F24EE09B165E7ED7;		//Offset: 176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemSourceConditionRandom.ST_ItemSourceConditionRandom
// Size 32
/////////////////////////////////////////////
struct FST_ItemSourceConditionRandom {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinResourceCount_9_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxResourceCount_10_CE5E6F724498D71864AE598360735AF0;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinCondition_18_46FD9A8345B6C883B19B0CAC9D1723B5;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxCondition_19_821FD69443E66D87430D969521283143;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Helper_Spawner_Indices.ST_Helper_Spawner_Indices
// Size 8
/////////////////////////////////////////////
struct FST_Helper_Spawner_Indices {
	TEnumAsByte<E_ActorType>	ActorType_8_06473ABE421E9BDCA8C6DAB1767EE61B;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	Index_7_E947623D4EEA521F19B3838FB295A465;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_Animal.ST_Spawner_Animal
// Size 65
/////////////////////////////////////////////
struct FST_Spawner_Animal {
	struct FTransform	SpawnPoint_2_7F09357C4EC607E4B6E5F8B4565873B2;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FDataTableRowHandle	Animal_5_6953D36C45F6F185A527448A8CF2A741;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	bool	SpawnDead_7_50B8FA9244F19ACCBF50698A56629C23;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_CollectableFurniture.ST_Spawner_CollectableFurniture
// Size 105
/////////////////////////////////////////////
struct FST_Spawner_CollectableFurniture {
	struct FTransform	SpawnPoint_2_6E63537B4CFCF0CC0FDBE78DB0A9EA40;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TAssetPtr<class UClass>	CollectableFurniture_20_D64776BF4BCC18758A6ABD9BD3F99D5C;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Items_15_4F1B5C3343C4A51C51192A8EC660A905;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible
	bool	OverrideSeasonSettings_19_5E90495B406A63D4F87629801D968DF1;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_ContainerItemPreset.ST_Spawner_ContainerItemPreset
// Size 16
/////////////////////////////////////////////
struct FST_Spawner_ContainerItemPreset {
	TArray<struct FST_ItemSourceConditionRandom>	ItemsPresets_11_83AD72DD4C7A1D44437B299F62703290;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_Decal.ST_Spawner_Decal
// Size 56
/////////////////////////////////////////////
struct FST_Spawner_Decal {
	struct FTransform	SpawnPoint_2_6E63537B4CFCF0CC0FDBE78DB0A9EA40;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	class ABP_MasterDecal_C*	DecalClass_16_D64776BF4BCC18758A6ABD9BD3F99D5C;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_Furniture.ST_Spawner_Furniture
// Size 65
/////////////////////////////////////////////
struct FST_Spawner_Furniture {
	struct FTransform	SpawnPoint_2_C8B4A20443C3CDFF1659BBA3E4E82AC6;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FDataTableRowHandle	Furniture_10_38EB51A04B0595524F9162A86C7DABF9;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	TEnumAsByte<E_Ownership>	Ownership_9_363E15804505424058A991B9F54D3298;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_Item.ST_Spawner_Item
// Size 84
/////////////////////////////////////////////
struct FST_Spawner_Item {
	struct FTransform	SpawnPoint_2_79E158C942D92EE28188C1A4EF30CB1E;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FST_ItemResource	Item_8_101554ED45FC76283172B69961A2625B;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	bool	SimulatePhysics_16_E10643074D060EAD87A112BFF127D38B;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 73	Size: 3
	int32_t	ConditionMin_12_8654A8574A903D91F1BE7E84F17405EB;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ConditionMax_14_A157AE4F4B06656D09A1C7A0BDDE58D0;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_ItemContainer.ST_Spawner_ItemContainer
// Size 104
/////////////////////////////////////////////
struct FST_Spawner_ItemContainer {
	struct FTransform	SpawnPoint_3_3BD2BAC14EFB32D0D121F0A877BA51E1;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TArray<struct FST_Spawner_ContainerItemPreset>	ItemsPreset_19_09463C4340969D489B001885AE4F78B4;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	ContainerType_20_A18A2CC64B4692A2DFECA385DBE00714;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_Mesh.ST_Spawner_Mesh
// Size 92
/////////////////////////////////////////////
struct FST_Spawner_Mesh {
	struct FTransform	SpawnPoint_2_6E63537B4CFCF0CC0FDBE78DB0A9EA40;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TAssetPtr<class UStaticMesh>	Mesh_6_D64776BF4BCC18758A6ABD9BD3F99D5C;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	float	RenderDistance_9_0F670D7248B972BC1F639295BA7B2106;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Spawner_NPC.ST_Spawner_NPC
// Size 144
/////////////////////////////////////////////
struct FST_Spawner_NPC {
	struct FTransform	SpawnPoint_2_56EFF6514C988E30970C5FAE7DC47F99;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FST_SimpleNPC	NPC_6_3A226F354B912193D70720BC24D42F7B;		//Offset: 48	Size: 96	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemResourceChance.ST_ItemResourceChance
// Size 29
/////////////////////////////////////////////
struct FST_ItemResourceChance {
	struct FST_ItemResource	Item_6_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	float	DropChance_8_9C54216D420D6D02D21580A8369F52E2;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	CanBeMultiplied_10_8D7E173346F8B5226177199B34916D6C;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalCategory.ST_AnimalCategory
// Size 24
/////////////////////////////////////////////
struct FST_AnimalCategory {
	TEnumAsByte<E_AnimalType>	AnimalType_60_290D8E91444D71CA19B5F1B656D3DBEF;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_AnimalBase_C*>	ListOfAnimals_59_C0EB501A4302228A4F9FC1BFA0EEA761;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalGroup.ST_AnimalGroup
// Size 96
/////////////////////////////////////////////
struct FST_AnimalGroup {
	struct FDataTableRowHandle	Animal1_66_72FE202B4AE4DF8E2CDAC095B4F226FF;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinAnimal1Count_71_7125F67A472163BAD9AFBC8820677668;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxAnimal1Count_72_4B330D11447CD561FA7DBC8C0D4D11DF;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FDataTableRowHandle	Animal2_67_EEACC4D748441B1EDEAE08B5FE5CB298;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinAnimal2Count_73_8C10AB8F42B37019216527A224AB4D95;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxAnimal2Count_74_92DDCA1F4DE5F0AD1085AE87368CD9C0;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FDataTableRowHandle	Animal3_68_948BF6224423D9447ECFA68B8040671C;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinAnimal3Count_75_B0DA3D5C41F4E406E357A285B6ABED49;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxAnimal3Count_76_9DAEE92C407A9D5416EB22A2D07472B1;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FDataTableRowHandle	Animal4_69_78A9C86D40768C89837E2BBA3F396EBB;		//Offset: 72	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinAnimal4Count_77_6012DD7E49064384DA9C2F8C50EDE3A8;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxAnimal4Count_78_43C788474240D97747D32083B191857E;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalSpawnerArray.ST_AnimalSpawnerArray
// Size 16
/////////////////////////////////////////////
struct FST_AnimalSpawnerArray {
	TArray<class ABP_SpawnPointWildAnimal_C*>	AnimalSpawnPoints_3_966CD82443FF5E6FF534BF88981B6824;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FishSpawnerArray.ST_FishSpawnerArray
// Size 16
/////////////////////////////////////////////
struct FST_FishSpawnerArray {
	TArray<class ABP_Flock_Fish_C*>	AnimalSpawnPoints_4_966CD82443FF5E6FF534BF88981B6824;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SlotSettings.ST_SlotSettings
// Size 200
/////////////////////////////////////////////
struct FST_SlotSettings {
	struct FTransform	Slot_9_814465744ACC328196A32282663A2E2A;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	IsOccupied_5_E4758CA94DFA8B072A0156A3D4CFD8C9;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[15];		//Offset: 49	Size: 15
	struct FTransform	StartPoint_12_A4EED4134C19687BAAA562ACB5F11D20;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	HaveStartPoint_15_130CDCC744C84A8C546BB7BAF9666318;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsBreakSlot_17_E199C2F843F8CDBE4A36A0AA86C650BF;		//Offset: 113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsApprenticeSlot_19_511C62D643BC997BAAC92F92D97BC445;		//Offset: 114	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[5];		//Offset: 115	Size: 5
	TMap<TEnumAsByte<E_BuildingSlotType>, struct FST_SlotAnimIDs>	AnimIDs_39_EABDB2A74C4814F3342B7F9A5978C756;		//Offset: 120	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalList.ST_AnimalList
// Size 24
/////////////////////////////////////////////
struct FST_AnimalList {
	TEnumAsByte<E_Ownership>	Ownership_11_86B94F0F446BAE90632D0FA19FA1335C;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_AnimalCategory>	Categories_13_BD6A7F984FB02D619D390C8A81C3EC0D;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SlotAnimIDs.ST_SlotAnimIDs
// Size 16
/////////////////////////////////////////////
struct FST_SlotAnimIDs {
	TArray<unsigned char>	AnimIDs_6_A427A6EB436ED9A9DEE89AA2EFE77836;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimaBehavior_Defend.BP_Struct_GroundAnimaBehavior_Defend
// Size 20
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimaBehavior_Defend {
	float	MaxDistanceFromLocation_6_BC9C4828461CA957E39B5B85EC4C38FD;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_DefenseLocation>	DefenseLocationType_5_FAB415AA4DC450FF34709A9C92AAEFA1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	class ABP_AI_DefendLocation_C*	SpecificDefenseLocation_13_0127B8504C11C623F2566896CB903011;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	InspectionTime_12_AE0302964FB5CE59A218F6938156203C;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimal_AnimationDetails.BP_Struct_GroundAnimal_AnimationDetails
// Size 64
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimal_AnimationDetails {
	class UAnimMontage*	AnimationMontage_2_6DA37C3447ACA652299A898A2000EAAF;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AnimationPlayRate_5_3EC769514F8628F38F1EC1A0F0AAEDD6;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName	AnimationStartSectionName_9_16699D8B4C0B46BDB08D35AAA2991D7E;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	class USoundBase*	SoundCue_13_451BE7144C74F51BC0DC70ADFE0B2801;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SoundVolumeMultiplier_16_35EC70FC4EFB4DB4D4868F887721C3F1;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SoundPitchMultiplier_19_591F5ABB48BB20CC1E6B81B96772F6CB;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SoundStartTime_21_AD5919244A10155AD3AA118F65675FA2;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 44	Size: 4
	class USoundAttenuation*	SoundAttenuation_24_A3A2CC34459699273600CBBC45A49025;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundConcurrency*	SoundConcurrencySettings_27_E79729CA4CF32E587157C498DE58472A;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimal_Animations.BP_Struct_GroundAnimal_Animations
// Size 17
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimal_Animations {
	TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>	AnimationsList_3_67DF174743F15082EC8828BE0DF33B28;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<EBP_Enum_AnimPlayMode>	PlayMode_7_602DA3D6456040BA4039CB9C2F9DCCF5;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimal_CurrentMontage.BP_Struct_GroundAnimal_CurrentMontage
// Size 24
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimal_CurrentMontage {
	bool	AnimationPlaying_8_6DAEF49441C86FD47C7CA7A81DC7A975;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<EBP_Enum_AnimType>	AnimationType_4_C4F403614AD6631E918C1EA2010B9C43;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	int32_t	MontageIndex_13_482476214505D9B10AFF48A7958F11A1;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AnimationPlayrate_16_8D5DA9B54FE620008498E1883C07BF84;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 12	Size: 4
	class UAnimMontage*	Montagereference_9_86C690CD42133702D2013099FDC09C3C;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimal_Debug.BP_Struct_GroundAnimal_Debug
// Size 4
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimal_Debug {
	bool	RoamBehavior_1_61F8DE8E47B6A492CFBFCA9531840752;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	EngagedTarget_4_7DD1F4A648077F0545BB3B82D26008DD;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MeleeRange_5_79B648DF4456A4C1A690DB883C92E10D;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	PlayerProximityCheck_9_8020961A4CA9E98B6E37D0903F2F42CD;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails.BP_Struct_GroundAnimalBehavior_AnimalDetails
// Size 36
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails {
	TEnumAsByte<EBP_Enum_FeedingBehavior>	FeedingBehavior_17_E93B3B2647578E83006F329BB30C49AF;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	MaxWalkSpeed_4_1E08CE69495D004ADB4402A5AE435C46;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	EngageMaxWalkSpeed_6_716E45B241D9610E8B0EDF9B7E176895;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxAcceleration_8_83CF41FB490787DB06FD928ED7D8765F;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	EngageMaxAcceleration_10_AC5B061E46955A5A3B1CABA1503DAE92;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HurtMovementFactor_20_27131F0D489F0691291E63B0E3ED9918;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Mass_2_EE571A8645ABA09A05D53588BCDDC41F;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxStepHeight_12_1CFE732843112C3003F0489AE1C5B33E;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxWalkableFloorAngle_14_440C7FD7434AB2BFD1C348AED31F86C2;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack.BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack
// Size 21
/////////////////////////////////////////////
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack {
	TEnumAsByte<EBP_Enum_MeleeDamageType>	MeleeDamageType_2_83E4E9F74F475BCE4ED7F7AEC99E503A;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	DamageAmount_14_E2E41E2B4C6AD1A1CF7B83AA757ED6DF;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AttackFrequency_5_8F6C0B344098E7A6604FF8B07B5E3E6F;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	AggroTimer_7_464BCFE04E90AB6D34D28D96A9449D67;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	DisengageCD_11_BD935CE243E07628A8E2BA8D4591F6D5;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Dontmovewhileattacking_17_BD7AEB3144FEACAA92E84C96A67FDA3D;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_QuestNPC_Data.ST_QuestNPC_Data
// Size 83
/////////////////////////////////////////////
struct FST_QuestNPC_Data {
	struct FString	NPC_ID_5_2D4F02F34BF47D581CDA62AF269CFBC1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TEnumAsByte<E_IdleStates>	IdleState_8_FA8D226646294AEE6F706ABFE1B4A84D;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char	PoseID_13_9F7D1F3F4D595A3BF17B88AD2B577ED6;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AfterIdlePose>	AfterIdlePose_15_2BA825EC496D536EAE1A8AB98D225C9A;		//Offset: 18	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[13];		//Offset: 19	Size: 13
	struct FTransform	TransformLocation_18_A146B08043FA219E0A24969DB4351010;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	InspectorVisibility_23_CE68726A47E067AE34E46188A9FE3F7C;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	BlockTalking_21_3617AFEF4EF171C28B8EF5B83690AB1B;		//Offset: 81	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	NormalTalking_25_965A2018440A0D07CE44F591A1D4809B;		//Offset: 82	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FieldTasksLists.ST_FieldTasksLists
// Size 50
/////////////////////////////////////////////
struct FST_FieldTasksLists {
	class AActor*	Field_28_DB0F6D89450FE553DDE6618319FC7170;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_FieldActivities>	Activities_10_33142A434B07AAE7D6F32B9D1F019628;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	int32_t	Priority_7_18BBE0B3495FC3F8FC548E99A0A8826D;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<int32_t>	ChunksID_22_9422762B4710150FFFD8EC8301817630;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FVector>	Destination_23_4CF9CDF1488E0AAC9F9B21A12B0B7F32;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Tools>	NeedItem_14_73AB4DA445E1664088FE42B557F75145;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsOccupied_17_1E6389D04384F720EEE21C8D27CF43AD;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_VillagesOriginAndRange.ST_VillagesOriginAndRange
// Size 20
/////////////////////////////////////////////
struct FST_VillagesOriginAndRange {
	TEnumAsByte<E_Ownership>	Village_6_E36CDDCA4601595C84224B9CA7CE20F0;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	struct FVector	Origin_7_1268E0A14CC9C726FA48DE9C244B75C2;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Range_8_84ACE46744B31CE4F64945B1B255D24F;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MontagesSettingsArray.ST_MontagesSettingsArray
// Size 16
/////////////////////////////////////////////
struct FST_MontagesSettingsArray {
	TArray<struct FST_MontagesSettings>	MontageSettings_3_1F75A2A448A2CA5D5FE0879F4F7F4572;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CameraRotationLimits.ST_CameraRotationLimits
// Size 24
/////////////////////////////////////////////
struct FST_CameraRotationLimits {
	bool	LimitCameraRotation_1_B917077D4B714FB5010D04AFA5665C0D;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	UseYaw_18_8C72ED534B539E078F938C9695557C0D;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	float	YawMin_8_3139CAE547568BB96C3A35AE1711EBCC;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	YawMax_9_1CEF2CF646CAA38C1615269CD3503A62;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	UsePitch_19_E232D6CF43B230812B4805A533FD9E6F;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 13	Size: 3
	float	PitchMin_12_D01768584C8A0A91FD3A9B959C65AF62;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	PitchMax_13_DA497F8043D0F35C78023CA4801066E3;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MontagesSettings.ST_MontagesSettings
// Size 60
/////////////////////////////////////////////
struct FST_MontagesSettings {
	class UAnimMontage*	Montage_12_DE6E58A144B4F884EC06C6AA4A445833;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HeadBlend_13_2066C7544A2D51A905F751A37AE82F19;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	StopPlayerRotation_14_11B0618A466CF24833459C9EB2623EFB;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	StopPlayerMovement_15_B2F0057748CBF33CE25E57BE6F847BA4;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	UsePawnControlRotation_16_F00B91EF4613E584D9C1328D63E434D8;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[1];		//Offset: 15	Size: 1
	class UBlendSpaceBase*	MontageAimOffset_33_B47A28CE44252F7591A7F282E2B64D61;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBlendSpaceBase*	FullBodyAimOffset_34_504323FE4C20BFC7C5B1C798CA19FEB0;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraRotationLimits	CameraRotationLimits_28_FA762D534C81BDD0A0022285B51348A3;		//Offset: 32	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MovementSpeedMultiplier_30_838F6F4B416E49EAEAD8859DFE827B4E;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FieldCategory.ST_FieldCategory
// Size 24
/////////////////////////////////////////////
struct FST_FieldCategory {
	TEnumAsByte<E_FieldCategories>	Category_5_9007E0804EDF138D76C8E38B1DC8412E;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterField_C*>	ListOfFields_6_18DBEF89431BA0F63FC97A981EA205A5;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_PlantSlot.ST_PlantSlot
// Size 64
/////////////////////////////////////////////
struct FST_PlantSlot {
	TEnumAsByte<E_FieldPlantStages>	PlantStage_3_F8FDBD2C419512E677E3EF88BD2CE8AA;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	ChunkID_6_44DB2D6645C6AE2861B79DB408B32200;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[8];		//Offset: 8	Size: 8
	struct FTransform	Transform_11_E05DDCE24F69691306121D84CD3A6EEC;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SeedCount.ST_SeedCount
// Size 8
/////////////////////////////////////////////
struct FST_SeedCount {
	TEnumAsByte<E_Seeds>	SeedType_2_26FCF0444FCBAD8326CBD8B2350A91E3;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	Count_5_96B4EE034520E512BE1A789679611F01;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemResourceOwner.ST_ItemResourceOwner
// Size 21
/////////////////////////////////////////////
struct FST_ItemResourceOwner {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	Count_5_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership>	Ownership_9_392333A94B6E9C0DC78F50BD5CF11CDF;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FieldList.ST_FieldList
// Size 24
/////////////////////////////////////////////
struct FST_FieldList {
	TEnumAsByte<E_Ownership>	Ownership_7_C2E1F40946FF899F0CB984AC893694D1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_FieldCategory>	Categories_6_F07378C24F5099DC0FDA968A78053CEB;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_King.ST_King
// Size 26
/////////////////////////////////////////////
struct FST_King {
	struct FText	Name_4_C8A84FB54B8D5072AED1BD8511A8B084;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_Sex>	Sex_8_BE020DF84F2FE1446C161994FA6D18BB;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Kingdoms>	Kingdom_5_ECBDFD454C26C0F173DF80866F2CE0CA;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_KingNickname.ST_KingNickname
// Size 25
/////////////////////////////////////////////
struct FST_KingNickname {
	struct FText	Nickname_3_11E25E06487625192F6C31ACCC918C4C;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_KingAlignment>	NicknameAlignment_6_C0CBAA5B43ABB124EA988A862BF6FA90;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Text.ST_Text
// Size 24
/////////////////////////////////////////////
struct FST_Text {
	struct FText	Text_3_1CA2AF6745D0A486178977AD221C9A68;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BuildingsStructure_ForVillageManager.ST_BuildingsStructure_ForVillageManager
// Size 24
/////////////////////////////////////////////
struct FST_BuildingsStructure_ForVillageManager {
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_5_4169649942E48B99379DFDB36E1C5AD5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_SimplifiedBuildingUnlockedStructure>	BuildingStructure_7_19187DC64037D5A9B8291EACF02790E3;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SimplifiedBuildingUnlockedStructure.ST_SimplifiedBuildingUnlockedStructure
// Size 72
/////////////////////////////////////////////
struct FST_SimplifiedBuildingUnlockedStructure {
	struct FText	Name_8_F506EBAA43B1C2388CF4C2B02366BE4A;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UTexture2D>	Icon_11_25D330B94371350C4CA198B7C3C8F10F;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	TechnologyLevel_6_4F0203DA4256E0EAEB6246AF68C97281;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	NumberOfAnimals_10_52469AAE4BBBF6E97414678086055A5B;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Name_Float.ST_Name_Float
// Size 12
/////////////////////////////////////////////
struct FST_Name_Float {
	struct FName	Name_4_F7E8F62C4D9BBC3465F7848085491ED6;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Value_5_F9E54C25498FC1465348F89B1526FFD5;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ReputationLimits.ST_ReputationLimits
// Size 4
/////////////////////////////////////////////
struct FST_ReputationLimits {
	int32_t	RequiredReputation_2_A23866B248220DA64A2658A6D85E2582;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AnimalProduction_Progress.ST_AnimalProduction_Progress
// Size 64
/////////////////////////////////////////////
struct FST_AnimalProduction_Progress {
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	struct FST_AnimalProduction_Recipe	RecipeSettings_81_81F832E3403405B7B4B76DB5CFBAB39A;		//Offset: 8	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Coefficients.ST_Coefficients
// Size 16
/////////////////////////////////////////////
struct FST_Coefficients {
	float	Food_8_6750BE6F47D0E2DB66CDABB5FAF94230;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Water_14_D55C13774014D9B9F2A17DB1F16C0F9D;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Wood_7_9D7868B24AC0A96826696D8D517B0A40;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Temperature_11_A9991C39479D51E51C0B8BBFE782FAD8;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_Cost.ST_Production_Cost
// Size 13
/////////////////////////////////////////////
struct FST_Production_Cost {
	struct FName	Name_12_863BF8C242E8191F28CF30AEFA4C95D8;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_6_D12E4C4F4F1981AEC86ACD8925C82BE2;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Production_SourcePlaces>	Storage_10_4D9EAEFA40E5A8E3C7E62ABD055EBC4B;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_ProfessionData.ST_Production_ProfessionData
// Size 16
/////////////////////////////////////////////
struct FST_Production_ProfessionData {
	int32_t	NumberOfWorkers_2_96D69D3240D79C8F7E8066A3808B63D4;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TotalSkillValue_4_CB184D0E4728E0E9612A8DBEBD200777;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TotalWorkingSpeed_7_1B241D104AEE09A919DA2998A0CE5CC1;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TotalMood_11_B118AC574FAABF56D261149720FFD96B;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_Progress.ST_Production_Progress
// Size 120
/////////////////////////////////////////////
struct FST_Production_Progress {
	bool	Overflow_49_D0E2433D44B3711FAD03C1A97D24F9BF;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	NoTool_61_D17F06EF45D3CDE6615043B2B7B5BD35;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	HasWorkers_56_CDFD8A1140C5DF965D2BEBB4BFC0E310;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	HasAnimals_80_FFD0472A4F9E6393527487A989515447;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	PowerOfProduction_59_68B9577C417A9A794ADA18B161ADE903;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 20	Size: 4
	struct FST_Production_Recipe	RecipeSettings_74_81F832E3403405B7B4B76DB5CFBAB39A;		//Offset: 24	Size: 64	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TEnumAsByte<E_Profession>	Profession_32_DDDAB63E4ED04DDBDA630EADDBFE2675;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	SkillType_31_16BEBB664784C756C661B2B470A7EEE4;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	OverwriteCondition_72_F5EF043B4EA56EB4EC6683A16207E9C6;		//Offset: 92	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[3];		//Offset: 93	Size: 3
	float	Condition_73_E15717924B0469A410D8EEBAD2CCC83E;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[4];		//Offset: 100	Size: 4
	TArray<struct FST_ItemCache>	Cache_78_BEBB73504FB681CD5DA06B820F476459;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Production_Result.ST_Production_Result
// Size 864
/////////////////////////////////////////////
struct FST_Production_Result {
	struct FName	Name_12_863BF8C242E8191F28CF30AEFA4C95D8;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Count_6_D12E4C4F4F1981AEC86ACD8925C82BE2;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Production_SourcePlaces>	Storage_10_4D9EAEFA40E5A8E3C7E62ABD055EBC4B;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
	struct FST_ItemDetails	Data_15_05867A4D4B9F1403597BE09AA5E8012D;		//Offset: 16	Size: 848	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Repairing_Progress.ST_Repairing_Progress
// Size 24
/////////////////////////////////////////////
struct FST_Repairing_Progress {
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FST_ItemCache>	Cache_78_BEBB73504FB681CD5DA06B820F476459;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Trade_Progress.ST_Trade_Progress
// Size 40
/////////////////////////////////////////////
struct FST_Trade_Progress {
	bool	NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	HasWorkers_56_CDFD8A1140C5DF965D2BEBB4BFC0E310;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Limit_67_68B9577C417A9A794ADA18B161ADE903;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Profession>	Profession_32_DDDAB63E4ED04DDBDA630EADDBFE2675;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Skills>	SkillType_31_16BEBB664784C756C661B2B470A7EEE4;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;		//Offset: 18	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;		//Offset: 19	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[4];		//Offset: 20	Size: 4
	struct FDataTableRowHandle	ItemHandler_70_E3CA7F294299EF0415E84CBB9397973B;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Trading_Progress.ST_Trading_Progress
// Size 56
/////////////////////////////////////////////
struct FST_Trading_Progress {
	bool	Overflow_84_31EEABE94B8CBB562E22BFA048C6DBF8;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	float	Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	PowerOfProduction_59_68B9577C417A9A794ADA18B161ADE903;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FDataTableRowHandle	Item_76_81F832E3403405B7B4B76DB5CFBAB39A;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	bool	TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[7];		//Offset: 33	Size: 7
	TArray<struct FST_ItemCache>	Cache_82_AFDC6A6640809E964CF81E95C8C4A249;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Gates.ST_Gates
// Size 275
/////////////////////////////////////////////
struct FST_Gates {
	struct FName	TechnologySchemeID_82_9CB1E476446F5B565B4693A22BEF06D3;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	Icon_110_492B534B4CB32FE9C57F0BBE4DB47EBD;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	BuildingClass_91_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Resources_96_D0F1EF1C4CEC286C0C3086AB5640A982;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
	float	MaxPlacementAngle_52_5F5DD4E84590C782B5D86FA45737F4A4;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	PlacementOnLandscape_59_B822C7794E1978F0AD07C385B9D4E937;		//Offset: 156	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	PlacementOnFloor_60_941DF62A46F5204D094C72977ADA0253;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	PlacementOnWindow_97_3DEB52604434CA38C368218B98D44322;		//Offset: 158	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	AutomaticVerticalRotation_90_FDF399E74681277A0A0ADE83782CDF74;		//Offset: 159	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	IsLockedByTechnology_69_B1B027B14A6D918DD767078D8D37CBC4;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_79_4294923E4BAD60B26865E598F857E8FB;		//Offset: 161	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 162	Size: 2
	int32_t	TechnologyLevel_80_FC68CF1B4DBD7FC647D9A3B371AA4C7B;		//Offset: 164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TechnologyCost_81_81FE9C964D4C3091DE826A8D6EE82A1A;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SeasonalRemove_87_2FD878C94832928D28F528B21A7EBA3E;		//Offset: 172	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 173	Size: 3
	struct FTransform	MarkerT1_107_6C5ABBE84000B689D41788A1D08C4E4D;		//Offset: 176	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	MarkerT2_109_0C19A03A43C0DD9D5259E5ABF5B06E5C;		//Offset: 224	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TEnumAsByte<E_MaterialType>	MaterialType_117_B5067454494604BC6DF1998A13ED9BE3;		//Offset: 272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SoundsOcclusion_112_54DAE71B487314D19F7A319C5F3462C1;		//Offset: 273	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	CameraCollision_114_D3EDCCFE409ABFB457104B835719D036;		//Offset: 274	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SplineStructure.ST_SplineStructure
// Size 395
/////////////////////////////////////////////
struct FST_SplineStructure {
	struct FName	TechnologySchemeID_72_A69C6AEA41CDDEA376A24B8A3BECA02E;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	Icon_96_D6AFD94A479323450B59CCBCC73E9F9A;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	BuildingClass_93_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	unsigned char uknownData_0[8];		//Offset: 136	Size: 8
	struct FTransform	FirstMeshTransform_76_EC4F995041F83D723C60BA9D44D196E6;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TAssetPtr<class UStaticMesh>	FirstMesh_89_0939F4F144C9BA2A85F65996744A810E;		//Offset: 192	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	ConstructionMesh_90_64E6F89040225034F603F8A1C69DF183;		//Offset: 232	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	SplineMesh_91_904C69A646E9957D904D04BF36E9A4FE;		//Offset: 272	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	SplineMesh_OldGen_103_2426D7E04E27EBDB78FBE586B2116740;		//Offset: 312	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Resources_80_DC7A6B2E4548F9E2FD06EB9F98A27989;		//Offset: 352	Size: 16	Flags: Edit, BlueprintVisible
	float	StepSize_59_1976A5B84F3DD8F2AA50239549DEE395;		//Offset: 368	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsLockedByTechnology_46_917AD40843D243E91DEB208F491EC1A4;		//Offset: 372	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_48_E13292F044E1BD7440DD5ABCB1792F4F;		//Offset: 373	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[2];		//Offset: 374	Size: 2
	int32_t	TechnologyLevel_51_D872A3D2445F3382BE6F6488F91B7BAE;		//Offset: 376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TechnologyCost_52_21D301484F60E0B8C180C3BCA4840DCB;		//Offset: 380	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TechnologyPoints_83_A82F4FDE4951B13629B3CCB61D7D1DD9;		//Offset: 384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SkillPoints_85_9689952C4F846117A5DBA79FE3D5A139;		//Offset: 388	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MaterialType>	MaterialType_88_72924F094287C1B3C644B8B2153982CB;		//Offset: 392	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SoundsOcclusion_98_21016EF743C4AC8AB3B766BC0B9347BF;		//Offset: 393	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	CameraCollision_100_3743CB4C4D8F5AD7498093A0B524E51D;		//Offset: 394	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FoliageTargetsData.ST_FoliageTargetsData
// Size 24
/////////////////////////////////////////////
struct FST_FoliageTargetsData {
	TEnumAsByte<E_Resources>	ResourceType_33_16BE06A44A565BC6FE7DD4B660E8A01F;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<struct FST_FoliageTarget>	FoliageTargets_32_0A1C1AAF440C268365470086160F8644;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FoliageTarget.ST_FoliageTarget
// Size 80
/////////////////////////////////////////////
struct FST_FoliageTarget {
	bool	IsActor_29_AC492AFD4673D06500DBC1B592EA06B1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	class AActor*	Actor_34_2550C8EC41E9EE703055EC8A263CB2E5;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UHierarchicalInstancedStaticMeshComponent*	FoliageType_27_16BE06A44A565BC6FE7DD4B660E8A01F;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
	struct FTransform	OriginTransform_14_11D052A34893B671001558BBB56EB6FA;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_KeyMapping.ST_KeyMapping
// Size 16
/////////////////////////////////////////////
struct FST_KeyMapping {
	struct FName	KeyLetter_7_0AF7BE21452137AB9E98CAA61739033A;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTexture2D*	KeyIcon_8_60E68FF340AF9F62B9D66EB7B7336DC5;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Road.ST_Road
// Size 124
/////////////////////////////////////////////
struct FST_Road {
	struct FName	TechnologySchemeID_72_A69C6AEA41CDDEA376A24B8A3BECA02E;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 32	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	BuildingClass_94_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Resources_80_DC7A6B2E4548F9E2FD06EB9F98A27989;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible
	bool	IsLockedByTechnology_46_917AD40843D243E91DEB208F491EC1A4;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_48_E13292F044E1BD7440DD5ABCB1792F4F;		//Offset: 113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 114	Size: 2
	int32_t	TechnologyLevel_51_D872A3D2445F3382BE6F6488F91B7BAE;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TechnologyCost_52_21D301484F60E0B8C180C3BCA4840DCB;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CraftingCategory.ST_CraftingCategory
// Size 104
/////////////////////////////////////////////
struct FST_CraftingCategory {
	struct FText	CategoryName_3_E954F11A47D5F0012150239E4D293FC4;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	CategoryDescription_5_7353700F498716505EDAFD80337A80C7;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	TArray<struct FDataTableRowHandle>	Recipes_22_C0CDE96F4DD883519894A0A1436A31C8;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible
	TAssetPtr<class UTexture2D>	CategoryIcon_23_5725155D4C68FB70889C86BDB5044F5A;		//Offset: 64	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Bridge.ST_Bridge
// Size 355
/////////////////////////////////////////////
struct FST_Bridge {
	struct FName	TechnologySchemeID_72_A69C6AEA41CDDEA376A24B8A3BECA02E;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TAssetPtr<class UTexture2D>	Icon_96_D6AFD94A479323450B59CCBCC73E9F9A;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_2_9176F3044DCF96898285B1B969D47957;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_15_D6076A164E280AD2D7A5C99914C7C764;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UClass>	BuildingClass_93_D0A4637948415EDC3BB10E8473C522F5;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	unsigned char uknownData_0[8];		//Offset: 136	Size: 8
	struct FTransform	FirstMeshTransform_76_EC4F995041F83D723C60BA9D44D196E6;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TAssetPtr<class UStaticMesh>	FirstMesh_89_0939F4F144C9BA2A85F65996744A810E;		//Offset: 192	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	ConstructionMesh_90_64E6F89040225034F603F8A1C69DF183;		//Offset: 232	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh>	SplineMesh_91_904C69A646E9957D904D04BF36E9A4FE;		//Offset: 272	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TArray<struct FST_ItemResource>	Resources_80_DC7A6B2E4548F9E2FD06EB9F98A27989;		//Offset: 312	Size: 16	Flags: Edit, BlueprintVisible
	float	StepSize_59_1976A5B84F3DD8F2AA50239549DEE395;		//Offset: 328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	IsLockedByTechnology_46_917AD40843D243E91DEB208F491EC1A4;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_TechnologyTypes>	TechnologyType_48_E13292F044E1BD7440DD5ABCB1792F4F;		//Offset: 333	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[2];		//Offset: 334	Size: 2
	int32_t	TechnologyLevel_51_D872A3D2445F3382BE6F6488F91B7BAE;		//Offset: 336	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	TechnologyCost_52_21D301484F60E0B8C180C3BCA4840DCB;		//Offset: 340	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	TechnologyPoints_83_A82F4FDE4951B13629B3CCB61D7D1DD9;		//Offset: 344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SkillPoints_85_9689952C4F846117A5DBA79FE3D5A139;		//Offset: 348	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MaterialType>	MaterialType_88_72924F094287C1B3C644B8B2153982CB;		//Offset: 352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	SoundsOcclusion_98_21016EF743C4AC8AB3B766BC0B9347BF;		//Offset: 353	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	CameraCollision_100_3743CB4C4D8F5AD7498093A0B524E51D;		//Offset: 354	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DecorationSlot.ST_DecorationSlot
// Size 153
/////////////////////////////////////////////
struct FST_DecorationSlot {
	struct FText	Name_2_6F7DC7CA4FE3CAB73CF24191C3E59D46;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TAssetPtr<class UTexture2D>	Icon_27_7A0657D54A21C0F0D49D43BB1E749E80;		//Offset: 24	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FTransform	Transform_23_2F976F9C4267ACA3183CD0AC42B3FF3F;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	int32_t	DefaultIndex_26_DF4C6B514B6DA3D6DCA47EBA11DC54FE;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 116	Size: 4
	TArray<struct FDataTableRowHandle>	Furnitures_22_68CCAC5A4845EEDC3734F78BEE91B19D;		//Offset: 120	Size: 16	Flags: Edit, BlueprintVisible
	TArray<TEnumAsByte<E_DecorationCategories>>	Categories_35_C987BD254873DA5967C5718DBA86AE4B;		//Offset: 136	Size: 16	Flags: Edit, BlueprintVisible
	TEnumAsByte<E_DecorationSlotType>	Type_30_47109DC542A70D909EFEC4AA4F12CA67;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_GateList.ST_GateList
// Size 24
/////////////////////////////////////////////
struct FST_GateList {
	TEnumAsByte<E_Ownership>	Ownership_14_99DA961248E04F8682B44AB5E8C05CA5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterGate_C*>	ListOfGates_18_9F52855D41B0A66F620750B76CF003EE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SplineStructureList.ST_SplineStructureList
// Size 24
/////////////////////////////////////////////
struct FST_SplineStructureList {
	TEnumAsByte<E_Ownership>	Ownership_14_99DA961248E04F8682B44AB5E8C05CA5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterSplineStructure_C*>	ListOfFences_13_9F52855D41B0A66F620750B76CF003EE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Skills.ST_Skills
// Size 128
/////////////////////////////////////////////
struct FST_Skills {
	TEnumAsByte<E_Skills>	SkillType_28_8B7793DE4A6334DE80056CB456DB1137;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TAssetPtr<class UTexture2D>	Icon_32_66080C2A4E15D66F84D68AB8B101A3EE;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FText	Name_4_99B5D5284D3A2B37F5FB43B938D72657;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_11_A4B109C146E261C2EB0669853227F2A3;		//Offset: 72	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	ActualLevel_8_B37F32B14080A27F438B67AC422C6B73;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	ActualProgress_29_0CAA163D49FB43022CBDD984CDA2FABE;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<float>	ProgressNeededToLevel_31_77505F8945FC4FB5774F9191E64AAFEB;		//Offset: 104	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	MaxLevel_22_5008B9AE4C69F21674EA948A576437F1;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	SkillPointsToSpend_25_79AF26B04AAE1EB82BBA20A28CFC67E3;		//Offset: 124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_DeliverFood.ST_Challenge_DeliverFood
// Size 40
/////////////////////////////////////////////
struct FST_Challenge_DeliverFood {
	TArray<float>	MaxRequiredFoodValue_4_F37B6A0741B67B2DA434DAB9119ED299;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<float>	MinRequiredFoodValue_6_2B10A6124D0191E9C99D7EA30E8319DD;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	float	NeededFoodValue_10_201891904D16F794865A84BD8EE16367;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	DeliveredFoodValue_13_88FF5E5640146CBE81D4968F3A96AEE2;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_SendPeople.ST_Challenge_SendPeople
// Size 40
/////////////////////////////////////////////
struct FST_Challenge_SendPeople {
	TArray<int32_t>	MaxNeededPeople_8_2A69E084429D992E40C188A28238AFB4;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	MinNeededPeople_9_4DEDAE6E44F5BFADAA0BBCBC2A6ED78C;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	NeededPeople_11_FAB5FA704E53CD8EDD3FDDA00A5057B6;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	SentPeople_14_3443478B48494C0BA72F6A84371836E9;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_DeliverItems.ST_Challenge_DeliverItems
// Size 16
/////////////////////////////////////////////
struct FST_Challenge_DeliverItems {
	TArray<struct FST_Challenge_ItemForDeliver>	Items_13_1FC63C5141565C6DFA4B1F8EFECED4BA;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_DeliverItems_Generic.ST_Challenge_DeliverItems_Generic
// Size 56
/////////////////////////////////////////////
struct FST_Challenge_DeliverItems_Generic {
	TEnumAsByte<E_ItemSubCategories>	ItemsType_2_9A134C734355723C650C84BF81142A6E;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<int32_t>	MaxQuantity_9_37521D7B4D80CA144153AABB9969F6D2;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	MinQuantity_10_5037BFEC4E49571E42F1EAA035D3B707;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Challenge_ItemForDeliver_Generic>	Items_14_0D61884849FFB749E93F37B7AA67D3F0;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_MasterType.ST_Challenge_MasterType
// Size 160
/////////////////////////////////////////////
struct FST_Challenge_MasterType {
	TEnumAsByte<E_Challenge_Type>	ChallengeType_2_4065E07843552756FBA342B0847675C8;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	struct FST_Challenge_DeliverFood	FoodType_9_23BFB1EA40484D53FA9547940A883EC2;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Challenge_SendPeople	PeopleType_10_D8922A7747D03608549367BB9573DE8A;		//Offset: 48	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Challenge_DeliverItems	DeliverType_11_A172FB6D45E106EEA97E649CA16E1535;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Challenge_DeliverItems_Generic	DeliverGenericType_14_A2F9B740464C80B338426AA37DE70424;		//Offset: 104	Size: 56	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_Reward.ST_Challenge_Reward
// Size 4
/////////////////////////////////////////////
struct FST_Challenge_Reward {
	int32_t	DevelopmentForEach_3_6EE6513B4A445CF63DF6858CFBD7EDE5;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challange.ST_Challange
// Size 261
/////////////////////////////////////////////
struct FST_Challange {
	struct FText	Name_6_F44998A346B5C7770CE0C8B28EB005A2;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	Description_8_CC4C1A0A47DF662149D943B27E6270A2;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	MaxDuration_54_F4A042C847D277D4B42EFF8159839957;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 52	Size: 4
	struct FST_Challenge_MasterType	TaskType_53_960CB61542A52EFBDF8407B29DAA7194;		//Offset: 56	Size: 160	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_Challenge_Reward	Reward_58_FC34065545A3B681A81856BFC7D9517D;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 220	Size: 4
	TArray<struct FST_Challenge_Punishment>	Punishment_60_1ADBF49349697F18A61328841F469AB7;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible
	bool	CheckEverySeason_36_1F5685234B3CF4DF7DDA998075CF568F;		//Offset: 240	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_2[7];		//Offset: 241	Size: 7
	class UTexture2D*	Icon_39_BA7F728F4A22F6E2C18E32A07885F495;		//Offset: 248	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	SeasonsPassed_57_EC0180A2440BE8E90ED541BC3DE2A4CD;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_QuestState>	State_47_102020B0471B15D55BFEA69EA61FE5CF;		//Offset: 260	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_Punishment.ST_Challenge_Punishment
// Size 12
/////////////////////////////////////////////
struct FST_Challenge_Punishment {
	TEnumAsByte<E_Challenge_PunishmentType>	PunishmentType_2_32667E13430AE37E925985B4F0963D77;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	int32_t	Base_6_014AB55B4A4BDF20579D148D0E042CF9;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	ForEach_9_A7CB87434120367956CD488A4D3B7B5B;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_ItemForDeliver_Generic.ST_Challenge_ItemForDeliver_Generic
// Size 24
/////////////////////////////////////////////
struct FST_Challenge_ItemForDeliver_Generic {
	struct FDataTableRowHandle	Item_9_40A9D57F4AEB903157B2AAAC320A1C2C;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	QuantityToDeliver_14_98E22ADB45D9CD397380B8A9F8782A71;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	QuantityDelivered_17_4B869EC94476594666B1BC93B21E4568;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Challenge_ItemForDeliver.ST_Challenge_ItemForDeliver
// Size 56
/////////////////////////////////////////////
struct FST_Challenge_ItemForDeliver {
	struct FDataTableRowHandle	Item_9_40A9D57F4AEB903157B2AAAC320A1C2C;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	TArray<int32_t>	MaxQuantity_10_10169AAB4F2128320B4C36BE6815F7E5;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
	TArray<int32_t>	MinQuantity_11_0BF523D94681B55D21092DB2F5B6D591;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	QuantityToDeliver_14_98E22ADB45D9CD397380B8A9F8782A71;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	QuantityDelivered_17_3AC011AF42480A30761DC9A5F655A1B1;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Season.ST_Season
// Size 40
/////////////////////////////////////////////
struct FST_Season {
	struct FText	SeasonName_10_30E447214CC7CB24A29DCAA8C4F2095F;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	TArray<struct FST_DayPreset>	DayPresets_29_E3FB9A6E4BF01F8A224C239432F35F34;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DayPreset.ST_DayPreset
// Size 40
/////////////////////////////////////////////
struct FST_DayPreset {
	int32_t	Probability_6_64B6E69A413DCA4FF666A983E0344197;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	class UCurveVector*	CloudDensity_11_B8BA982143CEDB57993E17BEE89241DE;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveVector*	FogDensity_14_F04211234D1B0395713BD4962420F6B5;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat*	Wind_9_6527C6BB4A47F9245B420D99FEEF1CE6;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat*	WindDirection_17_8266F19B40E049575DA28DB061A0592F;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AffectionDialogueResponse.ST_AffectionDialogueResponse
// Size 32
/////////////////////////////////////////////
struct FST_AffectionDialogueResponse {
	struct FText	Text_2_ED940DDC49736BF7DD2832BAB326B03F;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	int32_t	AffectionPoints_5_49EB2D8545DE22EC0C5182A57D572B9D;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DynastyReputationPoints_13_58653A944DCFD4DCC8200EB4557979A0;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ToddlerGift.ST_ToddlerGift
// Size 64
/////////////////////////////////////////////
struct FST_ToddlerGift {
	struct FST_AffectionDialogueResponse	MaleToddlerResponse_24_086D631444BF6C59DE545691EDD531C3;		//Offset: 0	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_AffectionDialogueResponse	FemaleToddlerResponse_25_B06E261943BDB8C5C5475CB34E60DC48;		//Offset: 32	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Gift.ST_Gift
// Size 168
/////////////////////////////////////////////
struct FST_Gift {
	int32_t	AffectionRequired_10_6DFBA48A4DABC1CD143505AC1C1AA65C;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TMap<TEnumAsByte<E_NPCPersonality>, struct FST_AffectionDialogueResponse>	Responses_13_086D631444BF6C59DE545691EDD531C3;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_NPCPersonality>, struct FST_WifeGifts>	WifeResponses_20_A4DBD63B45B7A939BB93CEB98A91DC81;		//Offset: 88	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_WifeGifts.ST_WifeGifts
// Size 72
/////////////////////////////////////////////
struct FST_WifeGifts {
	struct FText	TierDialogue_2_4E4A3ECC42BE753CD5843D8C70B1EA81;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	LowAffectionDialogue_4_9840EED64CACCCFB01E99F88625F0D03;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible
	struct FText	VeryLowAffectionDialogue_6_896DE3144453D206B96E97BA325B294B;		//Offset: 48	Size: 24	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_BridgeList.ST_BridgeList
// Size 24
/////////////////////////////////////////////
struct FST_BridgeList {
	TEnumAsByte<E_Ownership>	Ownership_14_99DA961248E04F8682B44AB5E8C05CA5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterBridge_C*>	ListOfBridges_16_9F52855D41B0A66F620750B76CF003EE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_RoadList.ST_RoadList
// Size 24
/////////////////////////////////////////////
struct FST_RoadList {
	TEnumAsByte<E_Ownership>	Ownership_14_99DA961248E04F8682B44AB5E8C05CA5;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	TArray<class ABP_MasterRoadSpline_C*>	ListOfRoads_16_9F52855D41B0A66F620750B76CF003EE;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DecorationPreset.ST_DecorationPreset
// Size 32
/////////////////////////////////////////////
struct FST_DecorationPreset {
	struct FString	ModuleName_7_0E067B7E40FAD1BBB4FE2B85018C741C;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	TArray<int32_t>	SlotsDefaultID_3_B52ED1EF4E03F874A90E87BB6B1ACE39;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Event_AnimalMultipliers.ST_Event_AnimalMultipliers
// Size 20
/////////////////////////////////////////////
struct FST_Event_AnimalMultipliers {
	float	WaterDecrease_23_AB8D09F64FE3F9BA091252968F854EC2;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	FoodDecrease_24_03602AA3438254F71828D3BE35709684;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	WorkingSpeed_26_ACDA6A93409D019C6CD96A92B55F913D;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	FoodValue_27_95EF3778409B555B3D318F9C0EA851DD;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Mood_30_D388C9E24A8646C989FF3EB7A8BEB2C1;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_InteractionMontages.ST_InteractionMontages
// Size 16
/////////////////////////////////////////////
struct FST_InteractionMontages {
	class UAnimMontage*	InteractAnimationMontageLife_3_48B421704E510EBAA9FF0B88F125447D;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage*	InteractAnimationMontageDead_5_DF05FD9F424A139411BFD391A1DA997F;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CauserTimer.ST_CauserTimer
// Size 12
/////////////////////////////////////////////
struct FST_CauserTimer {
	struct FName	ToolTag_8_1DB543384211C80CF05A388657A39E7F;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	RememberCounter_6_E92B97504269B1AE41F905841C184643;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_InteractSlot.ST_InteractSlot
// Size 101
/////////////////////////////////////////////
struct FST_InteractSlot {
	struct FTransform	Transform_21_BCC8CEF34C06A0DD010E1184B6E935F3;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	FinalTransform_29_36DF52D949D8E39F1904EF8594B0DFD8;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	bool	Occupied_6_0C02C1EF44BC9AB47997EFB39DACBF1C;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	WantToOccupy_15_4B8D833546FDA460A893AAAC19A77F05;		//Offset: 97	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Available_24_C9C267FA4F95A24B87E41D89C47EA041;		//Offset: 98	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	HasTable_31_D64E9AFF4DAF7CD5F043A0A56866268A;		//Offset: 99	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	TEnumAsByte<E_FurnitureSlotType>	SlotPosition_25_FD970B12437086ABB108DFAF7083A6C7;		//Offset: 100	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_InteractSlotSettings.ST_InteractSlotSettings
// Size 99
/////////////////////////////////////////////
struct FST_InteractSlotSettings {
	struct FTransform	Transform_25_5ABCFB38471545982853C3AD0548CF52;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	FinalTransform_31_B8E5D0394E788A4E01344CBEDCA2628E;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	TEnumAsByte<E_FurnitureSlotType>	SlotType_28_FD970B12437086ABB108DFAF7083A6C7;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Available_27_EC1C3B7B409B8D9F14E5AD87972F1BA6;		//Offset: 97	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	HasTable_33_0E7171544BBBFE46CF56488D213FDE03;		//Offset: 98	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_HeatingSource.ST_HeatingSource
// Size 48
/////////////////////////////////////////////
struct FST_HeatingSource {
	struct FVector	HeatingSourceLocation_8_FD48F68348E78E3747945BBB4C27003C;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Priority_31_520D85E84A58C73E70B27B9B6F711058;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Interior_28_43F524BD4AC450C5C5739E946540A7D7;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	float	Temperature_6_1E13C8334D805260EC7CF6BAB26F1E52;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	LevelOfWarming_22_39A6FF7F41E7CD03D42A119C0ED8F7E8;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	HeatingRange_18_E32FDF3D43A027D24F865887BD7594C0;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxTemperatureHeatingRange_17_4B8A543746CD0618C9ADBC9F5F764FA0;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	DistanceIntensity_34_9DA30AD14799140E3D9958BB8C5DB41A;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DamageFromHeat_33_4DF65F904321B937213C1E915BA09F5D;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_1[3];		//Offset: 41	Size: 3
	float	RealDistance_37_B91E265D41D84B8473698D826EC4E6C0;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MeshDynamicMaterials.ST_MeshDynamicMaterials
// Size 24
/////////////////////////////////////////////
struct FST_MeshDynamicMaterials {
	class UMeshComponent*	Mesh_8_231EFF4840480E046CDEF9A04FBE7A7A;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TArray<class UMaterialInstanceDynamic*>	DynamicMaterialReferences_6_623F5BBE41A8EC2DF1A5B98E97B488E9;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DialogueSounds.ST_DialogueSounds
// Size 240
/////////////////////////////////////////////
struct FST_DialogueSounds {
	TEnumAsByte<E_CharacterType>	Age_20_DA97974C45717B594948E2A79CE0C4BB;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Sex>	Sex_19_4DFEF91F400A3D7DED5BD4AF626CBE72;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	CustomVoice_43_905BAC9F4429141507DE9BB95F99B31C;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[5];		//Offset: 3	Size: 5
	TAssetPtr<class USoundCue>	Greetings_44_11323B934C49F7880CE743996FF09E5A;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	NumberOfSoundsGreet_39_3593F4854E192B9E9681F587063E181B;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[4];		//Offset: 52	Size: 4
	TAssetPtr<class USoundCue>	FirstTimeGreet_45_EE39E1044CE137BF0A729189C0B5D249;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	NumberOfSoundsFirstGreet_38_E66EB0B2471D9AEF76C3C7B56AC89589;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_2[4];		//Offset: 100	Size: 4
	TAssetPtr<class USoundCue>	Goodbyes_47_35A91526498407E7E06ACB9ED077FFCD;		//Offset: 104	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	NumberOfSoundsGoodbyes_37_D9E39ADA406E37B6B82D688431DA83B5;		//Offset: 144	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_3[4];		//Offset: 148	Size: 4
	TAssetPtr<class USoundCue>	Vendor_48_E353615F4269127A72EA1EB5B3D34FD3;		//Offset: 152	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	int32_t	NumberOfSoundsVendor_41_79A280AE47568A37C4758F8243E5D55E;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_4[4];		//Offset: 196	Size: 4
	TAssetPtr<class USoundCue>	PushOrSnowball_52_075229034181C1C3261AF48F7B20C233;		//Offset: 200	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Field.ST_Field
// Size 40
/////////////////////////////////////////////
struct FST_Field {
	TAssetPtr<class UClass>	Field_3_FD6A732F49808C1851F3C8A3B5F8F99F;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_PivotParams.ST_PivotParams
// Size 20
/////////////////////////////////////////////
struct FST_PivotParams {
	float	PivotDirection_2_D0B08A3841F9147BF17755A92FB9D963;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MovementDirection>	CompletedMovementDirection_5_E9CF2F76467FBF2447947489B0CCDD02;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	float	CompletedStartTime_10_B9658B89488368F6D03F348EA43ACA05;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MovementDirection>	InterruptedMovementDirection_7_C9A29DEE4CF4408432239D89BCDBCC45;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_1[3];		//Offset: 13	Size: 3
	float	InterruptedStartTime_12_6E0218BD417EFD34E55C18AEF9C0D986;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CameraSettings.ST_CameraSettings
// Size 20
/////////////////////////////////////////////
struct FST_CameraSettings {
	float	TargetArmLength_2_15CBCC974FD1D620DD9742A6D8E08D5E;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	CameraLagSpeed_8_4DE53BDA4FBB7E6F33437D98CB856D74;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	SocketOffset_7_B87216B04AB32E02ADFCE4940FA03971;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CameraSettings_Gait.ST_CameraSettings_Gait
// Size 60
/////////////////////////////////////////////
struct FST_CameraSettings_Gait {
	struct FST_CameraSettings	Walk_16_E2E706344DA5B87DDAA86D936B4E8976;		//Offset: 0	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Run_17_176BF7834C648E7BCEA23FBB7F3CB739;		//Offset: 20	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Sprint_18_2D13D8014BF6D9039E6EAF882DB4930B;		//Offset: 40	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CameraSettings_Stance.ST_CameraSettings_Stance
// Size 80
/////////////////////////////////////////////
struct FST_CameraSettings_Stance {
	struct FST_CameraSettings_Gait	Standing_10_E2E706344DA5B87DDAA86D936B4E8976;		//Offset: 0	Size: 60	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Crouching_12_176BF7834C648E7BCEA23FBB7F3CB739;		//Offset: 60	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Camera_Targets.ST_Camera_Targets
// Size 220
/////////////////////////////////////////////
struct FST_Camera_Targets {
	struct FST_CameraSettings_Stance	VelocityDirection_2_4C2C9BA845DEB56B3C8E9C84AB2605AD;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings_Stance	LookingDirection_5_578351964FC9A146BD935BA26C96EE5B;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Aiming_10_CC94CE9F4D0739C8EC139FB82D403EB5;		//Offset: 160	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Ragdoll_12_B66522BA4D172D6D2E16E5A146BCF938;		//Offset: 180	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings	Dialogue_15_C0971B7B43158E4BA86446B3E218CD78;		//Offset: 200	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemColors.ST_ItemColors
// Size 32
/////////////////////////////////////////////
struct FST_ItemColors {
	struct FDataTableRowHandle	Item_2_0CE83F9D4C33E50D9690D883408519DA;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	TArray<struct FST_ColorTable>	ItemDyes_11_D48054FA4200E15772A1A98991C594E1;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_OutfitsPresets.ST_OutfitsPresets
// Size 192
/////////////////////////////////////////////
struct FST_OutfitsPresets {
	struct FST_ItemColors	Neck_23_BC460B904E4C7A10AA47DBB853C50ACE;		//Offset: 0	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemColors	Hat_18_D310376F4693906FC3F497862C9092A6;		//Offset: 32	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemColors	Torso_19_431E37864073747CA163D9B91EC8F44A;		//Offset: 64	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemColors	Hands_20_764C0CC74F59888D51BEF1BC9BFAE7C1;		//Offset: 96	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemColors	Legs_21_4B9AD6D94A4BE601337F5D9656768619;		//Offset: 128	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_ItemColors	Feet_22_2BB60E284A021C6CB0C9D2B5AAD0B96C;		//Offset: 160	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ChromaAnimPaths.ST_ChromaAnimPaths
// Size 16
/////////////////////////////////////////////
struct FST_ChromaAnimPaths {
	struct FString	Path_2_E819D4034D9CB508F5C0B38131084AB1;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DrawingSpawners.ST_DrawingSpawners
// Size 12
/////////////////////////////////////////////
struct FST_DrawingSpawners {
	int32_t	Year_7_8458EF934E39C538E1F5A6AA27275C8D;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MinNumberPerSeason_5_CFC1EFE9443815E057135EAD6B733DF8;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxNumberPerSeason_3_D94908E74546FF2A2F443AA3660A558F;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DrawingSpawnersArray.ST_DrawingSpawnersArray
// Size 24
/////////////////////////////////////////////
struct FST_DrawingSpawnersArray {
	TArray<struct FST_DrawingSpawners>	Restrictions_3_DBDBBE33429EAA071E97909270A7A9C0;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
	int32_t	DeactivationTimeMin_7_FB95ED6B45E8591B1B199F9492084326;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	DeactivationTimeMax_9_287196B04BA644C0A8FE27A178B32B1C;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SpawnersArray.ST_SpawnersArray
// Size 16
/////////////////////////////////////////////
struct FST_SpawnersArray {
	TArray<class ABP_POI_Spawner_C*>	Spawners_5_7F1EC32249CF2697689DACB68572F5EB;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SpawnedResourceItem.ST_SpawnedResourceItem
// Size 40
/////////////////////////////////////////////
struct FST_SpawnedResourceItem {
	TAssetPtr<class UClass>	Actor_2_8875878F4C50143B2C4DCEBD8B3FCD8C;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SAVE_FoliageData.ST_SAVE_FoliageData
// Size 101
/////////////////////////////////////////////
struct FST_SAVE_FoliageData {
	struct FString	FoliageID_40_68CE4FD44EB6629B0D17E780CE499F61;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	int32_t	ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Reset_43_8B63A5B54D83B075414EF0ABA1556E15;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DAB_45_06CE65524E6F5F86653A12BDFEB66DFE;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MD_44_077EEC0F4CCAE5563EBD968BCA3C06CF;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[2];		//Offset: 26	Size: 2
	struct FVector	OT_L_103_FB15DF4E4A02CF6E495D5DA8811E2B64;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	OT_R_68_FE3B97114B2E690A225110815F43013E;		//Offset: 40	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FVector	OT_S_104_FFAEB8A94CCC904048E4C6B7B0C70369;		//Offset: 52	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector	CT_L_105_A22312C94F44FE87CA021E8A96B5FFCA;		//Offset: 64	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FRotator	CT_R_69_AF27E3ED47E7E004C1ECC19CF76232AD;		//Offset: 76	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FVector	CT_S_106_4FD1244348FE10F2CB511A839E54954A;		//Offset: 88	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	F_108_E1F69FB64FF89E4E54C16C849E88E45F;		//Offset: 100	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Foliage.ST_Foliage
// Size 118
/////////////////////////////////////////////
struct FST_Foliage {
	int32_t	ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[12];		//Offset: 4	Size: 12
	struct FTransform	OriginTransform_56_11D052A34893B671001558BBB56EB6FA;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	CurrentTransform_55_0559943F44C91BEAB2DFBDA894C18147;		//Offset: 64	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	int32_t	NumberOfSeasonToReset_54_8B63A5B54D83B075414EF0ABA1556E15;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DownAtBeginning_53_06CE65524E6F5F86653A12BDFEB66DFE;		//Offset: 116	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MovedDown_52_077EEC0F4CCAE5563EBD968BCA3C06CF;		//Offset: 117	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FoliageArray.ST_FoliageArray
// Size 16
/////////////////////////////////////////////
struct FST_FoliageArray {
	TArray<struct FST_Foliage>	Array_3_D49C15094E8C5C0E198E4180C4BD7B1A;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
};
/////////////////////////////////////////////
// UserDefinedStruct ST_FoliageData.ST_FoliageData
// Size 135
/////////////////////////////////////////////
struct FST_FoliageData {
	struct FString	FoliageID_40_68CE4FD44EB6629B0D17E780CE499F61;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	class UFoliageType*	FoliageType_23_16BE06A44A565BC6FE7DD4B660E8A01F;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	struct FTransform	OriginTransform_14_11D052A34893B671001558BBB56EB6FA;		//Offset: 32	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	CurrentTransform_15_0559943F44C91BEAB2DFBDA894C18147;		//Offset: 80	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	int32_t	NumberOfSeasonToReset_31_8B63A5B54D83B075414EF0ABA1556E15;		//Offset: 128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	DownAtBeginning_34_06CE65524E6F5F86653A12BDFEB66DFE;		//Offset: 132	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	MovedDown_36_077EEC0F4CCAE5563EBD968BCA3C06CF;		//Offset: 133	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool	Forever_42_EA32B8964966862B74629684414795CF;		//Offset: 134	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemGeneratorSettings.ST_ItemGeneratorSettings
// Size 36
/////////////////////////////////////////////
struct FST_ItemGeneratorSettings {
	struct FST_ItemResource	Item_2_304A479A4E98ED65BB47998B5E4FB640;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	float	MinCondition_8_A5D992394E45D46A8EA4A5976DF7799D;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxCondition_10_7DE7DB1D48C29FAC184FFAB880A56F99;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	Probability_5_459096464A389151BE2C44A0DF944F86;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemResourceCondition.ST_ItemResourceCondition
// Size 24
/////////////////////////////////////////////
struct FST_ItemResourceCondition {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	Count_5_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Condition_8_9AF4CE7D41102C0E9FB0868482FE857B;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemSourceCondition.ST_ItemSourceCondition
// Size 28
/////////////////////////////////////////////
struct FST_ItemSourceCondition {
	struct FDataTableRowHandle	Item_2_362EB490464C23AB625CFC9BC607CAE7;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	int32_t	MinResourceCount_9_9C54216D420D6D02D21580A8369F52E2;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxResourceCount_10_CE5E6F724498D71864AE598360735AF0;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Condition_13_46FD9A8345B6C883B19B0CAC9D1723B5;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ToolTransforms.ST_ToolTransforms
// Size 432
/////////////////////////////////////////////
struct FST_ToolTransforms {
	struct FTransform	Toddler_11_A31C8C5E41BE90B8396AF5A347D4FDAF;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	Kid_12_775F2721448DF000E590C68EEDA475A0;		//Offset: 48	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	TeenagerM_16_341351A34AD04C3A9498BC874052A1FA;		//Offset: 96	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	TeenagerF_14_CE12ADF6424969A62E46CFA29E2275E3;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	MatureM_19_21E9621A48C1E1B250F0B4B7E040B540;		//Offset: 192	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	MatureF_17_508F64D24DAF9074DB8E23A94BB28C24;		//Offset: 240	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	OldM_23_402388C94A871357CD4985B2288C362B;		//Offset: 288	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	OldF_22_035DC52A4D7D9F1F0D5AAF8CE17F1748;		//Offset: 336	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	struct FTransform	Player_25_8EE7D0B84B52204CDF94FB8C61C114D5;		//Offset: 384	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CombinedToolTransforms.ST_CombinedToolTransforms
// Size 864
/////////////////////////////////////////////
struct FST_CombinedToolTransforms {
	struct FST_ToolTransforms	ToolTransforms_5_4E45608A4E790BBC3520B5B8D7B8D492;		//Offset: 0	Size: 432	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_ToolTransforms	FlippedToolTransforms_6_DABE84524CCE2BAF7D9637A9D72DAA74;		//Offset: 432	Size: 432	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_MontagesSettingsEnum.ST_MontagesSettingsEnum
// Size 80
/////////////////////////////////////////////
struct FST_MontagesSettingsEnum {
	TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	MontageSettings_6_1F75A2A448A2CA5D5FE0879F4F7F4572;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_DialoguesUsedDialogueLines.ST_DialoguesUsedDialogueLines
// Size 88
/////////////////////////////////////////////
struct FST_DialoguesUsedDialogueLines {
	class UDialogue*	DialogueReference_4_15E6E1304003CF2F1ED1C39896F06447;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TMap<int32_t, struct FST_LineState>	LinesStates_11_CC7CFB4F4CE96AE80D985EB510E1535C;		//Offset: 8	Size: 80	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_LineState.ST_LineState
// Size 32
/////////////////////////////////////////////
struct FST_LineState {
	bool	LineState_4_3C1D226B4D63AE9BF8AC8E84A6B2C610;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	unsigned char uknownData_0[7];		//Offset: 1	Size: 7
	struct FText	LineText_3_3DC9966D4D3F1C4397F92392AD390B96;		//Offset: 8	Size: 24	Flags: Edit, BlueprintVisible
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AquaticInteractionData.ST_AquaticInteractionData
// Size 40
/////////////////////////////////////////////
struct FST_AquaticInteractionData {
	float	Force_10_2F4FD72F49BCBB81FA9729A268993C4D;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Torque_26_BFFA81594F81A9D829E82083436A0590;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	RandomOffset_35_2B37AF5E4D20E2DF8559718620844133;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Radius_12_E1550A634ADBB4EA56E2B1AE4AEDF60B;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Importance_14_B5BEDFB9418E67A384EBA79581DA1AA7;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxForce_34_6499E59046192D125441009588B75BF6;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	MaxDistance_29_6BEF08A8488CE3949B1C5C8AEB936920;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	SplashEmiter_53_9482201B42685C048A4C0D9D95A8BD4D;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SplashOffsetZ_44_5B2896334632B17A889BCC8B2D45A465;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	SplashEmiterScale_68_B58ED4F243C46D959CA73D81C8FC7485;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CharacterSettings.ST_CharacterSettings
// Size 16
/////////////////////////////////////////////
struct FST_CharacterSettings {
	struct FLinearColor	SkinTone_2_081EB7134FD133964E53919F46FA8137;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AttachRiver.ST_AttachRiver
// Size 12
/////////////////////////////////////////////
struct FST_AttachRiver {
	class ABP_FlowmapRiverSystem_C*	RiverToAttachTo_2_C382435048719A7D80BF9288E4A7D726;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	AttachmentIndex_6_F8A286C74B6A9E65EB3228B6DA6BCACF;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_RoadsArray.ST_RoadsArray
// Size 16
/////////////////////////////////////////////
struct FST_RoadsArray {
	TArray<class ABP_StaticRoadSpline_C*>	Roads_3_813862DD466D1B2DB9ED8BA322AE61C2;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_AdjacentSectors.ST_AdjacentSectors
// Size 64
/////////////////////////////////////////////
struct FST_AdjacentSectors {
	TArray<class ABP_StaticRoadSpline_C*>	UpperLeft_5_99D98F58402EF0F52565FEBDE0D1AF89;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_StaticRoadSpline_C*>	UpperRight_9_76041F7D4603B8F4B0FB598A4F839A75;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_StaticRoadSpline_C*>	LowerLeft_10_6E84EF2A45471F395B7B36A907E6EEBC;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_StaticRoadSpline_C*>	LowerRight_11_B366F3224255ADE3CB9DC79F2C720985;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SignPlateSettings.ST_SignPlateSettings
// Size 12
/////////////////////////////////////////////
struct FST_SignPlateSettings {
	TEnumAsByte<E_SignName>	Name_15_5388D45C4AF731095324E99756ACE46D;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SignPlateNewVariants>	MeshType_19_3DA248434A708E255DF7E58F11CAAFEF;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char uknownData_0[2];		//Offset: 2	Size: 2
	float	RotationZ_11_23E1F6DC4A1B4D5E77CE3BB1334F0B4E;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	PositionZ_13_D13DA9B14EDC19315494709A3961E2A2;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_Audio.ST_Audio
// Size 12
/////////////////////////////////////////////
struct FST_Audio {
	class USoundCue*	Sound_6_380709FD43F20E23D7316FB722C3D5B1;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Volume_4_640EEC5F40CAE44748BD34B0ADFEAEFF;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ItemProductionSettings.ST_ItemProductionSettings
// Size 32
/////////////////////////////////////////////
struct FST_ItemProductionSettings {
	struct FDataTableRowHandle	Item_2_C764FBBB4E1A91260A3F869DDBEB9A6D;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	float	ProductionSpeed_5_B460BD3646368F1C9155D4A4A11B7C0A;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float	Progress_12_D9FEBB0946CB82DC49AD6E8892AA6B54;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	CurrentCount_15_5A7787B743DDE19F91D0C88FFED4CBB9;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t	MaxCount_9_8E26C2864D13CEB39AA8D28979759DB6;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_TurnAnims.ST_TurnAnims
// Size 16
/////////////////////////////////////////////
struct FST_TurnAnims {
	class UAnimMontage*	Turn_L_Anim_2_983C7A52403A1B48BAEA18970749A107;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage*	Turn_R_Anim_4_7EC252344532506C7E1C019B7FA474B1;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_CraftingMontages.ST_CraftingMontages
// Size 80
/////////////////////////////////////////////
struct FST_CraftingMontages {
	TAssetPtr<class UAnimMontage>	Normal_8_B1B627144E85B73329ABA3BC2FE5A418;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class UAnimMontage>	Fast_9_AEDC26774D63F5CD3A63C1AC1184813A;		//Offset: 40	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
};
/////////////////////////////////////////////
// UserDefinedStruct ST_SittingAnimSettings.ST_SittingAnimSettings
// Size 125
/////////////////////////////////////////////
struct FST_SittingAnimSettings {
	TAssetPtr<class UAnimMontage>	SittingMontage_12_55B71A5A442391B0403F4D8476611454;		//Offset: 0	Size: 40	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	TAssetPtr<class FNone_622>	SittingType_6_AC0286FD4391DA35E0239C80C5043339;		//Offset: 40	Size: 80	Flags: Edit, BlueprintVisible
	float	ChanceToPlay_11_B618DCC940DB0B035F963485B0FAA92A;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	bool	Looping_14_F0E717C2466169A78A293DBF7A58C8ED;		//Offset: 124	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
};
/////////////////////////////////////////////
// UserDefinedStruct ST_ArrayOfMontages.ST_ArrayOfMontages
// Size 16
/////////////////////////////////////////////
struct FST_ArrayOfMontages {
	TArray<class UAnimMontage*>	Montages_3_26498F464FCAE0AC3168B484E0EA8DA0;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible
};
};
